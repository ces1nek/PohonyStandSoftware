/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2026-03-30 12:34
 * 
 * X2C-Version: 6.4.2961
 * X2C-Edition: Educational
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_IM                                                                                                    */
/* Date:  2026-03-30 12:34                                                                                            */

/* X2C-Version: 6.4.2961                                                                                              */
/* X2C-Edition: Educational                                                                                           */

#ifndef X2C_H
#define X2C_H

#ifdef __cplusplus
extern "C" {
#endif

/**********************************************************************************************************************/
/**     Includes                                                                                                     **/
/**********************************************************************************************************************/
/* Common includes                                                                                                    */
#include "Constant_Bool.h"
#include "Mult_Float32.h"
#include "PT1_Float32.h"
#include "Gain_Float32.h"
#include "InvPark_Float32.h"
#include "Constant_Float32.h"
#include "Div_Float32.h"
#include "Add_Float32.h"
#include "SpaceVectorMod_Float32.h"
#include "uGain_Float32.h"
#include "Saturation_Float32.h"
#include "And_Bool.h"
#include "uI_Float32.h"
#include "Not_Bool.h"
#include "Or_Bool.h"
#include "Sub_Float32.h"
#include "TFlipFlop_Bool.h"
#include "AutoSwitch_Float32.h"
#include "EnableSwitch_Float32.h"
#include "Negation_Float32.h"
#include "ClarkeNPark_Float32.h"
#include "Sqrt_Float32.h"
#include "LowpassBiQ_Float32.h"
#include "Scope_Main.h"
#include "CommonFcts.h"

/**********************************************************************************************************************/
/**     Defines                                                                                                      **/
/**********************************************************************************************************************/
#define FUNCTIONS \
    CONSTANT_BOOL_FUNCTIONS , \
    MULT_FLOAT32_FUNCTIONS , \
    PT1_FLOAT32_FUNCTIONS , \
    GAIN_FLOAT32_FUNCTIONS , \
    INVPARK_FLOAT32_FUNCTIONS , \
    CONSTANT_FLOAT32_FUNCTIONS , \
    DIV_FLOAT32_FUNCTIONS , \
    ADD_FLOAT32_FUNCTIONS , \
    SPACEVECTORMOD_FLOAT32_FUNCTIONS , \
    UGAIN_FLOAT32_FUNCTIONS , \
    SATURATION_FLOAT32_FUNCTIONS , \
    AND_BOOL_FUNCTIONS , \
    UI_FLOAT32_FUNCTIONS , \
    NOT_BOOL_FUNCTIONS , \
    OR_BOOL_FUNCTIONS , \
    SUB_FLOAT32_FUNCTIONS , \
    TFLIPFLOP_BOOL_FUNCTIONS , \
    AUTOSWITCH_FLOAT32_FUNCTIONS , \
    ENABLESWITCH_FLOAT32_FUNCTIONS , \
    NEGATION_FLOAT32_FUNCTIONS , \
    CLARKENPARK_FLOAT32_FUNCTIONS , \
    SQRT_FLOAT32_FUNCTIONS , \
    LOWPASSBIQ_FLOAT32_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bAdd } , \
    { 2, &x2cModel.blocks.bAdd1 } , \
    { 3, &x2cModel.blocks.bAmplitude1 } , \
    { 4, &x2cModel.blocks.bAnd } , \
    { 5, &x2cModel.blocks.bAronPower1 } , \
    { 6, &x2cModel.blocks.bAutoSwitch } , \
    { 7, &x2cModel.blocks.bClarkeNPark } , \
    { 8, &x2cModel.blocks.bDiv2 } , \
    { 9, &x2cModel.blocks.bEnable } , \
    { 10, &x2cModel.blocks.bEnableSwitch } , \
    { 11, &x2cModel.blocks.bGain1 } , \
    { 12, &x2cModel.blocks.bGain2 } , \
    { 13, &x2cModel.blocks.bGain4 } , \
    { 14, &x2cModel.blocks.bGain5 } , \
    { 15, &x2cModel.blocks.bI1rms } , \
    { 16, &x2cModel.blocks.bInit } , \
    { 17, &x2cModel.blocks.bInvPark } , \
    { 18, &x2cModel.blocks.bMult } , \
    { 19, &x2cModel.blocks.bMult1 } , \
    { 20, &x2cModel.blocks.bMult2 } , \
    { 21, &x2cModel.blocks.bMult3 } , \
    { 22, &x2cModel.blocks.bMult4 } , \
    { 23, &x2cModel.blocks.bMult5 } , \
    { 24, &x2cModel.blocks.bMult6 } , \
    { 25, &x2cModel.blocks.bNegation } , \
    { 26, &x2cModel.blocks.bNegation1 } , \
    { 27, &x2cModel.blocks.bNegation2 } , \
    { 28, &x2cModel.blocks.bNegation3 } , \
    { 29, &x2cModel.blocks.bNot } , \
    { 30, &x2cModel.blocks.bOmeToFreq } , \
    { 31, &x2cModel.blocks.bOmegaFilter } , \
    { 32, &x2cModel.blocks.bOr } , \
    { 33, &x2cModel.blocks.bPT1 } , \
    { 34, &x2cModel.blocks.bPT2 } , \
    { 35, &x2cModel.blocks.bSaturation1 } , \
    { 36, &x2cModel.blocks.bSaturation2 } , \
    { 37, &x2cModel.blocks.bSkluz } , \
    { 38, &x2cModel.blocks.bSkluz1 } , \
    { 39, &x2cModel.blocks.bSpace_Vector_Modulation } , \
    { 40, &x2cModel.blocks.bSub1 } , \
    { 41, &x2cModel.blocks.bSub2 } , \
    { 42, &x2cModel.blocks.bTFlipFlop } , \
    { 43, &x2cModel.blocks.bU12rms } , \
    { 44, &x2cModel.blocks.bVdcFilter } , \
    { 45, &x2cModel.blocks.bVoltage } , \
    { 46, &x2cModel.blocks.bf_to_per } , \
    { 47, &x2cModel.blocks.buGain } , \
    { 48, &x2cModel.blocks.buI1 } , \
    { 65, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 49, 1, &x2cModel.inports.bInButton } , \
    { 50, 1, &x2cModel.inports.bInEnable } , \
    { 51, 4, &x2cModel.inports.bInIa } , \
    { 52, 4, &x2cModel.inports.bInIb } , \
    { 53, 4, &x2cModel.inports.bInIc } , \
    { 54, 4, &x2cModel.inports.bInPosition1 } , \
    { 55, 4, &x2cModel.inports.bInPosition2 } , \
    { 56, 1, &x2cModel.inports.bInPwmFault } , \
    { 57, 4, &x2cModel.inports.bInVdc } , \
    { 58, 4, &x2cModel.inports.bInVelocity1_radps } , \
    { 59, 4, &x2cModel.inports.bInVelocity1_rpm } 

