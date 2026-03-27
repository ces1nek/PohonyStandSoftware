/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2026-03-27 13:49
 * 
 * X2C-Version: 6.4.2961
 * X2C-Edition: Educational
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_IM_LSP_2_FOC                                                                                          */
/* Date:  2026-03-27 13:49                                                                                            */

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
#include "Div_Float32.h"
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
#include "ManualSwitch_Bool.h"
#include "ClarkeNPark_Float32.h"
#include "ManualSwitch_Float32.h"
#include "Average_Float32.h"
#include "RateLimiter_Float32.h"
#include "VectorNormLimit_Float32.h"
#include "Constant_Float32.h"
#include "PILimit_Float32.h"
#include "LoopBreaker_Float32.h"
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
    DIV_FLOAT32_FUNCTIONS , \
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
    MANUALSWITCH_BOOL_FUNCTIONS , \
    CLARKENPARK_FLOAT32_FUNCTIONS , \
    MANUALSWITCH_FLOAT32_FUNCTIONS , \
    AVERAGE_FLOAT32_FUNCTIONS , \
    RATELIMITER_FLOAT32_FUNCTIONS , \
    VECTORNORMLIMIT_FLOAT32_FUNCTIONS , \
    CONSTANT_FLOAT32_FUNCTIONS , \
    PILIMIT_FLOAT32_FUNCTIONS , \
    LOOPBREAKER_FLOAT32_FUNCTIONS , \
    SATURATION_FLOAT32_FUNCTIONS , \
    AND_BOOL_FUNCTIONS , \
    NEGATION_FLOAT32_FUNCTIONS , \
    LOWPASSBIQ_FLOAT32_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bAdd } , \
    { 2, &x2cModel.blocks.bAnd } , \
    { 3, &x2cModel.blocks.bAutoSwitch } , \
    { 4, &x2cModel.blocks.bAverage } , \
    { 5, &x2cModel.blocks.bAverage1 } , \
    { 6, &x2cModel.blocks.bClarkeNPark } , \
    { 7, &x2cModel.blocks.bConst6 } , \
    { 8, &x2cModel.blocks.bCurrentPI_D } , \
    { 9, &x2cModel.blocks.bCurrentPI_Q } , \
    { 10, &x2cModel.blocks.bDiv } , \
    { 11, &x2cModel.blocks.bEna2 } , \
    { 12, &x2cModel.blocks.bEna3 } , \
    { 13, &x2cModel.blocks.bEna4 } , \
    { 14, &x2cModel.blocks.bEna7 } , \
    { 15, &x2cModel.blocks.bEna8 } , \
    { 16, &x2cModel.blocks.bEnable } , \
    { 17, &x2cModel.blocks.bImag } , \
    { 18, &x2cModel.blocks.bInit } , \
    { 19, &x2cModel.blocks.bInitCurr } , \
    { 20, &x2cModel.blocks.bInitPsi } , \
    { 21, &x2cModel.blocks.bInitSpeed } , \
    { 22, &x2cModel.blocks.bInvPark } , \
    { 23, &x2cModel.blocks.bLoopBreaker } , \
    { 24, &x2cModel.blocks.bLoopBreaker1 } , \
    { 25, &x2cModel.blocks.bManualSwitch } , \
    { 26, &x2cModel.blocks.bManualSwitch1 } , \
    { 27, &x2cModel.blocks.bManualSwitch2 } , \
    { 28, &x2cModel.blocks.bManualSwitch3 } , \
    { 29, &x2cModel.blocks.bManualSwitch4 } , \
    { 30, &x2cModel.blocks.bManualSwitch5 } , \
    { 31, &x2cModel.blocks.bMax } , \
    { 32, &x2cModel.blocks.bMaxSpeed } , \
    { 33, &x2cModel.blocks.bMin } , \
    { 34, &x2cModel.blocks.bMinSpeed } , \
    { 35, &x2cModel.blocks.bNegation } , \
    { 36, &x2cModel.blocks.bNegation1 } , \
    { 37, &x2cModel.blocks.bNegation2 } , \
    { 38, &x2cModel.blocks.bNot } , \
    { 39, &x2cModel.blocks.bOme_s } , \
    { 40, &x2cModel.blocks.bOmegaFilter } , \
    { 41, &x2cModel.blocks.bOr } , \
    { 42, &x2cModel.blocks.bPsiR_est } , \
    { 43, &x2cModel.blocks.bPulseGenConst1 } , \
    { 44, &x2cModel.blocks.bPulseGenDCVal } , \
    { 45, &x2cModel.blocks.bPulseGenFreq } , \
    { 46, &x2cModel.blocks.bPulseGenHi } , \
    { 47, &x2cModel.blocks.bPulseGenLo } , \
    { 48, &x2cModel.blocks.bPulseGenOutput } , \
    { 49, &x2cModel.blocks.bPulseGenSin } , \
    { 50, &x2cModel.blocks.bRR_ig } , \
    { 51, &x2cModel.blocks.bRR_ig1 } , \
    { 52, &x2cModel.blocks.bRR_ig_L_R } , \
    { 53, &x2cModel.blocks.bRateLimiter } , \
    { 54, &x2cModel.blocks.bSkluzovaOme } , \
    { 55, &x2cModel.blocks.bSpaceVectorAdjust } , \
    { 56, &x2cModel.blocks.bSpaceVectorMod } , \
    { 57, &x2cModel.blocks.bSpeedPI } , \
    { 58, &x2cModel.blocks.bSubId } , \
    { 59, &x2cModel.blocks.bSubId1 } , \
    { 60, &x2cModel.blocks.bSubIq } , \
    { 61, &x2cModel.blocks.bSubSpeed } , \
    { 62, &x2cModel.blocks.bTFlipFlop } , \
    { 63, &x2cModel.blocks.bVdcFilter } , \
    { 64, &x2cModel.blocks.bVdcSaturation } , \
    { 65, &x2cModel.blocks.bVectorLimit } , \
    { 66, &x2cModel.blocks.bVectorNormLimit } , \
    { 67, &x2cModel.blocks.bVphase } , \
    { 68, &x2cModel.blocks.bpp } , \
    { 69, &x2cModel.blocks.buI1 } , \
    { 70, &x2cModel.blocks.bwr_Sat } , \
    { 87, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 71, 1, &x2cModel.inports.bInButton } , \
    { 72, 1, &x2cModel.inports.bInEnable } , \
    { 73, 4, &x2cModel.inports.bInIa } , \
    { 74, 4, &x2cModel.inports.bInIb } , \
    { 75, 4, &x2cModel.inports.bInIc } , \
    { 76, 4, &x2cModel.inports.bInPosition1 } , \
    { 77, 4, &x2cModel.inports.bInPosition2 } , \
    { 78, 1, &x2cModel.inports.bInPwmFault } , \
    { 79, 4, &x2cModel.inports.bInVdc } , \
    { 80, 4, &x2cModel.inports.bInVelocity1_radps } , \
    { 81, 4, &x2cModel.inports.bInVelocity1_rpm } 

