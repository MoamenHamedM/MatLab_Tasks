/*
 * File: Average.h
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

#ifndef RTW_HEADER_Average_h_
#define RTW_HEADER_Average_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Average_COMMON_INCLUDES_
#define Average_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Average_COMMON_INCLUDES_ */

#include "Average_types.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_Average_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void Average_initialize(RT_MODEL_Average_T *const Average_M, real_T
  Average_U_arr[10], real_T *Average_Y_Avr_Out, real_T *Average_Y_Max_Out,
  real_T *Average_Y_Min_Out);
extern void Average_step(RT_MODEL_Average_T *const Average_M, real_T
  Average_U_arr[10], real_T *Average_Y_Avr_Out, real_T *Average_Y_Max_Out,
  real_T *Average_Y_Min_Out);
extern void Average_terminate(RT_MODEL_Average_T *const Average_M);

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
 * '<Root>' : 'Average'
 * '<S1>'   : 'Average/Subsystem'
 * '<S2>'   : 'Average/Subsystem/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Average_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
