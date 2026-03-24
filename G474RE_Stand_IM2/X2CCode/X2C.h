/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2026-03-24 16:20
 * 
 * X2C-Version: 6.4.2961
 * X2C-Edition: Educational
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_IM_LSP_1                                                                                              */
/* Date:  2026-03-24 16:20                                                                                            */

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
#include "Gain_Float32.h"
#include "InvPark_Float32.h"
#include "Add_Float32.h"
#include "SinGen_Float32.h"
#include "SpaceVectorAdjust_Float32.h"
#include "SpaceVectorMod_Float32.h"
#include "uI_Float32.h"
#include "Not_Bool.h"
#include "Or_Bool.h"
#include "Sub_Float32.h"
#include "TFlipFlop_Bool.h"
#include "AutoSwitch_Float32.h"
#include "ClarkeNPark_Float32.h"
#include "ManualSwitch_Float32.h"
#include "Mult_Float32.h"
#include "RateLimiter_Float32.h"
#include "VectorNormLimit_Float32.h"
#include "Constant_Float32.h"
#include "PILimit_Float32.h"
#include "uGain_Float32.h"
#include "Saturation_Float32.h"
#include "And_Bool.h"
#include "Negation_Float32.h"
#include "LowpassBiQ_Float32.h"
#include "Scope_Main.h"
#include "CommonFcts.h"

/**********************************************************************************************************************/
/**     Defines                                                                                                      **/
/**********************************************************************************************************************/
#define FUNCTIONS \
    CONSTANT_BOOL_FUNCTIONS , \
    GAIN_FLOAT32_FUNCTIONS , \
    INVPARK_FLOAT32_FUNCTIONS , \
    ADD_FLOAT32_FUNCTIONS , \
    SINGEN_FLOAT32_FUNCTIONS , \
    SPACEVECTORADJUST_FLOAT32_FUNCTIONS , \
    SPACEVECTORMOD_FLOAT32_FUNCTIONS , \
    UI_FLOAT32_FUNCTIONS , \
    NOT_BOOL_FUNCTIONS , \
    OR_BOOL_FUNCTIONS , \
    SUB_FLOAT32_FUNCTIONS , \
    TFLIPFLOP_BOOL_FUNCTIONS , \
    AUTOSWITCH_FLOAT32_FUNCTIONS , \
    CLARKENPARK_FLOAT32_FUNCTIONS , \
    MANUALSWITCH_FLOAT32_FUNCTIONS , \
    MULT_FLOAT32_FUNCTIONS , \
    RATELIMITER_FLOAT32_FUNCTIONS , \
    VECTORNORMLIMIT_FLOAT32_FUNCTIONS , \
    CONSTANT_FLOAT32_FUNCTIONS , \
    PILIMIT_FLOAT32_FUNCTIONS , \
    UGAIN_FLOAT32_FUNCTIONS , \
    SATURATION_FLOAT32_FUNCTIONS , \
    AND_BOOL_FUNCTIONS , \
    NEGATION_FLOAT32_FUNCTIONS , \
    LOWPASSBIQ_FLOAT32_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bAdd } , \
    { 2, &x2cModel.blocks.bAnd } , \
    { 3, &x2cModel.blocks.bAutoSwitch } , \
    { 4, &x2cModel.blocks.bClarkeNPark } , \
    { 5, &x2cModel.blocks.bConst6 } , \
    { 6, &x2cModel.blocks.bEna1 } , \
    { 7, &x2cModel.blocks.bEna2 } , \
    { 8, &x2cModel.blocks.bEnable } , \
    { 9, &x2cModel.blocks.bInit } , \
    { 10, &x2cModel.blocks.bInvPark } , \
    { 11, &x2cModel.blocks.bIqFilter } , \
    { 12, &x2cModel.blocks.bManualSwitch } , \
    { 13, &x2cModel.blocks.bMax } , \
    { 14, &x2cModel.blocks.bMax1 } , \
    { 15, &x2cModel.blocks.bMin } , \
    { 16, &x2cModel.blocks.bMult } , \
    { 17, &x2cModel.blocks.bNegation } , \
    { 18, &x2cModel.blocks.bNegation1 } , \
    { 19, &x2cModel.blocks.bNegation2 } , \
    { 20, &x2cModel.blocks.bNot } , \
    { 21, &x2cModel.blocks.bOme_s } , \
    { 22, &x2cModel.blocks.bOmegaFilter } , \
    { 23, &x2cModel.blocks.bOr } , \
    { 24, &x2cModel.blocks.bPILimit } , \
    { 25, &x2cModel.blocks.bPsi2Usd } , \
    { 26, &x2cModel.blocks.bPsiS } , \
    { 27, &x2cModel.blocks.bPulseGenConst1 } , \
    { 28, &x2cModel.blocks.bPulseGenDCVal } , \
    { 29, &x2cModel.blocks.bPulseGenFreq } , \
    { 30, &x2cModel.blocks.bPulseGenHi } , \
    { 31, &x2cModel.blocks.bPulseGenLo } , \
    { 32, &x2cModel.blocks.bPulseGenOutput } , \
    { 33, &x2cModel.blocks.bPulseGenSin } , \
    { 34, &x2cModel.blocks.bRateLimiter } , \
    { 35, &x2cModel.blocks.bRs } , \
    { 36, &x2cModel.blocks.bSkluzovaOme } , \
    { 37, &x2cModel.blocks.bSpaceVectorAdjust } , \
    { 38, &x2cModel.blocks.bSpaceVectorMod } , \
    { 39, &x2cModel.blocks.bSub } , \
    { 40, &x2cModel.blocks.bTFlipFlop } , \
    { 41, &x2cModel.blocks.bUq } , \
    { 42, &x2cModel.blocks.bVdcFilter } , \
    { 43, &x2cModel.blocks.bVdcSaturation } , \
    { 44, &x2cModel.blocks.bVectorLimit } , \
    { 45, &x2cModel.blocks.bVectorNormLimit } , \
    { 46, &x2cModel.blocks.bVphase } , \
    { 47, &x2cModel.blocks.bpp } , \
    { 48, &x2cModel.blocks.buGain } , \
    { 49, &x2cModel.blocks.buI1 } , \
    { 66, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 50, 1, &x2cModel.inports.bInButton } , \
    { 51, 1, &x2cModel.inports.bInEnable } , \
    { 52, 4, &x2cModel.inports.bInIa } , \
    { 53, 4, &x2cModel.inports.bInIb } , \
    { 54, 4, &x2cModel.inports.bInIc } , \
    { 55, 4, &x2cModel.inports.bInPosition1 } , \
    { 56, 4, &x2cModel.inports.bInPosition2 } , \
    { 57, 1, &x2cModel.inports.bInPwmFault } , \
    { 58, 4, &x2cModel.inports.bInVdc } , \
    { 59, 4, &x2cModel.inports.bInVelocity1_radps } , \
    { 60, 4, &x2cModel.inports.bInVelocity1_rpm } 

