// Type: UnityStandardAssets.ImageEffects.CameraMotionBlur
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/CameraMotionBlur.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/CameraMotionBlur.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.CameraMotionBlur$$CalculateViewProjection
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__CalculateViewProjection (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x457a6d0

void UnityStandardAssets_ImageEffects_CameraMotionBlur__CalculateViewProjection
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Object_Fields *pUVar2;
  UnityEngine_Camera_o *pUVar3;
  long lVar4;
  long lVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Object_c *pUVar7;
  UnityEngine_Matrix4x4_array *pUVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  UnityEngine_Matrix4x4_o proj;
  UnityEngine_Matrix4x4_o lhs;
  UnityEngine_Matrix4x4_o proj_00;
  UnityEngine_Matrix4x4_o lhs_00;
  UnityEngine_Matrix4x4_o proj_01;
  UnityEngine_Matrix4x4_o lhs_01;
  UnityEngine_Matrix4x4_o rhs;
  UnityEngine_Matrix4x4_o rhs_00;
  UnityEngine_Matrix4x4_o rhs_01;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  bool_conflict bVar28;
  uint uVar29;
  Il2CppObject *pIVar30;
  UnityEngine_GameObject_o *__this_00;
  undefined8 uVar31;
  MethodInfo *method_00;
  UnityEngine_Transform_o *pUVar32;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this_01;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *pUVar33;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this_02;
  UnityEngine_Object_o *pUVar34;
  void **ppvVar35;
  UnityEngine_Vector3_o UVar36;
  undefined4 uStackY_2f8;
  undefined4 uStackY_2f4;
  undefined4 uStackY_2f0;
  undefined4 uStackY_2ec;
  undefined1 local_218 [40];
  undefined1 auStack_1f0 [16];
  UnityEngine_Matrix4x4_array *pUStack_1e0;
  undefined1 local_1d8 [40];
  undefined1 auStack_1b0 [16];
  UnityEngine_Matrix4x4_array *pUStack_1a0;
  UnityEngine_Matrix4x4_array *local_198;
  UnityEngine_Shader_o *pUStack_190;
  UnityEngine_Material_o *local_188;
  System_Threading_CancellationTokenSource_o *pSStack_180;
  UnityEngine_Texture2D_o *local_178;
  undefined1 auStack_170 [8];
  System_Collections_Generic_List_Material__o *local_168;
  UnityEngine_Matrix4x4_array *pUStack_160;
  UnityEngine_Matrix4x4_array *local_158;
  UnityEngine_Shader_o *pUStack_150;
  UnityEngine_Material_o *local_148;
  System_Threading_CancellationTokenSource_o *pSStack_140;
  UnityEngine_Texture2D_o *local_138;
  undefined1 auStack_130 [16];
  UnityEngine_Matrix4x4_array *pUStack_120;
  UnityEngine_Matrix4x4_array *local_118;
  UnityEngine_Shader_o *pUStack_110;
  UnityEngine_Material_o *local_108;
  System_Threading_CancellationTokenSource_o *pSStack_100;
  UnityEngine_Texture2D_o *local_f8;
  undefined1 auStack_f0 [16];
  UnityEngine_Matrix4x4_array *pUStack_e0;
  UnityEngine_Matrix4x4_array *local_d8;
  UnityEngine_Shader_o *pUStack_d0;
  UnityEngine_Material_o *local_c8;
  System_Threading_CancellationTokenSource_o *pSStack_c0;
  UnityEngine_Texture2D_o *local_b8;
  undefined1 auStack_b0 [8];
  System_Collections_Generic_List_Material__o *local_a8;
  UnityEngine_Matrix4x4_array *pUStack_a0;
  UnityEngine_Matrix4x4_array *local_98;
  UnityEngine_Shader_o *pUStack_90;
  UnityEngine_Material_o *local_88;
  System_Threading_CancellationTokenSource_o *pSStack_80;
  UnityEngine_Texture2D_o *local_78;
  undefined1 auStack_70 [8];
  System_Collections_Generic_List_Material__o *local_68;
  UnityEngine_Matrix4x4_array *pUStack_60;
  UnityEngine_Matrix4x4_array *local_58;
  UnityEngine_Shader_o *pUStack_50;
  UnityEngine_Material_o *local_48;
  System_Threading_CancellationTokenSource_o *pSStack_40;
  UnityEngine_Texture2D_o *local_38;
  undefined1 auStack_30 [16];
  UnityEngine_Matrix4x4_array *pUStack_20;
  
  local_68 = (System_Collections_Generic_List_Material__o *)0x0;
  pUStack_60 = (UnityEngine_Matrix4x4_array *)0x0;
  local_78 = (UnityEngine_Texture2D_o *)0x0;
  auStack_70._0_4_ = 0.0;
  auStack_70._4_4_ = 0.0;
  local_88 = (UnityEngine_Material_o *)0x0;
  pSStack_80 = (System_Threading_CancellationTokenSource_o *)0x0;
  local_98 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_90 = (UnityEngine_Shader_o *)0x0;
  local_a8 = (System_Collections_Generic_List_Material__o *)0x0;
  pUStack_a0 = (UnityEngine_Matrix4x4_array *)0x0;
  local_b8 = (UnityEngine_Texture2D_o *)0x0;
  auStack_b0._0_4_ = 0.0;
  auStack_b0._4_4_ = 0.0;
  local_c8 = (UnityEngine_Material_o *)0x0;
  pSStack_c0 = (System_Threading_CancellationTokenSource_o *)0x0;
  local_d8 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_d0 = (UnityEngine_Shader_o *)0x0;
  local_168 = (System_Collections_Generic_List_Material__o *)0x0;
  pUStack_160 = (UnityEngine_Matrix4x4_array *)0x0;
  local_178 = (UnityEngine_Texture2D_o *)0x0;
  auStack_170._0_4_ = 0.0;
  auStack_170._4_4_ = 0.0;
  local_188 = (UnityEngine_Material_o *)0x0;
  pSStack_180 = (System_Threading_CancellationTokenSource_o *)0x0;
  local_198 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_190 = (UnityEngine_Shader_o *)0x0;
  pUVar3 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
  pUVar33 = __this;
  if (pUVar3 == (UnityEngine_Camera_o *)0x0) {
label_0457aee2:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar33 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)local_218;
    UnityEngine_Camera__get_worldToCameraMatrix((UnityEngine_Matrix4x4_o *)pUVar33,pUVar3,(MethodInfo *)0x0);
    local_68 = (System_Collections_Generic_List_Material__o *)auStack_1f0._8_8_;
    pUStack_60 = pUStack_1e0;
    local_78 = (UnityEngine_Texture2D_o *)local_218._32_8_;
    auStack_70 = (undefined1  [8])auStack_1f0._0_8_;
    local_88 = (UnityEngine_Material_o *)local_218._16_8_;
    pSStack_80 = (System_Threading_CancellationTokenSource_o *)local_218._24_8_;
    local_98 = (UnityEngine_Matrix4x4_array *)local_218._0_8_;
    pUStack_90 = (UnityEngine_Shader_o *)local_218._8_8_;
    pUVar3 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_0457aee2;
    UnityEngine_Camera__get_projectionMatrix((UnityEngine_Matrix4x4_o *)local_218,pUVar3,(MethodInfo *)0x0);
    auStack_30._8_8_ = auStack_1f0._8_8_;
    pUStack_20 = pUStack_1e0;
    local_38 = (UnityEngine_Texture2D_o *)local_218._32_8_;
    auStack_30._0_8_ = auStack_1f0._0_8_;
    local_48 = (UnityEngine_Material_o *)local_218._16_8_;
    pSStack_40 = (System_Threading_CancellationTokenSource_o *)local_218._24_8_;
    local_58 = (UnityEngine_Matrix4x4_array *)local_218._0_8_;
    pUStack_50 = (UnityEngine_Shader_o *)local_218._8_8_;
    proj.fields.m20 = (float)local_218._8_4_;
    proj.fields.m30 = (float)local_218._12_4_;
    proj.fields.m00 = (float)local_218._0_4_;
    proj.fields.m10 = (float)local_218._4_4_;
    proj.fields.m01 = (float)local_218._16_4_;
    proj.fields.m11 = (float)local_218._20_4_;
    proj.fields.m21 = (float)local_218._24_4_;
    proj.fields.m31 = (float)local_218._28_4_;
    proj.fields.m02 = (float)local_218._32_4_;
    proj.fields.m12 = (float)local_218._36_4_;
    proj.fields.m22 = (float)auStack_1f0._0_4_;
    proj.fields.m32 = (float)auStack_1f0._4_4_;
    proj.fields.m03 = (float)auStack_1f0._8_4_;
    proj.fields.m13 = (float)auStack_1f0._12_4_;
    proj.fields._56_8_ = pUStack_1e0;
    UnityEngine_GL__GetGPUProjectionMatrix((UnityEngine_Matrix4x4_o *)local_218,proj,1,(MethodInfo *)0x0);
    local_a8 = (System_Collections_Generic_List_Material__o *)auStack_1f0._8_8_;
    pUStack_a0 = pUStack_1e0;
    local_b8 = (UnityEngine_Texture2D_o *)local_218._32_8_;
    auStack_b0 = (undefined1  [8])auStack_1f0._0_8_;
    local_c8 = (UnityEngine_Material_o *)local_218._16_8_;
    pSStack_c0 = (System_Threading_CancellationTokenSource_o *)local_218._24_8_;
    local_d8 = (UnityEngine_Matrix4x4_array *)local_218._0_8_;
    pUStack_d0 = (UnityEngine_Shader_o *)local_218._8_8_;
    lhs.fields.m20 = (float)local_218._8_4_;
    lhs.fields.m30 = (float)local_218._12_4_;
    lhs.fields.m00 = (float)local_218._0_4_;
    lhs.fields.m10 = (float)local_218._4_4_;
    lhs.fields.m01 = (float)local_218._16_4_;
    lhs.fields.m11 = (float)local_218._20_4_;
    lhs.fields.m21 = (float)local_218._24_4_;
    lhs.fields.m31 = (float)local_218._28_4_;
    lhs.fields.m02 = (float)local_218._32_4_;
    lhs.fields.m12 = (float)local_218._36_4_;
    lhs.fields.m22 = (float)auStack_1f0._0_4_;
    lhs.fields.m32 = (float)auStack_1f0._4_4_;
    lhs.fields.m03 = (float)auStack_1f0._8_4_;
    lhs.fields.m13 = (float)auStack_1f0._12_4_;
    lhs.fields._56_8_ = pUStack_1e0;
    rhs.fields._8_8_ = pUStack_90;
    rhs.fields._0_8_ = local_98;
    rhs.fields._16_8_ = local_88;
    rhs.fields._24_8_ = pSStack_80;
    rhs.fields._32_8_ = local_78;
    rhs.fields.m22 = (float)auStack_70._0_4_;
    rhs.fields.m32 = (float)auStack_70._4_4_;
    rhs.fields._48_8_ = local_68;
    rhs.fields._56_8_ = pUStack_60;
    UnityEngine_Matrix4x4__op_Multiply((UnityEngine_Matrix4x4_o *)local_1d8,lhs,rhs,(MethodInfo *)0x0);
    auStack_1f0._8_8_ = auStack_1b0._8_8_;
    pUStack_1e0 = pUStack_1a0;
    local_218._32_8_ = local_1d8._32_8_;
    auStack_1f0._0_8_ = auStack_1b0._0_8_;
    local_218._16_8_ = local_1d8._16_8_;
    local_218._24_8_ = local_1d8._24_8_;
    local_218._0_8_ = local_1d8._0_8_;
    local_218._8_8_ = local_1d8._8_8_;
    (__this->fields).currentViewProjMat.fields.m22 = (float)auStack_1b0._8_4_;
    (__this->fields).currentViewProjMat.fields.m32 = (float)auStack_1b0._12_4_;
    *(UnityEngine_Matrix4x4_array **)&(__this->fields).currentViewProjMat.fields.m03 = pUStack_1a0;
    (__this->fields).currentViewProjMat.fields.m21 = (float)local_1d8._32_4_;
    (__this->fields).currentViewProjMat.fields.m31 = (float)local_1d8._36_4_;
    (__this->fields).currentViewProjMat.fields.m02 = (float)auStack_1b0._0_4_;
    (__this->fields).currentViewProjMat.fields.m12 = (float)auStack_1b0._4_4_;
    (__this->fields).currentViewProjMat.fields.m20 = (float)local_1d8._16_4_;
    (__this->fields).currentViewProjMat.fields.m30 = (float)local_1d8._20_4_;
    (__this->fields).currentViewProjMat.fields.m01 = (float)local_1d8._24_4_;
    (__this->fields).currentViewProjMat.fields.m11 = (float)local_1d8._28_4_;
    (__this->fields).showVelocity = local_1d8._0_4_;
    (__this->fields).showVelocityScale = (float)local_1d8._4_4_;
    (__this->fields).currentViewProjMat.fields.m00 = (float)local_1d8._8_4_;
    (__this->fields).currentViewProjMat.fields.m10 = (float)local_1d8._12_4_;
    pUVar33 = *(UnityStandardAssets_ImageEffects_CameraMotionBlur_o **)&(__this->fields).prevFramePos.fields.z
    ;
    if (pUVar33 == (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0) goto label_0457aee2;
    bVar28 = UnityEngine_Camera__get_stereoEnabled((UnityEngine_Camera_o *)pUVar33,(MethodInfo *)0x0);
    if ((char)bVar28 == '\0') {
      return;
    }
    pUVar3 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_0457aee2;
    pUVar33 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)local_1d8;
    UnityEngine_Camera__GetStereoViewMatrix((UnityEngine_Matrix4x4_o *)pUVar33,pUVar3,0,(MethodInfo *)0x0);
    auStack_1f0._8_8_ = auStack_1b0._8_8_;
    pUStack_1e0 = pUStack_1a0;
    local_218._32_8_ = local_1d8._32_8_;
    auStack_1f0._0_8_ = auStack_1b0._0_8_;
    local_218._16_8_ = local_1d8._16_8_;
    local_218._24_8_ = local_1d8._24_8_;
    local_218._0_8_ = local_1d8._0_8_;
    local_218._8_8_ = local_1d8._8_8_;
    local_198 = (UnityEngine_Matrix4x4_array *)local_1d8._0_8_;
    pUStack_190 = (UnityEngine_Shader_o *)local_1d8._8_8_;
    local_188 = (UnityEngine_Material_o *)local_1d8._16_8_;
    pSStack_180 = (System_Threading_CancellationTokenSource_o *)local_1d8._24_8_;
    local_178 = (UnityEngine_Texture2D_o *)local_1d8._32_8_;
    auStack_170 = (undefined1  [8])auStack_1b0._0_8_;
    local_168 = (System_Collections_Generic_List_Material__o *)auStack_1b0._8_8_;
    pUStack_160 = pUStack_1a0;
    pUVar3 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_0457aee2;
    UnityEngine_Camera__GetStereoProjectionMatrix
              ((UnityEngine_Matrix4x4_o *)local_218,pUVar3,0,(MethodInfo *)0x0);
    auStack_1b0._8_8_ = auStack_1f0._8_8_;
    pUStack_1a0 = pUStack_1e0;
    local_1d8._32_8_ = local_218._32_8_;
    auStack_1b0._0_8_ = auStack_1f0._0_8_;
    local_1d8._16_8_ = local_218._16_8_;
    local_1d8._24_8_ = local_218._24_8_;
    local_1d8._0_8_ = local_218._0_8_;
    local_1d8._8_8_ = local_218._8_8_;
    proj_00.fields.m20 = (float)local_218._8_4_;
    proj_00.fields.m30 = (float)local_218._12_4_;
    proj_00.fields.m00 = (float)local_218._0_4_;
    proj_00.fields.m10 = (float)local_218._4_4_;
    proj_00.fields.m01 = (float)local_218._16_4_;
    proj_00.fields.m11 = (float)local_218._20_4_;
    proj_00.fields.m21 = (float)local_218._24_4_;
    proj_00.fields.m31 = (float)local_218._28_4_;
    proj_00.fields.m02 = (float)local_218._32_4_;
    proj_00.fields.m12 = (float)local_218._36_4_;
    proj_00.fields.m22 = (float)auStack_1f0._0_4_;
    proj_00.fields.m32 = (float)auStack_1f0._4_4_;
    proj_00.fields.m03 = (float)auStack_1f0._8_4_;
    proj_00.fields.m13 = (float)auStack_1f0._12_4_;
    proj_00.fields._56_8_ = pUStack_1e0;
    UnityEngine_GL__GetGPUProjectionMatrix((UnityEngine_Matrix4x4_o *)local_218,proj_00,1,(MethodInfo *)0x0);
    auStack_f0._8_8_ = auStack_1f0._8_8_;
    pUStack_e0 = pUStack_1e0;
    local_f8 = (UnityEngine_Texture2D_o *)local_218._32_8_;
    auStack_f0._0_8_ = auStack_1f0._0_8_;
    local_108 = (UnityEngine_Material_o *)local_218._16_8_;
    pSStack_100 = (System_Threading_CancellationTokenSource_o *)local_218._24_8_;
    local_118 = (UnityEngine_Matrix4x4_array *)local_218._0_8_;
    pUStack_110 = (UnityEngine_Shader_o *)local_218._8_8_;
    lVar4 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
    pUVar33 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)local_218;
    lhs_00.fields.m20 = (float)local_218._8_4_;
    lhs_00.fields.m30 = (float)local_218._12_4_;
    lhs_00.fields.m00 = (float)local_218._0_4_;
    lhs_00.fields.m10 = (float)local_218._4_4_;
    lhs_00.fields.m01 = (float)local_218._16_4_;
    lhs_00.fields.m11 = (float)local_218._20_4_;
    lhs_00.fields.m21 = (float)local_218._24_4_;
    lhs_00.fields.m31 = (float)local_218._28_4_;
    lhs_00.fields.m02 = (float)local_218._32_4_;
    lhs_00.fields.m12 = (float)local_218._36_4_;
    lhs_00.fields.m22 = (float)auStack_1f0._0_4_;
    lhs_00.fields.m32 = (float)auStack_1f0._4_4_;
    lhs_00.fields.m03 = (float)auStack_1f0._8_4_;
    lhs_00.fields.m13 = (float)auStack_1f0._12_4_;
    lhs_00.fields._56_8_ = pUStack_1e0;
    rhs_00.fields._8_8_ = pUStack_190;
    rhs_00.fields._0_8_ = local_198;
    rhs_00.fields._16_8_ = local_188;
    rhs_00.fields._24_8_ = pSStack_180;
    rhs_00.fields._32_8_ = local_178;
    rhs_00.fields.m22 = (float)auStack_170._0_4_;
    rhs_00.fields.m32 = (float)auStack_170._4_4_;
    rhs_00.fields._48_8_ = local_168;
    rhs_00.fields._56_8_ = pUStack_160;
    UnityEngine_Matrix4x4__op_Multiply((UnityEngine_Matrix4x4_o *)pUVar33,lhs_00,rhs_00,(MethodInfo *)0x0);
    auStack_130._8_8_ = auStack_1f0._8_8_;
    pUStack_120 = pUStack_1e0;
    local_138 = (UnityEngine_Texture2D_o *)local_218._32_8_;
    auStack_130._0_8_ = auStack_1f0._0_8_;
    local_148 = (UnityEngine_Material_o *)local_218._16_8_;
    pSStack_140 = (System_Threading_CancellationTokenSource_o *)local_218._24_8_;
    local_158 = (UnityEngine_Matrix4x4_array *)local_218._0_8_;
    pUStack_150 = (UnityEngine_Shader_o *)local_218._8_8_;
    if (lVar4 == 0) goto label_0457aee2;
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x50) = auStack_1f0._8_8_;
      *(UnityEngine_Matrix4x4_array **)(lVar4 + 0x58) = pUStack_1e0;
      *(undefined8 *)(lVar4 + 0x40) = local_218._32_8_;
      *(undefined8 *)(lVar4 + 0x48) = auStack_1f0._0_8_;
      *(undefined8 *)(lVar4 + 0x30) = local_218._16_8_;
      *(undefined8 *)(lVar4 + 0x38) = local_218._24_8_;
      *(undefined8 *)(lVar4 + 0x20) = local_218._0_8_;
      *(undefined8 *)(lVar4 + 0x28) = local_218._8_8_;
      pUVar3 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
      if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
        pUVar33 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)local_1d8;
        UnityEngine_Camera__GetStereoViewMatrix((UnityEngine_Matrix4x4_o *)pUVar33,pUVar3,1,(MethodInfo *)0x0)
        ;
        auStack_1f0._8_8_ = auStack_1b0._8_8_;
        pUStack_1e0 = pUStack_1a0;
        local_218._32_8_ = local_1d8._32_8_;
        auStack_1f0._0_8_ = auStack_1b0._0_8_;
        local_218._16_8_ = local_1d8._16_8_;
        local_218._24_8_ = local_1d8._24_8_;
        local_218._0_8_ = local_1d8._0_8_;
        local_218._8_8_ = local_1d8._8_8_;
        local_198 = (UnityEngine_Matrix4x4_array *)local_1d8._0_8_;
        pUStack_190 = (UnityEngine_Shader_o *)local_1d8._8_8_;
        local_188 = (UnityEngine_Material_o *)local_1d8._16_8_;
        pSStack_180 = (System_Threading_CancellationTokenSource_o *)local_1d8._24_8_;
        local_178 = (UnityEngine_Texture2D_o *)local_1d8._32_8_;
        auStack_170 = (undefined1  [8])auStack_1b0._0_8_;
        local_168 = (System_Collections_Generic_List_Material__o *)auStack_1b0._8_8_;
        pUStack_160 = pUStack_1a0;
        pUVar3 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
        if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__GetStereoProjectionMatrix
                    ((UnityEngine_Matrix4x4_o *)local_218,pUVar3,1,(MethodInfo *)0x0);
          auStack_1b0._8_8_ = auStack_1f0._8_8_;
          pUStack_1a0 = pUStack_1e0;
          local_1d8._32_8_ = local_218._32_8_;
          auStack_1b0._0_8_ = auStack_1f0._0_8_;
          local_1d8._16_8_ = local_218._16_8_;
          local_1d8._24_8_ = local_218._24_8_;
          local_1d8._0_8_ = local_218._0_8_;
          local_1d8._8_8_ = local_218._8_8_;
          proj_01.fields.m20 = (float)local_218._8_4_;
          proj_01.fields.m30 = (float)local_218._12_4_;
          proj_01.fields.m00 = (float)local_218._0_4_;
          proj_01.fields.m10 = (float)local_218._4_4_;
          proj_01.fields.m01 = (float)local_218._16_4_;
          proj_01.fields.m11 = (float)local_218._20_4_;
          proj_01.fields.m21 = (float)local_218._24_4_;
          proj_01.fields.m31 = (float)local_218._28_4_;
          proj_01.fields.m02 = (float)local_218._32_4_;
          proj_01.fields.m12 = (float)local_218._36_4_;
          proj_01.fields.m22 = (float)auStack_1f0._0_4_;
          proj_01.fields.m32 = (float)auStack_1f0._4_4_;
          proj_01.fields.m03 = (float)auStack_1f0._8_4_;
          proj_01.fields.m13 = (float)auStack_1f0._12_4_;
          proj_01.fields._56_8_ = pUStack_1e0;
          UnityEngine_GL__GetGPUProjectionMatrix
                    ((UnityEngine_Matrix4x4_o *)local_218,proj_01,1,(MethodInfo *)0x0);
          auStack_f0._8_8_ = auStack_1f0._8_8_;
          pUStack_e0 = pUStack_1e0;
          local_f8 = (UnityEngine_Texture2D_o *)local_218._32_8_;
          auStack_f0._0_8_ = auStack_1f0._0_8_;
          local_108 = (UnityEngine_Material_o *)local_218._16_8_;
          pSStack_100 = (System_Threading_CancellationTokenSource_o *)local_218._24_8_;
          local_118 = (UnityEngine_Matrix4x4_array *)local_218._0_8_;
          pUStack_110 = (UnityEngine_Shader_o *)local_218._8_8_;
          lVar4 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
          pUVar33 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)local_218;
          lhs_01.fields.m20 = (float)local_218._8_4_;
          lhs_01.fields.m30 = (float)local_218._12_4_;
          lhs_01.fields.m00 = (float)local_218._0_4_;
          lhs_01.fields.m10 = (float)local_218._4_4_;
          lhs_01.fields.m01 = (float)local_218._16_4_;
          lhs_01.fields.m11 = (float)local_218._20_4_;
          lhs_01.fields.m21 = (float)local_218._24_4_;
          lhs_01.fields.m31 = (float)local_218._28_4_;
          lhs_01.fields.m02 = (float)local_218._32_4_;
          lhs_01.fields.m12 = (float)local_218._36_4_;
          lhs_01.fields.m22 = (float)auStack_1f0._0_4_;
          lhs_01.fields.m32 = (float)auStack_1f0._4_4_;
          lhs_01.fields.m03 = (float)auStack_1f0._8_4_;
          lhs_01.fields.m13 = (float)auStack_1f0._12_4_;
          lhs_01.fields._56_8_ = pUStack_1e0;
          rhs_01.fields._8_8_ = pUStack_190;
          rhs_01.fields._0_8_ = local_198;
          rhs_01.fields._16_8_ = local_188;
          rhs_01.fields._24_8_ = pSStack_180;
          rhs_01.fields._32_8_ = local_178;
          rhs_01.fields.m22 = (float)auStack_170._0_4_;
          rhs_01.fields.m32 = (float)auStack_170._4_4_;
          rhs_01.fields._48_8_ = local_168;
          rhs_01.fields._56_8_ = pUStack_160;
          UnityEngine_Matrix4x4__op_Multiply
                    ((UnityEngine_Matrix4x4_o *)pUVar33,lhs_01,rhs_01,(MethodInfo *)0x0);
          auStack_130._8_8_ = auStack_1f0._8_8_;
          pUStack_120 = pUStack_1e0;
          local_138 = (UnityEngine_Texture2D_o *)local_218._32_8_;
          auStack_130._0_8_ = auStack_1f0._0_8_;
          local_148 = (UnityEngine_Material_o *)local_218._16_8_;
          pSStack_140 = (System_Threading_CancellationTokenSource_o *)local_218._24_8_;
          local_158 = (UnityEngine_Matrix4x4_array *)local_218._0_8_;
          pUStack_150 = (UnityEngine_Shader_o *)local_218._8_8_;
          if (lVar4 != 0) {
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar4 + 0x90) = auStack_1f0._8_8_;
              *(UnityEngine_Matrix4x4_array **)(lVar4 + 0x98) = pUStack_1e0;
              *(undefined8 *)(lVar4 + 0x80) = local_218._32_8_;
              *(undefined8 *)(lVar4 + 0x88) = auStack_1f0._0_8_;
              *(undefined8 *)(lVar4 + 0x70) = local_218._16_8_;
              *(undefined8 *)(lVar4 + 0x78) = local_218._24_8_;
              *(undefined8 *)(lVar4 + 0x60) = local_218._0_8_;
              *(undefined8 *)(lVar4 + 0x68) = local_218._8_8_;
              return;
            }
            goto label_0457aee7;
          }
        }
      }
      goto label_0457aee2;
    }
  }
