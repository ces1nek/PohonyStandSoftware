/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_IM_LSP_1                                                                                              */
/* Date:  2026-03-25 13:45                                                                                            */

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

    /* Block: And                                                                                                     */

    /* Block: AutoSwitch                                                                                              */
    /* Thresh_up = 0.01                                                                                               */
    /* Thresh_down = -0.01                                                                                            */
    x2cModel.blocks.bAutoSwitch.Thresh_up = 0.01;
    x2cModel.blocks.bAutoSwitch.Thresh_down = -0.01;
    x2cModel.blocks.bAutoSwitch.Status = &RamTable_float32[0];

    /* Block: ClarkeNPark                                                                                             */

    /* Block: Const6                                                                                                  */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConst6.K = 0;

    /* Block: Ena2                                                                                                    */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bEna2.K = 1;

    /* Block: Enable                                                                                                  */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bEnable.K = 1;

    /* Block: Init                                                                                                    */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bInit.K = 0;

    /* Block: Int2Real                                                                                                */
    /* Scale = 1.0                                                                                                    */
    x2cModel.blocks.bInt2Real.scale = 1;

    /* Block: Int2Real1                                                                                               */
    /* Scale = 1.0                                                                                                    */
    x2cModel.blocks.bInt2Real1.scale = 1;

    /* Block: InvPark                                                                                                 */

    /* Block: IqFilter                                                                                                */
    /* characteristic = Chebyshev II                                                                                  */
    /* fc = 10.0                                                                                                      */
    /* rp = 1.0                                                                                                       */
    /* rs = 20.0                                                                                                      */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bIqFilter.b0 = 0.09990628464676408;
    x2cModel.blocks.bIqFilter.b1 = -0.1998105972290027;
    x2cModel.blocks.bIqFilter.b2 = 0.09990628464676408;
    x2cModel.blocks.bIqFilter.a1 = -1.9981148465803924;
    x2cModel.blocks.bIqFilter.a2 = 0.9981168186449179;
    x2cModel.blocks.bIqFilter.in_old = 0;
    x2cModel.blocks.bIqFilter.in_veryold = 0;
    x2cModel.blocks.bIqFilter.out_old = 0;
    x2cModel.blocks.bIqFilter.out_veryold = 0;

    /* Block: ManualSwitch                                                                                            */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bManualSwitch.Toggle = 0;

    /* Block: ManualSwitch1                                                                                           */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bManualSwitch1.Toggle = 1;

    /* Block: Max                                                                                                     */
    /* Value = 50.0                                                                                                   */
    x2cModel.blocks.bMax.K = 50;

    /* Block: Max1                                                                                                    */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bMax1.K = 0;

    /* Block: Min                                                                                                     */
    /* Value = -50.0                                                                                                  */
    x2cModel.blocks.bMin.K = -50;

    /* Block: Mult                                                                                                    */

    /* Block: Mult1                                                                                                   */

    /* Block: Mult2                                                                                                   */

    /* Block: Negation                                                                                                */

    /* Block: Negation1                                                                                               */

    /* Block: Negation2                                                                                               */

    /* Block: Not                                                                                                     */

    /* Block: Ome_s                                                                                                   */

    /* Block: OmegaFilter                                                                                             */
    /* characteristic = Chebyshev II                                                                                  */
    /* fc = 200.0                                                                                                     */
    /* rp = 1.0                                                                                                       */
    /* rs = 20.0                                                                                                      */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bOmegaFilter.b0 = 0.1333590867787395;
    x2cModel.blocks.bOmegaFilter.b1 = 0.00723037956876145;
    x2cModel.blocks.bOmegaFilter.b2 = 0.1333590867787395;
    x2cModel.blocks.bOmegaFilter.a1 = -1.160464693380468;
    x2cModel.blocks.bOmegaFilter.a2 = 0.43441324650670854;
    x2cModel.blocks.bOmegaFilter.in_old = 0;
    x2cModel.blocks.bOmegaFilter.in_veryold = 0;
    x2cModel.blocks.bOmegaFilter.out_old = 0;
    x2cModel.blocks.bOmegaFilter.out_veryold = 0;

    /* Block: Or                                                                                                      */

    /* Block: PILimit                                                                                                 */
    /* Kp = 2.0                                                                                                       */
    /* Ki = 1.0                                                                                                       */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bPILimit.b0 = 0.001;
    x2cModel.blocks.bPILimit.b1 = 2;
    x2cModel.blocks.bPILimit.i_old = 0;
    x2cModel.blocks.bPILimit.enable_old = 0;

    /* Block: Psi2Usd                                                                                                 */
    /* Gain = 45.471080392870135                                                                                      */
    x2cModel.blocks.bPsi2Usd.V = 45.471080392870135;

    /* Block: PsiS                                                                                                    */
    /* Value = 0.055                                                                                                  */
    x2cModel.blocks.bPsiS.K = 0.055;

    /* Block: PulseGenConst1                                                                                          */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bPulseGenConst1.K = 1;

    /* Block: PulseGenDCVal                                                                                           */
    /* Value = 50.0                                                                                                   */
    x2cModel.blocks.bPulseGenDCVal.K = 50;

    /* Block: PulseGenFreq                                                                                            */
    /* Value = 0.25                                                                                                   */
    x2cModel.blocks.bPulseGenFreq.K = 0.25;

    /* Block: PulseGenHi                                                                                              */
    /* Value = 30.0                                                                                                   */
    x2cModel.blocks.bPulseGenHi.K = 30;

    /* Block: PulseGenLo                                                                                              */
    /* Value = 20.0                                                                                                   */
    x2cModel.blocks.bPulseGenLo.K = 20;

    /* Block: PulseGenOutput                                                                                          */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bPulseGenOutput.Toggle = 1;

    /* Block: PulseGenSin                                                                                             */
    /* fmax = 1000.0                                                                                                  */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bPulseGenSin.delta_phi = 0.00628318530717959;
    x2cModel.blocks.bPulseGenSin.phase = 0;
    x2cModel.blocks.bPulseGenSin.offset = 0;
    x2cModel.blocks.bPulseGenSin.phi = 0;

    /* Block: RateLimiter                                                                                             */
    /* Tr = 0.1                                                                                                       */
    /* Tf = 0.1                                                                                                       */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bRateLimiter.RateUp = 0.01;
    x2cModel.blocks.bRateLimiter.RateDown = 0.01;
    x2cModel.blocks.bRateLimiter.enable_old = 0;

    /* Block: Rs                                                                                                      */
    /* Gain = 0.25                                                                                                    */
    x2cModel.blocks.bRs.V = 0.25;

    /* Block: SkluzovaOme                                                                                             */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bSkluzovaOme.K = 0;

    /* Block: SpaceVectorAdjust                                                                                       */

    /* Block: SpaceVectorMod                                                                                          */
    /* method = Alternating reversing                                                                                 */
    x2cModel.blocks.bSpaceVectorMod.method = 0;

    /* Block: StartDelay                                                                                              */
    /* Td = 5.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bStartDelay.E_old = 0;
    x2cModel.blocks.bStartDelay.timeDelay = 100000;
    x2cModel.blocks.bStartDelay.timeAct = 0;

    /* Block: Sub                                                                                                     */

    /* Block: TFlipFlop                                                                                               */
    x2cModel.blocks.bTFlipFlop.toggle_old = 0;

    /* Block: Uq                                                                                                      */

    /* Block: UsqOffset                                                                                               */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bUsqOffset.K = 0;

    /* Block: VdcFilter                                                                                               */
    /* characteristic = Chebyshev II                                                                                  */
    /* fc = 10.0                                                                                                      */
    /* rp = 1.0                                                                                                       */
    /* rs = 20.0                                                                                                      */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bVdcFilter.b0 = 0.09990628464676408;
    x2cModel.blocks.bVdcFilter.b1 = -0.1998105972290027;
    x2cModel.blocks.bVdcFilter.b2 = 0.09990628464676408;
    x2cModel.blocks.bVdcFilter.a1 = -1.9981148465803924;
    x2cModel.blocks.bVdcFilter.a2 = 0.9981168186449179;
    x2cModel.blocks.bVdcFilter.in_old = 0;
    x2cModel.blocks.bVdcFilter.in_veryold = 0;
    x2cModel.blocks.bVdcFilter.out_old = 0;
    x2cModel.blocks.bVdcFilter.out_veryold = 0;

    /* Block: VdcSaturation                                                                                           */
    /* max = 60.0                                                                                                     */
    /* min = 10.0                                                                                                     */
    x2cModel.blocks.bVdcSaturation.max = 60;
    x2cModel.blocks.bVdcSaturation.min = 10;

    /* Block: VectorLimit                                                                                             */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bVectorLimit.K = 1;

    /* Block: VectorNormLimit                                                                                         */

    /* Block: Vphase                                                                                                  */
    /* Gain = 0.5773502691896258                                                                                      */
    x2cModel.blocks.bVphase.V = 0.5773502691896258;

    /* Block: pp                                                                                                      */
    /* Gain = 2.0                                                                                                     */
    x2cModel.blocks.bpp.V = 2;

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
    x2cModel.inports.bInPosition1 = (float32)0;
    x2cModel.inports.bInPosition2 = (float32)0;
    x2cModel.inports.bInPwmFault = false;
    x2cModel.inports.bInVdc = (float32)0;
    x2cModel.inports.bInVelocity1_radps = (float32)0;
    x2cModel.inports.bInVelocity1_rpm = (float32)0;

    /******************************************************************************************************************/
    /**                                               Link Block Inputs                                              **/
    /******************************************************************************************************************/

    /* Block Add                                                                                                      */
    x2cModel.blocks.bAdd.In1 =
        &x2cModel.inports.bInIa;
    x2cModel.blocks.bAdd.In2 =
        &x2cModel.inports.bInIc;

    /* Block And                                                                                                      */
    x2cModel.blocks.bAnd.In1 =
        &x2cModel.blocks.bOr.Out;
    x2cModel.blocks.bAnd.In2 =
        &x2cModel.blocks.bEnable.Out;

    /* Block AutoSwitch                                                                                               */
    x2cModel.blocks.bAutoSwitch.In1 =
        &x2cModel.blocks.bPulseGenHi.Out;
    x2cModel.blocks.bAutoSwitch.Switch =
        &x2cModel.blocks.bPulseGenSin.u;
    x2cModel.blocks.bAutoSwitch.In3 =
        &x2cModel.blocks.bPulseGenLo.Out;

    /* Block ClarkeNPark                                                                                              */
    x2cModel.blocks.bClarkeNPark.A =
        &x2cModel.inports.bInIa;
    x2cModel.blocks.bClarkeNPark.B =
        &x2cModel.blocks.bNegation.Out;
    x2cModel.blocks.bClarkeNPark.C =
        &x2cModel.inports.bInIc;
    x2cModel.blocks.bClarkeNPark.phi =
        &x2cModel.blocks.buI1.Out;

    /* Block Const6                                                                                                   */

    /* Block Ena2                                                                                                     */

    /* Block Enable                                                                                                   */

    /* Block Init                                                                                                     */

    /* Block Int2Real                                                                                                 */
    x2cModel.blocks.bInt2Real.In =
        &x2cModel.blocks.bTFlipFlop.Q;

    /* Block Int2Real1                                                                                                */
    x2cModel.blocks.bInt2Real1.In =
        &x2cModel.blocks.bStartDelay.T;

    /* Block InvPark                                                                                                  */
    x2cModel.blocks.bInvPark.d =
        &x2cModel.blocks.bVectorNormLimit.d_adj;
    x2cModel.blocks.bInvPark.q =
        &x2cModel.blocks.bVectorNormLimit.q_adj;
    x2cModel.blocks.bInvPark.phi =
        &x2cModel.blocks.buI1.Out;

    /* Block IqFilter                                                                                                 */
    x2cModel.blocks.bIqFilter.In =
        &x2cModel.blocks.bClarkeNPark.q;

    /* Block ManualSwitch                                                                                             */
    x2cModel.blocks.bManualSwitch.In1 =
        &x2cModel.blocks.bPILimit.Out;
    x2cModel.blocks.bManualSwitch.In2 =
        &x2cModel.blocks.bSkluzovaOme.Out;

    /* Block ManualSwitch1                                                                                            */
    x2cModel.blocks.bManualSwitch1.In1 =
        &x2cModel.blocks.bUsqOffset.Out;
    x2cModel.blocks.bManualSwitch1.In2 =
        &x2cModel.blocks.bRs.Out;

    /* Block Max                                                                                                      */

    /* Block Max1                                                                                                     */

    /* Block Min                                                                                                      */

    /* Block Mult                                                                                                     */
    x2cModel.blocks.bMult.In1 =
        &x2cModel.blocks.bMult1.Out;
    x2cModel.blocks.bMult.In2 =
        &x2cModel.blocks.bOme_s.Out;

    /* Block Mult1                                                                                                    */
    x2cModel.blocks.bMult1.In1 =
        &x2cModel.blocks.bPsiS.Out;
    x2cModel.blocks.bMult1.In2 =
        &x2cModel.blocks.bInt2Real.Out;

    /* Block Mult2                                                                                                    */
    x2cModel.blocks.bMult2.In1 =
        &x2cModel.blocks.bPulseGenDCVal.Out;
    x2cModel.blocks.bMult2.In2 =
        &x2cModel.blocks.bInt2Real1.Out;

    /* Block Negation                                                                                                 */
    x2cModel.blocks.bNegation.In =
        &x2cModel.blocks.bAdd.Out;

    /* Block Negation1                                                                                                */
    x2cModel.blocks.bNegation1.In =
        &x2cModel.inports.bInPosition1;

    /* Block Negation2                                                                                                */
    x2cModel.blocks.bNegation2.In =
        &x2cModel.inports.bInVelocity1_radps;

    /* Block Not                                                                                                      */
    x2cModel.blocks.bNot.In =
        &x2cModel.inports.bInPwmFault;

    /* Block Ome_s                                                                                                    */
    x2cModel.blocks.bOme_s.In1 =
        &x2cModel.blocks.bManualSwitch.Out;
    x2cModel.blocks.bOme_s.In2 =
        &x2cModel.blocks.bpp.Out;

    /* Block OmegaFilter                                                                                              */
    x2cModel.blocks.bOmegaFilter.In =
        &x2cModel.blocks.bNegation2.Out;

    /* Block Or                                                                                                       */
    x2cModel.blocks.bOr.In1 =
        &x2cModel.inports.bInEnable;
    x2cModel.blocks.bOr.In2 =
        &x2cModel.blocks.bNot.Out;

    /* Block PILimit                                                                                                  */
    x2cModel.blocks.bPILimit.In =
        &x2cModel.blocks.bSub.Out;
    x2cModel.blocks.bPILimit.Init =
        &x2cModel.blocks.bMax1.Out;
    x2cModel.blocks.bPILimit.max =
        &x2cModel.blocks.bMax.Out;
    x2cModel.blocks.bPILimit.min =
        &x2cModel.blocks.bMin.Out;
    x2cModel.blocks.bPILimit.Enable =
        &x2cModel.blocks.bStartDelay.T;

    /* Block Psi2Usd                                                                                                  */
    x2cModel.blocks.bPsi2Usd.In =
        &x2cModel.blocks.bMult1.Out;

    /* Block PsiS                                                                                                     */

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

    /* Block RateLimiter                                                                                              */
    x2cModel.blocks.bRateLimiter.In =
        &x2cModel.blocks.bMult2.Out;
    x2cModel.blocks.bRateLimiter.Init =
        &x2cModel.blocks.bConst6.Out;
    x2cModel.blocks.bRateLimiter.Enable =
        &x2cModel.blocks.bEna2.Out;

    /* Block Rs                                                                                                       */
    x2cModel.blocks.bRs.In =
        &x2cModel.blocks.bIqFilter.Out;

    /* Block SkluzovaOme                                                                                              */

    /* Block SpaceVectorAdjust                                                                                        */
    x2cModel.blocks.bSpaceVectorAdjust.d =
        &x2cModel.blocks.bPsi2Usd.Out;
    x2cModel.blocks.bSpaceVectorAdjust.q =
        &x2cModel.blocks.bUq.Out;
    x2cModel.blocks.bSpaceVectorAdjust.U_DClink =
        &x2cModel.blocks.bVphase.Out;

    /* Block SpaceVectorMod                                                                                           */
    x2cModel.blocks.bSpaceVectorMod.D =
        &x2cModel.blocks.bInvPark.D;
    x2cModel.blocks.bSpaceVectorMod.Q =
        &x2cModel.blocks.bInvPark.Q;

    /* Block StartDelay                                                                                               */
    x2cModel.blocks.bStartDelay.E =
        &x2cModel.blocks.bTFlipFlop.Q;

    /* Block Sub                                                                                                      */
    x2cModel.blocks.bSub.Plus =
        &x2cModel.blocks.bPulseGenOutput.Out;
    x2cModel.blocks.bSub.Minus =
        &x2cModel.blocks.bOmegaFilter.Out;

    /* Block TFlipFlop                                                                                                */
    x2cModel.blocks.bTFlipFlop.T =
        &x2cModel.inports.bInButton;

    /* Block Uq                                                                                                       */
    x2cModel.blocks.bUq.In1 =
        &x2cModel.blocks.bManualSwitch1.Out;
    x2cModel.blocks.bUq.In2 =
        &x2cModel.blocks.bMult.Out;

    /* Block UsqOffset                                                                                                */

    /* Block VdcFilter                                                                                                */
    x2cModel.blocks.bVdcFilter.In =
        &x2cModel.inports.bInVdc;

    /* Block VdcSaturation                                                                                            */
    x2cModel.blocks.bVdcSaturation.In =
        &x2cModel.blocks.bVdcFilter.Out;

    /* Block VectorLimit                                                                                              */

    /* Block VectorNormLimit                                                                                          */
    x2cModel.blocks.bVectorNormLimit.d =
        &x2cModel.blocks.bSpaceVectorAdjust.d_adj;
    x2cModel.blocks.bVectorNormLimit.q =
        &x2cModel.blocks.bSpaceVectorAdjust.q_adj;
    x2cModel.blocks.bVectorNormLimit.Limit =
        &x2cModel.blocks.bVectorLimit.Out;

    /* Block Vphase                                                                                                   */
    x2cModel.blocks.bVphase.In =
        &x2cModel.blocks.bVdcSaturation.Out;

    /* Block pp                                                                                                       */
    x2cModel.blocks.bpp.In =
        &x2cModel.blocks.bOmegaFilter.Out;

    /* Block uGain                                                                                                    */
    x2cModel.blocks.buGain.In =
        &x2cModel.blocks.bNegation1.Out;

    /* Block uI1                                                                                                      */
    x2cModel.blocks.buI1.In =
        &x2cModel.blocks.bOme_s.Out;
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
        &x2cModel.blocks.bSpaceVectorMod.A;
    x2cModel.outports.bOutPWMb =
        &x2cModel.blocks.bSpaceVectorMod.B;
    x2cModel.outports.bOutPWMc =
        &x2cModel.blocks.bSpaceVectorMod.C;

    /******************************************************************************************************************/
    /**                                           Run Block Init Functions                                           **/
    /******************************************************************************************************************/
    Add_Float32_Init(&x2cModel.blocks.bAdd);
    And_Bool_Init(&x2cModel.blocks.bAnd);
    AutoSwitch_Float32_Init(&x2cModel.blocks.bAutoSwitch);
    ClarkeNPark_Float32_Init(&x2cModel.blocks.bClarkeNPark);
    Constant_Float32_Init(&x2cModel.blocks.bConst6);
    Constant_Bool_Init(&x2cModel.blocks.bEna2);
    Constant_Bool_Init(&x2cModel.blocks.bEnable);
    Constant_Float32_Init(&x2cModel.blocks.bInit);
    Int2Real_Bool_Float32_Init(&x2cModel.blocks.bInt2Real);
    Int2Real_Bool_Float32_Init(&x2cModel.blocks.bInt2Real1);
    InvPark_Float32_Init(&x2cModel.blocks.bInvPark);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.bIqFilter);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bManualSwitch);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bManualSwitch1);
    Constant_Float32_Init(&x2cModel.blocks.bMax);
    Constant_Float32_Init(&x2cModel.blocks.bMax1);
    Constant_Float32_Init(&x2cModel.blocks.bMin);
    Mult_Float32_Init(&x2cModel.blocks.bMult);
    Mult_Float32_Init(&x2cModel.blocks.bMult1);
    Mult_Float32_Init(&x2cModel.blocks.bMult2);
    Negation_Float32_Init(&x2cModel.blocks.bNegation);
    Negation_Float32_Init(&x2cModel.blocks.bNegation1);
    Negation_Float32_Init(&x2cModel.blocks.bNegation2);
    Not_Bool_Init(&x2cModel.blocks.bNot);
    Add_Float32_Init(&x2cModel.blocks.bOme_s);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.bOmegaFilter);
    Or_Bool_Init(&x2cModel.blocks.bOr);
    PILimit_Float32_Init(&x2cModel.blocks.bPILimit);
    Gain_Float32_Init(&x2cModel.blocks.bPsi2Usd);
    Constant_Float32_Init(&x2cModel.blocks.bPsiS);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenConst1);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenDCVal);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenFreq);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenHi);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenLo);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bPulseGenOutput);
    SinGen_Float32_Init(&x2cModel.blocks.bPulseGenSin);
    RateLimiter_Float32_Init(&x2cModel.blocks.bRateLimiter);
    Gain_Float32_Init(&x2cModel.blocks.bRs);
    Constant_Float32_Init(&x2cModel.blocks.bSkluzovaOme);
    SpaceVectorAdjust_Float32_Init(&x2cModel.blocks.bSpaceVectorAdjust);
    SpaceVectorMod_Float32_Init(&x2cModel.blocks.bSpaceVectorMod);
    StartDelay_Bool_Init(&x2cModel.blocks.bStartDelay);
    Sub_Float32_Init(&x2cModel.blocks.bSub);
    TFlipFlop_Bool_Init(&x2cModel.blocks.bTFlipFlop);
    Add_Float32_Init(&x2cModel.blocks.bUq);
    Constant_Float32_Init(&x2cModel.blocks.bUsqOffset);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.bVdcFilter);
    Saturation_Float32_Init(&x2cModel.blocks.bVdcSaturation);
    Constant_Float32_Init(&x2cModel.blocks.bVectorLimit);
    VectorNormLimit_Float32_Init(&x2cModel.blocks.bVectorNormLimit);
    Gain_Float32_Init(&x2cModel.blocks.bVphase);
    Gain_Float32_Init(&x2cModel.blocks.bpp);
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
/* X2C_Update for blocks with 1*Ts                                                                                    */
void X2C_Update_1(void)
{
    Add_Float32_Update(&x2cModel.blocks.bAdd);
    Negation_Float32_Update(&x2cModel.blocks.bNegation);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.bVdcFilter);
    Saturation_Float32_Update(&x2cModel.blocks.bVdcSaturation);
    Gain_Float32_Update(&x2cModel.blocks.bVphase);
    Not_Bool_Update(&x2cModel.blocks.bNot);
    Or_Bool_Update(&x2cModel.blocks.bOr);
    And_Bool_Update(&x2cModel.blocks.bAnd);
    TFlipFlop_Bool_Update(&x2cModel.blocks.bTFlipFlop);
    Int2Real_Bool_Float32_Update(&x2cModel.blocks.bInt2Real);
    StartDelay_Bool_Update(&x2cModel.blocks.bStartDelay);
    Mult_Float32_Update(&x2cModel.blocks.bMult1);
    Gain_Float32_Update(&x2cModel.blocks.bPsi2Usd);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bManualSwitch);
    Add_Float32_Update(&x2cModel.blocks.bOme_s);
    Mult_Float32_Update(&x2cModel.blocks.bMult);
    uI_Float32_Update(&x2cModel.blocks.buI1);
    ClarkeNPark_Float32_Update(&x2cModel.blocks.bClarkeNPark);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.bIqFilter);
    Gain_Float32_Update(&x2cModel.blocks.bRs);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bManualSwitch1);
    Add_Float32_Update(&x2cModel.blocks.bUq);
    SpaceVectorAdjust_Float32_Update(&x2cModel.blocks.bSpaceVectorAdjust);
    VectorNormLimit_Float32_Update(&x2cModel.blocks.bVectorNormLimit);
    InvPark_Float32_Update(&x2cModel.blocks.bInvPark);
    SpaceVectorMod_Float32_Update(&x2cModel.blocks.bSpaceVectorMod);
    Scope_Main_Update(&x2cScope);
}

/* X2C_Update for blocks with 20*Ts                                                                                   */
void X2C_Update_20(void)
{
    SinGen_Float32_Update(&x2cModel.blocks.bPulseGenSin);
    AutoSwitch_Float32_Update(&x2cModel.blocks.bAutoSwitch);
    Negation_Float32_Update(&x2cModel.blocks.bNegation2);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.bOmegaFilter);
    Gain_Float32_Update(&x2cModel.blocks.bpp);
    Negation_Float32_Update(&x2cModel.blocks.bNegation1);
    uGain_Float32_Update(&x2cModel.blocks.buGain);
    Int2Real_Bool_Float32_Update(&x2cModel.blocks.bInt2Real1);
    Mult_Float32_Update(&x2cModel.blocks.bMult2);
    RateLimiter_Float32_Update(&x2cModel.blocks.bRateLimiter);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bPulseGenOutput);
    Sub_Float32_Update(&x2cModel.blocks.bSub);
    PILimit_Float32_Update(&x2cModel.blocks.bPILimit);
}

