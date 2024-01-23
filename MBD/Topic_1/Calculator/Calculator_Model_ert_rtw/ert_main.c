/*
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "Calculator_Model.h"          /* Model's header file */
#include "rtwtypes.h"

static RT_MODEL_Calculator_Model_T Calculator_Model_M_;
static RT_MODEL_Calculator_Model_T *const Calculator_Model_MPtr =
  &Calculator_Model_M_;                /* Real-time model */

/* '<Root>/In1' */
static real_T Calculator_Model_U_In1;

/* '<Root>/In2' */
static real_T Calculator_Model_U_In2;

/* '<Root>/In3' */
static real_T Calculator_Model_U_In3;

/* '<Root>/Out1' */
static real_T Calculator_Model_Y_Add_Out;

/* '<Root>/Out2' */
static real_T Calculator_Model_Y_Sub_Out;

/* '<Root>/Out3' */
static real_T Calculator_Model_Y_Prod_Out;

/* '<Root>/Out4' */
static real_T Calculator_Model_Y_Div_Out;

/* '<Root>/Out5' */
static real_T Calculator_Model_Y_UMinus_Out;

/* '<Root>/Out6' */
static real_T Calculator_Model_Y_Incr_Out;

/* '<Root>/Out7' */
static real_T Calculator_Model_Y_Decr_Out;

/* '<Root>/Out8' */
static char_T Calculator_Model_Y_Error_Out[256];

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(RT_MODEL_Calculator_Model_T *const Calculator_Model_M);
void rt_OneStep(RT_MODEL_Calculator_Model_T *const Calculator_Model_M)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(Calculator_Model_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  Calculator_Model_step(Calculator_Model_M, Calculator_Model_U_In1,
                        Calculator_Model_U_In2, Calculator_Model_U_In3,
                        &Calculator_Model_Y_Add_Out, &Calculator_Model_Y_Sub_Out,
                        &Calculator_Model_Y_Prod_Out,
                        &Calculator_Model_Y_Div_Out,
                        &Calculator_Model_Y_UMinus_Out,
                        &Calculator_Model_Y_Incr_Out,
                        &Calculator_Model_Y_Decr_Out,
                        Calculator_Model_Y_Error_Out);

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  RT_MODEL_Calculator_Model_T *const Calculator_Model_M = Calculator_Model_MPtr;

  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */

  /* Initialize model */
  Calculator_Model_initialize(Calculator_Model_M, &Calculator_Model_U_In1,
    &Calculator_Model_U_In2, &Calculator_Model_U_In3,
    &Calculator_Model_Y_Add_Out, &Calculator_Model_Y_Sub_Out,
    &Calculator_Model_Y_Prod_Out, &Calculator_Model_Y_Div_Out,
    &Calculator_Model_Y_UMinus_Out, &Calculator_Model_Y_Incr_Out,
    &Calculator_Model_Y_Decr_Out, Calculator_Model_Y_Error_Out);

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 0.2 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep(Calculator_Model_M);
   */
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (rtmGetErrorStatus(Calculator_Model_M) == (NULL)) {
    /*  Perform other application tasks here */
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  Calculator_Model_terminate(Calculator_Model_M);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
