/*
 * File: Calculator_Model.h
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

#ifndef RTW_HEADER_Calculator_Model_h_
#define RTW_HEADER_Calculator_Model_h_
#include <string.h>
#include <stddef.h>
#ifndef Calculator_Model_COMMON_INCLUDES_
#define Calculator_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Calculator_Model_COMMON_INCLUDES_ */

#include "Calculator_Model_types.h"
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
  const char_T StringConstant[256];    /* '<Root>/String Constant' */
  const char_T StringConstant1[256];   /* '<Root>/String Constant1' */
} ConstB_Calculator_Model_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calculator_Model_T {
  const char_T * volatile errorStatus;
};

extern const ConstB_Calculator_Model_T Calculator_Model_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Calculator_Model_initialize(RT_MODEL_Calculator_Model_T *const
  Calculator_Model_M, real_T *Calculator_Model_U_In1, real_T
  *Calculator_Model_U_In2, real_T *Calculator_Model_U_In3, real_T
  *Calculator_Model_Y_Add_Out, real_T *Calculator_Model_Y_Sub_Out, real_T
  *Calculator_Model_Y_Prod_Out, real_T *Calculator_Model_Y_Div_Out, real_T
  *Calculator_Model_Y_UMinus_Out, real_T *Calculator_Model_Y_Incr_Out, real_T
  *Calculator_Model_Y_Decr_Out, char_T Calculator_Model_Y_Error_Out[256]);
extern void Calculator_Model_step(RT_MODEL_Calculator_Model_T *const
  Calculator_Model_M, real_T Calculator_Model_U_In1, real_T
  Calculator_Model_U_In2, real_T Calculator_Model_U_In3, real_T
  *Calculator_Model_Y_Add_Out, real_T *Calculator_Model_Y_Sub_Out, real_T
  *Calculator_Model_Y_Prod_Out, real_T *Calculator_Model_Y_Div_Out, real_T
  *Calculator_Model_Y_UMinus_Out, real_T *Calculator_Model_Y_Incr_Out, real_T
  *Calculator_Model_Y_Decr_Out, char_T Calculator_Model_Y_Error_Out[256]);
extern void Calculator_Model_terminate(RT_MODEL_Calculator_Model_T *const
  Calculator_Model_M);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S5>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S5>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S4>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S5>/FixPt Gateway In' : Eliminate redundant data type conversion
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
 * '<Root>' : 'Calculator_Model'
 * '<S1>'   : 'Calculator_Model/Error_Check'
 * '<S2>'   : 'Calculator_Model/Scaler_Calc'
 * '<S3>'   : 'Calculator_Model/Unary_Calc'
 * '<S4>'   : 'Calculator_Model/Unary_Calc/Decrement Stored Integer'
 * '<S5>'   : 'Calculator_Model/Unary_Calc/Increment Stored Integer'
 */
#endif                                 /* RTW_HEADER_Calculator_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
