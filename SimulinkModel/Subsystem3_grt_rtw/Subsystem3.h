/*
 * Subsystem3.h
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

#ifndef RTW_HEADER_Subsystem3_h_
#define RTW_HEADER_Subsystem3_h_
#ifndef Subsystem3_COMMON_INCLUDES_
#define Subsystem3_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Subsystem3_COMMON_INCLUDES_ */

#include "Subsystem3_types.h"
#include <float.h>
#include <string.h>
#include <stddef.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Sum7;                         /* '<S1>/Sum7' */
  real_T Saturation;                   /* '<S42>/Saturation' */
  real_T Sum10;                        /* '<S1>/Sum10' */
  real_T Saturation_i;                 /* '<S90>/Saturation' */
} B_Subsystem3_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Id;                           /* '<S35>/Integrator' */
  real_T Id_p;                         /* '<S83>/Integrator' */
} DW_Subsystem3_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Idref;                        /* '<Root>/In1' */
  real_T In4;                          /* '<Root>/In4' */
  real_T Iqref;                        /* '<Root>/In5' */
  real_T In8;                          /* '<Root>/In8' */
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
  real_T In6;                          /* '<Root>/In6' */
} ExtU_Subsystem3_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Ed;                           /* '<Root>/Ed' */
  real_T Eq;                           /* '<Root>/Eq' */
} ExtY_Subsystem3_T;

