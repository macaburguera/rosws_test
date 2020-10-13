//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: sine.cpp
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
#include "sine.h"
#include "sine_private.h"

// Block states (default storage)
DW_sine_T sine_DW;

// Real-time model
RT_MODEL_sine_T sine_M_ = RT_MODEL_sine_T();
RT_MODEL_sine_T *const sine_M = &sine_M_;

// Forward declaration for local functions
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void sine_step(void)
{
  SL_Bus_sine_std_msgs_Float64 rtb_BusAssignment;

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Sin: '<Root>/Sine Wave'

  rtb_BusAssignment.Data = sin(sine_P.SineWave_Freq * sine_M->Timing.t[0] +
    sine_P.SineWave_Phase) * sine_P.SineWave_Amp + sine_P.SineWave_Bias;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_sine_4.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  sine_M->Timing.t[0] =
    ((time_T)(++sine_M->Timing.clockTick0)) * sine_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.2s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.2, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    sine_M->Timing.clockTick1++;
  }
}

// Model initialize function
void sine_initialize(void)
{
  // Registration code
  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&sine_M->solverInfo, &sine_M->Timing.simTimeStep);
    rtsiSetTPtr(&sine_M->solverInfo, &rtmGetTPtr(sine_M));
    rtsiSetStepSizePtr(&sine_M->solverInfo, &sine_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&sine_M->solverInfo, (&rtmGetErrorStatus(sine_M)));
    rtsiSetRTModelPtr(&sine_M->solverInfo, sine_M);
  }

  rtsiSetSimTimeStep(&sine_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&sine_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(sine_M, &sine_M->Timing.tArray[0]);
  sine_M->Timing.stepSize0 = 0.2;

  {
    char_T tmp[13];
    int32_T i;
    static const char_T tmp_0[12] = { '/', 's', 'i', 'n', 'e', '_', 's', 'i',
      'g', 'n', 'a', 'l' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    sine_DW.obj.matlabCodegenIsDeleted = false;
    sine_DW.obj.isInitialized = 1;
    for (i = 0; i < 12; i++) {
      tmp[i] = tmp_0[i];
    }

    tmp[12] = '\x00';
    Pub_sine_4.createPublisher(tmp, 1);
    sine_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void sine_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&sine_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
