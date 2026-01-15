/*
 * ad2s1200_spi.h
 *
 *  Created on: Feb 7, 2024
 *      Author: knobloch
 *
 *
 *      ***********************************************************
 *      This file serves for handling the AD2S1200 chip with SPI on STM32
 *		It uses SPI LL driver from STM32Cube
 *      Max clock frequency for AD2S1200: fclk_max = 25 MHz
 *
 *      STM32CubeMX Configuration of SPI:
 *      Mode: Receive only Master
 *      Hardware NSS: NSS output enable
 *
 *      Frame format: Motorola
 *      Data size: 16 bit
 *      First bit: MSB
 *
 *      Baud rate: 21.25 MBit/s
 *      Clock polarity: Low
 *      Clock phase: 1 Edge
 *      CRC: Disabled
 *      NSSP: Enabled
 *      NSS signal type: Output hardware
 *
 */

#ifndef AD2S1200_SPI_H_
#define AD2S1200_SPI_H_

#include "main.h"

/*
 * Define the PCB motherboard version!
 */
#define STAND_MB_PCB_REV	2022
//#define STAND_MB_PCB_REV	2024

typedef struct{
	int16_t Position;
	union{
		uint16_t VelStat;
		struct{
			uint16_t PAR:1;		// Parity
			uint16_t LOT:1;		// Lost of Tracking		: 0 = error
			uint16_t DOS:1;		// Degradation of Signal: 0 = error
			uint16_t RDVEL:1;	// Read Velocity: 0 = read velocity
			int16_t Velocity:12;
		};
	};
}AD2S1200_Data_t;

/*
 * The struct for Data.
 * You can use this in your application.
 */
extern AD2S1200_Data_t AD2S1200_Data;

/*
 * Define the SPI interface
 */
#define AD2S1200_SPI			SPI1

/*
 * Pin used for sample position in ad2s1200.
 * Falling edge is the trigger.
 * This is pin SPI1_MOSI
 */
#define AD2S1200_NSAMPLE_PORT	GPIOB
#define AD2S1200_NSAMPLE_PIN	LL_GPIO_PIN_5


/*
 * Pins NRD : /READ
 * and NCS = NSS : /CHIP/SLAVE SELECT
 * are may be connected together with solder jumper JP7
 *
 * Normally connected to SPI_NSS hardware slave select pin
 */
#define AD2S1200_NSS_PORT		GPIOA
#define AD2S1200_NSS_PIN		GPIO_PIN_15

/*
 * RDVEL : Read velocity
 * HI = read position register
 * LO = read velocity register
 */
#define AD2S1200_RDVEL_PORT		GPIOB

#if STAND_MB_PCB_REV == 2022
#define AD2S1200_RDVEL_PIN		LL_GPIO_PIN_14
#elif STAND_MB_PCB_REV == 2024
#define AD2S1200_RDVEL_PIN		GPIO_PIN_15
#endif

/*
 *
 */
static inline void AD2S1200_SetReadPosition(void){
	AD2S1200_RDVEL_PORT->BSRR = AD2S1200_RDVEL_PIN;
}
static inline void AD2S1200_SetReadVelocity(void){
	AD2S1200_RDVEL_PORT->BRR = AD2S1200_RDVEL_PIN;
}
static inline uint8_t AD2S1200_IsReadPosition(void){
	if(AD2S1200_RDVEL_PORT->ODR & AD2S1200_RDVEL_PIN)
		return 1;
	else
		return 0;
}



/*
 * AD2S1200_SampleStart:
 *  - turns the NSAMPLE pin to low
 *  - Set the RDVEL pin to HI
 *
 *  Call it at the moment, when you need to capture the position!
 *
 */
static inline void AD2S1200_SampleStart(void){
	AD2S1200_NSAMPLE_PORT->BRR = AD2S1200_NSAMPLE_PIN;
	AD2S1200_SetReadPosition();
}

/*
 * AD2S1200_SampleStop:
 * 	- Perform enable SPI and then disable it for tranfering data only once.
 * 	- turns the NSAMPLE pin to high
 *
 * 	Call it at least 753 ns after AD2S1200_SampleStart.
 */
static inline void AD2S1200_SampleStop(void){
	LL_SPI_Enable(AD2S1200_SPI);
	AD2S1200_NSAMPLE_PORT->BSRR = AD2S1200_NSAMPLE_PIN;
	LL_SPI_Disable(AD2S1200_SPI);
}



/*
 * AD2S1200_SPIInit: Initialize SPI for AD2S1200
 */
static inline void AD2S1200_SPIInit(void){
	/*
	 * Enable Interrupt at least
	 */
	LL_SPI_EnableIT_RXNE(AD2S1200_SPI);
}


/*
 * AD2S1200_SPIInit: Initialize SPI for AD2S1200
 */
static inline void AD2S1200_SPI_RXNE_ISR(void){
	if(AD2S1200_IsReadPosition()){
		AD2S1200_SetReadVelocity();
		AD2S1200_Data.Position = (uint16_t) AD2S1200_SPI->DR;
		LL_SPI_Enable(AD2S1200_SPI);
		__NOP();
		LL_SPI_Disable(AD2S1200_SPI);
	}
	else{

		AD2S1200_Data.VelStat = (uint16_t) AD2S1200_SPI->DR;
	}

}


#endif /* AD2S1200_SPI_H_ */
