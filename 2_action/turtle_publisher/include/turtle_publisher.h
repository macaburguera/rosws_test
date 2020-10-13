//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: turtle_publisher.h
//
// Code generated for Simulink model 'turtle_publisher'.
//
// Model version                  : 1.2
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Tue Oct 13 23:44:03 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_turtle_publisher_h_
#define RTW_HEADER_turtle_publisher_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "turtle_publisher_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_turtle_publisher_std_msgs_Float64 In1;// '<S6>/In1'
  SL_Bus_turtle_publisher_std_msgs_Float64 In1_m;// '<S5>/In1'
} B_turtle_publisher_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_Publ_T obj; // '<S2>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_g;// '<S4>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_n;// '<S3>/SourceBlock'
} DW_turtle_publisher_T;

// Parameters (default storage)
struct P_turtle_publisher_T_ {
  SL_Bus_turtle_publisher_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                //  Referenced by: '<S1>/Constant'

  SL_Bus_turtle_publisher_std_msgs_Float64 Out1_Y0;// Computed Parameter: Out1_Y0
                                                      //  Referenced by: '<S5>/Out1'

  SL_Bus_turtle_publisher_std_msgs_Float64 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                               //  Referenced by: '<S3>/Constant'

  SL_Bus_turtle_publisher_std_msgs_Float64 Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                        //  Referenced by: '<S6>/Out1'

  SL_Bus_turtle_publisher_std_msgs_Float64 Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                               //  Referenced by: '<S4>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_turtle_publisher_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_turtle_publisher_T turtle_publisher_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_turtle_publisher_T turtle_publisher_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_turtle_publisher_T turtle_publisher_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void turtle_publisher_initialize(void);
  extern void turtle_publisher_step(void);
  extern void turtle_publisher_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_turtle_publisher_T *const turtle_publisher_M;

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
//  '<Root>' : 'turtle_publisher'
//  '<S1>'   : 'turtle_publisher/Blank Message'
//  '<S2>'   : 'turtle_publisher/Publish'
//  '<S3>'   : 'turtle_publisher/Subscribe'
//  '<S4>'   : 'turtle_publisher/Subscribe1'
//  '<S5>'   : 'turtle_publisher/Subscribe/Enabled Subsystem'
//  '<S6>'   : 'turtle_publisher/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_turtle_publisher_h_

//
// File trailer for generated code.
//
// [EOF]
//
