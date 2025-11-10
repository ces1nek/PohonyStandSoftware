/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2025-03-18 19:41
 * 
 * X2C-Version: 6.4.2961
 * X2C-Edition: Educational
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_IM                                                                                                    */
/* Date:  2025-03-18 19:41                                                                                            */

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
#include "Phi2Speed_Float32.h"
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
    PHI2SPEED_FLOAT32_FUNCTIONS , \
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
    { 25, &x2cModel.blocks.bNToFreqReal } , \
    { 26, &x2cModel.blocks.bNegation } , \
    { 27, &x2cModel.blocks.bNegation1 } , \
    { 28, &x2cModel.blocks.bNegation3 } , \
    { 29, &x2cModel.blocks.bNot } , \
    { 30, &x2cModel.blocks.bOr } , \
    { 31, &x2cModel.blocks.bPT1 } , \
    { 32, &x2cModel.blocks.bPT2 } , \
    { 33, &x2cModel.blocks.bPhi2Speed } , \
    { 34, &x2cModel.blocks.bSaturation1 } , \
    { 35, &x2cModel.blocks.bSaturation2 } , \
    { 36, &x2cModel.blocks.bSkluz } , \
    { 37, &x2cModel.blocks.bSkluz1 } , \
    { 38, &x2cModel.blocks.bSpace_Vector_Modulation } , \
    { 39, &x2cModel.blocks.bSub1 } , \
    { 40, &x2cModel.blocks.bSub2 } , \
    { 41, &x2cModel.blocks.bTFlipFlop } , \
    { 42, &x2cModel.blocks.bU12rms } , \
    { 43, &x2cModel.blocks.bVoltage } , \
    { 44, &x2cModel.blocks.bf_to_per } , \
    { 45, &x2cModel.blocks.buGain } , \
    { 46, &x2cModel.blocks.buI1 } , \
    { 62, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 47, 1, &x2cModel.inports.bInButton } , \
    { 48, 1, &x2cModel.inports.bInEnable } , \
    { 49, 4, &x2cModel.inports.bInIa } , \
    { 50, 4, &x2cModel.inports.bInIb } , \
    { 51, 4, &x2cModel.inports.bInIc } , \
    { 52, 4, &x2cModel.inports.bInPositionEncoder1 } , \
    { 53, 4, &x2cModel.inports.bInPositionEncoder2 } , \
    { 54, 4, &x2cModel.inports.bInPositionResolver } , \
    { 55, 1, &x2cModel.inports.bInPwmFault } , \
    { 56, 4, &x2cModel.inports.bInVdc } 

#define OUTPORT_PARAMID_TABLE \
    { 57, 1, &x2cModel.outports.bOutErrClear } , \
    { 58, 1, &x2cModel.outports.bOutPWMEnable } , \
    { 59, 4, &x2cModel.outports.bOutPWMa } , \
    { 60, 4, &x2cModel.outports.bOutPWMb } , \
    { 61, 4, &x2cModel.outports.bOutPWMc } 


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
        GAIN_FLOAT32 bNToFreqReal;
        NEGATION_FLOAT32 bNegation;
        NEGATION_FLOAT32 bNegation1;
        NEGATION_FLOAT32 bNegation3;
        NOT_BOOL bNot;
        OR_BOOL bOr;
        PT1_FLOAT32 bPT1;
        PT1_FLOAT32 bPT2;
        PHI2SPEED_FLOAT32 bPhi2Speed;
        SATURATION_FLOAT32 bSaturation1;
        SATURATION_FLOAT32 bSaturation2;
        CONSTANT_FLOAT32 bSkluz;
        CONSTANT_FLOAT32 bSkluz1;
        SPACEVECTORMOD_FLOAT32 bSpace_Vector_Modulation;
        SUB_FLOAT32 bSub1;
        SUB_FLOAT32 bSub2;
        TFLIPFLOP_BOOL bTFlipFlop;
        SQRT_FLOAT32 bU12rms;
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
        float32 bInPositionEncoder1;
        float32 bInPositionEncoder2;
        float32 bInPositionResolver;
        bool bInPwmFault;
        float32 bInVdc;
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


/**********************************************************************************************************************/
/**     Prototypes                                                                                                   **/
/**********************************************************************************************************************/
void X2C_Init(void);
void X2C_Update(void);
void X2C_Update_1(void);

#ifdef __cplusplus
}
#endif

#endif
