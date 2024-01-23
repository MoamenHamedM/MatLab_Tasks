/*
 * File: Bitwise.h
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

#ifndef RTW_HEADER_Bitwise_h_
#define RTW_HEADER_Bitwise_h_
#include <stddef.h>
#ifndef Bitwise_COMMON_INCLUDES_
#define Bitwise_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Bitwise_COMMON_INCLUDES_ */

#include "Bitwise_types.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_Bitwise_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void Bitwise_initialize(RT_MODEL_Bitwise_T *const Bitwise_M, uint8_T
  *Bitwise_U_In1, uint8_T *Bitwise_U_In2, uint8_T *Bitwise_Y_AND_Out, uint8_T
  *Bitwise_Y_OR_Out, uint8_T *Bitwise_Y_XOR_Out, uint8_T *Bitwise_Y_XNOR_Out,
  uint8_T *Bitwise_Y_Num1_NOT, uint8_T *Bitwise_Y_Num2_NOT);
extern void Bitwise_step(RT_MODEL_Bitwise_T *const Bitwise_M, uint8_T
  Bitwise_U_In1, uint8_T Bitwise_U_In2, uint8_T *Bitwise_Y_AND_Out, uint8_T
  *Bitwise_Y_OR_Out, uint8_T *Bitwise_Y_XOR_Out, uint8_T *Bitwise_Y_XNOR_Out,
  uint8_T *Bitwise_Y_Num1_NOT, uint8_T *Bitwise_Y_Num2_NOT);
extern void Bitwise_terminate(RT_MODEL_Bitwise_T *const Bitwise_M);

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
 * '<Root>' : 'Bitwise'
 * '<S1>'   : 'Bitwise/Subsystem'
 */
#endif                                 /* RTW_HEADER_Bitwise_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
