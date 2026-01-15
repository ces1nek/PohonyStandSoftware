/*
 * app_stand_im.c
 *
 *  Created on: 27. 2. 2023
 *      Author: knobloch
 */
/*
 * TODO: Nastavit v ADC watchdogy na limit proudu.
 * - ochrana vypne PWM vystup a po 1ms se maji PWM zase zapnout.
 * - funkce ochrany bude signalizovana do X2C
 *
 * TODO: Nastavit fault od saturacek jako neregenerativni.
 */
#include <app_stand_dcm.h>
#include "ad2s1200_spi.h"

#include "VersionInfo.h"
#include "X2C.h"
#include "GlobalDefines.h"
//#include "math.h"

#ifndef M_PI
#define M_PI		3.14159265358979323846
#endif

/* LNet protocol buffersize & node identifier */
#define LNET_BUFFERSIZE ((uint8)255)
#define LNET_NODEID ((uint8)1)
static tSerial interface;
static tLNet protocol;
static uint8 bufferLNet[LNET_BUFFERSIZE];

#define APPLICATION_VERSION (1U)

/**********************/
//extern HRTIM_HandleTypeDef hhrtim1;
//extern TIM_HandleTypeDef htim2;
//extern ADC_HandleTypeDef hadc1;
//extern ADC_HandleTypeDef hadc2;
//extern ADC_HandleTypeDef hadc3;
/************************/
adcData_typedef rawAdcData[CYCLES_TO_RUN];
/**************************/
controlHrtimPWM_EnDis_typedef HrtimEnDis;
uint8_t GlobalEnable;
uint32_t cmpA1 = 5500;
uint8_t faultHrtim;
uint8_t inBtn;
uint8_t inEnable;

#define ADCOffsetShift 6
uint32_t ADCOffsetCntr = 1 << ADCOffsetShift;
uint32_t ADCOffsetAccum[2];

#define PositionEncoder1BitRes 11
int16_t PositionEncoder1;

/*********/
uint32_t TestCntr1, TestCntr2, TestCntr3;

/*********************************/

/*
 * stand_im_init_1
 */
void stand_im_init_1(void) {

}

/*
 * stand_im_init_2
 */
