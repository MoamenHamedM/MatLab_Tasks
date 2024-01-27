/*
 * File: Even_Odd.c
 *
 * Code generated for Simulink model 'Even_Odd'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 15:08:14 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "Even_Odd.h"
#include "Even_Odd_private.h"

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    q = fabs(u0 / u1);
    if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/* Model step function */
void Even_Odd_step(RT_MODEL_Even_Odd_T *const Even_Odd_M, real_T Even_Odd_U_In1,
                   char_T Even_Odd_Y_Out1[256])
{
  /* Outputs for Atomic SubSystem: '<Root>/Even_Odd' */
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<S2>/In1'
   *  Inport: '<S3>/In1'
   *  MATLAB Function: '<S1>/MATLAB Function'
   *  Outport: '<Root>/Out1'
   */
  if (rt_remd_snf(Even_Odd_U_In1, 2.0) == 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&Even_Odd_Y_Out1[0], &Even_Odd_ConstB.StringConstant[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    Even_Odd_Y_Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&Even_Odd_Y_Out1[0], &Even_Odd_ConstB.StringConstant1[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    Even_Odd_Y_Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
  /* End of Outputs for SubSystem: '<Root>/Even_Odd' */
  UNUSED_PARAMETER(Even_Odd_M);
}

/* Model initialize function */
void Even_Odd_initialize(RT_MODEL_Even_Odd_T *const Even_Odd_M, real_T
  *Even_Odd_U_In1, char_T Even_Odd_Y_Out1[256])
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Even_Odd_M, (NULL));

  /* external inputs */
  *Even_Odd_U_In1 = 0.0;

  /* external outputs */
  (void) memset(&Even_Odd_Y_Out1[0], 0,
                256U*sizeof(char_T));
  UNUSED_PARAMETER(Even_Odd_M);
}

/* Model terminate function */
void Even_Odd_terminate(RT_MODEL_Even_Odd_T *const Even_Odd_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(Even_Odd_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
