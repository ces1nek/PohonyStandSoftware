/* This file is part of X2C. web: x2c.lcm.at                                                                          */

/* Model: stand_DCM                                                                                                   */
/* Date:  2026-11-04 16:53                                                                                            */

/* X2C-Version: 6.6.4297                                                                                              */
/* X2C-Edition: Educational                                                                                           */

/* RULECHECKER_comment("X2C.c", check_function_pointer_cast, "see X2C MISRA Deviations, DEV0014", true_no_defect)     */
/* RULECHECKER_comment("X2C.c", check_local_object_scope, "see X2C MISRA Deviations, DEV0015", true_no_defect)        */

/* Common includes                                                                                                    */
#include <stddef.h>
#include "TableStruct.h"
/* Generated file includes                                                                                            */
#include "FlashTable.h"
#include "RamTable.h"
#include "X2C.h"

/**********************************************************************************************************************/
/**                                                       Model                                                      **/
/**********************************************************************************************************************/
struct X2cModel x2cModel;

/* Model identifier                                                                                                   */
const uint32 x2cModelIdentifier = 0xA9998CEBu;

/**********************************************************************************************************************/
/**                                                       Scope                                                      **/
/**********************************************************************************************************************/
SCOPE_MAIN x2cScope;

/* Block function table                                                                                               */
static const tBlockFunctions blockFunctionTable [20] = {
    FUNCTIONS,
    { 0u, NULL, NULL, NULL, NULL, NULL } /* End of table entry */
};

/* Parameter identifier table                                                                                         */
static const tParameterTable parameterIdTable [42] = {
    PARAMETER_TABLE,
    { 0u, NULL } /* End of table entry */
};

/* Inport Parameter identifier table                                                                                  */
static const tIoParamIdEntry inportParamIdTable [12] = {
    INPORT_PARAMID_TABLE, 
    { 0u, 0u, NULL } /* End of table entry */
};

/* Outport Parameter identifier table                                                                                 */
static const tIoParamIdEntry outportParamIdTable [6] = {
    OUTPORT_PARAMID_TABLE, 
    { 0u, 0u, NULL } /* End of table entry */
};

/* Mask Parameter identifier table                                                                                    */
static const tMaskParameterEntry maskParamIdTable [1] = {
    { 0u, NULL, NULL, NULL, NULL } /* End of table entry */
};

/* Extended Mask Parameter identifier table (used by Model API)                                                       */
const tMaskParamExtRecord maskParamExtTable [1] = {
    { 0u, 0u, NULL, NULL, NULL, NULL, NULL } /* End of table entry */
};

/* Mask Parameter data table (used by Model API)                                                                      */
const tMaskParamDataRecord maskParamDataTable [1] = {
    { 0u, 0u, NULL, 0u, 0u } /* End of table entry */
};


/**********************************************************************************************************************/
/** Model Sample Time                                                                                                **/
/**********************************************************************************************************************/
float_CoT getModelSampleTime(void)
{
    return ((float_CoT)5.0E-5);
}