#define OUTPORT_PARAMID_TABLE \
    { 82, 1, &x2cModel.outports.bOutErrClear } , \
    { 83, 1, &x2cModel.outports.bOutPWMEnable } , \
    { 84, 4, &x2cModel.outports.bOutPWMa } , \
    { 85, 4, &x2cModel.outports.bOutPWMb } , \
    { 86, 4, &x2cModel.outports.bOutPWMc } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
        ADD_FLOAT32 bAdd;
        AND_BOOL bAnd;
        AUTOSWITCH_FLOAT32 bAutoSwitch;
        AVERAGE_FLOAT32 bAverage;
        AVERAGE_FLOAT32 bAverage1;
        CLARKENPARK_FLOAT32 bClarkeNPark;
        CONSTANT_FLOAT32 bConst6;
        PILIMIT_FLOAT32 bCurrentPI_D;
        PILIMIT_FLOAT32 bCurrentPI_Q;
        DIV_FLOAT32 bDiv;
        CONSTANT_BOOL bEna2;
        CONSTANT_BOOL bEna3;
        CONSTANT_BOOL bEna4;
        CONSTANT_BOOL bEna7;
        CONSTANT_BOOL bEna8;
        CONSTANT_BOOL bEnable;
        CONSTANT_FLOAT32 bImag;
        CONSTANT_FLOAT32 bInit;
        CONSTANT_FLOAT32 bInitCurr;
        CONSTANT_FLOAT32 bInitPsi;
        CONSTANT_FLOAT32 bInitSpeed;
        INVPARK_FLOAT32 bInvPark;
        LOOPBREAKER_FLOAT32 bLoopBreaker;
        LOOPBREAKER_FLOAT32 bLoopBreaker1;
        MANUALSWITCH_FLOAT32 bManualSwitch;
        MANUALSWITCH_BOOL bManualSwitch1;
        MANUALSWITCH_FLOAT32 bManualSwitch2;
        MANUALSWITCH_FLOAT32 bManualSwitch3;
        MANUALSWITCH_FLOAT32 bManualSwitch4;
        MANUALSWITCH_BOOL bManualSwitch5;
        CONSTANT_FLOAT32 bMax;
        CONSTANT_FLOAT32 bMaxSpeed;
        CONSTANT_FLOAT32 bMin;
        CONSTANT_FLOAT32 bMinSpeed;
        NEGATION_FLOAT32 bNegation;
        NEGATION_FLOAT32 bNegation1;
        NEGATION_FLOAT32 bNegation2;
        NOT_BOOL bNot;
        ADD_FLOAT32 bOme_s;
        LOWPASSBIQ_FLOAT32 bOmegaFilter;
        OR_BOOL bOr;
        UI_FLOAT32 bPsiR_est;
        CONSTANT_FLOAT32 bPulseGenConst1;
        CONSTANT_FLOAT32 bPulseGenDCVal;
        CONSTANT_FLOAT32 bPulseGenFreq;
        CONSTANT_FLOAT32 bPulseGenHi;
        CONSTANT_FLOAT32 bPulseGenLo;
        MANUALSWITCH_FLOAT32 bPulseGenOutput;
        SINGEN_FLOAT32 bPulseGenSin;
        GAIN_FLOAT32 bRR_ig;
        GAIN_FLOAT32 bRR_ig1;
        GAIN_FLOAT32 bRR_ig_L_R;
        RATELIMITER_FLOAT32 bRateLimiter;
        CONSTANT_FLOAT32 bSkluzovaOme;
        SPACEVECTORADJUST_FLOAT32 bSpaceVectorAdjust;
        SPACEVECTORMOD_FLOAT32 bSpaceVectorMod;
        PILIMIT_FLOAT32 bSpeedPI;
        SUB_FLOAT32 bSubId;
        SUB_FLOAT32 bSubId1;
        SUB_FLOAT32 bSubIq;
        SUB_FLOAT32 bSubSpeed;
        TFLIPFLOP_BOOL bTFlipFlop;
        LOWPASSBIQ_FLOAT32 bVdcFilter;
        SATURATION_FLOAT32 bVdcSaturation;
        CONSTANT_FLOAT32 bVectorLimit;
        VECTORNORMLIMIT_FLOAT32 bVectorNormLimit;
        GAIN_FLOAT32 bVphase;
        GAIN_FLOAT32 bpp;
        UI_FLOAT32 buI1;
        SATURATION_FLOAT32 bwr_Sat;
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
