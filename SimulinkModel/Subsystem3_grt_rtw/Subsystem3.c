/*
 * Subsystem3.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Subsystem3".
 *
 * Model version              : 4.57
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Thu May  2 15:24:10 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Subsystem3.h"
#include "rtwtypes.h"
#include <string.h>
#include "Subsystem3_private.h"
#include "rt_nonfinite.h"

/* Block signals (default storage) */
B_Subsystem3_T Subsystem3_B;

/* Block states (default storage) */
DW_Subsystem3_T Subsystem3_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Subsystem3_T Subsystem3_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Subsystem3_T Subsystem3_Y;

/* Real-time model */
static RT_MODEL_Subsystem3_T Subsystem3_M_;
RT_MODEL_Subsystem3_T *const Subsystem3_M = &Subsystem3_M_;
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Subsystem3_M->Timing.TaskCounters.TID[1])++;
  if ((Subsystem3_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [2.0E-5s, 0.0s] */
    Subsystem3_M->Timing.TaskCounters.TID[1] = 0;
  }

  (Subsystem3_M->Timing.TaskCounters.TID[2])++;
  if ((Subsystem3_M->Timing.TaskCounters.TID[2]) > 4) {/* Sample time: [5.0E-5s, 0.0s] */
    Subsystem3_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model step function */
void Subsystem3_step(void)
{
  real_T rtb_Sum;
  real_T rtb_Sum11;
  real_T rtb_Sum8;
  real_T rtb_Sum_n;

  /* Sum: '<S1>/Sum7' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In4'
   */
  Subsystem3_B.Sum7 = Subsystem3_U.Idref - Subsystem3_U.In4;
  if (Subsystem3_M->Timing.TaskCounters.TID[2] == 0) {
    /* Sum: '<S44>/Sum' incorporates:
     *  DiscreteIntegrator: '<S35>/Integrator'
     *  Gain: '<S40>/Proportional Gain'
     */
    rtb_Sum = Subsystem3_P.PIDControllerId_P * Subsystem3_B.Sum7 +
      Subsystem3_DW.Id;

    /* Saturate: '<S42>/Saturation' */
    if (rtb_Sum > Subsystem3_P.PIDControllerId_UpperSaturation) {
      /* Saturate: '<S42>/Saturation' */
      Subsystem3_B.Saturation = Subsystem3_P.PIDControllerId_UpperSaturation;
    } else if (rtb_Sum < Subsystem3_P.PIDControllerId_LowerSaturation) {
      /* Saturate: '<S42>/Saturation' */
      Subsystem3_B.Saturation = Subsystem3_P.PIDControllerId_LowerSaturation;
    } else {
      /* Saturate: '<S42>/Saturation' */
      Subsystem3_B.Saturation = rtb_Sum;
    }

    /* End of Saturate: '<S42>/Saturation' */
  }

  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/In2'
   */
  if (Subsystem3_U.In2 >= Subsystem3_P.Switch1_Threshold) {
    rtb_Sum8 = Subsystem3_B.Saturation;
  } else {
    rtb_Sum8 = Subsystem3_P.Constant_Value;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* Sum: '<S1>/Sum8' incorporates:
   *  Gain: '<S1>/Gain2'
   *  Inport: '<Root>/In3'
   *  Inport: '<Root>/In4'
   *  Sum: '<S1>/Sum9'
   */
  rtb_Sum8 = (Subsystem3_P.Gain2_Gain * Subsystem3_U.In4 + rtb_Sum8) +
    Subsystem3_U.In3;

  /* Switch: '<S1>/Switch7' incorporates:
   *  Inport: '<Root>/In2'
   */
  if (Subsystem3_U.In2 >= Subsystem3_P.Switch7_Threshold) {
    /* Outport: '<Root>/Ed' */
    Subsystem3_Y.Ed = rtb_Sum8;
  } else {
    /* Outport: '<Root>/Ed' */
    Subsystem3_Y.Ed = 0.0;
  }

  /* End of Switch: '<S1>/Switch7' */

  /* Sum: '<S1>/Sum10' incorporates:
   *  Inport: '<Root>/In5'
   *  Inport: '<Root>/In8'
   */
  Subsystem3_B.Sum10 = Subsystem3_U.Iqref - Subsystem3_U.In8;
  if (Subsystem3_M->Timing.TaskCounters.TID[2] == 0) {
    /* Sum: '<S92>/Sum' incorporates:
     *  DiscreteIntegrator: '<S83>/Integrator'
     *  Gain: '<S88>/Proportional Gain'
     */
    rtb_Sum_n = Subsystem3_P.PIDControllerIq_P * Subsystem3_B.Sum10 +
      Subsystem3_DW.Id_p;

    /* Saturate: '<S90>/Saturation' */
    if (rtb_Sum_n > Subsystem3_P.PIDControllerIq_UpperSaturation) {
      /* Saturate: '<S90>/Saturation' */
      Subsystem3_B.Saturation_i = Subsystem3_P.PIDControllerIq_UpperSaturation;
    } else if (rtb_Sum_n < Subsystem3_P.PIDControllerIq_LowerSaturation) {
      /* Saturate: '<S90>/Saturation' */
      Subsystem3_B.Saturation_i = Subsystem3_P.PIDControllerIq_LowerSaturation;
    } else {
      /* Saturate: '<S90>/Saturation' */
      Subsystem3_B.Saturation_i = rtb_Sum_n;
    }

    /* End of Saturate: '<S90>/Saturation' */
  }

  /* Switch: '<S1>/Switch2' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/In2'
   */
  if (Subsystem3_U.In2 >= Subsystem3_P.Switch2_Threshold) {
    rtb_Sum11 = Subsystem3_B.Saturation_i;
  } else {
    rtb_Sum11 = Subsystem3_P.Constant1_Value;
  }

  /* End of Switch: '<S1>/Switch2' */

  /* Sum: '<S1>/Sum11' incorporates:
   *  Gain: '<S1>/Gain3'
   *  Inport: '<Root>/In6'
   *  Inport: '<Root>/In8'
   *  Sum: '<S1>/Sum12'
   */
  rtb_Sum11 = (rtb_Sum11 - Subsystem3_P.Gain3_Gain * Subsystem3_U.In8) +
    Subsystem3_U.In6;

  /* Switch: '<S1>/Switch6' incorporates:
   *  Inport: '<Root>/In2'
   */
  if (Subsystem3_U.In2 >= Subsystem3_P.Switch6_Threshold) {
    /* Outport: '<Root>/Eq' */
    Subsystem3_Y.Eq = rtb_Sum11;
  } else {
    /* Outport: '<Root>/Eq' */
    Subsystem3_Y.Eq = 0.0;
  }

  /* End of Switch: '<S1>/Switch6' */
  if (Subsystem3_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update for DiscreteIntegrator: '<S35>/Integrator' incorporates:
     *  Gain: '<S28>/Kb'
     *  Gain: '<S32>/Integral Gain'
     *  Sum: '<S28>/SumI2'
     *  Sum: '<S28>/SumI4'
     */
    Subsystem3_DW.Id += ((Subsystem3_B.Saturation - rtb_Sum) *
                         Subsystem3_P.PIDControllerId_Kb +
                         Subsystem3_P.PIDControllerId_I * Subsystem3_B.Sum7) *
      Subsystem3_P.Integrator_gainval;

    /* Update for DiscreteIntegrator: '<S83>/Integrator' incorporates:
     *  Gain: '<S76>/Kb'
     *  Gain: '<S80>/Integral Gain'
     *  Sum: '<S76>/SumI2'
     *  Sum: '<S76>/SumI4'
     */
    Subsystem3_DW.Id_p += ((Subsystem3_B.Saturation_i - rtb_Sum_n) *
      Subsystem3_P.PIDControllerIq_Kb + Subsystem3_P.PIDControllerIq_I *
      Subsystem3_B.Sum10) * Subsystem3_P.Integrator_gainval_j;
  }

  /* Matfile logging */
  rt_UpdateTXYLogVars(Subsystem3_M->rtwLogInfo, (&Subsystem3_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0E-5s, 0.0s] */
    if ((rtmGetTFinal(Subsystem3_M)!=-1) &&
        !((rtmGetTFinal(Subsystem3_M)-Subsystem3_M->Timing.taskTime0) >
          Subsystem3_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Subsystem3_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Subsystem3_M->Timing.clockTick0)) {
    ++Subsystem3_M->Timing.clockTickH0;
  }

  Subsystem3_M->Timing.taskTime0 = Subsystem3_M->Timing.clockTick0 *
    Subsystem3_M->Timing.stepSize0 + Subsystem3_M->Timing.clockTickH0 *
    Subsystem3_M->Timing.stepSize0 * 4294967296.0;
  rate_scheduler();
}

/* Model initialize function */
void Subsystem3_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Subsystem3_M, 0,
                sizeof(RT_MODEL_Subsystem3_T));
  rtmSetTFinal(Subsystem3_M, 10.0);
  Subsystem3_M->Timing.stepSize0 = 1.0E-5;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    Subsystem3_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Subsystem3_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Subsystem3_M->rtwLogInfo, (NULL));
    rtliSetLogT(Subsystem3_M->rtwLogInfo, "tout");
    rtliSetLogX(Subsystem3_M->rtwLogInfo, "");
    rtliSetLogXFinal(Subsystem3_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Subsystem3_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Subsystem3_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Subsystem3_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Subsystem3_M->rtwLogInfo, 1);
    rtliSetLogY(Subsystem3_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Subsystem3_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Subsystem3_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &Subsystem3_B), 0,
                sizeof(B_Subsystem3_T));

  /* states (dwork) */
  (void) memset((void *)&Subsystem3_DW, 0,
                sizeof(DW_Subsystem3_T));

  /* external inputs */
  (void)memset(&Subsystem3_U, 0, sizeof(ExtU_Subsystem3_T));

  /* external outputs */
  (void)memset(&Subsystem3_Y, 0, sizeof(ExtY_Subsystem3_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Subsystem3_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Subsystem3_M), Subsystem3_M->Timing.stepSize0, (&rtmGetErrorStatus
    (Subsystem3_M)));

  /* InitializeConditions for DiscreteIntegrator: '<S35>/Integrator' */
  Subsystem3_DW.Id = Subsystem3_P.PIDControllerId_InitialConditio;

  /* InitializeConditions for DiscreteIntegrator: '<S83>/Integrator' */
  Subsystem3_DW.Id_p = Subsystem3_P.PIDControllerIq_InitialConditio;
}

/* Model terminate function */
void Subsystem3_terminate(void)
{
  /* (no terminate code required) */
}
