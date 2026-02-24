/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2026-02-24 11:43
 * 
 * X2C-Version: 6.4.2961
 * X2C-Edition: Educational
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: Stand_DCM                                                                                                   */
/* Date:  2026-02-24 11:43                                                                                            */

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
#include "PT1_Float32.h"
#include "ManualSwitch_Float32.h"
#include "Gain_Float32.h"
#include "RateLimiter_Float32.h"
#include "Constant_Float32.h"
#include "PILimit_Float32.h"
#include "Div_Float32.h"
#include "SinGen_Float32.h"
#include "Saturation_Float32.h"
#include "Phi2Speed_Float32.h"
#include "And_Bool.h"
#include "Not_Bool.h"
#include "Or_Bool.h"
#include "Sub_Float32.h"
#include "TFlipFlop_Bool.h"
#include "AutoSwitch_Float32.h"
#include "Negation_Float32.h"
#include "LowpassBiQ_Float32.h"
#include "Scope_Main.h"
#include "CommonFcts.h"

/**********************************************************************************************************************/
/**     Defines                                                                                                      **/
/**********************************************************************************************************************/
#define FUNCTIONS \
    CONSTANT_BOOL_FUNCTIONS , \
    PT1_FLOAT32_FUNCTIONS , \
    MANUALSWITCH_FLOAT32_FUNCTIONS , \
    GAIN_FLOAT32_FUNCTIONS , \
    RATELIMITER_FLOAT32_FUNCTIONS , \
    CONSTANT_FLOAT32_FUNCTIONS , \
    PILIMIT_FLOAT32_FUNCTIONS , \
    DIV_FLOAT32_FUNCTIONS , \
    SINGEN_FLOAT32_FUNCTIONS , \
    SATURATION_FLOAT32_FUNCTIONS , \
    PHI2SPEED_FLOAT32_FUNCTIONS , \
    AND_BOOL_FUNCTIONS , \
    NOT_BOOL_FUNCTIONS , \
    OR_BOOL_FUNCTIONS , \
    SUB_FLOAT32_FUNCTIONS , \
    TFLIPFLOP_BOOL_FUNCTIONS , \
    AUTOSWITCH_FLOAT32_FUNCTIONS , \
    NEGATION_FLOAT32_FUNCTIONS , \
    LOWPASSBIQ_FLOAT32_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.sSubCurrent.bAnd } , \
    { 2, &x2cModel.blocks.sSubCurrent.bCFiIa } , \
    { 3, &x2cModel.blocks.sSubCurrent.bConst0 } , \
    { 4, &x2cModel.blocks.sSubCurrent.bConstCurrentInit } , \
    { 5, &x2cModel.blocks.sSubCurrent.bConstFalse } , \
    { 6, &x2cModel.blocks.sSubCurrent.bCurrentIaFilter } , \
    { 7, &x2cModel.blocks.sSubCurrent.bCurrentReg } , \
    { 8, &x2cModel.blocks.sSubCurrent.bDiv2 } , \
    { 9, &x2cModel.blocks.sSubCurrent.bNegation } , \
    { 10, &x2cModel.blocks.sSubCurrent.bNegation2 } , \
    { 11, &x2cModel.blocks.sSubCurrent.bNot } , \
    { 12, &x2cModel.blocks.sSubCurrent.bOr } , \
    { 13, &x2cModel.blocks.sSubCurrent.bOutputVoltage } , \
    { 14, &x2cModel.blocks.sSubCurrent.bOutputVoltasgeLimit } , \
    { 15, &x2cModel.blocks.sSubCurrent.bSaturation } , \
    { 16, &x2cModel.blocks.sSubCurrent.bSaturation2 } , \
    { 17, &x2cModel.blocks.sSubCurrent.bSub1 } , \
    { 18, &x2cModel.blocks.sSubCurrent.bTFlipFlop } , \
    { 19, &x2cModel.blocks.sSubVelocity.bAutoSwitch } , \
    { 20, &x2cModel.blocks.sSubVelocity.bCFiOmega } , \
    { 21, &x2cModel.blocks.sSubVelocity.bConst6 } , \
    { 22, &x2cModel.blocks.sSubVelocity.bConstSpeedInit } , \
    { 23, &x2cModel.blocks.sSubVelocity.bCurrentDesired } , \
    { 24, &x2cModel.blocks.sSubVelocity.bCurrentLimit } , \
    { 25, &x2cModel.blocks.sSubVelocity.bMeasVelocity } , \
    { 26, &x2cModel.blocks.sSubVelocity.bNegation3 } , \
    { 27, &x2cModel.blocks.sSubVelocity.bOmega } , \
    { 28, &x2cModel.blocks.sSubVelocity.bOmegaFilter } , \
    { 29, &x2cModel.blocks.sSubVelocity.bOmegaFilter1 } , \
    { 30, &x2cModel.blocks.sSubVelocity.bPhi2Rpm } , \
    { 31, &x2cModel.blocks.sSubVelocity.bPulseGenConst1 } , \
    { 32, &x2cModel.blocks.sSubVelocity.bPulseGenDCVal } , \
    { 33, &x2cModel.blocks.sSubVelocity.bPulseGenFreq } , \
    { 34, &x2cModel.blocks.sSubVelocity.bPulseGenHi } , \
    { 35, &x2cModel.blocks.sSubVelocity.bPulseGenLo } , \
    { 36, &x2cModel.blocks.sSubVelocity.bPulseGenOutput } , \
    { 37, &x2cModel.blocks.sSubVelocity.bPulseGenSin } , \
    { 38, &x2cModel.blocks.sSubVelocity.bRateLimiter } , \
    { 39, &x2cModel.blocks.sSubVelocity.bSpeedDesired } , \
    { 40, &x2cModel.blocks.sSubVelocity.bSpeedDesiredConst } , \
    { 41, &x2cModel.blocks.sSubVelocity.bSpeedReg } , \
    { 42, &x2cModel.blocks.sSubVelocity.bSub2 } , \
    { 60, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 43, 1, &x2cModel.inports.bInButton } , \
    { 44, 1, &x2cModel.inports.bInEnable } , \
    { 45, 4, &x2cModel.inports.bInIa } , \
    { 46, 4, &x2cModel.inports.bInIb } , \
    { 47, 4, &x2cModel.inports.bInIc } , \
    { 48, 4, &x2cModel.inports.bInPosition1 } , \
    { 49, 4, &x2cModel.inports.bInPosition2 } , \
    { 50, 1, &x2cModel.inports.bInPwmFault } , \
    { 51, 4, &x2cModel.inports.bInVdc } , \
    { 52, 4, &x2cModel.inports.bInVelocity } , \
    { 53, 4, &x2cModel.inports.bInVelocity1_radps } , \
    { 54, 4, &x2cModel.inports.bInVelocity1_rpm } 

