/*
 * $LastChangedRevision: 1603 $
 * $LastChangedDate:: 2019-01-21 19:02:13 +0100#$
 *
 * This file is part of X2C. http://x2c.lcm.at/
 *
 * Copyright (c) 2016, Linz Center of Mechatronics GmbH (LCM) http://www.lcm.at/
 * All rights reserved.
 */
/*
 * This file is licensed according to the BSD 3-clause license as follows:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the "Linz Center of Mechatronics GmbH" and "LCM" nor
 *       the names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL "Linz Center of Mechatronics GmbH" BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
//#include "main.h"
//#include "Target.h"
#include "Hardware.h"

//extern UART_HandleTypeDef hlpuart1;
//extern UART_HandleTypeDef huart1;

/* private prototypes */
static void sendSerial(tSerial* serial, uint8 data);
static uint8 receiveSerial(tSerial* serial);
static uint8 isReceiveDataAvailable(tSerial* serial);
static uint8 isSendReady(tSerial* serial);


// define which uart handler to be used
// VCP ST-LINK
#define pX2CHUART hlpuart1
// dalsi UART (485)
//#define pX2CHUART huart1
#define X2CUART LPUART1

/**
 * @brief Initialization of serial interface.
 */
void initSerial(tSerial* serial)
{
	//__HAL_UART_ENABLE(&pX2CHUART);
	LL_USART_Enable(X2CUART);

	serial->send = (void (*)(tInterface*, uint8))sendSerial;
	serial->receive = (uint8 (*)(tInterface*))receiveSerial;
	serial->isReceiveDataAvailable = (uint8 (*)(tInterface*))isReceiveDataAvailable;
	serial->isSendReady = (uint8 (*)(tInterface*))isSendReady;
}


/**
 * @brief Routine to send data over serial interface.
 * 
 * @param serial Serial interface object.
 * @param data Data byte to send.
 */
static void sendSerial(tSerial* serial, uint8 data)
{
  //LL_LPUART_TransmitData8(LPUART1, data);
	//pX2CHUART.Instance->TDR = data;
	X2CUART->TDR = data;
}


/**
 * @brief Routine to fetch data from the serial interface.
 * 
 * @param serial Serial interface object.
 * @return Received data byte.
 */
static uint8 receiveSerial(tSerial* serial)
{
	//uint8 data;
	// return LL_LPUART_ReceiveData8(X2CUART);
	//return (uint8_t)(pX2CHUART.Instance->RDR & 0xFFU);
	return (uint8_t)(X2CUART->RDR & 0xFFU);
}


/**
 * @brief Routine to check if data from the serial interface is available.
 * 
 * @param serial Serial interface object.
 * @return 1 when data is available, 0 otherwise.
 */
static uint8 isReceiveDataAvailable(tSerial* serial)
{
	//return ((pX2CHUART.Instance->ISR & USART_ISR_RXNE_RXFNE) ? 1UL : 0UL);
	return ((X2CUART->ISR & USART_ISR_RXNE_RXFNE) ? 1UL : 0UL);
}


/**
 * @brief Routine to check if data can be send over the serial interface.
 *  
 * @param serial Serial interface object.
 * @return 1 when data can be send, 0 otherwise.
 */
static uint8 isSendReady(tSerial* serial)
{
	//return ((pX2CHUART.Instance->ISR & USART_ISR_TXE_TXFNF) ? 1UL : 0UL);
	return ((X2CUART->ISR & USART_ISR_TXE_TXFNF) ? 1UL : 0UL);
}

