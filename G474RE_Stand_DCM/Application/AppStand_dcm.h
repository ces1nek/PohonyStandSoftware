/*
 * app_stand_im.h
 *
 *  Created on: 27. 2. 2023
 *      Author: knobloch
 */
#ifndef INC_APP_STAND_DCM_H_
#define INC_APP_STAND_DCM_H_

#include "main.h"
#include <stdbool.h>

/***************************************************************************/
#define readBtn() ((GPIOC->IDR & GPIO_IDR_ID13)?1u:0u)
#define readEnable() ((GPIOB->IDR & GPIO_IDR_ID11)?1u:0u)

#define writeErrClear(x) (GPIOC->BSRR=(x)?(GPIO_BSRR_BS12):(GPIO_BSRR_BR12))

/********************************** PWM **************************************/
// Povolovani PWM vystupu: Output ENable Register
#define HRTIM_Ph1_OENR (HRTIM_OENR_TA1OEN | HRTIM_OENR_TA2OEN)
#define HRTIM_Ph2_OENR (HRTIM_OENR_TB1OEN | HRTIM_OENR_TB2OEN)
#define HRTIM_Ph3_OENR (HRTIM_OENR_TC1OEN | HRTIM_OENR_TC2OEN)
#define HRTIM_Ph4_OENR (HRTIM_OENR_TD1OEN | HRTIM_OENR_TD2OEN)
#define HRTIM_Ph123_OENR (HRTIM_Ph1_OENR | HRTIM_Ph2_OENR \
		| HRTIM_Ph3_OENR)
#define HRTIM_PhAll_OENR (HRTIM_Ph1_OENR | HRTIM_Ph2_OENR)
//#define HRTIM_PhAll_OENR HRTIM_Ph123_OENR

// Blokovani PWM vystupu: Output DISable Register
#define HRTIM_Ph1_ODISR (HRTIM_ODISR_TA1ODIS | HRTIM_ODISR_TA2ODIS)
#define HRTIM_Ph2_ODISR (HRTIM_ODISR_TB1ODIS | HRTIM_ODISR_TB2ODIS)
#define HRTIM_Ph3_ODISR (HRTIM_ODISR_TC1ODIS | HRTIM_ODISR_TC2ODIS)
#define HRTIM_Ph4_ODISR (HRTIM_ODISR_TD1ODIS | HRTIM_ODISR_TD2ODIS)
#define HRTIM_Ph123_ODISR (HRTIM_Ph1_ODISR | HRTIM_Ph2_ODISR \
		| HRTIM_Ph3_ODISR)
#define HRTIM_PhAll_ODISR (HRTIM_Ph1_ODISR | HRTIM_Ph2_ODISR)
//#define HRTIM_PhAll_ODISR HRTIM_Ph123_ODISR

// Stav blokovani PWM vystupu: Output Disable Status Register
#define HRTIM_Ph1_ODSR (HRTIM_ODSR_TA1ODS | HRTIM_ODSR_TA2ODS)
#define HRTIM_Ph2_ODSR (HRTIM_ODSR_TB1ODS | HRTIM_ODSR_TB2ODS)
#define HRTIM_Ph3_ODSR (HRTIM_ODSR_TC1ODS | HRTIM_ODSR_TC2ODS)
#define HRTIM_Ph123_ODSR (HRTIM_Ph1_ODSR | HRTIM_Ph2_ODSR \
		| HRTIM_Ph3_ODSR)
#define HRTIM_PhAll_ODSR (HRTIM_Ph1_ODSR | HRTIM_Ph2_ODSR)
//#define HRTIM_PhAll_ODSR HRTIM_Ph123_ODSR

/******************** Funkce pro ovladani HRTIM ******************************/
// switich PWM to enable state (after fault)
#define writeHrtimPWM_Enable(x) (HRTIM1->sCommonRegs.OENR |= \
		(x) ? HRTIM_PhAll_OENR : 0) //HRTIM_PhAll_OENR
// switch PWM to disable state
#define writeHrtimPWM_Disable(x) (HRTIM1->sCommonRegs.ODISR |= \
		(x) ? HRTIM_PhAll_ODSR : 0) //HRTIM_PhAll_ODSR
// Read Enable Register 0: disabled (fault or idle), 1: enable
#define readHrtimPWM_Enable() \
	( ~(HRTIM1->sCommonRegs.OENR) & HRTIM_PhAll_ODSR ? 0 : 1) // HRTIM_PhAll_ODSR
// Read Disable Status Register 0: idle, 1: fault
#define readHrtimPWM_Fault() \
	( (HRTIM1->sCommonRegs.ODSR & ~HRTIM1->sCommonRegs.OENR) \
			& HRTIM_PhAll_ODSR ? 1 : 0)

typedef struct {
	bool *In;
	bool lastState;
} controlHrtimPWM_EnDis_typedef;

