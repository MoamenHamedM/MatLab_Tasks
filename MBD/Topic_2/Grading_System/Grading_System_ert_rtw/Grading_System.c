/*
 * File: Grading_System.c
 *
 * Code generated for Simulink model 'Grading_System'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 14:53:35 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "Grading_System.h"
#include "Grading_System_private.h"

/* Model step function */
void Grading_System_step(RT_MODEL_Grading_System_T *const Grading_System_M,
  real_T Grading_System_U_In1, char_T Grading_System_Y_Out1[256])
{
  /* Outputs for Atomic SubSystem: '<Root>/Grading_System' */
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<S2>/In1'
   *  Inport: '<S3>/In1'
   *  Inport: '<S4>/In1'
   *  Inport: '<S5>/In1'
   *  Inport: '<S6>/In1'
   *  Inport: '<S7>/In1'
   *  Outport: '<Root>/Out1'
   */
  if ((Grading_System_U_In1 >= 85.0) && (Grading_System_U_In1 <= 100.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&Grading_System_Y_Out1[0], &Grading_System_ConstB.StringConstant[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    Grading_System_Y_Out1[255] = '\x00';
  } else if ((Grading_System_U_In1 >= 75.0) && (Grading_System_U_In1 < 85.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&Grading_System_Y_Out1[0], &Grading_System_ConstB.StringConstant1[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    Grading_System_Y_Out1[255] = '\x00';
  } else if ((Grading_System_U_In1 >= 65.0) && (Grading_System_U_In1 < 75.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&Grading_System_Y_Out1[0], &Grading_System_ConstB.StringConstant2[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    Grading_System_Y_Out1[255] = '\x00';
  } else if ((Grading_System_U_In1 >= 50.0) && (Grading_System_U_In1 < 65.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&Grading_System_Y_Out1[0], &Grading_System_ConstB.StringConstant3[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    Grading_System_Y_Out1[255] = '\x00';
  } else if ((Grading_System_U_In1 >= 0.0) && (Grading_System_U_In1 < 50.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    strncpy(&Grading_System_Y_Out1[0], &Grading_System_ConstB.StringConstant4[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
    Grading_System_Y_Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    strncpy(&Grading_System_Y_Out1[0], &Grading_System_ConstB.StringConstant5[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem5' */
    Grading_System_Y_Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
  /* End of Outputs for SubSystem: '<Root>/Grading_System' */
  UNUSED_PARAMETER(Grading_System_M);
}

/* Model initialize function */
void Grading_System_initialize(RT_MODEL_Grading_System_T *const Grading_System_M,
  real_T *Grading_System_U_In1, char_T Grading_System_Y_Out1[256])
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Grading_System_M, (NULL));

  /* external inputs */
  *Grading_System_U_In1 = 0.0;

  /* external outputs */
  (void) memset(&Grading_System_Y_Out1[0], 0,
                256U*sizeof(char_T));
  UNUSED_PARAMETER(Grading_System_M);
}

/* Model terminate function */
void Grading_System_terminate(RT_MODEL_Grading_System_T *const Grading_System_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(Grading_System_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