void stand_im_init_2(void) {
	/* X2C */
	initTableStruct();
	initVersionInfo(TableStruct, APPLICATION_VERSION);
	initSerialGeneric(&interface);
	initSerial(&interface);
	linkSerial((tProtocol*) &protocol, &interface);
	initLNet(&protocol, bufferLNet, LNET_BUFFERSIZE, LNET_NODEID);
	initServiceTable((tProtocol*) &protocol);
	addCoreServices((tProtocol*) &protocol);
	addBlockServices((tProtocol*) &protocol);
	addTableStructProtocol((tProtocol*) &protocol);

	KICK_DOG;

	TableStruct->DSPState = PRG_LOADED_STATE;

	X2C_Init();

	//HrtimEnDis.In = (_Bool*) &GlobalEnable;
	HrtimEnDis.In = x2cModel.outports.bOutPWMEnable;

	/*
	HAL_HRTIM_WaveformCountStart_IT(&hhrtim1,
	HRTIM_TIMERID_MASTER |
	HRTIM_TIMERID_TIMER_A |
	HRTIM_TIMERID_TIMER_B |
	HRTIM_TIMERID_TIMER_C);
	 */


	/*LL_HRTIM_EnableOutput(HRTIM1, \
			LL_HRTIM_OUTPUT_TA1 | LL_HRTIM_OUTPUT_TA2 |\
			LL_HRTIM_OUTPUT_TB1 | LL_HRTIM_OUTPUT_TB2 );
	 */

	/*
	 * Spusteni kalibrace pro single-ended rezim.
	 * Kdyby se pouzival differential, tak je to tu potreba zmenit.
	 */
	LL_ADC_StartCalibration(ADC1, LL_ADC_SINGLE_ENDED);
	LL_ADC_StartCalibration(ADC2, LL_ADC_SINGLE_ENDED);
	LL_ADC_StartCalibration(ADC3, LL_ADC_SINGLE_ENDED);

	while(LL_ADC_IsCalibrationOnGoing(ADC1))
			;
	while(LL_ADC_IsCalibrationOnGoing(ADC2))
			;
	while(LL_ADC_IsCalibrationOnGoing(ADC3))
		;
	//HAL_ADC_EnableBufferSensor_Cmd(ENABLE);
	//HAL_ADC_EnableBuffer_Cmd(ENABLE);

	/*
	 * Spusti ADC v dualnim modu
	 * Pozor! Data Length neni v Bytech,
	 * ale jedna se o pocet prenosu v jedne davce
	 */

	//HAL_ADCEx_MultiModeStart_DMA(&hadc1, (uint32_t*) &rawAdcData[0].adc12,
	//ADC12_NUM_OF_SAMPLES);
	LL_DMA_SetMemoryAddress(DMA1, LL_DMA_CHANNEL_1, (uint32_t)&rawAdcData[0].adc1);
	LL_DMA_SetDataLength(DMA1, LL_DMA_CHANNEL_1, ADC1_NUM_OF_SAMPLES);

	LL_DMA_SetMemoryAddress(DMA1, LL_DMA_CHANNEL_2, (uint32_t)&rawAdcData[0].adc2);
	LL_DMA_SetDataLength(DMA1, LL_DMA_CHANNEL_2, ADC2_NUM_OF_SAMPLES);

	LL_DMA_SetMemoryAddress(DMA1, LL_DMA_CHANNEL_3, (uint32_t)&rawAdcData[0].adc3);
	LL_DMA_SetDataLength(DMA1, LL_DMA_CHANNEL_3, ADC3_NUM_OF_SAMPLES);

	LL_DMA_EnableChannel(DMA1, LL_DMA_CHANNEL_1 );
	LL_DMA_EnableChannel(DMA1, LL_DMA_CHANNEL_2 );
	LL_DMA_EnableChannel(DMA1, LL_DMA_CHANNEL_3 );

	/*HAL_ADC_Start_DMA(&hadc1, (uint32_t*) &rawAdcData[0].adc1, ADC1_NUM_OF_SAMPLES);
	HAL_ADC_Start_DMA(&hadc2, (uint32_t*) &rawAdcData[0].adc2, ADC2_NUM_OF_SAMPLES);
	HAL_ADC_Start_DMA(&hadc3, (uint32_t*) &rawAdcData[0].adc3, ADC3_NUM_OF_SAMPLES);
*/
	LL_ADC_Enable(ADC1);
	LL_ADC_Enable(ADC2);
	LL_ADC_Enable(ADC3);


	LL_mDelay(1);
	//__HAL_ADC_ENABLE_IT(&hadc1, ADC_IT_EOS);
	/*
	 * Zakazeme si zbytecna preruseni od DMA.
	 * Povolene zustave pouze TC (transfer complete)
	 * po skonceni sekvence prenosu
	 */
	LL_DMA_EnableIT_TC(DMA1, LL_DMA_CHANNEL_1);
	//__HAL_DMA_DISABLE_IT(hadc1.DMA_Handle, DMA_IT_HT | DMA_IT_TE);
	//__HAL_DMA_DISABLE_IT(hadc2.DMA_Handle, DMA_IT_TC | DMA_IT_HT | DMA_IT_TE);
	//__HAL_DMA_DISABLE_IT(hadc3.DMA_Handle, DMA_IT_TC | DMA_IT_HT | DMA_IT_TE);

	//__HAL_ADC_ENABLE_IT(&hadc3,(ADC_IT_EOS | ADC_IT_EOC));

	// Vynulovani Offsetu
	//hadc2.Instance->OFR1 &= ~ADC_OFR1_OFFSET1;
	//hadc1.Instance->OFR1 &= ~ADC_OFR1_OFFSET1;
	ADC1->OFR1 &= ~ADC_OFR1_OFFSET1;
	ADC2->OFR1 &= ~ADC_OFR1_OFFSET1;
	LL_mDelay(1);

	LL_ADC_REG_StartConversion(ADC1);
	LL_ADC_REG_StartConversion(ADC2);
	LL_ADC_REG_StartConversion(ADC3);

	LL_mDelay(1);

	LL_HRTIM_TIM_CounterEnable(HRTIM1, LL_HRTIM_TIMER_MASTER | LL_HRTIM_TIMER_A| LL_HRTIM_TIMER_B | LL_HRTIM_TIMER_C );
	LL_HRTIM_TIM_SetCompare1(HRTIM1, LL_HRTIM_TIMER_MASTER, HRTIM_PERIOD/2);
	LL_HRTIM_EnableIT_CMP1(HRTIM1, LL_HRTIM_TIMER_MASTER);

	/*
	 * TIM2: Simulovany enkoder z AD2S1200
	 */
	//HAL_TIM_Base_Start(&htim2);
	LL_TIM_EnableCounter(TIM2);
	LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH1 | LL_TIM_CHANNEL_CH2 | LL_TIM_CHANNEL_CH3);

	TableStruct->DSPState = INIT_STATE;
	//TableStruct->DSPState = RUN_STATE_POWER_ON;

	// Init SPI for AD2S1200:
	AD2S1200_SPIInit();
}

/*
 *
 */
void stand_im_loop(void) {
	TableStruct->protocols[0]->pCommunicate(
			(tProtocol*) TableStruct->protocols[0]);
	KICK_DOG
	;
}

