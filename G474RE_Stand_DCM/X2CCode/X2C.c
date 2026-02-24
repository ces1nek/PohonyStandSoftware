/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: Stand_DCM                                                                                                   */
/* Date:  2026-02-24 11:43                                                                                            */

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

    /* Block: SubCurrent/And                                                                                          */

    /* Block: SubCurrent/CFiIa                                                                                        */
    /* Gain = 0.0661                                                                                                  */
    x2cModel.blocks.sSubCurrent.bCFiIa.V = 0.0661;

    /* Block: SubCurrent/Const0                                                                                       */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sSubCurrent.bConst0.K = 0;

    /* Block: SubCurrent/ConstCurrentInit                                                                             */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sSubCurrent.bConstCurrentInit.K = 0;

    /* Block: SubCurrent/ConstFalse                                                                                   */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sSubCurrent.bConstFalse.K = 0;

    /* Block: SubCurrent/CurrentIaFilter                                                                              */
    /* V = 1.0                                                                                                        */
    /* fc = 10.0                                                                                                      */
    /* ts_fact = 1.0                                                                                                  */
    /* method = zoh                                                                                                   */
    x2cModel.blocks.sSubCurrent.bCurrentIaFilter.b0 = 0.00313666301504589;
    x2cModel.blocks.sSubCurrent.bCurrentIaFilter.b1 = 0;
    x2cModel.blocks.sSubCurrent.bCurrentIaFilter.a0 = -0.9968633369849541;
    x2cModel.blocks.sSubCurrent.bCurrentIaFilter.in_old = 0;

    /* Block: SubCurrent/CurrentReg                                                                                   */
    /* Kp = 3.6373333333333333                                                                                        */
    /* Ki = 1653.3333333333333                                                                                        */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.sSubCurrent.bCurrentReg.b0 = 0.08266666666666667;
    x2cModel.blocks.sSubCurrent.bCurrentReg.b1 = 3.6373333333333333;
    x2cModel.blocks.sSubCurrent.bCurrentReg.i_old = 0;
    x2cModel.blocks.sSubCurrent.bCurrentReg.enable_old = 0;

    /* Block: SubCurrent/Div2                                                                                         */

    /* Block: SubCurrent/Negation                                                                                     */

    /* Block: SubCurrent/Negation2                                                                                    */

    /* Block: SubCurrent/Not                                                                                          */

    /* Block: SubCurrent/Or                                                                                           */

    /* Block: SubCurrent/OutputVoltage                                                                                */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.sSubCurrent.bOutputVoltage.Toggle = 0;

    /* Block: SubCurrent/OutputVoltasgeLimit                                                                          */
    /* Value = 25.0                                                                                                   */
    x2cModel.blocks.sSubCurrent.bOutputVoltasgeLimit.K = 25;

    /* Block: SubCurrent/Saturation                                                                                   */
    /* max = 0.999999                                                                                                 */
    /* min = -0.999999                                                                                                */
    x2cModel.blocks.sSubCurrent.bSaturation.max = 0.999999;
    x2cModel.blocks.sSubCurrent.bSaturation.min = -0.999999;

    /* Block: SubCurrent/Saturation2                                                                                  */
    /* max = 60.0                                                                                                     */
    /* min = 10.0                                                                                                     */
    x2cModel.blocks.sSubCurrent.bSaturation2.max = 60;
    x2cModel.blocks.sSubCurrent.bSaturation2.min = 10;

    /* Block: SubCurrent/Sub1                                                                                         */

    /* Block: SubCurrent/TFlipFlop                                                                                    */
    x2cModel.blocks.sSubCurrent.bTFlipFlop.toggle_old = 0;

    /* Block: SubVelocity/AutoSwitch                                                                                  */
    /* Thresh_up = 0.01                                                                                               */
    /* Thresh_down = -0.01                                                                                            */
    x2cModel.blocks.sSubVelocity.bAutoSwitch.Thresh_up = 0.01;
    x2cModel.blocks.sSubVelocity.bAutoSwitch.Thresh_down = -0.01;
    x2cModel.blocks.sSubVelocity.bAutoSwitch.Status = &RamTable_float32[0];

    /* Block: SubVelocity/CFiOmega                                                                                    */
    /* Gain = 0.0661                                                                                                  */
    x2cModel.blocks.sSubVelocity.bCFiOmega.V = 0.0661;

    /* Block: SubVelocity/Const6                                                                                      */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sSubVelocity.bConst6.K = 0;

    /* Block: SubVelocity/ConstSpeedInit                                                                              */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sSubVelocity.bConstSpeedInit.K = 0;

    /* Block: SubVelocity/CurrentDesired                                                                              */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bCurrentDesired.Toggle = 0;

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

    /* Block: SubVelocity/PulseGenConst1                                                                              */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.sSubVelocity.bPulseGenConst1.K = 1;

    /* Block: SubVelocity/PulseGenDCVal                                                                               */
    /* Value = 20.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bPulseGenDCVal.K = 20;

    /* Block: SubVelocity/PulseGenFreq                                                                                */
    /* Value = 0.25                                                                                                   */
    x2cModel.blocks.sSubVelocity.bPulseGenFreq.K = 0.25;

    /* Block: SubVelocity/PulseGenHi                                                                                  */
    /* Value = 5.0                                                                                                    */
    x2cModel.blocks.sSubVelocity.bPulseGenHi.K = 5;

    /* Block: SubVelocity/PulseGenLo                                                                                  */
    /* Value = -5.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bPulseGenLo.K = -5;

    /* Block: SubVelocity/PulseGenOutput                                                                              */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bPulseGenOutput.Toggle = 1;

    /* Block: SubVelocity/PulseGenSin                                                                                 */
    /* fmax = 1000.0                                                                                                  */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sSubVelocity.bPulseGenSin.delta_phi = 0.00628318530717959;
    x2cModel.blocks.sSubVelocity.bPulseGenSin.phase = 0;
    x2cModel.blocks.sSubVelocity.bPulseGenSin.offset = 0;
    x2cModel.blocks.sSubVelocity.bPulseGenSin.phi = 0;

    /* Block: SubVelocity/RateLimiter                                                                                 */
    /* Tr = 0.1                                                                                                       */
    /* Tf = 0.1                                                                                                       */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sSubVelocity.bRateLimiter.RateUp = 0.01;
    x2cModel.blocks.sSubVelocity.bRateLimiter.RateDown = 0.01;
    x2cModel.blocks.sSubVelocity.bRateLimiter.enable_old = 0;

    /* Block: SubVelocity/SpeedDesired                                                                                */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bSpeedDesired.Toggle = 1;

    /* Block: SubVelocity/SpeedDesiredConst                                                                           */
    /* Value = 50.0                                                                                                   */
    x2cModel.blocks.sSubVelocity.bSpeedDesiredConst.K = 50;

    /* Block: SubVelocity/SpeedReg                                                                                    */
    /* Kp = 1.5252932814489535                                                                                        */
    /* Ki = 69.90133872365556                                                                                         */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.sSubVelocity.bSpeedReg.b0 = 0.06990133872365556;
    x2cModel.blocks.sSubVelocity.bSpeedReg.b1 = 1.5252932814489535;
    x2cModel.blocks.sSubVelocity.bSpeedReg.i_old = 0;
    x2cModel.blocks.sSubVelocity.bSpeedReg.enable_old = 0;

    /* Block: SubVelocity/Sub2                                                                                        */


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
    x2cModel.inports.bInVelocity = (float32)0;
    x2cModel.inports.bInVelocity1_radps = (float32)0;
    x2cModel.inports.bInVelocity1_rpm = (float32)0;

    /******************************************************************************************************************/
    /**                                               Link Block Inputs                                              **/
    /******************************************************************************************************************/

    /* Block And                                                                                                      */
    x2cModel.blocks.sSubCurrent.bAnd.In1 =
        &x2cModel.blocks.sSubCurrent.bOr.Out;
    x2cModel.blocks.sSubCurrent.bAnd.In2 =
        &x2cModel.blocks.sSubCurrent.bTFlipFlop.Q;

    /* Block CFiIa                                                                                                    */
    x2cModel.blocks.sSubCurrent.bCFiIa.In =
        &x2cModel.inports.bInIa;

    /* Block Const0                                                                                                   */

    /* Block ConstCurrentInit                                                                                         */

    /* Block ConstFalse                                                                                               */

    /* Block CurrentIaFilter                                                                                          */
    x2cModel.blocks.sSubCurrent.bCurrentIaFilter.In =
        &x2cModel.inports.bInIa;

    /* Block CurrentReg                                                                                               */
    x2cModel.blocks.sSubCurrent.bCurrentReg.In =
        &x2cModel.blocks.sSubCurrent.bSub1.Out;
    x2cModel.blocks.sSubCurrent.bCurrentReg.Init =
        &x2cModel.blocks.sSubCurrent.bConstCurrentInit.Out;
    x2cModel.blocks.sSubCurrent.bCurrentReg.max =
        &x2cModel.blocks.sSubCurrent.bOutputVoltasgeLimit.Out;
    x2cModel.blocks.sSubCurrent.bCurrentReg.min =
        &x2cModel.blocks.sSubCurrent.bNegation2.Out;
    x2cModel.blocks.sSubCurrent.bCurrentReg.Enable =
        &x2cModel.blocks.sSubCurrent.bAnd.Out;

    /* Block Div2                                                                                                     */
    x2cModel.blocks.sSubCurrent.bDiv2.Num =
        &x2cModel.blocks.sSubCurrent.bOutputVoltage.Out;
    x2cModel.blocks.sSubCurrent.bDiv2.Den =
        &x2cModel.blocks.sSubCurrent.bSaturation2.Out;

    /* Block Negation                                                                                                 */
    x2cModel.blocks.sSubCurrent.bNegation.In =
        &x2cModel.blocks.sSubCurrent.bSaturation.Out;

    /* Block Negation2                                                                                                */
    x2cModel.blocks.sSubCurrent.bNegation2.In =
        &x2cModel.blocks.sSubCurrent.bOutputVoltasgeLimit.Out;

    /* Block Not                                                                                                      */
    x2cModel.blocks.sSubCurrent.bNot.In =
        &x2cModel.blocks.sSubCurrent.bConstFalse.Out;

    /* Block Or                                                                                                       */
    x2cModel.blocks.sSubCurrent.bOr.In1 =
        &x2cModel.inports.bInEnable;
    x2cModel.blocks.sSubCurrent.bOr.In2 =
        &x2cModel.blocks.sSubCurrent.bNot.Out;

    /* Block OutputVoltage                                                                                            */
    x2cModel.blocks.sSubCurrent.bOutputVoltage.In1 =
        &x2cModel.blocks.sSubCurrent.bCurrentReg.Out;
    x2cModel.blocks.sSubCurrent.bOutputVoltage.In2 =
        &x2cModel.blocks.sSubVelocity.bPulseGenOutput.Out;

    /* Block OutputVoltasgeLimit                                                                                      */

    /* Block Saturation                                                                                               */
    x2cModel.blocks.sSubCurrent.bSaturation.In =
        &x2cModel.blocks.sSubCurrent.bDiv2.Out;

    /* Block Saturation2                                                                                              */
    x2cModel.blocks.sSubCurrent.bSaturation2.In =
        &x2cModel.inports.bInVdc;

    /* Block Sub1                                                                                                     */
    x2cModel.blocks.sSubCurrent.bSub1.Plus =
        &x2cModel.blocks.sSubVelocity.bCurrentDesired.Out;
    x2cModel.blocks.sSubCurrent.bSub1.Minus =
        &x2cModel.inports.bInIa;

    /* Block TFlipFlop                                                                                                */
    x2cModel.blocks.sSubCurrent.bTFlipFlop.T =
        &x2cModel.inports.bInButton;

    /* Block AutoSwitch                                                                                               */
    x2cModel.blocks.sSubVelocity.bAutoSwitch.In1 =
        &x2cModel.blocks.sSubVelocity.bPulseGenHi.Out;
    x2cModel.blocks.sSubVelocity.bAutoSwitch.Switch =
        &x2cModel.blocks.sSubVelocity.bPulseGenSin.u;
    x2cModel.blocks.sSubVelocity.bAutoSwitch.In3 =
        &x2cModel.blocks.sSubVelocity.bPulseGenLo.Out;

    /* Block CFiOmega                                                                                                 */
    x2cModel.blocks.sSubVelocity.bCFiOmega.In =
        &x2cModel.blocks.sSubVelocity.bOmega.Out;

    /* Block Const6                                                                                                   */

    /* Block ConstSpeedInit                                                                                           */

    /* Block CurrentDesired                                                                                           */
    x2cModel.blocks.sSubVelocity.bCurrentDesired.In1 =
        &x2cModel.blocks.sSubVelocity.bSpeedReg.Out;
    x2cModel.blocks.sSubVelocity.bCurrentDesired.In2 =
        &x2cModel.blocks.sSubVelocity.bPulseGenOutput.Out;

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

    /* Block PulseGenConst1                                                                                           */

    /* Block PulseGenDCVal                                                                                            */

    /* Block PulseGenFreq                                                                                             */

    /* Block PulseGenHi                                                                                               */

    /* Block PulseGenLo                                                                                               */

    /* Block PulseGenOutput                                                                                           */
    x2cModel.blocks.sSubVelocity.bPulseGenOutput.In1 =
        &x2cModel.blocks.sSubVelocity.bAutoSwitch.Out;
    x2cModel.blocks.sSubVelocity.bPulseGenOutput.In2 =
        &x2cModel.blocks.sSubVelocity.bRateLimiter.Out;

    /* Block PulseGenSin                                                                                              */
    x2cModel.blocks.sSubVelocity.bPulseGenSin.A =
        &x2cModel.blocks.sSubVelocity.bPulseGenConst1.Out;
    x2cModel.blocks.sSubVelocity.bPulseGenSin.f =
        &x2cModel.blocks.sSubVelocity.bPulseGenFreq.Out;

    /* Block RateLimiter                                                                                              */
    x2cModel.blocks.sSubVelocity.bRateLimiter.In =
        &x2cModel.blocks.sSubVelocity.bPulseGenDCVal.Out;
    x2cModel.blocks.sSubVelocity.bRateLimiter.Init =
        &x2cModel.blocks.sSubVelocity.bConst6.Out;
    x2cModel.blocks.sSubVelocity.bRateLimiter.Enable =
        &x2cModel.blocks.sSubCurrent.bAnd.Out;

    /* Block SpeedDesired                                                                                             */
    x2cModel.blocks.sSubVelocity.bSpeedDesired.In1 =
        &x2cModel.blocks.sSubVelocity.bSpeedDesiredConst.Out;
    x2cModel.blocks.sSubVelocity.bSpeedDesired.In2 =
        &x2cModel.blocks.sSubVelocity.bPulseGenOutput.Out;

    /* Block SpeedDesiredConst                                                                                        */

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
        &x2cModel.blocks.sSubCurrent.bAnd.Out;

    /* Block Sub2                                                                                                     */
    x2cModel.blocks.sSubVelocity.bSub2.Plus =
        &x2cModel.blocks.sSubVelocity.bSpeedDesired.Out;
    x2cModel.blocks.sSubVelocity.bSub2.Minus =
        &x2cModel.blocks.sSubVelocity.bMeasVelocity.Out;

    /******************************************************************************************************************/
    /**                                                 Link Outports                                                **/
    /******************************************************************************************************************/
    x2cModel.outports.bOutErrClear =
        &x2cModel.inports.bInButton;
    x2cModel.outports.bOutPWMEnable =
        &x2cModel.blocks.sSubCurrent.bAnd.Out;
    x2cModel.outports.bOutPWMa =
        &x2cModel.blocks.sSubCurrent.bSaturation.Out;
    x2cModel.outports.bOutPWMb =
        &x2cModel.blocks.sSubCurrent.bNegation.Out;
    x2cModel.outports.bOutPWMc =
        &x2cModel.blocks.sSubCurrent.bConst0.Out;

    /******************************************************************************************************************/
    /**                                           Run Block Init Functions                                           **/
    /******************************************************************************************************************/
    And_Bool_Init(&x2cModel.blocks.sSubCurrent.bAnd);
    Gain_Float32_Init(&x2cModel.blocks.sSubCurrent.bCFiIa);
    Constant_Float32_Init(&x2cModel.blocks.sSubCurrent.bConst0);
    Constant_Float32_Init(&x2cModel.blocks.sSubCurrent.bConstCurrentInit);
    Constant_Bool_Init(&x2cModel.blocks.sSubCurrent.bConstFalse);
    PT1_Float32_Init(&x2cModel.blocks.sSubCurrent.bCurrentIaFilter);
    PILimit_Float32_Init(&x2cModel.blocks.sSubCurrent.bCurrentReg);
    Div_Float32_Init(&x2cModel.blocks.sSubCurrent.bDiv2);
    Negation_Float32_Init(&x2cModel.blocks.sSubCurrent.bNegation);
    Negation_Float32_Init(&x2cModel.blocks.sSubCurrent.bNegation2);
    Not_Bool_Init(&x2cModel.blocks.sSubCurrent.bNot);
    Or_Bool_Init(&x2cModel.blocks.sSubCurrent.bOr);
    ManualSwitch_Float32_Init(&x2cModel.blocks.sSubCurrent.bOutputVoltage);
    Constant_Float32_Init(&x2cModel.blocks.sSubCurrent.bOutputVoltasgeLimit);
    Saturation_Float32_Init(&x2cModel.blocks.sSubCurrent.bSaturation);
    Saturation_Float32_Init(&x2cModel.blocks.sSubCurrent.bSaturation2);
    Sub_Float32_Init(&x2cModel.blocks.sSubCurrent.bSub1);
    TFlipFlop_Bool_Init(&x2cModel.blocks.sSubCurrent.bTFlipFlop);
    AutoSwitch_Float32_Init(&x2cModel.blocks.sSubVelocity.bAutoSwitch);
    Gain_Float32_Init(&x2cModel.blocks.sSubVelocity.bCFiOmega);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bConst6);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bConstSpeedInit);
    ManualSwitch_Float32_Init(&x2cModel.blocks.sSubVelocity.bCurrentDesired);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bCurrentLimit);
    ManualSwitch_Float32_Init(&x2cModel.blocks.sSubVelocity.bMeasVelocity);
    Negation_Float32_Init(&x2cModel.blocks.sSubVelocity.bNegation3);
    Gain_Float32_Init(&x2cModel.blocks.sSubVelocity.bOmega);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.sSubVelocity.bOmegaFilter);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.sSubVelocity.bOmegaFilter1);
    Phi2Speed_Float32_Init(&x2cModel.blocks.sSubVelocity.bPhi2Rpm);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bPulseGenConst1);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bPulseGenDCVal);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bPulseGenFreq);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bPulseGenHi);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bPulseGenLo);
    ManualSwitch_Float32_Init(&x2cModel.blocks.sSubVelocity.bPulseGenOutput);
    SinGen_Float32_Init(&x2cModel.blocks.sSubVelocity.bPulseGenSin);
    RateLimiter_Float32_Init(&x2cModel.blocks.sSubVelocity.bRateLimiter);
    ManualSwitch_Float32_Init(&x2cModel.blocks.sSubVelocity.bSpeedDesired);
    Constant_Float32_Init(&x2cModel.blocks.sSubVelocity.bSpeedDesiredConst);
    PILimit_Float32_Init(&x2cModel.blocks.sSubVelocity.bSpeedReg);
    Sub_Float32_Init(&x2cModel.blocks.sSubVelocity.bSub2);
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
    AutoSwitch_Float32_Update(&x2cModel.blocks.sSubVelocity.bAutoSwitch);
    Negation_Float32_Update(&x2cModel.blocks.sSubCurrent.bNegation2);
    Not_Bool_Update(&x2cModel.blocks.sSubCurrent.bNot);
    Saturation_Float32_Update(&x2cModel.blocks.sSubCurrent.bSaturation2);
    Or_Bool_Update(&x2cModel.blocks.sSubCurrent.bOr);
    PT1_Float32_Update(&x2cModel.blocks.sSubCurrent.bCurrentIaFilter);
    TFlipFlop_Bool_Update(&x2cModel.blocks.sSubCurrent.bTFlipFlop);
    And_Bool_Update(&x2cModel.blocks.sSubCurrent.bAnd);
    ManualSwitch_Float32_Update(&x2cModel.blocks.sSubVelocity.bPulseGenOutput);
    ManualSwitch_Float32_Update(&x2cModel.blocks.sSubVelocity.bCurrentDesired);
    Sub_Float32_Update(&x2cModel.blocks.sSubCurrent.bSub1);
    PILimit_Float32_Update(&x2cModel.blocks.sSubCurrent.bCurrentReg);
    ManualSwitch_Float32_Update(&x2cModel.blocks.sSubCurrent.bOutputVoltage);
    Div_Float32_Update(&x2cModel.blocks.sSubCurrent.bDiv2);
    Saturation_Float32_Update(&x2cModel.blocks.sSubCurrent.bSaturation);
    Negation_Float32_Update(&x2cModel.blocks.sSubCurrent.bNegation);
    Scope_Main_Update(&x2cScope);
}