label_0457aee7:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Matrix4x4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b6 = '\x01';
  }
  (*(pUVar33->klass->vtable)._4_CheckResources.methodPtr)(pUVar33);
  pUVar34 = *(UnityEngine_Object_o **)&(pUVar33->fields).prevFramePos.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar28 = UnityEngine_Object__op_Equality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar28 != '\0') {
    pIVar30 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar33,MethodInfo_Camera_GetComponent_Camera);
    *(Il2CppObject **)&(pUVar33->fields).prevFramePos.fields.z = pIVar30;
    il2cpp_runtime_helper_022b4080(&(pUVar33->fields).prevFramePos.fields.z);
  }
  __this_02 = pUVar33;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar28 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    *(char *)((long)&(pUVar33->fields).prevStereoViewProjMat + 4) = (char)bVar28;
    uVar31 = il2cpp_runtime_helper_022b2a40(TypeInfo_Matrix4x4,2);
    *(undefined8 *)&(pUVar33->fields).currentViewProjMat.fields.m33 = uVar31;
    il2cpp_runtime_helper_022b4080(&(pUVar33->fields).currentViewProjMat.fields.m33,uVar31);
    method_00 = (MethodInfo *)il2cpp_runtime_helper_022b2a40(TypeInfo_Matrix4x4,2);
    *(MethodInfo **)&(pUVar33->fields).prevViewProjMat.fields.m23 = method_00;
    il2cpp_runtime_helper_022b4080(&(pUVar33->fields).prevViewProjMat.fields.m23);
    UnityStandardAssets_ImageEffects_CameraMotionBlur__CalculateViewProjection(pUVar33,method_00);
    UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember(pUVar33,method_00);
    *(undefined1 *)((long)&(pUVar33->fields).prevStereoViewProjMat + 4) = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_Matrix4x4_array **)&(__this_02->fields).showVelocity;
  fVar26 = (__this_02->fields).currentViewProjMat.fields.m00;
  fVar27 = (__this_02->fields).currentViewProjMat.fields.m10;
  fVar22 = (__this_02->fields).currentViewProjMat.fields.m20;
  fVar23 = (__this_02->fields).currentViewProjMat.fields.m30;
  fVar24 = (__this_02->fields).currentViewProjMat.fields.m01;
  fVar25 = (__this_02->fields).currentViewProjMat.fields.m11;
  fVar18 = (__this_02->fields).currentViewProjMat.fields.m21;
  fVar19 = (__this_02->fields).currentViewProjMat.fields.m31;
  fVar20 = (__this_02->fields).currentViewProjMat.fields.m02;
  fVar21 = (__this_02->fields).currentViewProjMat.fields.m12;
  fVar15 = (__this_02->fields).currentViewProjMat.fields.m32;
  fVar16 = (__this_02->fields).currentViewProjMat.fields.m03;
  fVar17 = (__this_02->fields).currentViewProjMat.fields.m13;
  (__this_02->fields).prevViewProjMat.fields.m22 = (__this_02->fields).currentViewProjMat.fields.m22;
  (__this_02->fields).prevViewProjMat.fields.m32 = fVar15;
  (__this_02->fields).prevViewProjMat.fields.m03 = fVar16;
  (__this_02->fields).prevViewProjMat.fields.m13 = fVar17;
  (__this_02->fields).prevViewProjMat.fields.m21 = fVar18;
  (__this_02->fields).prevViewProjMat.fields.m31 = fVar19;
  (__this_02->fields).prevViewProjMat.fields.m02 = fVar20;
  (__this_02->fields).prevViewProjMat.fields.m12 = fVar21;
  (__this_02->fields).prevViewProjMat.fields.m20 = fVar22;
  (__this_02->fields).prevViewProjMat.fields.m30 = fVar23;
  (__this_02->fields).prevViewProjMat.fields.m01 = fVar24;
  (__this_02->fields).prevViewProjMat.fields.m11 = fVar25;
  (__this_02->fields).currentStereoViewProjMat = pUVar8;
  (__this_02->fields).prevViewProjMat.fields.m00 = fVar26;
  (__this_02->fields).prevViewProjMat.fields.m10 = fVar27;
  pUVar33 = __this_02;
  pUVar32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar32 != (UnityEngine_Transform_o *)0x0) {
    UVar36 = UnityEngine_Transform__get_forward(pUVar32,(MethodInfo *)0x0);
    (__this_02->fields).prevFrameCount = (int)UVar36.fields._0_8_;
    (__this_02->fields).wasActive = (int)((ulong)UVar36.fields._0_8_ >> 0x20);
    (__this_02->fields).prevFrameForward.fields.x = UVar36.fields.z;
    pUVar33 = __this_02;
    pUVar32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    if (pUVar32 != (UnityEngine_Transform_o *)0x0) {
      UVar36 = UnityEngine_Transform__get_up(pUVar32,(MethodInfo *)0x0);
      (__this_02->fields).prevFrameForward.fields.y = (float)(int)UVar36.fields._0_8_;
      (__this_02->fields).prevFrameForward.fields.z = (float)(int)((ulong)UVar36.fields._0_8_ >> 0x20);
      (__this_02->fields).prevFrameUp.fields.x = UVar36.fields.z;
      pUVar33 = __this_02;
      __this_01 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
      ;
      if (__this_01 != (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0) {
        UVar36 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
        (__this_02->fields).prevFrameUp.fields.y = (float)(int)UVar36.fields._0_8_;
        (__this_02->fields).prevFrameUp.fields.z = (float)(int)((ulong)UVar36.fields._0_8_ >> 0x20);
        (__this_02->fields).prevFramePos.fields.x = UVar36.fields.z;
        lVar4 = *(long *)&(__this_02->fields).currentViewProjMat.fields.m33;
        pUVar33 = __this_01;
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) goto label_0457b262;
          lVar5 = *(long *)&(__this_02->fields).prevViewProjMat.fields.m23;
          uVar31 = *(undefined8 *)(lVar4 + 0x30);
          uVar9 = *(undefined8 *)(lVar4 + 0x38);
          uVar10 = *(undefined8 *)(lVar4 + 0x40);
          uVar11 = *(undefined8 *)(lVar4 + 0x48);
          uVar12 = *(undefined8 *)(lVar4 + 0x58);
          if (lVar5 != 0) {
            uStackY_2f8 = (undefined4)*(undefined8 *)(lVar4 + 0x20);
            uStackY_2f4 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x20) >> 0x20);
            uStackY_2f0 = (undefined4)*(undefined8 *)(lVar4 + 0x28);
            uStackY_2ec = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x28) >> 0x20);
            if (*(int *)(lVar5 + 0x18) == 0) goto label_0457b262;
            *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar4 + 0x50);
            *(undefined8 *)(lVar5 + 0x58) = uVar12;
            *(undefined8 *)(lVar5 + 0x40) = uVar10;
            *(undefined8 *)(lVar5 + 0x48) = uVar11;
            *(undefined8 *)(lVar5 + 0x30) = uVar31;
            *(undefined8 *)(lVar5 + 0x38) = uVar9;
            *(undefined4 *)(lVar5 + 0x20) = uStackY_2f8;
            *(undefined4 *)(lVar5 + 0x24) = uStackY_2f4;
            *(undefined4 *)(lVar5 + 0x28) = uStackY_2f0;
            *(undefined4 *)(lVar5 + 0x2c) = uStackY_2ec;
            lVar4 = *(long *)&(__this_02->fields).currentViewProjMat.fields.m33;
            if (lVar4 != 0) {
              if (*(uint *)(lVar4 + 0x18) < 2) goto label_0457b262;
              lVar5 = *(long *)&(__this_02->fields).prevViewProjMat.fields.m23;
              uVar31 = *(undefined8 *)(lVar4 + 0x60);
              uVar9 = *(undefined8 *)(lVar4 + 0x68);
              uVar10 = *(undefined8 *)(lVar4 + 0x70);
              uVar11 = *(undefined8 *)(lVar4 + 0x78);
              uVar12 = *(undefined8 *)(lVar4 + 0x80);
              uVar13 = *(undefined8 *)(lVar4 + 0x88);
              uVar14 = *(undefined8 *)(lVar4 + 0x98);
              if (lVar5 != 0) {
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x90) = *(undefined8 *)(lVar4 + 0x90);
                  *(undefined8 *)(lVar5 + 0x98) = uVar14;
                  *(undefined8 *)(lVar5 + 0x80) = uVar12;
                  *(undefined8 *)(lVar5 + 0x88) = uVar13;
                  *(undefined8 *)(lVar5 + 0x70) = uVar10;
                  *(undefined8 *)(lVar5 + 0x78) = uVar11;
                  *(undefined8 *)(lVar5 + 0x60) = uVar31;
                  *(undefined8 *)(lVar5 + 0x68) = uVar9;
                  return;
                }
                goto label_0457b262;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0457b262:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b7 = '\x01';
  }
  pUVar34 = *(UnityEngine_Object_o **)&(pUVar33->fields).prevFramePos.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pfVar1 = &(pUVar33->fields).prevFramePos.fields.z;
  bVar28 = UnityEngine_Object__op_Equality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar28 != '\0') {
    pIVar30 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar33,MethodInfo_Camera_GetComponent_Camera);
    *(Il2CppObject **)&(pUVar33->fields).prevFramePos.fields.z = pIVar30;
    pUVar34 = (UnityEngine_Object_o *)pfVar1;
    il2cpp_runtime_helper_022b4080();
  }
  pUVar3 = *(UnityEngine_Camera_o **)pfVar1;
  if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
    uVar29 = UnityEngine_Camera__get_depthTextureMode(pUVar3,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(pUVar3,uVar29 | 1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b8 = '\x01';
  }
  pUVar6 = (UnityEngine_Object_o *)pUVar34[5].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar6,(MethodInfo *)0x0);
  if ((char)bVar28 != '\0') {
    pUVar2 = &pUVar34[5].fields;
    pUVar6 = (UnityEngine_Object_o *)pUVar2->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar6,(MethodInfo *)0x0);
    pUVar2->m_CachedPtr = 0;
    il2cpp_runtime_helper_022b4080(pUVar2,0);
  }
  pUVar7 = pUVar34[6].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar28 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  if ((char)bVar28 != '\0') {
    pUVar6 = pUVar34 + 6;
    pUVar7 = pUVar6->klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
    pUVar6->klass = (UnityEngine_Object_c *)0x0;
    il2cpp_runtime_helper_022b4080(pUVar6,0);
  }
  pUVar6 = pUVar34[4].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar6,(MethodInfo *)0x0);
  if ((char)bVar28 == '\0') {
    return;
  }
  ppvVar35 = &pUVar34[4].monitor;
  pUVar34 = *ppvVar35;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__DestroyImmediate_4e01e00(pUVar34,(MethodInfo *)0x0);
  *ppvVar35 = (void *)0x0;
  il2cpp_runtime_helper_022b4080(ppvVar35,0);
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__Start (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x457aef0

void UnityStandardAssets_ImageEffects_CameraMotionBlur__Start
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Object_Fields *pUVar2;
  long lVar3;
  long lVar4;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Object_c *pUVar6;
  UnityEngine_Matrix4x4_array *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  float fVar24;
  float fVar25;
  float fVar26;
  bool_conflict bVar27;
  uint uVar28;
  Il2CppObject *pIVar29;
  UnityEngine_GameObject_o *__this_01;
  undefined8 uVar30;
  MethodInfo *method_00;
  UnityEngine_Transform_o *pUVar31;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this_02;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this_03;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this_04;
  UnityEngine_Object_o *pUVar32;
  void **ppvVar33;
  UnityEngine_Vector3_o UVar34;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (g_data_057af0b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Matrix4x4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b6 = '\x01';
  }
  (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  pUVar32 = *(UnityEngine_Object_o **)&(__this->fields).prevFramePos.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar27 = UnityEngine_Object__op_Equality(pUVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar27 != '\0') {
    pIVar29 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    *(Il2CppObject **)&(__this->fields).prevFramePos.fields.z = pIVar29;
    il2cpp_runtime_helper_022b4080(&(__this->fields).prevFramePos.fields.z);
  }
  __this_03 = __this;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    bVar27 = UnityEngine_GameObject__get_activeInHierarchy(__this_01,(MethodInfo *)0x0);
    *(char *)((long)&(__this->fields).prevStereoViewProjMat + 4) = (char)bVar27;
    uVar30 = il2cpp_runtime_helper_022b2a40(TypeInfo_Matrix4x4,2);
    *(undefined8 *)&(__this->fields).currentViewProjMat.fields.m33 = uVar30;
    il2cpp_runtime_helper_022b4080(&(__this->fields).currentViewProjMat.fields.m33,uVar30);
    method_00 = (MethodInfo *)il2cpp_runtime_helper_022b2a40(TypeInfo_Matrix4x4,2);
    *(MethodInfo **)&(__this->fields).prevViewProjMat.fields.m23 = method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).prevViewProjMat.fields.m23);
    UnityStandardAssets_ImageEffects_CameraMotionBlur__CalculateViewProjection(__this,method_00);
    UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember(__this,method_00);
    *(undefined1 *)((long)&(__this->fields).prevStereoViewProjMat + 4) = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_Matrix4x4_array **)&(__this_03->fields).showVelocity;
  fVar25 = (__this_03->fields).currentViewProjMat.fields.m00;
  fVar26 = (__this_03->fields).currentViewProjMat.fields.m10;
  fVar21 = (__this_03->fields).currentViewProjMat.fields.m20;
  fVar22 = (__this_03->fields).currentViewProjMat.fields.m30;
  fVar23 = (__this_03->fields).currentViewProjMat.fields.m01;
  fVar24 = (__this_03->fields).currentViewProjMat.fields.m11;
  fVar17 = (__this_03->fields).currentViewProjMat.fields.m21;
  fVar18 = (__this_03->fields).currentViewProjMat.fields.m31;
  fVar19 = (__this_03->fields).currentViewProjMat.fields.m02;
  fVar20 = (__this_03->fields).currentViewProjMat.fields.m12;
  fVar14 = (__this_03->fields).currentViewProjMat.fields.m32;
  fVar15 = (__this_03->fields).currentViewProjMat.fields.m03;
  fVar16 = (__this_03->fields).currentViewProjMat.fields.m13;
  (__this_03->fields).prevViewProjMat.fields.m22 = (__this_03->fields).currentViewProjMat.fields.m22;
  (__this_03->fields).prevViewProjMat.fields.m32 = fVar14;
  (__this_03->fields).prevViewProjMat.fields.m03 = fVar15;
  (__this_03->fields).prevViewProjMat.fields.m13 = fVar16;
  (__this_03->fields).prevViewProjMat.fields.m21 = fVar17;
  (__this_03->fields).prevViewProjMat.fields.m31 = fVar18;
  (__this_03->fields).prevViewProjMat.fields.m02 = fVar19;
  (__this_03->fields).prevViewProjMat.fields.m12 = fVar20;
  (__this_03->fields).prevViewProjMat.fields.m20 = fVar21;
  (__this_03->fields).prevViewProjMat.fields.m30 = fVar22;
  (__this_03->fields).prevViewProjMat.fields.m01 = fVar23;
  (__this_03->fields).prevViewProjMat.fields.m11 = fVar24;
  (__this_03->fields).currentStereoViewProjMat = pUVar7;
  (__this_03->fields).prevViewProjMat.fields.m00 = fVar25;
  (__this_03->fields).prevViewProjMat.fields.m10 = fVar26;
  __this_04 = __this_03;
  pUVar31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar31 != (UnityEngine_Transform_o *)0x0) {
    UVar34 = UnityEngine_Transform__get_forward(pUVar31,(MethodInfo *)0x0);
    (__this_03->fields).prevFrameCount = (int)UVar34.fields._0_8_;
    (__this_03->fields).wasActive = (int)((ulong)UVar34.fields._0_8_ >> 0x20);
    (__this_03->fields).prevFrameForward.fields.x = UVar34.fields.z;
    __this_04 = __this_03;
    pUVar31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    if (pUVar31 != (UnityEngine_Transform_o *)0x0) {
      UVar34 = UnityEngine_Transform__get_up(pUVar31,(MethodInfo *)0x0);
      (__this_03->fields).prevFrameForward.fields.y = (float)(int)UVar34.fields._0_8_;
      (__this_03->fields).prevFrameForward.fields.z = (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
      (__this_03->fields).prevFrameUp.fields.x = UVar34.fields.z;
      __this_04 = __this_03;
      __this_02 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
      ;
      if (__this_02 != (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0) {
        UVar34 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
        (__this_03->fields).prevFrameUp.fields.y = (float)(int)UVar34.fields._0_8_;
        (__this_03->fields).prevFrameUp.fields.z = (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
        (__this_03->fields).prevFramePos.fields.x = UVar34.fields.z;
        lVar3 = *(long *)&(__this_03->fields).currentViewProjMat.fields.m33;
        __this_04 = __this_02;
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) == 0) goto label_0457b262;
          lVar4 = *(long *)&(__this_03->fields).prevViewProjMat.fields.m23;
          uVar30 = *(undefined8 *)(lVar3 + 0x30);
          uVar8 = *(undefined8 *)(lVar3 + 0x38);
          uVar9 = *(undefined8 *)(lVar3 + 0x40);
          uVar10 = *(undefined8 *)(lVar3 + 0x48);
          uVar11 = *(undefined8 *)(lVar3 + 0x58);
          if (lVar4 != 0) {
            uStack_60 = (undefined4)*(undefined8 *)(lVar3 + 0x20);
            uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
            uStack_58 = (undefined4)*(undefined8 *)(lVar3 + 0x28);
            uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20);
            if (*(int *)(lVar4 + 0x18) == 0) goto label_0457b262;
            *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0x50);
            *(undefined8 *)(lVar4 + 0x58) = uVar11;
            *(undefined8 *)(lVar4 + 0x40) = uVar9;
            *(undefined8 *)(lVar4 + 0x48) = uVar10;
            *(undefined8 *)(lVar4 + 0x30) = uVar30;
            *(undefined8 *)(lVar4 + 0x38) = uVar8;
            *(undefined4 *)(lVar4 + 0x20) = uStack_60;
            *(undefined4 *)(lVar4 + 0x24) = uStack_5c;
            *(undefined4 *)(lVar4 + 0x28) = uStack_58;
            *(undefined4 *)(lVar4 + 0x2c) = uStack_54;
            lVar3 = *(long *)&(__this_03->fields).currentViewProjMat.fields.m33;
            if (lVar3 != 0) {
              if (*(uint *)(lVar3 + 0x18) < 2) goto label_0457b262;
              lVar4 = *(long *)&(__this_03->fields).prevViewProjMat.fields.m23;
              uVar30 = *(undefined8 *)(lVar3 + 0x60);
              uVar8 = *(undefined8 *)(lVar3 + 0x68);
              uVar9 = *(undefined8 *)(lVar3 + 0x70);
              uVar10 = *(undefined8 *)(lVar3 + 0x78);
              uVar11 = *(undefined8 *)(lVar3 + 0x80);
              uVar12 = *(undefined8 *)(lVar3 + 0x88);
              uVar13 = *(undefined8 *)(lVar3 + 0x98);
              if (lVar4 != 0) {
                if (1 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar3 + 0x90);
                  *(undefined8 *)(lVar4 + 0x98) = uVar13;
                  *(undefined8 *)(lVar4 + 0x80) = uVar11;
                  *(undefined8 *)(lVar4 + 0x88) = uVar12;
                  *(undefined8 *)(lVar4 + 0x70) = uVar9;
                  *(undefined8 *)(lVar4 + 0x78) = uVar10;
                  *(undefined8 *)(lVar4 + 0x60) = uVar30;
                  *(undefined8 *)(lVar4 + 0x68) = uVar8;
                  return;
                }
                goto label_0457b262;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0457b262:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b7 = '\x01';
  }
  pUVar32 = *(UnityEngine_Object_o **)&(__this_04->fields).prevFramePos.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pfVar1 = &(__this_04->fields).prevFramePos.fields.z;
  bVar27 = UnityEngine_Object__op_Equality(pUVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar27 != '\0') {
    pIVar29 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_04,MethodInfo_Camera_GetComponent_Camera);
    *(Il2CppObject **)&(__this_04->fields).prevFramePos.fields.z = pIVar29;
    pUVar32 = (UnityEngine_Object_o *)pfVar1;
    il2cpp_runtime_helper_022b4080();
  }
  __this_00 = *(UnityEngine_Camera_o **)pfVar1;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    uVar28 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(__this_00,uVar28 | 1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b8 = '\x01';
  }
  pUVar5 = (UnityEngine_Object_o *)pUVar32[5].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar27 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar5,(MethodInfo *)0x0);
  if ((char)bVar27 != '\0') {
    pUVar2 = &pUVar32[5].fields;
    pUVar5 = (UnityEngine_Object_o *)pUVar2->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
    pUVar2->m_CachedPtr = 0;
    il2cpp_runtime_helper_022b4080(pUVar2,0);
  }
  pUVar6 = pUVar32[6].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar27 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
  if ((char)bVar27 != '\0') {
    pUVar5 = pUVar32 + 6;
    pUVar6 = pUVar5->klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
    pUVar5->klass = (UnityEngine_Object_c *)0x0;
    il2cpp_runtime_helper_022b4080(pUVar5,0);
  }
  pUVar5 = pUVar32[4].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar27 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar5,(MethodInfo *)0x0);
  if ((char)bVar27 != '\0') {
    ppvVar33 = &pUVar32[4].monitor;
    pUVar32 = *ppvVar33;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar32,(MethodInfo *)0x0);
    *ppvVar33 = (void *)0x0;
    il2cpp_runtime_helper_022b4080(ppvVar33,0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$OnEnable
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnEnable (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x457b270

void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnEnable
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Object_Fields *pUVar2;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Object_c *pUVar4;
  bool_conflict bVar5;
  uint uVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Object_o *pUVar8;
  void **ppvVar9;
  
  if (g_data_057af0b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b7 = '\x01';
  }
  pUVar8 = *(UnityEngine_Object_o **)&(__this->fields).prevFramePos.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pfVar1 = &(__this->fields).prevFramePos.fields.z;
  bVar5 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    *(Il2CppObject **)&(__this->fields).prevFramePos.fields.z = pIVar7;
    pUVar8 = (UnityEngine_Object_o *)pfVar1;
    il2cpp_runtime_helper_022b4080();
  }
  __this_00 = *(UnityEngine_Camera_o **)pfVar1;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    uVar6 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(__this_00,uVar6 | 1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b8 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)pUVar8[5].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar3,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar2 = &pUVar8[5].fields;
    pUVar3 = (UnityEngine_Object_o *)pUVar2->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
    pUVar2->m_CachedPtr = 0;
    il2cpp_runtime_helper_022b4080(pUVar2,0);
  }
  pUVar4 = pUVar8[6].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = pUVar8 + 6;
    pUVar4 = pUVar3->klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
    pUVar3->klass = (UnityEngine_Object_c *)0x0;
    il2cpp_runtime_helper_022b4080(pUVar3,0);
  }
  pUVar3 = pUVar8[4].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar3,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ppvVar9 = &pUVar8[4].monitor;
    pUVar8 = *ppvVar9;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar8,(MethodInfo *)0x0);
    *ppvVar9 = (void *)0x0;
    il2cpp_runtime_helper_022b4080(ppvVar9,0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnDisable (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x457b330

void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnDisable
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Shader_o **ppUVar1;
  UnityEngine_Material_o **ppUVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_LayerMask_o *pUVar5;
  
  if (g_data_057af0b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b8 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).replacementClear;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar3,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    ppUVar1 = &(__this->fields).replacementClear;
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
    *ppUVar1 = (UnityEngine_Shader_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar1,0);
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).motionBlurMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar3,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    ppUVar2 = &(__this->fields).motionBlurMaterial;
    pUVar3 = (UnityEngine_Object_o *)*ppUVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
    *ppUVar2 = (UnityEngine_Material_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar2,0);
  }
  pUVar3 = *(UnityEngine_Object_o **)&(__this->fields).excludeLayers;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar3,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar5 = &(__this->fields).excludeLayers;
    pUVar3 = *(UnityEngine_Object_o **)pUVar5;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
    *(undefined8 *)pUVar5 = 0;
    il2cpp_runtime_helper_022b4080(pUVar5,0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_CameraMotionBlur__CheckResources (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x457b490

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
  
  bVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_4475ed0
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
  uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).replacementClear);
  if ((*(char *)((long)&(__this->fields).supportHDRTextures + 1) != '\0') &&
     (*(int *)&(__this->fields).createdMaterials == 3)) {
    method_00 = (MethodInfo *)
                UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                          ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                           (__this->fields).shader,(__this->fields).motionBlurMaterial,in_RCX);
    (__this->fields).motionBlurMaterial = (UnityEngine_Material_o *)method_00;
    uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).motionBlurMaterial);
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
// 0x457b590

