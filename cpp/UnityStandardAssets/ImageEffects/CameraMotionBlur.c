// Type: UnityStandardAssets.ImageEffects.CameraMotionBlur
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/CameraMotionBlur.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/CameraMotionBlur.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.CameraMotionBlur$$CalculateViewProjection
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__CalculateViewProjection (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x42555d0

void UnityStandardAssets_ImageEffects_CameraMotionBlur__CalculateViewProjection
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  long lVar2;
  UnityEngine_Matrix4x4_o proj;
  UnityEngine_Matrix4x4_o lhs;
  UnityEngine_Matrix4x4_o proj_00;
  UnityEngine_Matrix4x4_o lhs_00;
  UnityEngine_Matrix4x4_o proj_01;
  UnityEngine_Matrix4x4_o lhs_01;
  UnityEngine_Matrix4x4_o rhs;
  UnityEngine_Matrix4x4_o rhs_00;
  UnityEngine_Matrix4x4_o rhs_01;
  bool_conflict bVar3;
  UnityEngine_Matrix4x4_Fields local_218;
  UnityEngine_Matrix4x4_Fields local_1d8;
  UnityEngine_Matrix4x4_Fields local_198;
  UnityEngine_Matrix4x4_Fields local_158;
  UnityEngine_Matrix4x4_Fields local_118;
  UnityEngine_Matrix4x4_Fields local_d8;
  UnityEngine_Matrix4x4_Fields local_98;
  UnityEngine_Matrix4x4_Fields local_58;
  
  local_98.m03 = 0.0;
  local_98.m13 = 0.0;
  local_98.m23 = 0.0;
  local_98.m33 = 0.0;
  local_98.m02 = 0.0;
  local_98.m12 = 0.0;
  local_98.m22 = 0.0;
  local_98.m32 = 0.0;
  local_98.m01 = 0.0;
  local_98.m11 = 0.0;
  local_98.m21 = 0.0;
  local_98.m31 = 0.0;
  local_98.m00 = 0.0;
  local_98.m10 = 0.0;
  local_98.m20 = 0.0;
  local_98.m30 = 0.0;
  local_d8.m03 = 0.0;
  local_d8.m13 = 0.0;
  local_d8.m23 = 0.0;
  local_d8.m33 = 0.0;
  local_d8.m02 = 0.0;
  local_d8.m12 = 0.0;
  local_d8.m22 = 0.0;
  local_d8.m32 = 0.0;
  local_d8.m01 = 0.0;
  local_d8.m11 = 0.0;
  local_d8.m21 = 0.0;
  local_d8.m31 = 0.0;
  local_d8.m00 = 0.0;
  local_d8.m10 = 0.0;
  local_d8.m20 = 0.0;
  local_d8.m30 = 0.0;
  local_198.m03 = 0.0;
  local_198.m13 = 0.0;
  local_198.m23 = 0.0;
  local_198.m33 = 0.0;
  local_198.m02 = 0.0;
  local_198.m12 = 0.0;
  local_198.m22 = 0.0;
  local_198.m32 = 0.0;
  local_198.m01 = 0.0;
  local_198.m11 = 0.0;
  local_198.m21 = 0.0;
  local_198.m31 = 0.0;
  local_198.m00 = 0.0;
  local_198.m10 = 0.0;
  local_198.m20 = 0.0;
  local_198.m30 = 0.0;
  pUVar1 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__get_worldToCameraMatrix
              ((UnityEngine_Matrix4x4_o *)&local_218,pUVar1,(MethodInfo *)0x0);
    local_98.m03 = local_218.m03;
    local_98.m13 = local_218.m13;
    local_98.m23 = local_218.m23;
    local_98.m33 = local_218.m33;
    local_98.m02 = local_218.m02;
    local_98.m12 = local_218.m12;
    local_98.m22 = local_218.m22;
    local_98.m32 = local_218.m32;
    local_98.m01 = local_218.m01;
    local_98.m11 = local_218.m11;
    local_98.m21 = local_218.m21;
    local_98.m31 = local_218.m31;
    local_98.m00 = local_218.m00;
    local_98.m10 = local_218.m10;
    local_98.m20 = local_218.m20;
    local_98.m30 = local_218.m30;
    pUVar1 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__get_projectionMatrix
                ((UnityEngine_Matrix4x4_o *)&local_218,pUVar1,(MethodInfo *)0x0);
      local_58.m03 = local_218.m03;
      local_58.m13 = local_218.m13;
      local_58.m23 = local_218.m23;
      local_58.m33 = local_218.m33;
      local_58.m02 = local_218.m02;
      local_58.m12 = local_218.m12;
      local_58.m22 = local_218.m22;
      local_58.m32 = local_218.m32;
      local_58.m01 = local_218.m01;
      local_58.m11 = local_218.m11;
      local_58.m21 = local_218.m21;
      local_58.m31 = local_218.m31;
      local_58.m00 = local_218.m00;
      local_58.m10 = local_218.m10;
      local_58.m20 = local_218.m20;
      local_58.m30 = local_218.m30;
      proj.fields.m20 = local_218.m20;
      proj.fields.m30 = local_218.m30;
      proj.fields.m00 = local_218.m00;
      proj.fields.m10 = local_218.m10;
      proj.fields.m01 = local_218.m01;
      proj.fields.m11 = local_218.m11;
      proj.fields.m21 = local_218.m21;
      proj.fields.m31 = local_218.m31;
      proj.fields.m02 = local_218.m02;
      proj.fields.m12 = local_218.m12;
      proj.fields.m22 = local_218.m22;
      proj.fields.m32 = local_218.m32;
      proj.fields.m03 = local_218.m03;
      proj.fields.m13 = local_218.m13;
      proj.fields.m23 = local_218.m23;
      proj.fields.m33 = local_218.m33;
      UnityEngine_GL__GetGPUProjectionMatrix
                ((UnityEngine_Matrix4x4_o *)&local_218,proj,1,(MethodInfo *)0x0);
      local_d8.m03 = local_218.m03;
      local_d8.m13 = local_218.m13;
      local_d8.m23 = local_218.m23;
      local_d8.m33 = local_218.m33;
      local_d8.m02 = local_218.m02;
      local_d8.m12 = local_218.m12;
      local_d8.m22 = local_218.m22;
      local_d8.m32 = local_218.m32;
      local_d8.m01 = local_218.m01;
      local_d8.m11 = local_218.m11;
      local_d8.m21 = local_218.m21;
      local_d8.m31 = local_218.m31;
      local_d8.m00 = local_218.m00;
      local_d8.m10 = local_218.m10;
      local_d8.m20 = local_218.m20;
      local_d8.m30 = local_218.m30;
      lhs.fields.m20 = local_218.m20;
      lhs.fields.m30 = local_218.m30;
      lhs.fields.m00 = local_218.m00;
      lhs.fields.m10 = local_218.m10;
      lhs.fields.m01 = local_218.m01;
      lhs.fields.m11 = local_218.m11;
      lhs.fields.m21 = local_218.m21;
      lhs.fields.m31 = local_218.m31;
      lhs.fields.m02 = local_218.m02;
      lhs.fields.m12 = local_218.m12;
      lhs.fields.m22 = local_218.m22;
      lhs.fields.m32 = local_218.m32;
      lhs.fields.m03 = local_218.m03;
      lhs.fields.m13 = local_218.m13;
      lhs.fields.m23 = local_218.m23;
      lhs.fields.m33 = local_218.m33;
      rhs.fields.m20 = local_98.m20;
      rhs.fields.m30 = local_98.m30;
      rhs.fields.m00 = local_98.m00;
      rhs.fields.m10 = local_98.m10;
      rhs.fields.m01 = local_98.m01;
      rhs.fields.m11 = local_98.m11;
      rhs.fields.m21 = local_98.m21;
      rhs.fields.m31 = local_98.m31;
      rhs.fields.m02 = local_98.m02;
      rhs.fields.m12 = local_98.m12;
      rhs.fields.m22 = local_98.m22;
      rhs.fields.m32 = local_98.m32;
      rhs.fields.m03 = local_98.m03;
      rhs.fields.m13 = local_98.m13;
      rhs.fields.m23 = local_98.m23;
      rhs.fields.m33 = local_98.m33;
      UnityEngine_Matrix4x4__op_Multiply
                ((UnityEngine_Matrix4x4_o *)&local_1d8,lhs,rhs,(MethodInfo *)0x0);
      local_218.m03 = local_1d8.m03;
      local_218.m13 = local_1d8.m13;
      local_218.m23 = local_1d8.m23;
      local_218.m33 = local_1d8.m33;
      local_218.m02 = local_1d8.m02;
      local_218.m12 = local_1d8.m12;
      local_218.m22 = local_1d8.m22;
      local_218.m32 = local_1d8.m32;
      local_218.m01 = local_1d8.m01;
      local_218.m11 = local_1d8.m11;
      local_218.m21 = local_1d8.m21;
      local_218.m31 = local_1d8.m31;
      local_218.m00 = local_1d8.m00;
      local_218.m10 = local_1d8.m10;
      local_218.m20 = local_1d8.m20;
      local_218.m30 = local_1d8.m30;
      (__this->fields).currentViewProjMat.fields.m22 = local_1d8.m03;
      (__this->fields).currentViewProjMat.fields.m32 = local_1d8.m13;
      (__this->fields).currentViewProjMat.fields.m03 = local_1d8.m23;
      (__this->fields).currentViewProjMat.fields.m13 = local_1d8.m33;
      (__this->fields).currentViewProjMat.fields.m21 = local_1d8.m02;
      (__this->fields).currentViewProjMat.fields.m31 = local_1d8.m12;
      (__this->fields).currentViewProjMat.fields.m02 = local_1d8.m22;
      (__this->fields).currentViewProjMat.fields.m12 = local_1d8.m32;
      (__this->fields).currentViewProjMat.fields.m20 = local_1d8.m01;
      (__this->fields).currentViewProjMat.fields.m30 = local_1d8.m11;
      (__this->fields).currentViewProjMat.fields.m01 = local_1d8.m21;
      (__this->fields).currentViewProjMat.fields.m11 = local_1d8.m31;
      (__this->fields).showVelocity = (bool_conflict)local_1d8.m00;
      (__this->fields).showVelocityScale = local_1d8.m10;
      (__this->fields).currentViewProjMat.fields.m00 = local_1d8.m20;
      (__this->fields).currentViewProjMat.fields.m10 = local_1d8.m30;
      pUVar1 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
      if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
        bVar3 = UnityEngine_Camera__get_stereoEnabled(pUVar1,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return;
        }
        pUVar1 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
        if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__GetStereoViewMatrix
                    ((UnityEngine_Matrix4x4_o *)&local_1d8,pUVar1,0,(MethodInfo *)0x0);
          local_218.m03 = local_1d8.m03;
          local_218.m13 = local_1d8.m13;
          local_218.m23 = local_1d8.m23;
          local_218.m33 = local_1d8.m33;
          local_218.m02 = local_1d8.m02;
          local_218.m12 = local_1d8.m12;
          local_218.m22 = local_1d8.m22;
          local_218.m32 = local_1d8.m32;
          local_218.m01 = local_1d8.m01;
          local_218.m11 = local_1d8.m11;
          local_218.m21 = local_1d8.m21;
          local_218.m31 = local_1d8.m31;
          local_218.m00 = local_1d8.m00;
          local_218.m10 = local_1d8.m10;
          local_218.m20 = local_1d8.m20;
          local_218.m30 = local_1d8.m30;
          local_198.m00 = local_1d8.m00;
          local_198.m10 = local_1d8.m10;
          local_198.m20 = local_1d8.m20;
          local_198.m30 = local_1d8.m30;
          local_198.m01 = local_1d8.m01;
          local_198.m11 = local_1d8.m11;
          local_198.m21 = local_1d8.m21;
          local_198.m31 = local_1d8.m31;
          local_198.m02 = local_1d8.m02;
          local_198.m12 = local_1d8.m12;
          local_198.m22 = local_1d8.m22;
          local_198.m32 = local_1d8.m32;
          local_198.m03 = local_1d8.m03;
          local_198.m13 = local_1d8.m13;
          local_198.m23 = local_1d8.m23;
          local_198.m33 = local_1d8.m33;
          pUVar1 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
          if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
            UnityEngine_Camera__GetStereoProjectionMatrix
                      ((UnityEngine_Matrix4x4_o *)&local_218,pUVar1,0,(MethodInfo *)0x0);
            local_1d8.m03 = local_218.m03;
            local_1d8.m13 = local_218.m13;
            local_1d8.m23 = local_218.m23;
            local_1d8.m33 = local_218.m33;
            local_1d8.m02 = local_218.m02;
            local_1d8.m12 = local_218.m12;
            local_1d8.m22 = local_218.m22;
            local_1d8.m32 = local_218.m32;
            local_1d8.m01 = local_218.m01;
            local_1d8.m11 = local_218.m11;
            local_1d8.m21 = local_218.m21;
            local_1d8.m31 = local_218.m31;
            local_1d8.m00 = local_218.m00;
            local_1d8.m10 = local_218.m10;
            local_1d8.m20 = local_218.m20;
            local_1d8.m30 = local_218.m30;
            proj_00.fields.m20 = local_218.m20;
            proj_00.fields.m30 = local_218.m30;
            proj_00.fields.m00 = local_218.m00;
            proj_00.fields.m10 = local_218.m10;
            proj_00.fields.m01 = local_218.m01;
            proj_00.fields.m11 = local_218.m11;
            proj_00.fields.m21 = local_218.m21;
            proj_00.fields.m31 = local_218.m31;
            proj_00.fields.m02 = local_218.m02;
            proj_00.fields.m12 = local_218.m12;
            proj_00.fields.m22 = local_218.m22;
            proj_00.fields.m32 = local_218.m32;
            proj_00.fields.m03 = local_218.m03;
            proj_00.fields.m13 = local_218.m13;
            proj_00.fields.m23 = local_218.m23;
            proj_00.fields.m33 = local_218.m33;
            UnityEngine_GL__GetGPUProjectionMatrix
                      ((UnityEngine_Matrix4x4_o *)&local_218,proj_00,1,(MethodInfo *)0x0);
            local_118.m03 = local_218.m03;
            local_118.m13 = local_218.m13;
            local_118.m23 = local_218.m23;
            local_118.m33 = local_218.m33;
            local_118.m02 = local_218.m02;
            local_118.m12 = local_218.m12;
            local_118.m22 = local_218.m22;
            local_118.m32 = local_218.m32;
            local_118.m01 = local_218.m01;
            local_118.m11 = local_218.m11;
            local_118.m21 = local_218.m21;
            local_118.m31 = local_218.m31;
            local_118.m00 = local_218.m00;
            local_118.m10 = local_218.m10;
            local_118.m20 = local_218.m20;
            local_118.m30 = local_218.m30;
            lVar2 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
            lhs_00.fields.m20 = local_218.m20;
            lhs_00.fields.m30 = local_218.m30;
            lhs_00.fields.m00 = local_218.m00;
            lhs_00.fields.m10 = local_218.m10;
            lhs_00.fields.m01 = local_218.m01;
            lhs_00.fields.m11 = local_218.m11;
            lhs_00.fields.m21 = local_218.m21;
            lhs_00.fields.m31 = local_218.m31;
            lhs_00.fields.m02 = local_218.m02;
            lhs_00.fields.m12 = local_218.m12;
            lhs_00.fields.m22 = local_218.m22;
            lhs_00.fields.m32 = local_218.m32;
            lhs_00.fields.m03 = local_218.m03;
            lhs_00.fields.m13 = local_218.m13;
            lhs_00.fields.m23 = local_218.m23;
            lhs_00.fields.m33 = local_218.m33;
            rhs_00.fields.m20 = local_198.m20;
            rhs_00.fields.m30 = local_198.m30;
            rhs_00.fields.m00 = local_198.m00;
            rhs_00.fields.m10 = local_198.m10;
            rhs_00.fields.m01 = local_198.m01;
            rhs_00.fields.m11 = local_198.m11;
            rhs_00.fields.m21 = local_198.m21;
            rhs_00.fields.m31 = local_198.m31;
            rhs_00.fields.m02 = local_198.m02;
            rhs_00.fields.m12 = local_198.m12;
            rhs_00.fields.m22 = local_198.m22;
            rhs_00.fields.m32 = local_198.m32;
            rhs_00.fields.m03 = local_198.m03;
            rhs_00.fields.m13 = local_198.m13;
            rhs_00.fields.m23 = local_198.m23;
            rhs_00.fields.m33 = local_198.m33;
            UnityEngine_Matrix4x4__op_Multiply
                      ((UnityEngine_Matrix4x4_o *)&local_218,lhs_00,rhs_00,(MethodInfo *)0x0);
            local_158.m03 = local_218.m03;
            local_158.m13 = local_218.m13;
            local_158.m23 = local_218.m23;
            local_158.m33 = local_218.m33;
            local_158.m02 = local_218.m02;
            local_158.m12 = local_218.m12;
            local_158.m22 = local_218.m22;
            local_158.m32 = local_218.m32;
            local_158.m01 = local_218.m01;
            local_158.m11 = local_218.m11;
            local_158.m21 = local_218.m21;
            local_158.m31 = local_218.m31;
            local_158.m00 = local_218.m00;
            local_158.m10 = local_218.m10;
            local_158.m20 = local_218.m20;
            local_158.m30 = local_218.m30;
            if (lVar2 != 0) {
              if (*(int *)(lVar2 + 0x18) == 0) {
LAB_04255de7:
                local_158._0_8_ = local_218._0_8_;
                local_158._8_8_ = local_218._8_8_;
                local_158._16_8_ = local_218._16_8_;
                local_158._24_8_ = local_218._24_8_;
                local_158._32_8_ = local_218._32_8_;
                local_158._40_8_ = local_218._40_8_;
                local_158._48_8_ = local_218._48_8_;
                local_158._56_8_ = local_218._56_8_;
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              *(undefined8 *)(lVar2 + 0x50) = local_218._48_8_;
              *(undefined8 *)(lVar2 + 0x58) = local_218._56_8_;
              *(undefined8 *)(lVar2 + 0x40) = local_218._32_8_;
              *(undefined8 *)(lVar2 + 0x48) = local_218._40_8_;
              *(undefined8 *)(lVar2 + 0x30) = local_218._16_8_;
              *(undefined8 *)(lVar2 + 0x38) = local_218._24_8_;
              *(undefined8 *)(lVar2 + 0x20) = local_218._0_8_;
              *(undefined8 *)(lVar2 + 0x28) = local_218._8_8_;
              pUVar1 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
              if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
                UnityEngine_Camera__GetStereoViewMatrix
                          ((UnityEngine_Matrix4x4_o *)&local_1d8,pUVar1,1,(MethodInfo *)0x0);
                local_218.m03 = local_1d8.m03;
                local_218.m13 = local_1d8.m13;
                local_218.m23 = local_1d8.m23;
                local_218.m33 = local_1d8.m33;
                local_218.m02 = local_1d8.m02;
                local_218.m12 = local_1d8.m12;
                local_218.m22 = local_1d8.m22;
                local_218.m32 = local_1d8.m32;
                local_218.m01 = local_1d8.m01;
                local_218.m11 = local_1d8.m11;
                local_218.m21 = local_1d8.m21;
                local_218.m31 = local_1d8.m31;
                local_218.m00 = local_1d8.m00;
                local_218.m10 = local_1d8.m10;
                local_218.m20 = local_1d8.m20;
                local_218.m30 = local_1d8.m30;
                local_198.m00 = local_1d8.m00;
                local_198.m10 = local_1d8.m10;
                local_198.m20 = local_1d8.m20;
                local_198.m30 = local_1d8.m30;
                local_198.m01 = local_1d8.m01;
                local_198.m11 = local_1d8.m11;
                local_198.m21 = local_1d8.m21;
                local_198.m31 = local_1d8.m31;
                local_198.m02 = local_1d8.m02;
                local_198.m12 = local_1d8.m12;
                local_198.m22 = local_1d8.m22;
                local_198.m32 = local_1d8.m32;
                local_198.m03 = local_1d8.m03;
                local_198.m13 = local_1d8.m13;
                local_198.m23 = local_1d8.m23;
                local_198.m33 = local_1d8.m33;
                pUVar1 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
                if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
                  UnityEngine_Camera__GetStereoProjectionMatrix
                            ((UnityEngine_Matrix4x4_o *)&local_218,pUVar1,1,(MethodInfo *)0x0);
                  local_1d8.m03 = local_218.m03;
                  local_1d8.m13 = local_218.m13;
                  local_1d8.m23 = local_218.m23;
                  local_1d8.m33 = local_218.m33;
                  local_1d8.m02 = local_218.m02;
                  local_1d8.m12 = local_218.m12;
                  local_1d8.m22 = local_218.m22;
                  local_1d8.m32 = local_218.m32;
                  local_1d8.m01 = local_218.m01;
                  local_1d8.m11 = local_218.m11;
                  local_1d8.m21 = local_218.m21;
                  local_1d8.m31 = local_218.m31;
                  local_1d8.m00 = local_218.m00;
                  local_1d8.m10 = local_218.m10;
                  local_1d8.m20 = local_218.m20;
                  local_1d8.m30 = local_218.m30;
                  proj_01.fields.m20 = local_218.m20;
                  proj_01.fields.m30 = local_218.m30;
                  proj_01.fields.m00 = local_218.m00;
                  proj_01.fields.m10 = local_218.m10;
                  proj_01.fields.m01 = local_218.m01;
                  proj_01.fields.m11 = local_218.m11;
                  proj_01.fields.m21 = local_218.m21;
                  proj_01.fields.m31 = local_218.m31;
                  proj_01.fields.m02 = local_218.m02;
                  proj_01.fields.m12 = local_218.m12;
                  proj_01.fields.m22 = local_218.m22;
                  proj_01.fields.m32 = local_218.m32;
                  proj_01.fields.m03 = local_218.m03;
                  proj_01.fields.m13 = local_218.m13;
                  proj_01.fields.m23 = local_218.m23;
                  proj_01.fields.m33 = local_218.m33;
                  UnityEngine_GL__GetGPUProjectionMatrix
                            ((UnityEngine_Matrix4x4_o *)&local_218,proj_01,1,(MethodInfo *)0x0);
                  local_118.m03 = local_218.m03;
                  local_118.m13 = local_218.m13;
                  local_118.m23 = local_218.m23;
                  local_118.m33 = local_218.m33;
                  local_118.m02 = local_218.m02;
                  local_118.m12 = local_218.m12;
                  local_118.m22 = local_218.m22;
                  local_118.m32 = local_218.m32;
                  local_118.m01 = local_218.m01;
                  local_118.m11 = local_218.m11;
                  local_118.m21 = local_218.m21;
                  local_118.m31 = local_218.m31;
                  local_118.m00 = local_218.m00;
                  local_118.m10 = local_218.m10;
                  local_118.m20 = local_218.m20;
                  local_118.m30 = local_218.m30;
                  lVar2 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
                  lhs_01.fields.m20 = local_218.m20;
                  lhs_01.fields.m30 = local_218.m30;
                  lhs_01.fields.m00 = local_218.m00;
                  lhs_01.fields.m10 = local_218.m10;
                  lhs_01.fields.m01 = local_218.m01;
                  lhs_01.fields.m11 = local_218.m11;
                  lhs_01.fields.m21 = local_218.m21;
                  lhs_01.fields.m31 = local_218.m31;
                  lhs_01.fields.m02 = local_218.m02;
                  lhs_01.fields.m12 = local_218.m12;
                  lhs_01.fields.m22 = local_218.m22;
                  lhs_01.fields.m32 = local_218.m32;
                  lhs_01.fields.m03 = local_218.m03;
                  lhs_01.fields.m13 = local_218.m13;
                  lhs_01.fields.m23 = local_218.m23;
                  lhs_01.fields.m33 = local_218.m33;
                  rhs_01.fields.m20 = local_198.m20;
                  rhs_01.fields.m30 = local_198.m30;
                  rhs_01.fields.m00 = local_198.m00;
                  rhs_01.fields.m10 = local_198.m10;
                  rhs_01.fields.m01 = local_198.m01;
                  rhs_01.fields.m11 = local_198.m11;
                  rhs_01.fields.m21 = local_198.m21;
                  rhs_01.fields.m31 = local_198.m31;
                  rhs_01.fields.m02 = local_198.m02;
                  rhs_01.fields.m12 = local_198.m12;
                  rhs_01.fields.m22 = local_198.m22;
                  rhs_01.fields.m32 = local_198.m32;
                  rhs_01.fields.m03 = local_198.m03;
                  rhs_01.fields.m13 = local_198.m13;
                  rhs_01.fields.m23 = local_198.m23;
                  rhs_01.fields.m33 = local_198.m33;
                  UnityEngine_Matrix4x4__op_Multiply
                            ((UnityEngine_Matrix4x4_o *)&local_218,lhs_01,rhs_01,(MethodInfo *)0x0);
                  local_158.m03 = local_218.m03;
                  local_158.m13 = local_218.m13;
                  local_158.m23 = local_218.m23;
                  local_158.m33 = local_218.m33;
                  local_158.m02 = local_218.m02;
                  local_158.m12 = local_218.m12;
                  local_158.m22 = local_218.m22;
                  local_158.m32 = local_218.m32;
                  local_158.m01 = local_218.m01;
                  local_158.m11 = local_218.m11;
                  local_158.m21 = local_218.m21;
                  local_158.m31 = local_218.m31;
                  local_158.m00 = local_218.m00;
                  local_158.m10 = local_218.m10;
                  local_158.m20 = local_218.m20;
                  local_158.m30 = local_218.m30;
                  if (lVar2 != 0) {
                    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar2 + 0x90) = local_218._48_8_;
                      *(undefined8 *)(lVar2 + 0x98) = local_218._56_8_;
                      *(undefined8 *)(lVar2 + 0x80) = local_218._32_8_;
                      *(undefined8 *)(lVar2 + 0x88) = local_218._40_8_;
                      *(undefined8 *)(lVar2 + 0x70) = local_218._16_8_;
                      *(undefined8 *)(lVar2 + 0x78) = local_218._24_8_;
                      *(undefined8 *)(lVar2 + 0x60) = local_218._0_8_;
                      *(undefined8 *)(lVar2 + 0x68) = local_218._8_8_;
                      return;
                    }
                    goto LAB_04255de7;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__Start (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x4255df0

void UnityStandardAssets_ImageEffects_CameraMotionBlur__Start
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  undefined8 uVar3;
  MethodInfo *method_00;
  
  if (DAT_0570523a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&TypeInfo_Matrix4x4);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570523a = '\x01';
  }
  (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  x = *(UnityEngine_Object_o **)&(__this->fields).prevFramePos.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pIVar2 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    *(Il2CppObject **)&(__this->fields).prevFramePos.fields.z = pIVar2;
    il2cpp_runtime_glue(&(__this->fields).prevFramePos.fields.z);
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    *(char *)((long)&(__this->fields).prevStereoViewProjMat + 4) = (char)bVar1;
    uVar3 = il2cpp_glue_02274930(TypeInfo_Matrix4x4,2);
    *(undefined8 *)&(__this->fields).currentViewProjMat.fields.m33 = uVar3;
    il2cpp_runtime_glue(&(__this->fields).currentViewProjMat.fields.m33,uVar3);
    method_00 = (MethodInfo *)il2cpp_glue_02274930(TypeInfo_Matrix4x4,2);
    *(MethodInfo **)&(__this->fields).prevViewProjMat.fields.m23 = method_00;
    il2cpp_runtime_glue(&(__this->fields).prevViewProjMat.fields.m23);
    UnityStandardAssets_ImageEffects_CameraMotionBlur__CalculateViewProjection(__this,method_00);
    UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember(__this,method_00);
    *(undefined1 *)((long)&(__this->fields).prevStereoViewProjMat + 4) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$OnEnable
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnEnable (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x4256170

void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnEnable
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Camera_o *__this_00;
  bool_conflict bVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_0570523b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570523b = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(__this->fields).prevFramePos.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pfVar1 = &(__this->fields).prevFramePos.fields.z;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pIVar4 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    *(Il2CppObject **)&(__this->fields).prevFramePos.fields.z = pIVar4;
    il2cpp_runtime_glue(pfVar1);
  }
  __this_00 = *(UnityEngine_Camera_o **)pfVar1;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    uVar3 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(__this_00,uVar3 | 1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnDisable (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x4256230

void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnDisable
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Shader_o **ppUVar1;
  UnityEngine_Material_o **ppUVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_LayerMask_o *pUVar5;
  
  if (DAT_0570523c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570523c = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).replacementClear;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar3,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    ppUVar1 = &(__this->fields).replacementClear;
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
    *ppUVar1 = (UnityEngine_Shader_o *)0x0;
    il2cpp_runtime_glue(ppUVar1,0);
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).motionBlurMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar3,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    ppUVar2 = &(__this->fields).motionBlurMaterial;
    pUVar3 = (UnityEngine_Object_o *)*ppUVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
    *ppUVar2 = (UnityEngine_Material_o *)0x0;
    il2cpp_runtime_glue(ppUVar2,0);
  }
  pUVar3 = *(UnityEngine_Object_o **)&(__this->fields).excludeLayers;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar3,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar5 = &(__this->fields).excludeLayers;
    pUVar3 = *(UnityEngine_Object_o **)pUVar5;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
    *(undefined8 *)pUVar5 = 0;
    il2cpp_runtime_glue(pUVar5,0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_CameraMotionBlur__CheckResources (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x4256390

bool_conflict
UnityStandardAssets_ImageEffects_CameraMotionBlur__CheckResources
          (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  undefined8 uVar2;
  undefined8 extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  
  bVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
                    ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,1,in_RDX);
  if (((char)bVar1 != '\0') && ((char)(__this->fields).supportHDRTextures == '\0')) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).tmpCam,
                         (UnityEngine_Material_o *)(__this->fields).replacementClear,in_RCX);
  (__this->fields).replacementClear = (UnityEngine_Shader_o *)method_00;
  uVar2 = il2cpp_runtime_glue(&(__this->fields).replacementClear);
  if ((*(char *)((long)&(__this->fields).supportHDRTextures + 1) != '\0') &&
     (*(int *)&(__this->fields).createdMaterials == 3)) {
    method_00 = (MethodInfo *)
                UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                          ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                           (__this->fields).shader,(__this->fields).motionBlurMaterial,in_RCX);
    (__this->fields).motionBlurMaterial = (UnityEngine_Material_o *)method_00;
    uVar2 = il2cpp_runtime_glue(&(__this->fields).motionBlurMaterial);
  }
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnRenderImage (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4256490

void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnRenderImage
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_Matrix4x4_Fields *pUVar1;
  UnityEngine_Matrix4x4_array **ppUVar2;
  UnityEngine_Matrix4x4_array **ppUVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auVar6 [4];
  undefined4 uVar7;
  float fVar10;
  undefined8 uVar8;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar9;
  undefined4 uVar13;
  UnityEngine_Object_o *pUVar14;
  UnityEngine_Texture_o *__this_00;
  long lVar15;
  UnityEngine_Shader_o *__this_01;
  double dVar16;
  UnityEngine_Matrix4x4_o value;
  UnityEngine_Matrix4x4_o value_00;
  UnityEngine_Matrix4x4_o value_01;
  UnityEngine_Matrix4x4_o value_02;
  UnityEngine_Matrix4x4_o __this_02;
  UnityEngine_Matrix4x4_o proj;
  UnityEngine_Matrix4x4_o lhs;
  UnityEngine_Matrix4x4_o lhs_00;
  UnityEngine_Matrix4x4_o value_03;
  UnityEngine_Matrix4x4_o value_04;
  UnityEngine_Matrix4x4_o rhs;
  UnityEngine_Matrix4x4_o rhs_00;
  UnityEngine_Matrix4x4_o rhs_01;
  UnityEngine_Matrix4x4_o rhs_02;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  UnityEngine_Matrix4x4_o m;
  char cVar19;
  bool_conflict bVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int width;
  int32_t iVar24;
  UnityEngine_Transform_o *pUVar25;
  UnityEngine_Texture_o *__this_03;
  UnityEngine_Texture_o *pUVar26;
  UnityEngine_GameObject_o *pUVar27;
  long lVar28;
  UnityEngine_Camera_o *pUVar29;
  UnityEngine_Material_o *pUVar30;
  ulong uVar31;
  UnityEngine_Matrix4x4_Fields *pUVar32;
  MethodInfo *pMVar33;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_LayerMask_o __this_04;
  UnityEngine_Texture_o *pUVar34;
  int height;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined1 auVar35 [16];
  float fVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  UnityEngine_Vector4_o value_05;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o a;
  UnityEngine_Quaternion_o q;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined1 auStack_658 [8];
  undefined4 uStack_650;
  undefined4 uStack_64c;
  float fStack_628;
  float fStack_624;
  UnityEngine_Matrix4x4_array *apUStack_618 [9];
  UnityEngine_Texture_o *pUStack_5d0;
  undefined1 auStack_5c8 [8];
  float fStack_5c0;
  float fStack_5bc;
  undefined1 auStack_5b8 [4];
  undefined1 auStack_5b4 [12];
  float fStack_5a8;
  float fStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined1 auStack_598 [16];
  UnityEngine_Texture_o *pUStack_588;
  undefined8 uStack_580;
  float fStack_570;
  float fStack_56c;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 auStack_548 [16];
  undefined8 uStack_538;
  undefined8 uStack_530;
  UnityEngine_RenderTexture_o *pUStack_528;
  float fStack_51c;
  UnityEngine_Matrix4x4_array *apUStack_518 [8];
  undefined1 auStack_4d8 [16];
  undefined1 auStack_4c8 [16];
  float fStack_4b8;
  float fStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  UnityEngine_Matrix4x4_Fields UStack_4a8;
  ulong uStack_460;
  UnityEngine_Matrix4x4_Fields UStack_458;
  undefined1 auStack_418 [16];
  undefined1 auStack_408 [16];
  UnityEngine_Matrix4x4_array *pUStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  MethodInfo MStack_3b8;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  UnityEngine_Matrix4x4_array *pUStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  UnityEngine_Matrix4x4_array *pUStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  UnityEngine_Matrix4x4_array *pUStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  UnityEngine_Matrix4x4_Fields UStack_278;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  UnityEngine_Matrix4x4_Fields UStack_f8;
  UnityEngine_Matrix4x4_Fields UStack_b8;
  UnityEngine_Matrix4x4_array *pUStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (DAT_0570523d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CameraMotionBlur);
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    il2cpp_init_method_metadata(&TypeInfo_Matrix4x4);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_DisplayVelocityScale");
    il2cpp_init_method_metadata(&"_ToPrevViewProjCombined");
    il2cpp_init_method_metadata(&"_Jitter");
    il2cpp_init_method_metadata(&"_BlurDirectionPacked");
    il2cpp_init_method_metadata(&"_MaxVelocity");
    il2cpp_init_method_metadata(&"_StereoToPrevViewProjCombined0");
    il2cpp_init_method_metadata(&"_TileTexDebug");
    il2cpp_init_method_metadata(&"_MaxRadiusOrKInPaper");
    il2cpp_init_method_metadata(&"_StereoToPrevViewProjCombined1");
    il2cpp_init_method_metadata(&"_NoiseTex");
    il2cpp_init_method_metadata(&"_NeighbourMaxTex");
    il2cpp_init_method_metadata(&"_InvViewProj");
    il2cpp_init_method_metadata(&"_VelocityScale");
    il2cpp_init_method_metadata(&"_PrevViewProj");
    il2cpp_init_method_metadata(&"_VelTex");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"_MinVelocity");
    il2cpp_init_method_metadata(&"_SoftZDistance");
    DAT_0570523d = '\x01';
  }
  uStack_3c8._0_4_ = 0.0;
  uStack_3c8._4_4_ = 0.0;
  uStack_3c0._0_4_ = 0.0;
  uStack_3c0._4_4_ = 0.0;
  uStack_3d8._0_4_ = 0.0;
  uStack_3d8._4_4_ = 0.0;
  uStack_3d0._0_4_ = 0.0;
  uStack_3d0._4_4_ = 0.0;
  uStack_3e8._0_4_ = 0.0;
  uStack_3e8._4_4_ = 0.0;
  uStack_3e0._0_4_ = 0.0;
  uStack_3e0._4_4_ = 0.0;
  pUStack_3f8 = (UnityEngine_Matrix4x4_array *)0x0;
  uStack_3f0._0_4_ = 0.0;
  uStack_3f0._4_4_ = 0.0;
  UStack_f8.m03 = 0.0;
  UStack_f8.m13 = 0.0;
  UStack_f8.m23 = 0.0;
  UStack_f8.m33 = 0.0;
  UStack_f8.m02 = 0.0;
  UStack_f8.m12 = 0.0;
  UStack_f8.m22 = 0.0;
  UStack_f8.m32 = 0.0;
  UStack_f8.m01 = 0.0;
  UStack_f8.m11 = 0.0;
  UStack_f8.m21 = 0.0;
  UStack_f8.m31 = 0.0;
  UStack_f8.m00 = 0.0;
  UStack_f8.m10 = 0.0;
  UStack_f8.m20 = 0.0;
  UStack_f8.m30 = 0.0;
  uStack_308._0_4_ = 0.0;
  uStack_308._4_4_ = 0.0;
  uStack_300._0_4_ = 0.0;
  uStack_300._4_4_ = 0.0;
  uStack_318._0_4_ = 0.0;
  uStack_318._4_4_ = 0.0;
  uStack_310._0_4_ = 0.0;
  uStack_310._4_4_ = 0.0;
  uStack_328._0_4_ = 0.0;
  uStack_328._4_4_ = 0.0;
  uStack_320._0_4_ = 0.0;
  uStack_320._4_4_ = 0.0;
  pUStack_338 = (UnityEngine_Matrix4x4_array *)0x0;
  uStack_330._0_4_ = 0.0;
  uStack_330._4_4_ = 0.0;
  MStack_3b8.parameters = (Il2CppType **)0x0;
  MStack_3b8.field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
  MStack_3b8.klass = (Il2CppClass *)0x0;
  MStack_3b8.return_type = (Il2CppType *)0x0;
  MStack_3b8.invoker_method = (InvokerMethod)0x0;
  MStack_3b8.name = (char *)0x0;
  MStack_3b8.methodPointer = (Il2CppMethodPointer)0x0;
  MStack_3b8.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  uStack_348._0_4_ = 0.0;
  uStack_348._4_4_ = 0.0;
  uStack_340._0_4_ = 0.0;
  uStack_340._4_4_ = 0.0;
  uStack_358._0_4_ = 0.0;
  uStack_358._4_4_ = 0.0;
  uStack_350._0_4_ = 0.0;
  uStack_350._4_4_ = 0.0;
  MStack_3b8._80_8_ = 0;
  uStack_360._0_4_ = 0.0;
  uStack_360._4_4_ = 0.0;
  MStack_3b8.field8_0x40.genericMethod = (UnityEngine_Matrix4x4_array *)0x0;
  MStack_3b8._72_8_ = 0;
  cVar19 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar19 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)&(__this->fields).createdMaterials == 0) {
    pUStack_588 = *(UnityEngine_Texture_o **)&(__this->fields).prevFrameUp.fields.y;
    uStack_580 = 0;
    fVar36 = (__this->fields).prevFramePos.fields.x;
    pUVar25 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto LAB_04258f68;
    UVar41 = UnityEngine_Transform__get_position(pUVar25,(MethodInfo *)0x0);
    a.fields.z = fVar36;
    a.fields._0_8_ = pUStack_588;
    UVar41 = UnityEngine_Vector3__Slerp(a,UVar41,0.75,(MethodInfo *)0x0);
    (__this->fields).prevFrameUp.fields.y = (float)(int)UVar41.fields._0_8_;
    (__this->fields).prevFrameUp.fields.z = (float)(int)((ulong)UVar41.fields._0_8_ >> 0x20);
    (__this->fields).prevFramePos.fields.x = UVar41.fields.z;
  }
  bVar20 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xd,(MethodInfo *)0x0);
  iVar24 = 2;
  if ((char)bVar20 != '\0') {
    iVar24 = 0xd;
  }
  if (source == (UnityEngine_RenderTexture_o *)0x0) goto LAB_04258f68;
  iVar21 = (*(source->klass->vtable)._5_get_width.methodPtr)
                     (source,(source->klass->vtable)._5_get_width.method);
  fVar36 = (__this->fields).velocityScale;
  if (*(int *)(TypeInfo_CameraMotionBlur + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar21 = (int)fVar36 + iVar21 + -1;
  iVar22 = (*(source->klass->vtable)._7_get_height.methodPtr)
                     (source,(source->klass->vtable)._7_get_height.method,
                      (long)iVar21 % (long)(int)fVar36 & 0xffffffff);
  fVar4 = (__this->fields).velocityScale;
  uVar31 = 0;
  pUStack_588 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary
                          (iVar21 / (int)fVar36,(iVar22 + (int)fVar4 + -1) / (int)fVar4,0,iVar24,
                           (MethodInfo *)0x0);
  fVar36 = (__this->fields).movementScale;
  fVar4 = 2.0;
  if (2.0 <= fVar36) {
    fVar4 = fVar36;
  }
  (__this->fields).movementScale = fVar4;
  iVar21 = *(int *)&(__this->fields).createdMaterials;
  if (iVar21 == 3) {
    pUVar14 = (UnityEngine_Object_o *)(__this->fields).motionBlurMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar23 = UnityEngine_Object__op_Equality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar31 = (ulong)(uVar23 & 0xff);
    iVar21 = *(int *)&(__this->fields).createdMaterials;
  }
  pUVar34 = pUStack_588;
  pUStack_528 = destination;
  uStack_460 = uVar31;
  if ((iVar21 == 4) || (iVar21 == 2 || (int)uVar31 != 0)) {
    fVar36 = (__this->fields).movementScale;
    if (*(int *)(TypeInfo_CameraMotionBlur + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (**(float **)(TypeInfo_CameraMotionBlur + 0xb8) <= fVar36) {
      fVar36 = **(float **)(TypeInfo_CameraMotionBlur + 0xb8);
    }
    (__this->fields).movementScale = fVar36;
    if (pUVar34 == (UnityEngine_Texture_o *)0x0) goto LAB_04258f68;
    iVar21 = (*(pUVar34->klass->vtable)._5_get_width.methodPtr)
                       (pUVar34,(pUVar34->klass->vtable)._5_get_width.method);
    iVar22 = (int)(__this->fields).movementScale;
    iVar21 = iVar21 + iVar22;
  }
  else {
    if (pUStack_588 == (UnityEngine_Texture_o *)0x0) goto LAB_04258f68;
    iVar21 = (*(pUStack_588->klass->vtable)._5_get_width.methodPtr)
                       (pUStack_588,(pUStack_588->klass->vtable)._5_get_width.method);
    fVar36 = (__this->fields).movementScale;
    if (*(int *)(TypeInfo_CameraMotionBlur + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar22 = (int)fVar36;
    iVar21 = iVar22 + iVar21;
  }
  width = (iVar21 + -1) / iVar22;
  iVar21 = (*(pUVar34->klass->vtable)._7_get_height.methodPtr)
                     (pUVar34,(pUVar34->klass->vtable)._7_get_height.method,
                      (ulong)(uint)((iVar21 + -1) % iVar22));
  iVar22 = (int)(__this->fields).movementScale;
  iVar21 = iVar21 + iVar22 + -1;
  height = iVar21 / iVar22;
  iVar21 = (*(pUVar34->klass->vtable)._5_get_width.methodPtr)
                     (pUVar34,(pUVar34->klass->vtable)._5_get_width.method,
                      (long)iVar21 % (long)iVar22 & 0xffffffff);
  pUStack_5d0 = (UnityEngine_Texture_o *)CONCAT44(pUStack_5d0._4_4_,iVar21 / width);
  __this_03 = (UnityEngine_Texture_o *)
              UnityEngine_RenderTexture__GetTemporary(width,height,0,iVar24,(MethodInfo *)0x0);
  pUVar26 = (UnityEngine_Texture_o *)
            UnityEngine_RenderTexture__GetTemporary(width,height,0,iVar24,(MethodInfo *)0x0);
  UnityEngine_Texture__set_filterMode(pUVar34,0,(MethodInfo *)0x0);
  if ((__this_03 == (UnityEngine_Texture_o *)0x0) ||
     (UnityEngine_Texture__set_filterMode(__this_03,0,(MethodInfo *)0x0),
     pUVar26 == (UnityEngine_Texture_o *)0x0)) goto LAB_04258f68;
  UnityEngine_Texture__set_filterMode(pUVar26,0,(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Object_o *)(__this->fields).dx11MotionBlurMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar20 = UnityEngine_Object__op_Implicit(pUVar14,(MethodInfo *)0x0);
  if ((char)bVar20 != '\0') {
    __this_00 = (UnityEngine_Texture_o *)(__this->fields).dx11MotionBlurMaterial;
    if (__this_00 == (UnityEngine_Texture_o *)0x0) goto LAB_04258f68;
    UnityEngine_Texture__set_filterMode(__this_00,0,(MethodInfo *)0x0);
  }
  UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)source,1,(MethodInfo *)0x0);
  UnityEngine_Texture__set_wrapMode(pUVar34,1,(MethodInfo *)0x0);
  UnityEngine_Texture__set_wrapMode(pUVar26,1,(MethodInfo *)0x0);
  pMVar33 = (MethodInfo *)0x1;
  UnityEngine_Texture__set_wrapMode(__this_03,1,(MethodInfo *)0x0);
  UnityStandardAssets_ImageEffects_CameraMotionBlur__CalculateViewProjection(__this,pMVar33);
  pUVar27 = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar27 == (UnityEngine_GameObject_o *)0x0) goto LAB_04258f68;
  pMVar33 = (MethodInfo *)0x0;
  bVar20 = UnityEngine_GameObject__get_activeInHierarchy(pUVar27,(MethodInfo *)0x0);
  if (((char)bVar20 != '\0') &&
     (*(char *)((long)&(__this->fields).prevStereoViewProjMat + 4) == '\0')) {
    UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember(__this,pMVar33);
  }
  pUVar27 = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar27 == (UnityEngine_GameObject_o *)0x0) goto LAB_04258f68;
  bVar20 = UnityEngine_GameObject__get_activeInHierarchy(pUVar27,(MethodInfo *)0x0);
  *(char *)((long)&(__this->fields).prevStereoViewProjMat + 4) = (char)bVar20;
  uStack_138._0_4_ = (__this->fields).showVelocity;
  uStack_138._4_4_ = (__this->fields).showVelocityScale;
  uStack_130._0_4_ = (__this->fields).currentViewProjMat.fields.m00;
  uStack_130._4_4_ = (__this->fields).currentViewProjMat.fields.m10;
  uStack_128._0_4_ = (__this->fields).currentViewProjMat.fields.m20;
  uStack_128._4_4_ = (__this->fields).currentViewProjMat.fields.m30;
  uStack_120._0_4_ = (__this->fields).currentViewProjMat.fields.m01;
  uStack_120._4_4_ = (__this->fields).currentViewProjMat.fields.m11;
  uStack_118._0_4_ = (__this->fields).currentViewProjMat.fields.m21;
  uStack_118._4_4_ = (__this->fields).currentViewProjMat.fields.m31;
  uStack_110._0_4_ = (__this->fields).currentViewProjMat.fields.m02;
  uStack_110._4_4_ = (__this->fields).currentViewProjMat.fields.m12;
  uStack_108._0_4_ = (__this->fields).currentViewProjMat.fields.m22;
  uStack_108._4_4_ = (__this->fields).currentViewProjMat.fields.m32;
  uStack_100._0_4_ = (__this->fields).currentViewProjMat.fields.m03;
  uStack_100._4_4_ = (__this->fields).currentViewProjMat.fields.m13;
  m.fields.m00 = (float)(__this->fields).showVelocity;
  m.fields.m10 = (__this->fields).showVelocityScale;
  m.fields.m20 = (__this->fields).currentViewProjMat.fields.m00;
  m.fields.m30 = (__this->fields).currentViewProjMat.fields.m10;
  m.fields.m01 = (__this->fields).currentViewProjMat.fields.m20;
  m.fields.m11 = (__this->fields).currentViewProjMat.fields.m30;
  m.fields.m21 = (__this->fields).currentViewProjMat.fields.m01;
  m.fields.m31 = (__this->fields).currentViewProjMat.fields.m11;
  m.fields.m02 = (__this->fields).currentViewProjMat.fields.m21;
  m.fields.m12 = (__this->fields).currentViewProjMat.fields.m31;
  m.fields.m22 = (__this->fields).currentViewProjMat.fields.m02;
  m.fields.m32 = (__this->fields).currentViewProjMat.fields.m12;
  m.fields.m03 = (__this->fields).currentViewProjMat.fields.m22;
  m.fields.m13 = (__this->fields).currentViewProjMat.fields.m32;
  m.fields.m23 = (__this->fields).currentViewProjMat.fields.m03;
  m.fields.m33 = (__this->fields).currentViewProjMat.fields.m13;
  UnityEngine_Matrix4x4__Inverse((UnityEngine_Matrix4x4_o *)apUStack_618,m,(MethodInfo *)0x0);
  uStack_3c8 = apUStack_618[6];
  uStack_3c0 = apUStack_618[7];
  uStack_3d8 = apUStack_618[4];
  uStack_3d0 = apUStack_618[5];
  uStack_3e8 = apUStack_618[2];
  uStack_3e0 = apUStack_618[3];
  pUStack_3f8 = apUStack_618[0];
  uStack_3f0 = apUStack_618[1];
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  value.fields._8_8_ = apUStack_618[1];
  value.fields._0_8_ = apUStack_618[0];
  value.fields._16_8_ = apUStack_618[2];
  value.fields._24_8_ = apUStack_618[3];
  value.fields._32_8_ = apUStack_618[4];
  value.fields._40_8_ = apUStack_618[5];
  value.fields._48_8_ = apUStack_618[6];
  value.fields._56_8_ = apUStack_618[7];
  UnityEngine_Material__SetMatrix(pUVar30,"_InvViewProj",value,(MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  ppUVar2 = &(__this->fields).currentStereoViewProjMat;
  apUStack_518[0] = *ppUVar2;
  apUStack_518[1]._0_4_ = (__this->fields).prevViewProjMat.fields.m00;
  apUStack_518[1]._4_4_ = (__this->fields).prevViewProjMat.fields.m10;
  apUStack_518[2]._0_4_ = (__this->fields).prevViewProjMat.fields.m20;
  apUStack_518[2]._4_4_ = (__this->fields).prevViewProjMat.fields.m30;
  apUStack_518[3]._0_4_ = (__this->fields).prevViewProjMat.fields.m01;
  apUStack_518[3]._4_4_ = (__this->fields).prevViewProjMat.fields.m11;
  apUStack_518[4]._0_4_ = (__this->fields).prevViewProjMat.fields.m21;
  apUStack_518[4]._4_4_ = (__this->fields).prevViewProjMat.fields.m31;
  apUStack_518[5]._0_4_ = (__this->fields).prevViewProjMat.fields.m02;
  apUStack_518[5]._4_4_ = (__this->fields).prevViewProjMat.fields.m12;
  apUStack_518[6]._0_4_ = (__this->fields).prevViewProjMat.fields.m22;
  apUStack_518[6]._4_4_ = (__this->fields).prevViewProjMat.fields.m32;
  apUStack_518[7]._0_4_ = (__this->fields).prevViewProjMat.fields.m03;
  apUStack_518[7]._4_4_ = (__this->fields).prevViewProjMat.fields.m13;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  ppUVar3 = &(__this->fields).currentStereoViewProjMat;
  UnityEngine_Material__SetMatrix
            (pUVar30,"_PrevViewProj",(UnityEngine_Matrix4x4_o)*(UnityEngine_Matrix4x4_Fields *)ppUVar2,
             (MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  rhs.fields.m20 = (float)uStack_3f0;
  rhs.fields.m30 = uStack_3f0._4_4_;
  rhs.fields._0_8_ = pUStack_3f8;
  rhs.fields.m01 = (float)uStack_3e8;
  rhs.fields.m11 = uStack_3e8._4_4_;
  rhs.fields.m21 = (float)uStack_3e0;
  rhs.fields.m31 = uStack_3e0._4_4_;
  rhs.fields.m02 = (float)uStack_3d8;
  rhs.fields.m12 = uStack_3d8._4_4_;
  rhs.fields.m22 = (float)uStack_3d0;
  rhs.fields.m32 = uStack_3d0._4_4_;
  rhs.fields.m03 = (float)uStack_3c8;
  rhs.fields.m13 = uStack_3c8._4_4_;
  rhs.fields.m23 = (float)uStack_3c0;
  rhs.fields.m33 = uStack_3c0._4_4_;
  UnityEngine_Matrix4x4__op_Multiply
            ((UnityEngine_Matrix4x4_o *)&UStack_458,
             (UnityEngine_Matrix4x4_o)*(UnityEngine_Matrix4x4_Fields *)ppUVar3,rhs,(MethodInfo *)0x0
            );
  UStack_4a8.m03 = UStack_458.m03;
  UStack_4a8.m13 = UStack_458.m13;
  UStack_4a8.m23 = UStack_458.m23;
  UStack_4a8.m33 = UStack_458.m33;
  UStack_4a8.m02 = UStack_458.m02;
  UStack_4a8.m12 = UStack_458.m12;
  UStack_4a8.m22 = UStack_458.m22;
  UStack_4a8.m32 = UStack_458.m32;
  UStack_4a8.m01 = UStack_458.m01;
  UStack_4a8.m11 = UStack_458.m11;
  UStack_4a8.m21 = UStack_458.m21;
  UStack_4a8.m31 = UStack_458.m31;
  UStack_4a8.m00 = UStack_458.m00;
  UStack_4a8.m10 = UStack_458.m10;
  UStack_4a8.m20 = UStack_458.m20;
  UStack_4a8.m30 = UStack_458.m30;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  value_00.fields.m20 = UStack_458.m20;
  value_00.fields.m30 = UStack_458.m30;
  value_00.fields.m00 = UStack_458.m00;
  value_00.fields.m10 = UStack_458.m10;
  value_00.fields.m01 = UStack_458.m01;
  value_00.fields.m11 = UStack_458.m11;
  value_00.fields.m21 = UStack_458.m21;
  value_00.fields.m31 = UStack_458.m31;
  value_00.fields.m02 = UStack_458.m02;
  value_00.fields.m12 = UStack_458.m12;
  value_00.fields.m22 = UStack_458.m22;
  value_00.fields.m32 = UStack_458.m32;
  value_00.fields.m03 = UStack_458.m03;
  value_00.fields.m13 = UStack_458.m13;
  value_00.fields.m23 = UStack_458.m23;
  value_00.fields.m33 = UStack_458.m33;
  uVar42 = UStack_458._0_8_;
  uVar43 = UStack_458._8_8_;
  uVar44 = UStack_458._16_8_;
  uVar45 = UStack_458._24_8_;
  uVar46 = UStack_458._32_8_;
  uVar47 = UStack_458._40_8_;
  uVar48 = UStack_458._48_8_;
  uVar49 = UStack_458._56_8_;
  UnityEngine_Material__SetMatrix(pUVar30,"_ToPrevViewProjCombined",value_00,(MethodInfo *)0x0);
  pUVar29 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
  if (pUVar29 == (UnityEngine_Camera_o *)0x0) goto LAB_04258f68;
  bVar20 = UnityEngine_Camera__get_stereoEnabled(pUVar29,(MethodInfo *)0x0);
  if ((char)bVar20 != '\0') {
    lVar28 = il2cpp_glue_02274930(TypeInfo_Matrix4x4);
    lVar15 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
    if (lVar15 == 0) goto LAB_04258f68;
    if (*(int *)(lVar15 + 0x18) == 0) goto LAB_04258f6d;
    pUVar1 = (UnityEngine_Matrix4x4_Fields *)(lVar15 + 0x20);
    uStack_178._0_4_ = pUVar1->m00;
    uStack_178._4_4_ = pUVar1->m10;
    uStack_170 = *(undefined8 *)(lVar15 + 0x28);
    uStack_168 = *(undefined8 *)(lVar15 + 0x30);
    uStack_160 = *(undefined8 *)(lVar15 + 0x38);
    uStack_158 = *(undefined8 *)(lVar15 + 0x40);
    uStack_150 = *(undefined8 *)(lVar15 + 0x48);
    uStack_148 = *(undefined8 *)(lVar15 + 0x50);
    uStack_140 = *(undefined8 *)(lVar15 + 0x58);
    UnityEngine_Matrix4x4__Inverse
              ((UnityEngine_Matrix4x4_o *)apUStack_618,(UnityEngine_Matrix4x4_o)*pUVar1,
               (MethodInfo *)0x0);
    apUStack_518[6] = apUStack_618[6];
    apUStack_518[7] = apUStack_618[7];
    apUStack_518[4] = apUStack_618[4];
    apUStack_518[5] = apUStack_618[5];
    apUStack_518[2] = apUStack_618[2];
    apUStack_518[3] = apUStack_618[3];
    apUStack_518[0] = apUStack_618[0];
    apUStack_518[1] = apUStack_618[1];
    if (lVar28 == 0) goto LAB_04258f68;
    if (*(int *)(lVar28 + 0x18) == 0) goto LAB_04258f6d;
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x50) = apUStack_618[6];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x58) = apUStack_618[7];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x40) = apUStack_618[4];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x48) = apUStack_618[5];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x30) = apUStack_618[2];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x38) = apUStack_618[3];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x20) = apUStack_618[0];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x28) = apUStack_618[1];
    lVar15 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
    if (lVar15 == 0) goto LAB_04258f68;
    if (*(uint *)(lVar15 + 0x18) < 2) {
LAB_04258f6d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar1 = (UnityEngine_Matrix4x4_Fields *)(lVar15 + 0x60);
    uStack_1b8._0_4_ = pUVar1->m00;
    uStack_1b8._4_4_ = pUVar1->m10;
    uStack_1b0 = *(undefined8 *)(lVar15 + 0x68);
    uStack_1a8 = *(undefined8 *)(lVar15 + 0x70);
    uStack_1a0 = *(undefined8 *)(lVar15 + 0x78);
    uStack_198 = *(undefined8 *)(lVar15 + 0x80);
    uStack_190 = *(undefined8 *)(lVar15 + 0x88);
    uStack_188 = *(undefined8 *)(lVar15 + 0x90);
    uStack_180 = *(undefined8 *)(lVar15 + 0x98);
    UnityEngine_Matrix4x4__Inverse
              ((UnityEngine_Matrix4x4_o *)apUStack_618,(UnityEngine_Matrix4x4_o)*pUVar1,
               (MethodInfo *)0x0);
    uStack_48 = apUStack_618[6];
    uStack_40 = apUStack_618[7];
    uStack_58 = apUStack_618[4];
    uStack_50 = apUStack_618[5];
    uStack_68 = apUStack_618[2];
    uStack_60 = apUStack_618[3];
    pUStack_78 = apUStack_618[0];
    uStack_70 = apUStack_618[1];
    if (*(uint *)(lVar28 + 0x18) < 2) goto LAB_04258f6d;
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x90) = apUStack_618[6];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x98) = apUStack_618[7];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x80) = apUStack_618[4];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x88) = apUStack_618[5];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x70) = apUStack_618[2];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x78) = apUStack_618[3];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x60) = apUStack_618[0];
    *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x68) = apUStack_618[1];
    lVar15 = *(long *)&(__this->fields).prevViewProjMat.fields.m23;
    if (lVar15 == 0) goto LAB_04258f68;
    if (*(int *)(lVar15 + 0x18) == 0) goto LAB_04258f6d;
    pUVar1 = (UnityEngine_Matrix4x4_Fields *)(lVar28 + 0x20);
    apUStack_618[0] = *(UnityEngine_Matrix4x4_array **)(lVar15 + 0x20);
    apUStack_618[1] = *(UnityEngine_Matrix4x4_array **)(lVar15 + 0x28);
    apUStack_618[2] = *(UnityEngine_Matrix4x4_array **)(lVar15 + 0x30);
    apUStack_618[3] = *(UnityEngine_Matrix4x4_array **)(lVar15 + 0x38);
    apUStack_618[4] = *(UnityEngine_Matrix4x4_array **)(lVar15 + 0x40);
    apUStack_618[5] = *(UnityEngine_Matrix4x4_array **)(lVar15 + 0x48);
    apUStack_618[6] = *(UnityEngine_Matrix4x4_array **)(lVar15 + 0x50);
    apUStack_618[7] = *(UnityEngine_Matrix4x4_array **)(lVar15 + 0x58);
    UStack_4a8.m00 = pUVar1->m00;
    UStack_4a8.m10 = pUVar1->m10;
    UStack_4a8._8_8_ = *(undefined8 *)(lVar28 + 0x28);
    UStack_4a8._16_8_ = *(undefined8 *)(lVar28 + 0x30);
    UStack_4a8._24_8_ = *(undefined8 *)(lVar28 + 0x38);
    UStack_4a8._32_8_ = *(undefined8 *)(lVar28 + 0x40);
    UStack_4a8._40_8_ = *(undefined8 *)(lVar28 + 0x48);
    UStack_4a8._48_8_ = *(undefined8 *)(lVar28 + 0x50);
    UStack_4a8._56_8_ = *(undefined8 *)(lVar28 + 0x58);
    UnityEngine_Matrix4x4__op_Multiply
              ((UnityEngine_Matrix4x4_o *)&UStack_458,
               (UnityEngine_Matrix4x4_o)*(UnityEngine_Matrix4x4_Fields *)(lVar15 + 0x20),
               (UnityEngine_Matrix4x4_o)*pUVar1,(MethodInfo *)0x0);
    UStack_f8.m03 = UStack_458.m03;
    UStack_f8.m13 = UStack_458.m13;
    UStack_f8.m23 = UStack_458.m23;
    UStack_f8.m33 = UStack_458.m33;
    UStack_f8.m02 = UStack_458.m02;
    UStack_f8.m12 = UStack_458.m12;
    UStack_f8.m22 = UStack_458.m22;
    UStack_f8.m32 = UStack_458.m32;
    UStack_f8.m01 = UStack_458.m01;
    UStack_f8.m11 = UStack_458.m11;
    UStack_f8.m21 = UStack_458.m21;
    UStack_f8.m31 = UStack_458.m31;
    UStack_f8.m00 = UStack_458.m00;
    UStack_f8.m10 = UStack_458.m10;
    UStack_f8.m20 = UStack_458.m20;
    UStack_f8.m30 = UStack_458.m30;
    pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
    if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
    value_01.fields.m20 = UStack_458.m20;
    value_01.fields.m30 = UStack_458.m30;
    value_01.fields.m00 = UStack_458.m00;
    value_01.fields.m10 = UStack_458.m10;
    value_01.fields.m01 = UStack_458.m01;
    value_01.fields.m11 = UStack_458.m11;
    value_01.fields.m21 = UStack_458.m21;
    value_01.fields.m31 = UStack_458.m31;
    value_01.fields.m02 = UStack_458.m02;
    value_01.fields.m12 = UStack_458.m12;
    value_01.fields.m22 = UStack_458.m22;
    value_01.fields.m32 = UStack_458.m32;
    value_01.fields.m03 = UStack_458.m03;
    value_01.fields.m13 = UStack_458.m13;
    value_01.fields.m23 = UStack_458.m23;
    value_01.fields.m33 = UStack_458.m33;
    UnityEngine_Material__SetMatrix(pUVar30,"_StereoToPrevViewProjCombined0",value_01,(MethodInfo *)0x0);
    lVar15 = *(long *)&(__this->fields).prevViewProjMat.fields.m23;
    if (lVar15 == 0) goto LAB_04258f68;
    if (*(uint *)(lVar15 + 0x18) < 2) goto LAB_04258f6d;
    pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
    pUVar1 = (UnityEngine_Matrix4x4_Fields *)(lVar15 + 0x60);
    uStack_1f8._0_4_ = pUVar1->m00;
    uStack_1f8._4_4_ = pUVar1->m10;
    uStack_1f0 = *(undefined8 *)(lVar15 + 0x68);
    uStack_1e8 = *(undefined8 *)(lVar15 + 0x70);
    uStack_1e0 = *(undefined8 *)(lVar15 + 0x78);
    uStack_1d8 = *(undefined8 *)(lVar15 + 0x80);
    uStack_1d0 = *(undefined8 *)(lVar15 + 0x88);
    uStack_1c8 = *(undefined8 *)(lVar15 + 0x90);
    uStack_1c0 = *(undefined8 *)(lVar15 + 0x98);
    if (*(uint *)(lVar28 + 0x18) < 2) goto LAB_04258f6d;
    pUVar32 = (UnityEngine_Matrix4x4_Fields *)(lVar28 + 0x60);
    uStack_238._0_4_ = pUVar32->m00;
    uStack_238._4_4_ = pUVar32->m10;
    uStack_230 = *(undefined8 *)(lVar28 + 0x68);
    uStack_228 = *(undefined8 *)(lVar28 + 0x70);
    uStack_220 = *(undefined8 *)(lVar28 + 0x78);
    uStack_218 = *(undefined8 *)(lVar28 + 0x80);
    uStack_210 = *(undefined8 *)(lVar28 + 0x88);
    uStack_208 = *(undefined8 *)(lVar28 + 0x90);
    uStack_200 = *(undefined8 *)(lVar28 + 0x98);
    UnityEngine_Matrix4x4__op_Multiply
              ((UnityEngine_Matrix4x4_o *)&UStack_b8,(UnityEngine_Matrix4x4_o)*pUVar1,
               (UnityEngine_Matrix4x4_o)*pUVar32,(MethodInfo *)0x0);
    UStack_278.m03 = UStack_b8.m03;
    UStack_278.m13 = UStack_b8.m13;
    UStack_278.m23 = UStack_b8.m23;
    UStack_278.m33 = UStack_b8.m33;
    UStack_278.m02 = UStack_b8.m02;
    UStack_278.m12 = UStack_b8.m12;
    UStack_278.m22 = UStack_b8.m22;
    UStack_278.m32 = UStack_b8.m32;
    UStack_278.m01 = UStack_b8.m01;
    UStack_278.m11 = UStack_b8.m11;
    UStack_278.m21 = UStack_b8.m21;
    UStack_278.m31 = UStack_b8.m31;
    UStack_278.m00 = UStack_b8.m00;
    UStack_278.m10 = UStack_b8.m10;
    UStack_278.m20 = UStack_b8.m20;
    UStack_278.m30 = UStack_b8.m30;
    if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
    value_02.fields.m20 = UStack_b8.m20;
    value_02.fields.m30 = UStack_b8.m30;
    value_02.fields.m00 = UStack_b8.m00;
    value_02.fields.m10 = UStack_b8.m10;
    value_02.fields.m01 = UStack_b8.m01;
    value_02.fields.m11 = UStack_b8.m11;
    value_02.fields.m21 = UStack_b8.m21;
    value_02.fields.m31 = UStack_b8.m31;
    value_02.fields.m02 = UStack_b8.m02;
    value_02.fields.m12 = UStack_b8.m12;
    value_02.fields.m22 = UStack_b8.m22;
    value_02.fields.m32 = UStack_b8.m32;
    value_02.fields.m03 = UStack_b8.m03;
    value_02.fields.m13 = UStack_b8.m13;
    value_02.fields.m23 = UStack_b8.m23;
    value_02.fields.m33 = UStack_b8.m33;
    UnityEngine_Material__SetMatrix(pUVar30,"_StereoToPrevViewProjCombined1",value_02,(MethodInfo *)0x0);
    pUVar34 = pUStack_588;
    uVar42 = UStack_b8._0_8_;
    uVar43 = UStack_b8._8_8_;
    uVar44 = UStack_b8._16_8_;
    uVar45 = UStack_b8._24_8_;
    uVar46 = UStack_b8._32_8_;
    uVar47 = UStack_b8._40_8_;
    uVar48 = UStack_b8._48_8_;
    uVar49 = UStack_b8._56_8_;
  }
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  fStack_56c = (float)(int)pUStack_5d0;
  UnityEngine_Material__SetFloat(pUVar30,"_MaxVelocity",fStack_56c,(MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  UnityEngine_Material__SetFloat(pUVar30,"_MaxRadiusOrKInPaper",fStack_56c,(MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  UnityEngine_Material__SetFloat
            (pUVar30,"_MinVelocity",(__this->fields).rotationScale,(MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  UnityEngine_Material__SetFloat
            (pUVar30,"_VelocityScale",(__this->fields).maxVelocity,(MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  UnityEngine_Material__SetFloat
            (pUVar30,"_Jitter",*(float *)&(__this->fields).noiseTexture,(MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  UnityEngine_Material__SetTexture
            (pUVar30,"_NoiseTex",(UnityEngine_Texture_o *)(__this->fields).dx11MotionBlurMaterial,
             (MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  pUStack_5d0 = pUVar26;
  UnityEngine_Material__SetTexture(pUVar30,"_VelTex",pUVar34,(MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  UnityEngine_Material__SetTexture(pUVar30,"_NeighbourMaxTex",pUStack_5d0,(MethodInfo *)0x0);
  pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
  if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
  UnityEngine_Material__SetTexture(pUVar30,"_TileTexDebug",__this_03,(MethodInfo *)0x0);
  if (*(char *)((long)&(__this->fields).createdMaterials + 4) != '\0') {
    pUVar29 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar29 == (UnityEngine_Camera_o *)0x0) goto LAB_04258f68;
    UnityEngine_Camera__get_worldToCameraMatrix
              ((UnityEngine_Matrix4x4_o *)apUStack_618,pUVar29,(MethodInfo *)0x0);
    uStack_308 = apUStack_618[6];
    uStack_300 = apUStack_618[7];
    uStack_318 = apUStack_618[4];
    uStack_310 = apUStack_618[5];
    uStack_328 = apUStack_618[2];
    uStack_320 = apUStack_618[3];
    pUStack_338 = apUStack_618[0];
    uStack_330 = apUStack_618[1];
    if (DAT_05705284 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Matrix4x4);
      DAT_05705284 = '\x01';
    }
    auVar38 = _auStack_5c8;
    lVar15 = *(long *)(TypeInfo_Matrix4x4 + 0xb8);
    MStack_3b8.methodPointer = *(Il2CppMethodPointer *)(lVar15 + 0x40);
    MStack_3b8.virtualMethodPointer = *(Il2CppMethodPointer *)(lVar15 + 0x48);
    MStack_3b8.invoker_method = *(InvokerMethod *)(lVar15 + 0x50);
    MStack_3b8.name = *(char **)(lVar15 + 0x58);
    MStack_3b8.klass = *(Il2CppClass **)(lVar15 + 0x60);
    MStack_3b8.return_type = *(Il2CppType **)(lVar15 + 0x68);
    MStack_3b8.parameters = *(Il2CppType ***)(lVar15 + 0x70);
    MStack_3b8.field7_0x38 = *(_union_13 *)(lVar15 + 0x78);
    fVar4 = (float)(__this->fields).filterType;
    fVar10 = (float)(__this->fields).preview;
    auStack_5c8._4_4_ = fVar10;
    auStack_5c8._0_4_ = fVar4;
    fVar36 = (__this->fields).previewScale.fields.x;
    uVar31._0_4_ = 0.0;
    uVar31._4_4_ = 0.0;
    if (DAT_056fde1e == '\0') {
      _fStack_5c0 = 0;
      fStack_5a8 = fVar36;
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
      fVar4 = (float)auStack_5c8._0_4_;
      fVar10 = (float)auStack_5c8._4_4_;
      uVar31._0_4_ = fStack_5c0;
      uVar31._4_4_ = fStack_5bc;
      fVar36 = fStack_5a8;
      auVar38 = _auStack_5c8;
    }
    _auStack_5c8 = auVar38;
    uVar37 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    uVar8 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    uVar9._0_4_ = fVar4 * 0.3333;
    uVar9._4_4_ = fVar10 * 0.3333;
    fVar12 = fVar36 * 0.3333;
    if (DAT_056fe077 == '\0') {
      auStack_5c8._4_4_ = fVar10 * 0.3333;
      auStack_5c8._0_4_ = fVar4 * 0.3333;
      fStack_5c0 = (float)uVar31 * 0.0;
      fStack_5bc = uVar31._4_4_ * 0.0;
      uStack_530 = 0;
      fStack_5a8 = fVar36 * 0.3333;
      uStack_538 = uVar37;
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
      uVar9._0_4_ = (float)auStack_5c8._0_4_;
      uVar9._4_4_ = (float)auStack_5c8._4_4_;
      fVar12 = fStack_5a8;
      uVar37 = uStack_538;
    }
    __this_02.fields.m20 = (float)uVar43;
    __this_02.fields.m30 = SUB84(uVar43,4);
    __this_02.fields.m00 = (float)uVar42;
    __this_02.fields.m10 = SUB84(uVar42,4);
    __this_02.fields.m01 = (float)uVar44;
    __this_02.fields.m11 = SUB84(uVar44,4);
    __this_02.fields.m21 = (float)uVar45;
    __this_02.fields.m31 = SUB84(uVar45,4);
    __this_02.fields.m02 = (float)uVar46;
    __this_02.fields.m12 = SUB84(uVar46,4);
    __this_02.fields.m22 = (float)uVar47;
    __this_02.fields.m32 = SUB84(uVar47,4);
    __this_02.fields.m03 = (float)uVar48;
    __this_02.fields.m13 = SUB84(uVar48,4);
    __this_02.fields.m23 = (float)uVar49;
    __this_02.fields.m33 = SUB84(uVar49,4);
    UVar41.fields.y = uVar9._4_4_;
    UVar41.fields.x = (float)uVar9;
    UVar41.fields.z = fVar12;
    q.fields._8_8_ = uVar8;
    q.fields.x = (float)(int)uVar37;
    q.fields.y = (float)(int)((ulong)uVar37 >> 0x20);
    UnityEngine_Matrix4x4__SetTRS
              (__this_02,UVar41,q,
               (UnityEngine_Vector3_o)
               *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),&MStack_3b8);
    pUVar29 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar29 == (UnityEngine_Camera_o *)0x0) goto LAB_04258f68;
    UnityEngine_Camera__get_projectionMatrix
              ((UnityEngine_Matrix4x4_o *)apUStack_618,pUVar29,(MethodInfo *)0x0);
    uStack_288 = apUStack_618[6];
    uStack_280 = apUStack_618[7];
    uStack_298 = apUStack_618[4];
    uStack_290 = apUStack_618[5];
    uStack_2a8 = apUStack_618[2];
    uStack_2a0 = apUStack_618[3];
    pUStack_2b8 = apUStack_618[0];
    uStack_2b0 = apUStack_618[1];
    proj.fields._8_8_ = apUStack_618[1];
    proj.fields._0_8_ = apUStack_618[0];
    proj.fields._16_8_ = apUStack_618[2];
    proj.fields._24_8_ = apUStack_618[3];
    proj.fields._32_8_ = apUStack_618[4];
    proj.fields._40_8_ = apUStack_618[5];
    proj.fields._48_8_ = apUStack_618[6];
    proj.fields._56_8_ = apUStack_618[7];
    UnityEngine_GL__GetGPUProjectionMatrix
              ((UnityEngine_Matrix4x4_o *)apUStack_618,proj,1,(MethodInfo *)0x0);
    uStack_348 = apUStack_618[6];
    uStack_340 = apUStack_618[7];
    uStack_358 = apUStack_618[4];
    uStack_350 = apUStack_618[5];
    MStack_3b8._80_8_ = apUStack_618[2];
    uStack_360 = apUStack_618[3];
    MStack_3b8.field8_0x40.genericMethod = apUStack_618[0];
    MStack_3b8._72_8_ = apUStack_618[1];
    lhs.fields._8_8_ = apUStack_618[1];
    lhs.fields._0_8_ = apUStack_618[0];
    lhs.fields._16_8_ = apUStack_618[2];
    lhs.fields._24_8_ = apUStack_618[3];
    lhs.fields._32_8_ = apUStack_618[4];
    lhs.fields._40_8_ = apUStack_618[5];
    lhs.fields._48_8_ = apUStack_618[6];
    lhs.fields._56_8_ = apUStack_618[7];
    rhs_00.fields._8_8_ = MStack_3b8.virtualMethodPointer;
    rhs_00.fields._0_8_ = MStack_3b8.methodPointer;
    rhs_00.fields._16_8_ = MStack_3b8.invoker_method;
    rhs_00.fields._24_8_ = MStack_3b8.name;
    rhs_00.fields._32_8_ = MStack_3b8.klass;
    rhs_00.fields._40_8_ = MStack_3b8.return_type;
    rhs_00.fields._48_8_ = MStack_3b8.parameters;
    rhs_00.fields._56_8_ = MStack_3b8.field7_0x38.rgctx_data;
    UnityEngine_Matrix4x4__op_Multiply
              ((UnityEngine_Matrix4x4_o *)apUStack_618,lhs,rhs_00,(MethodInfo *)0x0);
    uStack_2c8 = apUStack_618[6];
    uStack_2c0 = apUStack_618[7];
    uStack_2d8 = apUStack_618[4];
    uStack_2d0 = apUStack_618[5];
    uStack_2e8 = apUStack_618[2];
    uStack_2e0 = apUStack_618[3];
    pUStack_2f8 = apUStack_618[0];
    uStack_2f0 = apUStack_618[1];
    lhs_00.fields._8_8_ = apUStack_618[1];
    lhs_00.fields._0_8_ = apUStack_618[0];
    lhs_00.fields._16_8_ = apUStack_618[2];
    lhs_00.fields._24_8_ = apUStack_618[3];
    lhs_00.fields._32_8_ = apUStack_618[4];
    lhs_00.fields._40_8_ = apUStack_618[5];
    lhs_00.fields._48_8_ = apUStack_618[6];
    lhs_00.fields._56_8_ = apUStack_618[7];
    rhs_01.fields.m20 = (float)uStack_330;
    rhs_01.fields.m30 = uStack_330._4_4_;
    rhs_01.fields._0_8_ = pUStack_338;
    rhs_01.fields.m01 = (float)uStack_328;
    rhs_01.fields.m11 = uStack_328._4_4_;
    rhs_01.fields.m21 = (float)uStack_320;
    rhs_01.fields.m31 = uStack_320._4_4_;
    rhs_01.fields.m02 = (float)uStack_318;
    rhs_01.fields.m12 = uStack_318._4_4_;
    rhs_01.fields.m22 = (float)uStack_310;
    rhs_01.fields.m32 = uStack_310._4_4_;
    rhs_01.fields.m03 = (float)uStack_308;
    rhs_01.fields.m13 = uStack_308._4_4_;
    rhs_01.fields.m23 = (float)uStack_300;
    rhs_01.fields.m33 = uStack_300._4_4_;
    UnityEngine_Matrix4x4__op_Multiply
              ((UnityEngine_Matrix4x4_o *)apUStack_518,lhs_00,rhs_01,(MethodInfo *)0x0);
    apUStack_618[6] = apUStack_518[6];
    apUStack_618[7] = apUStack_518[7];
    apUStack_618[4] = apUStack_518[4];
    apUStack_618[5] = apUStack_518[5];
    apUStack_618[2] = apUStack_518[2];
    apUStack_618[3] = apUStack_518[3];
    apUStack_618[0] = apUStack_518[0];
    apUStack_618[1] = apUStack_518[1];
    *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields.m22 = apUStack_518[6];
    *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields.m03 = apUStack_518[7];
    *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields.m21 = apUStack_518[4];
    *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields.m02 = apUStack_518[5];
    *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields.m20 = apUStack_518[2];
    *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields.m01 = apUStack_518[3];
    *ppUVar3 = apUStack_518[0];
    *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields = apUStack_518[1];
    pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
    if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
    value_03.fields._8_8_ = apUStack_518[1];
    value_03.fields._0_8_ = apUStack_518[0];
    value_03.fields._16_8_ = apUStack_518[2];
    value_03.fields._24_8_ = apUStack_518[3];
    value_03.fields._32_8_ = apUStack_518[4];
    value_03.fields._40_8_ = apUStack_518[5];
    value_03.fields._48_8_ = apUStack_518[6];
    value_03.fields._56_8_ = apUStack_518[7];
    UnityEngine_Material__SetMatrix(pUVar30,"_PrevViewProj",value_03,(MethodInfo *)0x0);
    pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
    rhs_02.fields.m20 = (float)uStack_3f0;
    rhs_02.fields.m30 = uStack_3f0._4_4_;
    rhs_02.fields._0_8_ = pUStack_3f8;
    rhs_02.fields.m01 = (float)uStack_3e8;
    rhs_02.fields.m11 = uStack_3e8._4_4_;
    rhs_02.fields.m21 = (float)uStack_3e0;
    rhs_02.fields.m31 = uStack_3e0._4_4_;
    rhs_02.fields.m02 = (float)uStack_3d8;
    rhs_02.fields.m12 = uStack_3d8._4_4_;
    rhs_02.fields.m22 = (float)uStack_3d0;
    rhs_02.fields.m32 = uStack_3d0._4_4_;
    rhs_02.fields.m03 = (float)uStack_3c8;
    rhs_02.fields.m13 = uStack_3c8._4_4_;
    rhs_02.fields.m23 = (float)uStack_3c0;
    rhs_02.fields.m33 = uStack_3c0._4_4_;
    UnityEngine_Matrix4x4__op_Multiply
              ((UnityEngine_Matrix4x4_o *)&UStack_458,
               (UnityEngine_Matrix4x4_o)*(UnityEngine_Matrix4x4_Fields *)ppUVar3,rhs_02,
               (MethodInfo *)0x0);
    UStack_4a8.m03 = UStack_458.m03;
    UStack_4a8.m13 = UStack_458.m13;
    UStack_4a8.m23 = UStack_458.m23;
    UStack_4a8.m33 = UStack_458.m33;
    UStack_4a8.m02 = UStack_458.m02;
    UStack_4a8.m12 = UStack_458.m12;
    UStack_4a8.m22 = UStack_458.m22;
    UStack_4a8.m32 = UStack_458.m32;
    UStack_4a8.m01 = UStack_458.m01;
    UStack_4a8.m11 = UStack_458.m11;
    UStack_4a8.m21 = UStack_458.m21;
    UStack_4a8.m31 = UStack_458.m31;
    UStack_4a8.m00 = UStack_458.m00;
    UStack_4a8.m10 = UStack_458.m10;
    UStack_4a8.m20 = UStack_458.m20;
    UStack_4a8.m30 = UStack_458.m30;
    if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
    value_04.fields.m20 = UStack_458.m20;
    value_04.fields.m30 = UStack_458.m30;
    value_04.fields.m00 = UStack_458.m00;
    value_04.fields.m10 = UStack_458.m10;
    value_04.fields.m01 = UStack_458.m01;
    value_04.fields.m11 = UStack_458.m11;
    value_04.fields.m21 = UStack_458.m21;
    value_04.fields.m31 = UStack_458.m31;
    value_04.fields.m02 = UStack_458.m02;
    value_04.fields.m12 = UStack_458.m12;
    value_04.fields.m22 = UStack_458.m22;
    value_04.fields.m32 = UStack_458.m32;
    value_04.fields.m03 = UStack_458.m03;
    value_04.fields.m13 = UStack_458.m13;
    value_04.fields.m23 = UStack_458.m23;
    value_04.fields.m33 = UStack_458.m33;
    UnityEngine_Material__SetMatrix(pUVar30,"_ToPrevViewProjCombined",value_04,(MethodInfo *)0x0);
  }
  if (*(int *)&(__this->fields).createdMaterials == 0) {
    if (DAT_05705285 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector4);
      DAT_05705285 = '\x01';
    }
    auStack_408._8_8_ = 0;
    auStack_408._0_8_ = *(ulong *)(*(long *)(TypeInfo_Vector4 + 0xb8) + 8);
    pUVar25 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto LAB_04258f68;
    UVar41 = UnityEngine_Transform__get_up(pUVar25,(MethodInfo *)0x0);
    auStack_548._8_4_ = extraout_XMM0_Dc;
    auStack_548._0_8_ = UVar41.fields._0_8_;
    auStack_548._12_4_ = extraout_XMM0_Dd;
    fVar36 = UVar41.fields.z;
    if (DAT_056fde1f == '\0') {
      auStack_5c8._0_4_ = UVar41.fields.z;
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
      fVar36 = (float)auStack_5c8._0_4_;
    }
    uStack_558 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    uStack_550 = 0;
    auStack_5c8._0_4_ = fVar36 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    uVar5 = (__this->fields).prevFrameUp.fields.y;
    uVar11 = (__this->fields).prevFrameUp.fields.z;
    uStack_5a0 = 0;
    uStack_59c = 0;
    uStack_538 = CONCAT44(uStack_538._4_4_,(__this->fields).prevFramePos.fields.x);
    fStack_5a8 = (float)uVar5;
    fStack_5a4 = (float)uVar11;
    pUVar25 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto LAB_04258f68;
    UVar41 = UnityEngine_Transform__get_position(pUVar25,(MethodInfo *)0x0);
    auVar38._0_8_ = UVar41.fields._0_8_;
    auVar38._8_4_ = extraout_XMM0_Dc_00;
    auVar38._12_4_ = extraout_XMM0_Dd_00;
    fStack_4b8 = fStack_5a4;
    fStack_4b4 = fStack_5a4;
    uStack_4b0 = uStack_5a0;
    uStack_4ac = uStack_59c;
    if (DAT_056fde1c == '\0') {
      auStack_598 = auVar38;
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      auVar38 = auStack_598;
    }
    fStack_5a8 = fStack_5a8 - auVar38._0_4_;
    fStack_4b8 = fStack_4b8 - UVar41.fields.y;
    fVar36 = (float)uStack_538 - UVar41.fields.z;
    uStack_538 = CONCAT44(uStack_538._4_4_,fVar36);
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_init_class();
      fVar36 = (float)uStack_538;
    }
    fStack_570 = fVar36 * fVar36 + fStack_4b8 * fStack_4b8 + fStack_5a8 * fStack_5a8;
    if (fStack_570 < 0.0) {
      fStack_570 = sqrtf(fStack_570);
    }
    else {
      fStack_570 = SQRT(fStack_570);
    }
    pUVar25 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto LAB_04258f68;
    UVar41 = UnityEngine_Transform__get_up(pUVar25,(MethodInfo *)0x0);
    fVar10 = UVar41.fields.z;
    fVar4 = UVar41.fields.y;
    uVar31._0_4_ = (__this->fields).prevFrameForward.fields.y;
    uVar31._4_4_ = (__this->fields).prevFrameForward.fields.z;
    uStack_560._0_4_ = 0;
    uStack_560._4_4_ = 0;
    fVar36 = (__this->fields).prevFrameUp.fields.x;
    uStack_560 = 0;
    auStack_5b4._4_4_ = extraout_XMM0_Dc_01;
    _auStack_5b8 = UVar41.fields._0_8_;
    auStack_5b4._8_4_ = extraout_XMM0_Dd_01;
    auVar6 = (undefined1  [4])UVar41.fields.x;
    uStack_568 = uVar31;
    if (DAT_0570266a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_0570266a = '\x01';
      auVar6 = auStack_5b8;
      uVar31._0_4_ = (float)uStack_568;
      uVar31._4_4_ = uStack_568._4_4_;
    }
    fVar12 = fVar10 * fVar10 + fVar4 * fVar4 + (float)auVar6 * (float)auVar6;
    auStack_4c8._4_4_ = uVar31._4_4_;
    auStack_4c8._0_4_ = uVar31._4_4_;
    auStack_4c8._8_4_ = (undefined4)uStack_560;
    auStack_4c8._12_4_ = uStack_560._4_4_;
    uVar31._4_4_ = fVar36 * fVar36 + uVar31._4_4_ * uVar31._4_4_ + (float)uVar31 * (float)uVar31;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      auStack_598._0_4_ = fVar12;
      auStack_4d8._0_4_ = uVar31._4_4_;
      il2cpp_init_class();
      uVar31._4_4_ = (float)auStack_4d8._0_4_;
      fVar12 = (float)auStack_598._0_4_;
      uVar31._0_4_ = (float)uStack_568;
    }
    fVar12 = fVar12 * uVar31._4_4_;
    auVar17._12_4_ = 0;
    auVar17._0_12_ = auStack_598._4_12_;
    auStack_598 = auVar17 << 0x20;
    if (fVar12 < 0.0) {
      fVar12 = sqrtf(fVar12);
      uVar31._0_4_ = (float)uStack_568;
      pMVar33 = TypeInfo_Math;
    }
    else {
      fVar12 = SQRT(fVar12);
      pMVar33 = TypeInfo_Math;
    }
    TypeInfo_Math = pMVar33;
    if (1e-15 <= fVar12) {
      fVar12 = (fVar10 * fVar36 +
               (float)auStack_4c8._0_4_ * fVar4 + (float)uVar31 * (float)auStack_5b8) / fVar12;
      fVar36 = 1.0;
      if (fVar12 <= 1.0) {
        fVar36 = fVar12;
      }
      if (*(int *)((long)&pMVar33[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      dVar16 = acos((double)(float)(~-(uint)(-1.0 <= fVar12) & 0xbf800000 |
                                   (uint)fVar36 & -(uint)(-1.0 <= fVar12)),pMVar33);
      auStack_598._0_4_ = (float)dVar16 * 57.29578;
    }
    pUVar29 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar29 == (UnityEngine_Camera_o *)0x0) goto LAB_04258f68;
    fVar36 = UnityEngine_Camera__get_fieldOfView(pUVar29,(MethodInfo *)0x0);
    iVar21 = (*(source->klass->vtable)._5_get_width.methodPtr)();
    auStack_598 = ZEXT416((uint)((float)iVar21 * 0.75 * ((float)auStack_598._0_4_ / fVar36) *
                                (__this->fields).previewScale.fields.z));
    pUVar25 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto LAB_04258f68;
    UVar41 = UnityEngine_Transform__get_forward(pUVar25,(MethodInfo *)0x0);
    uVar31._0_4_ = UVar41.fields.z;
    fVar10 = UVar41.fields.y;
    auVar6 = (undefined1  [4])(__this->fields).prevFrameCount;
    fVar12 = (float)(__this->fields).wasActive;
    auStack_5b4._0_4_ = fVar12;
    auStack_5b8 = auVar6;
    fVar36 = (__this->fields).prevFrameForward.fields.x;
    auStack_5b4._4_8_ = 0;
    auStack_4c8._8_4_ = extraout_XMM0_Dc_02;
    auStack_4c8._0_8_ = UVar41.fields._0_8_;
    auStack_4c8._12_4_ = extraout_XMM0_Dd_02;
    fVar4 = UVar41.fields.x;
    uVar39 = 0;
    uVar40 = 0;
    if (DAT_0570266a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_0570266a = '\x01';
      fVar4 = (float)auStack_4c8._0_4_;
      auVar6 = auStack_5b8;
      fVar12 = (float)auStack_5b4._0_4_;
      uVar39 = auStack_5b4._4_4_;
      uVar40 = auStack_5b4._8_4_;
    }
    fVar4 = (float)uVar31 * (float)uVar31 + fVar10 * fVar10 + fVar4 * fVar4;
    auStack_4d8._4_4_ = fVar12;
    auStack_4d8._0_4_ = fVar12;
    auStack_4d8._8_4_ = uVar39;
    auStack_4d8._12_4_ = uVar40;
    uVar31._4_4_ = fVar36 * fVar36 + fVar12 * fVar12 + (float)auVar6 * (float)auVar6;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      uStack_568 = CONCAT44(uStack_568._4_4_,fVar4);
      auStack_418._0_4_ = uVar31._4_4_;
      il2cpp_init_class();
      uVar31._4_4_ = (float)auStack_418._0_4_;
      auVar6 = auStack_5b8;
      fVar4 = (float)uStack_568;
    }
    fVar4 = fVar4 * uVar31._4_4_;
    uStack_568 = uStack_568 & 0xffffffff00000000;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
      auVar6 = auStack_5b8;
      pMVar33 = TypeInfo_Math;
    }
    else {
      fVar4 = SQRT(fVar4);
      pMVar33 = TypeInfo_Math;
    }
    TypeInfo_Math = pMVar33;
    if (1e-15 <= fVar4) {
      fVar4 = ((float)uVar31 * fVar36 +
              (float)auStack_4d8._0_4_ * fVar10 + (float)auVar6 * (float)auStack_4c8._0_4_) / fVar4;
      fVar36 = 1.0;
      if (fVar4 <= 1.0) {
        fVar36 = fVar4;
      }
      if (*(int *)((long)&pMVar33[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      dVar16 = acos((double)(float)(~-(uint)(-1.0 <= fVar4) & 0xbf800000 |
                                   (uint)fVar36 & -(uint)(-1.0 <= fVar4)),pMVar33);
      uStack_568 = CONCAT44(uStack_568._4_4_,(float)dVar16 * 57.29578);
    }
    pUVar29 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar29 == (UnityEngine_Camera_o *)0x0) goto LAB_04258f68;
    auStack_5c8._0_4_ =
         (float)auStack_5c8._0_4_ +
         uStack_558._4_4_ * (float)auStack_548._4_4_ + (float)auStack_548._0_4_ * (float)uStack_558;
    fVar36 = UnityEngine_Camera__get_fieldOfView(pUVar29,(MethodInfo *)0x0);
    auStack_4c8._0_4_ = fVar36;
    iVar21 = (*(source->klass->vtable)._5_get_width.methodPtr)();
    fStack_624 = (__this->fields).previewScale.fields.z * (float)auStack_5c8._0_4_;
    pUVar25 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto LAB_04258f68;
    UVar41 = UnityEngine_Transform__get_forward(pUVar25,(MethodInfo *)0x0);
    uVar31._0_4_ = UVar41.fields.z;
    fVar10 = UVar41.fields.y;
    uVar9._0_4_ = (float)(__this->fields).prevFrameCount;
    uVar9._4_4_ = (float)(__this->fields).wasActive;
    uStack_550._0_4_ = 0;
    uStack_550._4_4_ = 0;
    fVar36 = (__this->fields).prevFrameForward.fields.x;
    auStack_548._0_4_ = fVar36;
    uStack_550 = 0;
    auStack_4d8._8_4_ = extraout_XMM0_Dc_03;
    auStack_4d8._0_8_ = UVar41.fields._0_8_;
    auStack_4d8._12_4_ = extraout_XMM0_Dd_03;
    fVar4 = UVar41.fields.x;
    uStack_558 = uVar9;
    if (DAT_0570266a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_0570266a = '\x01';
      fVar4 = (float)auStack_4d8._0_4_;
      fVar36 = (float)auStack_548._0_4_;
      uVar9._0_4_ = (float)uStack_558;
      uVar9._4_4_ = uStack_558._4_4_;
    }
    auVar6 = (undefined1  [4])((float)uVar31 * (float)uVar31 + fVar10 * fVar10 + fVar4 * fVar4);
    auStack_418._4_4_ = uVar9._4_4_;
    auStack_418._0_4_ = uVar9._4_4_;
    auStack_418._8_4_ = (undefined4)uStack_550;
    auStack_418._12_4_ = uStack_550._4_4_;
    fVar4 = fVar36 * fVar36 + uVar9._4_4_ * uVar9._4_4_ + (float)uVar9 * (float)uVar9;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      auStack_5b8 = auVar6;
      fStack_51c = fVar4;
      il2cpp_init_class();
      fVar4 = fStack_51c;
      fVar36 = (float)auStack_548._0_4_;
      uVar9._0_4_ = (float)uStack_558;
      auVar6 = auStack_5b8;
    }
    fVar4 = (float)auVar6 * fVar4;
    auVar18._12_4_ = 0;
    auVar18._0_12_ = auStack_5b4;
    _auStack_5b8 = auVar18 << 0x20;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
      uVar9._0_4_ = (float)uStack_558;
      fVar36 = (float)auStack_548._0_4_;
      pMVar33 = TypeInfo_Math;
    }
    else {
      fVar4 = SQRT(fVar4);
      pMVar33 = TypeInfo_Math;
    }
    TypeInfo_Math = pMVar33;
    if (1e-15 <= fVar4) {
      fVar4 = ((float)uVar31 * fVar36 +
              (float)auStack_418._0_4_ * fVar10 + (float)uVar9 * (float)auStack_4d8._0_4_) / fVar4;
      fVar36 = 1.0;
      if (fVar4 <= 1.0) {
        fVar36 = fVar4;
      }
      if (*(int *)((long)&pMVar33[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      dVar16 = acos((double)(float)(~-(uint)(-1.0 <= fVar4) & 0xbf800000 |
                                   (uint)fVar36 & -(uint)(-1.0 <= fVar4)),pMVar33);
      auStack_5b8 = (undefined1  [4])((float)dVar16 * 57.29578);
    }
    pUVar29 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar29 == (UnityEngine_Camera_o *)0x0) goto LAB_04258f68;
    fStack_624 = fStack_624 * (float)iVar21 * 0.75 * ((float)uStack_568 / (float)auStack_4c8._0_4_);
    fStack_628 = (float)auStack_598._0_4_;
    fVar36 = UnityEngine_Camera__get_fieldOfView(pUVar29,(MethodInfo *)0x0);
    iVar21 = (*(source->klass->vtable)._5_get_width.methodPtr)(source);
    auStack_658._0_4_ =
         (1.0 - (float)auStack_5c8._0_4_) * (__this->fields).previewScale.fields.z *
         (float)iVar21 * 0.75 * ((float)auStack_5b8 / fVar36);
    auStack_658._4_4_ = auStack_408._4_4_;
    uStack_650 = auStack_408._8_4_;
    uStack_64c = auStack_408._12_4_;
    if ((**(float **)(TypeInfo_Mathf + 0xb8) < fStack_570) &&
       (fVar36 = (__this->fields).previewScale.fields.y, **(float **)(TypeInfo_Mathf + 0xb8) < fVar36)
       ) {
      auStack_408 = _auStack_658;
      pUVar25 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto LAB_04258f68;
      UVar41 = UnityEngine_Transform__get_forward(pUVar25,(MethodInfo *)0x0);
      auStack_5b4._4_4_ = extraout_XMM0_Dc_04;
      _auStack_5b8 = UVar41.fields._0_8_;
      auStack_5b4._8_4_ = extraout_XMM0_Dd_04;
      uStack_568 = CONCAT44(uStack_568._4_4_,UVar41.fields.z);
      iVar21 = (*(source->klass->vtable)._5_get_width.methodPtr)(source);
      fVar4 = (__this->fields).previewScale.fields.y;
      pUVar25 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto LAB_04258f68;
      UVar41 = UnityEngine_Transform__get_up(pUVar25,(MethodInfo *)0x0);
      auStack_548._8_4_ = extraout_XMM0_Dc_05;
      auStack_548._0_8_ = UVar41.fields._0_8_;
      auStack_548._12_4_ = extraout_XMM0_Dd_05;
      uStack_558 = CONCAT44(uStack_558._4_4_,UVar41.fields.z);
      iVar22 = (*(source->klass->vtable)._5_get_width.methodPtr)(source);
      auStack_5c8._0_4_ = (__this->fields).previewScale.fields.y;
      pUVar25 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto LAB_04258f68;
      auStack_658._4_4_ =
           (float)iVar21 * 0.5 *
           fVar36 * ((float)uStack_568 * (float)uStack_538 +
                    (float)auStack_5b4._0_4_ * fStack_4b8 + fStack_5a8 * (float)auStack_5b8);
      auStack_658._0_4_ = auStack_408._0_4_;
      uStack_650 = auStack_408._8_4_;
      uStack_64c = auStack_408._12_4_;
      auStack_598._0_4_ =
           auStack_598._0_4_ +
           (float)iVar22 * 0.5 *
           fVar4 * ((float)auStack_548._4_4_ * fStack_4b8 + (float)auStack_548._0_4_ * fStack_5a8 +
                   (float)uStack_558 * (float)uStack_538);
      UVar41 = UnityEngine_Transform__get_right(pUVar25,(MethodInfo *)0x0);
      auStack_5c8._0_4_ =
           (float)auStack_5c8._0_4_ *
           (UVar41.fields.z * (float)uStack_538 +
           UVar41.fields.y * fStack_4b8 + fStack_5a8 * UVar41.fields.x);
      iVar21 = (*(source->klass->vtable)._5_get_width.methodPtr)(source);
      fStack_624 = fStack_624 + (float)iVar21 * 0.5 * (float)auStack_5c8._0_4_;
      fStack_628 = (float)auStack_598._0_4_;
    }
    pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
    if (*(char *)((long)&(__this->fields).createdMaterials + 4) == '\0') {
      if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
    }
    else {
      pUVar29 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
      if (pUVar29 == (UnityEngine_Camera_o *)0x0) goto LAB_04258f68;
      uVar7 = (__this->fields).filterType;
      uVar13 = (__this->fields).preview;
      uStack_5a0 = 0;
      uStack_59c = 0;
      _auStack_5c8 = ZEXT416((uint)(__this->fields).previewScale.fields.x);
      fStack_5a8 = (float)uVar7;
      fStack_5a4 = (float)uVar13;
      fVar36 = UnityEngine_Camera__get_fieldOfView(pUVar29,(MethodInfo *)0x0);
      if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
      fStack_628 = fVar36 * fStack_5a4 * 0.5;
      fStack_624 = fVar36 * fStack_5a8 * 0.5;
      auStack_658._0_4_ = fVar36 * 0.0;
      auVar35._4_8_ = 0;
      auVar35._0_4_ = auStack_658._0_4_;
      auVar35._12_4_ = auStack_5c8._4_4_;
      register0x00001248 = auVar35._8_8_;
      auStack_658._4_4_ = (float)auStack_5c8._0_4_ * 0.5 * fVar36;
    }
    value_05.fields.y = fStack_624;
    value_05.fields.x = fStack_628;
    value_05.fields._8_8_ = auStack_658;
    pMVar33 = "_BlurDirectionPacked";
    UnityEngine_Material__SetVector
              (pUVar30,(System_String_o *)"_BlurDirectionPacked",value_05,(MethodInfo *)0x0);
LAB_04258a8e:
    cVar19 = *(char *)((long)&(__this->fields).createdMaterials + 4);
  }
  else {
    pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar29 = (UnityEngine_Camera_o *)0x0;
    UnityEngine_Graphics__Blit
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pUStack_588,pUVar30,0,
               (MethodInfo *)0x0);
    __this_04.fields.m_Mask = (UnityEngine_LayerMask_Fields)((int)__this + 0x60);
    pMVar33 = (MethodInfo *)0x0;
    iVar24 = UnityEngine_LayerMask__get_value(__this_04,(MethodInfo *)0x0);
    if (iVar24 != 0) {
      pUVar29 = UnityStandardAssets_ImageEffects_CameraMotionBlur__GetTmpCam(__this,pMVar33);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar33 = (MethodInfo *)0x0;
    bVar20 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
    if ((char)bVar20 == '\0') goto LAB_04258a8e;
    pMVar33 = (MethodInfo *)0x0;
    iVar24 = UnityEngine_LayerMask__get_value(__this_04,(MethodInfo *)0x0);
    if (iVar24 == 0) goto LAB_04258a8e;
    pUVar14 = (UnityEngine_Object_o *)(__this->fields).dx11MotionBlurShader;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar33 = (MethodInfo *)0x0;
    bVar20 = UnityEngine_Object__op_Implicit(pUVar14,(MethodInfo *)0x0);
    if ((char)bVar20 == '\0') goto LAB_04258a8e;
    __this_01 = (__this->fields).dx11MotionBlurShader;
    if (__this_01 == (UnityEngine_Shader_o *)0x0) goto LAB_04258f68;
    pMVar33 = (MethodInfo *)0x0;
    bVar20 = UnityEngine_Shader__get_isSupported(__this_01,(MethodInfo *)0x0);
    if ((char)bVar20 == '\0') goto LAB_04258a8e;
    if (pUVar29 == (UnityEngine_Camera_o *)0x0) goto LAB_04258f68;
    UnityEngine_Camera__set_targetTexture
              (pUVar29,(UnityEngine_RenderTexture_o *)pUStack_588,(MethodInfo *)0x0);
    iVar24 = UnityEngine_LayerMask__op_Implicit
                       ((UnityEngine_LayerMask_o)(__this->fields).softZDistance,(MethodInfo *)0x0);
    UnityEngine_Camera__set_cullingMask(pUVar29,iVar24,(MethodInfo *)0x0);
    pMVar33 = (MethodInfo *)(__this->fields).dx11MotionBlurShader;
    UnityEngine_Camera__RenderWithShader
              (pUVar29,(UnityEngine_Shader_o *)pMVar33,"",(MethodInfo *)0x0);
    cVar19 = *(char *)((long)&(__this->fields).createdMaterials + 4);
  }
  if ((cVar19 == '\0') &&
     (iVar24 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0),
     iVar24 != *(int *)&(__this->fields).prevStereoViewProjMat)) {
    iVar24 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    *(int32_t *)&(__this->fields).prevStereoViewProjMat = iVar24;
    UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember(__this,pMVar33);
  }
  UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)source,1,(MethodInfo *)0x0);
  dest = pUStack_528;
  pUVar26 = pUStack_588;
  pUVar34 = pUStack_5d0;
  if (*(char *)((long)&(__this->fields).noiseTexture + 4) == '\0') {
    iVar21 = *(int *)&(__this->fields).createdMaterials;
    if (((int)uStack_460 != 0) || (iVar21 != 3)) {
      if ((int)uStack_460 == 0 && iVar21 != 2) {
        if (iVar21 == 0) {
          pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          iVar24 = 6;
        }
        else {
          pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
          if (iVar21 == 4) {
            if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
            fVar36 = (__this->fields).minVelocity;
            fVar4 = 0.00025;
            if (0.00025 <= fVar36) {
              fVar4 = fVar36;
            }
            UnityEngine_Material__SetFloat(pUVar30,"_SoftZDistance",fVar4,(MethodInfo *)0x0);
            pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit
                      (pUVar26,(UnityEngine_RenderTexture_o *)__this_03,pUVar30,2,(MethodInfo *)0x0)
            ;
            UnityEngine_Graphics__Blit
                      (__this_03,(UnityEngine_RenderTexture_o *)pUVar34,
                       (UnityEngine_Material_o *)(__this->fields).replacementClear,3,
                       (MethodInfo *)0x0);
            pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
            iVar24 = 7;
          }
          else {
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            iVar24 = 5;
          }
        }
      }
      else {
        pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
        if (pUVar30 == (UnityEngine_Material_o *)0x0) goto LAB_04258f68;
        fVar36 = (__this->fields).minVelocity;
        fVar4 = 0.00025;
        if (0.00025 <= fVar36) {
          fVar4 = fVar36;
        }
        UnityEngine_Material__SetFloat(pUVar30,"_SoftZDistance",fVar4,(MethodInfo *)0x0);
        pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__Blit
                  (pUVar26,(UnityEngine_RenderTexture_o *)__this_03,pUVar30,2,(MethodInfo *)0x0);
        UnityEngine_Graphics__Blit
                  (__this_03,(UnityEngine_RenderTexture_o *)pUVar34,
                   (UnityEngine_Material_o *)(__this->fields).replacementClear,3,(MethodInfo *)0x0);
        pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
        iVar24 = 4;
      }
LAB_04258e0d:
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)source,dest,pUVar30,iVar24,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary
                ((UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary
                ((UnityEngine_RenderTexture_o *)__this_03,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary
                ((UnityEngine_RenderTexture_o *)pUVar34,(MethodInfo *)0x0);
      return;
    }
    pUVar30 = (__this->fields).motionBlurMaterial;
    if (pUVar30 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat
                (pUVar30,"_MinVelocity",(__this->fields).rotationScale,(MethodInfo *)0x0);
      pUVar30 = (__this->fields).motionBlurMaterial;
      if (pUVar30 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat
                  (pUVar30,"_VelocityScale",(__this->fields).maxVelocity,(MethodInfo *)0x0);
        pUVar30 = (__this->fields).motionBlurMaterial;
        if (pUVar30 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat
                    (pUVar30,"_Jitter",*(float *)&(__this->fields).noiseTexture,(MethodInfo *)0x0
                    );
          pUVar30 = (__this->fields).motionBlurMaterial;
          if (pUVar30 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetTexture
                      (pUVar30,"_NoiseTex",
                       (UnityEngine_Texture_o *)(__this->fields).dx11MotionBlurMaterial,
                       (MethodInfo *)0x0);
            pUVar30 = (__this->fields).motionBlurMaterial;
            if (pUVar30 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetTexture(pUVar30,"_VelTex",pUStack_588,(MethodInfo *)0x0);
              pUVar34 = pUStack_5d0;
              pUVar30 = (__this->fields).motionBlurMaterial;
              if (pUVar30 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetTexture(pUVar30,"_NeighbourMaxTex",pUStack_5d0,(MethodInfo *)0x0)
                ;
                pUVar30 = (__this->fields).motionBlurMaterial;
                if (pUVar30 != (UnityEngine_Material_o *)0x0) {
                  fVar36 = (__this->fields).minVelocity;
                  fVar4 = 0.00025;
                  if (0.00025 <= fVar36) {
                    fVar4 = fVar36;
                  }
                  UnityEngine_Material__SetFloat(pUVar30,"_SoftZDistance",fVar4,(MethodInfo *)0x0);
                  dest = pUStack_528;
                  pUVar26 = pUStack_588;
                  pUVar30 = (__this->fields).motionBlurMaterial;
                  if (pUVar30 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetFloat
                              (pUVar30,"_MaxRadiusOrKInPaper",fStack_56c,(MethodInfo *)0x0);
                    pUVar30 = (__this->fields).motionBlurMaterial;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    UnityEngine_Graphics__Blit
                              (pUVar26,(UnityEngine_RenderTexture_o *)__this_03,pUVar30,0,
                               (MethodInfo *)0x0);
                    UnityEngine_Graphics__Blit
                              (__this_03,(UnityEngine_RenderTexture_o *)pUVar34,
                               (__this->fields).motionBlurMaterial,1,(MethodInfo *)0x0);
                    pUVar30 = (__this->fields).motionBlurMaterial;
                    iVar24 = 2;
                    goto LAB_04258e0d;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
    if (pUVar30 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar30,"_DisplayVelocityScale",(__this->fields).jitter,(MethodInfo *)0x0)
      ;
      dest = pUStack_528;
      source = (UnityEngine_RenderTexture_o *)pUStack_588;
      pUVar34 = pUStack_5d0;
      pUVar30 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar24 = 1;
      pUVar26 = (UnityEngine_Texture_o *)source;
      goto LAB_04258e0d;
    }
  }
LAB_04258f68:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$Remember
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x4255f30

void UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  UnityEngine_Matrix4x4_array *pUVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Transform_o *pUVar24;
  UnityEngine_Vector3_o UVar25;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pUVar3 = *(UnityEngine_Matrix4x4_array **)&(__this->fields).showVelocity;
  fVar22 = (__this->fields).currentViewProjMat.fields.m00;
  fVar23 = (__this->fields).currentViewProjMat.fields.m10;
  fVar18 = (__this->fields).currentViewProjMat.fields.m20;
  fVar19 = (__this->fields).currentViewProjMat.fields.m30;
  fVar20 = (__this->fields).currentViewProjMat.fields.m01;
  fVar21 = (__this->fields).currentViewProjMat.fields.m11;
  fVar14 = (__this->fields).currentViewProjMat.fields.m21;
  fVar15 = (__this->fields).currentViewProjMat.fields.m31;
  fVar16 = (__this->fields).currentViewProjMat.fields.m02;
  fVar17 = (__this->fields).currentViewProjMat.fields.m12;
  fVar11 = (__this->fields).currentViewProjMat.fields.m32;
  fVar12 = (__this->fields).currentViewProjMat.fields.m03;
  fVar13 = (__this->fields).currentViewProjMat.fields.m13;
  (__this->fields).prevViewProjMat.fields.m22 = (__this->fields).currentViewProjMat.fields.m22;
  (__this->fields).prevViewProjMat.fields.m32 = fVar11;
  (__this->fields).prevViewProjMat.fields.m03 = fVar12;
  (__this->fields).prevViewProjMat.fields.m13 = fVar13;
  (__this->fields).prevViewProjMat.fields.m21 = fVar14;
  (__this->fields).prevViewProjMat.fields.m31 = fVar15;
  (__this->fields).prevViewProjMat.fields.m02 = fVar16;
  (__this->fields).prevViewProjMat.fields.m12 = fVar17;
  (__this->fields).prevViewProjMat.fields.m20 = fVar18;
  (__this->fields).prevViewProjMat.fields.m30 = fVar19;
  (__this->fields).prevViewProjMat.fields.m01 = fVar20;
  (__this->fields).prevViewProjMat.fields.m11 = fVar21;
  (__this->fields).currentStereoViewProjMat = pUVar3;
  (__this->fields).prevViewProjMat.fields.m00 = fVar22;
  (__this->fields).prevViewProjMat.fields.m10 = fVar23;
  pUVar24 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
    UVar25 = UnityEngine_Transform__get_forward(pUVar24,(MethodInfo *)0x0);
    (__this->fields).prevFrameCount = (int)UVar25.fields._0_8_;
    (__this->fields).wasActive = (int)((ulong)UVar25.fields._0_8_ >> 0x20);
    (__this->fields).prevFrameForward.fields.x = UVar25.fields.z;
    pUVar24 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
      UVar25 = UnityEngine_Transform__get_up(pUVar24,(MethodInfo *)0x0);
      (__this->fields).prevFrameForward.fields.y = (float)(int)UVar25.fields._0_8_;
      (__this->fields).prevFrameForward.fields.z = (float)(int)((ulong)UVar25.fields._0_8_ >> 0x20);
      (__this->fields).prevFrameUp.fields.x = UVar25.fields.z;
      pUVar24 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
        UVar25 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
        (__this->fields).prevFrameUp.fields.y = (float)(int)UVar25.fields._0_8_;
        (__this->fields).prevFrameUp.fields.z = (float)(int)((ulong)UVar25.fields._0_8_ >> 0x20);
        (__this->fields).prevFramePos.fields.x = UVar25.fields.z;
        lVar1 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x18) != 0) {
            lVar2 = *(long *)&(__this->fields).prevViewProjMat.fields.m23;
            uVar4 = *(undefined8 *)(lVar1 + 0x40);
            uVar5 = *(undefined8 *)(lVar1 + 0x48);
            uVar6 = *(undefined8 *)(lVar1 + 0x58);
            if (lVar2 == 0) goto LAB_0425615d;
            local_48 = (undefined4)*(undefined8 *)(lVar1 + 0x20);
            uStack_44 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20);
            uStack_40 = (undefined4)*(undefined8 *)(lVar1 + 0x28);
            uStack_3c = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20);
            local_38 = (undefined4)*(undefined8 *)(lVar1 + 0x30);
            uStack_34 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20);
            uStack_30 = (undefined4)*(undefined8 *)(lVar1 + 0x38);
            uStack_2c = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar1 + 0x50);
              *(undefined8 *)(lVar2 + 0x58) = uVar6;
              *(undefined8 *)(lVar2 + 0x40) = uVar4;
              *(undefined8 *)(lVar2 + 0x48) = uVar5;
              *(undefined4 *)(lVar2 + 0x30) = local_38;
              *(undefined4 *)(lVar2 + 0x34) = uStack_34;
              *(undefined4 *)(lVar2 + 0x38) = uStack_30;
              *(undefined4 *)(lVar2 + 0x3c) = uStack_2c;
              *(undefined4 *)(lVar2 + 0x20) = local_48;
              *(undefined4 *)(lVar2 + 0x24) = uStack_44;
              *(undefined4 *)(lVar2 + 0x28) = uStack_40;
              *(undefined4 *)(lVar2 + 0x2c) = uStack_3c;
              lVar1 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
              if (lVar1 == 0) goto LAB_0425615d;
              if (1 < *(uint *)(lVar1 + 0x18)) {
                lVar2 = *(long *)&(__this->fields).prevViewProjMat.fields.m23;
                uVar4 = *(undefined8 *)(lVar1 + 0x60);
                uVar5 = *(undefined8 *)(lVar1 + 0x68);
                uVar6 = *(undefined8 *)(lVar1 + 0x70);
                uVar7 = *(undefined8 *)(lVar1 + 0x78);
                uVar8 = *(undefined8 *)(lVar1 + 0x80);
                uVar9 = *(undefined8 *)(lVar1 + 0x88);
                uVar10 = *(undefined8 *)(lVar1 + 0x98);
                if (lVar2 == 0) goto LAB_0425615d;
                if (1 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(lVar1 + 0x90);
                  *(undefined8 *)(lVar2 + 0x98) = uVar10;
                  *(undefined8 *)(lVar2 + 0x80) = uVar8;
                  *(undefined8 *)(lVar2 + 0x88) = uVar9;
                  *(undefined8 *)(lVar2 + 0x70) = uVar6;
                  *(undefined8 *)(lVar2 + 0x78) = uVar7;
                  *(undefined8 *)(lVar2 + 0x60) = uVar4;
                  *(undefined8 *)(lVar2 + 0x68) = uVar5;
                  return;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
LAB_0425615d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$GetTmpCam
// il2cpp: UnityEngine_Camera_o* UnityStandardAssets_ImageEffects_CameraMotionBlur__GetTmpCam (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x4259010

UnityEngine_Camera_o *
UnityStandardAssets_ImageEffects_CameraMotionBlur__GetTmpCam
          (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o *pUVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *pUVar5;
  System_Type_array *components;
  System_Type_o *pSVar6;
  long lVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Camera_o *pUVar10;
  UnityEngine_Behaviour_o *__this_01;
  undefined8 uVar11;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar12;
  
  if (DAT_0570523e == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Camera);
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"_MotionBlurTmpCam");
    il2cpp_init_method_metadata(&"_");
    DAT_0570523e = '\x01';
  }
  pUVar5 = *(UnityEngine_Object_o **)&(__this->fields).excludeLayers;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar1 = &(__this->fields).excludeLayers;
  bVar3 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar5 = *(UnityEngine_Object_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar5 == (UnityEngine_Object_o *)0x0) goto LAB_042593b0;
    pSVar4 = UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat("_",pSVar4,"_MotionBlurTmpCam",(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(pSVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)0x0,pUVar5,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
      handle.fields.value = TypeRef_Camera.fields.value;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (components == (System_Type_array *)0x0) goto LAB_042593b0;
      if (pSVar6 != (System_Type_o *)0x0) {
        lVar7 = il2cpp_runtime_glue(pSVar6,(((components->obj).klass)->_1).element_class);
        if (lVar7 == 0) {
          uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar11,0);
        }
      }
      if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      components->m_Items[0] = pSVar6;
      il2cpp_runtime_glue(components->m_Items,pSVar6);
      pUVar5 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor
                ((UnityEngine_GameObject_o *)pUVar5,pSVar4,components,(MethodInfo *)0x0);
    }
    *(UnityEngine_Object_o **)pUVar1 = pUVar5;
    il2cpp_runtime_glue(pUVar1,pUVar5);
  }
  if (*(UnityEngine_Object_o **)pUVar1 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(*(UnityEngine_Object_o **)pUVar1,0x34,(MethodInfo *)0x0);
    if (*(UnityEngine_GameObject_o **)pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar8 = UnityEngine_GameObject__get_transform
                         (*(UnityEngine_GameObject_o **)pUVar1,(MethodInfo *)0x0);
      pUVar2 = *(UnityEngine_Component_o **)&(__this->fields).prevFramePos.fields.z;
      if (pUVar2 != (UnityEngine_Component_o *)0x0) {
        pUVar9 = UnityEngine_Component__get_transform(pUVar2,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UVar12 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position(pUVar8,UVar12,(MethodInfo *)0x0);
            if (*(UnityEngine_GameObject_o **)pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              pUVar8 = UnityEngine_GameObject__get_transform
                                 (*(UnityEngine_GameObject_o **)pUVar1,(MethodInfo *)0x0);
              pUVar2 = *(UnityEngine_Component_o **)&(__this->fields).prevFramePos.fields.z;
              if (pUVar2 != (UnityEngine_Component_o *)0x0) {
                pUVar9 = UnityEngine_Component__get_transform(pUVar2,(MethodInfo *)0x0);
                if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                  value = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_rotation(pUVar8,value,(MethodInfo *)0x0);
                    if (*(UnityEngine_GameObject_o **)pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar8 = UnityEngine_GameObject__get_transform
                                         (*(UnityEngine_GameObject_o **)pUVar1,(MethodInfo *)0x0);
                      pUVar2 = *(UnityEngine_Component_o **)&(__this->fields).prevFramePos.fields.z;
                      if (pUVar2 != (UnityEngine_Component_o *)0x0) {
                        pUVar9 = UnityEngine_Component__get_transform(pUVar2,(MethodInfo *)0x0);
                        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                          UVar12 = UnityEngine_Transform__get_localScale(pUVar9,(MethodInfo *)0x0);
                          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_localScale(pUVar8,UVar12,(MethodInfo *)0x0);
                            if (*(UnityEngine_GameObject_o **)pUVar1 !=
                                (UnityEngine_GameObject_o *)0x0) {
                              pUVar10 = (UnityEngine_Camera_o *)
                                        UnityEngine_GameObject__GetComponent<object>
                                                  (*(UnityEngine_GameObject_o **)pUVar1,MethodInfo_Camera_GetComponent_Camera
                                                  );
                              if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
                                UnityEngine_Camera__CopyFrom
                                          (pUVar10,*(UnityEngine_Camera_o **)
                                                    &(__this->fields).prevFramePos.fields.z,
                                           (MethodInfo *)0x0);
                                __this_00 = *(UnityEngine_GameObject_o **)
                                             &(__this->fields).excludeLayers;
                                if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                                  __this_01 = (UnityEngine_Behaviour_o *)
                                              UnityEngine_GameObject__GetComponent<object>
                                                        (__this_00,MethodInfo_Camera_GetComponent_Camera);
                                  if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
                                    UnityEngine_Behaviour__set_enabled
                                              (__this_01,0,(MethodInfo *)0x0);
                                    if (*(UnityEngine_GameObject_o **)pUVar1 !=
                                        (UnityEngine_GameObject_o *)0x0) {
                                      pUVar10 = (UnityEngine_Camera_o *)
                                                UnityEngine_GameObject__GetComponent<object>
                                                          (*(UnityEngine_GameObject_o **)pUVar1,
                                                           MethodInfo_Camera_GetComponent_Camera);
                                      if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
                                        UnityEngine_Camera__set_depthTextureMode
                                                  (pUVar10,0,(MethodInfo *)0x0);
                                        if (*(UnityEngine_GameObject_o **)pUVar1 !=
                                            (UnityEngine_GameObject_o *)0x0) {
                                          pUVar10 = (UnityEngine_Camera_o *)
                                                    UnityEngine_GameObject__GetComponent<object>
                                                              (*(UnityEngine_GameObject_o **)pUVar1,
                                                               MethodInfo_Camera_GetComponent_Camera);
                                          if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
                                            UnityEngine_Camera__set_clearFlags
                                                      (pUVar10,4,(MethodInfo *)0x0);
                                            if (*(UnityEngine_GameObject_o **)pUVar1 !=
                                                (UnityEngine_GameObject_o *)0x0) {
                                              pUVar10 = (UnityEngine_Camera_o *)
                                                        UnityEngine_GameObject__GetComponent<object>
                                                                  (*(UnityEngine_GameObject_o **)
                                                                    pUVar1,MethodInfo_Camera_GetComponent_Camera);
                                              return pUVar10;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_042593b0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$StartFrame
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__StartFrame (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x4258f80

void UnityStandardAssets_ImageEffects_CameraMotionBlur__StartFrame
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o b;
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields = *(UnityEngine_Vector3_Fields *)&(__this->fields).prevFrameUp.fields.y;
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    b = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    UVar1 = UnityEngine_Vector3__Slerp(UVar1,b,0.75,(MethodInfo *)0x0);
    (__this->fields).prevFrameUp.fields.y = (float)(int)UVar1.fields._0_8_;
    (__this->fields).prevFrameUp.fields.z = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    (__this->fields).prevFramePos.fields.x = UVar1.fields.z;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$divRoundUp
// il2cpp: int32_t UnityStandardAssets_ImageEffects_CameraMotionBlur__divRoundUp (int32_t x, int32_t d, const MethodInfo* method);
// 0x4259000

int32_t UnityStandardAssets_ImageEffects_CameraMotionBlur__divRoundUp
                  (int32_t x,int32_t d,MethodInfo *method)

{
  return (x + d + -1) / d;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur___ctor (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x42593d0

void UnityStandardAssets_ImageEffects_CameraMotionBlur___ctor
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_LayerMask_o UVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  
  *(undefined4 *)&(__this->fields).createdMaterials = 2;
  if (DAT_056fe077 == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fe077 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
  (__this->fields).filterType = (int)uVar2;
  (__this->fields).preview = (int)((ulong)uVar2 >> 0x20);
  (__this->fields).previewScale.fields.x = fVar1;
  *(undefined8 *)&(__this->fields).previewScale.fields.z = 0x410000003f800000;
  (__this->fields).rotationScale = 0.1;
  (__this->fields).maxVelocity = 0.375;
  (__this->fields).minVelocity = 0.005;
  (__this->fields).velocityScale = 1.4013e-45;
  UVar3 = UnityEngine_LayerMask__op_Implicit(0,(MethodInfo *)0x0);
  (__this->fields).softZDistance = (float)UVar3.fields.m_Mask;
  *(undefined4 *)&(__this->fields).noiseTexture = 0x3d4ccccd;
  (__this->fields).jitter = 1.0;
  if (DAT_056fde21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde21 = '\x01';
  }
  lVar4 = TypeInfo_Vector3;
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  (__this->fields).prevFrameCount = (int)uVar2;
  (__this->fields).wasActive = (int)((ulong)uVar2 >> 0x20);
  (__this->fields).prevFrameForward.fields.x = fVar1;
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
    lVar4 = TypeInfo_Vector3;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
  fVar1 = *(float *)(*(long *)(lVar4 + 0xb8) + 0x20);
  (__this->fields).prevFrameForward.fields.y = (float)(int)uVar2;
  (__this->fields).prevFrameForward.fields.z = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).prevFrameUp.fields.x = fVar1;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
    lVar4 = TypeInfo_Vector3;
  }
  uVar2 = **(undefined8 **)(lVar4 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(lVar4 + 0xb8) + 1);
  (__this->fields).prevFrameUp.fields.y = (float)(int)uVar2;
  (__this->fields).prevFrameUp.fields.z = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).prevFramePos.fields.x = fVar1;
  if (DAT_05705271 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_init_method_metadata(&TypeInfo_List_Material);
    DAT_05705271 = '\x01';
  }
  *(undefined1 *)&(__this->fields).supportHDRTextures = 1;
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Material);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported = __this_00;
  il2cpp_runtime_glue(&(__this->fields).isSupported);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$.cctor
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur___cctor (const MethodInfo* method);
// 0x4259570

void UnityStandardAssets_ImageEffects_CameraMotionBlur___cctor(MethodInfo *method)

{
  if (DAT_0570523f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CameraMotionBlur);
    DAT_0570523f = '\x01';
  }
  **(undefined4 **)(TypeInfo_CameraMotionBlur + 0xb8) = 0x41200000;
  return;
}


