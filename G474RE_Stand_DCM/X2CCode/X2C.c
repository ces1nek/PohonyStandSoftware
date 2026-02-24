/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: Stand_DCM                                                                                                   */
/* Date:  2026-02-24 15:31                                                                                            */

/* X2C-Version: 6.4.2961                                                                                              */
/* X2C-Edition: Educational                                                                                           */

/* Common includes                                                                                                    */
#include "TableStruct.h"
/* Generated file includes                                                                                            */
#include "FlashTable.h"
#include "RamTable.h"
#include "X2C.h"

/**********************************************************************************************************************/
/**                                                       Model                                                      **/
/**********************************************************************************************************************/
struct x2cModel x2cModel;

/**********************************************************************************************************************/
/**                                                       Scope                                                      **/
/**********************************************************************************************************************/
SCOPE_MAIN x2cScope;

/* Block function table                                                                                               */
#define END_BLOCKFUNCTIONS { (uint16)0, (void (*)(void*))0, (void (*)(void*))0, \
    (tLoadImplementationParameter)0, (tSaveImplementationParameter)0, (void* (*)(const void*, uint16))0 }
const tBlockFunctions blockFunctionTable[] = {
    FUNCTIONS,
    END_BLOCKFUNCTIONS
};

/* Parameter identifier table                                                                                         */
#define END_PARAMETERTABLE { (uint16)0, (void*)0 }
const tParameterTable parameterIdTable[] = {
    PARAMETER_TABLE,
    END_PARAMETERTABLE
};

/* Inport Parameter identifier table                                                                                  */
#define END_PARAMID_IO_TABLE { 0, 0, (void*)0 }
const tIoParamIdEntry inportParamIdTable[] = {
    INPORT_PARAMID_TABLE, 
    END_PARAMID_IO_TABLE
};

/* Outport Parameter identifier table                                                                                 */
const tIoParamIdEntry outportParamIdTable[] = {
    OUTPORT_PARAMID_TABLE, 
    END_PARAMID_IO_TABLE
};

