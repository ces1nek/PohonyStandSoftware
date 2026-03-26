/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2026-03-25 13:45
 * 
 * X2C-Version: 6.4.2961
 * X2C-Edition: Educational
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_IM_LSP_1                                                                                              */
/* Date:  2026-03-25 13:45                                                                                            */

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
#include "Int2Real_Bool_Float32.h"
#include "ManualSwitch_Float32.h"
#include "Mult_Float32.h"
#include "RateLimiter_Float32.h"
#include "VectorNormLimit_Float32.h"
#include "Constant_Float32.h"
#include "PILimit_Float32.h"
#include "uGain_Float32.h"
#include "Saturation_Float32.h"
#include "And_Bool.h"
#include "StartDelay_Bool.h"
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
    INT2REAL_BOOL_FLOAT32_FUNCTIONS , \
    MANUALSWITCH_FLOAT32_FUNCTIONS , \
    MULT_FLOAT32_FUNCTIONS , \
    RATELIMITER_FLOAT32_FUNCTIONS , \
    VECTORNORMLIMIT_FLOAT32_FUNCTIONS , \
    CONSTANT_FLOAT32_FUNCTIONS , \
    PILIMIT_FLOAT32_FUNCTIONS , \
    UGAIN_FLOAT32_FUNCTIONS , \
    SATURATION_FLOAT32_FUNCTIONS , \
    AND_BOOL_FUNCTIONS , \
    STARTDELAY_BOOL_FUNCTIONS , \
    NEGATION_FLOAT32_FUNCTIONS , \
    LOWPASSBIQ_FLOAT32_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bAdd } , \
    { 2, &x2cModel.blocks.bAnd } , \
    { 3, &x2cModel.blocks.bAutoSwitch } , \
    { 4, &x2cModel.blocks.bClarkeNPark } , \
    { 5, &x2cModel.blocks.bConst6 } , \
    { 6, &x2cModel.blocks.bEna2 } , \
    { 7, &x2cModel.blocks.bEnable } , \
    { 8, &x2cModel.blocks.bInit } , \
    { 9, &x2cModel.blocks.bInt2Real } , \
    { 10, &x2cModel.blocks.bInt2Real1 } , \
    { 11, &x2cModel.blocks.bInvPark } , \
    { 12, &x2cModel.blocks.bIqFilter } , \
    { 13, &x2cModel.blocks.bManualSwitch } , \
    { 14, &x2cModel.blocks.bManualSwitch1 } , \
    { 15, &x2cModel.blocks.bMax } , \
    { 16, &x2cModel.blocks.bMax1 } , \
    { 17, &x2cModel.blocks.bMin } , \
    { 18, &x2cModel.blocks.bMult } , \
    { 19, &x2cModel.blocks.bMult1 } , \
    { 20, &x2cModel.blocks.bMult2 } , \
    { 21, &x2cModel.blocks.bNegation } , \
    { 22, &x2cModel.blocks.bNegation1 } , \
    { 23, &x2cModel.blocks.bNegation2 } , \
    { 24, &x2cModel.blocks.bNot } , \
    { 25, &x2cModel.blocks.bOme_s } , \
    { 26, &x2cModel.blocks.bOmegaFilter } , \
    { 27, &x2cModel.blocks.bOr } , \
    { 28, &x2cModel.blocks.bPILimit } , \
    { 29, &x2cModel.blocks.bPsi2Usd } , \
    { 30, &x2cModel.blocks.bPsiS } , \
    { 31, &x2cModel.blocks.bPulseGenConst1 } , \
    { 32, &x2cModel.blocks.bPulseGenDCVal } , \
    { 33, &x2cModel.blocks.bPulseGenFreq } , \
    { 34, &x2cModel.blocks.bPulseGenHi } , \
    { 35, &x2cModel.blocks.bPulseGenLo } , \
    { 36, &x2cModel.blocks.bPulseGenOutput } , \
    { 37, &x2cModel.blocks.bPulseGenSin } , \
    { 38, &x2cModel.blocks.bRateLimiter } , \
    { 39, &x2cModel.blocks.bRs } , \
    { 40, &x2cModel.blocks.bSkluzovaOme } , \
    { 41, &x2cModel.blocks.bSpaceVectorAdjust } , \
    { 42, &x2cModel.blocks.bSpaceVectorMod } , \
    { 43, &x2cModel.blocks.bStartDelay } , \
    { 44, &x2cModel.blocks.bSub } , \
    { 45, &x2cModel.blocks.bTFlipFlop } , \
    { 46, &x2cModel.blocks.bUq } , \
    { 47, &x2cModel.blocks.bUsqOffset } , \
    { 48, &x2cModel.blocks.bVdcFilter } , \
    { 49, &x2cModel.blocks.bVdcSaturation } , \
    { 50, &x2cModel.blocks.bVectorLimit } , \
    { 51, &x2cModel.blocks.bVectorNormLimit } , \
    { 52, &x2cModel.blocks.bVphase } , \
    { 53, &x2cModel.blocks.bpp } , \
    { 54, &x2cModel.blocks.buGain } , \
    { 55, &x2cModel.blocks.buI1 } , \
    { 72, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 56, 1, &x2cModel.inports.bInButton } , \
    { 57, 1, &x2cModel.inports.bInEnable } , \
    { 58, 4, &x2cModel.inports.bInIa } , \
    { 59, 4, &x2cModel.inports.bInIb } , \
    { 60, 4, &x2cModel.inports.bInIc } , \
    { 61, 4, &x2cModel.inports.bInPosition1 } , \
    { 62, 4, &x2cModel.inports.bInPosition2 } , \
    { 63, 1, &x2cModel.inports.bInPwmFault } , \
    { 64, 4, &x2cModel.inports.bInVdc } , \
    { 65, 4, &x2cModel.inports.bInVelocity1_radps } , \
    { 66, 4, &x2cModel.inports.bInVelocity1_rpm } 

#define OUTPORT_PARAMID_TABLE \
    { 67, 1, &x2cModel.outports.bOutErrClear } , \
    { 68, 1, &x2cModel.outports.bOutPWMEnable } , \
    { 69, 4, &x2cModel.outports.bOutPWMa } , \
    { 70, 4, &x2cModel.outports.bOutPWMb } , \
    { 71, 4, &x2cModel.outports.bOutPWMc } 


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
        CONSTANT_BOOL bEna2;
        CONSTANT_BOOL bEnable;
        CONSTANT_FLOAT32 bInit;
        INT2REAL_BOOL_FLOAT32 bInt2Real;
        INT2REAL_BOOL_FLOAT32 bInt2Real1;
        INVPARK_FLOAT32 bInvPark;
        LOWPASSBIQ_FLOAT32 bIqFilter;
        MANUALSWITCH_FLOAT32 bManualSwitch;
        MANUALSWITCH_FLOAT32 bManualSwitch1;
        CONSTANT_FLOAT32 bMax;
        CONSTANT_FLOAT32 bMax1;
        CONSTANT_FLOAT32 bMin;
        MULT_FLOAT32 bMult;
        MULT_FLOAT32 bMult1;
        MULT_FLOAT32 bMult2;
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
        STARTDELAY_BOOL bStartDelay;
        SUB_FLOAT32 bSub;
        TFLIPFLOP_BOOL bTFlipFlop;
        ADD_FLOAT32 bUq;
        CONSTANT_FLOAT32 bUsqOffset;
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
