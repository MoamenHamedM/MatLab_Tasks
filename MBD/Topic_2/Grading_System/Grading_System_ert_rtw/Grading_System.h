/*
 * File: Grading_System.h
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

#ifndef RTW_HEADER_Grading_System_h_
#define RTW_HEADER_Grading_System_h_
#include <string.h>
#include <stddef.h>
#ifndef Grading_System_COMMON_INCLUDES_
#define Grading_System_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Grading_System_COMMON_INCLUDES_ */

#include "Grading_System_types.h"
#include "rt_defines.h"

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
  const char_T StringConstant2[256];   /* '<S1>/String Constant2' */
  const char_T StringConstant3[256];   /* '<S1>/String Constant3' */
  const char_T StringConstant4[256];   /* '<S1>/String Constant4' */
  const char_T StringConstant5[256];   /* '<S1>/String Constant5' */
} ConstB_Grading_System_T;

/* Real-time Model Data Structure */
struct tag_RTM_Grading_System_T {
  const char_T * volatile errorStatus;
};

extern const ConstB_Grading_System_T Grading_System_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Grading_System_initialize(RT_MODEL_Grading_System_T *const
  Grading_System_M, real_T *Grading_System_U_In1, char_T Grading_System_Y_Out1
  [256]);
extern void Grading_System_step(RT_MODEL_Grading_System_T *const
  Grading_System_M, real_T Grading_System_U_In1, char_T Grading_System_Y_Out1
  [256]);
extern void Grading_System_terminate(RT_MODEL_Grading_System_T *const
  Grading_System_M);

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
 * '<Root>' : 'Grading_System'
 * '<S1>'   : 'Grading_System/Grading_System'
 * '<S2>'   : 'Grading_System/Grading_System/If Action Subsystem'
 * '<S3>'   : 'Grading_System/Grading_System/If Action Subsystem1'
 * '<S4>'   : 'Grading_System/Grading_System/If Action Subsystem2'
 * '<S5>'   : 'Grading_System/Grading_System/If Action Subsystem3'
 * '<S6>'   : 'Grading_System/Grading_System/If Action Subsystem4'
 * '<S7>'   : 'Grading_System/Grading_System/If Action Subsystem5'
 */
#endif                                 /* RTW_HEADER_Grading_System_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
