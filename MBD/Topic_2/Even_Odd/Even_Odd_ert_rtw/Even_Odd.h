/*
 * File: Even_Odd.h
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

#ifndef RTW_HEADER_Even_Odd_h_
#define RTW_HEADER_Even_Odd_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Even_Odd_COMMON_INCLUDES_
#define Even_Odd_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Even_Odd_COMMON_INCLUDES_ */

#include "Even_Odd_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<S1>/String Constant' */
  const char_T StringConstant1[256];   /* '<S1>/String Constant1' */
} ConstB_Even_Odd_T;

/* Real-time Model Data Structure */
struct tag_RTM_Even_Odd_T {
  const char_T * volatile errorStatus;
};

extern const ConstB_Even_Odd_T Even_Odd_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Even_Odd_initialize(RT_MODEL_Even_Odd_T *const Even_Odd_M, real_T
  *Even_Odd_U_In1, char_T Even_Odd_Y_Out1[256]);
extern void Even_Odd_step(RT_MODEL_Even_Odd_T *const Even_Odd_M, real_T
  Even_Odd_U_In1, char_T Even_Odd_Y_Out1[256]);
extern void Even_Odd_terminate(RT_MODEL_Even_Odd_T *const Even_Odd_M);

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
 * '<Root>' : 'Even_Odd'
 * '<S1>'   : 'Even_Odd/Even_Odd'
 * '<S2>'   : 'Even_Odd/Even_Odd/If Action Subsystem'
 * '<S3>'   : 'Even_Odd/Even_Odd/If Action Subsystem1'
 * '<S4>'   : 'Even_Odd/Even_Odd/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Even_Odd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
