// Type: UnityStandardAssets.ImageEffects.Bloom
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Bloom.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Bloom.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.Bloom$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_Bloom__CheckResources (UnityStandardAssets_ImageEffects_Bloom_o* __this, const MethodInfo* method);
// 0x4576900

bool_conflict
UnityStandardAssets_ImageEffects_Bloom__CheckResources
          (UnityStandardAssets_ImageEffects_Bloom_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  UnityEngine_Material_o *pUVar3;
  MethodInfo *method_00;
  undefined8 uVar4;
  undefined8 extraout_RAX;
  MethodInfo *in_RCX;
  undefined1 uVar5;
  
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar5 = 0;
  bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar1;
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar2) {
    bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar5 = (undefined1)bVar1;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar5;
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).lensFlareMaterial,
                      (UnityEngine_Material_o *)(__this->fields).screenBlendShader,in_RCX);
  (__this->fields).screenBlendShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).screenBlendShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).lensFlareVignetteMask,
                      (UnityEngine_Material_o *)(__this->fields).lensFlareShader,in_RCX);
  (__this->fields).lensFlareShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).lensFlareShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).screenBlend,
                      (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,in_RCX);
  (__this->fields).blurAndFlaresShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).blurAndFlaresShader,pUVar3);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).blurAndFlaresMaterial,
                         (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader,in_RCX);
  (__this->fields).brightPassFilterShader = (UnityEngine_Shader_o *)method_00;
  uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).brightPassFilterShader);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.Bloom$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__OnRenderImage (UnityStandardAssets_ImageEffects_Bloom_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4576df0

void UnityStandardAssets_ImageEffects_Bloom__OnRenderImage
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  intptr_t iVar5;
  UnityEngine_Material_c *exists;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  int32_t iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool_conflict bVar20;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar21;
  UnityEngine_Texture_o *pUVar22;
  UnityEngine_Texture_o *source_00;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar23;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *pMVar24;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_RenderTexture_o *dest_00;
  UnityEngine_RenderTexture_o *rt;
  UnityEngine_RenderTexture_o *__this_01;
  UnityEngine_RenderTexture_o *__this_02;
  int width;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar25;
  uint uVar26;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar27;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar28;
  System_String_o *source_01;
  System_String_o *source_02;
  UnityEngine_Material_o *pUVar29;
  UnityEngine_Material_o *pUVar30;
  UnityEngine_Material_o *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  uint height;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar31;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float in_XMM1_Da;
  float in_XMM1_Db;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  UnityEngine_Vector4_o value_04;
  UnityEngine_Vector4_o value_05;
  UnityEngine_Vector4_o value_06;
  UnityEngine_Vector4_o value_07;
  UnityEngine_Vector4_o value_08;
  UnityEngine_Vector4_o value_09;
  UnityEngine_Vector4_o value_10;
  UnityEngine_Vector4_o value_11;
  UnityStandardAssets_ImageEffects_Bloom_o *pUStack_c8;
  
  value_02.fields.z = in_XMM1_Da;
  value_02.fields.w = in_XMM1_Db;
  if (g_data_057af0a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    il2cpp_runtime_helper_023445d0(&"_TintColor");
    il2cpp_runtime_helper_023445d0(&"_Threshhold");
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    il2cpp_runtime_helper_023445d0(&"_Offsets");
    il2cpp_runtime_helper_023445d0(&"_StretchWidth");
    il2cpp_runtime_helper_023445d0(&"_Saturation");
    g_data_057af0a1 = '\x01';
    value_02.fields.z = in_XMM1_Da;
    value_02.fields.w = in_XMM1_Db;
  }
  pUVar25 = (UnityStandardAssets_ImageEffects_Bloom_o *)(__this->klass->vtable)._4_CheckResources.method;
  pUVar28 = __this;
  cVar14 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)();
  if (cVar14 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  *(undefined1 *)&(__this->fields).screenBlendMode = 0;
  iVar16 = (__this->fields).tweakMode;
  if (iVar16 == 0) {
    if (source == (UnityEngine_RenderTexture_o *)0x0) goto label_04577c14;
    pUVar25 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
    pUVar21 = (UnityStandardAssets_ImageEffects_Bloom_o *)source;
    iVar15 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
    if (iVar15 == 2) {
      pUVar25 = MethodInfo_Camera_GetComponent_Camera;
      pUVar28 = __this;
      pUVar21 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
      if (pUVar21 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) goto label_04577c14;
      pUVar25 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
      bVar20 = UnityEngine_Camera__get_allowHDR((UnityEngine_Camera_o *)pUVar21,(MethodInfo *)0x0);
      *(char *)&(__this->fields).screenBlendMode = (char)bVar20;
      pUVar28 = pUVar21;
      if ((char)bVar20 != '\0') goto label_04576f46;
    }
    else {
      *(undefined1 *)&(__this->fields).screenBlendMode = 0;
    }
label_04576f51:
    cVar14 = '\0';
  }
  else {
    *(bool *)&(__this->fields).screenBlendMode = iVar16 == 1;
    pUVar21 = pUVar28;
    if (iVar16 != 1) goto label_04576f51;
label_04576f46:
    cVar14 = (char)(__this->fields).supportHDRTextures;
    pUVar21 = pUVar28;
  }
  *(char *)&(__this->fields).screenBlendMode = cVar14;
  iVar15 = 1;
  if (cVar14 == '\0') {
    iVar15 = *(int32_t *)((long)&(__this->fields).createdMaterials + 4);
  }
  pUVar28 = pUVar21;
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    uVar26 = (uint)(cVar14 == '\0') * 5 + 2;
    iVar16 = (*(source->klass->vtable)._5_get_width.methodPtr)
                       (source,(source->klass->vtable)._5_get_width.method);
    iVar17 = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    iVar18 = (*(source->klass->vtable)._5_get_width.methodPtr)
                       (source,(source->klass->vtable)._5_get_width.method);
    width = (int)(((uint)(iVar18 >> 0x1f) >> 0x1e) + iVar18) >> 2;
    iVar18 = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    height = (int)(((uint)(iVar18 >> 0x1f) >> 0x1e) + iVar18) >> 2;
    iVar18 = (*(source->klass->vtable)._5_get_width.methodPtr)
                       (source,(source->klass->vtable)._5_get_width.method);
    iVar19 = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    pUVar21 = (UnityStandardAssets_ImageEffects_Bloom_o *)
              UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar26,(MethodInfo *)0x0);
    pUVar22 = (UnityEngine_Texture_o *)
              UnityEngine_RenderTexture__GetTemporary_4de1d50
                        (iVar16 / 2,iVar17 / 2,0,uVar26,(MethodInfo *)0x0);
    if ((__this->fields).doHdr < 1) {
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pUVar22,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit_4dc2a60
                (pUVar22,(UnityEngine_RenderTexture_o *)pUVar21,
                 (UnityEngine_Material_o *)(__this->fields).screenBlendShader,6,(MethodInfo *)0x0);
    }
    else {
      pUVar29 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2a60
                ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pUVar22,pUVar29,2,
                 (MethodInfo *)0x0);
      source_00 = (UnityEngine_Texture_o *)
                  UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar26,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit_4dc2a60
                (pUVar22,(UnityEngine_RenderTexture_o *)source_00,
                 (UnityEngine_Material_o *)(__this->fields).screenBlendShader,2,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit_4dc2a60
                (source_00,(UnityEngine_RenderTexture_o *)pUVar21,
                 (UnityEngine_Material_o *)(__this->fields).screenBlendShader,6,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
    }
    pUVar25 = (UnityStandardAssets_ImageEffects_Bloom_o *)(ulong)height;
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar22,(MethodInfo *)0x0);
    pUStack_c8 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                 UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar26,(MethodInfo *)0x0);
    uVar2 = (__this->fields).bloomIntensity;
    uVar6 = (__this->fields).bloomThreshold;
    uVar3 = (__this->fields).bloomThresholdColor.fields.r;
    uVar7 = (__this->fields).bloomThresholdColor.fields.g;
    value_02.fields.z = (float)(__this->fields).quality;
    if (g_data_057af0a5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
      il2cpp_runtime_helper_023445d0(&"_Threshhold");
      g_data_057af0a5 = '\x01';
    }
    value_02.fields.w = 0.0;
    pUVar29 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
    pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
    if (pUVar29 != (UnityEngine_Material_o *)0x0) {
      value.fields.x = (float)uVar2 * value_02.fields.z;
      value.fields.y = (float)uVar6 * value_02.fields.z;
      value.fields.z = value_02.fields.z * (float)uVar3;
      value.fields.w = value_02.fields.z * (float)uVar7;
      UnityEngine_Material__SetVector(pUVar29,(System_String_o *)"_Threshhold",value,(MethodInfo *)0x0);
      pUVar29 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
      value_02.fields.z = value.fields.z;
      value_02.fields.w = value.fields.w;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        value_02.fields.z = value.fields.z;
        value_02.fields.w = value.fields.w;
      }
      value.fields.w = 1.4013e-45;
      UnityEngine_Graphics__Blit_4dc2a60
                ((UnityEngine_Texture_o *)pUVar21,(UnityEngine_RenderTexture_o *)pUStack_c8,pUVar29,1,
                 (MethodInfo *)0x0);
      value.fields.z = (__this->fields).bloomThresholdColor.fields.b;
      if (((int)value.fields.z < 1) || (value.fields.w = 1.4013e-44, 10 < (int)value.fields.z)) {
        (__this->fields).bloomThresholdColor.fields.b = value.fields.w;
      }
      value.fields.z = (float)iVar18 / (float)iVar19;
      iVar18 = 0;
      do {
        while( true ) {
          pUVar25 = (UnityStandardAssets_ImageEffects_Bloom_o *)(ulong)height;
          value.fields.w = ((float)iVar18 * 0.25 + 1.0) * (float)(__this->fields).hdr;
          pUVar23 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                    UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar26,(MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          UnityEngine_Material__SetVector
                    (pUVar29,(System_String_o *)"_Offsets",
                     (UnityEngine_Vector4_o)(ZEXT416((uint)(value.fields.w * 0.001953125)) << 0x20),
                     (MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUStack_c8,(UnityEngine_RenderTexture_o *)pUVar23,pUVar29,4,
                     (MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)pUStack_c8,(MethodInfo *)0x0);
          pUVar25 = (UnityStandardAssets_ImageEffects_Bloom_o *)(ulong)height;
          pUStack_c8 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                       UnityEngine_RenderTexture__GetTemporary_4de1d50
                                 (width,height,0,uVar26,(MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          UnityEngine_Material__SetVector
                    (pUVar29,(System_String_o *)"_Offsets",
                     (UnityEngine_Vector4_o)ZEXT416((uint)((value.fields.w / value.fields.z) * 0.001953125)),
                     (MethodInfo *)0x0);
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar23,(UnityEngine_RenderTexture_o *)pUStack_c8,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,4,(MethodInfo *)0x0);
          pUVar25 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)pUVar23,(MethodInfo *)0x0);
          pUVar27 = (UnityStandardAssets_ImageEffects_Bloom_o *)(ulong)height;
          if (0 < (__this->fields).doHdr) break;
label_045772cc:
          iVar18 = iVar18 + 1;
          if ((int)(__this->fields).bloomThresholdColor.fields.b <= iVar18) goto label_045774c7;
        }
        if (iVar18 != 0) {
          pUVar28 = pUVar23;
          if (pUVar21 != (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) {
            UnityEngine_RenderTexture__MarkRestoreExpected
                      ((UnityEngine_RenderTexture_o *)pUVar21,(MethodInfo *)0x0);
            pUVar29 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar25 = pUVar21;
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)pUStack_c8,(UnityEngine_RenderTexture_o *)pUVar21,pUVar29,10,
                       (MethodInfo *)0x0);
            goto label_045772cc;
          }
          goto label_04577c14;
        }
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0
                  ((UnityEngine_RenderTexture_o *)pUVar21,(MethodInfo *)0x0);
        value_02.fields.z = (float)g_data_00d1ca10;
        value_02.fields.w = g_data_00d1ca10._4_4_;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = g_data_00d1ca10;
        UnityEngine_GL__Clear_4dc38b0(0,1,(UnityEngine_Color_o)(auVar10 << 0x40),(MethodInfo *)0x0);
        pUVar25 = pUVar21;
        UnityEngine_Graphics__Blit
                  ((UnityEngine_Texture_o *)pUStack_c8,(UnityEngine_RenderTexture_o *)pUVar21,
                   (MethodInfo *)0x0);
        iVar18 = 1;
      } while (1 < (int)(__this->fields).bloomThresholdColor.fields.b);