#define OUTPORT_PARAMID_TABLE \
    { 55, 1, &x2cModel.outports.bOutErrClear } , \
    { 56, 1, &x2cModel.outports.bOutPWMEnable } , \
    { 57, 4, &x2cModel.outports.bOutPWMa } , \
    { 58, 4, &x2cModel.outports.bOutPWMb } , \
    { 59, 4, &x2cModel.outports.bOutPWMc } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
/*      Sub-system SubCurrent                                                                                         */
        struct {
            AND_BOOL bAnd;
            GAIN_FLOAT32 bCFiIa;
            CONSTANT_FLOAT32 bConst0;
            CONSTANT_FLOAT32 bConstCurrentInit;
            CONSTANT_BOOL bConstFalse;
            PT1_FLOAT32 bCurrentIaFilter;
            PILIMIT_FLOAT32 bCurrentReg;
            DIV_FLOAT32 bDiv2;
            NEGATION_FLOAT32 bNegation;
            NEGATION_FLOAT32 bNegation2;
            NOT_BOOL bNot;
            OR_BOOL bOr;
            MANUALSWITCH_FLOAT32 bOutputVoltage;
            CONSTANT_FLOAT32 bOutputVoltasgeLimit;
            SATURATION_FLOAT32 bSaturation;
            SATURATION_FLOAT32 bSaturation2;
            SUB_FLOAT32 bSub1;
            TFLIPFLOP_BOOL bTFlipFlop;
        } sSubCurrent;
/*      Sub-system SubVelocity                                                                                        */
        struct {
            AUTOSWITCH_FLOAT32 bAutoSwitch;
            GAIN_FLOAT32 bCFiOmega;
            CONSTANT_FLOAT32 bConst6;
            CONSTANT_FLOAT32 bConstSpeedInit;
            MANUALSWITCH_FLOAT32 bCurrentDesired;
            CONSTANT_FLOAT32 bCurrentLimit;
            MANUALSWITCH_FLOAT32 bMeasVelocity;
            NEGATION_FLOAT32 bNegation3;
            GAIN_FLOAT32 bOmega;
            LOWPASSBIQ_FLOAT32 bOmegaFilter;
            LOWPASSBIQ_FLOAT32 bOmegaFilter1;
            PHI2SPEED_FLOAT32 bPhi2Rpm;
            CONSTANT_FLOAT32 bPulseGenConst1;
            CONSTANT_FLOAT32 bPulseGenDCVal;
            CONSTANT_FLOAT32 bPulseGenFreq;
            CONSTANT_FLOAT32 bPulseGenHi;
            CONSTANT_FLOAT32 bPulseGenLo;
            MANUALSWITCH_FLOAT32 bPulseGenOutput;
            SINGEN_FLOAT32 bPulseGenSin;
            RATELIMITER_FLOAT32 bRateLimiter;
            MANUALSWITCH_FLOAT32 bSpeedDesired;
            CONSTANT_FLOAT32 bSpeedDesiredConst;
            PILIMIT_FLOAT32 bSpeedReg;
            SUB_FLOAT32 bSub2;
        } sSubVelocity;
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
        float32 bInVelocity;
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