/* Parameters (default storage) */
struct P_Subsystem3_T_ {
  real_T PIDControllerId_I;            /* Mask Parameter: PIDControllerId_I
                                        * Referenced by: '<S32>/Integral Gain'
                                        */
  real_T PIDControllerIq_I;            /* Mask Parameter: PIDControllerIq_I
                                        * Referenced by: '<S80>/Integral Gain'
                                        */
  real_T PIDControllerId_InitialConditio;
                              /* Mask Parameter: PIDControllerId_InitialConditio
                               * Referenced by: '<S35>/Integrator'
                               */
  real_T PIDControllerIq_InitialConditio;
                              /* Mask Parameter: PIDControllerIq_InitialConditio
                               * Referenced by: '<S83>/Integrator'
                               */
  real_T PIDControllerId_Kb;           /* Mask Parameter: PIDControllerId_Kb
                                        * Referenced by: '<S28>/Kb'
                                        */
  real_T PIDControllerIq_Kb;           /* Mask Parameter: PIDControllerIq_Kb
                                        * Referenced by: '<S76>/Kb'
                                        */
  real_T PIDControllerId_LowerSaturation;
                              /* Mask Parameter: PIDControllerId_LowerSaturation
                               * Referenced by: '<S42>/Saturation'
                               */
  real_T PIDControllerIq_LowerSaturation;
                              /* Mask Parameter: PIDControllerIq_LowerSaturation
                               * Referenced by: '<S90>/Saturation'
                               */
  real_T PIDControllerId_P;            /* Mask Parameter: PIDControllerId_P
                                        * Referenced by: '<S40>/Proportional Gain'
                                        */
  real_T PIDControllerIq_P;            /* Mask Parameter: PIDControllerIq_P
                                        * Referenced by: '<S88>/Proportional Gain'
                                        */
  real_T PIDControllerId_UpperSaturation;
                              /* Mask Parameter: PIDControllerId_UpperSaturation
                               * Referenced by: '<S42>/Saturation'
                               */
  real_T PIDControllerIq_UpperSaturation;
                              /* Mask Parameter: PIDControllerIq_UpperSaturation
                               * Referenced by: '<S90>/Saturation'
                               */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S35>/Integrator'
                                        */
  real_T Switch1_Threshold;            /* Expression: 1
                                        * Referenced by: '<S1>/Switch1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 2*pi*50*20.4e-3
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T Switch7_Threshold;            /* Expression: 1
                                        * Referenced by: '<S1>/Switch7'
                                        */
  real_T Integrator_gainval_j;       /* Computed Parameter: Integrator_gainval_j
                                      * Referenced by: '<S83>/Integrator'
                                      */
  real_T Switch2_Threshold;            /* Expression: 1
                                        * Referenced by: '<S1>/Switch2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 2*pi*50*20.4e-3
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real_T Switch6_Threshold;            /* Expression: 1
                                        * Referenced by: '<S1>/Switch6'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Subsystem3_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Subsystem3_T Subsystem3_P;

/* Block signals (default storage) */
extern B_Subsystem3_T Subsystem3_B;

/* Block states (default storage) */
extern DW_Subsystem3_T Subsystem3_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Subsystem3_T Subsystem3_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Subsystem3_T Subsystem3_Y;

/* Model entry point functions */
extern void Subsystem3_initialize(void);
extern void Subsystem3_step(void);
extern void Subsystem3_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Subsystem3_T *const Subsystem3_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('dq0Invertermeow/Subsystem3')    - opens subsystem dq0Invertermeow/Subsystem3
 * hilite_system('dq0Invertermeow/Subsystem3/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'dq0Invertermeow'
 * '<S1>'   : 'dq0Invertermeow/Subsystem3'
 * '<S2>'   : 'dq0Invertermeow/Subsystem3/PID Controller Id'
 * '<S3>'   : 'dq0Invertermeow/Subsystem3/PID Controller Iq'
 * '<S4>'   : 'dq0Invertermeow/Subsystem3/PID Controller Id/Anti-windup'
 * '<S5>'   : 'dq0Invertermeow/Subsystem3/PID Controller Id/D Gain'
 * '<S6>'   : 'dq0Invertermeow/Subsystem3/PID Controller Id/Filter'
 * '<S7>'   : 'dq0Invertermeow/Subsystem3/PID Controller Id/Filter ICs'
 * '<S8>'   : 'dq0Invertermeow/Subsystem3/PID Controller Id/I Gain'
 * '<S9>'   : 'dq0Invertermeow/Subsystem3/PID Controller Id/Ideal P Gain'
 * '<S10>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Ideal P Gain Fdbk'
 * '<S11>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Integrator'
 * '<S12>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Integrator ICs'
 * '<S13>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/N Copy'
 * '<S14>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/N Gain'
 * '<S15>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/P Copy'
 * '<S16>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Parallel P Gain'
 * '<S17>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Reset Signal'
 * '<S18>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Saturation'
 * '<S19>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Saturation Fdbk'
 * '<S20>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Sum'
 * '<S21>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Sum Fdbk'
 * '<S22>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Tracking Mode'
 * '<S23>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Tracking Mode Sum'
 * '<S24>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Tsamp - Integral'
 * '<S25>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Tsamp - Ngain'
 * '<S26>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/postSat Signal'
 * '<S27>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/preSat Signal'
 * '<S28>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Anti-windup/Back Calculation'
 * '<S29>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/D Gain/Disabled'
 * '<S30>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Filter/Disabled'
 * '<S31>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Filter ICs/Disabled'
 * '<S32>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/I Gain/Internal Parameters'
 * '<S33>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Ideal P Gain/Passthrough'
 * '<S34>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Ideal P Gain Fdbk/Disabled'
 * '<S35>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Integrator/Discrete'
 * '<S36>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Integrator ICs/Internal IC'
 * '<S37>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/N Copy/Disabled wSignal Specification'
 * '<S38>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/N Gain/Disabled'
 * '<S39>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/P Copy/Disabled'
 * '<S40>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Parallel P Gain/Internal Parameters'
 * '<S41>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Reset Signal/Disabled'
 * '<S42>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Saturation/Enabled'
 * '<S43>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Saturation Fdbk/Disabled'
 * '<S44>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Sum/Sum_PI'
 * '<S45>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Sum Fdbk/Disabled'
 * '<S46>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Tracking Mode/Disabled'
 * '<S47>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Tracking Mode Sum/Passthrough'
 * '<S48>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Tsamp - Integral/TsSignalSpecification'
 * '<S49>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/Tsamp - Ngain/Passthrough'
 * '<S50>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/postSat Signal/Forward_Path'
 * '<S51>'  : 'dq0Invertermeow/Subsystem3/PID Controller Id/preSat Signal/Forward_Path'
 * '<S52>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Anti-windup'
 * '<S53>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/D Gain'
 * '<S54>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Filter'
 * '<S55>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Filter ICs'
 * '<S56>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/I Gain'
 * '<S57>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Ideal P Gain'
 * '<S58>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Ideal P Gain Fdbk'
 * '<S59>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Integrator'
 * '<S60>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Integrator ICs'
 * '<S61>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/N Copy'
 * '<S62>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/N Gain'
 * '<S63>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/P Copy'
 * '<S64>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Parallel P Gain'
 * '<S65>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Reset Signal'
 * '<S66>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Saturation'
 * '<S67>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Saturation Fdbk'
 * '<S68>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Sum'
 * '<S69>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Sum Fdbk'
 * '<S70>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Tracking Mode'
 * '<S71>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Tracking Mode Sum'
 * '<S72>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Tsamp - Integral'
 * '<S73>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Tsamp - Ngain'
 * '<S74>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/postSat Signal'
 * '<S75>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/preSat Signal'
 * '<S76>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Anti-windup/Back Calculation'
 * '<S77>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/D Gain/Disabled'
 * '<S78>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Filter/Disabled'
 * '<S79>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Filter ICs/Disabled'
 * '<S80>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/I Gain/Internal Parameters'
 * '<S81>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Ideal P Gain/Passthrough'
 * '<S82>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Ideal P Gain Fdbk/Disabled'
 * '<S83>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Integrator/Discrete'
 * '<S84>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Integrator ICs/Internal IC'
 * '<S85>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/N Copy/Disabled wSignal Specification'
 * '<S86>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/N Gain/Disabled'
 * '<S87>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/P Copy/Disabled'
 * '<S88>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Parallel P Gain/Internal Parameters'
 * '<S89>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Reset Signal/Disabled'
 * '<S90>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Saturation/Enabled'
 * '<S91>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Saturation Fdbk/Disabled'
 * '<S92>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Sum/Sum_PI'
 * '<S93>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Sum Fdbk/Disabled'
 * '<S94>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Tracking Mode/Disabled'
 * '<S95>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Tracking Mode Sum/Passthrough'
 * '<S96>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Tsamp - Integral/TsSignalSpecification'
 * '<S97>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/Tsamp - Ngain/Passthrough'
 * '<S98>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/postSat Signal/Forward_Path'
 * '<S99>'  : 'dq0Invertermeow/Subsystem3/PID Controller Iq/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_Subsystem3_h_ */
