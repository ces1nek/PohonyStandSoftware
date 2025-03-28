/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2025-03-28 16:16
 * 
 * X2C-Version: 6.4.2961
 * X2C-Edition: Educational
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_DCM                                                                                                   */
/* Date:  2025-03-28 16:16                                                                                            */

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
#include "ManualSwitch_Float32.h"
#include "PT1_Float32.h"
#include "Gain_Float32.h"
#include "RateLimiter_Float32.h"
#include "Constant_Float32.h"
#include "PILimit_Float32.h"
#include "Div_Float32.h"
#include "Add_Float32.h"
#include "SinGen_Float32.h"
#include "Phi2Speed_Float32.h"
#include "Saturation_Float32.h"
#include "And_Bool.h"
#include "Not_Bool.h"
#include "Or_Bool.h"
#include "Sub_Float32.h"
#include "TFlipFlop_Bool.h"
#include "Sign_Float32.h"
#include "Negation_Float32.h"
#include "Scope_Main.h"
#include "CommonFcts.h"

/**********************************************************************************************************************/
/**     Defines                                                                                                      **/
/**********************************************************************************************************************/
#define FUNCTIONS \
    MANUALSWITCH_FLOAT32_FUNCTIONS , \
    PT1_FLOAT32_FUNCTIONS , \
    GAIN_FLOAT32_FUNCTIONS , \
    RATELIMITER_FLOAT32_FUNCTIONS , \
    CONSTANT_FLOAT32_FUNCTIONS , \
    PILIMIT_FLOAT32_FUNCTIONS , \
    DIV_FLOAT32_FUNCTIONS , \
    ADD_FLOAT32_FUNCTIONS , \
    SINGEN_FLOAT32_FUNCTIONS , \
    PHI2SPEED_FLOAT32_FUNCTIONS , \
    SATURATION_FLOAT32_FUNCTIONS , \
    AND_BOOL_FUNCTIONS , \
    NOT_BOOL_FUNCTIONS , \
    OR_BOOL_FUNCTIONS , \
    SUB_FLOAT32_FUNCTIONS , \
    TFLIPFLOP_BOOL_FUNCTIONS , \
    SIGN_FLOAT32_FUNCTIONS , \
    NEGATION_FLOAT32_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bAdd1 } , \
    { 2, &x2cModel.blocks.bAnd } , \
    { 3, &x2cModel.blocks.bCFiIa } , \
    { 4, &x2cModel.blocks.bCFiOmega } , \
    { 5, &x2cModel.blocks.bCoPulseGenOffset } , \
    { 6, &x2cModel.blocks.bConst0 } , \
    { 7, &x2cModel.blocks.bConst6 } , \
    { 8, &x2cModel.blocks.bConstCurrentInit } , \
    { 9, &x2cModel.blocks.bConstSpeedInit } , \
    { 10, &x2cModel.blocks.bCurrentDesired } , \
    { 11, &x2cModel.blocks.bCurrentIaFilter } , \
    { 12, &x2cModel.blocks.bCurrentLimit } , \
    { 13, &x2cModel.blocks.bCurrentReg } , \
    { 14, &x2cModel.blocks.bDiv2 } , \
    { 15, &x2cModel.blocks.bNegation } , \
    { 16, &x2cModel.blocks.bNegation2 } , \
    { 17, &x2cModel.blocks.bNegation3 } , \
    { 18, &x2cModel.blocks.bNot } , \
    { 19, &x2cModel.blocks.bOmega } , \
    { 20, &x2cModel.blocks.bOmegaFilter } , \
    { 21, &x2cModel.blocks.bOr } , \
    { 22, &x2cModel.blocks.bOutputVoltage } , \
    { 23, &x2cModel.blocks.bOutputVoltasgeLimit } , \
    { 24, &x2cModel.blocks.bPhi2Rpm } , \
    { 25, &x2cModel.blocks.bPulseGenAmplitude } , \
    { 26, &x2cModel.blocks.bPulseGenConst1 } , \
    { 27, &x2cModel.blocks.bPulseGenDCVal } , \
    { 28, &x2cModel.blocks.bPulseGenFreq } , \
    { 29, &x2cModel.blocks.bPulseGenOutput } , \
    { 30, &x2cModel.blocks.bPulseGenSin } , \
    { 31, &x2cModel.blocks.bRateLimiter } , \
    { 32, &x2cModel.blocks.bSaturation } , \
    { 33, &x2cModel.blocks.bSaturation2 } , \
    { 34, &x2cModel.blocks.bSign } , \
    { 35, &x2cModel.blocks.bSpeedDesired } , \
    { 36, &x2cModel.blocks.bSpeedDesiredConst } , \
    { 37, &x2cModel.blocks.bSpeedReg } , \
    { 38, &x2cModel.blocks.bSub1 } , \
    { 39, &x2cModel.blocks.bSub2 } , \
    { 40, &x2cModel.blocks.bTFlipFlop } , \
    { 56, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 41, 1, &x2cModel.inports.bInButton } , \
    { 42, 1, &x2cModel.inports.bInEnable } , \
    { 43, 4, &x2cModel.inports.bInIa } , \
    { 44, 4, &x2cModel.inports.bInIb } , \
    { 45, 4, &x2cModel.inports.bInIc } , \
    { 46, 4, &x2cModel.inports.bInPositionEncoder1 } , \
    { 47, 4, &x2cModel.inports.bInPositionEncoder2 } , \
    { 48, 4, &x2cModel.inports.bInPositionResolver } , \
    { 49, 1, &x2cModel.inports.bInPwmFault } , \
    { 50, 4, &x2cModel.inports.bInVdc } 

