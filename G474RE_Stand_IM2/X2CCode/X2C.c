/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: stand_IM_LSP_2_FOC                                                                                          */
/* Date:  2026-03-27 13:49                                                                                            */

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

    /* Block: Average                                                                                                 */
    /* n = 4                                                                                                          */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bAverage.n = 4;
    x2cModel.blocks.bAverage.sum = 0;
    x2cModel.blocks.bAverage.count = 0;
    x2cModel.blocks.bAverage.avg = &RamTable_float32[1];

    /* Block: Average1                                                                                                */
    /* n = 16                                                                                                         */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bAverage1.n = 16;
    x2cModel.blocks.bAverage1.sum = 0;
    x2cModel.blocks.bAverage1.count = 0;
    x2cModel.blocks.bAverage1.avg = &RamTable_float32[257];

    /* Block: ClarkeNPark                                                                                             */

    /* Block: Const6                                                                                                  */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConst6.K = 0;

    /* Block: CurrentPI_D                                                                                             */
    /* Kp = 8.05815552317738                                                                                          */
    /* Ki = 5562.155714954871                                                                                         */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bCurrentPI_D.b0 = 0.27810778574774353;
    x2cModel.blocks.bCurrentPI_D.b1 = 8.05815552317738;
    x2cModel.blocks.bCurrentPI_D.i_old = 0;
    x2cModel.blocks.bCurrentPI_D.enable_old = 0;

    /* Block: CurrentPI_Q                                                                                             */
    /* Kp = 8.05815552317738                                                                                          */
    /* Ki = 5562.155714954871                                                                                         */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bCurrentPI_Q.b0 = 0.27810778574774353;
    x2cModel.blocks.bCurrentPI_Q.b1 = 8.05815552317738;
    x2cModel.blocks.bCurrentPI_Q.i_old = 0;
    x2cModel.blocks.bCurrentPI_Q.enable_old = 0;

    /* Block: Div                                                                                                     */

    /* Block: Ena2                                                                                                    */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bEna2.K = 1;

    /* Block: Ena3                                                                                                    */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bEna3.K = 0;

    /* Block: Ena4                                                                                                    */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bEna4.K = 1;

    /* Block: Ena7                                                                                                    */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bEna7.K = 0;

    /* Block: Ena8                                                                                                    */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bEna8.K = 1;

    /* Block: Enable                                                                                                  */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bEnable.K = 1;

    /* Block: Imag                                                                                                    */
    /* Value = 9.059252999304883                                                                                      */
    x2cModel.blocks.bImag.K = 9.059252999304883;

    /* Block: Init                                                                                                    */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bInit.K = 0;

    /* Block: InitCurr                                                                                                */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bInitCurr.K = 0;

    /* Block: InitPsi                                                                                                 */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bInitPsi.K = 0;

    /* Block: InitSpeed                                                                                               */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bInitSpeed.K = 0;

    /* Block: InvPark                                                                                                 */

    /* Block: LoopBreaker                                                                                             */

    /* Block: LoopBreaker1                                                                                            */

    /* Block: ManualSwitch                                                                                            */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bManualSwitch.Toggle = 0;

    /* Block: ManualSwitch1                                                                                           */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bManualSwitch1.Toggle = 1;

    /* Block: ManualSwitch2                                                                                           */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bManualSwitch2.Toggle = 1;

    /* Block: ManualSwitch3                                                                                           */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bManualSwitch3.Toggle = 0;

    /* Block: ManualSwitch4                                                                                           */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bManualSwitch4.Toggle = 0;

    /* Block: ManualSwitch5                                                                                           */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bManualSwitch5.Toggle = 1;

    /* Block: Max                                                                                                     */
    /* Value = 19.106019993708788                                                                                     */
    x2cModel.blocks.bMax.K = 19.106019993708788;

    /* Block: MaxSpeed                                                                                                */
    /* Value = 13.435028842544403                                                                                     */
    x2cModel.blocks.bMaxSpeed.K = 13.435028842544403;

    /* Block: Min                                                                                                     */
    /* Value = -19.106019993708788                                                                                    */
    x2cModel.blocks.bMin.K = -19.106019993708788;

    /* Block: MinSpeed                                                                                                */
    /* Value = -13.435028842544403                                                                                    */
    x2cModel.blocks.bMinSpeed.K = -13.435028842544403;

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

    /* Block: PsiR_est                                                                                                */
    /* Ki = 1.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bPsiR_est.b0 = 0.00005;
    x2cModel.blocks.bPsiR_est.i_old = 0;
    x2cModel.blocks.bPsiR_est.enable_old = 0;

    /* Block: PulseGenConst1                                                                                          */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bPulseGenConst1.K = 1;

    /* Block: PulseGenDCVal                                                                                           */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bPulseGenDCVal.K = 0;

    /* Block: PulseGenFreq                                                                                            */
    /* Value = 0.5                                                                                                    */
    x2cModel.blocks.bPulseGenFreq.K = 0.5;

    /* Block: PulseGenHi                                                                                              */
    /* Value = 80.0                                                                                                   */
    x2cModel.blocks.bPulseGenHi.K = 80;

    /* Block: PulseGenLo                                                                                              */
    /* Value = 50.0                                                                                                   */
    x2cModel.blocks.bPulseGenLo.K = 50;

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

    /* Block: RR_ig                                                                                                   */
    /* Gain = 0.16716167862161535                                                                                     */
    x2cModel.blocks.bRR_ig.V = 0.16716167862161535;

    /* Block: RR_ig1                                                                                                  */
    /* Gain = 0.16716167862161535                                                                                     */
    x2cModel.blocks.bRR_ig1.V = 0.16716167862161535;

    /* Block: RR_ig_L_R                                                                                               */
    /* Gain = 34.15897684960337                                                                                       */
    x2cModel.blocks.bRR_ig_L_R.V = 34.15897684960337;

    /* Block: RateLimiter                                                                                             */
    /* Tr = 0.1                                                                                                       */
    /* Tf = 0.1                                                                                                       */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bRateLimiter.RateUp = 0.01;
    x2cModel.blocks.bRateLimiter.RateDown = 0.01;
    x2cModel.blocks.bRateLimiter.enable_old = 0;

    /* Block: SkluzovaOme                                                                                             */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bSkluzovaOme.K = 0;

    /* Block: SpaceVectorAdjust                                                                                       */

    /* Block: SpaceVectorMod                                                                                          */
    /* method = Alternating reversing                                                                                 */
    x2cModel.blocks.bSpaceVectorMod.method = 0;

    /* Block: SpeedPI                                                                                                 */
    /* Kp = 0.274321505678709                                                                                         */
    /* Ki = 4.549278701139453                                                                                         */
    /* ts_fact = 20.0                                                                                                 */
    x2cModel.blocks.bSpeedPI.b0 = 0.00454927870113945;
    x2cModel.blocks.bSpeedPI.b1 = 0.274321505678709;
    x2cModel.blocks.bSpeedPI.i_old = 0;
    x2cModel.blocks.bSpeedPI.enable_old = 0;

    /* Block: SubId                                                                                                   */

    /* Block: SubId1                                                                                                  */

    /* Block: SubIq                                                                                                   */

    /* Block: SubSpeed                                                                                                */

    /* Block: TFlipFlop                                                                                               */
    x2cModel.blocks.bTFlipFlop.toggle_old = 0;

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

    /* Block: uI1                                                                                                     */
    /* Ki = 1.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.buI1.b0 = 0.00005;
    x2cModel.blocks.buI1.i_old = 0;
    x2cModel.blocks.buI1.enable_old = 0;

    /* Block: wr_Sat                                                                                                  */
    /* max = 47.1238898038469                                                                                         */
    /* min = -47.1238898038469                                                                                        */
    x2cModel.blocks.bwr_Sat.max = 47.1238898038469;
    x2cModel.blocks.bwr_Sat.min = -47.1238898038469;


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

    /* Block Average                                                                                                  */
    x2cModel.blocks.bAverage.In =
        &x2cModel.blocks.bNegation2.Out;

    /* Block Average1                                                                                                 */
    x2cModel.blocks.bAverage1.In =
        &x2cModel.blocks.bClarkeNPark.q;

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

    /* Block CurrentPI_D                                                                                              */
    x2cModel.blocks.bCurrentPI_D.In =
        &x2cModel.blocks.bSubId.Out;
    x2cModel.blocks.bCurrentPI_D.Init =
        &x2cModel.blocks.bInitCurr.Out;
    x2cModel.blocks.bCurrentPI_D.max =
        &x2cModel.blocks.bMax.Out;
    x2cModel.blocks.bCurrentPI_D.min =
        &x2cModel.blocks.bMin.Out;
    x2cModel.blocks.bCurrentPI_D.Enable =
        &x2cModel.blocks.bManualSwitch1.Out;

    /* Block CurrentPI_Q                                                                                              */
    x2cModel.blocks.bCurrentPI_Q.In =
        &x2cModel.blocks.bSubIq.Out;
    x2cModel.blocks.bCurrentPI_Q.Init =
        &x2cModel.blocks.bInitCurr.Out;
    x2cModel.blocks.bCurrentPI_Q.max =
        &x2cModel.blocks.bMax.Out;
    x2cModel.blocks.bCurrentPI_Q.min =
        &x2cModel.blocks.bMin.Out;
    x2cModel.blocks.bCurrentPI_Q.Enable =
        &x2cModel.blocks.bManualSwitch1.Out;

    /* Block Div                                                                                                      */
    x2cModel.blocks.bDiv.Num =
        &x2cModel.blocks.bRR_ig1.Out;
    x2cModel.blocks.bDiv.Den =
        &x2cModel.blocks.bPsiR_est.Out;

    /* Block Ena2                                                                                                     */

    /* Block Ena3                                                                                                     */

    /* Block Ena4                                                                                                     */

    /* Block Ena7                                                                                                     */

    /* Block Ena8                                                                                                     */

    /* Block Enable                                                                                                   */

    /* Block Imag                                                                                                     */

    /* Block Init                                                                                                     */

    /* Block InitCurr                                                                                                 */

    /* Block InitPsi                                                                                                  */

    /* Block InitSpeed                                                                                                */

    /* Block InvPark                                                                                                  */
    x2cModel.blocks.bInvPark.d =
        &x2cModel.blocks.bVectorNormLimit.d_adj;
    x2cModel.blocks.bInvPark.q =
        &x2cModel.blocks.bVectorNormLimit.q_adj;
    x2cModel.blocks.bInvPark.phi =
        &x2cModel.blocks.buI1.Out;

    /* Block LoopBreaker                                                                                              */
    x2cModel.blocks.bLoopBreaker.In =
        &x2cModel.blocks.bwr_Sat.Out;

    /* Block LoopBreaker1                                                                                             */
    x2cModel.blocks.bLoopBreaker1.In =
        &x2cModel.blocks.bRR_ig_L_R.Out;

    /* Block ManualSwitch                                                                                             */
    x2cModel.blocks.bManualSwitch.In1 =
        &x2cModel.blocks.bLoopBreaker.Out;
    x2cModel.blocks.bManualSwitch.In2 =
        &x2cModel.blocks.bSkluzovaOme.Out;

    /* Block ManualSwitch1                                                                                            */
    x2cModel.blocks.bManualSwitch1.In1 =
        &x2cModel.blocks.bEna4.Out;
    x2cModel.blocks.bManualSwitch1.In2 =
        &x2cModel.blocks.bEna3.Out;

    /* Block ManualSwitch2                                                                                            */
    x2cModel.blocks.bManualSwitch2.In1 =
        &x2cModel.blocks.bPulseGenOutput.Out;
    x2cModel.blocks.bManualSwitch2.In2 =
        &x2cModel.blocks.bImag.Out;

    /* Block ManualSwitch3                                                                                            */
    x2cModel.blocks.bManualSwitch3.In1 =
        &x2cModel.blocks.bSpeedPI.Out;
    x2cModel.blocks.bManualSwitch3.In2 =
        &x2cModel.blocks.bPulseGenOutput.Out;

    /* Block ManualSwitch4                                                                                            */
    x2cModel.blocks.bManualSwitch4.In1 =
        &x2cModel.blocks.bAverage.Out;
    x2cModel.blocks.bManualSwitch4.In2 =
        &x2cModel.blocks.bOmegaFilter.Out;

    /* Block ManualSwitch5                                                                                            */
    x2cModel.blocks.bManualSwitch5.In1 =
        &x2cModel.blocks.bEna8.Out;
    x2cModel.blocks.bManualSwitch5.In2 =
        &x2cModel.blocks.bEna7.Out;

    /* Block Max                                                                                                      */

    /* Block MaxSpeed                                                                                                 */

    /* Block Min                                                                                                      */

    /* Block MinSpeed                                                                                                 */

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

    /* Block PsiR_est                                                                                                 */
    x2cModel.blocks.bPsiR_est.In =
        &x2cModel.blocks.bSubId1.Out;
    x2cModel.blocks.bPsiR_est.Init =
        &x2cModel.blocks.bInitPsi.Out;
    x2cModel.blocks.bPsiR_est.Enable =
        &x2cModel.blocks.bAnd.Out;

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

    /* Block RR_ig                                                                                                    */
    x2cModel.blocks.bRR_ig.In =
        &x2cModel.blocks.bClarkeNPark.d;

    /* Block RR_ig1                                                                                                   */
    x2cModel.blocks.bRR_ig1.In =
        &x2cModel.blocks.bAverage1.Out;

    /* Block RR_ig_L_R                                                                                                */
    x2cModel.blocks.bRR_ig_L_R.In =
        &x2cModel.blocks.bPsiR_est.Out;

    /* Block RateLimiter                                                                                              */
    x2cModel.blocks.bRateLimiter.In =
        &x2cModel.blocks.bPulseGenDCVal.Out;
    x2cModel.blocks.bRateLimiter.Init =
        &x2cModel.blocks.bConst6.Out;
    x2cModel.blocks.bRateLimiter.Enable =
        &x2cModel.blocks.bEna2.Out;

    /* Block SkluzovaOme                                                                                              */

    /* Block SpaceVectorAdjust                                                                                        */
    x2cModel.blocks.bSpaceVectorAdjust.d =
        &x2cModel.blocks.bCurrentPI_D.Out;
    x2cModel.blocks.bSpaceVectorAdjust.q =
        &x2cModel.blocks.bCurrentPI_Q.Out;
    x2cModel.blocks.bSpaceVectorAdjust.U_DClink =
        &x2cModel.blocks.bVphase.Out;

    /* Block SpaceVectorMod                                                                                           */
    x2cModel.blocks.bSpaceVectorMod.D =
        &x2cModel.blocks.bInvPark.D;
    x2cModel.blocks.bSpaceVectorMod.Q =
        &x2cModel.blocks.bInvPark.Q;

    /* Block SpeedPI                                                                                                  */
    x2cModel.blocks.bSpeedPI.In =
        &x2cModel.blocks.bSubSpeed.Out;
    x2cModel.blocks.bSpeedPI.Init =
        &x2cModel.blocks.bInitSpeed.Out;
    x2cModel.blocks.bSpeedPI.max =
        &x2cModel.blocks.bMaxSpeed.Out;
    x2cModel.blocks.bSpeedPI.min =
        &x2cModel.blocks.bMinSpeed.Out;
    x2cModel.blocks.bSpeedPI.Enable =
        &x2cModel.blocks.bManualSwitch5.Out;

    /* Block SubId                                                                                                    */
    x2cModel.blocks.bSubId.Plus =
        &x2cModel.blocks.bManualSwitch2.Out;
    x2cModel.blocks.bSubId.Minus =
        &x2cModel.blocks.bClarkeNPark.d;

    /* Block SubId1                                                                                                   */
    x2cModel.blocks.bSubId1.Plus =
        &x2cModel.blocks.bRR_ig.Out;
    x2cModel.blocks.bSubId1.Minus =
        &x2cModel.blocks.bLoopBreaker1.Out;

    /* Block SubIq                                                                                                    */
    x2cModel.blocks.bSubIq.Plus =
        &x2cModel.blocks.bManualSwitch3.Out;
    x2cModel.blocks.bSubIq.Minus =
        &x2cModel.blocks.bClarkeNPark.q;

    /* Block SubSpeed                                                                                                 */
    x2cModel.blocks.bSubSpeed.Plus =
        &x2cModel.blocks.bPulseGenOutput.Out;
    x2cModel.blocks.bSubSpeed.Minus =
        &x2cModel.blocks.bManualSwitch4.Out;

    /* Block TFlipFlop                                                                                                */
    x2cModel.blocks.bTFlipFlop.T =
        &x2cModel.inports.bInButton;

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
        &x2cModel.blocks.bManualSwitch4.Out;

    /* Block uI1                                                                                                      */
    x2cModel.blocks.buI1.In =
        &x2cModel.blocks.bOme_s.Out;
    x2cModel.blocks.buI1.Init =
        &x2cModel.blocks.bInit.Out;
    x2cModel.blocks.buI1.Enable =
        &x2cModel.blocks.bAnd.Out;

    /* Block wr_Sat                                                                                                   */
    x2cModel.blocks.bwr_Sat.In =
        &x2cModel.blocks.bDiv.Out;

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
    Average_Float32_Init(&x2cModel.blocks.bAverage);
    Average_Float32_Init(&x2cModel.blocks.bAverage1);
    ClarkeNPark_Float32_Init(&x2cModel.blocks.bClarkeNPark);
    Constant_Float32_Init(&x2cModel.blocks.bConst6);
    PILimit_Float32_Init(&x2cModel.blocks.bCurrentPI_D);
    PILimit_Float32_Init(&x2cModel.blocks.bCurrentPI_Q);
    Div_Float32_Init(&x2cModel.blocks.bDiv);
    Constant_Bool_Init(&x2cModel.blocks.bEna2);
    Constant_Bool_Init(&x2cModel.blocks.bEna3);
    Constant_Bool_Init(&x2cModel.blocks.bEna4);
    Constant_Bool_Init(&x2cModel.blocks.bEna7);
    Constant_Bool_Init(&x2cModel.blocks.bEna8);
    Constant_Bool_Init(&x2cModel.blocks.bEnable);
    Constant_Float32_Init(&x2cModel.blocks.bImag);
    Constant_Float32_Init(&x2cModel.blocks.bInit);
    Constant_Float32_Init(&x2cModel.blocks.bInitCurr);
    Constant_Float32_Init(&x2cModel.blocks.bInitPsi);
    Constant_Float32_Init(&x2cModel.blocks.bInitSpeed);
    InvPark_Float32_Init(&x2cModel.blocks.bInvPark);
    LoopBreaker_Float32_Init(&x2cModel.blocks.bLoopBreaker);
    LoopBreaker_Float32_Init(&x2cModel.blocks.bLoopBreaker1);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bManualSwitch);
    ManualSwitch_Bool_Init(&x2cModel.blocks.bManualSwitch1);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bManualSwitch2);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bManualSwitch3);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bManualSwitch4);
    ManualSwitch_Bool_Init(&x2cModel.blocks.bManualSwitch5);
    Constant_Float32_Init(&x2cModel.blocks.bMax);
    Constant_Float32_Init(&x2cModel.blocks.bMaxSpeed);
    Constant_Float32_Init(&x2cModel.blocks.bMin);
    Constant_Float32_Init(&x2cModel.blocks.bMinSpeed);
    Negation_Float32_Init(&x2cModel.blocks.bNegation);
    Negation_Float32_Init(&x2cModel.blocks.bNegation1);
    Negation_Float32_Init(&x2cModel.blocks.bNegation2);
    Not_Bool_Init(&x2cModel.blocks.bNot);
    Add_Float32_Init(&x2cModel.blocks.bOme_s);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.bOmegaFilter);
    Or_Bool_Init(&x2cModel.blocks.bOr);
    uI_Float32_Init(&x2cModel.blocks.bPsiR_est);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenConst1);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenDCVal);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenFreq);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenHi);
    Constant_Float32_Init(&x2cModel.blocks.bPulseGenLo);
    ManualSwitch_Float32_Init(&x2cModel.blocks.bPulseGenOutput);
    SinGen_Float32_Init(&x2cModel.blocks.bPulseGenSin);
    Gain_Float32_Init(&x2cModel.blocks.bRR_ig);
    Gain_Float32_Init(&x2cModel.blocks.bRR_ig1);
    Gain_Float32_Init(&x2cModel.blocks.bRR_ig_L_R);
    RateLimiter_Float32_Init(&x2cModel.blocks.bRateLimiter);
    Constant_Float32_Init(&x2cModel.blocks.bSkluzovaOme);
    SpaceVectorAdjust_Float32_Init(&x2cModel.blocks.bSpaceVectorAdjust);
    SpaceVectorMod_Float32_Init(&x2cModel.blocks.bSpaceVectorMod);
    PILimit_Float32_Init(&x2cModel.blocks.bSpeedPI);
    Sub_Float32_Init(&x2cModel.blocks.bSubId);
    Sub_Float32_Init(&x2cModel.blocks.bSubId1);
    Sub_Float32_Init(&x2cModel.blocks.bSubIq);
    Sub_Float32_Init(&x2cModel.blocks.bSubSpeed);
    TFlipFlop_Bool_Init(&x2cModel.blocks.bTFlipFlop);
    LowpassBiQ_Float32_Init(&x2cModel.blocks.bVdcFilter);
    Saturation_Float32_Init(&x2cModel.blocks.bVdcSaturation);
    Constant_Float32_Init(&x2cModel.blocks.bVectorLimit);
    VectorNormLimit_Float32_Init(&x2cModel.blocks.bVectorNormLimit);
    Gain_Float32_Init(&x2cModel.blocks.bVphase);
    Gain_Float32_Init(&x2cModel.blocks.bpp);
    uI_Float32_Init(&x2cModel.blocks.buI1);
    Saturation_Float32_Init(&x2cModel.blocks.bwr_Sat);
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
    LoopBreaker_Float32_Update(&x2cModel.blocks.bLoopBreaker);
    LoopBreaker_Float32_Update(&x2cModel.blocks.bLoopBreaker1);
    AutoSwitch_Float32_Update(&x2cModel.blocks.bAutoSwitch);
    Not_Bool_Update(&x2cModel.blocks.bNot);
    Or_Bool_Update(&x2cModel.blocks.bOr);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bPulseGenOutput);
    And_Bool_Update(&x2cModel.blocks.bAnd);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bManualSwitch2);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.bVdcFilter);
    ManualSwitch_Bool_Update(&x2cModel.blocks.bManualSwitch1);
    Saturation_Float32_Update(&x2cModel.blocks.bVdcSaturation);
    Add_Float32_Update(&x2cModel.blocks.bAdd);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bManualSwitch3);
    Gain_Float32_Update(&x2cModel.blocks.bVphase);
    Negation_Float32_Update(&x2cModel.blocks.bNegation);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bManualSwitch);
    Add_Float32_Update(&x2cModel.blocks.bOme_s);
    uI_Float32_Update(&x2cModel.blocks.buI1);
    ClarkeNPark_Float32_Update(&x2cModel.blocks.bClarkeNPark);
    Average_Float32_Update(&x2cModel.blocks.bAverage1);
    Gain_Float32_Update(&x2cModel.blocks.bRR_ig);
    Sub_Float32_Update(&x2cModel.blocks.bSubId);
    Sub_Float32_Update(&x2cModel.blocks.bSubIq);
    PILimit_Float32_Update(&x2cModel.blocks.bCurrentPI_D);
    PILimit_Float32_Update(&x2cModel.blocks.bCurrentPI_Q);
    Gain_Float32_Update(&x2cModel.blocks.bRR_ig1);
    Sub_Float32_Update(&x2cModel.blocks.bSubId1);
    uI_Float32_Update(&x2cModel.blocks.bPsiR_est);
    SpaceVectorAdjust_Float32_Update(&x2cModel.blocks.bSpaceVectorAdjust);
    Div_Float32_Update(&x2cModel.blocks.bDiv);
    Gain_Float32_Update(&x2cModel.blocks.bRR_ig_L_R);
    VectorNormLimit_Float32_Update(&x2cModel.blocks.bVectorNormLimit);
    InvPark_Float32_Update(&x2cModel.blocks.bInvPark);
    Saturation_Float32_Update(&x2cModel.blocks.bwr_Sat);
    SpaceVectorMod_Float32_Update(&x2cModel.blocks.bSpaceVectorMod);
    Scope_Main_Update(&x2cScope);
}

/* X2C_Update for blocks with 20*Ts                                                                                   */
void X2C_Update_20(void)
{
    Negation_Float32_Update(&x2cModel.blocks.bNegation2);
    Average_Float32_Update(&x2cModel.blocks.bAverage);
    LowpassBiQ_Float32_Update(&x2cModel.blocks.bOmegaFilter);
    SinGen_Float32_Update(&x2cModel.blocks.bPulseGenSin);
    ManualSwitch_Float32_Update(&x2cModel.blocks.bManualSwitch4);
    ManualSwitch_Bool_Update(&x2cModel.blocks.bManualSwitch5);
    RateLimiter_Float32_Update(&x2cModel.blocks.bRateLimiter);
    Gain_Float32_Update(&x2cModel.blocks.bpp);
    Sub_Float32_Update(&x2cModel.blocks.bSubSpeed);
    PILimit_Float32_Update(&x2cModel.blocks.bSpeedPI);
    Negation_Float32_Update(&x2cModel.blocks.bNegation1);
    TFlipFlop_Bool_Update(&x2cModel.blocks.bTFlipFlop);
}

