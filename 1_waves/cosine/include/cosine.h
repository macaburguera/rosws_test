//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: cosine.h
//
// Code generated for Simulink model 'cosine'.
//
// Model version                  : 1.2
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Tue Oct 13 23:33:44 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_cosine_h_
#define RTW_HEADER_cosine_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "cosine_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_cosine_std_msgs_Float64 In1;  // '<S4>/In1'
} B_cosine_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_Publ_T obj; // '<S2>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_n;// '<S3>/SourceBlock'
  real_T TimeStampA;                   // '<Root>/Derivative'
  real_T LastUAtTimeA;                 // '<Root>/Derivative'
  real_T TimeStampB;                   // '<Root>/Derivative'
  real_T LastUAtTimeB;                 // '<Root>/Derivative'
} DW_cosine_T;

// Parameters (default storage)
struct P_cosine_T_ {
  SL_Bus_cosine_std_msgs_Float64 Out1_Y0;// Computed Parameter: Out1_Y0
                                            //  Referenced by: '<S4>/Out1'

  SL_Bus_cosine_std_msgs_Float64 Constant_Value;// Computed Parameter: Constant_Value
                                                   //  Referenced by: '<S3>/Constant'

  SL_Bus_cosine_std_msgs_Float64 Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                     //  Referenced by: '<S1>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_cosine_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_cosine_T cosine_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_cosine_T cosine_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_cosine_T cosine_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void cosine_initialize(void);
  extern void cosine_step(void);
  extern void cosine_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_cosine_T *const cosine_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'cosine'
//  '<S1>'   : 'cosine/Blank Message'
//  '<S2>'   : 'cosine/Publish'
//  '<S3>'   : 'cosine/Subscribe'
//  '<S4>'   : 'cosine/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_cosine_h_

//
// File trailer for generated code.
//
// [EOF]
//
