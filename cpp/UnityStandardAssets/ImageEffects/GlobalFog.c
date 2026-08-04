// Type: UnityStandardAssets.ImageEffects.GlobalFog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/GlobalFog.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/GlobalFog.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.GlobalFog$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_GlobalFog__CheckResources (UnityStandardAssets_ImageEffects_GlobalFog_o* __this, const MethodInfo* method);
// 0x45824f0

bool_conflict
UnityStandardAssets_ImageEffects_GlobalFog__CheckResources
          (UnityStandardAssets_ImageEffects_GlobalFog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  undefined8 uVar1;
  undefined8 extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_4475ed0
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,1,in_RDX);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         *(UnityEngine_Shader_o **)&(__this->fields).useRadialDistance,
                         *(UnityEngine_Material_o **)&(__this->fields).height,in_RCX);
  *(MethodInfo **)&(__this->fields).height = method_00;
  uVar1 = il2cpp_runtime_helper_022b4080(&(__this->fields).height);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.GlobalFog$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_GlobalFog__OnRenderImage (UnityStandardAssets_ImageEffects_GlobalFog_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4582550

void UnityStandardAssets_ImageEffects_GlobalFog__OnRenderImage
               (UnityStandardAssets_ImageEffects_GlobalFog_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Material_o *pUVar2;
  ulong uVar3;
  UnityEngine_Matrix4x4_o __this_00;
  UnityEngine_Matrix4x4_o __this_01;
  UnityEngine_Matrix4x4_o __this_02;
  UnityEngine_Matrix4x4_o __this_03;
  UnityEngine_Matrix4x4_o value;
  UnityEngine_Vector4_o value_00;
  undefined1 auVar4 [16];
  char cVar5;
  int32_t iVar6;
  UnityStandardAssets_ImageEffects_GlobalFog_o *__this_04;
  UnityStandardAssets_ImageEffects_GlobalFog_o *__this_05;
  UnityEngine_Vector3_array *outCorners;
  System_Collections_Generic_List_object__o *__this_06;
  UnityStandardAssets_ImageEffects_GlobalFog_o *__this_07;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  UnityEngine_Vector4_o row;
  UnityEngine_Vector4_o row_00;
  UnityEngine_Vector4_o row_01;
  UnityEngine_Vector4_o row_02;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  UnityEngine_Vector4_o value_04;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  undefined8 in_stack_fffffffffffffe78;
  undefined8 in_stack_fffffffffffffe80;
  undefined8 in_stack_fffffffffffffe88;
  undefined8 in_stack_fffffffffffffe90;
  undefined8 in_stack_fffffffffffffe98;
  undefined8 in_stack_fffffffffffffea0;
  undefined8 in_stack_fffffffffffffea8;
  undefined8 in_stack_fffffffffffffeb0;
  float fStack_130;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [16];
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (g_data_057af0d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"_SceneFogMode");
    il2cpp_runtime_helper_023445d0(&"_CameraWS");
    il2cpp_runtime_helper_023445d0(&"_HeightParams");
    il2cpp_runtime_helper_023445d0(&"_SceneFogParams");
    il2cpp_runtime_helper_023445d0(&"_DistanceParams");
    il2cpp_runtime_helper_023445d0(&"_FrustumCornersWS");
    g_data_057af0d5 = '\x01';
  }
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  cVar5 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if ((cVar5 == '\0') ||
     ((*(char *)&(__this->fields).createdMaterials == '\0' &&
      (*(char *)((long)&(__this->fields).createdMaterials + 3) == '\0')))) {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  __this_07 = __this;
  __this_04 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
  if (__this_04 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
    __this_05 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    outCorners = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3);
    fVar7 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)__this_04,(MethodInfo *)0x0);
    iVar6 = UnityEngine_Camera__get_stereoActiveEye((UnityEngine_Camera_o *)__this_04,(MethodInfo *)0x0);
    UnityEngine_Camera__CalculateFrustumCorners
              ((UnityEngine_Camera_o *)__this_04,(UnityEngine_Rect_o)(ZEXT816(0x3f8000003f800000) << 0x40),
               fVar7,iVar6,outCorners,(MethodInfo *)0x0);
    __this_07 = __this_04;
    if (outCorners != (UnityEngine_Vector3_array *)0x0) {
      if ((int)outCorners->max_length == 0) goto label_04582b9c;
      if (__this_05 != (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0) {
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        __this_07 = __this_05;
        UVar14 = UnityEngine_Transform__TransformVector
                           ((UnityEngine_Transform_o *)__this_05,outCorners->m_Items[0].fields,
                            (MethodInfo *)0x0);
        fStack_a8 = UVar14.fields.z;
        uStack_a4 = uVar10;
        uStack_a0 = uVar11;
        uStack_9c = uVar12;
        if (((uint)outCorners->max_length < 2) ||
           (__this_07 = __this_05,
           row_01.fields._0_12_ =
                UnityEngine_Transform__TransformVector
                          ((UnityEngine_Transform_o *)__this_05,outCorners->m_Items[1].fields,
                           (MethodInfo *)0x0), (uint)outCorners->max_length < 3)) goto label_04582b9c;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        __this_07 = __this_05;
        UVar15 = UnityEngine_Transform__TransformVector
                           ((UnityEngine_Transform_o *)__this_05,outCorners->m_Items[2].fields,
                            (MethodInfo *)0x0);
        fStack_98 = UVar15.fields.z;
        auStack_88._8_4_ = extraout_XMM0_Dc;
        auStack_88._0_8_ = UVar15.fields._0_8_;
        auStack_88._12_4_ = extraout_XMM0_Dd;
        uStack_94 = uVar10;
        uStack_90 = uVar11;
        uStack_8c = uVar12;
        if ((uint)outCorners->max_length < 4) goto label_04582b9c;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        UVar15 = UnityEngine_Transform__TransformVector
                           ((UnityEngine_Transform_o *)__this_05,outCorners->m_Items[3].fields,
                            (MethodInfo *)0x0);
        fStack_c8 = UVar15.fields.z;
        auStack_b8._8_4_ = extraout_XMM0_Dc_00;
        auStack_b8._0_8_ = UVar15.fields._0_8_;
        auStack_b8._12_4_ = extraout_XMM0_Dd_00;
        uStack_c4 = uVar10;
        uStack_c0 = uVar11;
        uStack_bc = uVar12;
        if (g_data_057af100 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Matrix4x4);
          g_data_057af100 = '\x01';
        }
        lVar1 = *(long *)(TypeInfo_Matrix4x4 + 0xb8);
        uStack_108 = *(undefined8 *)(lVar1 + 0x40);
        uStack_100 = *(undefined8 *)(lVar1 + 0x48);
        uStack_f8 = *(undefined8 *)(lVar1 + 0x50);
        uStack_f0 = *(undefined8 *)(lVar1 + 0x58);
        uStack_e8 = *(undefined8 *)(lVar1 + 0x60);
        uStack_e0 = *(undefined8 *)(lVar1 + 0x68);
        uStack_d8 = *(undefined8 *)(lVar1 + 0x70);
        uStack_d0 = *(undefined8 *)(lVar1 + 0x78);
        __this_00.fields.m20 = (float)(int)in_stack_fffffffffffffe80;
        __this_00.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffe80 >> 0x20);
        __this_00.fields.m00 = (float)(int)in_stack_fffffffffffffe78;
        __this_00.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffe78 >> 0x20);
        __this_00.fields.m01 = (float)(int)in_stack_fffffffffffffe88;
        __this_00.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
        __this_00.fields.m21 = (float)(int)in_stack_fffffffffffffe90;
        __this_00.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffe90 >> 0x20);
        __this_00.fields.m02 = (float)(int)in_stack_fffffffffffffe98;
        __this_00.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffe98 >> 0x20);
        __this_00.fields.m22 = (float)(int)in_stack_fffffffffffffea0;
        __this_00.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
        __this_00.fields.m03 = (float)(int)in_stack_fffffffffffffea8;
        __this_00.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
        __this_00.fields.m23 = (float)(int)in_stack_fffffffffffffeb0;
        __this_00.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
        row.fields.z = fStack_a8;
        row.fields.x = (float)(int)UVar14.fields._0_8_;
        row.fields.y = (float)(int)((ulong)UVar14.fields._0_8_ >> 0x20);
        row.fields.w = 0.0;
        iVar6 = (int32_t)&uStack_108;
        UnityEngine_Matrix4x4__SetRow(__this_00,iVar6,row,(MethodInfo *)0x0);
        auVar4 = auStack_b8;
        __this_01.fields.m20 = (float)(int)in_stack_fffffffffffffe80;
        __this_01.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffe80 >> 0x20);
        __this_01.fields.m00 = (float)(int)in_stack_fffffffffffffe78;
        __this_01.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffe78 >> 0x20);
        __this_01.fields.m01 = (float)(int)in_stack_fffffffffffffe88;
        __this_01.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
        __this_01.fields.m21 = (float)(int)in_stack_fffffffffffffe90;
        __this_01.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffe90 >> 0x20);
        __this_01.fields.m02 = (float)(int)in_stack_fffffffffffffe98;
        __this_01.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffe98 >> 0x20);
        __this_01.fields.m22 = (float)(int)in_stack_fffffffffffffea0;
        __this_01.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
        __this_01.fields.m03 = (float)(int)in_stack_fffffffffffffea8;
        __this_01.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
        __this_01.fields.m23 = (float)(int)in_stack_fffffffffffffeb0;
        __this_01.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
        row_00.fields.z = fStack_c8;
        row_00.fields.x = (float)auStack_b8._0_4_;
        row_00.fields.y = (float)auStack_b8._4_4_;
        row_00.fields.w = 0.0;
        auStack_b8 = auVar4;
        UnityEngine_Matrix4x4__SetRow(__this_01,iVar6,row_00,(MethodInfo *)0x1);
        __this_02.fields.m20 = (float)(int)in_stack_fffffffffffffe80;
        __this_02.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffe80 >> 0x20);
        __this_02.fields.m00 = (float)(int)in_stack_fffffffffffffe78;
        __this_02.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffe78 >> 0x20);
        __this_02.fields.m01 = (float)(int)in_stack_fffffffffffffe88;
        __this_02.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
        __this_02.fields.m21 = (float)(int)in_stack_fffffffffffffe90;
        __this_02.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffe90 >> 0x20);
        __this_02.fields.m02 = (float)(int)in_stack_fffffffffffffe98;
        __this_02.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffe98 >> 0x20);
        __this_02.fields.m22 = (float)(int)in_stack_fffffffffffffea0;
        __this_02.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
        __this_02.fields.m03 = (float)(int)in_stack_fffffffffffffea8;
        __this_02.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
        __this_02.fields.m23 = (float)(int)in_stack_fffffffffffffeb0;
        __this_02.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
        row_01.fields.w = 0.0;
        UnityEngine_Matrix4x4__SetRow(__this_02,iVar6,row_01,(MethodInfo *)0x2);
        auVar4 = auStack_88;
        __this_03.fields.m20 = (float)(int)in_stack_fffffffffffffe80;
        __this_03.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffe80 >> 0x20);
        __this_03.fields.m00 = (float)(int)in_stack_fffffffffffffe78;
        __this_03.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffe78 >> 0x20);
        __this_03.fields.m01 = (float)(int)in_stack_fffffffffffffe88;
        __this_03.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
        __this_03.fields.m21 = (float)(int)in_stack_fffffffffffffe90;
        __this_03.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffe90 >> 0x20);
        __this_03.fields.m02 = (float)(int)in_stack_fffffffffffffe98;
        __this_03.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffe98 >> 0x20);
        __this_03.fields.m22 = (float)(int)in_stack_fffffffffffffea0;
        __this_03.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
        __this_03.fields.m03 = (float)(int)in_stack_fffffffffffffea8;
        __this_03.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
        __this_03.fields.m23 = (float)(int)in_stack_fffffffffffffeb0;
        __this_03.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
        row_02.fields.z = fStack_98;
        row_02.fields.x = (float)auStack_88._0_4_;
        row_02.fields.y = (float)auStack_88._4_4_;
        row_02.fields.w = 0.0;
        auStack_88 = auVar4;
        UnityEngine_Matrix4x4__SetRow(__this_03,iVar6,row_02,(MethodInfo *)0x3);
        value_01.fields._0_12_ =
             UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_05,(MethodInfo *)0x0);
        fVar7 = value_01.fields.y - *(float *)((long)&(__this->fields).createdMaterials + 4);
        cVar5 = *(char *)((long)&(__this->fields).createdMaterials + 1);
        pUVar2 = *(UnityEngine_Material_o **)&(__this->fields).height;
        uStack_48 = uStack_d8;
        uStack_40 = uStack_d0;
        uStack_58 = uStack_e8;
        uStack_50 = uStack_e0;
        uStack_68 = uStack_f8;
        uStack_60 = uStack_f0;
        uStack_78 = uStack_108;
        uStack_70 = uStack_100;
        __this_07 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0;
        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
          value.fields.m20 = (float)(undefined4)uStack_100;
          value.fields.m30 = (float)uStack_100._4_4_;
          value.fields.m00 = (float)(undefined4)uStack_108;
          value.fields.m10 = (float)uStack_108._4_4_;
          value.fields.m01 = (float)(undefined4)uStack_f8;
          value.fields.m11 = (float)uStack_f8._4_4_;
          value.fields.m21 = (float)(undefined4)uStack_f0;
          value.fields.m31 = (float)uStack_f0._4_4_;
          value.fields.m02 = (float)(undefined4)uStack_e8;
          value.fields.m12 = (float)uStack_e8._4_4_;
          value.fields.m22 = (float)(undefined4)uStack_e0;
          value.fields.m32 = (float)uStack_e0._4_4_;
          value.fields.m03 = (float)(undefined4)uStack_d8;
          value.fields.m13 = (float)uStack_d8._4_4_;
          value.fields.m23 = (float)(undefined4)uStack_d0;
          value.fields.m33 = (float)uStack_d0._4_4_;
          UnityEngine_Material__SetMatrix(pUVar2,"_FrustumCornersWS",value,(MethodInfo *)0x0);
          pUVar2 = *(UnityEngine_Material_o **)&(__this->fields).height;
          __this_07 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0;
          if (pUVar2 != (UnityEngine_Material_o *)0x0) {
            value_01.fields.w = 0.0;
            UnityEngine_Material__SetVector(pUVar2,"_CameraWS",value_01,(MethodInfo *)0x0);
            pUVar2 = *(UnityEngine_Material_o **)&(__this->fields).height;
            __this_07 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0;
            if (pUVar2 != (UnityEngine_Material_o *)0x0) {
              value_02.fields.y = fVar7;
              value_02.fields.x = (float)*(undefined4 *)((long)&(__this->fields).createdMaterials + 4);
              uVar3 = CONCAT44((float)(__this->fields).distanceFog * 0.5,~-(uint)(0.0 < fVar7)) &
                      0xffffffff3f800000;
              value_02.fields.z = (float)(int)uVar3;
              value_02.fields.w = (float)(int)(uVar3 >> 0x20);
              UnityEngine_Material__SetVector(pUVar2,"_HeightParams",value_02,(MethodInfo *)0x0);
              pUVar2 = *(UnityEngine_Material_o **)&(__this->fields).height;
              __this_07 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0;
              if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                fVar7 = (float)(__this->fields).excludeFarPixels;
                if (fVar7 <= 0.0) {
                  fVar7 = 0.0;
                }
                uVar3 = CONCAT44(*(undefined4 *)(&g_data_00d1d440 + (ulong)(cVar5 == '\0') * 4),fVar7) ^
                        0x80000000;
                value_03.fields.z = 0.0;
                value_03.fields.w = 0.0;
                value_03.fields.x = (float)(int)uVar3;
                value_03.fields.y = (float)(int)(uVar3 >> 0x20);
                UnityEngine_Material__SetVector(pUVar2,"_DistanceParams",value_03,(MethodInfo *)0x0);
                iVar6 = UnityEngine_RenderSettings__get_fogMode((MethodInfo *)0x0);
                fVar7 = UnityEngine_RenderSettings__get_fogDensity((MethodInfo *)0x0);
                fVar8 = UnityEngine_RenderSettings__get_fogStartDistance((MethodInfo *)0x0);
                fVar9 = UnityEngine_RenderSettings__get_fogEndDistance((MethodInfo *)0x0);
                if (iVar6 == 1) {
                  fVar8 = fVar9 - fVar8;
                }
                else {
                  fVar8 = 0.0;
                }
                fVar13 = 0.0;
                if (0.0001 < ABS(fVar8)) {
                  fVar13 = 1.0 / fVar8;
                }
                fVar8 = 0.0;
                if (iVar6 == 1) {
                  fStack_130 = -fVar13;
                  fVar8 = fVar9 * fVar13;
                }
                else {
                  fStack_130 = 0.0;
                }
                pUVar2 = *(UnityEngine_Material_o **)&(__this->fields).height;
                __this_07 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0;
                if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                  value_00.fields.y = fVar7 * 1.442695;
                  value_00.fields.x = fVar7 * 1.2011224;
                  value_00.fields.z = fStack_130;
                  value_00.fields.w = fVar8;
                  UnityEngine_Material__SetVector(pUVar2,"_SceneFogParams",value_00,(MethodInfo *)0x0);
                  pUVar2 = *(UnityEngine_Material_o **)&(__this->fields).height;
                  __this_07 = (UnityStandardAssets_ImageEffects_GlobalFog_o *)0x0;
                  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                    value_04.fields.x = (float)iVar6;
                    uVar10 = 0;
                    if (*(char *)((long)&(__this->fields).createdMaterials + 2) != '\0') {
                      uVar10 = 0x3f800000;
                    }
                    iVar6 = 0;
                    value_04.fields.y = (float)uVar10;
                    value_04.fields.z = 0.0;
                    value_04.fields.w = 0.0;
                    UnityEngine_Material__SetVector(pUVar2,"_SceneFogMode",value_04,(MethodInfo *)0x0);
                    cVar5 = *(char *)&(__this->fields).createdMaterials;
                    if ((cVar5 == '\0') || (*(char *)((long)&(__this->fields).createdMaterials + 3) == '\0'))
                    {
                      iVar6 = (cVar5 == '\0') + 1;
                    }
                    pUVar2 = *(UnityEngine_Material_o **)&(__this->fields).height;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)source,destination,pUVar2,iVar6,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04582b9c:
  il2cpp_runtime_helper_022b2ca0();
  *(undefined2 *)&(__this_07->fields).createdMaterials = 0x101;
  *(undefined1 *)((long)&(__this_07->fields).createdMaterials + 3) = 1;
  *(undefined8 *)((long)&(__this_07->fields).createdMaterials + 4) = 0x400000003f800000;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&(__this_07->fields).supportHDRTextures = 1;
  *(undefined1 *)((long)&(__this_07->fields).supportHDRTextures + 2) = 1;
  __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_06,MethodInfo_List_1_UnityEngine_Material);
  *(System_Collections_Generic_List_object__o **)&(__this_07->fields).isSupported = __this_06;
  il2cpp_runtime_helper_022b4080(&(__this_07->fields).isSupported);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_07,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.GlobalFog$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_GlobalFog___ctor (UnityStandardAssets_ImageEffects_GlobalFog_o* __this, const MethodInfo* method);
// 0x4582bb0

void UnityStandardAssets_ImageEffects_GlobalFog___ctor
               (UnityStandardAssets_ImageEffects_GlobalFog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  *(undefined2 *)&(__this->fields).createdMaterials = 0x101;
  *(undefined1 *)((long)&(__this->fields).createdMaterials + 3) = 1;
  *(undefined8 *)((long)&(__this->fields).createdMaterials + 4) = 0x400000003f800000;
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


