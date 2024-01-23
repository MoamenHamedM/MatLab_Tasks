/*
 * File: Calculator_Model.c
 *
 * Code generated for Simulink model 'Calculator_Model'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 13:40:56 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "Calculator_Model.h"
#include "Calculator_Model_private.h"

/* Model step function */
void Calculator_Model_step(RT_MODEL_Calculator_Model_T *const Calculator_Model_M,
  real_T Calculator_Model_U_In1, real_T Calculator_Model_U_In2, real_T
  Calculator_Model_U_In3, real_T *Calculator_Model_Y_Add_Out, real_T
  *Calculator_Model_Y_Sub_Out, real_T *Calculator_Model_Y_Prod_Out, real_T
  *Calculator_Model_Y_Div_Out, real_T *Calculator_Model_Y_UMinus_Out, real_T
  *Calculator_Model_Y_Incr_Out, real_T *Calculator_Model_Y_Decr_Out, char_T
  Calculator_Model_Y_Error_Out[256])
{
  real_T tmp;

  /* Outputs for Atomic SubSystem: '<Root>/Error_Check' */
  /* Switch: '<S1>/Switch1' incorporates:
   *  Inport: '<Root>/In2'
   *  Outport: '<Root>/Out8'
   */
  if (Calculator_Model_U_In2 > 0.0) {
    strncpy(&Calculator_Model_Y_Error_Out[0],
            &Calculator_Model_ConstB.StringConstant[0], 255U);
    Calculator_Model_Y_Error_Out[255] = '\x00';
  } else {
    strncpy(&Calculator_Model_Y_Error_Out[0],
            &Calculator_Model_ConstB.StringConstant1[0], 255U);
    Calculator_Model_Y_Error_Out[255] = '\x00';
  }

  /* End of Switch: '<S1>/Switch1' */
  /* End of Outputs for SubSystem: '<Root>/Error_Check' */

  /* Outputs for Atomic SubSystem: '<Root>/Scaler_Calc' */
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S2>/Add'
   */
  *Calculator_Model_Y_Add_Out = Calculator_Model_U_In1 + Calculator_Model_U_In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S2>/Subtract'
   */
  *Calculator_Model_Y_Sub_Out = Calculator_Model_U_In1 - Calculator_Model_U_In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S2>/Product'
   */
  *Calculator_Model_Y_Prod_Out = Calculator_Model_U_In1 * Calculator_Model_U_In2;

  /* End of Outputs for SubSystem: '<Root>/Scaler_Calc' */

  /* Outputs for Atomic SubSystem: '<Root>/Error_Check' */
  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Inport: '<Root>/In2'
   */
  if (Calculator_Model_U_In2 > 0.0) {
    tmp = Calculator_Model_U_In2;
  } else {
    tmp = 1.0;
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/Error_Check' */

  /* Outputs for Atomic SubSystem: '<Root>/Scaler_Calc' */
  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Product: '<S2>/Divide'
   */
  *Calculator_Model_Y_Div_Out = Calculator_Model_U_In1 / tmp;

  /* End of Outputs for SubSystem: '<Root>/Scaler_Calc' */

  /* Outputs for Atomic SubSystem: '<Root>/Unary_Calc' */
  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In3'
   *  UnaryMinus: '<S3>/Unary Minus'
   */
  *Calculator_Model_Y_UMinus_Out = -Calculator_Model_U_In3;

  /* Outport: '<Root>/Out6' incorporates:
   *  Constant: '<S5>/FixPt Constant'
   *  Inport: '<Root>/In3'
   *  Sum: '<S5>/FixPt Sum1'
   */
  *Calculator_Model_Y_Incr_Out = Calculator_Model_U_In3 + 1.0;

  /* Outport: '<Root>/Out7' incorporates:
   *  Constant: '<S4>/FixPt Constant'
   *  Inport: '<Root>/In3'
   *  Sum: '<S4>/FixPt Sum1'
   */
  *Calculator_Model_Y_Decr_Out = Calculator_Model_U_In3 - 1.0;

  /* End of Outputs for SubSystem: '<Root>/Unary_Calc' */
  UNUSED_PARAMETER(Calculator_Model_M);
}

/* Model initialize function */
void Calculator_Model_initialize(RT_MODEL_Calculator_Model_T *const
  Calculator_Model_M, real_T *Calculator_Model_U_In1, real_T
  *Calculator_Model_U_In2, real_T *Calculator_Model_U_In3, real_T
  *Calculator_Model_Y_Add_Out, real_T *Calculator_Model_Y_Sub_Out, real_T
  *Calculator_Model_Y_Prod_Out, real_T *Calculator_Model_Y_Div_Out, real_T
  *Calculator_Model_Y_UMinus_Out, real_T *Calculator_Model_Y_Incr_Out, real_T
  *Calculator_Model_Y_Decr_Out, char_T Calculator_Model_Y_Error_Out[256])
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_Model_M, (NULL));

  /* external inputs */
  *Calculator_Model_U_In1 = 0.0;
  *Calculator_Model_U_In2 = 0.0;
  *Calculator_Model_U_In3 = 0.0;

  /* external outputs */
  (*Calculator_Model_Y_Add_Out) = 0.0;
  (*Calculator_Model_Y_Sub_Out) = 0.0;
  (*Calculator_Model_Y_Prod_Out) = 0.0;
  (*Calculator_Model_Y_Div_Out) = 0.0;
  (*Calculator_Model_Y_UMinus_Out) = 0.0;
  (*Calculator_Model_Y_Incr_Out) = 0.0;
  (*Calculator_Model_Y_Decr_Out) = 0.0;
  (void) memset(&Calculator_Model_Y_Error_Out[0], 0,
                256U*sizeof(char_T));
  UNUSED_PARAMETER(Calculator_Model_M);
}

/* Model terminate function */
void Calculator_Model_terminate(RT_MODEL_Calculator_Model_T *const
  Calculator_Model_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(Calculator_Model_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
