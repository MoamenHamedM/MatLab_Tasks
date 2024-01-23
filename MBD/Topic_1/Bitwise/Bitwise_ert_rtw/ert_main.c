/*
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "Bitwise.h"                   /* Model's header file */
#include "rtwtypes.h"

static RT_MODEL_Bitwise_T Bitwise_M_;
static RT_MODEL_Bitwise_T *const Bitwise_MPtr = &Bitwise_M_;/* Real-time model */

/* '<Root>/In1' */
static uint8_T Bitwise_U_In1;

/* '<Root>/In2' */
static uint8_T Bitwise_U_In2;

/* '<Root>/Out1' */
static uint8_T Bitwise_Y_AND_Out;

/* '<Root>/Out2' */
static uint8_T Bitwise_Y_OR_Out;

/* '<Root>/Out3' */
static uint8_T Bitwise_Y_XOR_Out;

/* '<Root>/Out4' */
static uint8_T Bitwise_Y_XNOR_Out;

/* '<Root>/Out5' */
static uint8_T Bitwise_Y_Num1_NOT;

/* '<Root>/Out6' */
static uint8_T Bitwise_Y_Num2_NOT;

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
void rt_OneStep(RT_MODEL_Bitwise_T *const Bitwise_M);
void rt_OneStep(RT_MODEL_Bitwise_T *const Bitwise_M)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(Bitwise_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  Bitwise_step(Bitwise_M, Bitwise_U_In1, Bitwise_U_In2, &Bitwise_Y_AND_Out,
               &Bitwise_Y_OR_Out, &Bitwise_Y_XOR_Out, &Bitwise_Y_XNOR_Out,
               &Bitwise_Y_Num1_NOT, &Bitwise_Y_Num2_NOT);

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
  RT_MODEL_Bitwise_T *const Bitwise_M = Bitwise_MPtr;

  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */

  /* Initialize model */
  Bitwise_initialize(Bitwise_M, &Bitwise_U_In1, &Bitwise_U_In2,
                     &Bitwise_Y_AND_Out, &Bitwise_Y_OR_Out, &Bitwise_Y_XOR_Out,
                     &Bitwise_Y_XNOR_Out, &Bitwise_Y_Num1_NOT,
                     &Bitwise_Y_Num2_NOT);

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 0.2 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep(Bitwise_M);
   */
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (rtmGetErrorStatus(Bitwise_M) == (NULL)) {
    /*  Perform other application tasks here */
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  Bitwise_terminate(Bitwise_M);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
