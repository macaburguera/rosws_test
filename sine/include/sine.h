//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: sine.h
//
// Code generated for Simulink model 'sine'.
//
// Model version                  : 1.1
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Tue Oct 13 22:57:36 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_sine_h_
#define RTW_HEADER_sine_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "sine_types.h"

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

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_Publ_T obj; // '<S2>/SinkBlock'
} DW_sine_T;

// Parameters (default storage)
struct P_sine_T_ {
  SL_Bus_sine_std_msgs_Float64 Constant_Value;// Computed Parameter: Constant_Value
                                                 //  Referenced by: '<S1>/Constant'

  real_T SineWave_Amp;                 // Expression: 1
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Bias;                // Expression: 0
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Freq;                // Expression: 1
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Phase;               // Expression: 0
                                          //  Referenced by: '<Root>/Sine Wave'

};

// Real-time Model Data Structure
struct tag_RTM_sine_T {
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

  extern P_sine_T sine_P;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_sine_T sine_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void sine_initialize(void);
  extern void sine_step(void);
  extern void sine_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_sine_T *const sine_M;

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
//  '<Root>' : 'sine'
//  '<S1>'   : 'sine/Blank Message'
//  '<S2>'   : 'sine/Publish'

#endif                                 // RTW_HEADER_sine_h_

//
// File trailer for generated code.
//
// [EOF]
//