/* X2C_Update for blocks with 20*Ts                                                                                   */
void X2C_Update_20(void)
{
    Phi2Speed_Float32_Update(&x2cModel.blocks.sSubVelocity.bPhi2Rpm);
    SinGen_Float32_Update(&x2cModel.blocks.sSubVelocity.bPulseGenSin);
    Gain_Float32_Update(&x2cModel.blocks.sSubVelocity.bOmega);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.sSubVelocity.bOmegaFilter);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.sSubVelocity.bOmegaFilter1);
    ManualSwitch_Float32_Update(&x2cModel.blocks.sSubVelocity.bMeasVelocity);
    Negation_Float32_Update(&x2cModel.blocks.sSubVelocity.bNegation3);
    Gain_Float32_Update(&x2cModel.blocks.sSubCurrent.bCFiIa);
    Gain_Float32_Update(&x2cModel.blocks.sSubVelocity.bCFiOmega);
    RateLimiter_Float32_Update(&x2cModel.blocks.sSubVelocity.bRateLimiter);
    ManualSwitch_Float32_Update(&x2cModel.blocks.sSubVelocity.bSpeedDesired);
    Sub_Float32_Update(&x2cModel.blocks.sSubVelocity.bSub2);
    PILimit_Float32_Update(&x2cModel.blocks.sSubVelocity.bSpeedReg);
}

