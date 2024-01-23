/*
 * File: Bitwise.c
 *
 * Code generated for Simulink model 'Bitwise'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 13:49:01 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "Bitwise.h"
#include "Bitwise_private.h"

/* Model step function */
void Bitwise_step(RT_MODEL_Bitwise_T *const Bitwise_M, uint8_T Bitwise_U_In1,
                  uint8_T Bitwise_U_In2, uint8_T *Bitwise_Y_AND_Out, uint8_T
                  *Bitwise_Y_OR_Out, uint8_T *Bitwise_Y_XOR_Out, uint8_T
                  *Bitwise_Y_XNOR_Out, uint8_T *Bitwise_Y_Num1_NOT, uint8_T
                  *Bitwise_Y_Num2_NOT)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND'
   */
  *Bitwise_Y_AND_Out = (uint8_T)(Bitwise_U_In1 & Bitwise_U_In2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise OR'
   */
  *Bitwise_Y_OR_Out = (uint8_T)(Bitwise_U_In1 | Bitwise_U_In2);

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT'
   *  S-Function (sfix_bitop): '<S1>/Bitwise XOR1'
   */
  *Bitwise_Y_XOR_Out = (uint8_T)(Bitwise_U_In1 ^ Bitwise_U_In2);

  /* Outport: '<Root>/Out4' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT'
   */
  *Bitwise_Y_XNOR_Out = (uint8_T)~*Bitwise_Y_XOR_Out;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT1'
   */
  *Bitwise_Y_Num1_NOT = (uint8_T)~Bitwise_U_In1;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT2'
   */
  *Bitwise_Y_Num2_NOT = (uint8_T)~Bitwise_U_In2;

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
  UNUSED_PARAMETER(Bitwise_M);
}

/* Model initialize function */
void Bitwise_initialize(RT_MODEL_Bitwise_T *const Bitwise_M, uint8_T
  *Bitwise_U_In1, uint8_T *Bitwise_U_In2, uint8_T *Bitwise_Y_AND_Out, uint8_T
  *Bitwise_Y_OR_Out, uint8_T *Bitwise_Y_XOR_Out, uint8_T *Bitwise_Y_XNOR_Out,
  uint8_T *Bitwise_Y_Num1_NOT, uint8_T *Bitwise_Y_Num2_NOT)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Bitwise_M, (NULL));

  /* external inputs */
  *Bitwise_U_In1 = 0U;
  *Bitwise_U_In2 = 0U;

  /* external outputs */
  (*Bitwise_Y_AND_Out) = 0U;
  (*Bitwise_Y_OR_Out) = 0U;
  (*Bitwise_Y_XOR_Out) = 0U;
  (*Bitwise_Y_XNOR_Out) = 0U;
  (*Bitwise_Y_Num1_NOT) = 0U;
  (*Bitwise_Y_Num2_NOT) = 0U;
  UNUSED_PARAMETER(Bitwise_M);
}

/* Model terminate function */
void Bitwise_terminate(RT_MODEL_Bitwise_T *const Bitwise_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(Bitwise_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
