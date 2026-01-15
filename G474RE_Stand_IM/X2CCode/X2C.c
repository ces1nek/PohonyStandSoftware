/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_IM                                                                                                    */
/* Date:  2025-12-10 13:39                                                                                            */

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

    /* Block: Add                                                                                                     */

    /* Block: Add1                                                                                                    */

    /* Block: Amplitude1                                                                                              */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bAmplitude1.K = 0;

    /* Block: And                                                                                                     */

    /* Block: AronPower1                                                                                              */

    /* Block: AutoSwitch                                                                                              */
    /* Thresh_up = 0.1                                                                                                */
    /* Thresh_down = -0.1                                                                                             */
    x2cModel.blocks.bAutoSwitch.Thresh_up = 0.1;
    x2cModel.blocks.bAutoSwitch.Thresh_down = -0.1;
    x2cModel.blocks.bAutoSwitch.Status = &RamTable_float32[0];

    /* Block: ClarkeNPark                                                                                             */

    /* Block: Div2                                                                                                    */

    /* Block: Enable                                                                                                  */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bEnable.K = 1;

    /* Block: EnableSwitch                                                                                            */

    /* Block: Freq                                                                                                    */
    /* Value = 10.0                                                                                                   */
    x2cModel.blocks.bFreq.K = 10;

    /* Block: Gain1                                                                                                   */
    /* Gain = 1.4142                                                                                                  */
    x2cModel.blocks.bGain1.V = 1.4142;

    /* Block: Gain2                                                                                                   */
    /* Gain = 6.283185307179586                                                                                       */
    x2cModel.blocks.bGain2.V = 6.283185307179586;

    /* Block: Gain4                                                                                                   */
    /* Gain = 0.5                                                                                                     */
    x2cModel.blocks.bGain4.V = 0.5;

    /* Block: Gain5                                                                                                   */
    /* Gain = 0.5                                                                                                     */
    x2cModel.blocks.bGain5.V = 0.5;

    /* Block: I1rms                                                                                                   */

    /* Block: Init                                                                                                    */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bInit.K = 0;

    /* Block: InvPark                                                                                                 */

    /* Block: LimitFreq                                                                                               */
    /* max = 50.0                                                                                                     */
    /* min = -50.0                                                                                                    */
    x2cModel.blocks.bLimitFreq.max = 50;
    x2cModel.blocks.bLimitFreq.min = -50;

    /* Block: ManualSwitch                                                                                            */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bManualSwitch.Toggle = 0;

    /* Block: Mult                                                                                                    */

    /* Block: Mult1                                                                                                   */

    /* Block: Mult2                                                                                                   */

    /* Block: Mult3                                                                                                   */

    /* Block: Mult4                                                                                                   */

    /* Block: Mult5                                                                                                   */

    /* Block: Mult6                                                                                                   */

    /* Block: NToFreqReal                                                                                             */
    /* Gain = 0.03333333333333333                                                                                     */
    x2cModel.blocks.bNToFreqReal.V = 0.03333333333333333;

    /* Block: Negation                                                                                                */

    /* Block: Negation1                                                                                               */

    /* Block: Negation3                                                                                               */

    /* Block: Not                                                                                                     */

    /* Block: Or                                                                                                      */

    /* Block: PT1                                                                                                     */
    /* V = 1.0                                                                                                        */
    /* fc = 5.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    /* method = zoh                                                                                                   */
    x2cModel.blocks.bPT1.b0 = 0.00156956327195523;
    x2cModel.blocks.bPT1.b1 = 0;
    x2cModel.blocks.bPT1.a0 = -0.9984304367280448;
    x2cModel.blocks.bPT1.in_old = 0;

    /* Block: PT2                                                                                                     */
    /* V = 1.0                                                                                                        */
    /* fc = 5.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    /* method = zoh                                                                                                   */
    x2cModel.blocks.bPT2.b0 = 0.00156956327195523;
    x2cModel.blocks.bPT2.b1 = 0;
    x2cModel.blocks.bPT2.a0 = -0.9984304367280448;
    x2cModel.blocks.bPT2.in_old = 0;

    /* Block: Phi2Speed                                                                                               */
    /* n_max = 3000.0                                                                                                 */
    /* p = 1.0                                                                                                        */
    /* fc = 150.0                                                                                                     */
    /* ts_fact = 1.0                                                                                                  */
    /* method = tustin                                                                                                */
    x2cModel.blocks.bPhi2Speed.b = 8792.823966176633;
    x2cModel.blocks.bPhi2Speed.a0 = -0.9539608813725853;
    x2cModel.blocks.bPhi2Speed.phi_old = 0;
    x2cModel.blocks.bPhi2Speed.n_old = 0;

    /* Block: Saturation1                                                                                             */
    /* max = 60.0                                                                                                     */
    /* min = 10.0                                                                                                     */
    x2cModel.blocks.bSaturation1.max = 60;
    x2cModel.blocks.bSaturation1.min = 10;

    /* Block: Saturation2                                                                                             */
    /* max = 0.999                                                                                                    */
    /* min = -0.999                                                                                                   */
    x2cModel.blocks.bSaturation2.max = 0.999;
    x2cModel.blocks.bSaturation2.min = -0.999;

    /* Block: Skluz                                                                                                   */
    /* Value = 7.0                                                                                                    */
    x2cModel.blocks.bSkluz.K = 7;

    /* Block: Skluz1                                                                                                  */
    /* Value = -4.0                                                                                                   */
    x2cModel.blocks.bSkluz1.K = -4;

    /* Block: Space Vector Modulation                                                                                 */
    /* method = Alternating reversing                                                                                 */
    x2cModel.blocks.bSpace_Vector_Modulation.method = 0;

    /* Block: Sub1                                                                                                    */

    /* Block: Sub2                                                                                                    */

    /* Block: TFlipFlop                                                                                               */
    x2cModel.blocks.bTFlipFlop.toggle_old = 0;

    /* Block: U12rms                                                                                                  */

    /* Block: Voltage                                                                                                 */
    /* Value = 23.4                                                                                                   */
    x2cModel.blocks.bVoltage.K = 23.4;

    /* Block: f_to_per                                                                                                */
    /* Gain = 0.02                                                                                                    */
    x2cModel.blocks.bf_to_per.V = 0.02;

    /* Block: uGain                                                                                                   */
    /* Gain = 2.0                                                                                                     */
    x2cModel.blocks.buGain.V = 2;

    /* Block: uI1                                                                                                     */
    /* Ki = 1.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.buI1.b0 = 0.00005;
    x2cModel.blocks.buI1.i_old = 0;
    x2cModel.blocks.buI1.enable_old = 0;


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
    x2cModel.inports.bInPositionEncoder1 = (float32)0;
    x2cModel.inports.bInPositionEncoder2 = (float32)0;
    x2cModel.inports.bInPositionResolver = (float32)0;
    x2cModel.inports.bInPwmFault = false;
    x2cModel.inports.bInVdc = (float32)0;

    /******************************************************************************************************************/
    /**                                               Link Block Inputs                                              **/
    /******************************************************************************************************************/

    /* Block Add                                                                                                      */
    x2cModel.blocks.bAdd.In1 =
        &x2cModel.inports.bInIa;
    x2cModel.blocks.bAdd.In2 =
        &x2cModel.inports.bInIc;

    /* Block Add1                                                                                                     */
    x2cModel.blocks.bAdd1.In1 =
        &x2cModel.blocks.bAutoSwitch.Out;
    x2cModel.blocks.bAdd1.In2 =
        &x2cModel.blocks.bNToFreqReal.Out;

    /* Block Amplitude1                                                                                               */

    /* Block And                                                                                                      */
    x2cModel.blocks.bAnd.In1 =
        &x2cModel.blocks.bOr.Out;
    x2cModel.blocks.bAnd.In2 =
        &x2cModel.blocks.bEnable.Out;

    /* Block AronPower1                                                                                               */
    x2cModel.blocks.bAronPower1.In1 =
        &x2cModel.blocks.bMult3.Out;
    x2cModel.blocks.bAronPower1.In2 =
        &x2cModel.blocks.bMult5.Out;

    /* Block AutoSwitch                                                                                               */
    x2cModel.blocks.bAutoSwitch.In1 =
        &x2cModel.blocks.bEnableSwitch.Out;
    x2cModel.blocks.bAutoSwitch.Switch =
        &x2cModel.blocks.bNToFreqReal.Out;
    x2cModel.blocks.bAutoSwitch.In3 =
        &x2cModel.blocks.bNegation3.Out;

    /* Block ClarkeNPark                                                                                              */
    x2cModel.blocks.bClarkeNPark.A =
        &x2cModel.inports.bInIa;
    x2cModel.blocks.bClarkeNPark.B =
        &x2cModel.blocks.bNegation.Out;
    x2cModel.blocks.bClarkeNPark.C =
        &x2cModel.inports.bInIc;
    x2cModel.blocks.bClarkeNPark.phi =
        &x2cModel.blocks.buI1.Out;

    /* Block Div2                                                                                                     */
    x2cModel.blocks.bDiv2.Num =
        &x2cModel.blocks.bGain1.Out;
    x2cModel.blocks.bDiv2.Den =
        &x2cModel.blocks.bSaturation1.Out;

    /* Block Enable                                                                                                   */

    /* Block EnableSwitch                                                                                             */
    x2cModel.blocks.bEnableSwitch.In1 =
        &x2cModel.blocks.bSkluz.Out;
    x2cModel.blocks.bEnableSwitch.Enable =
        &x2cModel.blocks.bTFlipFlop.Q;
    x2cModel.blocks.bEnableSwitch.In3 =
        &x2cModel.blocks.bSkluz1.Out;

    /* Block Freq                                                                                                     */

    /* Block Gain1                                                                                                    */
    x2cModel.blocks.bGain1.In =
        &x2cModel.blocks.bMult.Out;

    /* Block Gain2                                                                                                    */
    x2cModel.blocks.bGain2.In =
        &x2cModel.blocks.bManualSwitch.Out;

    /* Block Gain4                                                                                                    */
    x2cModel.blocks.bGain4.In =
        &x2cModel.blocks.bSub1.Out;

    /* Block Gain5                                                                                                    */
    x2cModel.blocks.bGain5.In =
        &x2cModel.blocks.bSub2.Out;

    /* Block I1rms                                                                                                    */
    x2cModel.blocks.bI1rms.In =
        &x2cModel.blocks.bPT2.Out;

    /* Block Init                                                                                                     */

    /* Block InvPark                                                                                                  */
    x2cModel.blocks.bInvPark.d =
        &x2cModel.blocks.bSaturation2.Out;
    x2cModel.blocks.bInvPark.q =
        &x2cModel.blocks.bAmplitude1.Out;
    x2cModel.blocks.bInvPark.phi =
        &x2cModel.blocks.buI1.Out;

    /* Block LimitFreq                                                                                                */
    x2cModel.blocks.bLimitFreq.In =
        &x2cModel.blocks.bAdd1.Out;

    /* Block ManualSwitch                                                                                             */
    x2cModel.blocks.bManualSwitch.In1 =
        &x2cModel.blocks.bFreq.Out;
    x2cModel.blocks.bManualSwitch.In2 =
        &x2cModel.blocks.bLimitFreq.Out;

    /* Block Mult                                                                                                     */
    x2cModel.blocks.bMult.In1 =
        &x2cModel.blocks.bVoltage.Out;
    x2cModel.blocks.bMult.In2 =
        &x2cModel.blocks.bf_to_per.Out;

    /* Block Mult1                                                                                                    */
    x2cModel.blocks.bMult1.In1 =
        &x2cModel.blocks.bSaturation1.Out;
    x2cModel.blocks.bMult1.In2 =
        &x2cModel.blocks.bGain4.Out;

    /* Block Mult2                                                                                                    */
    x2cModel.blocks.bMult2.In1 =
        &x2cModel.blocks.bSaturation1.Out;
    x2cModel.blocks.bMult2.In2 =
        &x2cModel.blocks.bGain5.Out;

    /* Block Mult3                                                                                                    */
    x2cModel.blocks.bMult3.In1 =
        &x2cModel.inports.bInIa;
    x2cModel.blocks.bMult3.In2 =
        &x2cModel.blocks.bMult1.Out;

    /* Block Mult4                                                                                                    */
    x2cModel.blocks.bMult4.In1 =
        &x2cModel.blocks.bMult1.Out;
    x2cModel.blocks.bMult4.In2 =
        &x2cModel.blocks.bMult1.Out;

    /* Block Mult5                                                                                                    */
    x2cModel.blocks.bMult5.In1 =
        &x2cModel.inports.bInIc;
    x2cModel.blocks.bMult5.In2 =
        &x2cModel.blocks.bMult2.Out;

    /* Block Mult6                                                                                                    */
    x2cModel.blocks.bMult6.In1 =
        &x2cModel.inports.bInIa;
    x2cModel.blocks.bMult6.In2 =
        &x2cModel.inports.bInIa;

    /* Block NToFreqReal                                                                                              */
    x2cModel.blocks.bNToFreqReal.In =
        &x2cModel.blocks.bPhi2Speed.n;

    /* Block Negation                                                                                                 */
    x2cModel.blocks.bNegation.In =
        &x2cModel.blocks.bAdd.Out;

    /* Block Negation1                                                                                                */
    x2cModel.blocks.bNegation1.In =
        &x2cModel.inports.bInPositionEncoder1;

    /* Block Negation3                                                                                                */
    x2cModel.blocks.bNegation3.In =
        &x2cModel.blocks.bEnableSwitch.Out;

    /* Block Not                                                                                                      */
    x2cModel.blocks.bNot.In =
        &x2cModel.inports.bInPwmFault;

    /* Block Or                                                                                                       */
    x2cModel.blocks.bOr.In1 =
        &x2cModel.inports.bInEnable;
    x2cModel.blocks.bOr.In2 =
        &x2cModel.blocks.bNot.Out;

    /* Block PT1                                                                                                      */
    x2cModel.blocks.bPT1.In =
        &x2cModel.blocks.bMult4.Out;

    /* Block PT2                                                                                                      */
    x2cModel.blocks.bPT2.In =
        &x2cModel.blocks.bMult6.Out;

    /* Block Phi2Speed                                                                                                */
    x2cModel.blocks.bPhi2Speed.phi =
        &x2cModel.blocks.bNegation1.Out;

    /* Block Saturation1                                                                                              */
    x2cModel.blocks.bSaturation1.In =
        &x2cModel.inports.bInVdc;

    /* Block Saturation2                                                                                              */
    x2cModel.blocks.bSaturation2.In =
        &x2cModel.blocks.bDiv2.Out;

    /* Block Skluz                                                                                                    */

    /* Block Skluz1                                                                                                   */

    /* Block SpaceVectorModulation                                                                                    */
    x2cModel.blocks.bSpace_Vector_Modulation.D =
        &x2cModel.blocks.bInvPark.D;
    x2cModel.blocks.bSpace_Vector_Modulation.Q =
        &x2cModel.blocks.bInvPark.Q;

    /* Block Sub1                                                                                                     */
    x2cModel.blocks.bSub1.Plus =
        &x2cModel.blocks.bSpace_Vector_Modulation.A;
    x2cModel.blocks.bSub1.Minus =
        &x2cModel.blocks.bSpace_Vector_Modulation.B;

    /* Block Sub2                                                                                                     */
    x2cModel.blocks.bSub2.Plus =
        &x2cModel.blocks.bSpace_Vector_Modulation.C;
    x2cModel.blocks.bSub2.Minus =
        &x2cModel.blocks.bSpace_Vector_Modulation.B;

    /* Block TFlipFlop                                                                                                */
    x2cModel.blocks.bTFlipFlop.T =
        &x2cModel.inports.bInButton;

    /* Block U12rms                                                                                                   */
    x2cModel.blocks.bU12rms.In =
        &x2cModel.blocks.bPT1.Out;

    /* Block Voltage                                                                                                  */

    /* Block f_to_per                                                                                                 */
    x2cModel.blocks.bf_to_per.In =
        &x2cModel.blocks.bManualSwitch.Out;

    /* Block uGain                                                                                                    */
    x2cModel.blocks.buGain.In =
        &x2cModel.blocks.bNegation1.Out;

    /* Block uI1                                                                                                      */
    x2cModel.blocks.buI1.In =
        &x2cModel.blocks.bGain2.Out;
    x2cModel.blocks.buI1.Init =
        &x2cModel.blocks.bInit.Out;
    x2cModel.blocks.buI1.Enable =
        &x2cModel.blocks.bAnd.Out;

    /******************************************************************************************************************/
    /**                                                 Link Outports                                                **/
    /******************************************************************************************************************/
    x2cModel.outports.bOutErrClear =
        &x2cModel.inports.bInButton;
    x2cModel.outports.bOutPWMEnable =
        &x2cModel.blocks.bAnd.Out;
    x2cModel.outports.bOutPWMa =
        &x2cModel.blocks.bSpace_Vector_Modulation.A;
    x2cModel.outports.bOutPWMb =
        &x2cModel.blocks.bSpace_Vector_Modulation.B;
    x2cModel.outports.bOutPWMc =
        &x2cModel.blocks.bSpace_Vector_Modulation.C;

    /******************************************************************************************************************/
    /**                                           Run Block Init Functions                                           **/
    /******************************************************************************************************************/
    Add_Float32_Init(&x2cModel.blocks.bAdd);
    Add_Float32_Init(&x2cModel.blocks.bAdd1);
    Constant_Float32_Init(&x2cModel.blocks.bAmplitude1);
    And_Bool_Init(&x2cModel.blocks.bAnd);
    Add_Float32_Init(&x2cModel.blocks.bAronPower1);
    AutoSwitch_Float32_Init(&x2cModel.blocks.bAutoSwitch);
    ClarkeNPark_Float32_Init(&x2cModel.blocks.bClarkeNPark);
    Div_Float32_Init(&x2cModel.blocks.bDiv2);
    Constant_Bool_Init(&x2cModel.blocks.bEnable);
    EnableSwitch_Float32_Init(&x2cModel.blocks.bEnableSwitch);
    Constant_Float32_Init(&x2cModel.blocks.bFreq);
    Gain_Float32_Init(&x2cModel.blocks.bGain1);
    Gain_Float32_Init(&x2cModel.blocks.bGain2);
    Gain_Float32_Init(&x2cModel.blocks.bGain4);
    Gain_Float32_Init(&x2cModel.blocks.bGain5);
    Sqrt_Float32_Init(&x2cModel.blocks.bI1rms);
    Constant_Float32_Init(&x2cModel.blocks.bInit);
    InvPark_Float32_Init(&x2cModel.blocks.bInvPark);
    Saturation_Float32_Init(&x2cModel.blocks.bLimitFreq);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bManualSwitch);
    Mult_Float32_Init(&x2cModel.blocks.bMult);
    Mult_Float32_Init(&x2cModel.blocks.bMult1);
    Mult_Float32_Init(&x2cModel.blocks.bMult2);
    Mult_Float32_Init(&x2cModel.blocks.bMult3);
    Mult_Float32_Init(&x2cModel.blocks.bMult4);
    Mult_Float32_Init(&x2cModel.blocks.bMult5);
    Mult_Float32_Init(&x2cModel.blocks.bMult6);
    Gain_Float32_Init(&x2cModel.blocks.bNToFreqReal);
    Negation_Float32_Init(&x2cModel.blocks.bNegation);
    Negation_Float32_Init(&x2cModel.blocks.bNegation1);
    Negation_Float32_Init(&x2cModel.blocks.bNegation3);
    Not_Bool_Init(&x2cModel.blocks.bNot);
    Or_Bool_Init(&x2cModel.blocks.bOr);
    PT1_Float32_Init(&x2cModel.blocks.bPT1);
    PT1_Float32_Init(&x2cModel.blocks.bPT2);
    Phi2Speed_Float32_Init(&x2cModel.blocks.bPhi2Speed);
    Saturation_Float32_Init(&x2cModel.blocks.bSaturation1);
    Saturation_Float32_Init(&x2cModel.blocks.bSaturation2);
    Constant_Float32_Init(&x2cModel.blocks.bSkluz);
    Constant_Float32_Init(&x2cModel.blocks.bSkluz1);
    SpaceVectorMod_Float32_Init(&x2cModel.blocks.bSpace_Vector_Modulation);
    Sub_Float32_Init(&x2cModel.blocks.bSub1);
    Sub_Float32_Init(&x2cModel.blocks.bSub2);
    TFlipFlop_Bool_Init(&x2cModel.blocks.bTFlipFlop);
    Sqrt_Float32_Init(&x2cModel.blocks.bU12rms);
    Constant_Float32_Init(&x2cModel.blocks.bVoltage);
    Gain_Float32_Init(&x2cModel.blocks.bf_to_per);
    uGain_Float32_Init(&x2cModel.blocks.buGain);
    uI_Float32_Init(&x2cModel.blocks.buI1);
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
    Negation_Float32_Update(&x2cModel.blocks.bNegation1);
    Phi2Speed_Float32_Update(&x2cModel.blocks.bPhi2Speed);
    Gain_Float32_Update(&x2cModel.blocks.bNToFreqReal);
    Saturation_Float32_Update(&x2cModel.blocks.bSaturation1);
    Not_Bool_Update(&x2cModel.blocks.bNot);
    Or_Bool_Update(&x2cModel.blocks.bOr);
    Add_Float32_Update(&x2cModel.blocks.bAdd);
    And_Bool_Update(&x2cModel.blocks.bAnd);
    Mult_Float32_Update(&x2cModel.blocks.bMult6);
    Negation_Float32_Update(&x2cModel.blocks.bNegation);
    PT1_Float32_Update(&x2cModel.blocks.bPT2);
    TFlipFlop_Bool_Update(&x2cModel.blocks.bTFlipFlop);
    uGain_Float32_Update(&x2cModel.blocks.buGain);
    EnableSwitch_Float32_Update(&x2cModel.blocks.bEnableSwitch);
    Sqrt_Float32_Update(&x2cModel.blocks.bI1rms);
    Negation_Float32_Update(&x2cModel.blocks.bNegation3);
    AutoSwitch_Float32_Update(&x2cModel.blocks.bAutoSwitch);
    Add_Float32_Update(&x2cModel.blocks.bAdd1);
    Saturation_Float32_Update(&x2cModel.blocks.bLimitFreq);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bManualSwitch);
    Gain_Float32_Update(&x2cModel.blocks.bGain2);
    Gain_Float32_Update(&x2cModel.blocks.bf_to_per);
    Mult_Float32_Update(&x2cModel.blocks.bMult);
    uI_Float32_Update(&x2cModel.blocks.buI1);
    ClarkeNPark_Float32_Update(&x2cModel.blocks.bClarkeNPark);
    Gain_Float32_Update(&x2cModel.blocks.bGain1);
    Div_Float32_Update(&x2cModel.blocks.bDiv2);
    Saturation_Float32_Update(&x2cModel.blocks.bSaturation2);
    InvPark_Float32_Update(&x2cModel.blocks.bInvPark);
    SpaceVectorMod_Float32_Update(&x2cModel.blocks.bSpace_Vector_Modulation);
    Sub_Float32_Update(&x2cModel.blocks.bSub1);
    Sub_Float32_Update(&x2cModel.blocks.bSub2);
    Gain_Float32_Update(&x2cModel.blocks.bGain4);
    Gain_Float32_Update(&x2cModel.blocks.bGain5);
    Mult_Float32_Update(&x2cModel.blocks.bMult1);
    Mult_Float32_Update(&x2cModel.blocks.bMult2);
    Mult_Float32_Update(&x2cModel.blocks.bMult3);
    Mult_Float32_Update(&x2cModel.blocks.bMult4);
    Mult_Float32_Update(&x2cModel.blocks.bMult5);
    Add_Float32_Update(&x2cModel.blocks.bAronPower1);
    PT1_Float32_Update(&x2cModel.blocks.bPT1);
    Sqrt_Float32_Update(&x2cModel.blocks.bU12rms);
    Scope_Main_Update(&x2cScope);
}