/*
 *
 */
void DMA1_Channel1_IRQHandler(void) {

	//GPIOA->BSRR = GPIO_PIN_6;
	//__HAL_DMA_CLEAR_FLAG(hadc1.DMA_Handle, DMA_FLAG_TC1);
	LL_DMA_ClearFlag_TC1(DMA1);
	TestCntr3++;
	/*
	 * End of the low pulse on pin NSAMPLE
	 */
	//AD2S1200_SampleStop();

	int16_t sTimCntTmp;
	sTimCntTmp = (int16_t)(TIM2->CNT << (16-PositionEncoder1BitRes));
	PositionEncoder1 = sTimCntTmp;
	x2cModel.inports.bInPositionEncoder1 =  sTimCntTmp * (float)(M_PI / (1<<15));

	x2cModel.inports.bInButton = readBtn();
	x2cModel.inports.bInEnable = readEnable();
	x2cModel.inports.bInPwmFault = readHrtimPWM_Fault();

	// Pri zapnutem oversamplingu je nutne offset odecitat rucne
	x2cModel.inports.bInIc = -((float) (rawAdcData[0].adc1.samples.Ic - (int32_t)ADCOffsetAccum[0])
			* ADC_CURRENT_GAIN);
	x2cModel.inports.bInIa = -((float) (rawAdcData[0].adc2.samples.Ia - (int32_t)ADCOffsetAccum[1])
			* ADC_CURRENT_GAIN);
	x2cModel.inports.bInVdc = ((float) (rawAdcData[0].adc3.samples.Vdc)
			* ADC_VOLTAGE_GAIN);

	x2cModel.inports.bInPositionResolver = AD2S1200_Data.Position * (float)(M_PI / (1<<15));

	switch (TableStruct->DSPState) {
	case INIT_STATE:
		HrtimEnDis.In = (_Bool*) &GlobalEnable;
		GlobalEnable = 0;

		if (ADCOffsetCntr--) {
			ADCOffsetAccum[0] += rawAdcData[0].adc1.samples.Ic;
			ADCOffsetAccum[1] += rawAdcData[0].adc2.samples.Ia;
		} else {
			ADCOffsetAccum[0] >>= ADCOffsetShift;
			ADCOffsetAccum[1] >>= ADCOffsetShift;

			// Nastaveni Offsetu
			// Offset nelze pouzit, kdyz je zapnuty oversampling
			/*
			hadc1.Instance->OFR1 &= ~ADC_OFR1_OFFSET1;
			hadc1.Instance->OFR1 |= ADCOffsetAccum[0] & ADC_OFR1_OFFSET1;
			hadc2.Instance->OFR1 &= ~ADC_OFR1_OFFSET1;
			hadc2.Instance->OFR1 |= ADCOffsetAccum[1] & ADC_OFR1_OFFSET1;
			*/
			HrtimEnDis.In = x2cModel.outports.bOutPWMEnable;
			TableStruct->DSPState = RUN_STATE_POWER_OFF;
		}
		break;
	case RUN_STATE_POWER_OFF:
	case RUN_STATE_POWER_ON:
		X2C_Update_1();
		break;
	case BOOTLOADER_STATE:
	case IDLE_STATE:
	case PRG_LOADED_STATE:
	default:
		break;
	}

	HRTIM1->sTimerxRegs[0].CMP1xR = modToCmp(
			*x2cModel.outports.bOutPWMa);
	HRTIM1->sTimerxRegs[1].CMP1xR = modToCmp(
			*x2cModel.outports.bOutPWMb);
	HRTIM1->sTimerxRegs[2].CMP1xR = modToCmp(
			*x2cModel.outports.bOutPWMc);

	writeErrClear(*x2cModel.outports.bOutErrClear);
	controlHrtimPWM_EnDis(&HrtimEnDis);
	//GPIOA->BRR = GPIO_PIN_6;

}


void SPI1_IRQHandler(void)
{
	GPIOA->BSRR = LL_GPIO_PIN_6;
	AD2S1200_SPI_RXNE_ISR();
	LL_SPI_ClearFlag_CRCERR(SPI1);
	TestCntr2++;
	GPIOA->BRR = LL_GPIO_PIN_6;
}

void HRTIM1_Master_IRQHandler(void)
{
	GPIOA->BSRR = LL_GPIO_PIN_6;
//	AD2S1200_SampleStart();
	//__HAL_HRTIM_MASTER_CLEAR_IT(&hhrtim1, HRTIM_MASTER_IT_MCMP1);
	LL_HRTIM_ClearFlag_CMP1(HRTIM1, LL_HRTIM_TIMER_MASTER);
	TestCntr1++;
	GPIOA->BRR = LL_GPIO_PIN_6;
}
