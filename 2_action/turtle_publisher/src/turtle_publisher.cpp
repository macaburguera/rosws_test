//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: turtle_publisher.cpp
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
#include "turtle_publisher.h"
#include "turtle_publisher_private.h"

// Block signals (default storage)
B_turtle_publisher_T turtle_publisher_B;

// Block states (default storage)
DW_turtle_publisher_T turtle_publisher_DW;

// Real-time model
RT_MODEL_turtle_publisher_T turtle_publisher_M_ = RT_MODEL_turtle_publisher_T();
RT_MODEL_turtle_publisher_T *const turtle_publisher_M = &turtle_publisher_M_;

// Forward declaration for local functions
static void matlabCodegenHandle_matlabCod_d(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_matlabCod_d(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void turtle_publisher_step(void)
{
  SL_Bus_turtle_publisher_std_msgs_Float64 b_varargout_2;
  boolean_T b_varargout_1;
  SL_Bus_turtle_publisher_geometry_msgs_Twist rtb_BusAssignment;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S3>/SourceBlock' incorporates:
  //   Inport: '<S5>/In1'

  b_varargout_1 = Sub_turtle_publisher_1.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  if (b_varargout_1) {
    turtle_publisher_B.In1_m = b_varargout_2;
  }

  // End of MATLABSystem: '<S3>/SourceBlock'
  // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Inport: '<S6>/In1'

  b_varargout_1 = Sub_turtle_publisher_2.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S6>/Enable'

  if (b_varargout_1) {
    turtle_publisher_B.In1 = b_varargout_2;
  }

  // End of MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'

  rtb_BusAssignment = turtle_publisher_P.Constant_Value;
  rtb_BusAssignment.Linear.X = turtle_publisher_B.In1_m.Data;
  rtb_BusAssignment.Angular.Z = turtle_publisher_B.In1.Data;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_turtle_publisher_9.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void turtle_publisher_initialize(void)
{
  {
    char_T tmp[13];
    char_T tmp_0[15];
    char_T tmp_1[17];
    int32_T i;
    static const char_T tmp_2[12] = { '/', 's', 'i', 'n', 'e', '_', 's', 'i',
      'g', 'n', 'a', 'l' };

    static const char_T tmp_3[14] = { '/', 'c', 'o', 's', 'i', 'n', 'e', '_',
      's', 'i', 'g', 'n', 'a', 'l' };

    static const char_T tmp_4[16] = { '/', 't', 'u', 'r', 't', 'l', 'e', '1',
      '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S5>/Out1'
    turtle_publisher_B.In1_m = turtle_publisher_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'

    // Start for MATLABSystem: '<S3>/SourceBlock'
    turtle_publisher_DW.obj_n.matlabCodegenIsDeleted = false;
    turtle_publisher_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 12; i++) {
      tmp[i] = tmp_2[i];
    }

    tmp[12] = '\x00';
    Sub_turtle_publisher_1.createSubscriber(tmp, 1);
    turtle_publisher_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S6>/Out1'
    turtle_publisher_B.In1 = turtle_publisher_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'

    // Start for MATLABSystem: '<S4>/SourceBlock'
    turtle_publisher_DW.obj_g.matlabCodegenIsDeleted = false;
    turtle_publisher_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_0[i] = tmp_3[i];
    }

    tmp_0[14] = '\x00';
    Sub_turtle_publisher_2.createSubscriber(tmp_0, 1);
    turtle_publisher_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    turtle_publisher_DW.obj.matlabCodegenIsDeleted = false;
    turtle_publisher_DW.obj.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_1[i] = tmp_4[i];
    }

    tmp_1[16] = '\x00';
    Pub_turtle_publisher_9.createPublisher(tmp_1, 1);
    turtle_publisher_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void turtle_publisher_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  matlabCodegenHandle_matlabCod_d(&turtle_publisher_DW.obj_n);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  matlabCodegenHandle_matlabCod_d(&turtle_publisher_DW.obj_g);

  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&turtle_publisher_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
