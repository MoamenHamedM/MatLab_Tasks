/*
 * File: Factorial_ForLoop.h
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

#ifndef RTW_HEADER_Factorial_ForLoop_h_
#define RTW_HEADER_Factorial_ForLoop_h_
#include <string.h>
#ifndef Factorial_ForLoop_COMMON_INCLUDES_
#define Factorial_ForLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_ForLoop_COMMON_INCLUDES_ */

#include "Factorial_ForLoop_types.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T UnitDelay_DSTATE;           /* '<S1>/Unit Delay' */
} DW_Factorial_ForLoop_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_ForLoop_T {
  const char_T * volatile errorStatus;
  DW_Factorial_ForLoop_T *dwork;
};

/* Model entry point functions */
extern void Factorial_ForLoop_initialize(RT_MODEL_Factorial_ForLoop_T *const
  Factorial_ForLoop_M, uint32_T *Factorial_ForLoop_U_in1, uint32_T
  *Factorial_ForLoop_Y_Out1);
extern void Factorial_ForLoop_step(RT_MODEL_Factorial_ForLoop_T *const
  Factorial_ForLoop_M, uint32_T Factorial_ForLoop_U_in1, uint32_T
  *Factorial_ForLoop_Y_Out1);
extern void Factorial_ForLoop_terminate(RT_MODEL_Factorial_ForLoop_T *const
  Factorial_ForLoop_M);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Factorial_ForLoop'
 * '<S1>'   : 'Factorial_ForLoop/For Iterator Subsystem'
 * '<S2>'   : 'Factorial_ForLoop/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Factorial_ForLoop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
