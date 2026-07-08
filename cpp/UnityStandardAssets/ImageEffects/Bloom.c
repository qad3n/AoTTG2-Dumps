// Type: UnityStandardAssets.ImageEffects.Bloom
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Bloom.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Bloom.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.Bloom$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_Bloom__CheckResources (UnityStandardAssets_ImageEffects_Bloom_o* __this, const MethodInfo* method);
// 0x4251800

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
  
  if (DAT_0570526e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    DAT_0570526e = '\x01';
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
  il2cpp_runtime_glue(&(__this->fields).screenBlendShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).lensFlareVignetteMask,
                      (UnityEngine_Material_o *)(__this->fields).lensFlareShader,in_RCX);
  (__this->fields).lensFlareShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_glue(&(__this->fields).lensFlareShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).screenBlend,
                      (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,in_RCX);
  (__this->fields).blurAndFlaresShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_glue(&(__this->fields).blurAndFlaresShader,pUVar3);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).blurAndFlaresMaterial,
                         (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader,in_RCX);
  (__this->fields).brightPassFilterShader = (UnityEngine_Shader_o *)method_00;
  uVar4 = il2cpp_runtime_glue(&(__this->fields).brightPassFilterShader);
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
// 0x4251cf0

void UnityStandardAssets_ImageEffects_Bloom__OnRenderImage
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,UnityEngine_RenderTexture_o *source
               ,UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  UnityEngine_Material_o *pUVar9;
  char cVar10;
  int32_t iVar11;
  bool_conflict bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Texture_o *source_00;
  UnityEngine_Texture_o *pUVar17;
  UnityEngine_Texture_o *source_01;
  MethodInfo *pMVar18;
  int width;
  uint format;
  int height;
  float fVar19;
  float fVar20;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar21;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  UnityEngine_Vector4_o value_04;
  UnityEngine_Vector4_o value_05;
  UnityEngine_Texture_o *pUStack_c8;
  
  if (DAT_05705225 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    il2cpp_init_method_metadata(&"_TintColor");
    il2cpp_init_method_metadata(&"_Threshhold");
    il2cpp_init_method_metadata(&"_ColorBuffer");
    il2cpp_init_method_metadata(&"_Intensity");
    il2cpp_init_method_metadata(&"_Offsets");
    il2cpp_init_method_metadata(&"_StretchWidth");
    il2cpp_init_method_metadata(&"_Saturation");
    DAT_05705225 = '\x01';
  }
  cVar10 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar10 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  *(undefined1 *)&(__this->fields).screenBlendMode = 0;
  iVar13 = (__this->fields).tweakMode;
  if (iVar13 == 0) {
    if (source == (UnityEngine_RenderTexture_o *)0x0) goto LAB_04252b14;
    iVar11 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
    if (iVar11 == 2) {
      __this_00 = (UnityEngine_Camera_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
      if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_04252b14;
      bVar12 = UnityEngine_Camera__get_allowHDR(__this_00,(MethodInfo *)0x0);
      *(char *)&(__this->fields).screenBlendMode = (char)bVar12;
      if ((char)bVar12 != '\0') goto LAB_04251e46;
    }
    else {
      *(undefined1 *)&(__this->fields).screenBlendMode = 0;
    }
LAB_04251e51:
    cVar10 = '\0';
  }
  else {
    *(bool *)&(__this->fields).screenBlendMode = iVar13 == 1;
    if (iVar13 != 1) goto LAB_04251e51;
LAB_04251e46:
    cVar10 = (char)(__this->fields).supportHDRTextures;
  }
  *(char *)&(__this->fields).screenBlendMode = cVar10;
  iVar11 = 1;
  if (cVar10 == '\0') {
    iVar11 = *(int32_t *)((long)&(__this->fields).createdMaterials + 4);
  }
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    format = (uint)(cVar10 == '\0') * 5 + 2;
    iVar13 = (*(source->klass->vtable)._5_get_width.methodPtr)
                       (source,(source->klass->vtable)._5_get_width.method);
    iVar14 = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    iVar15 = (*(source->klass->vtable)._5_get_width.methodPtr)
                       (source,(source->klass->vtable)._5_get_width.method);
    width = (int)(((uint)(iVar15 >> 0x1f) >> 0x1e) + iVar15) >> 2;
    iVar15 = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    height = (int)(((uint)(iVar15 >> 0x1f) >> 0x1e) + iVar15) >> 2;
    iVar15 = (*(source->klass->vtable)._5_get_width.methodPtr)
                       (source,(source->klass->vtable)._5_get_width.method);
    iVar16 = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary(width,height,0,format,(MethodInfo *)0x0);
    pUVar17 = (UnityEngine_Texture_o *)
              UnityEngine_RenderTexture__GetTemporary
                        (iVar13 / 2,iVar14 / 2,0,format,(MethodInfo *)0x0);
    if ((__this->fields).doHdr < 1) {
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pUVar17,
                 (MethodInfo *)0x0);
      UnityEngine_Graphics__Blit
                (pUVar17,(UnityEngine_RenderTexture_o *)source_00,
                 (UnityEngine_Material_o *)(__this->fields).screenBlendShader,6,(MethodInfo *)0x0);
    }
    else {
      pUVar9 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pUVar17,pUVar9,2,
                 (MethodInfo *)0x0);
      source_01 = (UnityEngine_Texture_o *)
                  UnityEngine_RenderTexture__GetTemporary(width,height,0,format,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit
                (pUVar17,(UnityEngine_RenderTexture_o *)source_01,
                 (UnityEngine_Material_o *)(__this->fields).screenBlendShader,2,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit
                (source_01,(UnityEngine_RenderTexture_o *)source_00,
                 (UnityEngine_Material_o *)(__this->fields).screenBlendShader,6,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary
                ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
    }
    UnityEngine_RenderTexture__ReleaseTemporary
              ((UnityEngine_RenderTexture_o *)pUVar17,(MethodInfo *)0x0);
    pUStack_c8 = (UnityEngine_Texture_o *)
                 UnityEngine_RenderTexture__GetTemporary(width,height,0,format,(MethodInfo *)0x0);
    uVar3 = (__this->fields).bloomIntensity;
    uVar6 = (__this->fields).bloomThreshold;
    uVar4 = (__this->fields).bloomThresholdColor.fields.r;
    uVar7 = (__this->fields).bloomThresholdColor.fields.g;
    fVar19 = (float)(__this->fields).quality;
    if (DAT_05705229 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Graphics);
      il2cpp_init_method_metadata(&"_Threshhold");
      DAT_05705229 = '\x01';
    }
    pUVar9 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
    if (pUVar9 != (UnityEngine_Material_o *)0x0) {
      value.fields.x = (float)uVar3 * fVar19;
      value.fields.y = (float)uVar6 * fVar19;
      value.fields.z = fVar19 * (float)uVar4;
      value.fields.w = fVar19 * (float)uVar7;
      UnityEngine_Material__SetVector(pUVar9,"_Threshhold",value,(MethodInfo *)0x0);
      pUVar9 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar20 = 1.4013e-45;
      UnityEngine_Graphics__Blit
                (source_00,(UnityEngine_RenderTexture_o *)pUStack_c8,pUVar9,1,(MethodInfo *)0x0);
      fVar19 = (__this->fields).bloomThresholdColor.fields.b;
      if (((int)fVar19 < 1) || (fVar20 = 1.4013e-44, 10 < (int)fVar19)) {
        (__this->fields).bloomThresholdColor.fields.b = fVar20;
      }
      fVar19 = (float)iVar15 / (float)iVar16;
      iVar15 = 0;
      do {
        while( true ) {
          fVar20 = ((float)iVar15 * 0.25 + 1.0) * (float)(__this->fields).hdr;
          pUVar17 = (UnityEngine_Texture_o *)
                    UnityEngine_RenderTexture__GetTemporary(width,height,0,format,(MethodInfo *)0x0)
          ;
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
          UnityEngine_Material__SetVector
                    (pUVar9,"_Offsets",
                     (UnityEngine_Vector4_o)(ZEXT416((uint)(fVar20 * 0.001953125)) << 0x20),
                     (MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    (pUStack_c8,(UnityEngine_RenderTexture_o *)pUVar17,pUVar9,4,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)pUStack_c8,(MethodInfo *)0x0);
          pUStack_c8 = (UnityEngine_Texture_o *)
                       UnityEngine_RenderTexture__GetTemporary
                                 (width,height,0,format,(MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
          UnityEngine_Material__SetVector
                    (pUVar9,"_Offsets",
                     (UnityEngine_Vector4_o)ZEXT416((uint)((fVar20 / fVar19) * 0.001953125)),
                     (MethodInfo *)0x0);
          UnityEngine_Graphics__Blit
                    (pUVar17,(UnityEngine_RenderTexture_o *)pUStack_c8,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,4,
                     (MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)pUVar17,(MethodInfo *)0x0);
          if (0 < (__this->fields).doHdr) break;
LAB_042521cc:
          iVar15 = iVar15 + 1;
          if ((int)(__this->fields).bloomThresholdColor.fields.b <= iVar15) goto LAB_042523c7;
        }
        if (iVar15 != 0) {
          if (source_00 != (UnityEngine_Texture_o *)0x0) {
            UnityEngine_RenderTexture__MarkRestoreExpected
                      ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
            pUVar9 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit
                      (pUStack_c8,(UnityEngine_RenderTexture_o *)source_00,pUVar9,10,
                       (MethodInfo *)0x0);
            goto LAB_042521cc;
          }
          goto LAB_04252b14;
        }
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__SetRenderTarget
                  ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
        UnityEngine_GL__Clear
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0)
        ;
        UnityEngine_Graphics__Blit
                  (pUStack_c8,(UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
        iVar15 = 1;
      } while (1 < (int)(__this->fields).bloomThresholdColor.fields.b);
LAB_042523c7:
      if (0 < (__this->fields).doHdr) {
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__SetRenderTarget
                  ((UnityEngine_RenderTexture_o *)pUStack_c8,(MethodInfo *)0x0);
        UnityEngine_GL__Clear
                  (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0)
        ;
        UnityEngine_Graphics__Blit
                  (source_00,(UnityEngine_RenderTexture_o *)pUStack_c8,
                   (UnityEngine_Material_o *)(__this->fields).screenBlendShader,6,(MethodInfo *)0x0)
        ;
      }
      fVar20 = (float)(__this->fields).lensflareMode;
      if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar20 && fVar20 != **(float **)(TypeInfo_Mathf + 0xb8)
         ) {
        pMVar18 = (MethodInfo *)(ulong)format;
        pUVar17 = (UnityEngine_Texture_o *)
                  UnityEngine_RenderTexture__GetTemporary(width,height,0,format,(MethodInfo *)0x0);
        if ((__this->fields).hollywoodFlareBlurIterations == 0) {
          UnityStandardAssets_ImageEffects_Bloom__BrightFilter
                    (__this,(__this->fields).hollyStretchWidth,
                     (UnityEngine_RenderTexture_o *)pUStack_c8,
                     (UnityEngine_RenderTexture_o *)pUVar17,pMVar18);
          fVar19 = extraout_XMM0_Da_01;
          if (0 < (__this->fields).doHdr) {
            if (source_00 == (UnityEngine_Texture_o *)0x0) goto LAB_04252b14;
            pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
            iVar15 = (*(source_00->klass->vtable)._7_get_height.methodPtr)
                               (source_00,(source_00->klass->vtable)._7_get_height.method);
            if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
            UnityEngine_Material__SetVector
                      (pUVar9,"_Offsets",
                       (UnityEngine_Vector4_o)(ZEXT416((uint)(1.5 / (float)iVar15)) << 0x20),
                       (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__SetRenderTarget
                      ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
            UnityEngine_GL__Clear
                      (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                       (MethodInfo *)0x0);
            UnityEngine_Graphics__Blit
                      (pUVar17,(UnityEngine_RenderTexture_o *)source_00,
                       (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,4,
                       (MethodInfo *)0x0);
            pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
            iVar15 = (*(source_00->klass->vtable)._5_get_width.methodPtr)
                               (source_00,(source_00->klass->vtable)._5_get_width.method);
            if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
            UnityEngine_Material__SetVector
                      (pUVar9,"_Offsets",
                       (UnityEngine_Vector4_o)ZEXT416((uint)(1.5 / (float)iVar15)),(MethodInfo *)0x0
                      );
            UnityEngine_Graphics__SetRenderTarget
                      ((UnityEngine_RenderTexture_o *)pUVar17,(MethodInfo *)0x0);
            UnityEngine_GL__Clear
                      (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                       (MethodInfo *)0x0);
            pMVar18 = (MethodInfo *)0x4;
            UnityEngine_Graphics__Blit
                      (source_00,(UnityEngine_RenderTexture_o *)pUVar17,
                       (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,4,
                       (MethodInfo *)0x0);
            fVar19 = extraout_XMM0_Da_02;
          }
          UnityStandardAssets_ImageEffects_Bloom__Vignette
                    (__this,fVar19,(UnityEngine_RenderTexture_o *)pUVar17,
                     (UnityEngine_RenderTexture_o *)pUVar17,pMVar18);
          UnityStandardAssets_ImageEffects_Bloom__BlendFlares
                    (__this,(UnityEngine_RenderTexture_o *)pUVar17,
                     (UnityEngine_RenderTexture_o *)pUStack_c8,pMVar18);
        }
        else {
          value_00.fields.x = cosf((float)(__this->fields).bloomBlurIterations);
          fVar20 = sinf((float)(__this->fields).bloomBlurIterations);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
          fVar21 = (__this->fields).flareRotation;
          value_00.fields.y = fVar20;
          value_00.fields.z = 0.0;
          value_00.fields.w = 0.0;
          UnityEngine_Material__SetVector(pUVar9,"_Offsets",value_00,(MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
          value_01.fields.y = 1.0;
          value_01.fields.x = (__this->fields).hollyStretchWidth;
          value_01.fields.z = 0.0;
          value_01.fields.w = 0.0;
          UnityEngine_Material__SetVector(pUVar9,"_Threshhold",value_01,(MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
          fVar1 = (__this->fields).flareColorA.fields.g;
          uVar5 = (__this->fields).lensflareThreshold;
          uVar8 = (__this->fields).lensFlareSaturation;
          fVar2 = (float)(__this->fields).lensflareMode;
          value_02.fields.x = (float)uVar5 * fVar1 * fVar2;
          value_02.fields.y = (float)uVar8 * fVar1 * fVar2;
          value_02.fields.z = (__this->fields).flareColorA.fields.r * fVar1 * fVar2;
          value_02.fields.w = fVar1 * fVar1 * fVar2;
          UnityEngine_Material__SetVector(pUVar9,"_TintColor",value_02,(MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if ((pUVar9 == (UnityEngine_Material_o *)0x0) ||
             (UnityEngine_Material__SetFloat
                        (pUVar9,"_Saturation",(__this->fields).lensflareIntensity,(MethodInfo *)0x0),
             source_00 == (UnityEngine_Texture_o *)0x0)) goto LAB_04252b14;
          UnityEngine_RenderTexture__DiscardContents
                    ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    (pUVar17,(UnityEngine_RenderTexture_o *)source_00,pUVar9,2,(MethodInfo *)0x0);
          if (pUVar17 == (UnityEngine_Texture_o *)0x0) goto LAB_04252b14;
          UnityEngine_RenderTexture__DiscardContents
                    ((UnityEngine_RenderTexture_o *)pUVar17,(MethodInfo *)0x0);
          UnityEngine_Graphics__Blit
                    (source_00,(UnityEngine_RenderTexture_o *)pUVar17,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,3,
                     (MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
          fVar21 = (fVar21 / fVar19) * 0.001953125;
          value_03.fields.x = value_00.fields.x * fVar21;
          value_03.fields.y = fVar21 * fVar20;
          value_03.fields.z = 0.0;
          value_03.fields.w = 0.0;
          UnityEngine_Material__SetVector(pUVar9,"_Offsets",value_03,(MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
          UnityEngine_Material__SetFloat
                    (pUVar9,"_StretchWidth",(__this->fields).flareRotation,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents
                    ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
          UnityEngine_Graphics__Blit
                    (pUVar17,(UnityEngine_RenderTexture_o *)source_00,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,1,
                     (MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
          fVar21 = (__this->fields).flareRotation;
          UnityEngine_Material__SetFloat(pUVar9,"_StretchWidth",fVar21 + fVar21,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents
                    ((UnityEngine_RenderTexture_o *)pUVar17,(MethodInfo *)0x0);
          UnityEngine_Graphics__Blit
                    (source_00,(UnityEngine_RenderTexture_o *)pUVar17,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,1,
                     (MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
          if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
          iVar15 = 0;
          UnityEngine_Material__SetFloat
                    (pUVar9,"_StretchWidth",(__this->fields).flareRotation * 4.0,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents
                    ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
          pMVar18 = (MethodInfo *)0x1;
          UnityEngine_Graphics__Blit
                    (pUVar17,(UnityEngine_RenderTexture_o *)source_00,
                     (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,1,
                     (MethodInfo *)0x0);
          fVar21 = extraout_XMM0_Da;
          if (0 < (int)(__this->fields).bloomThresholdColor.fields.a) {
            do {
              pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
              if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
              fVar21 = (__this->fields).flareRotation;
              fVar21 = ((fVar21 + fVar21) / fVar19) * 0.001953125;
              value_04.fields.x = value_00.fields.x * fVar21;
              fVar21 = fVar21 * fVar20;
              value_05.fields.y = fVar21;
              value_05.fields.x = value_04.fields.x;
              value_04.fields.y = fVar21;
              value_04.fields.z = 0.0;
              value_04.fields.w = 0.0;
              UnityEngine_Material__SetVector(pUVar9,"_Offsets",value_04,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__DiscardContents
                        ((UnityEngine_RenderTexture_o *)pUVar17,(MethodInfo *)0x0);
              pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Graphics__Blit
                        (source_00,(UnityEngine_RenderTexture_o *)pUVar17,pUVar9,4,(MethodInfo *)0x0
                        );
              pUVar9 = (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader;
              if (pUVar9 == (UnityEngine_Material_o *)0x0) goto LAB_04252b14;
              value_05.fields.z = 0.0;
              value_05.fields.w = 0.0;
              UnityEngine_Material__SetVector(pUVar9,"_Offsets",value_05,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__DiscardContents
                        ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
              pMVar18 = (MethodInfo *)0x4;
              UnityEngine_Graphics__Blit
                        (pUVar17,(UnityEngine_RenderTexture_o *)source_00,
                         (UnityEngine_Material_o *)(__this->fields).blurAndFlaresShader,4,
                         (MethodInfo *)0x0);
              iVar15 = iVar15 + 1;
              fVar21 = extraout_XMM0_Da_00;
            } while (iVar15 < (int)(__this->fields).bloomThresholdColor.fields.a);
          }
          if ((__this->fields).hollywoodFlareBlurIterations != 1) {
            UnityStandardAssets_ImageEffects_Bloom__Vignette
                      (__this,fVar21,(UnityEngine_RenderTexture_o *)source_00,
                       (UnityEngine_RenderTexture_o *)pUVar17,pMVar18);
            UnityStandardAssets_ImageEffects_Bloom__BlendFlares
                      (__this,(UnityEngine_RenderTexture_o *)pUVar17,
                       (UnityEngine_RenderTexture_o *)source_00,pMVar18);
          }
          UnityStandardAssets_ImageEffects_Bloom__AddTo
                    (__this,1.0,(UnityEngine_RenderTexture_o *)source_00,
                     (UnityEngine_RenderTexture_o *)pUStack_c8,pMVar18);
        }
        UnityEngine_RenderTexture__ReleaseTemporary
                  ((UnityEngine_RenderTexture_o *)pUVar17,(MethodInfo *)0x0);
      }
      pUVar9 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
      if (pUVar9 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat
                  (pUVar9,"_Intensity",(__this->fields).sepBlurSpread,(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
        if (pUVar9 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetTexture
                    (pUVar9,"_ColorBuffer",(UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
          if ((__this->fields).doHdr < 1) {
            pUVar9 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit(pUStack_c8,destination,pUVar9,iVar11,(MethodInfo *)0x0);
          }
          else {
            pUVar17 = (UnityEngine_Texture_o *)
                      UnityEngine_RenderTexture__GetTemporary
                                (iVar13 / 2,iVar14 / 2,0,format,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit
                      (pUStack_c8,(UnityEngine_RenderTexture_o *)pUVar17,(MethodInfo *)0x0);
            UnityEngine_Graphics__Blit
                      (pUVar17,destination,
                       (UnityEngine_Material_o *)(__this->fields).screenBlendShader,iVar11,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)pUVar17,(MethodInfo *)0x0);
          }
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)pUStack_c8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04252b14:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Bloom$$AddTo
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__AddTo (UnityStandardAssets_ImageEffects_Bloom_o* __this, float intensity_, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4253000

void UnityStandardAssets_ImageEffects_Bloom__AddTo
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,float intensity_,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  
  if (DAT_05705226 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_Intensity");
    DAT_05705226 = '\x01';
  }
  pUVar1 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(pUVar1,"_Intensity",intensity_,(MethodInfo *)0x0);
    if (to != (UnityEngine_RenderTexture_o *)0x0) {
      UnityEngine_RenderTexture__MarkRestoreExpected(to,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,pUVar1,9,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Bloom$$BlendFlares
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__BlendFlares (UnityStandardAssets_ImageEffects_Bloom_o* __this, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4252e60

void UnityStandardAssets_ImageEffects_Bloom__BlendFlares
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,UnityEngine_RenderTexture_o *from,
               UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  float fVar1;
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
  undefined4 uVar17;
  UnityEngine_Material_o *pUVar18;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  
  if (DAT_05705227 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"colorD");
    il2cpp_init_method_metadata(&"colorB");
    il2cpp_init_method_metadata(&"colorA");
    il2cpp_init_method_metadata(&"colorC");
    DAT_05705227 = '\x01';
  }
  pUVar18 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
  if (pUVar18 != (UnityEngine_Material_o *)0x0) {
    uVar2 = (__this->fields).lensflareThreshold;
    uVar10 = (__this->fields).lensFlareSaturation;
    fVar1 = (float)(__this->fields).lensflareMode;
    value.fields.x = (float)uVar2 * fVar1;
    value.fields.y = (float)uVar10 * fVar1;
    uVar3 = (__this->fields).flareColorA.fields.r;
    uVar11 = (__this->fields).flareColorA.fields.g;
    value.fields.z = (float)uVar3 * fVar1;
    value.fields.w = (float)uVar11 * fVar1;
    UnityEngine_Material__SetVector(pUVar18,"colorA",value,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
    if (pUVar18 != (UnityEngine_Material_o *)0x0) {
      uVar4 = (__this->fields).flareColorA.fields.b;
      uVar12 = (__this->fields).flareColorA.fields.a;
      fVar1 = (float)(__this->fields).lensflareMode;
      value_00.fields.x = (float)uVar4 * fVar1;
      value_00.fields.y = (float)uVar12 * fVar1;
      uVar5 = (__this->fields).flareColorB.fields.r;
      uVar13 = (__this->fields).flareColorB.fields.g;
      value_00.fields.z = (float)uVar5 * fVar1;
      value_00.fields.w = (float)uVar13 * fVar1;
      UnityEngine_Material__SetVector(pUVar18,"colorB",value_00,(MethodInfo *)0x0);
      pUVar18 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
      if (pUVar18 != (UnityEngine_Material_o *)0x0) {
        uVar6 = (__this->fields).flareColorB.fields.b;
        uVar14 = (__this->fields).flareColorB.fields.a;
        fVar1 = (float)(__this->fields).lensflareMode;
        value_01.fields.x = (float)uVar6 * fVar1;
        value_01.fields.y = (float)uVar14 * fVar1;
        uVar7 = (__this->fields).flareColorC.fields.r;
        uVar15 = (__this->fields).flareColorC.fields.g;
        value_01.fields.z = (float)uVar7 * fVar1;
        value_01.fields.w = (float)uVar15 * fVar1;
        UnityEngine_Material__SetVector(pUVar18,"colorC",value_01,(MethodInfo *)0x0);
        pUVar18 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
        if (pUVar18 != (UnityEngine_Material_o *)0x0) {
          uVar8 = (__this->fields).flareColorC.fields.b;
          uVar16 = (__this->fields).flareColorC.fields.a;
          fVar1 = (float)(__this->fields).lensflareMode;
          value_02.fields.x = (float)uVar8 * fVar1;
          value_02.fields.y = (float)uVar16 * fVar1;
          uVar9 = (__this->fields).flareColorD.fields.r;
          uVar17 = (__this->fields).flareColorD.fields.g;
          value_02.fields.z = (float)uVar9 * fVar1;
          value_02.fields.w = (float)uVar17 * fVar1;
          UnityEngine_Material__SetVector(pUVar18,"colorD",value_02,(MethodInfo *)0x0);
          if (to != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__MarkRestoreExpected(to,(MethodInfo *)0x0);
            pUVar18 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,pUVar18,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Bloom$$BrightFilter
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__BrightFilter (UnityStandardAssets_ImageEffects_Bloom_o* __this, float thresh, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4252bd0

void UnityStandardAssets_ImageEffects_Bloom__BrightFilter
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,float thresh,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  UnityEngine_Vector4_o value;
  
  if (DAT_05705228 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_Threshhold");
    DAT_05705228 = '\x01';
  }
  pUVar1 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    value.fields.w = thresh;
    value.fields.z = thresh;
    value.fields.y = thresh;
    value.fields.x = thresh;
    UnityEngine_Material__SetVector(pUVar1,"_Threshhold",value,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,pUVar1,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Bloom$$BrightFilter
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__BrightFilter (UnityStandardAssets_ImageEffects_Bloom_o* __this, UnityEngine_Color_o threshColor, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4252b20

void UnityStandardAssets_ImageEffects_Bloom__BrightFilter
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,UnityEngine_Color_o threshColor,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  
  if (DAT_05705229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_Threshhold");
    DAT_05705229 = '\x01';
  }
  pUVar1 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetVector
              (pUVar1,"_Threshhold",(UnityEngine_Vector4_o)threshColor.fields,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,pUVar1,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Bloom$$Vignette
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom__Vignette (UnityStandardAssets_ImageEffects_Bloom_o* __this, float amount, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4252c80

void UnityStandardAssets_ImageEffects_Bloom__Vignette
               (UnityStandardAssets_ImageEffects_Bloom_o *__this,float amount,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  UnityEngine_Material_o *pUVar1;
  bool_conflict bVar2;
  uint uVar3;
  UnityEngine_Texture_o *source;
  undefined4 in_XMM0_Db;
  
  if (DAT_0570522a == '\0') {
    il2cpp_init_method_metadata(CONCAT44(in_XMM0_Db,amount),&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_ColorBuffer");
    DAT_0570522a = '\x01';
  }
  exists = *(UnityEngine_Object_o **)&(__this->fields).flareColorD.fields.b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture
                (pUVar1,"_ColorBuffer",
                 *(UnityEngine_Texture_o **)&(__this->fields).flareColorD.fields.b,(MethodInfo *)0x0
                );
      if (to != (UnityEngine_RenderTexture_o *)0x0) {
        UnityEngine_RenderTexture__MarkRestoreExpected(to,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)from,(UnityEngine_Object_o *)to,(MethodInfo *)0x0
                          );
        source = (UnityEngine_Texture_o *)0x0;
        if ((char)bVar2 == '\0') {
          source = (UnityEngine_Texture_o *)from;
        }
        pUVar1 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)from,(UnityEngine_Object_o *)to,(MethodInfo *)0x0
                          );
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__Blit(source,to,pUVar1,(uVar3 & 0xff) * 4 + 3,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)from,(UnityEngine_Object_o *)to,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__SetRenderTarget(to,(MethodInfo *)0x0);
    UnityEngine_GL__Clear
              (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.Bloom$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Bloom___ctor (UnityStandardAssets_ImageEffects_Bloom_o* __this, const MethodInfo* method);
// 0x42530c0

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