void UnityStandardAssets_ImageEffects_CameraMotionBlur__OnRenderImage
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,MethodInfo *method
               )

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
  ulong uVar16;
  double dVar17;
  UnityEngine_Matrix4x4_o value;
  UnityEngine_Matrix4x4_o value_00;
  UnityEngine_Matrix4x4_o value_01;
  UnityEngine_Matrix4x4_o value_02;
  UnityEngine_Matrix4x4_o __this_01;
  UnityEngine_Matrix4x4_o proj;
  UnityEngine_Matrix4x4_o lhs;
  UnityEngine_Matrix4x4_o lhs_00;
  UnityEngine_Matrix4x4_o value_03;
  UnityEngine_Matrix4x4_o value_04;
  UnityEngine_Matrix4x4_o rhs;
  UnityEngine_Matrix4x4_o rhs_00;
  UnityEngine_Matrix4x4_o rhs_01;
  UnityEngine_Matrix4x4_o rhs_02;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  UnityEngine_Matrix4x4_o m;
  char cVar20;
  bool_conflict bVar21;
  int iVar22;
  uint uVar23;
  int width;
  int32_t iVar24;
  UnityEngine_Transform_o *pUVar25;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this_02;
  UnityEngine_Texture_o *pUVar26;
  UnityEngine_GameObject_o *pUVar27;
  long lVar28;
  UnityEngine_Camera_o *pUVar29;
  int iVar30;
  UnityEngine_Material_o *pUVar31;
  ulong uVar32;
  UnityEngine_Matrix4x4_Fields *pUVar33;
  MethodInfo *pMVar34;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_LayerMask_o __this_03;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *method_00;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *pUVar35;
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
  undefined1 auVar36 [16];
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  UnityEngine_LayerMask_Fields UVar40;
  undefined4 uVar41;
  UnityEngine_Vector4_o value_05;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Quaternion_o q;
  UnityEngine_Matrix4x4_array *pUVar44;
  UnityEngine_Camera_o *pUVar45;
  intptr_t iVar46;
  System_Threading_CancellationTokenSource_o *pSVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  System_Collections_Generic_List_Material__o *pSVar50;
  UnityEngine_Camera_o *pUVar51;
  undefined1 auStack_658 [8];
  float fStack_650;
  float fStack_64c;
  float fStack_628;
  float fStack_624;
  undefined1 auStack_618 [40];
  UnityEngine_Shader_o *pUStack_5f0;
  System_Collections_Generic_List_Material__o *pSStack_5e8;
  UnityEngine_Matrix4x4_array *pUStack_5e0;
  UnityEngine_Texture_o *pUStack_5d0;
  undefined1 auStack_5c8 [8];
  float fStack_5c0;
  float fStack_5bc;
  undefined1 auStack_5b8 [4];
  undefined1 auStack_5b4 [12];
  float fStack_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  undefined1 auStack_598 [16];
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *pUStack_588;
  UnityEngine_Material_o *pUStack_580;
  float fStack_570;
  float fStack_56c;
  undefined8 uStack_568;
  undefined8 uStack_560;
  float fStack_558;
  float fStack_554;
  undefined8 uStack_550;
  undefined1 auStack_548 [16];
  float fStack_538;
  float fStack_534;
  undefined8 uStack_530;
  UnityEngine_RenderTexture_o *pUStack_528;
  float fStack_51c;
  UnityEngine_Matrix4x4_array *pUStack_518;
  UnityEngine_Shader_o *pUStack_510;
  UnityEngine_GameObject_o *pUStack_508;
  UnityEngine_Matrix4x4_array *pUStack_500;
  UnityEngine_Matrix4x4_array *pUStack_4f8;
  UnityEngine_Shader_o *pUStack_4f0;
  System_Collections_Generic_List_Material__o *pSStack_4e8;
  UnityEngine_Matrix4x4_array *pUStack_4e0;
  undefined1 auStack_4d8 [16];
  undefined1 auStack_4c8 [16];
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  UnityEngine_Matrix4x4_array *pUStack_4a8;
  UnityEngine_Camera_o *pUStack_4a0;
  intptr_t iStack_498;
  System_Threading_CancellationTokenSource_o *pSStack_490;
  float fStack_488;
  float fStack_484;
  undefined1 auStack_480 [16];
  UnityEngine_Camera_o *pUStack_470;
  ulong uStack_460;
  undefined1 auStack_458 [48];
  System_Collections_Generic_List_Material__o *pSStack_428;
  UnityEngine_Camera_o *pUStack_420;
  undefined1 auStack_418 [16];
  undefined1 auStack_408 [8];
  float fStack_400;
  float fStack_3fc;
  UnityEngine_Matrix4x4_array *pUStack_3f8;
  UnityEngine_Shader_o *pUStack_3f0;
  UnityEngine_GameObject_o *pUStack_3e8;
  UnityEngine_Matrix4x4_array *pUStack_3e0;
  UnityEngine_Matrix4x4_array *pUStack_3d8;
  UnityEngine_Shader_o *pUStack_3d0;
  System_Collections_Generic_List_Material__o *pSStack_3c8;
  UnityEngine_Matrix4x4_array *pUStack_3c0;
  undefined1 auStack_3b8 [64];
  UnityEngine_Matrix4x4_array *pUStack_378;
  UnityEngine_Shader_o *pUStack_370;
  UnityEngine_GameObject_o *pUStack_368;
  UnityEngine_Matrix4x4_array *pUStack_360;
  UnityEngine_Matrix4x4_array *pUStack_358;
  UnityEngine_Shader_o *pUStack_350;
  System_Collections_Generic_List_Material__o *pSStack_348;
  UnityEngine_Matrix4x4_array *pUStack_340;
  UnityEngine_Matrix4x4_array *pUStack_338;
  UnityEngine_Shader_o *pUStack_330;
  UnityEngine_GameObject_o *pUStack_328;
  UnityEngine_Matrix4x4_array *pUStack_320;
  UnityEngine_Matrix4x4_array *pUStack_318;
  UnityEngine_Shader_o *pUStack_310;
  System_Collections_Generic_List_Material__o *pSStack_308;
  UnityEngine_Matrix4x4_array *pUStack_300;
  UnityEngine_Matrix4x4_array *pUStack_2f8;
  UnityEngine_Shader_o *pUStack_2f0;
  UnityEngine_GameObject_o *pUStack_2e8;
  UnityEngine_Matrix4x4_array *pUStack_2e0;
  UnityEngine_Matrix4x4_array *pUStack_2d8;
  UnityEngine_Shader_o *pUStack_2d0;
  System_Collections_Generic_List_Material__o *pSStack_2c8;
  UnityEngine_Matrix4x4_array *pUStack_2c0;
  UnityEngine_Matrix4x4_array *pUStack_2b8;
  UnityEngine_Shader_o *pUStack_2b0;
  UnityEngine_GameObject_o *pUStack_2a8;
  UnityEngine_Matrix4x4_array *pUStack_2a0;
  UnityEngine_Matrix4x4_array *pUStack_298;
  UnityEngine_Shader_o *pUStack_290;
  System_Collections_Generic_List_Material__o *pSStack_288;
  UnityEngine_Matrix4x4_array *pUStack_280;
  UnityEngine_Matrix4x4_array *pUStack_278;
  UnityEngine_Camera_o *pUStack_270;
  intptr_t iStack_268;
  System_Threading_CancellationTokenSource_o *pSStack_260;
  float fStack_258;
  float fStack_254;
  undefined1 auStack_250 [16];
  UnityEngine_Camera_o *pUStack_240;
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
  UnityEngine_Matrix4x4_array *pUStack_f8;
  UnityEngine_Camera_o *pUStack_f0;
  intptr_t iStack_e8;
  System_Threading_CancellationTokenSource_o *pSStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  System_Collections_Generic_List_Material__o *pSStack_c8;
  UnityEngine_Camera_o *pUStack_c0;
  undefined1 auStack_b8 [48];
  System_Collections_Generic_List_Material__o *pSStack_88;
  UnityEngine_Camera_o *pUStack_80;
  UnityEngine_Matrix4x4_array *pUStack_78;
  UnityEngine_Shader_o *pUStack_70;
  UnityEngine_GameObject_o *pUStack_68;
  UnityEngine_Matrix4x4_array *pUStack_60;
  UnityEngine_Matrix4x4_array *pUStack_58;
  UnityEngine_Shader_o *pUStack_50;
  System_Collections_Generic_List_Material__o *pSStack_48;
  UnityEngine_Matrix4x4_array *pUStack_40;
  
  if (g_data_057af0b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CameraMotionBlur);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Matrix4x4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_DisplayVelocityScale");
    il2cpp_runtime_helper_023445d0(&"_ToPrevViewProjCombined");
    il2cpp_runtime_helper_023445d0(&"_Jitter");
    il2cpp_runtime_helper_023445d0(&"_BlurDirectionPacked");
    il2cpp_runtime_helper_023445d0(&"_MaxVelocity");
    il2cpp_runtime_helper_023445d0(&"_StereoToPrevViewProjCombined0");
    il2cpp_runtime_helper_023445d0(&"_TileTexDebug");
    il2cpp_runtime_helper_023445d0(&"_MaxRadiusOrKInPaper");
    il2cpp_runtime_helper_023445d0(&"_StereoToPrevViewProjCombined1");
    il2cpp_runtime_helper_023445d0(&"_NoiseTex");
    il2cpp_runtime_helper_023445d0(&"_NeighbourMaxTex");
    il2cpp_runtime_helper_023445d0(&"_InvViewProj");
    il2cpp_runtime_helper_023445d0(&"_VelocityScale");
    il2cpp_runtime_helper_023445d0(&"_PrevViewProj");
    il2cpp_runtime_helper_023445d0(&"_VelTex");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"_MinVelocity");
    il2cpp_runtime_helper_023445d0(&"_SoftZDistance");
    g_data_057af0b9 = '\x01';
  }
  pSStack_3c8 = (System_Collections_Generic_List_Material__o *)0x0;
  pUStack_3c0 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_3d8 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_3d0 = (UnityEngine_Shader_o *)0x0;
  pUStack_3e8 = (UnityEngine_GameObject_o *)0x0;
  pUStack_3e0 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_3f8 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_3f0 = (UnityEngine_Shader_o *)0x0;
  pSStack_c8 = (System_Collections_Generic_List_Material__o *)0x0;
  pUStack_c0 = (UnityEngine_Camera_o *)0x0;
  uStack_d8._0_4_ = 0.0;
  uStack_d8._4_4_ = 0.0;
  auStack_d0._0_4_ = 0.0;
  auStack_d0._4_4_ = 0.0;
  iStack_e8 = 0;
  pSStack_e0 = (System_Threading_CancellationTokenSource_o *)0x0;
  pUStack_f8 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_f0 = (UnityEngine_Camera_o *)0x0;
  pSStack_308 = (System_Collections_Generic_List_Material__o *)0x0;
  pUStack_300 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_318 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_310 = (UnityEngine_Shader_o *)0x0;
  pUStack_328 = (UnityEngine_GameObject_o *)0x0;
  pUStack_320 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_338 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_330 = (UnityEngine_Shader_o *)0x0;
  auStack_3b8._48_8_ = (System_Collections_Generic_List_Material__o *)0x0;
  auStack_3b8._56_4_ = 0.0;
  auStack_3b8._60_4_ = 0.0;
  auStack_3b8._32_4_ = 0.0;
  auStack_3b8._36_4_ = 0.0;
  auStack_3b8._40_4_ = 0.0;
  auStack_3b8._44_4_ = 0.0;
  auStack_3b8._16_8_ = 0;
  auStack_3b8._24_8_ = (System_Threading_CancellationTokenSource_o *)0x0;
  auStack_3b8._0_8_ = (UnityStandardAssets_ImageEffects_CameraMotionBlur_c *)0x0;
  auStack_3b8._8_8_ = (void *)0x0;
  pSStack_348 = (System_Collections_Generic_List_Material__o *)0x0;
  pUStack_340 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_358 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_350 = (UnityEngine_Shader_o *)0x0;
  pUStack_368 = (UnityEngine_GameObject_o *)0x0;
  pUStack_360 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_378 = (UnityEngine_Matrix4x4_array *)0x0;
  pUStack_370 = (UnityEngine_Shader_o *)0x0;
  cVar20 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar20 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)&(__this->fields).createdMaterials == 0) {
    pUStack_588 = *(UnityStandardAssets_ImageEffects_CameraMotionBlur_o **)
                   &(__this->fields).prevFrameUp.fields.y;
    pUStack_580 = (UnityEngine_Material_o *)0x0;
    fVar37 = (__this->fields).prevFramePos.fields.x;
    method_00 = __this;
    pUVar25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
      UVar42 = UnityEngine_Transform__get_position(pUVar25,(MethodInfo *)0x0);
      UVar43.fields.z = fVar37;
      UVar43.fields._0_8_ = pUStack_588;
      UVar42 = UnityEngine_Vector3__Slerp(UVar43,UVar42,0.75,(MethodInfo *)0x0);
      (__this->fields).prevFrameUp.fields.y = (float)(int)UVar42.fields._0_8_;
      (__this->fields).prevFrameUp.fields.z = (float)(int)((ulong)UVar42.fields._0_8_ >> 0x20);
      (__this->fields).prevFramePos.fields.x = UVar42.fields.z;
      goto label_0457b81c;
    }
  }
  else {
label_0457b81c:
    method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)&g_data_0000000d;
    bVar21 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xd,(MethodInfo *)0x0);
    iVar24 = 2;
    if ((char)bVar21 != '\0') {
      iVar24 = 0xd;
    }
    if (source != (UnityEngine_RenderTexture_o *)0x0) {
      iVar22 = (*(source->klass->vtable)._5_get_width.methodPtr)
                         (source,(source->klass->vtable)._5_get_width.method);
      fVar37 = (__this->fields).velocityScale;
      if ((TypeInfo_CameraMotionBlur->fields).currentViewProjMat.fields.m03 == 0.0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar15 = (long)((int)fVar37 + iVar22 + -1);
      uVar16 = lVar15 / (long)(int)fVar37;
      iVar22 = (*(source->klass->vtable)._7_get_height.methodPtr)
                         (source,(source->klass->vtable)._7_get_height.method,
                          lVar15 % (long)(int)fVar37 & 0xffffffff);
      fVar37 = (__this->fields).velocityScale;
      uVar32 = 0;
      method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)(uVar16 & 0xffffffff);
      pUStack_588 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                    UnityEngine_RenderTexture__GetTemporary_4de1d50
                              ((int32_t)uVar16,(iVar22 + (int)fVar37 + -1) / (int)fVar37,0,iVar24,
                               (MethodInfo *)0x0);
      fVar37 = (__this->fields).movementScale;
      fVar4 = 2.0;
      if (2.0 <= fVar37) {
        fVar4 = fVar37;
      }
      (__this->fields).movementScale = fVar4;
      iVar22 = *(int *)&(__this->fields).createdMaterials;
      if (iVar22 == 3) {
        method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)(__this->fields).motionBlurMaterial
        ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar23 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        uVar32 = (ulong)(uVar23 & 0xff);
        iVar22 = *(int *)&(__this->fields).createdMaterials;
      }
      pUVar35 = pUStack_588;
      pUStack_528 = destination;
      uStack_460 = uVar32;
      if ((iVar22 == 4) || (iVar22 == 2 || (int)uVar32 != 0)) {
        fVar37 = (__this->fields).movementScale;
        if ((TypeInfo_CameraMotionBlur->fields).currentViewProjMat.fields.m03 == 0.0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = TypeInfo_CameraMotionBlur;
        fVar4 = **(float **)&(TypeInfo_CameraMotionBlur->fields).currentViewProjMat.fields.m10;
        if (fVar4 <= fVar37) {
          fVar37 = fVar4;
        }
        (__this->fields).movementScale = fVar37;
        if (pUVar35 != (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0) {
          iVar22 = (*pUVar35->klass[1]._1.image)(pUVar35,pUVar35->klass[1]._1.gc_desc);
          iVar30 = (int)(__this->fields).movementScale;
          iVar22 = iVar22 + iVar30;
          goto label_0457ba4d;
        }
      }
      else if (pUStack_588 != (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0) {
        iVar22 = (*pUStack_588->klass[1]._1.image)(pUStack_588,pUStack_588->klass[1]._1.gc_desc);
        fVar37 = (__this->fields).movementScale;
        if ((TypeInfo_CameraMotionBlur->fields).currentViewProjMat.fields.m03 == 0.0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar30 = (int)fVar37;
        iVar22 = iVar30 + iVar22;
label_0457ba4d:
        width = (iVar22 + -1) / iVar30;
        iVar22 = (*pUVar35->klass[1]._1.byval_arg.data)
                           (pUVar35,*(undefined8 *)&pUVar35->klass[1]._1.byval_arg.bits,(iVar22 + -1) % iVar30
                           );
        iVar30 = (int)(__this->fields).movementScale;
        iVar22 = iVar22 + iVar30 + -1;
        height = iVar22 / iVar30;
        iVar22 = (*pUVar35->klass[1]._1.image)
                           (pUVar35,pUVar35->klass[1]._1.gc_desc,(long)iVar22 % (long)iVar30 & 0xffffffff);
        pUStack_5d0 = (UnityEngine_Texture_o *)CONCAT44(pUStack_5d0._4_4_,iVar22 / width);
        __this_02 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                    UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,iVar24,(MethodInfo *)0x0);
        pUVar26 = (UnityEngine_Texture_o *)
                  UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,iVar24,(MethodInfo *)0x0);
        method_00 = pUVar35;
        UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)pUVar35,0,(MethodInfo *)0x0);
        if ((__this_02 != (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0) &&
           (method_00 = __this_02,
           UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)__this_02,0,(MethodInfo *)0x0),
           pUVar26 != (UnityEngine_Texture_o *)0x0)) {
          UnityEngine_Texture__set_filterMode(pUVar26,0,(MethodInfo *)0x0);
          pUVar14 = (UnityEngine_Object_o *)(__this->fields).dx11MotionBlurMaterial;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar21 = UnityEngine_Object__op_Implicit(pUVar14,(MethodInfo *)0x0);
          if ((char)bVar21 != '\0') {
            __this_00 = (UnityEngine_Texture_o *)(__this->fields).dx11MotionBlurMaterial;
            method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
            if (__this_00 == (UnityEngine_Texture_o *)0x0) goto label_0457e068;
            UnityEngine_Texture__set_filterMode(__this_00,0,(MethodInfo *)0x0);
          }
          UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)source,1,(MethodInfo *)0x0);
          UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)pUVar35,1,(MethodInfo *)0x0);
          UnityEngine_Texture__set_wrapMode(pUVar26,1,(MethodInfo *)0x0);
          pMVar34 = (MethodInfo *)0x1;
          UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)__this_02,1,(MethodInfo *)0x0);
          UnityStandardAssets_ImageEffects_CameraMotionBlur__CalculateViewProjection(__this,pMVar34);
          method_00 = __this;
          pUVar27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
          ;
          if (pUVar27 != (UnityEngine_GameObject_o *)0x0) {
            pMVar34 = (MethodInfo *)0x0;
            bVar21 = UnityEngine_GameObject__get_activeInHierarchy(pUVar27,(MethodInfo *)0x0);
            if (((char)bVar21 != '\0') &&
               (*(char *)((long)&(__this->fields).prevStereoViewProjMat + 4) == '\0')) {
              UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember(__this,pMVar34);
            }
            method_00 = __this;
            pUVar27 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar27 != (UnityEngine_GameObject_o *)0x0) {
              bVar21 = UnityEngine_GameObject__get_activeInHierarchy(pUVar27,(MethodInfo *)0x0);
              *(char *)((long)&(__this->fields).prevStereoViewProjMat + 4) = (char)bVar21;
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
              UnityEngine_Matrix4x4__Inverse((UnityEngine_Matrix4x4_o *)auStack_618,m,(MethodInfo *)0x0);
              pSStack_3c8 = pSStack_5e8;
              pUStack_3c0 = pUStack_5e0;
              pUStack_3d8 = (UnityEngine_Matrix4x4_array *)auStack_618._32_8_;
              pUStack_3d0 = pUStack_5f0;
              pUStack_3e8 = (UnityEngine_GameObject_o *)auStack_618._16_8_;
              pUStack_3e0 = (UnityEngine_Matrix4x4_array *)auStack_618._24_8_;
              pUStack_3f8 = (UnityEngine_Matrix4x4_array *)auStack_618._0_8_;
              pUStack_3f0 = (UnityEngine_Shader_o *)auStack_618._8_8_;
              pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
              method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
              if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                value.fields.m20 = (float)auStack_618._8_4_;
                value.fields.m30 = (float)auStack_618._12_4_;
                value.fields.m00 = (float)auStack_618._0_4_;
                value.fields.m10 = (float)auStack_618._4_4_;
                value.fields.m01 = (float)auStack_618._16_4_;
                value.fields.m11 = (float)auStack_618._20_4_;
                value.fields.m21 = (float)auStack_618._24_4_;
                value.fields.m31 = (float)auStack_618._28_4_;
                value.fields.m02 = (float)auStack_618._32_4_;
                value.fields.m12 = (float)auStack_618._36_4_;
                value.fields._40_8_ = pUStack_5f0;
                value.fields._48_8_ = pSStack_5e8;
                value.fields._56_8_ = pUStack_5e0;
                UnityEngine_Material__SetMatrix(pUVar31,"_InvViewProj",value,(MethodInfo *)0x0);
                pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                ppUVar2 = &(__this->fields).currentStereoViewProjMat;
                pUStack_518 = *ppUVar2;
                pUStack_510 = *(UnityEngine_Shader_o **)&(__this->fields).prevViewProjMat.fields;
                pUStack_508 = *(UnityEngine_GameObject_o **)&(__this->fields).prevViewProjMat.fields.m20;
                pUStack_500 = *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields.m01;
                pUStack_4f8 = *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields.m21;
                pUStack_4f0 = *(UnityEngine_Shader_o **)&(__this->fields).prevViewProjMat.fields.m02;
                pSStack_4e8 = *(System_Collections_Generic_List_Material__o **)
                               &(__this->fields).prevViewProjMat.fields.m22;
                pUStack_4e0 = *(UnityEngine_Matrix4x4_array **)&(__this->fields).prevViewProjMat.fields.m03;
                method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                  ppUVar3 = &(__this->fields).currentStereoViewProjMat;
                  UnityEngine_Material__SetMatrix
                            (pUVar31,"_PrevViewProj",
                             (UnityEngine_Matrix4x4_o)*(UnityEngine_Matrix4x4_Fields *)ppUVar2,
                             (MethodInfo *)0x0);
                  pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                  method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)auStack_458;
                  rhs.fields._8_8_ = pUStack_3f0;
                  rhs.fields._0_8_ = pUStack_3f8;
                  rhs.fields._16_8_ = pUStack_3e8;
                  rhs.fields._24_8_ = pUStack_3e0;
                  rhs.fields._32_8_ = pUStack_3d8;
                  rhs.fields._40_8_ = pUStack_3d0;
                  rhs.fields._48_8_ = pSStack_3c8;
                  rhs.fields._56_8_ = pUStack_3c0;
                  UnityEngine_Matrix4x4__op_Multiply
                            ((UnityEngine_Matrix4x4_o *)method_00,
                             (UnityEngine_Matrix4x4_o)*(UnityEngine_Matrix4x4_Fields *)ppUVar3,rhs,
                             (MethodInfo *)0x0);
                  auStack_480._8_8_ = pSStack_428;
                  pUStack_470 = pUStack_420;
                  fStack_488 = (float)auStack_458._32_4_;
                  fStack_484 = (float)auStack_458._36_4_;
                  auStack_480._0_8_ = auStack_458._40_8_;
                  iStack_498 = auStack_458._16_8_;
                  pSStack_490 = (System_Threading_CancellationTokenSource_o *)auStack_458._24_8_;
                  pUStack_4a8 = (UnityEngine_Matrix4x4_array *)auStack_458._0_8_;
                  pUStack_4a0 = (UnityEngine_Camera_o *)auStack_458._8_8_;
                  if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                    value_00.fields.m20 = (float)auStack_458._8_4_;
                    value_00.fields.m30 = (float)auStack_458._12_4_;
                    value_00.fields.m00 = (float)auStack_458._0_4_;
                    value_00.fields.m10 = (float)auStack_458._4_4_;
                    value_00.fields.m01 = (float)auStack_458._16_4_;
                    value_00.fields.m11 = (float)auStack_458._20_4_;
                    value_00.fields.m21 = (float)auStack_458._24_4_;
                    value_00.fields.m31 = (float)auStack_458._28_4_;
                    value_00.fields.m02 = (float)auStack_458._32_4_;
                    value_00.fields.m12 = (float)auStack_458._36_4_;
                    value_00.fields.m22 = (float)auStack_458._40_4_;
                    value_00.fields.m32 = (float)auStack_458._44_4_;
                    value_00.fields._48_8_ = pSStack_428;
                    value_00.fields._56_8_ = pUStack_420;
                    pUVar44 = (UnityEngine_Matrix4x4_array *)auStack_458._0_8_;
                    pUVar45 = (UnityEngine_Camera_o *)auStack_458._8_8_;
                    iVar46 = auStack_458._16_8_;
                    pSVar47 = (System_Threading_CancellationTokenSource_o *)auStack_458._24_8_;
                    uVar48 = auStack_458._32_8_;
                    uVar49 = auStack_458._40_8_;
                    pSVar50 = pSStack_428;
                    pUVar51 = pUStack_420;
                    UnityEngine_Material__SetMatrix(pUVar31,"_ToPrevViewProjCombined",value_00,(MethodInfo *)0x0);
                    pUVar29 = *(UnityEngine_Camera_o **)&(__this->fields).prevFramePos.fields.z;
                    method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                    if (pUVar29 != (UnityEngine_Camera_o *)0x0) {
                      bVar21 = UnityEngine_Camera__get_stereoEnabled(pUVar29,(MethodInfo *)0x0);
                      if ((char)bVar21 == '\0') {
label_0457c4e0:
                        pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                        method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                        if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                          fStack_56c = (float)(int)pUStack_5d0._0_4_;
                          UnityEngine_Material__SetFloat(pUVar31,"_MaxVelocity",fStack_56c,(MethodInfo *)0x0);
                          pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                          method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                          if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                            UnityEngine_Material__SetFloat(pUVar31,"_MaxRadiusOrKInPaper",fStack_56c,(MethodInfo *)0x0);
                            pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                            method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                            if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                              UnityEngine_Material__SetFloat
                                        (pUVar31,"_MinVelocity",(__this->fields).rotationScale,(MethodInfo *)0x0
                                        );
                              pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                              method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                              if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                UnityEngine_Material__SetFloat
                                          (pUVar31,"_VelocityScale",(__this->fields).maxVelocity,(MethodInfo *)0x0
                                          );
                                pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                                method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                                if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                  UnityEngine_Material__SetFloat
                                            (pUVar31,"_Jitter",*(float *)&(__this->fields).noiseTexture,
                                             (MethodInfo *)0x0);
                                  pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                                  method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                                  if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                    UnityEngine_Material__SetTexture
                                              (pUVar31,"_NoiseTex",
                                               (UnityEngine_Texture_o *)
                                               (__this->fields).dx11MotionBlurMaterial,(MethodInfo *)0x0);
                                    pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                                    method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                                    if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                      pUStack_5d0 = pUVar26;
                                      UnityEngine_Material__SetTexture
                                                (pUVar31,"_VelTex",(UnityEngine_Texture_o *)pUVar35,
                                                 (MethodInfo *)0x0);
                                      pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
                                      method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0;
                                      if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                        UnityEngine_Material__SetTexture
                                                  (pUVar31,"_NeighbourMaxTex",pUStack_5d0,(MethodInfo *)0x0);
                                        method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                    (__this->fields).replacementClear;
                                        if (method_00 !=
                                            (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0) {
                                          UnityEngine_Material__SetTexture
                                                    ((UnityEngine_Material_o *)method_00,"_TileTexDebug",
                                                     (UnityEngine_Texture_o *)__this_02,(MethodInfo *)0x0);
                                          if (*(char *)((long)&(__this->fields).createdMaterials + 4) == '\0')
                                          {
label_0457cc2d:
                                            if (*(int *)&(__this->fields).createdMaterials == 0) {
                                              if (g_data_057af101 == '\0') {
                                                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector4);
                                                g_data_057af101 = '\x01';
                                              }
                                              _fStack_400 = 0;
                                              auStack_408 = (undefined1  [8])
                                                            *(ulong *)(*(long *)(TypeInfo_Vector4 + 0xb8) + 8);
                                              method_00 = __this;
                                              pUVar25 = UnityEngine_Component__get_transform
                                                                  ((UnityEngine_Component_o *)__this,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                                                UVar42 = UnityEngine_Transform__get_up
                                                                   (pUVar25,(MethodInfo *)0x0);
                                                auStack_548._8_4_ = extraout_XMM0_Dc;
                                                auStack_548._0_8_ = UVar42.fields._0_8_;
                                                auStack_548._12_4_ = extraout_XMM0_Dd;
                                                fVar37 = UVar42.fields.z;
                                                if (g_data_057a6844 == '\0') {
                                                  auStack_5c8._0_4_ = UVar42.fields.z;
                                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                  g_data_057a6844 = '\x01';
                                                  fVar37 = (float)auStack_5c8._0_4_;
                                                }
                                                _fStack_558 = *(undefined8 *)
                                                               (*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                                                uStack_550._0_4_ = 0.0;
                                                uStack_550._4_4_ = 0.0;
                                                auStack_5c8._0_4_ =
                                                     fVar37 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20
                                                                        );
                                                uVar5 = (__this->fields).prevFrameUp.fields.y;
                                                uVar11 = (__this->fields).prevFrameUp.fields.z;
                                                fStack_5a0 = 0.0;
                                                fStack_59c = 0.0;
                                                fStack_538 = (__this->fields).prevFramePos.fields.x;
                                                method_00 = __this;
                                                fStack_5a8 = (float)uVar5;
                                                fStack_5a4 = (float)uVar11;
                                                pUVar25 = UnityEngine_Component__get_transform
                                                                    ((UnityEngine_Component_o *)__this,
                                                                     (MethodInfo *)0x0);
                                                if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                                                  UVar42 = UnityEngine_Transform__get_position
                                                                     (pUVar25,(MethodInfo *)0x0);
                                                  auVar39._0_8_ = UVar42.fields._0_8_;
                                                  auVar39._8_4_ = extraout_XMM0_Dc_00;
                                                  auVar39._12_4_ = extraout_XMM0_Dd_00;
                                                  fStack_4b8 = fStack_5a4;
                                                  fStack_4b4 = fStack_5a4;
                                                  fStack_4b0 = fStack_5a0;
                                                  fStack_4ac = fStack_59c;
                                                  if (g_data_057a6841 == '\0') {
                                                    auStack_598 = auVar39;
                                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                    g_data_057a6841 = '\x01';
                                                    auVar39 = auStack_598;
                                                  }
                                                  fStack_5a8 = fStack_5a8 - auVar39._0_4_;
                                                  fStack_4b8 = fStack_4b8 - UVar42.fields.y;
                                                  fVar37 = fStack_538 - UVar42.fields.z;
                                                  fStack_538 = fVar37;
                                                  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                    fVar37 = fStack_538;
                                                  }
                                                  fStack_570 = fVar37 * fVar37 +
                                                               fStack_4b8 * fStack_4b8 +
                                                               fStack_5a8 * fStack_5a8;
                                                  if (fStack_570 < 0.0) {
                                                    fStack_570 = sqrtf(fStack_570);
                                                  }
                                                  else {
                                                    fStack_570 = SQRT(fStack_570);
                                                  }
                                                  method_00 = __this;
                                                  pUVar25 = UnityEngine_Component__get_transform
                                                                      ((UnityEngine_Component_o *)__this,
                                                                       (MethodInfo *)0x0);
                                                  if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                                                    UVar42 = UnityEngine_Transform__get_up
                                                                       (pUVar25,(MethodInfo *)0x0);
                                                    uVar9._0_4_ = UVar42.fields.z;
                                                    fVar12 = UVar42.fields.y;
                                                    uVar16._0_4_ = (__this->fields).prevFrameForward.fields.y;
                                                    uVar16._4_4_ = (__this->fields).prevFrameForward.fields.z;
                                                    fVar37 = (__this->fields).prevFrameUp.fields.x;
                                                    uStack_560._0_4_ = 0.0;
                                                    uStack_560._4_4_ = 0.0;
                                                    auStack_5b4._4_4_ = extraout_XMM0_Dc_01;
                                                    _auStack_5b8 = UVar42.fields._0_8_;
                                                    auStack_5b4._8_4_ = extraout_XMM0_Dd_01;
                                                    auVar6 = (undefined1  [4])UVar42.fields.x;
                                                    fVar4 = 0.0;
                                                    fVar10 = 0.0;
                                                    uStack_568 = uVar16;
                                                    if (g_data_057ac31a == '\0') {
                                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                      g_data_057ac31a = '\x01';
                                                      auVar6 = auStack_5b8;
                                                      uVar16._0_4_ = (float)uStack_568;
                                                      uVar16._4_4_ = uStack_568._4_4_;
                                                      fVar4 = (float)uStack_560;
                                                      fVar10 = uStack_560._4_4_;
                                                    }
                                                    uVar9._4_4_ = (float)uVar9 * (float)uVar9 +
                                                                  fVar12 * fVar12 +
                                                                  (float)auVar6 * (float)auVar6;
                                                    auStack_4c8._4_4_ = uVar16._4_4_;
                                                    auStack_4c8._0_4_ = uVar16._4_4_;
                                                    auStack_4c8._8_4_ = fVar4;
                                                    auStack_4c8._12_4_ = fVar10;
                                                    fVar4 = fVar37 * fVar37 +
                                                            uVar16._4_4_ * uVar16._4_4_ +
                                                            (float)uVar16 * (float)uVar16;
                                                    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0)
                                                    {
                                                      auStack_598._0_4_ = uVar9._4_4_;
                                                      auStack_4d8._0_4_ = fVar4;
                                                      il2cpp_runtime_helper_02337ed0();
                                                      fVar4 = (float)auStack_4d8._0_4_;
                                                      uVar9._4_4_ = (float)auStack_598._0_4_;
                                                      uVar16._0_4_ = (float)uStack_568;
                                                    }
                                                    uVar9._4_4_ = uVar9._4_4_ * fVar4;
                                                    auVar18._12_4_ = 0;
                                                    auVar18._0_12_ = auStack_598._4_12_;
                                                    auStack_598 = auVar18 << 0x20;
                                                    if (uVar9._4_4_ < 0.0) {
                                                      uVar9._4_4_ = sqrtf(uVar9._4_4_);
                                                      uVar16._0_4_ = (float)uStack_568;
                                                      pMVar34 = TypeInfo_Math;
                                                    }
                                                    else {
                                                      uVar9._4_4_ = SQRT(uVar9._4_4_);
                                                      pMVar34 = TypeInfo_Math;
                                                    }
                                                    TypeInfo_Math = pMVar34;
                                                    if (1e-15 <= uVar9._4_4_) {
                                                      uVar9._4_4_ = ((float)uVar9 * fVar37 +
                                                                    (float)auStack_4c8._0_4_ * fVar12 +
                                                                    (float)uVar16 * (float)auStack_5b8) /
                                                                    uVar9._4_4_;
                                                      fVar37 = 1.0;
                                                      if (uVar9._4_4_ <= 1.0) {
                                                        fVar37 = uVar9._4_4_;
                                                      }
                                                      if (*(int *)((long)&pMVar34[2].parameters + 4) == 0) {
                                                        il2cpp_runtime_helper_02337ed0();
                                                      }
                                                      dVar17 = acos((double)(float)(~-(uint)(-1.0 <= uVar9.
                                                       _4_4_) & 0xbf800000 |
                                                       (uint)fVar37 & -(uint)(-1.0 <= uVar9._4_4_)),pMVar34);
                                                      auStack_598._0_4_ = (float)dVar17 * 57.29578;
                                                    }
                                                    pUVar29 = *(UnityEngine_Camera_o **)
                                                               &(__this->fields).prevFramePos.fields.z;
                                                    method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                    if (pUVar29 != (UnityEngine_Camera_o *)0x0) {
                                                      fVar37 = UnityEngine_Camera__get_fieldOfView
                                                                         (pUVar29,(MethodInfo *)0x0);
                                                      iVar22 = (*(source->klass->vtable)._5_get_width.
                                                                 methodPtr)();
                                                      auStack_598 = ZEXT416((uint)((float)iVar22 * 0.75 *
                                                                                   ((float)auStack_598._0_4_ /
                                                                                   fVar37) *
                                                                                  (__this->fields).
                                                                                  previewScale.fields.z));
                                                      method_00 = __this;
                                                      pUVar25 = UnityEngine_Component__get_transform
                                                                          ((UnityEngine_Component_o *)__this,
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                                                        UVar42 = UnityEngine_Transform__get_forward
                                                                           (pUVar25,(MethodInfo *)0x0);
                                                        uVar16._0_4_ = UVar42.fields.z;
                                                        fVar10 = UVar42.fields.y;
                                                        auVar6 = (undefined1  [4])
                                                                 (__this->fields).prevFrameCount;
                                                        fVar12 = (float)(__this->fields).wasActive;
                                                        auStack_5b4._0_4_ = fVar12;
                                                        auStack_5b8 = auVar6;
                                                        fVar37 = (__this->fields).prevFrameForward.fields.x;
                                                        auStack_5b4._4_8_ = 0;
                                                        auStack_4c8._8_4_ = extraout_XMM0_Dc_02;
                                                        auStack_4c8._0_8_ = UVar42.fields._0_8_;
                                                        auStack_4c8._12_4_ = extraout_XMM0_Dd_02;
                                                        fVar4 = UVar42.fields.x;
                                                        UVar40.m_Mask = 0;
                                                        uVar41 = 0;
                                                        if (g_data_057ac31a == '\0') {
                                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                          g_data_057ac31a = '\x01';
                                                          fVar4 = (float)auStack_4c8._0_4_;
                                                          auVar6 = auStack_5b8;
                                                          fVar12 = (float)auStack_5b4._0_4_;
                                                          UVar40.m_Mask = auStack_5b4._4_4_;
                                                          uVar41 = auStack_5b4._8_4_;
                                                        }
                                                        fVar4 = (float)uVar16 * (float)uVar16 +
                                                                fVar10 * fVar10 + fVar4 * fVar4;
                                                        auStack_4d8._4_4_ = fVar12;
                                                        auStack_4d8._0_4_ = fVar12;
                                                        auStack_4d8._8_4_ = UVar40.m_Mask;
                                                        auStack_4d8._12_4_ = uVar41;
                                                        uVar16._4_4_ = fVar37 * fVar37 +
                                                                       fVar12 * fVar12 +
                                                                       (float)auVar6 * (float)auVar6;
                                                        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) ==
                                                            0) {
                                                          uStack_568 = CONCAT44(uStack_568._4_4_,fVar4);
                                                          auStack_418._0_4_ = uVar16._4_4_;
                                                          il2cpp_runtime_helper_02337ed0();
                                                          uVar16._4_4_ = (float)auStack_418._0_4_;
                                                          auVar6 = auStack_5b8;
                                                          fVar4 = (float)uStack_568;
                                                        }
                                                        fVar4 = fVar4 * uVar16._4_4_;
                                                        uStack_568 = uStack_568 & 0xffffffff00000000;
                                                        if (fVar4 < 0.0) {
                                                          fVar4 = sqrtf(fVar4);
                                                          auVar6 = auStack_5b8;
                                                          pMVar34 = TypeInfo_Math;
                                                        }
                                                        else {
                                                          fVar4 = SQRT(fVar4);
                                                          pMVar34 = TypeInfo_Math;
                                                        }
                                                        TypeInfo_Math = pMVar34;
                                                        if (1e-15 <= fVar4) {
                                                          fVar4 = ((float)uVar16 * fVar37 +
                                                                  (float)auStack_4d8._0_4_ * fVar10 +
                                                                  (float)auVar6 * (float)auStack_4c8._0_4_) /
                                                                  fVar4;
                                                          fVar37 = 1.0;
                                                          if (fVar4 <= 1.0) {
                                                            fVar37 = fVar4;
                                                          }
                                                          if (*(int *)((long)&pMVar34[2].parameters + 4) == 0)
                                                          {
                                                            il2cpp_runtime_helper_02337ed0();
                                                          }
                                                          dVar17 = acos((double)(float)(~-(uint)(-1.0 <= fVar4
                                                                                                ) & 0xbf800000
                                                                                       | (uint)fVar37 &
                                                                                         -(uint)(-1.0 <= fVar4
                                                                                                )),pMVar34);
                                                          uStack_568 = CONCAT44(uStack_568._4_4_,
                                                                                (float)dVar17 * 57.29578);
                                                        }
                                                        pUVar29 = *(UnityEngine_Camera_o **)
                                                                   &(__this->fields).prevFramePos.fields.z;
                                                        method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                       if (pUVar29 != (UnityEngine_Camera_o *)0x0) {
                                                         auStack_5c8._0_4_ =
                                                              (float)auStack_5c8._0_4_ +
                                                              fStack_554 * (float)auStack_548._4_4_ +
                                                              (float)auStack_548._0_4_ * fStack_558;
                                                         fVar37 = UnityEngine_Camera__get_fieldOfView
                                                                            (pUVar29,(MethodInfo *)0x0);
                                                         auStack_4c8._0_4_ = fVar37;
                                                         iVar22 = (*(source->klass->vtable)._5_get_width.
                                                                    methodPtr)();
                                                         fStack_624 = (__this->fields).previewScale.fields.z *
                                                                      (float)auStack_5c8._0_4_;
                                                         method_00 = __this;
                                                         pUVar25 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              __this,(MethodInfo *)0x0);
                                                         if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                                                           UVar42 = UnityEngine_Transform__get_forward
                                                                              (pUVar25,(MethodInfo *)0x0);
                                                           fVar12 = UVar42.fields.z;
                                                           uVar16._4_4_ = UVar42.fields.y;
                                                           uVar9._0_4_ = (float)(__this->fields).
                                                                                prevFrameCount;
                                                           uVar9._4_4_ = (float)(__this->fields).wasActive;
                                                           fVar37 = (__this->fields).prevFrameForward.fields.x
                                                           ;
                                                           auStack_548._0_4_ = fVar37;
                                                           uStack_550._0_4_ = 0.0;
                                                           uStack_550._4_4_ = 0.0;
                                                           auStack_4d8._8_4_ = extraout_XMM0_Dc_03;
                                                           auStack_4d8._0_8_ = UVar42.fields._0_8_;
                                                           auStack_4d8._12_4_ = extraout_XMM0_Dd_03;
                                                           fVar4 = UVar42.fields.x;
                                                           fVar10 = 0.0;
                                                           uVar16._0_4_ = 0.0;
                                                           _fStack_558 = uVar9;
                                                           if (g_data_057ac31a == '\0') {
                                                             il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                             g_data_057ac31a = '\x01';
                                                             fVar4 = (float)auStack_4d8._0_4_;
                                                             fVar37 = (float)auStack_548._0_4_;
                                                             uVar9._0_4_ = fStack_558;
                                                             uVar9._4_4_ = fStack_554;
                                                             fVar10 = (float)uStack_550;
                                                             uVar16._0_4_ = uStack_550._4_4_;
                                                           }
                                                           auVar6 = (undefined1  [4])
                                                                    (fVar12 * fVar12 +
                                                                    uVar16._4_4_ * uVar16._4_4_ +
                                                                    fVar4 * fVar4);
                                                           auStack_418._4_4_ = uVar9._4_4_;
                                                           auStack_418._0_4_ = uVar9._4_4_;
                                                           auStack_418._8_4_ = fVar10;
                                                           auStack_418._12_4_ = (float)uVar16;
                                                           fVar4 = fVar37 * fVar37 +
                                                                   uVar9._4_4_ * uVar9._4_4_ +
                                                                   (float)uVar9 * (float)uVar9;
                                                           if (*(int *)((long)&TypeInfo_Math[2].parameters + 4)
                                                               == 0) {
                                                             auStack_5b8 = auVar6;
                                                             fStack_51c = fVar4;
                                                             il2cpp_runtime_helper_02337ed0();
                                                             fVar4 = fStack_51c;
                                                             fVar37 = (float)auStack_548._0_4_;
                                                             uVar9._0_4_ = fStack_558;
                                                             auVar6 = auStack_5b8;
                                                           }
                                                           fVar4 = (float)auVar6 * fVar4;
                                                           auVar19._12_4_ = 0;
                                                           auVar19._0_12_ = auStack_5b4;
                                                           _auStack_5b8 = auVar19 << 0x20;
                                                           if (fVar4 < 0.0) {
                                                             fVar4 = sqrtf(fVar4);
                                                             uVar9._0_4_ = fStack_558;
                                                             fVar37 = (float)auStack_548._0_4_;
                                                             pMVar34 = TypeInfo_Math;
                                                           }
                                                           else {
                                                             fVar4 = SQRT(fVar4);
                                                             pMVar34 = TypeInfo_Math;
                                                           }
                                                           TypeInfo_Math = pMVar34;
                                                           if (1e-15 <= fVar4) {
                                                             fVar4 = (fVar12 * fVar37 +
                                                                     (float)auStack_418._0_4_ * uVar16._4_4_ +
                                                                     (float)uVar9 * (float)auStack_4d8._0_4_)
                                                                     / fVar4;
                                                             fVar37 = 1.0;
                                                             if (fVar4 <= 1.0) {
                                                               fVar37 = fVar4;
                                                             }
                                                             if (*(int *)((long)&pMVar34[2].parameters + 4) ==
                                                                 0) {
                                                               il2cpp_runtime_helper_02337ed0();
                                                             }
                                                             dVar17 = acos((double)(float)(~-(uint)(-1.0 <= 
                                                       fVar4) & 0xbf800000 |
                                                       (uint)fVar37 & -(uint)(-1.0 <= fVar4)),pMVar34);
                                                       auStack_5b8 = (undefined1  [4])
                                                                     ((float)dVar17 * 57.29578);
                                                       }
                                                       pUVar29 = *(UnityEngine_Camera_o **)
                                                                  &(__this->fields).prevFramePos.fields.z;
                                                       method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                       if (pUVar29 != (UnityEngine_Camera_o *)0x0) {
                                                         fStack_624 = fStack_624 *
                                                                      (float)iVar22 * 0.75 *
                                                                      ((float)uStack_568 /
                                                                      (float)auStack_4c8._0_4_);
                                                         fStack_628 = (float)auStack_598._0_4_;
                                                         fVar37 = UnityEngine_Camera__get_fieldOfView
                                                                            (pUVar29,(MethodInfo *)0x0);
                                                         method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       source;
                                                       iVar22 = (*(source->klass->vtable)._5_get_width.
                                                                  methodPtr)();
                                                       auStack_658._0_4_ =
                                                            (1.0 - (float)auStack_5c8._0_4_) *
                                                            (__this->fields).previewScale.fields.z *
                                                            (float)iVar22 * 0.75 *
                                                            ((float)auStack_5b8 / fVar37);
                                                       auStack_658._4_4_ = auStack_408._4_4_;
                                                       fStack_650 = fStack_400;
                                                       fStack_64c = fStack_3fc;
                                                       if ((fStack_570 <= **(float **)(TypeInfo_Mathf + 0xb8))
                                                          || (fVar37 = (__this->fields).previewScale.fields.y,
                                                             fVar37 <= **(float **)(TypeInfo_Mathf + 0xb8))) {
label_0457dac2:
                                                         pUVar31 = (UnityEngine_Material_o *)
                                                                   (__this->fields).replacementClear;
                                                         if (*(char *)((long)&(__this->fields).
                                                                              createdMaterials + 4) == '\0') {
                                                           if (pUVar31 != (UnityEngine_Material_o *)0x0) {
label_0457db87:
                                                             value_05.fields.y = fStack_624;
                                                             value_05.fields.x = fStack_628;
                                                             value_05.fields._8_8_ = auStack_658;
                                                             pMVar34 = "_BlurDirectionPacked";
                                                             UnityEngine_Material__SetVector
                                                                       (pUVar31,(System_String_o *)
                                                                                "_BlurDirectionPacked",value_05,
                                                                        (MethodInfo *)0x0);
                                                             goto label_0457db8e;
                                                           }
                                                         }
                                                         else {
                                                           method_00 = *(
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o **)
                                                       &(__this->fields).prevFramePos.fields.z;
                                                       if (method_00 !=
                                                           (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0) {
                                                         uVar7 = (__this->fields).filterType;
                                                         uVar13 = (__this->fields).preview;
                                                         fStack_5a0 = 0.0;
                                                         fStack_59c = 0.0;
                                                         _auStack_5c8 = ZEXT416((uint)(__this->fields).
                                                                                      previewScale.fields.x);
                                                         fStack_5a8 = (float)uVar7;
                                                         fStack_5a4 = (float)uVar13;
                                                         fVar37 = UnityEngine_Camera__get_fieldOfView
                                                                            ((UnityEngine_Camera_o *)method_00
                                                                             ,(MethodInfo *)0x0);
                                                         if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                           fStack_628 = fVar37 * fStack_5a4 * 0.5;
                                                           fStack_624 = fVar37 * fStack_5a8 * 0.5;
                                                           auStack_658._0_4_ = fVar37 * 0.0;
                                                           auVar36._4_8_ = 0;
                                                           auVar36._0_4_ = auStack_658._0_4_;
                                                           auVar36._12_4_ = auStack_5c8._4_4_;
                                                           register0x00001248 = auVar36._8_8_;
                                                           auStack_658._4_4_ =
                                                                (float)auStack_5c8._0_4_ * 0.5 * fVar37;
                                                           goto label_0457db87;
                                                         }
                                                       }
                                                       }
                                                       }
                                                       else {
                                                         method_00 = __this;
                                                         _auStack_408 = _auStack_658;
                                                         pUVar25 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              __this,(MethodInfo *)0x0);
                                                         if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                                                           UVar42 = UnityEngine_Transform__get_forward
                                                                              (pUVar25,(MethodInfo *)0x0);
                                                           auStack_5b4._4_4_ = extraout_XMM0_Dc_04;
                                                           _auStack_5b8 = UVar42.fields._0_8_;
                                                           auStack_5b4._8_4_ = extraout_XMM0_Dd_04;
                                                           uStack_568 = CONCAT44(uStack_568._4_4_,
                                                                                 UVar42.fields.z);
                                                           iVar22 = (*(source->klass->vtable)._5_get_width.
                                                                      methodPtr)(source);
                                                           fVar4 = (__this->fields).previewScale.fields.y;
                                                           method_00 = __this;
                                                           pUVar25 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                __this,(MethodInfo *)0x0);
                                                           if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                                                             UVar42 = UnityEngine_Transform__get_up
                                                                                (pUVar25,(MethodInfo *)0x0);
                                                             auStack_548._8_4_ = extraout_XMM0_Dc_05;
                                                             auStack_548._0_8_ = UVar42.fields._0_8_;
                                                             auStack_548._12_4_ = extraout_XMM0_Dd_05;
                                                             fStack_558 = UVar42.fields.z;
                                                             iVar30 = (*(source->klass->vtable)._5_get_width.
                                                                        methodPtr)(source);
                                                             auStack_5c8._0_4_ =
                                                                  (__this->fields).previewScale.fields.y;
                                                             method_00 = __this;
                                                             pUVar25 = UnityEngine_Component__get_transform
                                                                                 ((UnityEngine_Component_o *)
                                                                                  __this,(MethodInfo *)0x0);
                                                             if (pUVar25 != (UnityEngine_Transform_o *)0x0) {
                                                               auStack_658._4_4_ =
                                                                    (float)iVar22 * 0.5 *
                                                                    fVar37 * ((float)uStack_568 * fStack_538 +
                                                                             (float)auStack_5b4._0_4_ *
                                                                             fStack_4b8 +
                                                                             fStack_5a8 * (float)auStack_5b8);
                                                               auStack_658._0_4_ = auStack_408._0_4_;
                                                               fStack_650 = fStack_400;
                                                               fStack_64c = fStack_3fc;
                                                               auStack_598._0_4_ =
                                                                    auStack_598._0_4_ +
                                                                    (float)iVar30 * 0.5 *
                                                                    fVar4 * ((float)auStack_548._4_4_ *
                                                                             fStack_4b8 +
                                                                             (float)auStack_548._0_4_ *
                                                                             fStack_5a8 +
                                                                            fStack_558 * fStack_538);
                                                               UVar42 = UnityEngine_Transform__get_right
                                                                                  (pUVar25,(MethodInfo *)0x0);
                                                               auStack_5c8._0_4_ =
                                                                    (float)auStack_5c8._0_4_ *
                                                                    (UVar42.fields.z * fStack_538 +
                                                                    UVar42.fields.y * fStack_4b8 +
                                                                    fStack_5a8 * UVar42.fields.x);
                                                               method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       source;
                                                       iVar22 = (*(source->klass->vtable)._5_get_width.
                                                                  methodPtr)();
                                                       fStack_624 = fStack_624 +
                                                                    (float)iVar22 * 0.5 *
                                                                    (float)auStack_5c8._0_4_;
                                                       fStack_628 = (float)auStack_598._0_4_;
                                                       goto label_0457dac2;
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
                                            else {
                                              pUVar31 = (UnityEngine_Material_o *)
                                                        (__this->fields).replacementClear;
                                              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              pUVar29 = (UnityEngine_Camera_o *)0x0;
                                              UnityEngine_Graphics__Blit_4dc2a60
                                                        ((UnityEngine_Texture_o *)source,
                                                         (UnityEngine_RenderTexture_o *)pUStack_588,pUVar31,0,
                                                         (MethodInfo *)0x0);
                                              __this_03.fields.m_Mask =
                                                   (UnityEngine_LayerMask_Fields)((int)__this + 0x60);
                                              pMVar34 = (MethodInfo *)0x0;
                                              iVar24 = UnityEngine_LayerMask__get_value
                                                                 (__this_03,(MethodInfo *)0x0);
                                              if (iVar24 != 0) {
                                                pUVar29 = 
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur__GetTmpCam
                                                                 (__this,pMVar34);
                                              }
                                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              pMVar34 = (MethodInfo *)0x0;
                                              bVar21 = UnityEngine_Object__op_Implicit
                                                                 ((UnityEngine_Object_o *)pUVar29,
                                                                  (MethodInfo *)0x0);
                                              if ((char)bVar21 == '\0') {
label_0457db8e:
                                                cVar20 = *(char *)((long)&(__this->fields).createdMaterials +
                                                                  4);
                                              }
                                              else {
                                                pMVar34 = (MethodInfo *)0x0;
                                                iVar24 = UnityEngine_LayerMask__get_value
                                                                   (__this_03,(MethodInfo *)0x0);
                                                if (iVar24 == 0) goto label_0457db8e;
                                                pUVar14 = (UnityEngine_Object_o *)
                                                          (__this->fields).dx11MotionBlurShader;
                                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                  il2cpp_runtime_helper_02337ed0();
                                                }
                                                pMVar34 = (MethodInfo *)0x0;
                                                bVar21 = UnityEngine_Object__op_Implicit
                                                                   (pUVar14,(MethodInfo *)0x0);
                                                if ((char)bVar21 == '\0') goto label_0457db8e;
                                                method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       (__this->fields).dx11MotionBlurShader;
                                                if (method_00 ==
                                                    (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0
                                                   ) goto label_0457e068;
                                                pMVar34 = (MethodInfo *)0x0;
                                                bVar21 = UnityEngine_Shader__get_isSupported
                                                                   ((UnityEngine_Shader_o *)method_00,
                                                                    (MethodInfo *)0x0);
                                                if ((char)bVar21 == '\0') goto label_0457db8e;
                                                if (pUVar29 == (UnityEngine_Camera_o *)0x0) goto label_0457e068;
                                                UnityEngine_Camera__set_targetTexture
                                                          (pUVar29,(UnityEngine_RenderTexture_o *)pUStack_588,
                                                           (MethodInfo *)0x0);
                                                iVar24 = UnityEngine_LayerMask__op_Implicit
                                                                   ((UnityEngine_LayerMask_o)
                                                                    (__this->fields).softZDistance,
                                                                    (MethodInfo *)0x0);
                                                UnityEngine_Camera__set_cullingMask
                                                          (pUVar29,iVar24,(MethodInfo *)0x0);
                                                pMVar34 = (MethodInfo *)(__this->fields).dx11MotionBlurShader;
                                                UnityEngine_Camera__RenderWithShader
                                                          (pUVar29,(UnityEngine_Shader_o *)pMVar34,
                                                           "",(MethodInfo *)0x0);
                                                cVar20 = *(char *)((long)&(__this->fields).createdMaterials +
                                                                  4);
                                              }
                                              if ((cVar20 == '\0') &&
                                                 (iVar24 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0)
                                                 , iVar24 != *(int *)&(__this->fields).prevStereoViewProjMat))
                                              {
                                                iVar24 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
                                                *(int32_t *)&(__this->fields).prevStereoViewProjMat = iVar24;
                                                UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember
                                                          (__this,pMVar34);
                                              }
                                              method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o
                                                           *)source;
                                              UnityEngine_Texture__set_filterMode
                                                        ((UnityEngine_Texture_o *)source,1,(MethodInfo *)0x0);
                                              dest = pUStack_528;
                                              pUVar35 = pUStack_588;
                                              pUVar26 = pUStack_5d0;
                                              if (*(char *)((long)&(__this->fields).noiseTexture + 4) == '\0')
                                              {
                                                iVar22 = *(int *)&(__this->fields).createdMaterials;
                                                if (((int)uStack_460 == 0) && (iVar22 == 3)) {
                                                  pUVar31 = (__this->fields).motionBlurMaterial;
                                                  method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                  if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                    UnityEngine_Material__SetFloat
                                                              (pUVar31,"_MinVelocity",
                                                               (__this->fields).rotationScale,
                                                               (MethodInfo *)0x0);
                                                    pUVar31 = (__this->fields).motionBlurMaterial;
                                                    method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                    if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                      UnityEngine_Material__SetFloat
                                                                (pUVar31,"_VelocityScale",
                                                                 (__this->fields).maxVelocity,
                                                                 (MethodInfo *)0x0);
                                                      pUVar31 = (__this->fields).motionBlurMaterial;
                                                      method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                      if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                        UnityEngine_Material__SetFloat
                                                                  (pUVar31,"_Jitter",
                                                                   *(float *)&(__this->fields).noiseTexture,
                                                                   (MethodInfo *)0x0);
                                                        pUVar31 = (__this->fields).motionBlurMaterial;
                                                        method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                       if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                         UnityEngine_Material__SetTexture
                                                                   (pUVar31,"_NoiseTex",
                                                                    (UnityEngine_Texture_o *)
                                                                    (__this->fields).dx11MotionBlurMaterial,
                                                                    (MethodInfo *)0x0);
                                                         pUVar31 = (__this->fields).motionBlurMaterial;
                                                         method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                       if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                         UnityEngine_Material__SetTexture
                                                                   (pUVar31,"_VelTex",
                                                                    (UnityEngine_Texture_o *)pUStack_588,
                                                                    (MethodInfo *)0x0);
                                                         pUVar26 = pUStack_5d0;
                                                         pUVar31 = (__this->fields).motionBlurMaterial;
                                                         method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                       if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                         UnityEngine_Material__SetTexture
                                                                   (pUVar31,"_NeighbourMaxTex",pUStack_5d0,
                                                                    (MethodInfo *)0x0);
                                                         pUVar31 = (__this->fields).motionBlurMaterial;
                                                         method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                       if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                         fVar37 = (__this->fields).minVelocity;
                                                         fVar4 = 0.00025;
                                                         if (0.00025 <= fVar37) {
                                                           fVar4 = fVar37;
                                                         }
                                                         UnityEngine_Material__SetFloat
                                                                   (pUVar31,"_SoftZDistance",fVar4,
                                                                    (MethodInfo *)0x0);
                                                         dest = pUStack_528;
                                                         pUVar35 = pUStack_588;
                                                         pUVar31 = (__this->fields).motionBlurMaterial;
                                                         method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                       if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                         UnityEngine_Material__SetFloat
                                                                   (pUVar31,"_MaxRadiusOrKInPaper",fStack_56c,
                                                                    (MethodInfo *)0x0);
                                                         pUVar31 = (__this->fields).motionBlurMaterial;
                                                         if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                                                           il2cpp_runtime_helper_02337ed0();
                                                         }
                                                         UnityEngine_Graphics__Blit_4dc2a60
                                                                   ((UnityEngine_Texture_o *)pUVar35,
                                                                    (UnityEngine_RenderTexture_o *)__this_02,
                                                                    pUVar31,0,(MethodInfo *)0x0);
                                                         UnityEngine_Graphics__Blit_4dc2a60
                                                                   ((UnityEngine_Texture_o *)__this_02,
                                                                    (UnityEngine_RenderTexture_o *)pUVar26,
                                                                    (__this->fields).motionBlurMaterial,1,
                                                                    (MethodInfo *)0x0);
                                                         pUVar31 = (__this->fields).motionBlurMaterial;
                                                         iVar24 = 2;
                                                         goto label_0457df0d;
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                    }
                                                  }
                                                }
                                                else if ((int)uStack_460 == 0 && iVar22 != 2) {
                                                  if (iVar22 == 0) {
                                                    pUVar31 = (UnityEngine_Material_o *)
                                                              (__this->fields).replacementClear;
                                                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    iVar24 = 6;
label_0457df0d:
                                                    UnityEngine_Graphics__Blit_4dc2a60
                                                              ((UnityEngine_Texture_o *)source,dest,pUVar31,
                                                               iVar24,(MethodInfo *)0x0);
                                                    UnityEngine_RenderTexture__ReleaseTemporary
                                                              ((UnityEngine_RenderTexture_o *)pUVar35,
                                                               (MethodInfo *)0x0);
                                                    UnityEngine_RenderTexture__ReleaseTemporary
                                                              ((UnityEngine_RenderTexture_o *)__this_02,
                                                               (MethodInfo *)0x0);
                                                    UnityEngine_RenderTexture__ReleaseTemporary
                                                              ((UnityEngine_RenderTexture_o *)pUVar26,
                                                               (MethodInfo *)0x0);
                                                    return;
                                                  }
                                                  pUVar31 = (UnityEngine_Material_o *)
                                                            (__this->fields).replacementClear;
                                                  if (iVar22 != 4) {
                                                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    iVar24 = 5;
                                                    goto label_0457df0d;
                                                  }
                                                  if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                    fVar37 = (__this->fields).minVelocity;
                                                    fVar4 = 0.00025;
                                                    if (0.00025 <= fVar37) {
                                                      fVar4 = fVar37;
                                                    }
                                                    UnityEngine_Material__SetFloat
                                                              (pUVar31,"_SoftZDistance",fVar4,(MethodInfo *)0x0);
                                                    pUVar31 = (UnityEngine_Material_o *)
                                                              (__this->fields).replacementClear;
                                                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    UnityEngine_Graphics__Blit_4dc2a60
                                                              ((UnityEngine_Texture_o *)pUVar35,
                                                               (UnityEngine_RenderTexture_o *)__this_02,
                                                               pUVar31,2,(MethodInfo *)0x0);
                                                    UnityEngine_Graphics__Blit_4dc2a60
                                                              ((UnityEngine_Texture_o *)__this_02,
                                                               (UnityEngine_RenderTexture_o *)pUVar26,
                                                               (UnityEngine_Material_o *)
                                                               (__this->fields).replacementClear,3,
                                                               (MethodInfo *)0x0);
                                                    pUVar31 = (UnityEngine_Material_o *)
                                                              (__this->fields).replacementClear;
                                                    iVar24 = 7;
                                                    goto label_0457df0d;
                                                  }
                                                }
                                                else {
                                                  pUVar31 = (UnityEngine_Material_o *)
                                                            (__this->fields).replacementClear;
                                                  method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                  if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                    fVar37 = (__this->fields).minVelocity;
                                                    fVar4 = 0.00025;
                                                    if (0.00025 <= fVar37) {
                                                      fVar4 = fVar37;
                                                    }
                                                    UnityEngine_Material__SetFloat
                                                              (pUVar31,"_SoftZDistance",fVar4,(MethodInfo *)0x0);
                                                    pUVar31 = (UnityEngine_Material_o *)
                                                              (__this->fields).replacementClear;
                                                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    UnityEngine_Graphics__Blit_4dc2a60
                                                              ((UnityEngine_Texture_o *)pUVar35,
                                                               (UnityEngine_RenderTexture_o *)__this_02,
                                                               pUVar31,2,(MethodInfo *)0x0);
                                                    UnityEngine_Graphics__Blit_4dc2a60
                                                              ((UnityEngine_Texture_o *)__this_02,
                                                               (UnityEngine_RenderTexture_o *)pUVar26,
                                                               (UnityEngine_Material_o *)
                                                               (__this->fields).replacementClear,3,
                                                               (MethodInfo *)0x0);
                                                    pUVar31 = (UnityEngine_Material_o *)
                                                              (__this->fields).replacementClear;
                                                    iVar24 = 4;
                                                    goto label_0457df0d;
                                                  }
                                                }
                                              }
                                              else {
                                                pUVar31 = (UnityEngine_Material_o *)
                                                          (__this->fields).replacementClear;
                                                method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                  UnityEngine_Material__SetFloat
                                                            (pUVar31,"_DisplayVelocityScale",(__this->fields).jitter,
                                                             (MethodInfo *)0x0);
                                                  dest = pUStack_528;
                                                  source = (UnityEngine_RenderTexture_o *)pUStack_588;
                                                  pUVar26 = pUStack_5d0;
                                                  pUVar31 = (UnityEngine_Material_o *)
                                                            (__this->fields).replacementClear;
                                                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  iVar24 = 1;
                                                  pUVar35 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       source;
                                                  goto label_0457df0d;
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            pUVar29 = *(UnityEngine_Camera_o **)
                                                       &(__this->fields).prevFramePos.fields.z;
                                            if (pUVar29 != (UnityEngine_Camera_o *)0x0) {
                                              UnityEngine_Camera__get_worldToCameraMatrix
                                                        ((UnityEngine_Matrix4x4_o *)auStack_618,pUVar29,
                                                         (MethodInfo *)0x0);
                                              pSStack_308 = pSStack_5e8;
                                              pUStack_300 = pUStack_5e0;
                                              pUStack_318 = (UnityEngine_Matrix4x4_array *)auStack_618._32_8_;
                                              pUStack_310 = pUStack_5f0;
                                              pUStack_328 = (UnityEngine_GameObject_o *)auStack_618._16_8_;
                                              pUStack_320 = (UnityEngine_Matrix4x4_array *)auStack_618._24_8_;
                                              pUStack_338 = (UnityEngine_Matrix4x4_array *)auStack_618._0_8_;
                                              pUStack_330 = (UnityEngine_Shader_o *)auStack_618._8_8_;
                                              if (g_data_057af100 == '\0') {
                                                il2cpp_runtime_helper_023445d0(&TypeInfo_Matrix4x4);
                                                g_data_057af100 = '\x01';
                                              }
                                              auVar39 = _auStack_5c8;
                                              lVar15 = *(long *)(TypeInfo_Matrix4x4 + 0xb8);
                                              auStack_3b8._0_8_ = *(undefined8 *)(lVar15 + 0x40);
                                              auStack_3b8._8_8_ = *(undefined8 *)(lVar15 + 0x48);
                                              auStack_3b8._16_8_ = *(intptr_t *)(lVar15 + 0x50);
                                              auStack_3b8._24_8_ = *(undefined8 *)(lVar15 + 0x58);
                                              auStack_3b8._32_8_ = *(undefined8 *)(lVar15 + 0x60);
                                              auStack_3b8._40_8_ = *(undefined8 *)(lVar15 + 0x68);
                                              auStack_3b8._48_8_ = *(undefined8 *)(lVar15 + 0x70);
                                              auStack_3b8._56_8_ = *(undefined8 *)(lVar15 + 0x78);
                                              fVar4 = (float)(__this->fields).filterType;
                                              fVar10 = (float)(__this->fields).preview;
                                              auStack_5c8._4_4_ = fVar10;
                                              auStack_5c8._0_4_ = fVar4;
                                              fVar37 = (__this->fields).previewScale.fields.x;
                                              uVar16._0_4_ = 0.0;
                                              uVar16._4_4_ = 0.0;
                                              if (g_data_057a6843 == '\0') {
                                                _fStack_5c0 = 0;
                                                fStack_5a8 = fVar37;
                                                il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
                                                g_data_057a6843 = '\x01';
                                                fVar4 = (float)auStack_5c8._0_4_;
                                                fVar10 = (float)auStack_5c8._4_4_;
                                                uVar16._0_4_ = fStack_5c0;
                                                uVar16._4_4_ = fStack_5bc;
                                                fVar37 = fStack_5a8;
                                                auVar39 = _auStack_5c8;
                                              }
                                              _auStack_5c8 = auVar39;
                                              uVar38 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
                                              uVar8 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
                                              uVar9._0_4_ = fVar4 * 0.3333;
                                              uVar9._4_4_ = fVar10 * 0.3333;
                                              fVar12 = fVar37 * 0.3333;
                                              if (g_data_057a6932 == '\0') {
                                                auStack_5c8._4_4_ = fVar10 * 0.3333;
                                                auStack_5c8._0_4_ = fVar4 * 0.3333;
                                                fStack_5c0 = (float)uVar16 * 0.0;
                                                fStack_5bc = uVar16._4_4_ * 0.0;
                                                uStack_530._0_4_ = 0.0;
                                                uStack_530._4_4_ = 0.0;
                                                fStack_5a8 = fVar37 * 0.3333;
                                                _fStack_538 = uVar38;
                                                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                g_data_057a6932 = '\x01';
                                                uVar9._0_4_ = (float)auStack_5c8._0_4_;
                                                uVar9._4_4_ = (float)auStack_5c8._4_4_;
                                                fVar12 = fStack_5a8;
                                                uVar38 = _fStack_538;
                                              }
                                              method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o
                                                           *)auStack_3b8;
                                              __this_01.fields._8_8_ = pUVar45;
                                              __this_01.fields._0_8_ = pUVar44;
                                              __this_01.fields.m01 = (float)(int)iVar46;
                                              __this_01.fields.m11 = (float)(int)((ulong)iVar46 >> 0x20);
                                              __this_01.fields._24_8_ = pSVar47;
                                              __this_01.fields.m02 = (float)uVar48;
                                              __this_01.fields.m12 = SUB84(uVar48,4);
                                              __this_01.fields.m22 = (float)uVar49;
                                              __this_01.fields.m32 = SUB84(uVar49,4);
                                              __this_01.fields._48_8_ = pSVar50;
                                              __this_01.fields._56_8_ = pUVar51;
                                              UVar42.fields.y = uVar9._4_4_;
                                              UVar42.fields.x = (float)uVar9;
                                              UVar42.fields.z = fVar12;
                                              q.fields._8_8_ = uVar8;
                                              q.fields.x = (float)uVar38;
                                              q.fields.y = SUB84(uVar38,4);
                                              UnityEngine_Matrix4x4__SetTRS
                                                        (__this_01,UVar42,q,
                                                         (UnityEngine_Vector3_o)
                                                         *(UnityEngine_Vector3_Fields *)
                                                          (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                                         (MethodInfo *)method_00);
                                              pUVar29 = *(UnityEngine_Camera_o **)
                                                         &(__this->fields).prevFramePos.fields.z;
                                              if (pUVar29 != (UnityEngine_Camera_o *)0x0) {
                                                UnityEngine_Camera__get_projectionMatrix
                                                          ((UnityEngine_Matrix4x4_o *)auStack_618,pUVar29,
                                                           (MethodInfo *)0x0);
                                                pSStack_288 = pSStack_5e8;
                                                pUStack_280 = pUStack_5e0;
                                                pUStack_298 = (UnityEngine_Matrix4x4_array *)
                                                              auStack_618._32_8_;
                                                pUStack_290 = pUStack_5f0;
                                                pUStack_2a8 = (UnityEngine_GameObject_o *)auStack_618._16_8_;
                                                pUStack_2a0 = (UnityEngine_Matrix4x4_array *)
                                                              auStack_618._24_8_;
                                                pUStack_2b8 = (UnityEngine_Matrix4x4_array *)auStack_618._0_8_
                                                ;
                                                pUStack_2b0 = (UnityEngine_Shader_o *)auStack_618._8_8_;
                                                proj.fields.m20 = (float)auStack_618._8_4_;
                                                proj.fields.m30 = (float)auStack_618._12_4_;
                                                proj.fields.m00 = (float)auStack_618._0_4_;
                                                proj.fields.m10 = (float)auStack_618._4_4_;
                                                proj.fields.m01 = (float)auStack_618._16_4_;
                                                proj.fields.m11 = (float)auStack_618._20_4_;
                                                proj.fields.m21 = (float)auStack_618._24_4_;
                                                proj.fields.m31 = (float)auStack_618._28_4_;
                                                proj.fields.m02 = (float)auStack_618._32_4_;
                                                proj.fields.m12 = (float)auStack_618._36_4_;
                                                proj.fields._40_8_ = pUStack_5f0;
                                                proj.fields._48_8_ = pSStack_5e8;
                                                proj.fields._56_8_ = pUStack_5e0;
                                                UnityEngine_GL__GetGPUProjectionMatrix
                                                          ((UnityEngine_Matrix4x4_o *)auStack_618,proj,1,
                                                           (MethodInfo *)0x0);
                                                pSStack_348 = pSStack_5e8;
                                                pUStack_340 = pUStack_5e0;
                                                pUStack_358 = (UnityEngine_Matrix4x4_array *)
                                                              auStack_618._32_8_;
                                                pUStack_350 = pUStack_5f0;
                                                pUStack_368 = (UnityEngine_GameObject_o *)auStack_618._16_8_;
                                                pUStack_360 = (UnityEngine_Matrix4x4_array *)
                                                              auStack_618._24_8_;
                                                pUStack_378 = (UnityEngine_Matrix4x4_array *)auStack_618._0_8_
                                                ;
                                                pUStack_370 = (UnityEngine_Shader_o *)auStack_618._8_8_;
                                                lhs.fields.m20 = (float)auStack_618._8_4_;
                                                lhs.fields.m30 = (float)auStack_618._12_4_;
                                                lhs.fields.m00 = (float)auStack_618._0_4_;
                                                lhs.fields.m10 = (float)auStack_618._4_4_;
                                                lhs.fields.m01 = (float)auStack_618._16_4_;
                                                lhs.fields.m11 = (float)auStack_618._20_4_;
                                                lhs.fields.m21 = (float)auStack_618._24_4_;
                                                lhs.fields.m31 = (float)auStack_618._28_4_;
                                                lhs.fields.m02 = (float)auStack_618._32_4_;
                                                lhs.fields.m12 = (float)auStack_618._36_4_;
                                                lhs.fields._40_8_ = pUStack_5f0;
                                                lhs.fields._48_8_ = pSStack_5e8;
                                                lhs.fields._56_8_ = pUStack_5e0;
                                                rhs_00.fields.m20 = (float)auStack_3b8._8_4_;
                                                rhs_00.fields.m30 = (float)auStack_3b8._12_4_;
                                                rhs_00.fields.m00 = (float)auStack_3b8._0_4_;
                                                rhs_00.fields.m10 = (float)auStack_3b8._4_4_;
                                                rhs_00.fields.m01 = (float)auStack_3b8._16_4_;
                                                rhs_00.fields.m11 = (float)auStack_3b8._20_4_;
                                                rhs_00.fields.m21 = (float)auStack_3b8._24_4_;
                                                rhs_00.fields.m31 = (float)auStack_3b8._28_4_;
                                                rhs_00.fields.m02 = (float)auStack_3b8._32_4_;
                                                rhs_00.fields.m12 = (float)auStack_3b8._36_4_;
                                                rhs_00.fields.m22 = (float)auStack_3b8._40_4_;
                                                rhs_00.fields.m32 = (float)auStack_3b8._44_4_;
                                                rhs_00.fields.m03 = (float)auStack_3b8._48_4_;
                                                rhs_00.fields.m13 = (float)auStack_3b8._52_4_;
                                                rhs_00.fields.m23 = (float)auStack_3b8._56_4_;
                                                rhs_00.fields.m33 = (float)auStack_3b8._60_4_;
                                                UnityEngine_Matrix4x4__op_Multiply
                                                          ((UnityEngine_Matrix4x4_o *)auStack_618,lhs,rhs_00,
                                                           (MethodInfo *)0x0);
                                                pSStack_2c8 = pSStack_5e8;
                                                pUStack_2c0 = pUStack_5e0;
                                                pUStack_2d8 = (UnityEngine_Matrix4x4_array *)
                                                              auStack_618._32_8_;
                                                pUStack_2d0 = pUStack_5f0;
                                                pUStack_2e8 = (UnityEngine_GameObject_o *)auStack_618._16_8_;
                                                pUStack_2e0 = (UnityEngine_Matrix4x4_array *)
                                                              auStack_618._24_8_;
                                                pUStack_2f8 = (UnityEngine_Matrix4x4_array *)auStack_618._0_8_
                                                ;
                                                pUStack_2f0 = (UnityEngine_Shader_o *)auStack_618._8_8_;
                                                lhs_00.fields.m20 = (float)auStack_618._8_4_;
                                                lhs_00.fields.m30 = (float)auStack_618._12_4_;
                                                lhs_00.fields.m00 = (float)auStack_618._0_4_;
                                                lhs_00.fields.m10 = (float)auStack_618._4_4_;
                                                lhs_00.fields.m01 = (float)auStack_618._16_4_;
                                                lhs_00.fields.m11 = (float)auStack_618._20_4_;
                                                lhs_00.fields.m21 = (float)auStack_618._24_4_;
                                                lhs_00.fields.m31 = (float)auStack_618._28_4_;
                                                lhs_00.fields.m02 = (float)auStack_618._32_4_;
                                                lhs_00.fields.m12 = (float)auStack_618._36_4_;
                                                lhs_00.fields._40_8_ = pUStack_5f0;
                                                lhs_00.fields._48_8_ = pSStack_5e8;
                                                lhs_00.fields._56_8_ = pUStack_5e0;
                                                rhs_01.fields._8_8_ = pUStack_330;
                                                rhs_01.fields._0_8_ = pUStack_338;
                                                rhs_01.fields._16_8_ = pUStack_328;
                                                rhs_01.fields._24_8_ = pUStack_320;
                                                rhs_01.fields._32_8_ = pUStack_318;
                                                rhs_01.fields._40_8_ = pUStack_310;
                                                rhs_01.fields._48_8_ = pSStack_308;
                                                rhs_01.fields._56_8_ = pUStack_300;
                                                UnityEngine_Matrix4x4__op_Multiply
                                                          ((UnityEngine_Matrix4x4_o *)&pUStack_518,lhs_00,
                                                           rhs_01,(MethodInfo *)0x0);
                                                pSStack_5e8 = pSStack_4e8;
                                                pUStack_5e0 = pUStack_4e0;
                                                auStack_618._32_8_ = pUStack_4f8;
                                                pUStack_5f0 = pUStack_4f0;
                                                auStack_618._16_8_ = pUStack_508;
                                                auStack_618._24_8_ = pUStack_500;
                                                auStack_618._0_8_ = pUStack_518;
                                                auStack_618._8_8_ = pUStack_510;
                                                *(System_Collections_Generic_List_Material__o **)
                                                 &(__this->fields).prevViewProjMat.fields.m22 = pSStack_4e8;
                                                *(UnityEngine_Matrix4x4_array **)
                                                 &(__this->fields).prevViewProjMat.fields.m03 = pUStack_4e0;
                                                *(UnityEngine_Matrix4x4_array **)
                                                 &(__this->fields).prevViewProjMat.fields.m21 = pUStack_4f8;
                                                *(UnityEngine_Shader_o **)
                                                 &(__this->fields).prevViewProjMat.fields.m02 = pUStack_4f0;
                                                *(UnityEngine_GameObject_o **)
                                                 &(__this->fields).prevViewProjMat.fields.m20 = pUStack_508;
                                                *(UnityEngine_Matrix4x4_array **)
                                                 &(__this->fields).prevViewProjMat.fields.m01 = pUStack_500;
                                                *ppUVar3 = pUStack_518;
                                                *(UnityEngine_Shader_o **)
                                                 &(__this->fields).prevViewProjMat.fields = pUStack_510;
                                                pUVar31 = (UnityEngine_Material_o *)
                                                          (__this->fields).replacementClear;
                                                method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       0x0;
                                                if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                  value_03.fields._8_8_ = pUStack_510;
                                                  value_03.fields._0_8_ = pUStack_518;
                                                  value_03.fields._16_8_ = pUStack_508;
                                                  value_03.fields._24_8_ = pUStack_500;
                                                  value_03.fields._32_8_ = pUStack_4f8;
                                                  value_03.fields._40_8_ = pUStack_4f0;
                                                  value_03.fields._48_8_ = pSStack_4e8;
                                                  value_03.fields._56_8_ = pUStack_4e0;
                                                  UnityEngine_Material__SetMatrix
                                                            (pUVar31,"_PrevViewProj",value_03,(MethodInfo *)0x0);
                                                  pUVar31 = (UnityEngine_Material_o *)
                                                            (__this->fields).replacementClear;
                                                  method_00 = (
                                                       UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                       auStack_458;
                                                  rhs_02.fields._8_8_ = pUStack_3f0;
                                                  rhs_02.fields._0_8_ = pUStack_3f8;
                                                  rhs_02.fields._16_8_ = pUStack_3e8;
                                                  rhs_02.fields._24_8_ = pUStack_3e0;
                                                  rhs_02.fields._32_8_ = pUStack_3d8;
                                                  rhs_02.fields._40_8_ = pUStack_3d0;
                                                  rhs_02.fields._48_8_ = pSStack_3c8;
                                                  rhs_02.fields._56_8_ = pUStack_3c0;
                                                  UnityEngine_Matrix4x4__op_Multiply
                                                            ((UnityEngine_Matrix4x4_o *)method_00,
                                                             (UnityEngine_Matrix4x4_o)
                                                             *(UnityEngine_Matrix4x4_Fields *)ppUVar3,rhs_02,
                                                             (MethodInfo *)0x0);
                                                  auStack_480._8_8_ = pSStack_428;
                                                  pUStack_470 = pUStack_420;
                                                  fStack_488 = (float)auStack_458._32_4_;
                                                  fStack_484 = (float)auStack_458._36_4_;
                                                  auStack_480._0_8_ = auStack_458._40_8_;
                                                  iStack_498 = auStack_458._16_8_;
                                                  pSStack_490 = (System_Threading_CancellationTokenSource_o *)
                                                                auStack_458._24_8_;
                                                  pUStack_4a8 = (UnityEngine_Matrix4x4_array *)
                                                                auStack_458._0_8_;
                                                  pUStack_4a0 = (UnityEngine_Camera_o *)auStack_458._8_8_;
                                                  if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                                    value_04.fields.m20 = (float)auStack_458._8_4_;
                                                    value_04.fields.m30 = (float)auStack_458._12_4_;
                                                    value_04.fields.m00 = (float)auStack_458._0_4_;
                                                    value_04.fields.m10 = (float)auStack_458._4_4_;
                                                    value_04.fields.m01 = (float)auStack_458._16_4_;
                                                    value_04.fields.m11 = (float)auStack_458._20_4_;
                                                    value_04.fields.m21 = (float)auStack_458._24_4_;
                                                    value_04.fields.m31 = (float)auStack_458._28_4_;
                                                    value_04.fields.m02 = (float)auStack_458._32_4_;
                                                    value_04.fields.m12 = (float)auStack_458._36_4_;
                                                    value_04.fields.m22 = (float)auStack_458._40_4_;
                                                    value_04.fields.m32 = (float)auStack_458._44_4_;
                                                    value_04.fields._48_8_ = pSStack_428;
                                                    value_04.fields._56_8_ = pUStack_420;
                                                    UnityEngine_Material__SetMatrix
                                                              (pUVar31,"_ToPrevViewProjCombined",value_04,(MethodInfo *)0x0
                                                              );
                                                    goto label_0457cc2d;
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
                      else {
                        method_00 = TypeInfo_Matrix4x4;
                        lVar28 = il2cpp_runtime_helper_022b2a40();
                        lVar15 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
                        if (lVar15 != 0) {
                          if (*(int *)(lVar15 + 0x18) == 0) goto label_0457e06d;
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
                          method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)auStack_618;
                          UnityEngine_Matrix4x4__Inverse
                                    ((UnityEngine_Matrix4x4_o *)method_00,(UnityEngine_Matrix4x4_o)*pUVar1,
                                     (MethodInfo *)0x0);
                          pSStack_4e8 = pSStack_5e8;
                          pUStack_4e0 = pUStack_5e0;
                          pUStack_4f8 = (UnityEngine_Matrix4x4_array *)auStack_618._32_8_;
                          pUStack_4f0 = pUStack_5f0;
                          pUStack_508 = (UnityEngine_GameObject_o *)auStack_618._16_8_;
                          pUStack_500 = (UnityEngine_Matrix4x4_array *)auStack_618._24_8_;
                          pUStack_518 = (UnityEngine_Matrix4x4_array *)auStack_618._0_8_;
                          pUStack_510 = (UnityEngine_Shader_o *)auStack_618._8_8_;
                          if (lVar28 != 0) {
                            if (*(int *)(lVar28 + 0x18) == 0) goto label_0457e06d;
                            *(System_Collections_Generic_List_Material__o **)(lVar28 + 0x50) = pSStack_5e8;
                            *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x58) = pUStack_5e0;
                            *(undefined8 *)(lVar28 + 0x40) = auStack_618._32_8_;
                            *(UnityEngine_Shader_o **)(lVar28 + 0x48) = pUStack_5f0;
                            *(undefined8 *)(lVar28 + 0x30) = auStack_618._16_8_;
                            *(undefined8 *)(lVar28 + 0x38) = auStack_618._24_8_;
                            *(undefined8 *)(lVar28 + 0x20) = auStack_618._0_8_;
                            *(undefined8 *)(lVar28 + 0x28) = auStack_618._8_8_;
                            lVar15 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
                            if (lVar15 != 0) {
                              if (*(uint *)(lVar15 + 0x18) < 2) goto label_0457e06d;
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
                              method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)auStack_618;
                              UnityEngine_Matrix4x4__Inverse
                                        ((UnityEngine_Matrix4x4_o *)method_00,(UnityEngine_Matrix4x4_o)*pUVar1
                                         ,(MethodInfo *)0x0);
                              pSStack_48 = pSStack_5e8;
                              pUStack_40 = pUStack_5e0;
                              pUStack_58 = (UnityEngine_Matrix4x4_array *)auStack_618._32_8_;
                              pUStack_50 = pUStack_5f0;
                              pUStack_68 = (UnityEngine_GameObject_o *)auStack_618._16_8_;
                              pUStack_60 = (UnityEngine_Matrix4x4_array *)auStack_618._24_8_;
                              pUStack_78 = (UnityEngine_Matrix4x4_array *)auStack_618._0_8_;
                              pUStack_70 = (UnityEngine_Shader_o *)auStack_618._8_8_;
                              if (*(uint *)(lVar28 + 0x18) < 2) goto label_0457e06d;
                              *(System_Collections_Generic_List_Material__o **)(lVar28 + 0x90) = pSStack_5e8;
                              *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x98) = pUStack_5e0;
                              *(undefined8 *)(lVar28 + 0x80) = auStack_618._32_8_;
                              *(UnityEngine_Shader_o **)(lVar28 + 0x88) = pUStack_5f0;
                              *(undefined8 *)(lVar28 + 0x70) = auStack_618._16_8_;
                              *(undefined8 *)(lVar28 + 0x78) = auStack_618._24_8_;
                              *(undefined8 *)(lVar28 + 0x60) = auStack_618._0_8_;
                              *(undefined8 *)(lVar28 + 0x68) = auStack_618._8_8_;
                              lVar15 = *(long *)&(__this->fields).prevViewProjMat.fields.m23;
                              if (lVar15 != 0) {
                                if (*(int *)(lVar15 + 0x18) == 0) goto label_0457e06d;
                                auStack_618._0_8_ = *(undefined8 *)(lVar15 + 0x20);
                                auStack_618._8_8_ = *(undefined8 *)(lVar15 + 0x28);
                                auStack_618._16_8_ = *(undefined8 *)(lVar15 + 0x30);
                                auStack_618._24_8_ = *(undefined8 *)(lVar15 + 0x38);
                                auStack_618._32_8_ = *(undefined8 *)(lVar15 + 0x40);
                                pUStack_5f0 = *(UnityEngine_Shader_o **)(lVar15 + 0x48);
                                pSStack_5e8 = *(System_Collections_Generic_List_Material__o **)(lVar15 + 0x50)
                                ;
                                pUStack_5e0 = *(UnityEngine_Matrix4x4_array **)(lVar15 + 0x58);
                                pUStack_4a8 = *(UnityEngine_Matrix4x4_array **)(lVar28 + 0x20);
                                pUStack_4a0 = *(UnityEngine_Camera_o **)(lVar28 + 0x28);
                                iStack_498 = *(intptr_t *)(lVar28 + 0x30);
                                pSStack_490 = *(System_Threading_CancellationTokenSource_o **)(lVar28 + 0x38);
                                _fStack_488 = *(undefined8 *)(lVar28 + 0x40);
                                auStack_480._0_8_ = *(undefined8 *)(lVar28 + 0x48);
                                auStack_480._8_8_ = *(undefined8 *)(lVar28 + 0x50);
                                pUStack_470 = *(UnityEngine_Camera_o **)(lVar28 + 0x58);
                                UnityEngine_Matrix4x4__op_Multiply
                                          ((UnityEngine_Matrix4x4_o *)auStack_458,
                                           (UnityEngine_Matrix4x4_o)
                                           *(UnityEngine_Matrix4x4_Fields *)(lVar15 + 0x20),
                                           (UnityEngine_Matrix4x4_o)
                                           *(UnityEngine_Matrix4x4_Fields *)(lVar28 + 0x20),(MethodInfo *)0x0)
                                ;
                                pSStack_c8 = pSStack_428;
                                pUStack_c0 = pUStack_420;
                                uStack_d8._0_4_ = (float)auStack_458._32_4_;
                                uStack_d8._4_4_ = (float)auStack_458._36_4_;
                                auStack_d0 = (undefined1  [8])auStack_458._40_8_;
                                iStack_e8 = auStack_458._16_8_;
                                pSStack_e0 = (System_Threading_CancellationTokenSource_o *)auStack_458._24_8_;
                                pUStack_f8 = (UnityEngine_Matrix4x4_array *)auStack_458._0_8_;
                                pUStack_f0 = (UnityEngine_Camera_o *)auStack_458._8_8_;
                                method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                            (__this->fields).replacementClear;
                                if (method_00 != (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0) {
                                  value_01.fields.m20 = (float)auStack_458._8_4_;
                                  value_01.fields.m30 = (float)auStack_458._12_4_;
                                  value_01.fields.m00 = (float)auStack_458._0_4_;
                                  value_01.fields.m10 = (float)auStack_458._4_4_;
                                  value_01.fields.m01 = (float)auStack_458._16_4_;
                                  value_01.fields.m11 = (float)auStack_458._20_4_;
                                  value_01.fields.m21 = (float)auStack_458._24_4_;
                                  value_01.fields.m31 = (float)auStack_458._28_4_;
                                  value_01.fields.m02 = (float)auStack_458._32_4_;
                                  value_01.fields.m12 = (float)auStack_458._36_4_;
                                  value_01.fields.m22 = (float)auStack_458._40_4_;
                                  value_01.fields.m32 = (float)auStack_458._44_4_;
                                  value_01.fields._48_8_ = pSStack_428;
                                  value_01.fields._56_8_ = pUStack_420;
                                  UnityEngine_Material__SetMatrix
                                            ((UnityEngine_Material_o *)method_00,"_StereoToPrevViewProjCombined0",value_01,
                                             (MethodInfo *)0x0);
                                  lVar15 = *(long *)&(__this->fields).prevViewProjMat.fields.m23;
                                  if (lVar15 != 0) {
                                    if (*(uint *)(lVar15 + 0x18) < 2) goto label_0457e06d;
                                    pUVar31 = (UnityEngine_Material_o *)(__this->fields).replacementClear;
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
                                    if (*(uint *)(lVar28 + 0x18) < 2) goto label_0457e06d;
                                    pUVar33 = (UnityEngine_Matrix4x4_Fields *)(lVar28 + 0x60);
                                    uStack_238._0_4_ = pUVar33->m00;
                                    uStack_238._4_4_ = pUVar33->m10;
                                    uStack_230 = *(undefined8 *)(lVar28 + 0x68);
                                    uStack_228 = *(undefined8 *)(lVar28 + 0x70);
                                    uStack_220 = *(undefined8 *)(lVar28 + 0x78);
                                    uStack_218 = *(undefined8 *)(lVar28 + 0x80);
                                    uStack_210 = *(undefined8 *)(lVar28 + 0x88);
                                    uStack_208 = *(undefined8 *)(lVar28 + 0x90);
                                    uStack_200 = *(undefined8 *)(lVar28 + 0x98);
                                    method_00 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                                                auStack_b8;
                                    UnityEngine_Matrix4x4__op_Multiply
                                              ((UnityEngine_Matrix4x4_o *)method_00,
                                               (UnityEngine_Matrix4x4_o)*pUVar1,
                                               (UnityEngine_Matrix4x4_o)*pUVar33,(MethodInfo *)0x0);
                                    auStack_250._8_8_ = pSStack_88;
                                    pUStack_240 = pUStack_80;
                                    fStack_258 = (float)auStack_b8._32_4_;
                                    fStack_254 = (float)auStack_b8._36_4_;
                                    auStack_250._0_8_ = auStack_b8._40_8_;
                                    iStack_268 = auStack_b8._16_8_;
                                    pSStack_260 = (System_Threading_CancellationTokenSource_o *)
                                                  auStack_b8._24_8_;
                                    pUStack_278 = (UnityEngine_Matrix4x4_array *)auStack_b8._0_8_;
                                    pUStack_270 = (UnityEngine_Camera_o *)auStack_b8._8_8_;
                                    if (pUVar31 != (UnityEngine_Material_o *)0x0) {
                                      value_02.fields.m20 = (float)auStack_b8._8_4_;
                                      value_02.fields.m30 = (float)auStack_b8._12_4_;
                                      value_02.fields.m00 = (float)auStack_b8._0_4_;
                                      value_02.fields.m10 = (float)auStack_b8._4_4_;
                                      value_02.fields.m01 = (float)auStack_b8._16_4_;
                                      value_02.fields.m11 = (float)auStack_b8._20_4_;
                                      value_02.fields.m21 = (float)auStack_b8._24_4_;
                                      value_02.fields.m31 = (float)auStack_b8._28_4_;
                                      value_02.fields.m02 = (float)auStack_b8._32_4_;
                                      value_02.fields.m12 = (float)auStack_b8._36_4_;
                                      value_02.fields.m22 = (float)auStack_b8._40_4_;
                                      value_02.fields.m32 = (float)auStack_b8._44_4_;
                                      value_02.fields._48_8_ = pSStack_88;
                                      value_02.fields._56_8_ = pUStack_80;
                                      UnityEngine_Material__SetMatrix
                                                (pUVar31,"_StereoToPrevViewProjCombined1",value_02,(MethodInfo *)0x0);
                                      pUVar35 = pUStack_588;
                                      pUVar44 = (UnityEngine_Matrix4x4_array *)auStack_b8._0_8_;
                                      pUVar45 = (UnityEngine_Camera_o *)auStack_b8._8_8_;
                                      iVar46 = auStack_b8._16_8_;
                                      pSVar47 = (System_Threading_CancellationTokenSource_o *)
                                                auStack_b8._24_8_;
                                      uVar48 = auStack_b8._32_8_;
                                      uVar49 = auStack_b8._40_8_;
                                      pSVar50 = pSStack_88;
                                      pUVar51 = pUStack_80;
                                      goto label_0457c4e0;
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
label_0457e068:
  il2cpp_runtime_helper_022b2c90();
label_0457e06d:
  il2cpp_runtime_helper_022b2ca0();
  UVar42.fields = *(UnityEngine_Vector3_Fields *)&(method_00->fields).prevFrameUp.fields.y;
  pUVar25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)method_00,(MethodInfo *)0x0);
  if (pUVar25 == (UnityEngine_Transform_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  UVar43 = UnityEngine_Transform__get_position(pUVar25,(MethodInfo *)0x0);
  UVar42 = UnityEngine_Vector3__Slerp(UVar42,UVar43,0.75,(MethodInfo *)0x0);
  (method_00->fields).prevFrameUp.fields.y = (float)(int)UVar42.fields._0_8_;
  (method_00->fields).prevFrameUp.fields.z = (float)(int)((ulong)UVar42.fields._0_8_ >> 0x20);
  (method_00->fields).prevFramePos.fields.x = UVar42.fields.z;
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$Remember
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x457b030

void UnityStandardAssets_ImageEffects_CameraMotionBlur__Remember
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Object_Fields *pUVar2;
  long lVar3;
  long lVar4;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Object_c *pUVar6;
  UnityEngine_Matrix4x4_array *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  bool_conflict bVar28;
  uint uVar29;
  UnityEngine_Transform_o *pUVar30;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this_01;
  Il2CppObject *pIVar31;
  UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this_02;
  UnityEngine_Object_o *pUVar32;
  void **ppvVar33;
  UnityEngine_Vector3_o UVar34;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pUVar7 = *(UnityEngine_Matrix4x4_array **)&(__this->fields).showVelocity;
  fVar26 = (__this->fields).currentViewProjMat.fields.m00;
  fVar27 = (__this->fields).currentViewProjMat.fields.m10;
  fVar22 = (__this->fields).currentViewProjMat.fields.m20;
  fVar23 = (__this->fields).currentViewProjMat.fields.m30;
  fVar24 = (__this->fields).currentViewProjMat.fields.m01;
  fVar25 = (__this->fields).currentViewProjMat.fields.m11;
  fVar18 = (__this->fields).currentViewProjMat.fields.m21;
  fVar19 = (__this->fields).currentViewProjMat.fields.m31;
  fVar20 = (__this->fields).currentViewProjMat.fields.m02;
  fVar21 = (__this->fields).currentViewProjMat.fields.m12;
  fVar15 = (__this->fields).currentViewProjMat.fields.m32;
  fVar16 = (__this->fields).currentViewProjMat.fields.m03;
  fVar17 = (__this->fields).currentViewProjMat.fields.m13;
  (__this->fields).prevViewProjMat.fields.m22 = (__this->fields).currentViewProjMat.fields.m22;
  (__this->fields).prevViewProjMat.fields.m32 = fVar15;
  (__this->fields).prevViewProjMat.fields.m03 = fVar16;
  (__this->fields).prevViewProjMat.fields.m13 = fVar17;
  (__this->fields).prevViewProjMat.fields.m21 = fVar18;
  (__this->fields).prevViewProjMat.fields.m31 = fVar19;
  (__this->fields).prevViewProjMat.fields.m02 = fVar20;
  (__this->fields).prevViewProjMat.fields.m12 = fVar21;
  (__this->fields).prevViewProjMat.fields.m20 = fVar22;
  (__this->fields).prevViewProjMat.fields.m30 = fVar23;
  (__this->fields).prevViewProjMat.fields.m01 = fVar24;
  (__this->fields).prevViewProjMat.fields.m11 = fVar25;
  (__this->fields).currentStereoViewProjMat = pUVar7;
  (__this->fields).prevViewProjMat.fields.m00 = fVar26;
  (__this->fields).prevViewProjMat.fields.m10 = fVar27;
  __this_02 = __this;
  pUVar30 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar30 != (UnityEngine_Transform_o *)0x0) {
    UVar34 = UnityEngine_Transform__get_forward(pUVar30,(MethodInfo *)0x0);
    (__this->fields).prevFrameCount = (int)UVar34.fields._0_8_;
    (__this->fields).wasActive = (int)((ulong)UVar34.fields._0_8_ >> 0x20);
    (__this->fields).prevFrameForward.fields.x = UVar34.fields.z;
    __this_02 = __this;
    pUVar30 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar30 != (UnityEngine_Transform_o *)0x0) {
      UVar34 = UnityEngine_Transform__get_up(pUVar30,(MethodInfo *)0x0);
      (__this->fields).prevFrameForward.fields.y = (float)(int)UVar34.fields._0_8_;
      (__this->fields).prevFrameForward.fields.z = (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
      (__this->fields).prevFrameUp.fields.x = UVar34.fields.z;
      __this_02 = __this;
      __this_01 = (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *)0x0) {
        UVar34 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
        (__this->fields).prevFrameUp.fields.y = (float)(int)UVar34.fields._0_8_;
        (__this->fields).prevFrameUp.fields.z = (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
        (__this->fields).prevFramePos.fields.x = UVar34.fields.z;
        lVar3 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
        __this_02 = __this_01;
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) == 0) goto label_0457b262;
          lVar4 = *(long *)&(__this->fields).prevViewProjMat.fields.m23;
          uVar8 = *(undefined8 *)(lVar3 + 0x30);
          uVar9 = *(undefined8 *)(lVar3 + 0x38);
          uVar10 = *(undefined8 *)(lVar3 + 0x40);
          uVar11 = *(undefined8 *)(lVar3 + 0x48);
          uVar12 = *(undefined8 *)(lVar3 + 0x58);
          if (lVar4 != 0) {
            local_48 = (undefined4)*(undefined8 *)(lVar3 + 0x20);
            uStack_44 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
            uStack_40 = (undefined4)*(undefined8 *)(lVar3 + 0x28);
            uStack_3c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20);
            if (*(int *)(lVar4 + 0x18) == 0) goto label_0457b262;
            *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0x50);
            *(undefined8 *)(lVar4 + 0x58) = uVar12;
            *(undefined8 *)(lVar4 + 0x40) = uVar10;
            *(undefined8 *)(lVar4 + 0x48) = uVar11;
            *(undefined8 *)(lVar4 + 0x30) = uVar8;
            *(undefined8 *)(lVar4 + 0x38) = uVar9;
            *(undefined4 *)(lVar4 + 0x20) = local_48;
            *(undefined4 *)(lVar4 + 0x24) = uStack_44;
            *(undefined4 *)(lVar4 + 0x28) = uStack_40;
            *(undefined4 *)(lVar4 + 0x2c) = uStack_3c;
            lVar3 = *(long *)&(__this->fields).currentViewProjMat.fields.m33;
            if (lVar3 != 0) {
              if (*(uint *)(lVar3 + 0x18) < 2) goto label_0457b262;
              lVar4 = *(long *)&(__this->fields).prevViewProjMat.fields.m23;
              uVar8 = *(undefined8 *)(lVar3 + 0x60);
              uVar9 = *(undefined8 *)(lVar3 + 0x68);
              uVar10 = *(undefined8 *)(lVar3 + 0x70);
              uVar11 = *(undefined8 *)(lVar3 + 0x78);
              uVar12 = *(undefined8 *)(lVar3 + 0x80);
              uVar13 = *(undefined8 *)(lVar3 + 0x88);
              uVar14 = *(undefined8 *)(lVar3 + 0x98);
              if (lVar4 != 0) {
                if (1 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar3 + 0x90);
                  *(undefined8 *)(lVar4 + 0x98) = uVar14;
                  *(undefined8 *)(lVar4 + 0x80) = uVar12;
                  *(undefined8 *)(lVar4 + 0x88) = uVar13;
                  *(undefined8 *)(lVar4 + 0x70) = uVar10;
                  *(undefined8 *)(lVar4 + 0x78) = uVar11;
                  *(undefined8 *)(lVar4 + 0x60) = uVar8;
                  *(undefined8 *)(lVar4 + 0x68) = uVar9;
                  return;
                }
                goto label_0457b262;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0457b262:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b7 = '\x01';
  }
  pUVar32 = *(UnityEngine_Object_o **)&(__this_02->fields).prevFramePos.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pfVar1 = &(__this_02->fields).prevFramePos.fields.z;
  bVar28 = UnityEngine_Object__op_Equality(pUVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar28 != '\0') {
    pIVar31 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_02,MethodInfo_Camera_GetComponent_Camera);
    *(Il2CppObject **)&(__this_02->fields).prevFramePos.fields.z = pIVar31;
    pUVar32 = (UnityEngine_Object_o *)pfVar1;
    il2cpp_runtime_helper_022b4080();
  }
  __this_00 = *(UnityEngine_Camera_o **)pfVar1;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    uVar29 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(__this_00,uVar29 | 1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0b8 = '\x01';
  }
  pUVar5 = (UnityEngine_Object_o *)pUVar32[5].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar5,(MethodInfo *)0x0);
  if ((char)bVar28 != '\0') {
    pUVar2 = &pUVar32[5].fields;
    pUVar5 = (UnityEngine_Object_o *)pUVar2->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
    pUVar2->m_CachedPtr = 0;
    il2cpp_runtime_helper_022b4080(pUVar2,0);
  }
  pUVar6 = pUVar32[6].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar28 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
  if ((char)bVar28 != '\0') {
    pUVar5 = pUVar32 + 6;
    pUVar6 = pUVar5->klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
    pUVar5->klass = (UnityEngine_Object_c *)0x0;
    il2cpp_runtime_helper_022b4080(pUVar5,0);
  }
  pUVar5 = pUVar32[4].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar5,(MethodInfo *)0x0);
  if ((char)bVar28 != '\0') {
    ppvVar33 = &pUVar32[4].monitor;
    pUVar32 = *ppvVar33;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar32,(MethodInfo *)0x0);
    *ppvVar33 = (void *)0x0;
    il2cpp_runtime_helper_022b4080(ppvVar33,0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$GetTmpCam
// il2cpp: UnityEngine_Camera_o* UnityStandardAssets_ImageEffects_CameraMotionBlur__GetTmpCam (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x457e110

UnityEngine_Camera_o *
UnityStandardAssets_ImageEffects_CameraMotionBlur__GetTmpCam
          (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o *pUVar1;
  undefined4 uVar2;
  UnityEngine_Component_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  UnityEngine_LayerMask_o UVar5;
  System_String_o *pSVar6;
  UnityEngine_Object_o *pUVar7;
  System_Type_array *components;
  System_Type_o *pSVar8;
  long lVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Camera_o *pUVar12;
  UnityEngine_Behaviour_o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  UnityEngine_Camera_o *extraout_RAX;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar13;
  
  if (g_data_057af0ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_Camera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"_MotionBlurTmpCam");
    il2cpp_runtime_helper_023445d0(&"_");
    g_data_057af0ba = '\x01';
  }
  pUVar7 = *(UnityEngine_Object_o **)&(__this->fields).excludeLayers;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = &(__this->fields).excludeLayers;
  bVar4 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_0457e2e2:
    if (*(UnityEngine_Object_o **)pUVar1 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_hideFlags(*(UnityEngine_Object_o **)pUVar1,0x34,(MethodInfo *)0x0);
      if (*(UnityEngine_GameObject_o **)pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar10 = UnityEngine_GameObject__get_transform
                            (*(UnityEngine_GameObject_o **)pUVar1,(MethodInfo *)0x0);
        pUVar3 = *(UnityEngine_Component_o **)&(__this->fields).prevFramePos.fields.z;
        if (pUVar3 != (UnityEngine_Component_o *)0x0) {
          pUVar11 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            UVar13 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_position(pUVar10,UVar13,(MethodInfo *)0x0);
              if (*(UnityEngine_GameObject_o **)pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar10 = UnityEngine_GameObject__get_transform
                                    (*(UnityEngine_GameObject_o **)pUVar1,(MethodInfo *)0x0);
                pUVar3 = *(UnityEngine_Component_o **)&(__this->fields).prevFramePos.fields.z;
                if (pUVar3 != (UnityEngine_Component_o *)0x0) {
                  pUVar11 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
                  if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                    value = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
                    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__set_rotation(pUVar10,value,(MethodInfo *)0x0);
                      if (*(UnityEngine_GameObject_o **)pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar10 = UnityEngine_GameObject__get_transform
                                            (*(UnityEngine_GameObject_o **)pUVar1,(MethodInfo *)0x0);
                        pUVar3 = *(UnityEngine_Component_o **)&(__this->fields).prevFramePos.fields.z;
                        if (pUVar3 != (UnityEngine_Component_o *)0x0) {
                          pUVar11 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
                          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                            UVar13 = UnityEngine_Transform__get_localScale(pUVar11,(MethodInfo *)0x0);
                            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                              UnityEngine_Transform__set_localScale(pUVar10,UVar13,(MethodInfo *)0x0);
                              if (*(UnityEngine_GameObject_o **)pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar12 = (UnityEngine_Camera_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    (*(UnityEngine_GameObject_o **)pUVar1,MethodInfo_Camera_GetComponent_Camera);
                                if (pUVar12 != (UnityEngine_Camera_o *)0x0) {
                                  UnityEngine_Camera__CopyFrom
                                            (pUVar12,*(UnityEngine_Camera_o **)
                                                      &(__this->fields).prevFramePos.fields.z,
                                             (MethodInfo *)0x0);
                                  __this_00 = *(UnityEngine_GameObject_o **)&(__this->fields).excludeLayers;
                                  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                                    __this_01 = (UnityEngine_Behaviour_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          (__this_00,MethodInfo_Camera_GetComponent_Camera);
                                    if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
                                      UnityEngine_Behaviour__set_enabled(__this_01,0,(MethodInfo *)0x0);
                                      if (*(UnityEngine_GameObject_o **)pUVar1 !=
                                          (UnityEngine_GameObject_o *)0x0) {
                                        pUVar12 = (UnityEngine_Camera_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (*(UnityEngine_GameObject_o **)pUVar1,MethodInfo_Camera_GetComponent_Camera
                                                            );
                                        if (pUVar12 != (UnityEngine_Camera_o *)0x0) {
                                          UnityEngine_Camera__set_depthTextureMode
                                                    (pUVar12,0,(MethodInfo *)0x0);
                                          if (*(UnityEngine_GameObject_o **)pUVar1 !=
                                              (UnityEngine_GameObject_o *)0x0) {
                                            pUVar12 = (UnityEngine_Camera_o *)
                                                      UnityEngine_GameObject__GetComponent_object_
                                                                (*(UnityEngine_GameObject_o **)pUVar1,
                                                                 MethodInfo_Camera_GetComponent_Camera);
                                            if (pUVar12 != (UnityEngine_Camera_o *)0x0) {
                                              UnityEngine_Camera__set_clearFlags(pUVar12,4,(MethodInfo *)0x0);
                                              if (*(UnityEngine_GameObject_o **)pUVar1 !=
                                                  (UnityEngine_GameObject_o *)0x0) {
                                                pUVar12 = (UnityEngine_Camera_o *)
                                                          UnityEngine_GameObject__GetComponent_object_
                                                                    (*(UnityEngine_GameObject_o **)pUVar1,
                                                                     MethodInfo_Camera_GetComponent_Camera);
                                                return pUVar12;
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
label_0457e4b0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar7 = *(UnityEngine_Object_o **)&(__this->fields).prevFramePos.fields.z;
    if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_0457e4b0;
    pSVar6 = UnityEngine_Object__get_name(pUVar7,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_3af7150("_",pSVar6,"_MotionBlurTmpCam",(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(pSVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)0x0,pUVar7,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
label_0457e2d3:
      *(UnityEngine_Object_o **)pUVar1 = pUVar7;
      il2cpp_runtime_helper_022b4080(pUVar1);
      goto label_0457e2e2;
    }
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle.fields.value = TypeRef_Camera.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_0457e4b0;
    if (pSVar8 != (System_Type_o *)0x0) {
      lVar9 = il2cpp_runtime_helper_023051f0(pSVar8);
      if (lVar9 == 0) goto label_0457e4ba;
    }
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar8;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar8);
      pUVar7 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440
                ((UnityEngine_GameObject_o *)pUVar7,pSVar6,components,(MethodInfo *)0x0);
      goto label_0457e2d3;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0457e4ba:
  __this_02 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  *(undefined4 *)&__this_02[1].fields.m_CachedPtr = 2;
  if (g_data_057a6932 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
  __this_02[1].fields.m_CancellationTokenSource =
       *(System_Threading_CancellationTokenSource_o **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
  *(undefined4 *)&__this_02[2].klass = uVar2;
  __this_02[2].monitor = (void *)0x410000003f800000;
  __this_02[2].fields.m_CachedPtr = 0x3ec000003dcccccd;
  __this_02[2].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)0x13ba3d70a;
  UVar5 = UnityEngine_LayerMask__op_Implicit_4dfc6f0(0,(MethodInfo *)0x0);
  *(UnityEngine_LayerMask_Fields *)&__this_02[3].klass = UVar5.fields.m_Mask;
  *(undefined4 *)&__this_02[5].klass = 0x3d4ccccd;
  *(undefined4 *)&__this_02[5].monitor = 0x3f800000;
  if (g_data_057a6846 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6846 = '\x01';
  }
  lVar9 = TypeInfo_Vector3;
  uVar2 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  __this_02[10].monitor = *(void **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
  *(undefined4 *)&__this_02[10].fields.m_CachedPtr = uVar2;
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
    lVar9 = TypeInfo_Vector3;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x20);
  *(undefined8 *)((long)&__this_02[10].fields.m_CachedPtr + 4) =
       *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
  *(undefined4 *)((long)&__this_02[10].fields.m_CancellationTokenSource + 4) = uVar2;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
    lVar9 = TypeInfo_Vector3;
  }
  uVar2 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
  __this_02[0xb].klass = (UnityEngine_MonoBehaviour_c *)**(undefined8 **)(lVar9 + 0xb8);
  *(undefined4 *)&__this_02[0xb].monitor = uVar2;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&__this_02[1].klass = 1;
  *(undefined1 *)((long)&__this_02[1].klass + 2) = 1;
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_UnityEngine_Material);
  __this_02[1].monitor = __this_03;
  il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$StartFrame
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur__StartFrame (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x457e080

void UnityStandardAssets_ImageEffects_CameraMotionBlur__StartFrame
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o b;
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields = *(UnityEngine_Vector3_Fields *)&(__this->fields).prevFrameUp.fields.y;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    b = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    UVar1 = UnityEngine_Vector3__Slerp(UVar1,b,0.75,(MethodInfo *)0x0);
    (__this->fields).prevFrameUp.fields.y = (float)(int)UVar1.fields._0_8_;
    (__this->fields).prevFrameUp.fields.z = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    (__this->fields).prevFramePos.fields.x = UVar1.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$divRoundUp
// il2cpp: int32_t UnityStandardAssets_ImageEffects_CameraMotionBlur__divRoundUp (int32_t x, int32_t d, const MethodInfo* method);
// 0x457e100

int32_t UnityStandardAssets_ImageEffects_CameraMotionBlur__divRoundUp(int32_t x,int32_t d,MethodInfo *method)

{
  return (x + d + -1) / d;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur___ctor (UnityStandardAssets_ImageEffects_CameraMotionBlur_o* __this, const MethodInfo* method);
// 0x457e4d0

void UnityStandardAssets_ImageEffects_CameraMotionBlur___ctor
               (UnityStandardAssets_ImageEffects_CameraMotionBlur_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_LayerMask_o UVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  
  *(undefined4 *)&(__this->fields).createdMaterials = 2;
  if (g_data_057a6932 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
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
  UVar3 = UnityEngine_LayerMask__op_Implicit_4dfc6f0(0,(MethodInfo *)0x0);
  (__this->fields).softZDistance = (float)UVar3.fields.m_Mask;
  *(undefined4 *)&(__this->fields).noiseTexture = 0x3d4ccccd;
  (__this->fields).jitter = 1.0;
  if (g_data_057a6846 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6846 = '\x01';
  }
  lVar4 = TypeInfo_Vector3;
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  (__this->fields).prevFrameCount = (int)uVar2;
  (__this->fields).wasActive = (int)((ulong)uVar2 >> 0x20);
  (__this->fields).prevFrameForward.fields.x = fVar1;
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
    lVar4 = TypeInfo_Vector3;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
  fVar1 = *(float *)(*(long *)(lVar4 + 0xb8) + 0x20);
  (__this->fields).prevFrameForward.fields.y = (float)(int)uVar2;
  (__this->fields).prevFrameForward.fields.z = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).prevFrameUp.fields.x = fVar1;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
    lVar4 = TypeInfo_Vector3;
  }
  uVar2 = **(undefined8 **)(lVar4 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(lVar4 + 0xb8) + 1);
  (__this->fields).prevFrameUp.fields.y = (float)(int)uVar2;
  (__this->fields).prevFrameUp.fields.z = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).prevFramePos.fields.x = fVar1;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&(__this->fields).supportHDRTextures = 1;
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).isSupported);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.CameraMotionBlur$$.cctor
// il2cpp: void UnityStandardAssets_ImageEffects_CameraMotionBlur___cctor (const MethodInfo* method);
// 0x457e670

void UnityStandardAssets_ImageEffects_CameraMotionBlur___cctor(MethodInfo *method)

{
  if (g_data_057af0bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CameraMotionBlur);
    g_data_057af0bb = '\x01';
  }
  **(undefined4 **)(TypeInfo_CameraMotionBlur + 0xb8) = 0x41200000;
  return;
}