/**********************************************************************************************************************/
/**                                                  Initialization                                                  **/
/**********************************************************************************************************************/
void X2C_Init(void)
{
    /******************************************************************************************************************/
    /**                                          Initialize Block Parameters                                         **/
    /******************************************************************************************************************/

    /* Block: AutoSwitch                                                                                              */
    /* Thresh_up = 0.01                                                                                               */
    /* Thresh_down = -0.01                                                                                            */
    x2cModel.blocks.bAutoSwitch.Thresh_up = 0.01f;
    x2cModel.blocks.bAutoSwitch.Thresh_down = -0.01f;
    x2cModel.blocks.bAutoSwitch.Status = &RamTable_float32[0];

    /* Block: Const6                                                                                                  */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConst6.K = 0.0f;

    /* Block: CtlLogic/And                                                                                            */

    /* Block: CtlLogic/ConstFalse                                                                                     */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sCtlLogic.bConstFalse.K = 0u;

    /* Block: CtlLogic/Not                                                                                            */

    /* Block: CtlLogic/Or                                                                                             */

    /* Block: CtlLogic/TFlipFlop                                                                                      */
    x2cModel.blocks.sCtlLogic.bTFlipFlop.toggle_old = 0u;

    /* Block: PulseGenConst1                                                                                          */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bPulseGenConst1.K = 1.0f;

    /* Block: PulseGenDCVal                                                                                           */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bPulseGenDCVal.K = 0.0f;

    /* Block: PulseGenFreq                                                                                            */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bPulseGenFreq.K = 1.0f;

    /* Block: PulseGenHi                                                                                              */
    /* Value = 5.0                                                                                                    */
    x2cModel.blocks.bPulseGenHi.K = 5.0f;

    /* Block: PulseGenLo                                                                                              */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bPulseGenLo.K = 0.0f;

    /* Block: PulseGenOutput                                                                                          */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bPulseGenOutput.Toggle = 0u;
    x2cModel.blocks.bPulseGenOutput.SelectedIn = &RamTable_float32[1];

    /* Block: PulseGenSin                                                                                             */
    /* fmax = 1000.0                                                                                                  */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bPulseGenSin.delta_phi = 0.00628318530717959f;
    x2cModel.blocks.bPulseGenSin.phase = 0.0f;
    x2cModel.blocks.bPulseGenSin.offset = 0.0f;
    x2cModel.blocks.bPulseGenSin.phi = 0.0f;

    /* Block: PwmGen/Constant                                                                                         */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sPwmGen.bConstant.K = 0.0f;

    /* Block: PwmGen/Div2                                                                                             */

    /* Block: PwmGen/Negation                                                                                         */

    /* Block: PwmGen/Saturation                                                                                       */
    /* max = 0.999999                                                                                                 */
    /* min = -0.999999                                                                                                */
    x2cModel.blocks.sPwmGen.bSaturation.max = 0.999999f;
    x2cModel.blocks.sPwmGen.bSaturation.min = -0.999999f;

    /* Block: PwmGen/Saturation2                                                                                      */
    /* max = 60.0                                                                                                     */
    /* min = 10.0                                                                                                     */
    x2cModel.blocks.sPwmGen.bSaturation2.max = 60.0f;
    x2cModel.blocks.sPwmGen.bSaturation2.min = 10.0f;

    /* Block: RateLimiter                                                                                             */
    /* Tr = 0.1                                                                                                       */
    /* Tf = 0.1                                                                                                       */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bRateLimiter.RateUp = 0.01f;
    x2cModel.blocks.bRateLimiter.RateDown = 0.01f;
    x2cModel.blocks.bRateLimiter.enable_old = 0u;

    /* Block: RegCurrent/ConstCurrentInit                                                                             */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sRegCurrent.bConstCurrentInit.K = 0.0f;

    /* Block: RegCurrent/CurrentReg                                                                                   */
    /* Kp = 3.6373333333333333                                                                                        */
    /* Ki = 1653.3333333333333                                                                                        */
    /* initHandling = initialize integral                                                                             */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.sRegCurrent.bCurrentReg.b0 = 0.08266666666666667f;
    x2cModel.blocks.sRegCurrent.bCurrentReg.b1 = 3.6373333333333333f;
    x2cModel.blocks.sRegCurrent.bCurrentReg.i_old = 0.0f;
    x2cModel.blocks.sRegCurrent.bCurrentReg.enable_old = 0u;
    x2cModel.blocks.sRegCurrent.bCurrentReg.initHandling = 0u;

    /* Block: RegCurrent/Negation2                                                                                    */

    /* Block: RegCurrent/OutputVoltageLimit                                                                           */
    /* Value = 29.0                                                                                                   */
    x2cModel.blocks.sRegCurrent.bOutputVoltageLimit.K = 29.0f;

    /* Block: RegCurrent/Sub1                                                                                         */

    /* Block: SubVelocity/CFiOmega                                                                                    */
    /* Gain = 0.0661                                                                                                  */
    x2cModel.blocks.sSubVelocity.bCFiOmega.V = 0.0661f;

    /* Block: SubVelocity/ConstSpeedInit                                                                              */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sSubVelocity.bConstSpeedInit.K = 0.0f;

    /* Block: SubVelocity/CurrentLimit                                                                                */
    /* Value = 30.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bCurrentLimit.K = 30.0f;

    /* Block: SubVelocity/MeasVelocity                                                                                */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bMeasVelocity.Toggle = 0u;
    x2cModel.blocks.sSubVelocity.bMeasVelocity.SelectedIn = &RamTable_float32[2];

    /* Block: SubVelocity/Negation3                                                                                   */

    /* Block: SubVelocity/Omega                                                                                       */
    /* Gain = 0.10471975511965977                                                                                     */
    x2cModel.blocks.sSubVelocity.bOmega.V = 0.10471975511965977f;

    /* Block: SubVelocity/OmegaFilter                                                                                 */
    /* characteristic = Chebyshev II                                                                                  */
    /* fc = 200.0                                                                                                     */
    /* rp = 1.0                                                                                                       */
    /* rs = 20.0                                                                                                      */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sSubVelocity.bOmegaFilter.b0 = 0.1333590867787395f;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.b1 = 0.00723037956876145f;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.b2 = 0.1333590867787395f;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.a1 = -1.160464693380468f;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.a2 = 0.43441324650670854f;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.in_old = 0.0f;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.in_veryold = 0.0f;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.out_old = 0.0f;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.out_veryold = 0.0f;

    /* Block: SubVelocity/Phi2Rpm                                                                                     */
    /* n_max = 3000.0                                                                                                 */
    /* p = 1.0                                                                                                        */
    /* fc = 200.0                                                                                                     */
    /* ts_fact = 20.0                                                                                                 */
    /* method = tustin                                                                                                */
    x2cModel.blocks.sSubVelocity.bPhi2Rpm.b = 7369.565458859551f;
    x2cModel.blocks.sSubVelocity.bPhi2Rpm.a0 = -0.2282609098099249f;
    x2cModel.blocks.sSubVelocity.bPhi2Rpm.phi_old = 0.0f;
    x2cModel.blocks.sSubVelocity.bPhi2Rpm.n_old = 0.0f;

    /* Block: SubVelocity/SpeedReg                                                                                    */
    /* Kp = 1.5465560124255766                                                                                        */
    /* Ki = 71.863784782526                                                                                           */
    /* initHandling = initialize integral                                                                             */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sSubVelocity.bSpeedReg.b0 = 0.071863784782526f;
    x2cModel.blocks.sSubVelocity.bSpeedReg.b1 = 1.5465560124255766f;
    x2cModel.blocks.sSubVelocity.bSpeedReg.i_old = 0.0f;
    x2cModel.blocks.sSubVelocity.bSpeedReg.enable_old = 0u;
    x2cModel.blocks.sSubVelocity.bSpeedReg.initHandling = 0u;

    /* Block: SubVelocity/Sub2                                                                                        */

    /* Block: SwIsetpoint                                                                                             */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bSwIsetpoint.Toggle = 1u;
    x2cModel.blocks.bSwIsetpoint.SelectedIn = &RamTable_float32[3];

    /* Block: SwVoltSet                                                                                               */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bSwVoltSet.Toggle = 1u;
    x2cModel.blocks.bSwVoltSet.SelectedIn = &RamTable_float32[4];

    /* Block: TorqueCalc/CFiIa                                                                                        */
    /* Gain = 0.0661                                                                                                  */
    x2cModel.blocks.sTorqueCalc.bCFiIa.V = 0.0661f;

    /* Block: TorqueCalc/IaFilter                                                                                     */
    /* characteristic = Chebyshev II                                                                                  */
    /* fc = 100.0                                                                                                     */
    /* rp = 1.0                                                                                                       */
    /* rs = 20.0                                                                                                      */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sTorqueCalc.bIaFilter.b0 = 0.0995953541992128f;
    x2cModel.blocks.sTorqueCalc.bIaFilter.b1 = -0.1297387042800058f;
    x2cModel.blocks.sTorqueCalc.bIaFilter.b2 = 0.09959535419921278f;
    x2cModel.blocks.sTorqueCalc.bIaFilter.a1 = -1.6099210613329478f;
    x2cModel.blocks.sTorqueCalc.bIaFilter.a2 = 0.6793730654513674f;
    x2cModel.blocks.sTorqueCalc.bIaFilter.in_old = 0.0f;
    x2cModel.blocks.sTorqueCalc.bIaFilter.in_veryold = 0.0f;
    x2cModel.blocks.sTorqueCalc.bIaFilter.out_old = 0.0f;
    x2cModel.blocks.sTorqueCalc.bIaFilter.out_veryold = 0.0f;

    /* Block: VdcFilter                                                                                               */
    /* characteristic = Chebyshev II                                                                                  */
    /* fc = 100.0                                                                                                     */
    /* rp = 1.0                                                                                                       */
    /* rs = 20.0                                                                                                      */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bVdcFilter.b0 = 0.0995953541992128f;
    x2cModel.blocks.bVdcFilter.b1 = -0.1297387042800058f;
    x2cModel.blocks.bVdcFilter.b2 = 0.09959535419921278f;
    x2cModel.blocks.bVdcFilter.a1 = -1.6099210613329478f;
    x2cModel.blocks.bVdcFilter.a2 = 0.6793730654513674f;
    x2cModel.blocks.bVdcFilter.in_old = 0.0f;
    x2cModel.blocks.bVdcFilter.in_veryold = 0.0f;
    x2cModel.blocks.bVdcFilter.out_old = 0.0f;
    x2cModel.blocks.bVdcFilter.out_veryold = 0.0f;


    /* Initialize RAM table content */
    initRamTables();

    /******************************************************************************************************************/
    /**                                              Initialize Inports                                              **/
    /******************************************************************************************************************/
    x2cModel.inports.bInButton = false;
    x2cModel.inports.bInEnable = false;
    x2cModel.inports.bInIa = (float32)0;
    x2cModel.inports.bInIb = (float32)0;
    x2cModel.inports.bInIc = (float32)0;
    x2cModel.inports.bInPosition1 = (float32)0;
    x2cModel.inports.bInPosition2 = (float32)0;
    x2cModel.inports.bInPwmFault = false;
    x2cModel.inports.bInVdc = (float32)0;
    x2cModel.inports.bInVelocity1_radps = (float32)0;
    x2cModel.inports.bInVelocity1_rpm = (float32)0;

    /******************************************************************************************************************/
    /**                                               Link Block Inputs                                              **/
    /******************************************************************************************************************/

    /* Block AutoSwitch                                                                                               */
    x2cModel.blocks.bAutoSwitch.In1 =
        &x2cModel.blocks.bPulseGenHi.Out;
    x2cModel.blocks.bAutoSwitch.Switch =
        &x2cModel.blocks.bPulseGenSin.u;
    x2cModel.blocks.bAutoSwitch.In3 =
        &x2cModel.blocks.bPulseGenLo.Out;

    /* Block Const6                                                                                                   */

    /* Block And                                                                                                      */
    x2cModel.blocks.sCtlLogic.bAnd.In1 =
        &x2cModel.blocks.sCtlLogic.bOr.Out;
    x2cModel.blocks.sCtlLogic.bAnd.In2 =
        &x2cModel.blocks.sCtlLogic.bTFlipFlop.Q;

    /* Block ConstFalse                                                                                               */

    /* Block Not                                                                                                      */
    x2cModel.blocks.sCtlLogic.bNot.In =
        &x2cModel.blocks.sCtlLogic.bConstFalse.Out;

    /* Block Or                                                                                                       */
    x2cModel.blocks.sCtlLogic.bOr.In1 =
        &x2cModel.inports.bInEnable;
    x2cModel.blocks.sCtlLogic.bOr.In2 =
        &x2cModel.blocks.sCtlLogic.bNot.Out;

    /* Block TFlipFlop                                                                                                */
    x2cModel.blocks.sCtlLogic.bTFlipFlop.T =
        &x2cModel.inports.bInButton;

    /* Block PulseGenConst1                                                                                           */

    /* Block PulseGenDCVal                                                                                            */

    /* Block PulseGenFreq                                                                                             */

    /* Block PulseGenHi                                                                                               */

    /* Block PulseGenLo                                                                                               */

    /* Block PulseGenOutput                                                                                           */
    x2cModel.blocks.bPulseGenOutput.In1 =
        &x2cModel.blocks.bAutoSwitch.Out;
    x2cModel.blocks.bPulseGenOutput.In2 =
        &x2cModel.blocks.bRateLimiter.Out;

    /* Block PulseGenSin                                                                                              */
    x2cModel.blocks.bPulseGenSin.A =
        &x2cModel.blocks.bPulseGenConst1.Out;
    x2cModel.blocks.bPulseGenSin.f =
        &x2cModel.blocks.bPulseGenFreq.Out;

    /* Block Constant                                                                                                 */

    /* Block Div2                                                                                                     */
    x2cModel.blocks.sPwmGen.bDiv2.Num =
        &x2cModel.blocks.bSwVoltSet.Out;
    x2cModel.blocks.sPwmGen.bDiv2.Den =
        &x2cModel.blocks.sPwmGen.bSaturation2.Out;

    /* Block Negation                                                                                                 */
    x2cModel.blocks.sPwmGen.bNegation.In =
        &x2cModel.blocks.sPwmGen.bSaturation.Out;

    /* Block Saturation                                                                                               */
    x2cModel.blocks.sPwmGen.bSaturation.In =
        &x2cModel.blocks.sPwmGen.bDiv2.Out;

    /* Block Saturation2                                                                                              */
    x2cModel.blocks.sPwmGen.bSaturation2.In =
        &x2cModel.blocks.bVdcFilter.Out;

    /* Block RateLimiter                                                                                              */
    x2cModel.blocks.bRateLimiter.In =
        &x2cModel.blocks.bPulseGenDCVal.Out;
    x2cModel.blocks.bRateLimiter.Init =
        &x2cModel.blocks.bConst6.Out;
    x2cModel.blocks.bRateLimiter.Enable =
        &x2cModel.blocks.sCtlLogic.bAnd.Out;

    /* Block ConstCurrentInit                                                                                         */

    /* Block CurrentReg                                                                                               */
    x2cModel.blocks.sRegCurrent.bCurrentReg.In =
        &x2cModel.blocks.sRegCurrent.bSub1.Out;
    x2cModel.blocks.sRegCurrent.bCurrentReg.Init =
        &x2cModel.blocks.sRegCurrent.bConstCurrentInit.Out;
    x2cModel.blocks.sRegCurrent.bCurrentReg.max =
        &x2cModel.blocks.sRegCurrent.bOutputVoltageLimit.Out;
    x2cModel.blocks.sRegCurrent.bCurrentReg.min =
        &x2cModel.blocks.sRegCurrent.bNegation2.Out;
    x2cModel.blocks.sRegCurrent.bCurrentReg.Enable =
        &x2cModel.blocks.sCtlLogic.bAnd.Out;

    /* Block Negation2                                                                                                */
    x2cModel.blocks.sRegCurrent.bNegation2.In =
        &x2cModel.blocks.sRegCurrent.bOutputVoltageLimit.Out;

    /* Block OutputVoltageLimit                                                                                       */

    /* Block Sub1                                                                                                     */
    x2cModel.blocks.sRegCurrent.bSub1.Plus =
        &x2cModel.blocks.bSwIsetpoint.Out;
    x2cModel.blocks.sRegCurrent.bSub1.Minus =
        &x2cModel.inports.bInIa;

    /* Block CFiOmega                                                                                                 */
    x2cModel.blocks.sSubVelocity.bCFiOmega.In =
        &x2cModel.blocks.sSubVelocity.bOmegaFilter.Out;

    /* Block ConstSpeedInit                                                                                           */

    /* Block CurrentLimit                                                                                             */

    /* Block MeasVelocity                                                                                             */
    x2cModel.blocks.sSubVelocity.bMeasVelocity.In1 =
        &x2cModel.inports.bInVelocity1_radps;
    x2cModel.blocks.sSubVelocity.bMeasVelocity.In2 =
        &x2cModel.blocks.sSubVelocity.bOmega.Out;

    /* Block Negation3                                                                                                */
    x2cModel.blocks.sSubVelocity.bNegation3.In =
        &x2cModel.blocks.sSubVelocity.bCurrentLimit.Out;

    /* Block Omega                                                                                                    */
    x2cModel.blocks.sSubVelocity.bOmega.In =
        &x2cModel.blocks.sSubVelocity.bPhi2Rpm.n;

    /* Block OmegaFilter                                                                                              */
    x2cModel.blocks.sSubVelocity.bOmegaFilter.In =
        &x2cModel.blocks.sSubVelocity.bMeasVelocity.Out;

    /* Block Phi2Rpm                                                                                                  */
    x2cModel.blocks.sSubVelocity.bPhi2Rpm.phi =
        &x2cModel.inports.bInPosition1;

    /* Block SpeedReg                                                                                                 */
    x2cModel.blocks.sSubVelocity.bSpeedReg.In =
        &x2cModel.blocks.sSubVelocity.bSub2.Out;
    x2cModel.blocks.sSubVelocity.bSpeedReg.Init =
        &x2cModel.blocks.sSubVelocity.bConstSpeedInit.Out;
    x2cModel.blocks.sSubVelocity.bSpeedReg.max =
        &x2cModel.blocks.sSubVelocity.bCurrentLimit.Out;
    x2cModel.blocks.sSubVelocity.bSpeedReg.min =
        &x2cModel.blocks.sSubVelocity.bNegation3.Out;
    x2cModel.blocks.sSubVelocity.bSpeedReg.Enable =
        &x2cModel.blocks.sCtlLogic.bAnd.Out;

    /* Block Sub2                                                                                                     */
    x2cModel.blocks.sSubVelocity.bSub2.Plus =
        &x2cModel.blocks.bPulseGenOutput.Out;
    x2cModel.blocks.sSubVelocity.bSub2.Minus =
        &x2cModel.blocks.sSubVelocity.bOmegaFilter.Out;

    /* Block SwIsetpoint                                                                                              */
    x2cModel.blocks.bSwIsetpoint.In1 =
        &x2cModel.blocks.sSubVelocity.bSpeedReg.Out;
    x2cModel.blocks.bSwIsetpoint.In2 =
        &x2cModel.blocks.bPulseGenOutput.Out;

    /* Block SwVoltSet                                                                                                */
    x2cModel.blocks.bSwVoltSet.In1 =
        &x2cModel.blocks.sRegCurrent.bCurrentReg.Out;
    x2cModel.blocks.bSwVoltSet.In2 =
        &x2cModel.blocks.bPulseGenOutput.Out;

    /* Block CFiIa                                                                                                    */
    x2cModel.blocks.sTorqueCalc.bCFiIa.In =
        &x2cModel.blocks.sTorqueCalc.bIaFilter.Out;

    /* Block IaFilter                                                                                                 */
    x2cModel.blocks.sTorqueCalc.bIaFilter.In =
        &x2cModel.inports.bInIa;

    /* Block VdcFilter                                                                                                */
    x2cModel.blocks.bVdcFilter.In =
        &x2cModel.inports.bInVdc;

    /******************************************************************************************************************/
    /**                                                 Link Outports                                                **/
    /******************************************************************************************************************/
    x2cModel.outports.bOutErrClear =
        &x2cModel.inports.bInButton;
    x2cModel.outports.bOutPWMEnable =
        &x2cModel.blocks.sCtlLogic.bAnd.Out;
    x2cModel.outports.bOutPWMa =
        &x2cModel.blocks.sPwmGen.bSaturation.Out;
    x2cModel.outports.bOutPWMb =
        &x2cModel.blocks.sPwmGen.bNegation.Out;
    x2cModel.outports.bOutPWMc =
        &x2cModel.blocks.sPwmGen.bConstant.Out;

    /******************************************************************************************************************/
    /**                                           Run Block Init Functions                                           **/
    /******************************************************************************************************************/
    AutoSwitch_Float32_Init(&x2cModel.blocks.bAutoSwitch);
    Constant_Float32_Init(&x2cModel.blocks.bConst6);
    And_Bool_Init(&x2cModel.blocks.sCtlLogic.bAnd);
    Constant_Bool_Init(&x2cModel.blocks.sCtlLogic.bConstFalse);
    Not_Bool_Init(&x2cModel.blocks.sCtlLogic.bNot);
    Or_Bool_Init(&x2cModel.blocks.sCtlLogic.bOr);
    TFlipFlop_Bool_Init(&x2cModel.blocks.sCtlLogic.bTFlipFlop);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenConst1);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenDCVal);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenFreq);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenHi);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenLo);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bPulseGenOutput);
    SinGen_Float32_Init(&x2cModel.blocks.bPulseGenSin);
    Constant_Float32_Init(&x2cModel.blocks.sPwmGen.bConstant);
    Div_Float32_Init(&x2cModel.blocks.sPwmGen.bDiv2);
    Negation_Float32_Init(&x2cModel.blocks.sPwmGen.bNegation);
    Saturation_Float32_Init(&x2cModel.blocks.sPwmGen.bSaturation);
    Saturation_Float32_Init(&x2cModel.blocks.sPwmGen.bSaturation2);
    RateLimiter_Float32_Init(&x2cModel.blocks.bRateLimiter);
    Constant_Float32_Init(&x2cModel.blocks.sRegCurrent.bConstCurrentInit);
    PILimit_Float32_Init(&x2cModel.blocks.sRegCurrent.bCurrentReg);
    Negation_Float32_Init(&x2cModel.blocks.sRegCurrent.bNegation2);
    Constant_Float32_Init(&x2cModel.blocks.sRegCurrent.bOutputVoltageLimit);
    Sub_Float32_Init(&x2cModel.blocks.sRegCurrent.bSub1);
    Gain_Float32_Init(&x2cModel.blocks.sSubVelocity.bCFiOmega);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bConstSpeedInit);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bCurrentLimit);
    ManualSwitch_Float32_Init(&x2cModel.blocks.sSubVelocity.bMeasVelocity);
    Negation_Float32_Init(&x2cModel.blocks.sSubVelocity.bNegation3);
    Gain_Float32_Init(&x2cModel.blocks.sSubVelocity.bOmega);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.sSubVelocity.bOmegaFilter);
    Phi2Speed_Float32_Init(&x2cModel.blocks.sSubVelocity.bPhi2Rpm);
    PILimit_Float32_Init(&x2cModel.blocks.sSubVelocity.bSpeedReg);
    Sub_Float32_Init(&x2cModel.blocks.sSubVelocity.bSub2);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bSwIsetpoint);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bSwVoltSet);
    Gain_Float32_Init(&x2cModel.blocks.sTorqueCalc.bCFiIa);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.sTorqueCalc.bIaFilter);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.bVdcFilter);
    Scope_Main_Init(&x2cScope);

    /* Initialize TableStruct tables                                                                                  */
    TableStruct->TFncTable = blockFunctionTable;
    TableStruct->TParamTable = parameterIdTable;
    TableStruct->inportParamTable = inportParamIdTable;
    TableStruct->outportParamTable = outportParamIdTable;
    TableStruct->maskParameterTable = maskParamIdTable;
}

