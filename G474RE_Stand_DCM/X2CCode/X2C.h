/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2026-02-24 15:31
 * 
 * X2C-Version: 6.4.2961
 * X2C-Edition: Educational
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: Stand_DCM                                                                                                   */
/* Date:  2026-02-24 15:31                                                                                            */

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
#include "TFlipFlop_Bool.h"
#include "Sub_Float32.h"
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
    TFLIPFLOP_BOOL_FUNCTIONS , \
    SUB_FLOAT32_FUNCTIONS , \
    AUTOSWITCH_FLOAT32_FUNCTIONS , \
    NEGATION_FLOAT32_FUNCTIONS , \
    LOWPASSBIQ_FLOAT32_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bAutoSwitch } , \
    { 2, &x2cModel.blocks.bConst6 } , \
    { 3, &x2cModel.blocks.sCtlLogic.bAnd } , \
    { 4, &x2cModel.blocks.sCtlLogic.bConstFalse } , \
    { 5, &x2cModel.blocks.sCtlLogic.bNot } , \
    { 6, &x2cModel.blocks.sCtlLogic.bOr } , \
    { 7, &x2cModel.blocks.sCtlLogic.bTFlipFlop } , \
    { 8, &x2cModel.blocks.bPulseGenConst1 } , \
    { 9, &x2cModel.blocks.bPulseGenDCVal } , \
    { 10, &x2cModel.blocks.bPulseGenFreq } , \
    { 11, &x2cModel.blocks.bPulseGenHi } , \
    { 12, &x2cModel.blocks.bPulseGenLo } , \
    { 13, &x2cModel.blocks.bPulseGenOutput } , \
    { 14, &x2cModel.blocks.bPulseGenSin } , \
    { 15, &x2cModel.blocks.sPwmGen.bConstant } , \
    { 16, &x2cModel.blocks.sPwmGen.bDiv2 } , \
    { 17, &x2cModel.blocks.sPwmGen.bNegation } , \
    { 18, &x2cModel.blocks.sPwmGen.bSaturation } , \
    { 19, &x2cModel.blocks.sPwmGen.bSaturation2 } , \
    { 20, &x2cModel.blocks.bRateLimiter } , \
    { 21, &x2cModel.blocks.sRegCurrent.bConstCurrentInit } , \
    { 22, &x2cModel.blocks.sRegCurrent.bCurrentReg } , \
    { 23, &x2cModel.blocks.sRegCurrent.bNegation2 } , \
    { 24, &x2cModel.blocks.sRegCurrent.bOutputVoltasgeLimit } , \
    { 25, &x2cModel.blocks.sRegCurrent.bSub1 } , \
    { 26, &x2cModel.blocks.sSubVelocity.bCFiOmega } , \
    { 27, &x2cModel.blocks.sSubVelocity.bConstSpeedInit } , \
    { 28, &x2cModel.blocks.sSubVelocity.bCurrentLimit } , \
    { 29, &x2cModel.blocks.sSubVelocity.bMeasVelocity } , \
    { 30, &x2cModel.blocks.sSubVelocity.bNegation3 } , \
    { 31, &x2cModel.blocks.sSubVelocity.bOmega } , \
    { 32, &x2cModel.blocks.sSubVelocity.bOmegaFilter } , \
    { 33, &x2cModel.blocks.sSubVelocity.bOmegaFilter1 } , \
    { 34, &x2cModel.blocks.sSubVelocity.bPhi2Rpm } , \
    { 35, &x2cModel.blocks.sSubVelocity.bSpeedReg } , \
    { 36, &x2cModel.blocks.sSubVelocity.bSub2 } , \
    { 37, &x2cModel.blocks.bSwIsetpoint } , \
    { 38, &x2cModel.blocks.bSwVoltSet } , \
    { 39, &x2cModel.blocks.sTorqueCalc.bCFiIa } , \
    { 40, &x2cModel.blocks.sTorqueCalc.bIaFilter } , \
    { 57, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 41, 1, &x2cModel.inports.bInButton } , \
    { 42, 1, &x2cModel.inports.bInEnable } , \
    { 43, 4, &x2cModel.inports.bInIa } , \
    { 44, 4, &x2cModel.inports.bInIb } , \
    { 45, 4, &x2cModel.inports.bInIc } , \
    { 46, 4, &x2cModel.inports.bInPosition1 } , \
    { 47, 4, &x2cModel.inports.bInPosition2 } , \
    { 48, 1, &x2cModel.inports.bInPwmFault } , \
    { 49, 4, &x2cModel.inports.bInVdc } , \
    { 50, 4, &x2cModel.inports.bInVelocity1_radps } , \
    { 51, 4, &x2cModel.inports.bInVelocity1_rpm } 

