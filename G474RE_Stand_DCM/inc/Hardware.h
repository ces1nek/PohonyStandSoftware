/**
 * @file
 * @brief Hardware configuration.
 */
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
#ifndef HARDWARE_H
#define HARDWARE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#include "SerialGeneric.h"

/* public prototypes */
//void initHardware(void);
//void initClock(void);
void initSerial(tSerial* serialSTM32F0);
//void ADC1_COMP_IRQHandler(void);

/* resets watchdog timer */
/*
#define KICK_DOG \
	do { \
	  IWDG_ReloadCounter(); \
	} while (0)
*/
//#define KICK_DOG LL_IWDG_ReloadCounter(IWDG)
//#define KICK_DOG WRITE_REG(IWDG, LL_IWDG_KEY_RELOAD);
//KICK_DOG;


#ifdef __cplusplus
}
#endif

#endif