/**********************************************************************************************************************/
/**                                            Run Block Update Functions                                            **/
/**********************************************************************************************************************/
/* X2C_Update for blocks with 1*Ts                                                                                    */
void X2C_Update_1(void)
{
    AutoSwitch_Float32_Update(&x2cModel.blocks.bAutoSwitch);
    Negation_Float32_Update(&x2cModel.blocks.sRegCurrent.bNegation2);
    Not_Bool_Update(&x2cModel.blocks.sCtlLogic.bNot);
    Or_Bool_Update(&x2cModel.blocks.sCtlLogic.bOr);
    TFlipFlop_Bool_Update(&x2cModel.blocks.sCtlLogic.bTFlipFlop);
    And_Bool_Update(&x2cModel.blocks.sCtlLogic.bAnd);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bPulseGenOutput);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bSwIsetpoint);
    Sub_Float32_Update(&x2cModel.blocks.sRegCurrent.bSub1);
    PILimit_Float32_Update(&x2cModel.blocks.sRegCurrent.bCurrentReg);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bSwVoltSet);
    Div_Float32_Update(&x2cModel.blocks.sPwmGen.bDiv2);
    Saturation_Float32_Update(&x2cModel.blocks.sPwmGen.bSaturation);
    Negation_Float32_Update(&x2cModel.blocks.sPwmGen.bNegation);
    Scope_Main_Update(&x2cScope);
}

