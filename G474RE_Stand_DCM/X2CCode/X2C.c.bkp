/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_DCM                                                                                                   */
/* Date:  2025-03-25 16:10                                                                                            */

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

    /* Block: Add1                                                                                                    */

    /* Block: And                                                                                                     */

    /* Block: CFiIa                                                                                                   */
    /* Gain = 0.0677                                                                                                  */
    x2cModel.blocks.bCFiIa.V = 0.0677;

    /* Block: CFiOmega                                                                                                */
    /* Gain = 0.0677                                                                                                  */
    x2cModel.blocks.bCFiOmega.V = 0.0677;

    /* Block: CoPulseGenOffset                                                                                        */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bCoPulseGenOffset.K = 1;

    /* Block: Const0                                                                                                  */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConst0.K = 0;

    /* Block: Const6                                                                                                  */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConst6.K = 0;

    /* Block: ConstCurrentInit                                                                                        */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConstCurrentInit.K = 0;

    /* Block: ConstSpeedInit                                                                                          */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConstSpeedInit.K = 0;

    /* Block: CurrentDesired                                                                                          */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bCurrentDesired.Toggle = 1;

    /* Block: CurrentIaFilter                                                                                         */
    /* V = 1.0                                                                                                        */
    /* fc = 10.0                                                                                                      */
    /* ts_fact = 1.0                                                                                                  */
    /* method = zoh                                                                                                   */
    x2cModel.blocks.bCurrentIaFilter.b0 = 0.00313666301504589;
    x2cModel.blocks.bCurrentIaFilter.b1 = 0;
    x2cModel.blocks.bCurrentIaFilter.a0 = -0.9968633369849541;
    x2cModel.blocks.bCurrentIaFilter.in_old = 0;

    /* Block: CurrentLimit                                                                                            */
    /* Value = 30.0                                                                                                   */
    x2cModel.blocks.bCurrentLimit.K = 30;

    /* Block: CurrentReg                                                                                              */
    /* Kp = 1.8186666666666667                                                                                        */
    /* Ki = 826.6666666666666                                                                                         */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bCurrentReg.b0 = 0.04133333333333333;
    x2cModel.blocks.bCurrentReg.b1 = 1.8186666666666667;
    x2cModel.blocks.bCurrentReg.i_old = 0;
    x2cModel.blocks.bCurrentReg.enable_old = 0;

    /* Block: Div2                                                                                                    */

    /* Block: Negation                                                                                                */

    /* Block: Negation2                                                                                               */

    /* Block: Negation3                                                                                               */

    /* Block: Not                                                                                                     */

    /* Block: Omega                                                                                                   */
    /* Gain = 0.10471975511965977                                                                                     */
    x2cModel.blocks.bOmega.V = 0.10471975511965977;

    /* Block: OmegaFilter                                                                                             */
    /* V = 1.0                                                                                                        */
    /* fc = 10.0                                                                                                      */
    /* ts_fact = 1.0                                                                                                  */
    /* method = zoh                                                                                                   */
    x2cModel.blocks.bOmegaFilter.b0 = 0.00313666301504589;
    x2cModel.blocks.bOmegaFilter.b1 = 0;
    x2cModel.blocks.bOmegaFilter.a0 = -0.9968633369849541;
    x2cModel.blocks.bOmegaFilter.in_old = 0;

    /* Block: Or                                                                                                      */

    /* Block: OutputVoltage                                                                                           */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bOutputVoltage.Toggle = 1;

    /* Block: OutputVoltasgeLimit                                                                                     */
    /* Value = 25.0                                                                                                   */
    x2cModel.blocks.bOutputVoltasgeLimit.K = 25;

    /* Block: Phi2Rpm                                                                                                 */
    /* n_max = 3000.0                                                                                                 */
    /* p = 1.0                                                                                                        */
    /* fc = 15.0                                                                                                      */
    /* ts_fact = 1.0                                                                                                  */
    /* method = tustin                                                                                                */
    x2cModel.blocks.bPhi2Rpm.b = 897.8844097010327;
    x2cModel.blocks.bPhi2Rpm.a0 = -0.9952986882245174;
    x2cModel.blocks.bPhi2Rpm.phi_old = 0;
    x2cModel.blocks.bPhi2Rpm.n_old = 0;

    /* Block: PulseGenAmplitude                                                                                       */
    /* Gain = 1.0                                                                                                     */
    x2cModel.blocks.bPulseGenAmplitude.V = 1;

    /* Block: PulseGenConst1                                                                                          */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bPulseGenConst1.K = 1;

    /* Block: PulseGenDCVal                                                                                           */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bPulseGenDCVal.K = 0;

    /* Block: PulseGenFreq                                                                                            */
    /* Value = 0.2                                                                                                    */
    x2cModel.blocks.bPulseGenFreq.K = 0.2;

    /* Block: PulseGenOutput                                                                                          */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bPulseGenOutput.Toggle = 0;

    /* Block: PulseGenSin                                                                                             */
    /* fmax = 1000.0                                                                                                  */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bPulseGenSin.delta_phi = 0.00031415926535898;
    x2cModel.blocks.bPulseGenSin.phase = 0;
    x2cModel.blocks.bPulseGenSin.offset = 0;
    x2cModel.blocks.bPulseGenSin.phi = 0;

    /* Block: RateLimiter                                                                                             */
    /* Tr = 0.1                                                                                                       */
    /* Tf = 0.1                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bRateLimiter.RateUp = 0.0005;
    x2cModel.blocks.bRateLimiter.RateDown = 0.0005;
    x2cModel.blocks.bRateLimiter.enable_old = 0;

    /* Block: Saturation                                                                                              */
    /* max = 0.999999                                                                                                 */
    /* min = -0.999999                                                                                                */
    x2cModel.blocks.bSaturation.max = 0.999999;
    x2cModel.blocks.bSaturation.min = -0.999999;

    /* Block: Saturation2                                                                                             */
    /* max = 60.0                                                                                                     */
    /* min = 10.0                                                                                                     */
    x2cModel.blocks.bSaturation2.max = 60;
    x2cModel.blocks.bSaturation2.min = 10;

    /* Block: Sign                                                                                                    */

    /* Block: SpeedDesired                                                                                            */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bSpeedDesired.Toggle = 1;

    /* Block: SpeedDesiredConst                                                                                       */
    /* Value = 50.0                                                                                                   */
    x2cModel.blocks.bSpeedDesiredConst.K = 50;

    /* Block: SpeedReg                                                                                                */
    /* Kp = 465.288035450517                                                                                          */
    /* Ki = 387740.0295420975                                                                                         */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bSpeedReg.b0 = 19.387001477104874;
    x2cModel.blocks.bSpeedReg.b1 = 465.288035450517;
    x2cModel.blocks.bSpeedReg.i_old = 0;
    x2cModel.blocks.bSpeedReg.enable_old = 0;

    /* Block: Sub1                                                                                                    */

    /* Block: Sub2                                                                                                    */

    /* Block: TFlipFlop                                                                                               */
    x2cModel.blocks.bTFlipFlop.toggle_old = 0;


    /******************************************************************************************************************/
    /**                                              Initialize Inports                                              **/
    /******************************************************************************************************************/
    x2cModel.inports.bInButton = false;
    x2cModel.inports.bInEnable = false;
    x2cModel.inports.bInIa = (float32)0;
    x2cModel.inports.bInIb = (float32)0;
    x2cModel.inports.bInIc = (float32)0;
    x2cModel.inports.bInPositionEncoder1 = (float32)0;
    x2cModel.inports.bInPositionEncoder2 = (float32)0;
    x2cModel.inports.bInPositionResolver = (float32)0;
    x2cModel.inports.bInPwmFault = false;
    x2cModel.inports.bInVdc = (float32)0;

    /******************************************************************************************************************/
    /**                                               Link Block Inputs                                              **/
    /******************************************************************************************************************/

    /* Block Add1                                                                                                     */
    x2cModel.blocks.bAdd1.In1 =
        &x2cModel.blocks.bSign.Out;
    x2cModel.blocks.bAdd1.In2 =
        &x2cModel.blocks.bCoPulseGenOffset.Out;

    /* Block And                                                                                                      */
    x2cModel.blocks.bAnd.In1 =
        &x2cModel.blocks.bOr.Out;
    x2cModel.blocks.bAnd.In2 =
        &x2cModel.blocks.bTFlipFlop.Q;

    /* Block CFiIa                                                                                                    */
    x2cModel.blocks.bCFiIa.In =
        &x2cModel.inports.bInIa;

    /* Block CFiOmega                                                                                                 */
    x2cModel.blocks.bCFiOmega.In =
        &x2cModel.blocks.bOmega.Out;

    /* Block CoPulseGenOffset                                                                                         */

    /* Block Const0                                                                                                   */

    /* Block Const6                                                                                                   */

    /* Block ConstCurrentInit                                                                                         */

    /* Block ConstSpeedInit                                                                                           */

    /* Block CurrentDesired                                                                                           */
    x2cModel.blocks.bCurrentDesired.In1 =
        &x2cModel.blocks.bSpeedReg.Out;
    x2cModel.blocks.bCurrentDesired.In2 =
        &x2cModel.blocks.bPulseGenOutput.Out;

    /* Block CurrentIaFilter                                                                                          */
    x2cModel.blocks.bCurrentIaFilter.In =
        &x2cModel.inports.bInIa;

    /* Block CurrentLimit                                                                                             */

    /* Block CurrentReg                                                                                               */
    x2cModel.blocks.bCurrentReg.In =
        &x2cModel.blocks.bSub1.Out;
    x2cModel.blocks.bCurrentReg.Init =
        &x2cModel.blocks.bConstCurrentInit.Out;
    x2cModel.blocks.bCurrentReg.max =
        &x2cModel.blocks.bOutputVoltasgeLimit.Out;
    x2cModel.blocks.bCurrentReg.min =
        &x2cModel.blocks.bNegation2.Out;
    x2cModel.blocks.bCurrentReg.Enable =
        &x2cModel.blocks.bAnd.Out;

    /* Block Div2                                                                                                     */
    x2cModel.blocks.bDiv2.Num =
        &x2cModel.blocks.bOutputVoltage.Out;
    x2cModel.blocks.bDiv2.Den =
        &x2cModel.blocks.bSaturation2.Out;

    /* Block Negation                                                                                                 */
    x2cModel.blocks.bNegation.In =
        &x2cModel.blocks.bSaturation.Out;

    /* Block Negation2                                                                                                */
    x2cModel.blocks.bNegation2.In =
        &x2cModel.blocks.bOutputVoltasgeLimit.Out;

    /* Block Negation3                                                                                                */
    x2cModel.blocks.bNegation3.In =
        &x2cModel.blocks.bCurrentLimit.Out;

    /* Block Not                                                                                                      */
    x2cModel.blocks.bNot.In =
        &x2cModel.inports.bInPwmFault;

    /* Block Omega                                                                                                    */
    x2cModel.blocks.bOmega.In =
        &x2cModel.blocks.bPhi2Rpm.n;

    /* Block OmegaFilter                                                                                              */
    x2cModel.blocks.bOmegaFilter.In =
        &x2cModel.blocks.bOmega.Out;

    /* Block Or                                                                                                       */
    x2cModel.blocks.bOr.In1 =
        &x2cModel.inports.bInEnable;
    x2cModel.blocks.bOr.In2 =
        &x2cModel.blocks.bNot.Out;

    /* Block OutputVoltage                                                                                            */
    x2cModel.blocks.bOutputVoltage.In1 =
        &x2cModel.blocks.bCurrentReg.Out;
    x2cModel.blocks.bOutputVoltage.In2 =
        &x2cModel.blocks.bPulseGenOutput.Out;

    /* Block OutputVoltasgeLimit                                                                                      */

    /* Block Phi2Rpm                                                                                                  */
    x2cModel.blocks.bPhi2Rpm.phi =
        &x2cModel.inports.bInPositionEncoder1;

    /* Block PulseGenAmplitude                                                                                        */
    x2cModel.blocks.bPulseGenAmplitude.In =
        &x2cModel.blocks.bAdd1.Out;

    /* Block PulseGenConst1                                                                                           */

    /* Block PulseGenDCVal                                                                                            */

    /* Block PulseGenFreq                                                                                             */

    /* Block PulseGenOutput                                                                                           */
    x2cModel.blocks.bPulseGenOutput.In1 =
        &x2cModel.blocks.bPulseGenAmplitude.Out;
    x2cModel.blocks.bPulseGenOutput.In2 =
        &x2cModel.blocks.bRateLimiter.Out;

    /* Block PulseGenSin                                                                                              */
    x2cModel.blocks.bPulseGenSin.A =
        &x2cModel.blocks.bPulseGenConst1.Out;
    x2cModel.blocks.bPulseGenSin.f =
        &x2cModel.blocks.bPulseGenFreq.Out;

    /* Block RateLimiter                                                                                              */
    x2cModel.blocks.bRateLimiter.In =
        &x2cModel.blocks.bPulseGenDCVal.Out;
    x2cModel.blocks.bRateLimiter.Init =
        &x2cModel.blocks.bConst6.Out;
    x2cModel.blocks.bRateLimiter.Enable =
        &x2cModel.blocks.bAnd.Out;

    /* Block Saturation                                                                                               */
    x2cModel.blocks.bSaturation.In =
        &x2cModel.blocks.bDiv2.Out;

    /* Block Saturation2                                                                                              */
    x2cModel.blocks.bSaturation2.In =
        &x2cModel.inports.bInVdc;

    /* Block Sign                                                                                                     */
    x2cModel.blocks.bSign.In =
        &x2cModel.blocks.bPulseGenSin.u;

    /* Block SpeedDesired                                                                                             */
    x2cModel.blocks.bSpeedDesired.In1 =
        &x2cModel.blocks.bSpeedDesiredConst.Out;
    x2cModel.blocks.bSpeedDesired.In2 =
        &x2cModel.blocks.bPulseGenOutput.Out;

    /* Block SpeedDesiredConst                                                                                        */

    /* Block SpeedReg                                                                                                 */
    x2cModel.blocks.bSpeedReg.In =
        &x2cModel.blocks.bSub2.Out;
    x2cModel.blocks.bSpeedReg.Init =
        &x2cModel.blocks.bConstSpeedInit.Out;
    x2cModel.blocks.bSpeedReg.max =
        &x2cModel.blocks.bCurrentLimit.Out;
    x2cModel.blocks.bSpeedReg.min =
        &x2cModel.blocks.bNegation3.Out;
    x2cModel.blocks.bSpeedReg.Enable =
        &x2cModel.blocks.bAnd.Out;

    /* Block Sub1                                                                                                     */
    x2cModel.blocks.bSub1.Plus =
        &x2cModel.blocks.bCurrentDesired.Out;
    x2cModel.blocks.bSub1.Minus =
        &x2cModel.inports.bInIa;

    /* Block Sub2                                                                                                     */
    x2cModel.blocks.bSub2.Plus =
        &x2cModel.blocks.bSpeedDesired.Out;
    x2cModel.blocks.bSub2.Minus =
        &x2cModel.blocks.bOmega.Out;

    /* Block TFlipFlop                                                                                                */
    x2cModel.blocks.bTFlipFlop.T =
        &x2cModel.inports.bInButton;

    /******************************************************************************************************************/
    /**                                                 Link Outports                                                **/
    /******************************************************************************************************************/
    x2cModel.outports.bOutErrClear =
        &x2cModel.inports.bInButton;
    x2cModel.outports.bOutPWMEnable =
        &x2cModel.blocks.bAnd.Out;
    x2cModel.outports.bOutPWMa =
        &x2cModel.blocks.bSaturation.Out;
    x2cModel.outports.bOutPWMb =
        &x2cModel.blocks.bNegation.Out;
    x2cModel.outports.bOutPWMc =
        &x2cModel.blocks.bConst0.Out;

    /******************************************************************************************************************/
    /**                                           Run Block Init Functions                                           **/
    /******************************************************************************************************************/
    Add_Float32_Init(&x2cModel.blocks.bAdd1);
    And_Bool_Init(&x2cModel.blocks.bAnd);
    Gain_Float32_Init(&x2cModel.blocks.bCFiIa);
    Gain_Float32_Init(&x2cModel.blocks.bCFiOmega);
    Constant_Float32_Init(&x2cModel.blocks.bCoPulseGenOffset);
    Constant_Float32_Init(&x2cModel.blocks.bConst0);
    Constant_Float32_Init(&x2cModel.blocks.bConst6);
    Constant_Float32_Init(&x2cModel.blocks.bConstCurrentInit);
    Constant_Float32_Init(&x2cModel.blocks.bConstSpeedInit);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bCurrentDesired);
    PT1_Float32_Init(&x2cModel.blocks.bCurrentIaFilter);
    Constant_Float32_Init(&x2cModel.blocks.bCurrentLimit);
    PILimit_Float32_Init(&x2cModel.blocks.bCurrentReg);
    Div_Float32_Init(&x2cModel.blocks.bDiv2);
    Negation_Float32_Init(&x2cModel.blocks.bNegation);
    Negation_Float32_Init(&x2cModel.blocks.bNegation2);
    Negation_Float32_Init(&x2cModel.blocks.bNegation3);
    Not_Bool_Init(&x2cModel.blocks.bNot);
    Gain_Float32_Init(&x2cModel.blocks.bOmega);
    PT1_Float32_Init(&x2cModel.blocks.bOmegaFilter);
    Or_Bool_Init(&x2cModel.blocks.bOr);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bOutputVoltage);
    Constant_Float32_Init(&x2cModel.blocks.bOutputVoltasgeLimit);
    Phi2Speed_Float32_Init(&x2cModel.blocks.bPhi2Rpm);
    Gain_Float32_Init(&x2cModel.blocks.bPulseGenAmplitude);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenConst1);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenDCVal);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenFreq);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bPulseGenOutput);
    SinGen_Float32_Init(&x2cModel.blocks.bPulseGenSin);
    RateLimiter_Float32_Init(&x2cModel.blocks.bRateLimiter);
    Saturation_Float32_Init(&x2cModel.blocks.bSaturation);
    Saturation_Float32_Init(&x2cModel.blocks.bSaturation2);
    Sign_Float32_Init(&x2cModel.blocks.bSign);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bSpeedDesired);
    Constant_Float32_Init(&x2cModel.blocks.bSpeedDesiredConst);
    PILimit_Float32_Init(&x2cModel.blocks.bSpeedReg);
    Sub_Float32_Init(&x2cModel.blocks.bSub1);
    Sub_Float32_Init(&x2cModel.blocks.bSub2);
    TFlipFlop_Bool_Init(&x2cModel.blocks.bTFlipFlop);
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
void X2C_Update(void)
{
    X2C_Update_1();

}

