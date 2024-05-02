/*
 * Subsystem3_data.c
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

/* Block parameters (default storage) */
P_Subsystem3_T Subsystem3_P = {
  /* Mask Parameter: PIDControllerId_I
   * Referenced by: '<S32>/Integral Gain'
   */
  0.2,

  /* Mask Parameter: PIDControllerIq_I
   * Referenced by: '<S80>/Integral Gain'
   */
  0.2,

  /* Mask Parameter: PIDControllerId_InitialConditio
   * Referenced by: '<S35>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDControllerIq_InitialConditio
   * Referenced by: '<S83>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDControllerId_Kb
   * Referenced by: '<S28>/Kb'
   */
  1.0,

  /* Mask Parameter: PIDControllerIq_Kb
   * Referenced by: '<S76>/Kb'
   */
  1.0,

  /* Mask Parameter: PIDControllerId_LowerSaturation
   * Referenced by: '<S42>/Saturation'
   */
  -200.0,

  /* Mask Parameter: PIDControllerIq_LowerSaturation
   * Referenced by: '<S90>/Saturation'
   */
  -200.0,

  /* Mask Parameter: PIDControllerId_P
   * Referenced by: '<S40>/Proportional Gain'
   */
  0.25,

  /* Mask Parameter: PIDControllerIq_P
   * Referenced by: '<S88>/Proportional Gain'
   */
  0.25,

  /* Mask Parameter: PIDControllerId_UpperSaturation
   * Referenced by: '<S42>/Saturation'
   */
  200.0,

  /* Mask Parameter: PIDControllerIq_UpperSaturation
   * Referenced by: '<S90>/Saturation'
   */
  200.0,

  /* Expression: 1
   * Referenced by: '<S1>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant1'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S35>/Integrator'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Switch1'
   */
  1.0,

  /* Expression: 2*pi*50*20.4e-3
   * Referenced by: '<S1>/Gain2'
   */
  6.408849013323179,

  /* Expression: 1
   * Referenced by: '<S1>/Switch7'
   */
  1.0,

  /* Computed Parameter: Integrator_gainval_j
   * Referenced by: '<S83>/Integrator'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Switch2'
   */
  1.0,

  /* Expression: 2*pi*50*20.4e-3
   * Referenced by: '<S1>/Gain3'
   */
  6.408849013323179,

  /* Expression: 1
   * Referenced by: '<S1>/Switch6'
   */
  1.0
};
