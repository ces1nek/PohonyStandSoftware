/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2026-11-04 16:53
 * 
 * X2C-Version: 6.6.4297
 * X2C-Edition: Educational
 */
/* This file is part of X2C. web: x2c.lcm.at                                                                          */

/* Model: stand_DCM                                                                                                   */
/* Date:  2026-11-04 16:53                                                                                            */

/* X2C-Version: 6.6.4297                                                                                              */
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
    { 1u, &x2cModel.blocks.bAutoSwitch } , \
    { 2u, &x2cModel.blocks.bConst6 } , \
    { 3u, &x2cModel.blocks.sCtlLogic.bAnd } , \
    { 4u, &x2cModel.blocks.sCtlLogic.bConstFalse } , \
    { 5u, &x2cModel.blocks.sCtlLogic.bNot } , \
    { 6u, &x2cModel.blocks.sCtlLogic.bOr } , \
    { 7u, &x2cModel.blocks.sCtlLogic.bTFlipFlop } , \
    { 8u, &x2cModel.blocks.bPulseGenConst1 } , \
    { 9u, &x2cModel.blocks.bPulseGenDCVal } , \
    { 10u, &x2cModel.blocks.bPulseGenFreq } , \
    { 11u, &x2cModel.blocks.bPulseGenHi } , \
    { 12u, &x2cModel.blocks.bPulseGenLo } , \
    { 13u, &x2cModel.blocks.bPulseGenOutput } , \
    { 14u, &x2cModel.blocks.bPulseGenSin } , \
    { 15u, &x2cModel.blocks.sPwmGen.bConstant } , \
    { 16u, &x2cModel.blocks.sPwmGen.bDiv2 } , \
    { 17u, &x2cModel.blocks.sPwmGen.bNegation } , \
    { 18u, &x2cModel.blocks.sPwmGen.bSaturation } , \
    { 19u, &x2cModel.blocks.sPwmGen.bSaturation2 } , \
    { 20u, &x2cModel.blocks.bRateLimiter } , \
    { 21u, &x2cModel.blocks.sRegCurrent.bConstCurrentInit } , \
    { 22u, &x2cModel.blocks.sRegCurrent.bCurrentReg } , \
    { 23u, &x2cModel.blocks.sRegCurrent.bNegation2 } , \
    { 24u, &x2cModel.blocks.sRegCurrent.bOutputVoltageLimit } , \
    { 25u, &x2cModel.blocks.sRegCurrent.bSub1 } , \
    { 26u, &x2cModel.blocks.sSubVelocity.bCFiOmega } , \
    { 27u, &x2cModel.blocks.sSubVelocity.bConstSpeedInit } , \
    { 28u, &x2cModel.blocks.sSubVelocity.bCurrentLimit } , \
    { 29u, &x2cModel.blocks.sSubVelocity.bMeasVelocity } , \
    { 30u, &x2cModel.blocks.sSubVelocity.bNegation3 } , \
    { 31u, &x2cModel.blocks.sSubVelocity.bOmega } , \
    { 32u, &x2cModel.blocks.sSubVelocity.bOmegaFilter } , \
    { 33u, &x2cModel.blocks.sSubVelocity.bPhi2Rpm } , \
    { 34u, &x2cModel.blocks.sSubVelocity.bSpeedReg } , \
    { 35u, &x2cModel.blocks.sSubVelocity.bSub2 } , \
    { 36u, &x2cModel.blocks.bSwIsetpoint } , \
    { 37u, &x2cModel.blocks.bSwVoltSet } , \
    { 38u, &x2cModel.blocks.sTorqueCalc.bCFiIa } , \
    { 39u, &x2cModel.blocks.sTorqueCalc.bIaFilter } , \
    { 40u, &x2cModel.blocks.bVdcFilter } , \
    { 57u, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 41u, 1u, &x2cModel.inports.bInButton } , \
    { 42u, 1u, &x2cModel.inports.bInEnable } , \
    { 43u, 4u, &x2cModel.inports.bInIa } , \
    { 44u, 4u, &x2cModel.inports.bInIb } , \
    { 45u, 4u, &x2cModel.inports.bInIc } , \
    { 46u, 4u, &x2cModel.inports.bInPosition1 } , \
    { 47u, 4u, &x2cModel.inports.bInPosition2 } , \
    { 48u, 1u, &x2cModel.inports.bInPwmFault } , \
    { 49u, 4u, &x2cModel.inports.bInVdc } , \
    { 50u, 4u, &x2cModel.inports.bInVelocity1_radps } , \
    { 51u, 4u, &x2cModel.inports.bInVelocity1_rpm } 

#define OUTPORT_PARAMID_TABLE \
    { 52u, 1u, &x2cModel.outports.bOutErrClear } , \
    { 53u, 1u, &x2cModel.outports.bOutPWMEnable } , \
    { 54u, 4u, &x2cModel.outports.bOutPWMa } , \
    { 55u, 4u, &x2cModel.outports.bOutPWMb } , \
    { 56u, 4u, &x2cModel.outports.bOutPWMc } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct X2cModel {
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
            CONSTANT_FLOAT32 bOutputVoltageLimit;
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
        LOWPASSBIQ_FLOAT32 bVdcFilter;
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
extern struct X2cModel x2cModel;

extern const uint32 x2cModelIdentifier;

extern const tMaskParamExtRecord maskParamExtTable[1];
extern const tMaskParamDataRecord maskParamDataTable[1];

/**********************************************************************************************************************/
/**     Functions                                                                                                    **/
/**********************************************************************************************************************/
void X2C_Init(void);
void X2C_Update_1(void);
void X2C_Update_20(void);

#ifdef __cplusplus
}
#endif

#endif