label_045774c7:
      pMVar24 = (MethodInfo *)(ulong)uVar26;
      if (0 < (__this->fields).doHdr) {
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0
                  ((UnityEngine_RenderTexture_o *)pUStack_c8,(MethodInfo *)0x0);
        value_02.fields.z = (float)g_data_00d1ca10;
        value_02.fields.w = g_data_00d1ca10._4_4_;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = g_data_00d1ca10;
        UnityEngine_GL__Clear_4dc38b0(0,1,(UnityEngine_Color_o)(auVar11 << 0x40),(MethodInfo *)0x0);
        pUVar25 = pUStack_c8;
        UnityEngine_Graphics__Blit_4dc2a60
                  ((UnityEngine_Texture_o *)pUVar21,(UnityEngine_RenderTexture_o *)pUStack_c8,
                   (UnityEngine_Material_o *)(__this->fields).screenBlendShader,6,(MethodInfo *)0x0);
      }
      value.fields.w = (float)(__this->fields).lensflareMode;
      if (**(float **)(TypeInfo_Mathf + 0xb8) <= value.fields.w &&
          value.fields.w != **(float **)(TypeInfo_Mathf + 0xb8)) {
        pUVar23 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                  UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar26,(MethodInfo *)0x0);
        if ((__this->fields).hollywoodFlareBlurIterations == 0) {
          pUVar25 = pUStack_c8;
          pUVar28 = __this;
          UnityStandardAssets_ImageEffects_Bloom__BrightFilter
                    (__this,(__this->fields).hollyStretchWidth,(UnityEngine_RenderTexture_o *)pUStack_c8,
                     (UnityEngine_RenderTexture_o *)pUVar23,pMVar24);
          value.fields.z = extraout_XMM0_Da_01;
          if (0 < (__this->fields).doHdr) {
            if (pUVar21 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) goto label_04577c14;
            pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
            pUVar25 = *(UnityStandardAssets_ImageEffects_Bloom_o **)&pUVar21->klass[1]._1.byval_arg.bits;
            pUVar28 = pUVar21;
            iVar18 = (*pUVar21->klass[1]._1.byval_arg.data)();
            if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
            UnityEngine_Material__SetVector
                      (pUVar29,(System_String_o *)"_Offsets",
                       (UnityEngine_Vector4_o)(ZEXT416((uint)(1.5 / (float)iVar18)) << 0x20),(MethodInfo *)0x0
                      );
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__SetRenderTarget_4dc2ef0
                      ((UnityEngine_RenderTexture_o *)pUVar21,(MethodInfo *)0x0);
            value_02.fields.z = (float)g_data_00d1ca10;
            value_02.fields.w = g_data_00d1ca10._4_4_;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = g_data_00d1ca10;
            UnityEngine_GL__Clear_4dc38b0(0,1,(UnityEngine_Color_o)(auVar12 << 0x40),(MethodInfo *)0x0);
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)pUVar23,(UnityEngine_RenderTexture_o *)pUVar21,
                       (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,4,(MethodInfo *)0x0);
            pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
            pUVar25 = pUVar21->klass[1]._1.gc_desc;
            pUVar28 = pUVar21;
            iVar18 = (*pUVar21->klass[1]._1.image)();
            if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
            UnityEngine_Material__SetVector
                      (pUVar29,(System_String_o *)"_Offsets",
                       (UnityEngine_Vector4_o)ZEXT416((uint)(1.5 / (float)iVar18)),(MethodInfo *)0x0);
            UnityEngine_Graphics__SetRenderTarget_4dc2ef0
                      ((UnityEngine_RenderTexture_o *)pUVar23,(MethodInfo *)0x0);
            value_02.fields.z = (float)g_data_00d1ca10;
            value_02.fields.w = g_data_00d1ca10._4_4_;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = g_data_00d1ca10;
            UnityEngine_GL__Clear_4dc38b0(0,1,(UnityEngine_Color_o)(auVar13 << 0x40),(MethodInfo *)0x0);
            pMVar24 = (MethodInfo *)&g_data_00000004;
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)pUVar21,(UnityEngine_RenderTexture_o *)pUVar23,
                       (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,4,(MethodInfo *)0x0);
            value.fields.z = extraout_XMM0_Da_02;
          }
          UnityStandardAssets_ImageEffects_Bloom__Vignette
                    (__this,value.fields.z,(UnityEngine_RenderTexture_o *)pUVar23,
                     (UnityEngine_RenderTexture_o *)pUVar23,pMVar24);
          UnityStandardAssets_ImageEffects_Bloom__BlendFlares
                    (__this,(UnityEngine_RenderTexture_o *)pUVar23,(UnityEngine_RenderTexture_o *)pUStack_c8,
                     pMVar24);
        }
        else {
          value_00.fields.x = cosf((float)(__this->fields).bloomBlurIterations);
          value.fields.w = sinf((float)(__this->fields).bloomBlurIterations);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          pUVar25 = pUVar27;
          if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          fVar31 = (__this->fields).flareRotation;
          value_00.fields.y = value.fields.w;
          value_00.fields.z = 0.0;
          value_00.fields.w = 0.0;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          pUVar25 = "_Offsets";
          UnityEngine_Material__SetVector(pUVar29,(System_String_o *)"_Offsets",value_00,(MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_01.fields.y = 1.0;
          value_01.fields.x = (__this->fields).hollyStretchWidth;
          value_01.fields.z = 0.0;
          value_01.fields.w = 0.0;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          pUVar25 = "_Threshhold";
          UnityEngine_Material__SetVector(pUVar29,(System_String_o *)"_Threshhold",value_01,(MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_02.fields.w = (__this->fields).flareColorA.fields.g;
          uVar4 = (__this->fields).lensflareThreshold;
          uVar8 = (__this->fields).lensFlareSaturation;
          fVar1 = (float)(__this->fields).lensflareMode;
          value_02.fields.x = (float)uVar4 * value_02.fields.w * fVar1;
          value_02.fields.y = (float)uVar8 * value_02.fields.w * fVar1;
          value_02.fields.z = (__this->fields).flareColorA.fields.r * value_02.fields.w * fVar1;
          value_02.fields.w = value_02.fields.w * value_02.fields.w * fVar1;
          pUVar25 = "_TintColor";
          UnityEngine_Material__SetVector(pUVar29,(System_String_o *)"_TintColor",value_02,(MethodInfo *)0x0);
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)(__this->fields).blurAndFlaresShader;
          if ((pUVar28 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) ||
             (pUVar25 = "_Saturation",
             UnityEngine_Material__SetFloat
                       ((UnityEngine_Material_o *)pUVar28,(System_String_o *)"_Saturation",
                        (__this->fields).lensflareIntensity,(MethodInfo *)0x0),
             pUVar21 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0)) goto label_04577c14;
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar21,(MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar25 = pUVar21;
          pUVar28 = pUVar23;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar23,(UnityEngine_RenderTexture_o *)pUVar21,pUVar29,2,
                     (MethodInfo *)0x0);
          if (pUVar23 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) goto label_04577c14;
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar23,(MethodInfo *)0x0);
          pUVar25 = pUVar23;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar21,(UnityEngine_RenderTexture_o *)pUVar23,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,3,(MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_02.fields.z = (fVar31 / value.fields.z) * 0.001953125;
          value_03.fields.x = value_00.fields.x * value_02.fields.z;
          value_03.fields.y = value_02.fields.z * value.fields.w;
          value_03.fields.z = 0.0;
          value_03.fields.w = 0.0;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          pUVar25 = "_Offsets";
          UnityEngine_Material__SetVector(pUVar29,(System_String_o *)"_Offsets",value_03,(MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          UnityEngine_Material__SetFloat
                    (pUVar29,"_StretchWidth",(__this->fields).flareRotation,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar21,(MethodInfo *)0x0);
          pUVar25 = pUVar21;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar23,(UnityEngine_RenderTexture_o *)pUVar21,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,1,(MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          fVar31 = (__this->fields).flareRotation;
          UnityEngine_Material__SetFloat(pUVar29,"_StretchWidth",fVar31 + fVar31,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar23,(MethodInfo *)0x0);
          pUVar25 = pUVar23;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar21,(UnityEngine_RenderTexture_o *)pUVar23,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,1,(MethodInfo *)0x0);
          pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          iVar18 = 0;
          UnityEngine_Material__SetFloat
                    (pUVar29,"_StretchWidth",(__this->fields).flareRotation * 4.0,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar21,(MethodInfo *)0x0);
          pMVar24 = (MethodInfo *)0x1;
          pUVar25 = pUVar21;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar23,(UnityEngine_RenderTexture_o *)pUVar21,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,1,(MethodInfo *)0x0);
          fVar31 = extraout_XMM0_Da;
          if (0 < (int)(__this->fields).bloomThresholdColor.fields.a) {
            do {
              pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
              pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
              if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
              value_02.fields.z = (__this->fields).flareRotation;
              value_02.fields.z = ((value_02.fields.z + value_02.fields.z) / value.fields.z) * 0.001953125;
              value_04.fields.x = value_00.fields.x * value_02.fields.z;
              value_02.fields.z = value_02.fields.z * value.fields.w;
              value_05.fields.y = value_02.fields.z;
              value_05.fields.x = value_04.fields.x;
              value_04.fields.y = value_02.fields.z;
              value_04.fields.z = 0.0;
              value_04.fields.w = 0.0;
              value_02.fields.z = 0.0;
              value_02.fields.w = 0.0;
              UnityEngine_Material__SetVector
                        (pUVar29,(System_String_o *)"_Offsets",value_04,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__DiscardContents_4ddf360
                        ((UnityEngine_RenderTexture_o *)pUVar23,(MethodInfo *)0x0);
              pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pUVar25 = pUVar23;
              UnityEngine_Graphics__Blit_4dc2a60
                        ((UnityEngine_Texture_o *)pUVar21,(UnityEngine_RenderTexture_o *)pUVar23,pUVar29,4,
                         (MethodInfo *)0x0);
              pUVar29 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
              pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
              if (pUVar29 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
              value_05.fields.z = 0.0;
              value_05.fields.w = 0.0;
              value_02.fields.z = 0.0;
              value_02.fields.w = 0.0;
              UnityEngine_Material__SetVector
                        (pUVar29,(System_String_o *)"_Offsets",value_05,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__DiscardContents_4ddf360
                        ((UnityEngine_RenderTexture_o *)pUVar21,(MethodInfo *)0x0);
              pMVar24 = (MethodInfo *)&g_data_00000004;
              pUVar25 = pUVar21;
              UnityEngine_Graphics__Blit_4dc2a60
                        ((UnityEngine_Texture_o *)pUVar23,(UnityEngine_RenderTexture_o *)pUVar21,
                         (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,4,(MethodInfo *)0x0);
              iVar18 = iVar18 + 1;
              fVar31 = extraout_XMM0_Da_00;
            } while (iVar18 < (int)(__this->fields).bloomThresholdColor.fields.a);
          }
          if ((__this->fields).hollywoodFlareBlurIterations != 1) {
            UnityStandardAssets_ImageEffects_Bloom__Vignette
                      (__this,fVar31,(UnityEngine_RenderTexture_o *)pUVar21,
                       (UnityEngine_RenderTexture_o *)pUVar23,pMVar24);
            UnityStandardAssets_ImageEffects_Bloom__BlendFlares
                      (__this,(UnityEngine_RenderTexture_o *)pUVar23,(UnityEngine_RenderTexture_o *)pUVar21,
                       pMVar24);
          }
          UnityStandardAssets_ImageEffects_Bloom__AddTo
                    (__this,1.0,(UnityEngine_RenderTexture_o *)pUVar21,
                     (UnityEngine_RenderTexture_o *)pUStack_c8,pMVar24);
        }
        pUVar25 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
        UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar23,(MethodInfo *)0x0);
      }
      pUVar29 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
      pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
      if (pUVar29 != (UnityEngine_Material_o *)0x0) {
        pUVar25 = "_Intensity";
        UnityEngine_Material__SetFloat
                  (pUVar29,(System_String_o *)"_Intensity",(__this->fields).sepBlurSpread,(MethodInfo *)0x0);
        pUVar29 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
        pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
        if (pUVar29 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetTexture
                    (pUVar29,"_ColorBuffer",(UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
          if ((__this->fields).doHdr < 1) {
            pUVar29 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)pUStack_c8,destination,pUVar29,iVar15,(MethodInfo *)0x0);
          }
          else {
            pUVar22 = (UnityEngine_Texture_o *)
                      UnityEngine_RenderTexture__GetTemporary_4de1d50
                                (iVar16 / 2,iVar17 / 2,0,uVar26,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit
                      ((UnityEngine_Texture_o *)pUStack_c8,(UnityEngine_RenderTexture_o *)pUVar22,
                       (MethodInfo *)0x0);
            UnityEngine_Graphics__Blit_4dc2a60
                      (pUVar22,destination,(UnityEngine_Material_o *)(__this->fields).screenBlendShader,iVar15
                       ,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)pUVar22,(MethodInfo *)0x0);
          }
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)pUVar21,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)pUStack_c8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_04577c14:
  uVar9 = il2cpp_runtime_helper_022b2c90();
  pUVar21 = pUVar25;
  if (g_data_057af0a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Threshhold");
    g_data_057af0a5 = '\x01';
  }
  pUVar29 = (UnityEngine_Material_o *)(pUVar28->fields).brightPassFilterShader;
  if (pUVar29 != (UnityEngine_Material_o *)0x0) {
    value_06.fields.w = value_02.fields.w;
    value_06.fields.z = value_02.fields.z;
    value_06.fields.x = (float)(int)uVar9;
    value_06.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
    UnityEngine_Material__SetVector(pUVar29,(System_String_o *)"_Threshhold",value_06,(MethodInfo *)0x0);
    pUVar29 = (UnityEngine_Material_o *)(pUVar28->fields).brightPassFilterShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)pUVar25,dest,pUVar29,1,(MethodInfo *)0x0);
    return;
  }
  value_07.fields.x = il2cpp_runtime_helper_022b2c90();
  pUVar28 = pUVar21;
  if (g_data_057af0a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Threshhold");
    g_data_057af0a4 = '\x01';
  }
  pUVar30 = (UnityEngine_Material_o *)pUVar29[10].fields.m_CachedPtr;
  if (pUVar30 != (UnityEngine_Material_o *)0x0) {
    value_07.fields.y = (float)value_07.fields.x;
    value_07.fields.w = (float)value_07.fields.x;
    value_07.fields.z = (float)value_07.fields.x;
    UnityEngine_Material__SetVector(pUVar30,(System_String_o *)"_Threshhold",value_07,(MethodInfo *)0x0);
    pUVar29 = (UnityEngine_Material_o *)pUVar29[10].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)pUVar21,dest_00,pUVar29,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    g_data_057af0a6 = '\x01';
  }
  exists = pUVar30[8].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source_01 = (System_String_o *)0x0;
  bVar20 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar20 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar20 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
    if ((char)bVar20 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__SetRenderTarget_4dc2ef0(rt,(MethodInfo *)0x0);
    UnityEngine_GL__Clear_4dc38b0
              (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)pUVar28,rt,(MethodInfo *)0x0);
    return;
  }
  pUVar29 = pUVar30[9].monitor;
  if ((pUVar29 != (UnityEngine_Material_o *)0x0) &&
     (source_01 = "_ColorBuffer",
     UnityEngine_Material__SetTexture
               (pUVar29,"_ColorBuffer",(UnityEngine_Texture_o *)pUVar30[8].klass,(MethodInfo *)0x0),
     rt != (UnityEngine_RenderTexture_o *)0x0)) {
    UnityEngine_RenderTexture__MarkRestoreExpected(rt,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar20 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
    pUVar25 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
    if ((char)bVar20 == '\0') {
      pUVar25 = pUVar28;
    }
    pUVar29 = pUVar30[9].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar26 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60
              ((UnityEngine_Texture_o *)pUVar25,rt,pUVar29,(uVar26 & 0xff) * 4 + 3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  source_02 = source_01;
  if (g_data_057af0a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"colorD");
    il2cpp_runtime_helper_023445d0(&"colorB");
    il2cpp_runtime_helper_023445d0(&"colorA");
    il2cpp_runtime_helper_023445d0(&"colorC");
    g_data_057af0a3 = '\x01';
  }
  pUVar30 = (UnityEngine_Material_o *)pUVar29[8].fields.m_CachedPtr;
  __this_03 = (UnityEngine_Material_o *)0x0;
  if (pUVar30 != (UnityEngine_Material_o *)0x0) {
    value_02.fields.z = *(float *)((long)&pUVar29[4].fields.m_CachedPtr + 4);
    value_08.fields.x = SUB84(pUVar29[5].monitor,0) * value_02.fields.z;
    value_08.fields.y = (float)((ulong)pUVar29[5].monitor >> 0x20) * value_02.fields.z;
    iVar5 = pUVar29[5].fields.m_CachedPtr;
    value_08.fields.z = (float)iVar5 * value_02.fields.z;
    value_08.fields.w = (float)((ulong)iVar5 >> 0x20) * value_02.fields.z;
    source_02 = "colorA";
    UnityEngine_Material__SetVector(pUVar30,"colorA",value_08,(MethodInfo *)0x0);
    pUVar30 = (UnityEngine_Material_o *)pUVar29[8].fields.m_CachedPtr;
    __this_03 = (UnityEngine_Material_o *)0x0;
    if (pUVar30 != (UnityEngine_Material_o *)0x0) {
      value_02.fields.z = *(float *)((long)&pUVar29[4].fields.m_CachedPtr + 4);
      value_09.fields.x = SUB84(pUVar29[6].klass,0) * value_02.fields.z;
      value_09.fields.y = (float)((ulong)pUVar29[6].klass >> 0x20) * value_02.fields.z;
      value_09.fields.z = SUB84(pUVar29[6].monitor,0) * value_02.fields.z;
      value_09.fields.w = (float)((ulong)pUVar29[6].monitor >> 0x20) * value_02.fields.z;
      source_02 = "colorB";
      UnityEngine_Material__SetVector(pUVar30,"colorB",value_09,(MethodInfo *)0x0);
      pUVar30 = (UnityEngine_Material_o *)pUVar29[8].fields.m_CachedPtr;
      __this_03 = (UnityEngine_Material_o *)0x0;
      if (pUVar30 != (UnityEngine_Material_o *)0x0) {
        iVar5 = pUVar29[6].fields.m_CachedPtr;
        value_02.fields.z = *(float *)((long)&pUVar29[4].fields.m_CachedPtr + 4);
        value_10.fields.x = (float)iVar5 * value_02.fields.z;
        value_10.fields.y = (float)((ulong)iVar5 >> 0x20) * value_02.fields.z;
        value_10.fields.z = SUB84(pUVar29[7].klass,0) * value_02.fields.z;
        value_10.fields.w = (float)((ulong)pUVar29[7].klass >> 0x20) * value_02.fields.z;
        source_02 = "colorC";
        UnityEngine_Material__SetVector(pUVar30,"colorC",value_10,(MethodInfo *)0x0);
        __this_03 = (UnityEngine_Material_o *)pUVar29[8].fields.m_CachedPtr;
        if (__this_03 != (UnityEngine_Material_o *)0x0) {
          value_02.fields.z = *(float *)((long)&pUVar29[4].fields.m_CachedPtr + 4);
          value_11.fields.x = SUB84(pUVar29[7].monitor,0) * value_02.fields.z;
          value_11.fields.y = (float)((ulong)pUVar29[7].monitor >> 0x20) * value_02.fields.z;
          iVar5 = pUVar29[7].fields.m_CachedPtr;
          value_11.fields.z = (float)iVar5 * value_02.fields.z;
          value_11.fields.w = (float)((ulong)iVar5 >> 0x20) * value_02.fields.z;
          source_02 = "colorD";
          UnityEngine_Material__SetVector(__this_03,"colorD",value_11,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__MarkRestoreExpected(__this_01,(MethodInfo *)0x0);
            pUVar29 = (UnityEngine_Material_o *)pUVar29[8].fields.m_CachedPtr;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0
                      ((UnityEngine_Texture_o *)source_01,__this_01,pUVar29,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  value_02.fields.z = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    g_data_057af0a2 = '\x01';
  }
  __this_04 = __this_03[9].monitor;
  if ((__this_04 != (UnityEngine_MonoBehaviour_o *)0x0) &&
     (UnityEngine_Material__SetFloat
                ((UnityEngine_Material_o *)__this_04,(System_String_o *)"_Intensity",value_02.fields.z,
                 (MethodInfo *)0x0), __this_02 != (UnityEngine_RenderTexture_o *)0x0)) {
    UnityEngine_RenderTexture__MarkRestoreExpected(__this_02,(MethodInfo *)0x0);
    pUVar29 = __this_03[9].monitor;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60
              ((UnityEngine_Texture_o *)source_02,__this_02,pUVar29,9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)&__this_04[1].fields.m_CachedPtr + 4) = 1;
  __this_04[2].klass = (UnityEngine_MonoBehaviour_c *)0x140200000;
  __this_04[2].monitor = (void *)0x3f0000003f000000;
  *(undefined4 *)&__this_04[2].fields.m_CachedPtr = 0x3f800000;
  *(undefined4 *)((long)&__this_04[2].fields.m_CachedPtr + 4) = 0x3f800000;
  *(undefined4 *)&__this_04[2].fields.m_CancellationTokenSource = 0x3f800000;
  *(undefined4 *)((long)&__this_04[2].fields.m_CancellationTokenSource + 4) = 0x3f800000;
  __this_04[3].klass = (UnityEngine_MonoBehaviour_c *)0x200000002;
  *(undefined8 *)((long)&__this_04[3].monitor + 4) = 0x4020000000000001;
  __this_04[3].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3f4000003e99999a;
  __this_04[4].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd3ecccccd;
  __this_04[4].monitor = (void *)0x3f4000003f4ccccd;
  *(undefined4 *)&__this_04[4].fields.m_CachedPtr = 0x3ecccccd;
  *(undefined8 *)((long)&__this_04[4].fields.m_CachedPtr + 4) = 0x3f4ccccd3f4ccccd;
  *(undefined8 *)((long)&__this_04[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd3f400000;
  *(undefined4 *)((long)&__this_04[5].klass + 4) = 0x3ecccccd;
  *(undefined4 *)&__this_04[5].monitor = 0x3f4ccccd;
  *(undefined4 *)((long)&__this_04[5].monitor + 4) = 0x3f400000;
  *(undefined4 *)&__this_04[5].fields.m_CachedPtr = 0x3f4ccccd;
  *(undefined8 *)((long)&__this_04[5].fields.m_CachedPtr + 4) = 0x3ecccccd;
  *(undefined4 *)((long)&__this_04[5].fields.m_CancellationTokenSource + 4) = 0x3f400000;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&__this_04[1].klass = 1;
  *(undefined1 *)((long)&__this_04[1].klass + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  __this_04[1].monitor = __this_00;
  il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Bloom$$AddTo
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__AddTo (UnityStandardAssets_ImageEffects_Bloom_o* __this, float intensity_, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4578100

void UnityStandardAssets_ImageEffects_Bloom__AddTo
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,float intensity_,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Material_o *mat;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057af0a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    g_data_057af0a2 = '\x01';
  }
  __this_01 = (UnityEngine_MonoBehaviour_o *)(__this->fields).screenBlendShader;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)__this_01,"_Intensity",intensity_,(MethodInfo *)0x0);
    if (to != (UnityEngine_RenderTexture_o *)0x0) {
      UnityEngine_RenderTexture__MarkRestoreExpected(to,(MethodInfo *)0x0);
      mat = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)from,to,mat,9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)&__this_01[1].fields.m_CachedPtr + 4) = 1;
  __this_01[2].klass = (UnityEngine_MonoBehaviour_c *)0x140200000;
  __this_01[2].monitor = (void *)0x3f0000003f000000;
  *(undefined4 *)&__this_01[2].fields.m_CachedPtr = 0x3f800000;
  *(undefined4 *)((long)&__this_01[2].fields.m_CachedPtr + 4) = 0x3f800000;
  *(undefined4 *)&__this_01[2].fields.m_CancellationTokenSource = 0x3f800000;
  *(undefined4 *)((long)&__this_01[2].fields.m_CancellationTokenSource + 4) = 0x3f800000;
  __this_01[3].klass = (UnityEngine_MonoBehaviour_c *)0x200000002;
  *(undefined8 *)((long)&__this_01[3].monitor + 4) = 0x4020000000000001;
  __this_01[3].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3f4000003e99999a;
  __this_01[4].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd3ecccccd;
  __this_01[4].monitor = (void *)0x3f4000003f4ccccd;
  *(undefined4 *)&__this_01[4].fields.m_CachedPtr = 0x3ecccccd;
  *(undefined8 *)((long)&__this_01[4].fields.m_CachedPtr + 4) = 0x3f4ccccd3f4ccccd;
  *(undefined8 *)((long)&__this_01[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd3f400000;
  *(undefined4 *)((long)&__this_01[5].klass + 4) = 0x3ecccccd;
  *(undefined4 *)&__this_01[5].monitor = 0x3f4ccccd;
  *(undefined4 *)((long)&__this_01[5].monitor + 4) = 0x3f400000;
  *(undefined4 *)&__this_01[5].fields.m_CachedPtr = 0x3f4ccccd;
  *(undefined8 *)((long)&__this_01[5].fields.m_CachedPtr + 4) = 0x3ecccccd;
  *(undefined4 *)((long)&__this_01[5].fields.m_CancellationTokenSource + 4) = 0x3f400000;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&__this_01[1].klass = 1;
  *(undefined1 *)((long)&__this_01[1].klass + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  __this_01[1].monitor = __this_00;
  il2cpp_runtime_helper_022b4080(&__this_01[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Bloom$$BlendFlares
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__BlendFlares (UnityStandardAssets_ImageEffects_Bloom_o* __this, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4577f60

void UnityStandardAssets_ImageEffects_Bloom__BlendFlares
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,UnityEngine_RenderTexture_o *from,
               UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  UnityEngine_Material_o *pUVar17;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RenderTexture_o *__this_01;
  System_String_o *source;
  UnityEngine_Material_o *__this_02;
  UnityEngine_MonoBehaviour_o *__this_03;
  float fVar18;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  
  source = (System_String_o *)from;
  if (g_data_057af0a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"colorD");
    il2cpp_runtime_helper_023445d0(&"colorB");
    il2cpp_runtime_helper_023445d0(&"colorA");
    il2cpp_runtime_helper_023445d0(&"colorC");
    g_data_057af0a3 = '\x01';
  }
  pUVar17 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
  __this_02 = (UnityEngine_Material_o *)0x0;
  if (pUVar17 != (UnityEngine_Material_o *)0x0) {
    uVar1 = (__this->fields).lensflareThreshold;
    uVar9 = (__this->fields).lensFlareSaturation;
    fVar18 = (float)(__this->fields).lensflareMode;
    value.fields.x = (float)uVar1 * fVar18;
    value.fields.y = (float)uVar9 * fVar18;
    uVar2 = (__this->fields).flareColorA.fields.r;
    uVar10 = (__this->fields).flareColorA.fields.g;
    value.fields.z = (float)uVar2 * fVar18;
    value.fields.w = (float)uVar10 * fVar18;
    source = "colorA";
    UnityEngine_Material__SetVector(pUVar17,"colorA",value,(MethodInfo *)0x0);
    pUVar17 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
    __this_02 = (UnityEngine_Material_o *)0x0;
    if (pUVar17 != (UnityEngine_Material_o *)0x0) {
      uVar3 = (__this->fields).flareColorA.fields.b;
      uVar11 = (__this->fields).flareColorA.fields.a;
      fVar18 = (float)(__this->fields).lensflareMode;
      value_00.fields.x = (float)uVar3 * fVar18;
      value_00.fields.y = (float)uVar11 * fVar18;
      uVar4 = (__this->fields).flareColorB.fields.r;
      uVar12 = (__this->fields).flareColorB.fields.g;
      value_00.fields.z = (float)uVar4 * fVar18;
      value_00.fields.w = (float)uVar12 * fVar18;
      source = "colorB";
      UnityEngine_Material__SetVector(pUVar17,"colorB",value_00,(MethodInfo *)0x0);
      pUVar17 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
      __this_02 = (UnityEngine_Material_o *)0x0;
      if (pUVar17 != (UnityEngine_Material_o *)0x0) {
        uVar5 = (__this->fields).flareColorB.fields.b;
        uVar13 = (__this->fields).flareColorB.fields.a;
        fVar18 = (float)(__this->fields).lensflareMode;
        value_01.fields.x = (float)uVar5 * fVar18;
        value_01.fields.y = (float)uVar13 * fVar18;
        uVar6 = (__this->fields).flareColorC.fields.r;
        uVar14 = (__this->fields).flareColorC.fields.g;
        value_01.fields.z = (float)uVar6 * fVar18;
        value_01.fields.w = (float)uVar14 * fVar18;
        source = "colorC";
        UnityEngine_Material__SetVector(pUVar17,"colorC",value_01,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
        if (__this_02 != (UnityEngine_Material_o *)0x0) {
          uVar7 = (__this->fields).flareColorC.fields.b;
          uVar15 = (__this->fields).flareColorC.fields.a;
          fVar18 = (float)(__this->fields).lensflareMode;
          value_02.fields.x = (float)uVar7 * fVar18;
          value_02.fields.y = (float)uVar15 * fVar18;
          uVar8 = (__this->fields).flareColorD.fields.r;
          uVar16 = (__this->fields).flareColorD.fields.g;
          value_02.fields.z = (float)uVar8 * fVar18;
          value_02.fields.w = (float)uVar16 * fVar18;
          source = "colorD";
          UnityEngine_Material__SetVector(__this_02,"colorD",value_02,(MethodInfo *)0x0);
          if (to != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__MarkRestoreExpected(to,(MethodInfo *)0x0);
            pUVar17 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)from,to,pUVar17,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    g_data_057af0a2 = '\x01';
  }
  __this_03 = __this_02[9].monitor;
  if (__this_03 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)__this_03,"_Intensity",fVar18,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_RenderTexture_o *)0x0) {
      UnityEngine_RenderTexture__MarkRestoreExpected(__this_01,(MethodInfo *)0x0);
      pUVar17 = __this_02[9].monitor;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2a60
                ((UnityEngine_Texture_o *)source,__this_01,pUVar17,9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)&__this_03[1].fields.m_CachedPtr + 4) = 1;
  __this_03[2].klass = (UnityEngine_MonoBehaviour_c *)0x140200000;
  __this_03[2].monitor = (void *)0x3f0000003f000000;
  *(undefined4 *)&__this_03[2].fields.m_CachedPtr = 0x3f800000;
  *(undefined4 *)((long)&__this_03[2].fields.m_CachedPtr + 4) = 0x3f800000;
  *(undefined4 *)&__this_03[2].fields.m_CancellationTokenSource = 0x3f800000;
  *(undefined4 *)((long)&__this_03[2].fields.m_CancellationTokenSource + 4) = 0x3f800000;
  __this_03[3].klass = (UnityEngine_MonoBehaviour_c *)0x200000002;
  *(undefined8 *)((long)&__this_03[3].monitor + 4) = 0x4020000000000001;
  __this_03[3].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3f4000003e99999a;
  __this_03[4].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd3ecccccd;
  __this_03[4].monitor = (void *)0x3f4000003f4ccccd;
  *(undefined4 *)&__this_03[4].fields.m_CachedPtr = 0x3ecccccd;
  *(undefined8 *)((long)&__this_03[4].fields.m_CachedPtr + 4) = 0x3f4ccccd3f4ccccd;
  *(undefined8 *)((long)&__this_03[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd3f400000;
  *(undefined4 *)((long)&__this_03[5].klass + 4) = 0x3ecccccd;
  *(undefined4 *)&__this_03[5].monitor = 0x3f4ccccd;
  *(undefined4 *)((long)&__this_03[5].monitor + 4) = 0x3f400000;
  *(undefined4 *)&__this_03[5].fields.m_CachedPtr = 0x3f4ccccd;
  *(undefined8 *)((long)&__this_03[5].fields.m_CachedPtr + 4) = 0x3ecccccd;
  *(undefined4 *)((long)&__this_03[5].fields.m_CancellationTokenSource + 4) = 0x3f400000;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&__this_03[1].klass = 1;
  *(undefined1 *)((long)&__this_03[1].klass + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  __this_03[1].monitor = __this_00;
  il2cpp_runtime_helper_022b4080(&__this_03[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Bloom$$BrightFilter
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__BrightFilter (UnityStandardAssets_ImageEffects_Bloom_o* __this, float thresh, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4577cd0

void UnityStandardAssets_ImageEffects_Bloom__BrightFilter
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,float thresh,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  intptr_t iVar1;
  UnityEngine_Material_c *exists;
  bool_conflict bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RenderTexture_o *rt;
  UnityEngine_RenderTexture_o *__this_01;
  UnityEngine_RenderTexture_o *__this_02;
  UnityEngine_Texture_o *source;
  System_String_o *source_00;
  System_String_o *source_01;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Material_o *__this_03;
  UnityEngine_Material_o *__this_04;
  UnityEngine_MonoBehaviour_o *__this_05;
  UnityEngine_Texture_o *source_02;
  float fVar5;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  
  source = (UnityEngine_Texture_o *)from;
  if (g_data_057af0a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Threshhold");
    g_data_057af0a4 = '\x01';
  }
  pUVar4 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    value.fields.w = thresh;
    value.fields.z = thresh;
    value.fields.y = thresh;
    value.fields.x = thresh;
    UnityEngine_Material__SetVector(pUVar4,"_Threshhold",value,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)from,to,pUVar4,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    g_data_057af0a6 = '\x01';
  }
  exists = pUVar4[8].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source_00 = (System_String_o *)0x0;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_03 = pUVar4[9].monitor;
    if (__this_03 != (UnityEngine_Material_o *)0x0) {
      source_00 = "_ColorBuffer";
      UnityEngine_Material__SetTexture
                (__this_03,"_ColorBuffer",(UnityEngine_Texture_o *)pUVar4[8].klass,(MethodInfo *)0x0);
      if (rt != (UnityEngine_RenderTexture_o *)0x0) {
        UnityEngine_RenderTexture__MarkRestoreExpected(rt,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
        source_02 = (UnityEngine_Texture_o *)0x0;
        if ((char)bVar2 == '\0') {
          source_02 = source;
        }
        pUVar4 = pUVar4[9].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2a60(source_02,rt,pUVar4,(uVar3 & 0xff) * 4 + 3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    source_01 = source_00;
    if (g_data_057af0a3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
      il2cpp_runtime_helper_023445d0(&"colorD");
      il2cpp_runtime_helper_023445d0(&"colorB");
      il2cpp_runtime_helper_023445d0(&"colorA");
      il2cpp_runtime_helper_023445d0(&"colorC");
      g_data_057af0a3 = '\x01';
    }
    pUVar4 = (UnityEngine_Material_o *)__this_03[8].fields.m_CachedPtr;
    __this_04 = (UnityEngine_Material_o *)0x0;
    if (pUVar4 != (UnityEngine_Material_o *)0x0) {
      fVar5 = *(float *)((long)&__this_03[4].fields.m_CachedPtr + 4);
      value_00.fields.x = SUB84(__this_03[5].monitor,0) * fVar5;
      value_00.fields.y = (float)((ulong)__this_03[5].monitor >> 0x20) * fVar5;
      iVar1 = __this_03[5].fields.m_CachedPtr;
      value_00.fields.z = (float)iVar1 * fVar5;
      value_00.fields.w = (float)((ulong)iVar1 >> 0x20) * fVar5;
      source_01 = "colorA";
      UnityEngine_Material__SetVector(pUVar4,"colorA",value_00,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Material_o *)__this_03[8].fields.m_CachedPtr;
      __this_04 = (UnityEngine_Material_o *)0x0;
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        fVar5 = *(float *)((long)&__this_03[4].fields.m_CachedPtr + 4);
        value_01.fields.x = SUB84(__this_03[6].klass,0) * fVar5;
        value_01.fields.y = (float)((ulong)__this_03[6].klass >> 0x20) * fVar5;
        value_01.fields.z = SUB84(__this_03[6].monitor,0) * fVar5;
        value_01.fields.w = (float)((ulong)__this_03[6].monitor >> 0x20) * fVar5;
        source_01 = "colorB";
        UnityEngine_Material__SetVector(pUVar4,"colorB",value_01,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Material_o *)__this_03[8].fields.m_CachedPtr;
        __this_04 = (UnityEngine_Material_o *)0x0;
        if (pUVar4 != (UnityEngine_Material_o *)0x0) {
          iVar1 = __this_03[6].fields.m_CachedPtr;
          fVar5 = *(float *)((long)&__this_03[4].fields.m_CachedPtr + 4);
          value_02.fields.x = (float)iVar1 * fVar5;
          value_02.fields.y = (float)((ulong)iVar1 >> 0x20) * fVar5;
          value_02.fields.z = SUB84(__this_03[7].klass,0) * fVar5;
          value_02.fields.w = (float)((ulong)__this_03[7].klass >> 0x20) * fVar5;
          source_01 = "colorC";
          UnityEngine_Material__SetVector(pUVar4,"colorC",value_02,(MethodInfo *)0x0);
          __this_04 = (UnityEngine_Material_o *)__this_03[8].fields.m_CachedPtr;
          if (__this_04 != (UnityEngine_Material_o *)0x0) {
            fVar5 = *(float *)((long)&__this_03[4].fields.m_CachedPtr + 4);
            value_03.fields.x = SUB84(__this_03[7].monitor,0) * fVar5;
            value_03.fields.y = (float)((ulong)__this_03[7].monitor >> 0x20) * fVar5;
            iVar1 = __this_03[7].fields.m_CachedPtr;
            value_03.fields.z = (float)iVar1 * fVar5;
            value_03.fields.w = (float)((ulong)iVar1 >> 0x20) * fVar5;
            source_01 = "colorD";
            UnityEngine_Material__SetVector(__this_04,"colorD",value_03,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_RenderTexture_o *)0x0) {
              UnityEngine_RenderTexture__MarkRestoreExpected(__this_01,(MethodInfo *)0x0);
              pUVar4 = (UnityEngine_Material_o *)__this_03[8].fields.m_CachedPtr;
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Graphics__Blit_4dc2ad0
                        ((UnityEngine_Texture_o *)source_00,__this_01,pUVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    fVar5 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057af0a2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
      il2cpp_runtime_helper_023445d0(&"_Intensity");
      g_data_057af0a2 = '\x01';
    }
    __this_05 = __this_04[9].monitor;
    if (__this_05 != (UnityEngine_MonoBehaviour_o *)0x0) {
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)__this_05,"_Intensity",fVar5,(MethodInfo *)0x0)
      ;
      if (__this_02 != (UnityEngine_RenderTexture_o *)0x0) {
        UnityEngine_RenderTexture__MarkRestoreExpected(__this_02,(MethodInfo *)0x0);
        pUVar4 = __this_04[9].monitor;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2a60
                  ((UnityEngine_Texture_o *)source_01,__this_02,pUVar4,9,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)((long)&__this_05[1].fields.m_CachedPtr + 4) = 1;
    __this_05[2].klass = (UnityEngine_MonoBehaviour_c *)0x140200000;
    __this_05[2].monitor = (void *)0x3f0000003f000000;
    *(undefined4 *)&__this_05[2].fields.m_CachedPtr = 0x3f800000;
    *(undefined4 *)((long)&__this_05[2].fields.m_CachedPtr + 4) = 0x3f800000;
    *(undefined4 *)&__this_05[2].fields.m_CancellationTokenSource = 0x3f800000;
    *(undefined4 *)((long)&__this_05[2].fields.m_CancellationTokenSource + 4) = 0x3f800000;
    __this_05[3].klass = (UnityEngine_MonoBehaviour_c *)0x200000002;
    *(undefined8 *)((long)&__this_05[3].monitor + 4) = 0x4020000000000001;
    __this_05[3].fields.m_CancellationTokenSource =
         (System_Threading_CancellationTokenSource_o *)0x3f4000003e99999a;
    __this_05[4].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd3ecccccd;
    __this_05[4].monitor = (void *)0x3f4000003f4ccccd;
    *(undefined4 *)&__this_05[4].fields.m_CachedPtr = 0x3ecccccd;
    *(undefined8 *)((long)&__this_05[4].fields.m_CachedPtr + 4) = 0x3f4ccccd3f4ccccd;
    *(undefined8 *)((long)&__this_05[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd3f400000;
    *(undefined4 *)((long)&__this_05[5].klass + 4) = 0x3ecccccd;
    *(undefined4 *)&__this_05[5].monitor = 0x3f4ccccd;
    *(undefined4 *)((long)&__this_05[5].monitor + 4) = 0x3f400000;
    *(undefined4 *)&__this_05[5].fields.m_CachedPtr = 0x3f4ccccd;
    *(undefined8 *)((long)&__this_05[5].fields.m_CachedPtr + 4) = 0x3ecccccd;
    *(undefined4 *)((long)&__this_05[5].fields.m_CancellationTokenSource + 4) = 0x3f400000;
    if (g_data_057af0ed == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      g_data_057af0ed = '\x01';
    }
    *(undefined1 *)&__this_05[1].klass = 1;
    *(undefined1 *)((long)&__this_05[1].klass + 2) = 1;
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
    __this_05[1].monitor = __this_00;
    il2cpp_runtime_helper_022b4080(&__this_05[1].monitor);
    UnityEngine_MonoBehaviour___ctor(__this_05,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__SetRenderTarget_4dc2ef0(rt,(MethodInfo *)0x0);
    UnityEngine_GL__Clear_4dc38b0
              (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
    UnityEngine_Graphics__Blit(source,rt,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.Bloom$$BrightFilter
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__BrightFilter (UnityStandardAssets_ImageEffects_Bloom_o* __this, UnityEngine_Color_o threshColor, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4577c20

void UnityStandardAssets_ImageEffects_Bloom__BrightFilter_4477c20
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,UnityEngine_Color_o threshColor,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  intptr_t iVar1;
  UnityEngine_Material_c *exists;
  bool_conflict bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_RenderTexture_o *rt;
  UnityEngine_RenderTexture_o *__this_01;
  UnityEngine_RenderTexture_o *__this_02;
  UnityEngine_Texture_o *pUVar4;
  UnityEngine_Texture_o *source;
  System_String_o *source_00;
  System_String_o *source_01;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Material_o *pUVar6;
  UnityEngine_Material_o *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  float fVar7;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  
  pUVar4 = (UnityEngine_Texture_o *)from;
  if (g_data_057af0a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Threshhold");
    g_data_057af0a5 = '\x01';
  }
  pUVar5 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
  if (pUVar5 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetVector
              (pUVar5,"_Threshhold",(UnityEngine_Vector4_o)threshColor.fields,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)from,to,pUVar5,1,(MethodInfo *)0x0);
    return;
  }
  value.fields.x = il2cpp_runtime_helper_022b2c90();
  source = pUVar4;
  if (g_data_057af0a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Threshhold");
    g_data_057af0a4 = '\x01';
  }
  pUVar6 = (UnityEngine_Material_o *)pUVar5[10].fields.m_CachedPtr;
  if (pUVar6 != (UnityEngine_Material_o *)0x0) {
    value.fields.y = (float)value.fields.x;
    value.fields.w = (float)value.fields.x;
    value.fields.z = (float)value.fields.x;
    UnityEngine_Material__SetVector(pUVar6,"_Threshhold",value,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Material_o *)pUVar5[10].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60(pUVar4,dest,pUVar5,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    g_data_057af0a6 = '\x01';
  }
  exists = pUVar6[8].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source_00 = (System_String_o *)0x0;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar5 = pUVar6[9].monitor;
    if (pUVar5 != (UnityEngine_Material_o *)0x0) {
      source_00 = "_ColorBuffer";
      UnityEngine_Material__SetTexture
                (pUVar5,"_ColorBuffer",(UnityEngine_Texture_o *)pUVar6[8].klass,(MethodInfo *)0x0);
      if (rt != (UnityEngine_RenderTexture_o *)0x0) {
        UnityEngine_RenderTexture__MarkRestoreExpected(rt,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Texture_o *)0x0;
        if ((char)bVar2 == '\0') {
          pUVar4 = source;
        }
        pUVar5 = pUVar6[9].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2a60(pUVar4,rt,pUVar5,(uVar3 & 0xff) * 4 + 3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    source_01 = source_00;
    if (g_data_057af0a3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
      il2cpp_runtime_helper_023445d0(&"colorD");
      il2cpp_runtime_helper_023445d0(&"colorB");
      il2cpp_runtime_helper_023445d0(&"colorA");
      il2cpp_runtime_helper_023445d0(&"colorC");
      g_data_057af0a3 = '\x01';
    }
    pUVar6 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
    __this_03 = (UnityEngine_Material_o *)0x0;
    if (pUVar6 != (UnityEngine_Material_o *)0x0) {
      fVar7 = *(float *)((long)&pUVar5[4].fields.m_CachedPtr + 4);
      value_00.fields.x = SUB84(pUVar5[5].monitor,0) * fVar7;
      value_00.fields.y = (float)((ulong)pUVar5[5].monitor >> 0x20) * fVar7;
      iVar1 = pUVar5[5].fields.m_CachedPtr;
      value_00.fields.z = (float)iVar1 * fVar7;
      value_00.fields.w = (float)((ulong)iVar1 >> 0x20) * fVar7;
      source_01 = "colorA";
      UnityEngine_Material__SetVector(pUVar6,"colorA",value_00,(MethodInfo *)0x0);
      pUVar6 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
      __this_03 = (UnityEngine_Material_o *)0x0;
      if (pUVar6 != (UnityEngine_Material_o *)0x0) {
        fVar7 = *(float *)((long)&pUVar5[4].fields.m_CachedPtr + 4);
        value_01.fields.x = SUB84(pUVar5[6].klass,0) * fVar7;
        value_01.fields.y = (float)((ulong)pUVar5[6].klass >> 0x20) * fVar7;
        value_01.fields.z = SUB84(pUVar5[6].monitor,0) * fVar7;
        value_01.fields.w = (float)((ulong)pUVar5[6].monitor >> 0x20) * fVar7;
        source_01 = "colorB";
        UnityEngine_Material__SetVector(pUVar6,"colorB",value_01,(MethodInfo *)0x0);
        pUVar6 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
        __this_03 = (UnityEngine_Material_o *)0x0;
        if (pUVar6 != (UnityEngine_Material_o *)0x0) {
          iVar1 = pUVar5[6].fields.m_CachedPtr;
          fVar7 = *(float *)((long)&pUVar5[4].fields.m_CachedPtr + 4);
          value_02.fields.x = (float)iVar1 * fVar7;
          value_02.fields.y = (float)((ulong)iVar1 >> 0x20) * fVar7;
          value_02.fields.z = SUB84(pUVar5[7].klass,0) * fVar7;
          value_02.fields.w = (float)((ulong)pUVar5[7].klass >> 0x20) * fVar7;
          source_01 = "colorC";
          UnityEngine_Material__SetVector(pUVar6,"colorC",value_02,(MethodInfo *)0x0);
          __this_03 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
          if (__this_03 != (UnityEngine_Material_o *)0x0) {
            fVar7 = *(float *)((long)&pUVar5[4].fields.m_CachedPtr + 4);
            value_03.fields.x = SUB84(pUVar5[7].monitor,0) * fVar7;
            value_03.fields.y = (float)((ulong)pUVar5[7].monitor >> 0x20) * fVar7;
            iVar1 = pUVar5[7].fields.m_CachedPtr;
            value_03.fields.z = (float)iVar1 * fVar7;
            value_03.fields.w = (float)((ulong)iVar1 >> 0x20) * fVar7;
            source_01 = "colorD";
            UnityEngine_Material__SetVector(__this_03,"colorD",value_03,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_RenderTexture_o *)0x0) {
              UnityEngine_RenderTexture__MarkRestoreExpected(__this_01,(MethodInfo *)0x0);
              pUVar5 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Graphics__Blit_4dc2ad0
                        ((UnityEngine_Texture_o *)source_00,__this_01,pUVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    fVar7 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057af0a2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
      il2cpp_runtime_helper_023445d0(&"_Intensity");
      g_data_057af0a2 = '\x01';
    }
    __this_04 = __this_03[9].monitor;
    if (__this_04 != (UnityEngine_MonoBehaviour_o *)0x0) {
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)__this_04,"_Intensity",fVar7,(MethodInfo *)0x0)
      ;
      if (__this_02 != (UnityEngine_RenderTexture_o *)0x0) {
        UnityEngine_RenderTexture__MarkRestoreExpected(__this_02,(MethodInfo *)0x0);
        pUVar5 = __this_03[9].monitor;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2a60
                  ((UnityEngine_Texture_o *)source_01,__this_02,pUVar5,9,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)((long)&__this_04[1].fields.m_CachedPtr + 4) = 1;
    __this_04[2].klass = (UnityEngine_MonoBehaviour_c *)0x140200000;
    __this_04[2].monitor = (void *)0x3f0000003f000000;
    *(undefined4 *)&__this_04[2].fields.m_CachedPtr = 0x3f800000;
    *(undefined4 *)((long)&__this_04[2].fields.m_CachedPtr + 4) = 0x3f800000;
    *(undefined4 *)&__this_04[2].fields.m_CancellationTokenSource = 0x3f800000;
    *(undefined4 *)((long)&__this_04[2].fields.m_CancellationTokenSource + 4) = 0x3f800000;
    __this_04[3].klass = (UnityEngine_MonoBehaviour_c *)0x200000002;
    *(undefined8 *)((long)&__this_04[3].monitor + 4) = 0x4020000000000001;
    __this_04[3].fields.m_CancellationTokenSource =
         (System_Threading_CancellationTokenSource_o *)0x3f4000003e99999a;
    __this_04[4].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd3ecccccd;
    __this_04[4].monitor = (void *)0x3f4000003f4ccccd;
    *(undefined4 *)&__this_04[4].fields.m_CachedPtr = 0x3ecccccd;
    *(undefined8 *)((long)&__this_04[4].fields.m_CachedPtr + 4) = 0x3f4ccccd3f4ccccd;
    *(undefined8 *)((long)&__this_04[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd3f400000;
    *(undefined4 *)((long)&__this_04[5].klass + 4) = 0x3ecccccd;
    *(undefined4 *)&__this_04[5].monitor = 0x3f4ccccd;
    *(undefined4 *)((long)&__this_04[5].monitor + 4) = 0x3f400000;
    *(undefined4 *)&__this_04[5].fields.m_CachedPtr = 0x3f4ccccd;
    *(undefined8 *)((long)&__this_04[5].fields.m_CachedPtr + 4) = 0x3ecccccd;
    *(undefined4 *)((long)&__this_04[5].fields.m_CancellationTokenSource + 4) = 0x3f400000;
    if (g_data_057af0ed == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      g_data_057af0ed = '\x01';
    }
    *(undefined1 *)&__this_04[1].klass = 1;
    *(undefined1 *)((long)&__this_04[1].klass + 2) = 1;
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
    __this_04[1].monitor = __this_00;
    il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
    UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__SetRenderTarget_4dc2ef0(rt,(MethodInfo *)0x0);
    UnityEngine_GL__Clear_4dc38b0
              (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
    UnityEngine_Graphics__Blit(source,rt,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.Bloom$$Vignette
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__Vignette (UnityStandardAssets_ImageEffects_Bloom_o* __this, float amount, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4577d80

void UnityStandardAssets_ImageEffects_Bloom__Vignette
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,float amount,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  intptr_t iVar1;
  UnityEngine_Object_o *exists;
  UnityEngine_Material_o *pUVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RenderTexture_o *__this_01;
  UnityEngine_RenderTexture_o *__this_02;
  System_String_o *source;
  System_String_o *source_00;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Material_o *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  UnityEngine_Texture_o *source_01;
  float fVar6;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  
  if (g_data_057af0a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    amount = (float)il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    g_data_057af0a6 = '\x01';
  }
  exists = *(UnityEngine_Object_o **)&(__this->fields).flareColorD.fields.b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(amount);
  }
  source = (System_String_o *)0x0;
  bVar3 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar5 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
    if (pUVar5 != (UnityEngine_Material_o *)0x0) {
      source = "_ColorBuffer";
      UnityEngine_Material__SetTexture
                (pUVar5,"_ColorBuffer",*(UnityEngine_Texture_o **)&(__this->fields).flareColorD.fields.b,
                 (MethodInfo *)0x0);
      if (to != (UnityEngine_RenderTexture_o *)0x0) {
        UnityEngine_RenderTexture__MarkRestoreExpected(to,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)from,(UnityEngine_Object_o *)to,(MethodInfo *)0x0);
        source_01 = (UnityEngine_Texture_o *)0x0;
        if ((char)bVar3 == '\0') {
          source_01 = (UnityEngine_Texture_o *)from;
        }
        pUVar5 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)from,(UnityEngine_Object_o *)to,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2a60(source_01,to,pUVar5,(uVar4 & 0xff) * 4 + 3,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    source_00 = source;
    if (g_data_057af0a3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
      il2cpp_runtime_helper_023445d0(&"colorD");
      il2cpp_runtime_helper_023445d0(&"colorB");
      il2cpp_runtime_helper_023445d0(&"colorA");
      il2cpp_runtime_helper_023445d0(&"colorC");
      g_data_057af0a3 = '\x01';
    }
    pUVar2 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
    __this_03 = (UnityEngine_Material_o *)0x0;
    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
      fVar6 = *(float *)((long)&pUVar5[4].fields.m_CachedPtr + 4);
      value.fields.x = SUB84(pUVar5[5].monitor,0) * fVar6;
      value.fields.y = (float)((ulong)pUVar5[5].monitor >> 0x20) * fVar6;
      iVar1 = pUVar5[5].fields.m_CachedPtr;
      value.fields.z = (float)iVar1 * fVar6;
      value.fields.w = (float)((ulong)iVar1 >> 0x20) * fVar6;
      source_00 = "colorA";
      UnityEngine_Material__SetVector(pUVar2,"colorA",value,(MethodInfo *)0x0);
      pUVar2 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
      __this_03 = (UnityEngine_Material_o *)0x0;
      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
        fVar6 = *(float *)((long)&pUVar5[4].fields.m_CachedPtr + 4);
        value_00.fields.x = SUB84(pUVar5[6].klass,0) * fVar6;
        value_00.fields.y = (float)((ulong)pUVar5[6].klass >> 0x20) * fVar6;
        value_00.fields.z = SUB84(pUVar5[6].monitor,0) * fVar6;
        value_00.fields.w = (float)((ulong)pUVar5[6].monitor >> 0x20) * fVar6;
        source_00 = "colorB";
        UnityEngine_Material__SetVector(pUVar2,"colorB",value_00,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
        __this_03 = (UnityEngine_Material_o *)0x0;
        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
          iVar1 = pUVar5[6].fields.m_CachedPtr;
          fVar6 = *(float *)((long)&pUVar5[4].fields.m_CachedPtr + 4);
          value_01.fields.x = (float)iVar1 * fVar6;
          value_01.fields.y = (float)((ulong)iVar1 >> 0x20) * fVar6;
          value_01.fields.z = SUB84(pUVar5[7].klass,0) * fVar6;
          value_01.fields.w = (float)((ulong)pUVar5[7].klass >> 0x20) * fVar6;
          source_00 = "colorC";
          UnityEngine_Material__SetVector(pUVar2,"colorC",value_01,(MethodInfo *)0x0);
          __this_03 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
          if (__this_03 != (UnityEngine_Material_o *)0x0) {
            fVar6 = *(float *)((long)&pUVar5[4].fields.m_CachedPtr + 4);
            value_02.fields.x = SUB84(pUVar5[7].monitor,0) * fVar6;
            value_02.fields.y = (float)((ulong)pUVar5[7].monitor >> 0x20) * fVar6;
            iVar1 = pUVar5[7].fields.m_CachedPtr;
            value_02.fields.z = (float)iVar1 * fVar6;
            value_02.fields.w = (float)((ulong)iVar1 >> 0x20) * fVar6;
            source_00 = "colorD";
            UnityEngine_Material__SetVector(__this_03,"colorD",value_02,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_RenderTexture_o *)0x0) {
              UnityEngine_RenderTexture__MarkRestoreExpected(__this_01,(MethodInfo *)0x0);
              pUVar5 = (UnityEngine_Material_o *)pUVar5[8].fields.m_CachedPtr;
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Graphics__Blit_4dc2ad0
                        ((UnityEngine_Texture_o *)source,__this_01,pUVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    fVar6 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057af0a2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
      il2cpp_runtime_helper_023445d0(&"_Intensity");
      g_data_057af0a2 = '\x01';
    }
    __this_04 = __this_03[9].monitor;
    if (__this_04 != (UnityEngine_MonoBehaviour_o *)0x0) {
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)__this_04,"_Intensity",fVar6,(MethodInfo *)0x0)
      ;
      if (__this_02 != (UnityEngine_RenderTexture_o *)0x0) {
        UnityEngine_RenderTexture__MarkRestoreExpected(__this_02,(MethodInfo *)0x0);
        pUVar5 = __this_03[9].monitor;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2a60
                  ((UnityEngine_Texture_o *)source_00,__this_02,pUVar5,9,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)((long)&__this_04[1].fields.m_CachedPtr + 4) = 1;
    __this_04[2].klass = (UnityEngine_MonoBehaviour_c *)0x140200000;
    __this_04[2].monitor = (void *)0x3f0000003f000000;
    *(undefined4 *)&__this_04[2].fields.m_CachedPtr = 0x3f800000;
    *(undefined4 *)((long)&__this_04[2].fields.m_CachedPtr + 4) = 0x3f800000;
    *(undefined4 *)&__this_04[2].fields.m_CancellationTokenSource = 0x3f800000;
    *(undefined4 *)((long)&__this_04[2].fields.m_CancellationTokenSource + 4) = 0x3f800000;
    __this_04[3].klass = (UnityEngine_MonoBehaviour_c *)0x200000002;
    *(undefined8 *)((long)&__this_04[3].monitor + 4) = 0x4020000000000001;
    __this_04[3].fields.m_CancellationTokenSource =
         (System_Threading_CancellationTokenSource_o *)0x3f4000003e99999a;
    __this_04[4].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd3ecccccd;
    __this_04[4].monitor = (void *)0x3f4000003f4ccccd;
    *(undefined4 *)&__this_04[4].fields.m_CachedPtr = 0x3ecccccd;
    *(undefined8 *)((long)&__this_04[4].fields.m_CachedPtr + 4) = 0x3f4ccccd3f4ccccd;
    *(undefined8 *)((long)&__this_04[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd3f400000;
    *(undefined4 *)((long)&__this_04[5].klass + 4) = 0x3ecccccd;
    *(undefined4 *)&__this_04[5].monitor = 0x3f4ccccd;
    *(undefined4 *)((long)&__this_04[5].monitor + 4) = 0x3f400000;
    *(undefined4 *)&__this_04[5].fields.m_CachedPtr = 0x3f4ccccd;
    *(undefined8 *)((long)&__this_04[5].fields.m_CachedPtr + 4) = 0x3ecccccd;
    *(undefined4 *)((long)&__this_04[5].fields.m_CancellationTokenSource + 4) = 0x3f400000;
    if (g_data_057af0ed == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      g_data_057af0ed = '\x01';
    }
    *(undefined1 *)&__this_04[1].klass = 1;
    *(undefined1 *)((long)&__this_04[1].klass + 2) = 1;
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
    __this_04[1].monitor = __this_00;
    il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
    UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)from,(UnityEngine_Object_o *)to,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__SetRenderTarget_4dc2ef0(to,(MethodInfo *)0x0);
    UnityEngine_GL__Clear_4dc38b0
              (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.Bloom$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom___ctor (UnityStandardAssets_ImageEffects_Bloom_o* __this, const MethodInfo* method);
// 0x45781c0

void UnityStandardAssets_ImageEffects_Bloom___ctor
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  *(undefined4 *)((long)&(__this->fields).createdMaterials + 4) = 1;
  (__this->fields).hdr = 0x40200000;
  (__this->fields).doHdr = 1;
  (__this->fields).sepBlurSpread = 0.5;
  (__this->fields).quality = 0x3f000000;
  (__this->fields).bloomIntensity = 1.0;
  (__this->fields).bloomThreshold = 1.0;
  (__this->fields).bloomThresholdColor.fields.r = 1.0;
  (__this->fields).bloomThresholdColor.fields.g = 1.0;
  (__this->fields).bloomThresholdColor.fields.b = 2.8026e-45;
  (__this->fields).bloomThresholdColor.fields.a = 2.8026e-45;
  (__this->fields).hollywoodFlareBlurIterations = 1;
  (__this->fields).flareRotation = 2.5;
  (__this->fields).hollyStretchWidth = 0.3;
  (__this->fields).lensflareIntensity = 0.75;
  (__this->fields).lensflareThreshold = 0.4;
  (__this->fields).lensFlareSaturation = 0.4;
  (__this->fields).flareColorA.fields.r = 0.8;
  (__this->fields).flareColorA.fields.g = 0.75;
  (__this->fields).flareColorA.fields.b = 0.4;
  *(undefined8 *)&(__this->fields).flareColorA.fields.a = 0x3f4ccccd3f4ccccd;
  (__this->fields).flareColorB.fields.g = 0.75;
  (__this->fields).flareColorB.fields.b = 0.8;
  (__this->fields).flareColorB.fields.a = 0.4;
  (__this->fields).flareColorC.fields.r = 0.8;
  (__this->fields).flareColorC.fields.g = 0.75;
  (__this->fields).flareColorC.fields.b = 0.8;
  *(undefined8 *)&(__this->fields).flareColorC.fields.a = 0x3ecccccd;
  (__this->fields).flareColorD.fields.g = 0.75;
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


