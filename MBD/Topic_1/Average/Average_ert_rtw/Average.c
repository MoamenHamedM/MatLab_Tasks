/*
 * File: Average.c
 *
 * Code generated for Simulink model 'Average'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 13:51:14 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "Average.h"
#include "Average_private.h"

/* Model step function */
void Average_step(RT_MODEL_Average_T *const Average_M, real_T Average_U_arr[10],
                  real_T *Average_Y_Avr_Out, real_T *Average_Y_Max_Out, real_T
                  *Average_Y_Min_Out)
{
  real_T maxV_tmp;
  real_T tmp;
  int32_T sigIdx;

  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  /* Sum: '<S1>/Sum of Elements' incorporates:
   *  Inport: '<Root>/arr'
   */
  tmp = -0.0;
  for (sigIdx = 0; sigIdx < 10; sigIdx++) {
    tmp += Average_U_arr[sigIdx];
  }

  /* MinMax: '<S1>/MinMax' incorporates:
   *  Inport: '<Root>/arr'
   */
  *Average_Y_Max_Out = Average_U_arr[0];

  /* MinMax: '<S1>/MinMax1' incorporates:
   *  Inport: '<Root>/arr'
   */
  *Average_Y_Min_Out = Average_U_arr[0];
  for (sigIdx = 0; sigIdx < 9; sigIdx++) {
    /* MinMax: '<S1>/MinMax' incorporates:
     *  Inport: '<Root>/arr'
     *  MinMax: '<S1>/MinMax1'
     */
    maxV_tmp = Average_U_arr[sigIdx + 1];
    *Average_Y_Max_Out = fmax(*Average_Y_Max_Out, maxV_tmp);

    /* MinMax: '<S1>/MinMax1' */
    *Average_Y_Min_Out = fmin(*Average_Y_Min_Out, maxV_tmp);
  }

  /* Outport: '<Root>/Out1' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   *  Product: '<S1>/Divide'
   *  Sum: '<S1>/Sum of Elements'
   */
  *Average_Y_Avr_Out = tmp / 10.0;

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
  UNUSED_PARAMETER(Average_M);
}

/* Model initialize function */
void Average_initialize(RT_MODEL_Average_T *const Average_M, real_T
  Average_U_arr[10], real_T *Average_Y_Avr_Out, real_T *Average_Y_Max_Out,
  real_T *Average_Y_Min_Out)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Average_M, (NULL));

  /* external inputs */
  (void)memset(&Average_U_arr[0], 0, 10U * sizeof(real_T));

  /* external outputs */
  (*Average_Y_Avr_Out) = 0.0;
  (*Average_Y_Max_Out) = 0.0;
  (*Average_Y_Min_Out) = 0.0;
  UNUSED_PARAMETER(Average_M);
}

/* Model terminate function */
void Average_terminate(RT_MODEL_Average_T *const Average_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(Average_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