#define OUTPORT_PARAMID_TABLE \
    { 51, 1, &x2cModel.outports.bOutErrClear } , \
    { 52, 1, &x2cModel.outports.bOutPWMEnable } , \
    { 53, 4, &x2cModel.outports.bOutPWMa } , \
    { 54, 4, &x2cModel.outports.bOutPWMb } , \
    { 55, 4, &x2cModel.outports.bOutPWMc } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
        ADD_FLOAT32 bAdd1;
        AND_BOOL bAnd;
        GAIN_FLOAT32 bCFiIa;
        GAIN_FLOAT32 bCFiOmega;
        CONSTANT_FLOAT32 bCoPulseGenOffset;
        CONSTANT_FLOAT32 bConst0;
        CONSTANT_FLOAT32 bConst6;
        CONSTANT_FLOAT32 bConstCurrentInit;
        CONSTANT_FLOAT32 bConstSpeedInit;
        MANUALSWITCH_FLOAT32 bCurrentDesired;
        PT1_FLOAT32 bCurrentIaFilter;
        CONSTANT_FLOAT32 bCurrentLimit;
        PILIMIT_FLOAT32 bCurrentReg;
        DIV_FLOAT32 bDiv2;
        NEGATION_FLOAT32 bNegation;
        NEGATION_FLOAT32 bNegation2;
        NEGATION_FLOAT32 bNegation3;
        NOT_BOOL bNot;
        GAIN_FLOAT32 bOmega;
        PT1_FLOAT32 bOmegaFilter;
        OR_BOOL bOr;
        MANUALSWITCH_FLOAT32 bOutputVoltage;
        CONSTANT_FLOAT32 bOutputVoltasgeLimit;
        PHI2SPEED_FLOAT32 bPhi2Rpm;
        GAIN_FLOAT32 bPulseGenAmplitude;
        CONSTANT_FLOAT32 bPulseGenConst1;
        CONSTANT_FLOAT32 bPulseGenDCVal;
        CONSTANT_FLOAT32 bPulseGenFreq;
        MANUALSWITCH_FLOAT32 bPulseGenOutput;
        SINGEN_FLOAT32 bPulseGenSin;
        RATELIMITER_FLOAT32 bRateLimiter;
        SATURATION_FLOAT32 bSaturation;
        SATURATION_FLOAT32 bSaturation2;
        SIGN_FLOAT32 bSign;
        MANUALSWITCH_FLOAT32 bSpeedDesired;
        CONSTANT_FLOAT32 bSpeedDesiredConst;
        PILIMIT_FLOAT32 bSpeedReg;
        SUB_FLOAT32 bSub1;
        SUB_FLOAT32 bSub2;
        TFLIPFLOP_BOOL bTFlipFlop;
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