/* X2C_Update for blocks with 1*Ts                                                                                    */
void X2C_Update_1(void)
{
    SinGen_Float32_Update(&x2cModel.blocks.bPulseGenSin);
    Sign_Float32_Update(&x2cModel.blocks.bSign);
    Add_Float32_Update(&x2cModel.blocks.bAdd1);
    Gain_Float32_Update(&x2cModel.blocks.bPulseGenAmplitude);
    Phi2Speed_Float32_Update(&x2cModel.blocks.bPhi2Rpm);
    Gain_Float32_Update(&x2cModel.blocks.bOmega);
    Negation_Float32_Update(&x2cModel.blocks.bNegation3);
    Negation_Float32_Update(&x2cModel.blocks.bNegation2);
    Not_Bool_Update(&x2cModel.blocks.bNot);
    Saturation_Float32_Update(&x2cModel.blocks.bSaturation2);
    Or_Bool_Update(&x2cModel.blocks.bOr);
    Gain_Float32_Update(&x2cModel.blocks.bCFiIa);
    Gain_Float32_Update(&x2cModel.blocks.bCFiOmega);
    PT1_Float32_Update(&x2cModel.blocks.bCurrentIaFilter);
    PT1_Float32_Update(&x2cModel.blocks.bOmegaFilter);
    TFlipFlop_Bool_Update(&x2cModel.blocks.bTFlipFlop);
    And_Bool_Update(&x2cModel.blocks.bAnd);
    RateLimiter_Float32_Update(&x2cModel.blocks.bRateLimiter);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bPulseGenOutput);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bSpeedDesired);
    Sub_Float32_Update(&x2cModel.blocks.bSub2);
    PILimit_Float32_Update(&x2cModel.blocks.bSpeedReg);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bCurrentDesired);
    Sub_Float32_Update(&x2cModel.blocks.bSub1);
    PILimit_Float32_Update(&x2cModel.blocks.bCurrentReg);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bOutputVoltage);
    Div_Float32_Update(&x2cModel.blocks.bDiv2);
    Saturation_Float32_Update(&x2cModel.blocks.bSaturation);
    Negation_Float32_Update(&x2cModel.blocks.bNegation);
    Scope_Main_Update(&x2cScope);
}