#define OUTPORT_PARAMID_TABLE \
    { 52, 1, &x2cModel.outports.bOutErrClear } , \
    { 53, 1, &x2cModel.outports.bOutPWMEnable } , \
    { 54, 4, &x2cModel.outports.bOutPWMa } , \
    { 55, 4, &x2cModel.outports.bOutPWMb } , \
    { 56, 4, &x2cModel.outports.bOutPWMc } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
/*      Sub-system CtlLogic                                                                                           */
        struct {
            AND_BOOL bAnd;
            CONSTANT_BOOL bConstFalse;
            NOT_BOOL bNot;
            OR_BOOL bOr;
            TFLIPFLOP_BOOL bTFlipFlop;
        } sCtlLogic;
/*      Sub-system PwmGen                                                                                             */
        struct {
            CONSTANT_FLOAT32 bConstant;
            DIV_FLOAT32 bDiv2;
            NEGATION_FLOAT32 bNegation;
            SATURATION_FLOAT32 bSaturation;
            SATURATION_FLOAT32 bSaturation2;
        } sPwmGen;
/*      Sub-system RegCurrent                                                                                         */
        struct {
            CONSTANT_FLOAT32 bConstCurrentInit;
            PILIMIT_FLOAT32 bCurrentReg;
            NEGATION_FLOAT32 bNegation2;
            CONSTANT_FLOAT32 bOutputVoltasgeLimit;
            SUB_FLOAT32 bSub1;
        } sRegCurrent;
/*      Sub-system SubVelocity                                                                                        */
        struct {
            GAIN_FLOAT32 bCFiOmega;
            CONSTANT_FLOAT32 bConstSpeedInit;
            CONSTANT_FLOAT32 bCurrentLimit;
            MANUALSWITCH_FLOAT32 bMeasVelocity;
            NEGATION_FLOAT32 bNegation3;
            GAIN_FLOAT32 bOmega;
            LOWPASSBIQ_FLOAT32 bOmegaFilter;
            LOWPASSBIQ_FLOAT32 bOmegaFilter1;
            PHI2SPEED_FLOAT32 bPhi2Rpm;
            PILIMIT_FLOAT32 bSpeedReg;
            SUB_FLOAT32 bSub2;
        } sSubVelocity;
/*      Sub-system TorqueCalc                                                                                         */
        struct {
            GAIN_FLOAT32 bCFiIa;
            LOWPASSBIQ_FLOAT32 bIaFilter;
        } sTorqueCalc;
        AUTOSWITCH_FLOAT32 bAutoSwitch;
        CONSTANT_FLOAT32 bConst6;
        CONSTANT_FLOAT32 bPulseGenConst1;
        CONSTANT_FLOAT32 bPulseGenDCVal;
        CONSTANT_FLOAT32 bPulseGenFreq;
        CONSTANT_FLOAT32 bPulseGenHi;
        CONSTANT_FLOAT32 bPulseGenLo;
        MANUALSWITCH_FLOAT32 bPulseGenOutput;
        SINGEN_FLOAT32 bPulseGenSin;
        RATELIMITER_FLOAT32 bRateLimiter;
        MANUALSWITCH_FLOAT32 bSwIsetpoint;
        MANUALSWITCH_FLOAT32 bSwVoltSet;
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