/**********************************************************************************************************************/
/** Model Sample Time                                                                                                **/
/**********************************************************************************************************************/
float_CoT getModelSampleTime()
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
    x2cModel.blocks.bAutoSwitch.Thresh_up = 0.01;
    x2cModel.blocks.bAutoSwitch.Thresh_down = -0.01;
    x2cModel.blocks.bAutoSwitch.Status = &RamTable_float32[0];

    /* Block: Const6                                                                                                  */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConst6.K = 0;

    /* Block: CtlLogic/And                                                                                            */

    /* Block: CtlLogic/ConstFalse                                                                                     */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sCtlLogic.bConstFalse.K = 0;

    /* Block: CtlLogic/Not                                                                                            */

    /* Block: CtlLogic/Or                                                                                             */

    /* Block: CtlLogic/TFlipFlop                                                                                      */
    x2cModel.blocks.sCtlLogic.bTFlipFlop.toggle_old = 0;

    /* Block: PulseGenConst1                                                                                          */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bPulseGenConst1.K = 1;

    /* Block: PulseGenDCVal                                                                                           */
    /* Value = 2.0                                                                                                    */
    x2cModel.blocks.bPulseGenDCVal.K = 2;

    /* Block: PulseGenFreq                                                                                            */
    /* Value = 0.25                                                                                                   */
    x2cModel.blocks.bPulseGenFreq.K = 0.25;

    /* Block: PulseGenHi                                                                                              */
    /* Value = 180.0                                                                                                  */
    x2cModel.blocks.bPulseGenHi.K = 180;

    /* Block: PulseGenLo                                                                                              */
    /* Value = 10.0                                                                                                   */
    x2cModel.blocks.bPulseGenLo.K = 10;

    /* Block: PulseGenOutput                                                                                          */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bPulseGenOutput.Toggle = 0;

    /* Block: PulseGenSin                                                                                             */
    /* fmax = 1000.0                                                                                                  */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bPulseGenSin.delta_phi = 0.00628318530717959;
    x2cModel.blocks.bPulseGenSin.phase = 0;
    x2cModel.blocks.bPulseGenSin.offset = 0;
    x2cModel.blocks.bPulseGenSin.phi = 0;

    /* Block: PwmGen/Constant                                                                                         */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sPwmGen.bConstant.K = 0;

    /* Block: PwmGen/Div2                                                                                             */

    /* Block: PwmGen/Negation                                                                                         */

    /* Block: PwmGen/Saturation                                                                                       */
    /* max = 0.999999                                                                                                 */
    /* min = -0.999999                                                                                                */
    x2cModel.blocks.sPwmGen.bSaturation.max = 0.999999;
    x2cModel.blocks.sPwmGen.bSaturation.min = -0.999999;

    /* Block: PwmGen/Saturation2                                                                                      */
    /* max = 60.0                                                                                                     */
    /* min = 10.0                                                                                                     */
    x2cModel.blocks.sPwmGen.bSaturation2.max = 60;
    x2cModel.blocks.sPwmGen.bSaturation2.min = 10;

    /* Block: RateLimiter                                                                                             */
    /* Tr = 0.1                                                                                                       */
    /* Tf = 0.1                                                                                                       */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bRateLimiter.RateUp = 0.01;
    x2cModel.blocks.bRateLimiter.RateDown = 0.01;
    x2cModel.blocks.bRateLimiter.enable_old = 0;

    /* Block: RegCurrent/ConstCurrentInit                                                                             */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sRegCurrent.bConstCurrentInit.K = 0;

    /* Block: RegCurrent/CurrentReg                                                                                   */
    /* Kp = 3.6373333333333333                                                                                        */
    /* Ki = 1653.3333333333333                                                                                        */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.sRegCurrent.bCurrentReg.b0 = 0.08266666666666667;
    x2cModel.blocks.sRegCurrent.bCurrentReg.b1 = 3.6373333333333333;
    x2cModel.blocks.sRegCurrent.bCurrentReg.i_old = 0;
    x2cModel.blocks.sRegCurrent.bCurrentReg.enable_old = 0;

    /* Block: RegCurrent/Negation2                                                                                    */

    /* Block: RegCurrent/OutputVoltasgeLimit                                                                          */
    /* Value = 25.0                                                                                                   */
    x2cModel.blocks.sRegCurrent.bOutputVoltasgeLimit.K = 25;

    /* Block: RegCurrent/Sub1                                                                                         */

    /* Block: SubVelocity/CFiOmega                                                                                    */
    /* Gain = 0.0661                                                                                                  */
    x2cModel.blocks.sSubVelocity.bCFiOmega.V = 0.0661;

    /* Block: SubVelocity/ConstSpeedInit                                                                              */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sSubVelocity.bConstSpeedInit.K = 0;

    /* Block: SubVelocity/CurrentLimit                                                                                */
    /* Value = 30.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bCurrentLimit.K = 30;

    /* Block: SubVelocity/MeasVelocity                                                                                */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bMeasVelocity.Toggle = 0;

    /* Block: SubVelocity/Negation3                                                                                   */

    /* Block: SubVelocity/Omega                                                                                       */
    /* Gain = 0.10471975511965977                                                                                     */
    x2cModel.blocks.sSubVelocity.bOmega.V = 0.10471975511965977;

    /* Block: SubVelocity/OmegaFilter                                                                                 */
    /* characteristic = Chebyshev II                                                                                  */
    /* fc = 100.0                                                                                                     */
    /* rp = 1.0                                                                                                       */
    /* rs = 20.0                                                                                                      */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sSubVelocity.bOmegaFilter.b0 = 0.0995953541992128;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.b1 = -0.1297387042800058;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.b2 = 0.09959535419921278;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.a1 = -1.6099210613329478;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.a2 = 0.6793730654513674;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.in_old = 0;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.in_veryold = 0;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.out_old = 0;
    x2cModel.blocks.sSubVelocity.bOmegaFilter.out_veryold = 0;

    /* Block: SubVelocity/OmegaFilter1                                                                                */
    /* characteristic = Chebyshev II                                                                                  */
    /* fc = 100.0                                                                                                     */
    /* rp = 1.0                                                                                                       */
    /* rs = 20.0                                                                                                      */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.b0 = 0.0995953541992128;
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.b1 = -0.1297387042800058;
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.b2 = 0.09959535419921278;
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.a1 = -1.6099210613329478;
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.a2 = 0.6793730654513674;
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.in_old = 0;
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.in_veryold = 0;
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.out_old = 0;
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.out_veryold = 0;

    /* Block: SubVelocity/Phi2Rpm                                                                                     */
    /* n_max = 3000.0                                                                                                 */
    /* p = 1.0                                                                                                        */
    /* fc = 200.0                                                                                                     */
    /* ts_fact = 20.0                                                                                                 */
    /* method = tustin                                                                                                */
    x2cModel.blocks.sSubVelocity.bPhi2Rpm.b = 7369.565458859551;
    x2cModel.blocks.sSubVelocity.bPhi2Rpm.a0 = -0.2282609098099249;
    x2cModel.blocks.sSubVelocity.bPhi2Rpm.phi_old = 0;
    x2cModel.blocks.sSubVelocity.bPhi2Rpm.n_old = 0;

    /* Block: SubVelocity/SpeedReg                                                                                    */
    /* Kp = 1.5252932814489535                                                                                        */
    /* Ki = 69.90133872365556                                                                                         */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sSubVelocity.bSpeedReg.b0 = 0.06990133872365556;
    x2cModel.blocks.sSubVelocity.bSpeedReg.b1 = 1.5252932814489535;
    x2cModel.blocks.sSubVelocity.bSpeedReg.i_old = 0;
    x2cModel.blocks.sSubVelocity.bSpeedReg.enable_old = 0;

    /* Block: SubVelocity/Sub2                                                                                        */

    /* Block: SwIsetpoint                                                                                             */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bSwIsetpoint.Toggle = 0;

    /* Block: SwVoltSet                                                                                               */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bSwVoltSet.Toggle = 0;

    /* Block: TorqueCalc/CFiIa                                                                                        */
    /* Gain = 0.0661                                                                                                  */
    x2cModel.blocks.sTorqueCalc.bCFiIa.V = 0.0661;

    /* Block: TorqueCalc/IaFilter                                                                                     */
    /* characteristic = Chebyshev II                                                                                  */
    /* fc = 100.0                                                                                                     */
    /* rp = 1.0                                                                                                       */
    /* rs = 20.0                                                                                                      */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sTorqueCalc.bIaFilter.b0 = 0.0995953541992128;
    x2cModel.blocks.sTorqueCalc.bIaFilter.b1 = -0.1297387042800058;
    x2cModel.blocks.sTorqueCalc.bIaFilter.b2 = 0.09959535419921278;
    x2cModel.blocks.sTorqueCalc.bIaFilter.a1 = -1.6099210613329478;
    x2cModel.blocks.sTorqueCalc.bIaFilter.a2 = 0.6793730654513674;
    x2cModel.blocks.sTorqueCalc.bIaFilter.in_old = 0;
    x2cModel.blocks.sTorqueCalc.bIaFilter.in_veryold = 0;
    x2cModel.blocks.sTorqueCalc.bIaFilter.out_old = 0;
    x2cModel.blocks.sTorqueCalc.bIaFilter.out_veryold = 0;


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
        &x2cModel.inports.bInVdc;

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
        &x2cModel.blocks.sRegCurrent.bOutputVoltasgeLimit.Out;
    x2cModel.blocks.sRegCurrent.bCurrentReg.min =
        &x2cModel.blocks.sRegCurrent.bNegation2.Out;
    x2cModel.blocks.sRegCurrent.bCurrentReg.Enable =
        &x2cModel.blocks.sCtlLogic.bAnd.Out;

    /* Block Negation2                                                                                                */
    x2cModel.blocks.sRegCurrent.bNegation2.In =
        &x2cModel.blocks.sRegCurrent.bOutputVoltasgeLimit.Out;

    /* Block OutputVoltasgeLimit                                                                                      */

    /* Block Sub1                                                                                                     */
    x2cModel.blocks.sRegCurrent.bSub1.Plus =
        &x2cModel.blocks.bSwIsetpoint.Out;
    x2cModel.blocks.sRegCurrent.bSub1.Minus =
        &x2cModel.inports.bInIa;

    /* Block CFiOmega                                                                                                 */
    x2cModel.blocks.sSubVelocity.bCFiOmega.In =
        &x2cModel.blocks.sSubVelocity.bOmega.Out;

    /* Block ConstSpeedInit                                                                                           */

    /* Block CurrentLimit                                                                                             */

    /* Block MeasVelocity                                                                                             */
    x2cModel.blocks.sSubVelocity.bMeasVelocity.In1 =
        &x2cModel.blocks.sSubVelocity.bOmegaFilter1.Out;
    x2cModel.blocks.sSubVelocity.bMeasVelocity.In2 =
        &x2cModel.blocks.sSubVelocity.bOmegaFilter.Out;

    /* Block Negation3                                                                                                */
    x2cModel.blocks.sSubVelocity.bNegation3.In =
        &x2cModel.blocks.sSubVelocity.bCurrentLimit.Out;

    /* Block Omega                                                                                                    */
    x2cModel.blocks.sSubVelocity.bOmega.In =
        &x2cModel.blocks.sSubVelocity.bPhi2Rpm.n;

    /* Block OmegaFilter                                                                                              */
    x2cModel.blocks.sSubVelocity.bOmegaFilter.In =
        &x2cModel.blocks.sSubVelocity.bOmega.Out;

    /* Block OmegaFilter1                                                                                             */
    x2cModel.blocks.sSubVelocity.bOmegaFilter1.In =
        &x2cModel.inports.bInVelocity1_radps;

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
        &x2cModel.blocks.sSubVelocity.bMeasVelocity.Out;

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
    Constant_Float32_Init(&x2cModel.blocks.sRegCurrent.bOutputVoltasgeLimit);
    Sub_Float32_Init(&x2cModel.blocks.sRegCurrent.bSub1);
    Gain_Float32_Init(&x2cModel.blocks.sSubVelocity.bCFiOmega);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bConstSpeedInit);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bCurrentLimit);
    ManualSwitch_Float32_Init(&x2cModel.blocks.sSubVelocity.bMeasVelocity);
    Negation_Float32_Init(&x2cModel.blocks.sSubVelocity.bNegation3);
    Gain_Float32_Init(&x2cModel.blocks.sSubVelocity.bOmega);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.sSubVelocity.bOmegaFilter);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.sSubVelocity.bOmegaFilter1);
    Phi2Speed_Float32_Init(&x2cModel.blocks.sSubVelocity.bPhi2Rpm);
    PILimit_Float32_Init(&x2cModel.blocks.sSubVelocity.bSpeedReg);
    Sub_Float32_Init(&x2cModel.blocks.sSubVelocity.bSub2);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bSwIsetpoint);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bSwVoltSet);
    Gain_Float32_Init(&x2cModel.blocks.sTorqueCalc.bCFiIa);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.sTorqueCalc.bIaFilter);
    Scope_Main_Init(&x2cScope);

    /* Initialize TableStruct tables                                                                                  */
    TableStruct->TFncTable = blockFunctionTable;
    TableStruct->TParamTable = parameterIdTable;
    TableStruct->inportParamTable = inportParamIdTable;
    TableStruct->outportParamTable = outportParamIdTable;
    /* Conversion-on-Target feature not used                                                                          */
    TableStruct->maskParameterTable = (tMaskParameterEntry*)0;
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
    Saturation_Float32_Update(&x2cModel.blocks.sPwmGen.bSaturation2);
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
    LowpassBiQ_Float32_Update(&x2cModel.blocks.sSubVelocity.bOmegaFilter);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.sSubVelocity.bOmegaFilter1);
    ManualSwitch_Float32_Update(&x2cModel.blocks.sSubVelocity.bMeasVelocity);
    Negation_Float32_Update(&x2cModel.blocks.sSubVelocity.bNegation3);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.sTorqueCalc.bIaFilter);
    Gain_Float32_Update(&x2cModel.blocks.sSubVelocity.bCFiOmega);
    Gain_Float32_Update(&x2cModel.blocks.sTorqueCalc.bCFiIa);
    RateLimiter_Float32_Update(&x2cModel.blocks.bRateLimiter);
    Sub_Float32_Update(&x2cModel.blocks.sSubVelocity.bSub2);
    PILimit_Float32_Update(&x2cModel.blocks.sSubVelocity.bSpeedReg);
}

