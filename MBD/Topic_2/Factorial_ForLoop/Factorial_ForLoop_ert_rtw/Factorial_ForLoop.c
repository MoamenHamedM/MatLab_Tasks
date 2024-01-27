/*
 * File: Factorial_ForLoop.c
 *
 * Code generated for Simulink model 'Factorial_ForLoop'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Jan 26 23:37:35 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "Factorial_ForLoop.h"
#include "Factorial_ForLoop_private.h"

/* Model step function */
void Factorial_ForLoop_step(RT_MODEL_Factorial_ForLoop_T *const
  Factorial_ForLoop_M, uint32_T Factorial_ForLoop_U_in1, uint32_T
  *Factorial_ForLoop_Y_Out1)
{
  DW_Factorial_ForLoop_T *Factorial_ForLoop_DW = Factorial_ForLoop_M->dwork;
  uint32_T s1_iter;
  uint32_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/in1' */
  tmp = Factorial_ForLoop_U_in1;
  if (Factorial_ForLoop_U_in1 > 2147483646U) {
    tmp = 2147483646U;
  }

  /* End of Inport: '<Root>/in1' */
  for (s1_iter = 1U; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    *Factorial_ForLoop_Y_Out1 = Factorial_ForLoop_DW->UnitDelay_DSTATE * s1_iter;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    Factorial_ForLoop_DW->UnitDelay_DSTATE = *Factorial_ForLoop_Y_Out1;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void Factorial_ForLoop_initialize(RT_MODEL_Factorial_ForLoop_T *const
  Factorial_ForLoop_M, uint32_T *Factorial_ForLoop_U_in1, uint32_T
  *Factorial_ForLoop_Y_Out1)
{
  DW_Factorial_ForLoop_T *Factorial_ForLoop_DW = Factorial_ForLoop_M->dwork;

  /* Registration code */

  /* states (dwork) */
  (void) memset((void *)Factorial_ForLoop_DW, 0,
                sizeof(DW_Factorial_ForLoop_T));

  /* external inputs */
  *Factorial_ForLoop_U_in1 = 0U;

  /* external outputs */
  (*Factorial_ForLoop_Y_Out1) = 0U;

  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Factorial_ForLoop_DW->UnitDelay_DSTATE = 1U;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void Factorial_ForLoop_terminate(RT_MODEL_Factorial_ForLoop_T *const
  Factorial_ForLoop_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(Factorial_ForLoop_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