#define OUTPORT_PARAMID_TABLE \
    { 61, 1, &x2cModel.outports.bOutErrClear } , \
    { 62, 1, &x2cModel.outports.bOutPWMEnable } , \
    { 63, 4, &x2cModel.outports.bOutPWMa } , \
    { 64, 4, &x2cModel.outports.bOutPWMb } , \
    { 65, 4, &x2cModel.outports.bOutPWMc } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
        ADD_FLOAT32 bAdd;
        AND_BOOL bAnd;
        AUTOSWITCH_FLOAT32 bAutoSwitch;
        CLARKENPARK_FLOAT32 bClarkeNPark;
        CONSTANT_FLOAT32 bConst6;
        CONSTANT_BOOL bEna1;
        CONSTANT_BOOL bEna2;
        CONSTANT_BOOL bEnable;
        CONSTANT_FLOAT32 bInit;
        INVPARK_FLOAT32 bInvPark;
        LOWPASSBIQ_FLOAT32 bIqFilter;
        MANUALSWITCH_FLOAT32 bManualSwitch;
        CONSTANT_FLOAT32 bMax;
        CONSTANT_FLOAT32 bMax1;
        CONSTANT_FLOAT32 bMin;
        MULT_FLOAT32 bMult;
        NEGATION_FLOAT32 bNegation;
        NEGATION_FLOAT32 bNegation1;
        NEGATION_FLOAT32 bNegation2;
        NOT_BOOL bNot;
        ADD_FLOAT32 bOme_s;
        LOWPASSBIQ_FLOAT32 bOmegaFilter;
        OR_BOOL bOr;
        PILIMIT_FLOAT32 bPILimit;
        GAIN_FLOAT32 bPsi2Usd;
        CONSTANT_FLOAT32 bPsiS;
        CONSTANT_FLOAT32 bPulseGenConst1;
        CONSTANT_FLOAT32 bPulseGenDCVal;
        CONSTANT_FLOAT32 bPulseGenFreq;
        CONSTANT_FLOAT32 bPulseGenHi;
        CONSTANT_FLOAT32 bPulseGenLo;
        MANUALSWITCH_FLOAT32 bPulseGenOutput;
        SINGEN_FLOAT32 bPulseGenSin;
        RATELIMITER_FLOAT32 bRateLimiter;
        GAIN_FLOAT32 bRs;
        CONSTANT_FLOAT32 bSkluzovaOme;
        SPACEVECTORADJUST_FLOAT32 bSpaceVectorAdjust;
        SPACEVECTORMOD_FLOAT32 bSpaceVectorMod;
        SUB_FLOAT32 bSub;
        TFLIPFLOP_BOOL bTFlipFlop;
        ADD_FLOAT32 bUq;
        LOWPASSBIQ_FLOAT32 bVdcFilter;
        SATURATION_FLOAT32 bVdcSaturation;
        CONSTANT_FLOAT32 bVectorLimit;
        VECTORNORMLIMIT_FLOAT32 bVectorNormLimit;
        GAIN_FLOAT32 bVphase;
        GAIN_FLOAT32 bpp;
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