/* X2C_Update for blocks with 20*Ts                                                                                   */
void X2C_Update_20(void)
{
    Phi2Speed_Float32_Update(&x2cModel.blocks.sSubVelocity.bPhi2Rpm);
    SinGen_Float32_Update(&x2cModel.blocks.bPulseGenSin);
    Gain_Float32_Update(&x2cModel.blocks.sSubVelocity.bOmega);
    ManualSwitch_Float32_Update(&x2cModel.blocks.sSubVelocity.bMeasVelocity);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.sSubVelocity.bOmegaFilter);
    Negation_Float32_Update(&x2cModel.blocks.sSubVelocity.bNegation3);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.bVdcFilter);
    Saturation_Float32_Update(&x2cModel.blocks.sPwmGen.bSaturation2);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.sTorqueCalc.bIaFilter);
    Gain_Float32_Update(&x2cModel.blocks.sSubVelocity.bCFiOmega);
    Gain_Float32_Update(&x2cModel.blocks.sTorqueCalc.bCFiIa);
    RateLimiter_Float32_Update(&x2cModel.blocks.bRateLimiter);
    Sub_Float32_Update(&x2cModel.blocks.sSubVelocity.bSub2);
    PILimit_Float32_Update(&x2cModel.blocks.sSubVelocity.bSpeedReg);
}