#define OUTPORT_PARAMID_TABLE \
    { 60, 1, &x2cModel.outports.bOutErrClear } , \
    { 61, 1, &x2cModel.outports.bOutPWMEnable } , \
    { 62, 4, &x2cModel.outports.bOutPWMa } , \
    { 63, 4, &x2cModel.outports.bOutPWMb } , \
    { 64, 4, &x2cModel.outports.bOutPWMc } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
        ADD_FLOAT32 bAdd;
        ADD_FLOAT32 bAdd1;
        CONSTANT_FLOAT32 bAmplitude1;
        AND_BOOL bAnd;
        ADD_FLOAT32 bAronPower1;
        AUTOSWITCH_FLOAT32 bAutoSwitch;
        CLARKENPARK_FLOAT32 bClarkeNPark;
        DIV_FLOAT32 bDiv2;
        CONSTANT_BOOL bEnable;
        ENABLESWITCH_FLOAT32 bEnableSwitch;
        GAIN_FLOAT32 bGain1;
        GAIN_FLOAT32 bGain2;
        GAIN_FLOAT32 bGain4;
        GAIN_FLOAT32 bGain5;
        SQRT_FLOAT32 bI1rms;
        CONSTANT_FLOAT32 bInit;
        INVPARK_FLOAT32 bInvPark;
        MULT_FLOAT32 bMult;
        MULT_FLOAT32 bMult1;
        MULT_FLOAT32 bMult2;
        MULT_FLOAT32 bMult3;
        MULT_FLOAT32 bMult4;
        MULT_FLOAT32 bMult5;
        MULT_FLOAT32 bMult6;
        NEGATION_FLOAT32 bNegation;
        NEGATION_FLOAT32 bNegation1;
        NEGATION_FLOAT32 bNegation2;
        NEGATION_FLOAT32 bNegation3;
        NOT_BOOL bNot;
        GAIN_FLOAT32 bOmeToFreq;
        LOWPASSBIQ_FLOAT32 bOmegaFilter;
        OR_BOOL bOr;
        PT1_FLOAT32 bPT1;
        PT1_FLOAT32 bPT2;
        SATURATION_FLOAT32 bSaturation1;
        SATURATION_FLOAT32 bSaturation2;
        CONSTANT_FLOAT32 bSkluz;
        CONSTANT_FLOAT32 bSkluz1;
        SPACEVECTORMOD_FLOAT32 bSpace_Vector_Modulation;
        SUB_FLOAT32 bSub1;
        SUB_FLOAT32 bSub2;
        TFLIPFLOP_BOOL bTFlipFlop;
        SQRT_FLOAT32 bU12rms;
        LOWPASSBIQ_FLOAT32 bVdcFilter;
        CONSTANT_FLOAT32 bVoltage;
        GAIN_FLOAT32 bf_to_per;
        UGAIN_FLOAT32 buGain;
        UI_FLOAT32 buI1;
    } blocks;
/*  Inports                                                                                                           */
    struct {
        bool bInButton;
        bool bInEnable;
        float32 bInIa;
        float32 bInIb;
        float32 bInIc;
        float32 bInPosition1;
        float32 bInPosition2;
        bool bInPwmFault;
        float32 bInVdc;
        float32 bInVelocity1_radps;
        float32 bInVelocity1_rpm;
    } inports;
/*  Outports                                                                                                          */
    struct {
        bool* bOutErrClear;
        bool* bOutPWMEnable;
        float32* bOutPWMa;
        float32* bOutPWMb;
        float32* bOutPWMc;
    } outports;
};

/**********************************************************************************************************************/
/**     Externals                                                                                                    **/
/**********************************************************************************************************************/
extern struct x2cModel x2cModel;

extern const tBlockFunctions blockFunctionTable[];
extern const tParameterTable parameterIdTable[];
extern const tIoParamIdEntry inportParamIdTable[];
extern const tIoParamIdEntry outportParamIdTable[];

#define X2C_UPDATE_20_DIVIDER 20

/**********************************************************************************************************************/
/**     Prototypes                                                                                                   **/
/**********************************************************************************************************************/
void X2C_Init(void);
void X2C_Update_1(void);
void X2C_Update_20(void);

#ifdef __cplusplus
}
#endif

#endif