static inline void controlHrtimPWM_EnDis(controlHrtimPWM_EnDis_typedef *S) {
	// zapinani nabeznou hranou
	if (*S->In) {
		if (S->lastState == 0)
			HRTIM1->sCommonRegs.OENR |= HRTIM_PhAll_OENR;
	} else
		// vypinani stavem 0
		HRTIM1->sCommonRegs.ODISR |= HRTIM_PhAll_ODISR;

	S->lastState = *S->In;
}

#if !defined(HRTIM_PERIOD)
#error HRTIM_PERIOD has to be defined in STM32CubeMX GUI
#endif

/* Fuinkce slouzi pro prepocet relativniho napeti
*  na CMP1 (set register) PWM modulatoru
*/
static inline uint32_t modToCmp(float x){
	if(x >=  0.999f) return (HRTIM_PERIOD)-32;
	if(x <= -0.999f) return 32;
	return (uint32_t)(HRTIM_PERIOD) * (0.5f + 0.5f * x);
}
/******************** Definice struktury ADC   *******************************/
// vypocet prevodu napeti a proudu
#define _V_REF_	(3.300)
#define _V_REF_2_ (_V_REF_/2.0)

#define _VOLTAGE_AMPL_R0_ (13.0e3)
#define _VOLTAGE_AMPL_R1_ (200.0e3)
#define _VOLTAGE_AMPL_GAIN_ ((_VOLTAGE_AMPL_R0_)/(_VOLTAGE_AMPL_R1_))
#define _VOLTAGE_RES_ (1<<12U)
#define ADC_VOLTAGE_GAIN ((float)(_V_REF_/_VOLTAGE_AMPL_GAIN_/_VOLTAGE_RES_))

#define _CURRENT_DIV_R1_ (4700.0)
#define _CURRENT_DIV_R2_ (9100.0)
//#define _CURRENT_AMPL_R0_ (3180.0)
#define _CURRENT_AMPL_R0_ (3000.0 + 2870.0)
#define _CURRENT_AMPL_R1_ ((_CURRENT_DIV_R1_*_CURRENT_DIV_R2_)/(_CURRENT_DIV_R1_+_CURRENT_DIV_R2_))
#define _CURRENT_LEM_GAIN_ (0.025)
#define _CURRENT_LEM_V_REF_ (2.5)
#define _CURRENT_DIV_GAIN_ ((_CURRENT_DIV_R2_)/(_CURRENT_DIV_R1_ + _CURRENT_DIV_R2_))
#define _CURRENT_AMPL_GAIN_ ((_CURRENT_AMPL_R0_)/(_CURRENT_AMPL_R1_))
#define _CURRENT_MAX_ ((_V_REF_)/(_CURRENT_LEM_GAIN_ * _CURRENT_DIV_GAIN_ * _CURRENT_AMPL_GAIN_))
#define _CURRENT_RES_ (1<<13U)
#define ADC_CURRENT_GAIN ((float)(_CURRENT_MAX_/_CURRENT_RES_))

#define CURRENT_OFFSETx ((uint32_t)(((((_CURRENT_LEM_V_REF_ * _CURRENT_DIV_GAIN_) - _V_REF_2_) * _CURRENT_AMPL_GAIN_) + _V_REF_2_)*_CURRENT_RES_/_V_REF_))
#define CURRENT_OFFSET1 CURRENT_OFFSETx
#define CURRENT_OFFSET2 CURRENT_OFFSETx
//#define CURRENT_OFFSET1 2006
//#define CURRENT_OFFSET2 2001

// Pocet PWM period pro spusteni vypoctu a vzorku ADC pro prumerovani
#define CYCLES_TO_RUN 1
// Pocet vzorku v AD sekvenci
#define ADC12_NUM_OF_SAMPLES 1
#define ADC3_NUM_OF_SAMPLES 1


/*
 * _____|_______SMP1_____|
 * ADC1 | CH6:  Ic       |
 * ADC2 | CH7:  Ia       |
 * ADC3 | CH12: Vdc      |
 * _____|________________|
 *
 * PC0 = I_1 = Ic = CH6
 * PC1 = I_2 = Ia = CH7
 * PB0 = Vdc = ADC3_IN12
 *
 */
typedef struct {
	union {
		struct {
			int16_t Ic1;
			int16_t Ia1;
		} samples;
		uint32_t ulData[ADC12_NUM_OF_SAMPLES];
	} adc12;
	union {
		struct {
			uint16_t Vdc;
		} samples;
		uint16_t usData[ADC3_NUM_OF_SAMPLES];
	} adc3;
} adcData_typedef;

/****************************************************************/

extern adcData_typedef rawAdcData[CYCLES_TO_RUN];
/************************** Konec ADC ****************************************/

/***************************************************************************/
/* Function prototypes */

void stand_im_init_1(void);
void stand_im_init_2(void);
void stand_im_loop(void);
void stand_im_periodic_isr(void);

#endif /* INC_APP_STAND_DCM_H_ */
