/**
 * @file
 * @brief Global definitions.
 */
/*
 * $LastChangedRevision: 2529 $
 * $LastChangedDate:: 2022-03-14 14:06:56 +0100#$
 *
 * This file is part of X2C. http://x2c.lcm.at/
 *
 * ===== CONFIDENTIAL =====
 * The content of this file is confidential according to the X2C Licence Terms and Conditions.
 *
 * Copyright (c) 2022, Linz Center of Mechatronics GmbH (LCM) http://www.lcm.at/
 * All rights reserved.
 */
#ifndef GLOBALDEFINES_H
#define GLOBALDEFINES_H

#ifdef __cplusplus
extern "C" {
#endif


#include "main.h"

/*
* V soubopru Target.h je nutno upravit nasledujici:
*
#elif defined(X2C_SERIES_STM32G4)
#if defined(USE_HAL_DRIVER)
#include "stm32g4xx_hal.h"
extern IWDG_HandleTypeDef hiwdg;
#define KICK_DOG \
	do { \
		HAL_IWDG_Refresh(&hiwdg); \
	} while (0)
 */

#include "Target.h"
#include "TableStruct.h"

#include "Hardware.h"
#include "LNet.h"
#include "BlockServices.h"
#include "Services.h"



/**
 * PWM frequency and and ADC trigger rate have to be adjusted in the STM32 CubeMX GUI.
 *
 * PWM frequency can be found in TIM1 -> Parameter Settings -> Counter Period.
 * Because of center aligned mode, this value can be calculated this way (example for 10 kHz):
 * fTimer / desired PWM frequency / 2 = 170e6 / 10e3 / 2 = 8500.
 *
 * The ADC trigger rate can be controlled by the TIM1 repetition counter (RCR). This timer causes an Update Event (UEV) on every over- and underflow.
 * In center aligned mode, the timer counts in up- and down count mode and therefore causes an UEV twice per period.
 * To get 1 ADC trigger per period, the RCR has to be set to 1.
 * To get 1 ADC trigger on every 2nd period, the RCR has to be set to 3.
 */

#define ENABLE_PWM		do { \
							/* TODO ENABLE PWM */; \
						} while(0)

#define DISABLE_PWM		do { \
							/* TODO DISABLE PWM */; \
						} while(0)

#ifdef __cplusplus
}
#endif

#endif
