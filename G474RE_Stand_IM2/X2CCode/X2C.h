/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2026-04-13 11:29
 * 
 * X2C-Version: 6.4.2961
 * X2C-Edition: Educational
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_IM_LSP_1                                                                                              */
/* Date:  2026-04-13 11:29                                                                                            */

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
#include "VectorNormLimit_Float32.h"
#include "InvPark_Float32.h"
#include "Constant_Float32.h"
#include "Add_Float32.h"
#include "SinGen_Float32.h"
#include "SpaceVectorAdjust_Float32.h"
#include "SpaceVectorMod_Float32.h"
#include "uGain_Float32.h"
#include "Saturation_Float32.h"
#include "And_Bool.h"
#include "uI_Float32.h"
#include "Not_Bool.h"
#include "Or_Bool.h"
#include "TFlipFlop_Bool.h"
#include "AutoSwitch_Float32.h"
#include "Negation_Float32.h"
#include "ClarkeNPark_Float32.h"
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
    VECTORNORMLIMIT_FLOAT32_FUNCTIONS , \
    INVPARK_FLOAT32_FUNCTIONS , \
    CONSTANT_FLOAT32_FUNCTIONS , \
    ADD_FLOAT32_FUNCTIONS , \
    SINGEN_FLOAT32_FUNCTIONS , \
    SPACEVECTORADJUST_FLOAT32_FUNCTIONS , \
    SPACEVECTORMOD_FLOAT32_FUNCTIONS , \
    UGAIN_FLOAT32_FUNCTIONS , \
    SATURATION_FLOAT32_FUNCTIONS , \
    AND_BOOL_FUNCTIONS , \
    UI_FLOAT32_FUNCTIONS , \
    NOT_BOOL_FUNCTIONS , \
    OR_BOOL_FUNCTIONS , \
    TFLIPFLOP_BOOL_FUNCTIONS , \
    AUTOSWITCH_FLOAT32_FUNCTIONS , \
    NEGATION_FLOAT32_FUNCTIONS , \
    CLARKENPARK_FLOAT32_FUNCTIONS , \
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
    { 9, &x2cModel.blocks.bInvPark } , \
    { 10, &x2cModel.blocks.bNegation } , \
    { 11, &x2cModel.blocks.bNegation1 } , \
    { 12, &x2cModel.blocks.bNegation2 } , \
    { 13, &x2cModel.blocks.bNot } , \
    { 14, &x2cModel.blocks.bOmegaFilter } , \
    { 15, &x2cModel.blocks.bOr } , \
    { 16, &x2cModel.blocks.bPulseGenConst1 } , \
    { 17, &x2cModel.blocks.bPulseGenDCVal } , \
    { 18, &x2cModel.blocks.bPulseGenFreq } , \
    { 19, &x2cModel.blocks.bPulseGenHi } , \
    { 20, &x2cModel.blocks.bPulseGenLo } , \
    { 21, &x2cModel.blocks.bPulseGenOutput } , \
    { 22, &x2cModel.blocks.bPulseGenSin } , \
    { 23, &x2cModel.blocks.bRateLimiter } , \
    { 24, &x2cModel.blocks.bSpaceVectorAdjust } , \
    { 25, &x2cModel.blocks.bSpaceVectorMod } , \
    { 26, &x2cModel.blocks.bTFlipFlop } , \
    { 27, &x2cModel.blocks.bVdcFilter } , \
    { 28, &x2cModel.blocks.bVdcSaturation } , \
    { 29, &x2cModel.blocks.bVectorLimit } , \
    { 30, &x2cModel.blocks.bVectorNormLimit } , \
    { 31, &x2cModel.blocks.bVphase } , \
    { 32, &x2cModel.blocks.buGain } , \
    { 33, &x2cModel.blocks.buI1 } , \
    { 50, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 34, 1, &x2cModel.inports.bInButton } , \
    { 35, 1, &x2cModel.inports.bInEnable } , \
    { 36, 4, &x2cModel.inports.bInIa } , \
    { 37, 4, &x2cModel.inports.bInIb } , \
    { 38, 4, &x2cModel.inports.bInIc } , \
    { 39, 4, &x2cModel.inports.bInPosition1 } , \
    { 40, 4, &x2cModel.inports.bInPosition2 } , \
    { 41, 1, &x2cModel.inports.bInPwmFault } , \
    { 42, 4, &x2cModel.inports.bInVdc } , \
    { 43, 4, &x2cModel.inports.bInVelocity1_radps } , \
    { 44, 4, &x2cModel.inports.bInVelocity1_rpm } 

#define OUTPORT_PARAMID_TABLE \
    { 45, 1, &x2cModel.outports.bOutErrClear } , \
    { 46, 1, &x2cModel.outports.bOutPWMEnable } , \
    { 47, 4, &x2cModel.outports.bOutPWMa } , \
    { 48, 4, &x2cModel.outports.bOutPWMb } , \
    { 49, 4, &x2cModel.outports.bOutPWMc } 


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
        INVPARK_FLOAT32 bInvPark;
        NEGATION_FLOAT32 bNegation;
        NEGATION_FLOAT32 bNegation1;
        NEGATION_FLOAT32 bNegation2;
        NOT_BOOL bNot;
        LOWPASSBIQ_FLOAT32 bOmegaFilter;
        OR_BOOL bOr;
        CONSTANT_FLOAT32 bPulseGenConst1;
        CONSTANT_FLOAT32 bPulseGenDCVal;
        CONSTANT_FLOAT32 bPulseGenFreq;
        CONSTANT_FLOAT32 bPulseGenHi;
        CONSTANT_FLOAT32 bPulseGenLo;
        MANUALSWITCH_FLOAT32 bPulseGenOutput;
        SINGEN_FLOAT32 bPulseGenSin;
        RATELIMITER_FLOAT32 bRateLimiter;
        SPACEVECTORADJUST_FLOAT32 bSpaceVectorAdjust;
        SPACEVECTORMOD_FLOAT32 bSpaceVectorMod;
        TFLIPFLOP_BOOL bTFlipFlop;
        LOWPASSBIQ_FLOAT32 bVdcFilter;
        SATURATION_FLOAT32 bVdcSaturation;
        CONSTANT_FLOAT32 bVectorLimit;
        VECTORNORMLIMIT_FLOAT32 bVectorNormLimit;
        GAIN_FLOAT32 bVphase;
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
