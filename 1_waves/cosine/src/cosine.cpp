//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: cosine.cpp
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
#include "cosine.h"
#include "cosine_private.h"

// Block signals (default storage)
B_cosine_T cosine_B;

// Block states (default storage)
DW_cosine_T cosine_DW;

// Real-time model
RT_MODEL_cosine_T cosine_M_ = RT_MODEL_cosine_T();
RT_MODEL_cosine_T *const cosine_M = &cosine_M_;

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
void cosine_step(void)
{
  {
    real_T *lastU;
    real_T lastTime;
    SL_Bus_cosine_std_msgs_Float64 b_varargout_2;
    boolean_T b_varargout_1;
    SL_Bus_cosine_std_msgs_Float64 rtb_BusAssignment;
    real_T tmp;

    // Outputs for Atomic SubSystem: '<Root>/Subscribe'
    // MATLABSystem: '<S3>/SourceBlock' incorporates:
    //   Inport: '<S4>/In1'

    b_varargout_1 = Sub_cosine_1.getLatestMessage(&b_varargout_2);

    // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S4>/Enable'

    if (b_varargout_1) {
      cosine_B.In1 = b_varargout_2;
    }

    // End of MATLABSystem: '<S3>/SourceBlock'
    // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe'

    // Derivative: '<Root>/Derivative'
    tmp = cosine_M->Timing.t[0];
    if ((cosine_DW.TimeStampA >= tmp) && (cosine_DW.TimeStampB >= tmp)) {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = 0.0;
    } else {
      lastTime = cosine_DW.TimeStampA;
      lastU = &cosine_DW.LastUAtTimeA;
      if (cosine_DW.TimeStampA < cosine_DW.TimeStampB) {
        if (cosine_DW.TimeStampB < tmp) {
          lastTime = cosine_DW.TimeStampB;
          lastU = &cosine_DW.LastUAtTimeB;
        }
      } else {
        if (cosine_DW.TimeStampA >= tmp) {
          lastTime = cosine_DW.TimeStampB;
          lastU = &cosine_DW.LastUAtTimeB;
        }
      }

      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = (cosine_B.In1.Data - *lastU) / (tmp - lastTime);
    }

    // End of Derivative: '<Root>/Derivative'

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // MATLABSystem: '<S2>/SinkBlock'
    Pub_cosine_7.publish(&rtb_BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'
  }

  {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative'
    if (cosine_DW.TimeStampA == (rtInf)) {
      cosine_DW.TimeStampA = cosine_M->Timing.t[0];
      lastU = &cosine_DW.LastUAtTimeA;
    } else if (cosine_DW.TimeStampB == (rtInf)) {
      cosine_DW.TimeStampB = cosine_M->Timing.t[0];
      lastU = &cosine_DW.LastUAtTimeB;
    } else if (cosine_DW.TimeStampA < cosine_DW.TimeStampB) {
      cosine_DW.TimeStampA = cosine_M->Timing.t[0];
      lastU = &cosine_DW.LastUAtTimeA;
    } else {
      cosine_DW.TimeStampB = cosine_M->Timing.t[0];
      lastU = &cosine_DW.LastUAtTimeB;
    }

    *lastU = cosine_B.In1.Data;

    // End of Update for Derivative: '<Root>/Derivative'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  cosine_M->Timing.t[0] =
    ((time_T)(++cosine_M->Timing.clockTick0)) * cosine_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.2s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.2, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    cosine_M->Timing.clockTick1++;
  }
}

// Model initialize function
void cosine_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&cosine_M->solverInfo, &cosine_M->Timing.simTimeStep);
    rtsiSetTPtr(&cosine_M->solverInfo, &rtmGetTPtr(cosine_M));
    rtsiSetStepSizePtr(&cosine_M->solverInfo, &cosine_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&cosine_M->solverInfo, (&rtmGetErrorStatus(cosine_M)));
    rtsiSetRTModelPtr(&cosine_M->solverInfo, cosine_M);
  }

  rtsiSetSimTimeStep(&cosine_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&cosine_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(cosine_M, &cosine_M->Timing.tArray[0]);
  cosine_M->Timing.stepSize0 = 0.2;

  {
    char_T tmp[13];
    char_T tmp_0[15];
    int32_T i;
    static const char_T tmp_1[12] = { '/', 's', 'i', 'n', 'e', '_', 's', 'i',
      'g', 'n', 'a', 'l' };

    static const char_T tmp_2[14] = { '/', 'c', 'o', 's', 'i', 'n', 'e', '_',
      's', 'i', 'g', 'n', 'a', 'l' };

    // InitializeConditions for Derivative: '<Root>/Derivative'
    cosine_DW.TimeStampA = (rtInf);
    cosine_DW.TimeStampB = (rtInf);

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S4>/Out1'
    cosine_B.In1 = cosine_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'

    // Start for MATLABSystem: '<S3>/SourceBlock'
    cosine_DW.obj_n.matlabCodegenIsDeleted = false;
    cosine_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 12; i++) {
      tmp[i] = tmp_1[i];
    }

    tmp[12] = '\x00';
    Sub_cosine_1.createSubscriber(tmp, 1);
    cosine_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    cosine_DW.obj.matlabCodegenIsDeleted = false;
    cosine_DW.obj.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_0[i] = tmp_2[i];
    }

    tmp_0[14] = '\x00';
    Pub_cosine_7.createPublisher(tmp_0, 1);
    cosine_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void cosine_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  matlabCodegenHandle_matlabCod_d(&cosine_DW.obj_n);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&cosine_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
