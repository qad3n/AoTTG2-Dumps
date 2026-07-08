// Type: UnityStandardAssets.ImageEffects.BloomAndFlares
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/BloomAndFlares.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/BloomAndFlares.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.BloomAndFlares$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_BloomAndFlares__CheckResources (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, const MethodInfo* method);
// 0x42531e0

bool_conflict
UnityStandardAssets_ImageEffects_BloomAndFlares__CheckResources
          (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,MethodInfo *method)

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
                      (UnityEngine_Shader_o *)(__this->fields).addBrightStuffBlendOneOneMaterial,
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
                      (UnityEngine_Shader_o *)(__this->fields).lensFlareMaterial,
                      (UnityEngine_Material_o *)(__this->fields).vignetteShader,in_RCX);
  (__this->fields).vignetteShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_glue(&(__this->fields).vignetteShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).vignetteMaterial,
                      (UnityEngine_Material_o *)(__this->fields).separableBlurShader,in_RCX);
  (__this->fields).separableBlurShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_glue(&(__this->fields).separableBlurShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).separableBlurMaterial,
                      (UnityEngine_Material_o *)(__this->fields).addBrightStuffOneOneShader,in_RCX);
  (__this->fields).addBrightStuffOneOneShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_glue(&(__this->fields).addBrightStuffOneOneShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).screenBlend,
                      (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,in_RCX);
  (__this->fields).hollywoodFlaresShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_glue(&(__this->fields).hollywoodFlaresShader,pUVar3);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).hollywoodFlaresMaterial,
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


// UnityStandardAssets.ImageEffects.BloomAndFlares$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__OnRenderImage (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x42533c0

void UnityStandardAssets_ImageEffects_BloomAndFlares__OnRenderImage
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Material_o *pUVar4;
  char cVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  int iVar8;
  int iVar9;
  UnityEngine_Camera_o *__this_00;
  ulong uVar10;
  UnityEngine_Texture_o *pUVar11;
  UnityEngine_Texture_o *source_00;
  UnityEngine_Texture_o *source_01;
  UnityEngine_Texture_o *source_02;
  MethodInfo *pMVar12;
  int format;
  float fVar13;
  float fVar14;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  
  if (DAT_0570522b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_ColorBuffer");
    il2cpp_init_method_metadata(&"_Intensity");
    il2cpp_init_method_metadata(&"_threshold");
    il2cpp_init_method_metadata(&"tintColor");
    il2cpp_init_method_metadata(&"stretchWidth");
    il2cpp_init_method_metadata(&"offsets");
    DAT_0570522b = '\x01';
  }
  cVar5 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar5 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  *(undefined1 *)&(__this->fields).screenBlendMode = 0;
  iVar8 = (__this->fields).tweakMode;
  if (iVar8 == 0) {
    if (source == (UnityEngine_RenderTexture_o *)0x0) goto LAB_04253f55;
    iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
    if (iVar6 == 2) {
      __this_00 = (UnityEngine_Camera_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
      if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_04253f55;
      bVar7 = UnityEngine_Camera__get_allowHDR(__this_00,(MethodInfo *)0x0);
      *(char *)&(__this->fields).screenBlendMode = (char)bVar7;
      if ((char)bVar7 != '\0') goto LAB_042534f7;
    }
    else {
      *(undefined1 *)&(__this->fields).screenBlendMode = 0;
    }
LAB_04253502:
    cVar5 = '\0';
  }
  else {
    *(bool *)&(__this->fields).screenBlendMode = iVar8 == 1;
    if (iVar8 != 1) goto LAB_04253502;
LAB_042534f7:
    cVar5 = (char)(__this->fields).supportHDRTextures;
  }
  *(char *)&(__this->fields).screenBlendMode = cVar5;
  iVar6 = 1;
  if (cVar5 == '\0') {
    iVar6 = *(int32_t *)((long)&(__this->fields).createdMaterials + 4);
  }
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    format = (uint)(cVar5 == '\0') * 5 + 2;
    iVar8 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    uVar10 = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    pUVar11 = (UnityEngine_Texture_o *)
              UnityEngine_RenderTexture__GetTemporary
                        (iVar8 / 2,(int)(((uint)(uVar10 >> 0x1f) & 1) + (int)uVar10) >> 1,0,format,
                         (MethodInfo *)0x0);
    iVar8 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar9 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary
                          ((int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,
                           (int)(((uint)(iVar9 >> 0x1f) >> 0x1e) + iVar9) >> 2,0,format,
                           (MethodInfo *)0x0);
    iVar8 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar9 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    source_01 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary
                          ((int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,
                           (int)(((uint)(iVar9 >> 0x1f) >> 0x1e) + iVar9) >> 2,0,format,
                           (MethodInfo *)0x0);
    iVar8 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar9 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    source_02 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary
                          ((int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2,
                           (int)(((uint)(iVar9 >> 0x1f) >> 0x1e) + iVar9) >> 2,0,format,
                           (MethodInfo *)0x0);
    iVar8 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar9 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    pUVar4 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pUVar11,pUVar4,2,
               (MethodInfo *)0x0);
    pMVar12 = (MethodInfo *)0x2;
    UnityEngine_Graphics__Blit
              (pUVar11,(UnityEngine_RenderTexture_o *)source_00,
               (UnityEngine_Material_o *)(__this->fields).screenBlendShader,2,(MethodInfo *)0x0);
    UnityEngine_RenderTexture__ReleaseTemporary
              ((UnityEngine_RenderTexture_o *)pUVar11,(MethodInfo *)0x0);
    UnityStandardAssets_ImageEffects_BloomAndFlares__BrightFilter
              (__this,(__this->fields).useSrcAlphaAsMask,(float)(__this->fields).doHdr,
               (UnityEngine_RenderTexture_o *)source_00,(UnityEngine_RenderTexture_o *)source_01,
               pMVar12);
    if (source_00 != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_RenderTexture__DiscardContents
                ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
      if ((int)(__this->fields).bloomIntensity < 1) {
        (__this->fields).bloomIntensity = 1.4013e-45;
      }
      fVar13 = (float)iVar8 / (float)iVar9;
      if (source_02 == (UnityEngine_Texture_o *)0x0) {
        pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
        if (pUVar4 != (UnityEngine_Material_o *)0x0) {
          fVar14 = (float)(__this->fields).hdr;
          UnityEngine_Material__SetVector
                    (pUVar4,"offsets",
                     (UnityEngine_Vector4_o)(ZEXT416((uint)(fVar14 * 0.001953125)) << 0x20),
                     (MethodInfo *)0x0);
          pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    (source_01,(UnityEngine_RenderTexture_o *)0x0,pUVar4,(MethodInfo *)0x0);
          if (source_01 != (UnityEngine_Texture_o *)0x0) {
            UnityEngine_RenderTexture__DiscardContents
                      ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
            if (pUVar4 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetVector
                        (pUVar4,"offsets",
                         (UnityEngine_Vector4_o)ZEXT416((uint)((fVar14 / fVar13) * 0.001953125)),
                         (MethodInfo *)0x0);
              UnityEngine_Graphics__Blit
                        ((UnityEngine_Texture_o *)0x0,(UnityEngine_RenderTexture_o *)source_00,
                         (UnityEngine_Material_o *)(__this->fields).separableBlurShader,
                         (MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
      else {
        iVar8 = 0;
        do {
          pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
          if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
          fVar14 = ((float)iVar8 * 0.5 + 1.0) * (float)(__this->fields).hdr;
          UnityEngine_Material__SetVector
                    (pUVar4,"offsets",
                     (UnityEngine_Vector4_o)(ZEXT416((uint)(fVar14 * 0.001953125)) << 0x20),
                     (MethodInfo *)0x0);
          pUVar11 = source_00;
          if (iVar8 == 0) {
            pUVar11 = source_01;
          }
          pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    (pUVar11,(UnityEngine_RenderTexture_o *)source_02,pUVar4,(MethodInfo *)0x0);
          if (pUVar11 == (UnityEngine_Texture_o *)0x0) goto LAB_04253f55;
          UnityEngine_RenderTexture__DiscardContents
                    ((UnityEngine_RenderTexture_o *)pUVar11,(MethodInfo *)0x0);
          pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
          if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
          UnityEngine_Material__SetVector
                    (pUVar4,"offsets",
                     (UnityEngine_Vector4_o)ZEXT416((uint)((fVar14 / fVar13) * 0.001953125)),
                     (MethodInfo *)0x0);
          pMVar12 = (MethodInfo *)0x0;
          UnityEngine_Graphics__Blit
                    (source_02,(UnityEngine_RenderTexture_o *)source_00,
                     (UnityEngine_Material_o *)(__this->fields).separableBlurShader,
                     (MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents
                    ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(__this->fields).bloomIntensity);
        if (*(char *)&(__this->fields).bloomThreshold != '\0') {
          if ((__this->fields).lensflares == 0) {
            UnityStandardAssets_ImageEffects_BloomAndFlares__BrightFilter
                      (__this,(__this->fields).hollyStretchWidth,0.0,
                       (UnityEngine_RenderTexture_o *)source_00,
                       (UnityEngine_RenderTexture_o *)source_02,pMVar12);
            UnityEngine_RenderTexture__DiscardContents
                      ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
            UnityStandardAssets_ImageEffects_BloomAndFlares__Vignette
                      (__this,0.975,(UnityEngine_RenderTexture_o *)source_02,
                       (UnityEngine_RenderTexture_o *)source_01,pMVar12);
            UnityEngine_RenderTexture__DiscardContents
                      ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
            UnityStandardAssets_ImageEffects_BloomAndFlares__BlendFlares
                      (__this,(UnityEngine_RenderTexture_o *)source_01,
                       (UnityEngine_RenderTexture_o *)source_00,pMVar12);
            if (source_01 == (UnityEngine_Texture_o *)0x0) goto LAB_04253f55;
          }
          else {
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
            fVar14 = (__this->fields).hollyStretchWidth;
            value.fields.y = 1.0 / (1.0 - fVar14);
            value.fields.x = fVar14;
            value.fields.z = 0.0;
            value.fields.w = 0.0;
            UnityEngine_Material__SetVector(pUVar4,"_threshold",value,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
            fVar14 = (__this->fields).flareColorA.fields.g;
            uVar2 = (__this->fields).lensflareIntensity;
            uVar3 = (__this->fields).lensflareThreshold;
            fVar1 = (float)(__this->fields).lensflareMode;
            value_00.fields.x = (float)uVar2 * fVar14 * fVar1;
            value_00.fields.y = (float)uVar3 * fVar14 * fVar1;
            value_00.fields.z = (__this->fields).flareColorA.fields.r * fVar14 * fVar1;
            value_00.fields.w = fVar14 * fVar14 * fVar1;
            UnityEngine_Material__SetVector(pUVar4,"tintColor",value_00,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit
                      (source_02,(UnityEngine_RenderTexture_o *)source_01,pUVar4,2,(MethodInfo *)0x0
                      );
            UnityEngine_RenderTexture__DiscardContents
                      ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
            UnityEngine_Graphics__Blit
                      (source_01,(UnityEngine_RenderTexture_o *)source_02,
                       (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,3,
                       (MethodInfo *)0x0);
            if (source_01 == (UnityEngine_Texture_o *)0x0) goto LAB_04253f55;
            UnityEngine_RenderTexture__DiscardContents
                      ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
            UnityEngine_Material__SetVector
                      (pUVar4,"offsets",
                       (UnityEngine_Vector4_o)
                       ZEXT416((uint)(((float)(__this->fields).hdr / fVar13) * 0.001953125)),
                       (MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
            UnityEngine_Material__SetFloat
                      (pUVar4,"stretchWidth",(float)(__this->fields).hollywoodFlareBlurIterations,
                       (MethodInfo *)0x0);
            UnityEngine_Graphics__Blit
                      (source_02,(UnityEngine_RenderTexture_o *)source_01,
                       (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,1,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__DiscardContents
                      ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
            fVar14 = (float)(__this->fields).hollywoodFlareBlurIterations;
            UnityEngine_Material__SetFloat(pUVar4,"stretchWidth",fVar14 + fVar14,(MethodInfo *)0x0);
            UnityEngine_Graphics__Blit
                      (source_01,(UnityEngine_RenderTexture_o *)source_02,
                       (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,1,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__DiscardContents
                      ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
            UnityEngine_Material__SetFloat
                      (pUVar4,"stretchWidth",
                       (float)(__this->fields).hollywoodFlareBlurIterations * 4.0,(MethodInfo *)0x0)
            ;
            pMVar12 = (MethodInfo *)0x1;
            UnityEngine_Graphics__Blit
                      (source_02,(UnityEngine_RenderTexture_o *)source_01,
                       (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,1,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__DiscardContents
                      ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
            iVar8 = (__this->fields).bloomBlurIterations;
            if ((__this->fields).lensflares == 1) {
              if (0 < iVar8) {
                iVar8 = 0;
                do {
                  pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                  if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
                  fVar14 = (float)(__this->fields).hollywoodFlareBlurIterations;
                  UnityEngine_Material__SetVector
                            (pUVar4,"offsets",
                             (UnityEngine_Vector4_o)
                             ZEXT416((uint)(((fVar14 + fVar14) / fVar13) * 0.001953125)),
                             (MethodInfo *)0x0);
                  pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  UnityEngine_Graphics__Blit
                            (source_01,(UnityEngine_RenderTexture_o *)source_02,pUVar4,
                             (MethodInfo *)0x0);
                  UnityEngine_RenderTexture__DiscardContents
                            ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
                  pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                  if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
                  fVar14 = (float)(__this->fields).hollywoodFlareBlurIterations;
                  UnityEngine_Material__SetVector
                            (pUVar4,"offsets",
                             (UnityEngine_Vector4_o)
                             ZEXT416((uint)(((fVar14 + fVar14) / fVar13) * 0.001953125)),
                             (MethodInfo *)0x0);
                  UnityEngine_Graphics__Blit
                            (source_02,(UnityEngine_RenderTexture_o *)source_01,
                             (UnityEngine_Material_o *)(__this->fields).separableBlurShader,
                             (MethodInfo *)0x0);
                  UnityEngine_RenderTexture__DiscardContents
                            ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
                  iVar8 = iVar8 + 1;
                } while (iVar8 < (__this->fields).bloomBlurIterations);
              }
            }
            else {
              if (0 < iVar8) {
                iVar8 = 0;
                do {
                  pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                  if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
                  fVar14 = (float)(__this->fields).hollywoodFlareBlurIterations;
                  UnityEngine_Material__SetVector
                            (pUVar4,"offsets",
                             (UnityEngine_Vector4_o)
                             ZEXT416((uint)(((fVar14 + fVar14) / fVar13) * 0.001953125)),
                             (MethodInfo *)0x0);
                  pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  UnityEngine_Graphics__Blit
                            (source_01,(UnityEngine_RenderTexture_o *)source_02,pUVar4,
                             (MethodInfo *)0x0);
                  UnityEngine_RenderTexture__DiscardContents
                            ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
                  pUVar4 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                  if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
                  fVar14 = (float)(__this->fields).hollywoodFlareBlurIterations;
                  UnityEngine_Material__SetVector
                            (pUVar4,"offsets",
                             (UnityEngine_Vector4_o)
                             ZEXT416((uint)(((fVar14 + fVar14) / fVar13) * 0.001953125)),
                             (MethodInfo *)0x0);
                  pMVar12 = (MethodInfo *)0x0;
                  UnityEngine_Graphics__Blit
                            (source_02,(UnityEngine_RenderTexture_o *)source_01,
                             (UnityEngine_Material_o *)(__this->fields).separableBlurShader,
                             (MethodInfo *)0x0);
                  UnityEngine_RenderTexture__DiscardContents
                            ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
                  iVar8 = iVar8 + 1;
                } while (iVar8 < (__this->fields).bloomBlurIterations);
              }
              UnityStandardAssets_ImageEffects_BloomAndFlares__Vignette
                        (__this,1.0,(UnityEngine_RenderTexture_o *)source_01,
                         (UnityEngine_RenderTexture_o *)source_02,pMVar12);
              UnityEngine_RenderTexture__DiscardContents
                        ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
              UnityStandardAssets_ImageEffects_BloomAndFlares__BlendFlares
                        (__this,(UnityEngine_RenderTexture_o *)source_02,
                         (UnityEngine_RenderTexture_o *)source_01,pMVar12);
              UnityEngine_RenderTexture__DiscardContents
                        ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
            }
            if (DAT_0570522c == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Graphics);
              il2cpp_init_method_metadata(&"_Intensity");
              DAT_0570522c = '\x01';
            }
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).addBrightStuffOneOneShader;
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04253f55;
            UnityEngine_Material__SetFloat(pUVar4,"_Intensity",1.0,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).addBrightStuffOneOneShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit
                      (source_01,(UnityEngine_RenderTexture_o *)source_00,pUVar4,(MethodInfo *)0x0);
          }
          UnityEngine_RenderTexture__DiscardContents
                    ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
        }
        pUVar4 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
        if (pUVar4 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat
                    (pUVar4,"_Intensity",(__this->fields).sepBlurSpread,(MethodInfo *)0x0);
          pUVar4 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
          if (pUVar4 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetTexture
                      (pUVar4,"_ColorBuffer",(UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit(source_00,destination,pUVar4,iVar6,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_04253f55:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.BloomAndFlares$$AddTo
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__AddTo (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, float intensity_, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x42543b0

void UnityStandardAssets_ImageEffects_BloomAndFlares__AddTo
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,float intensity_,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  
  if (DAT_0570522c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_Intensity");
    DAT_0570522c = '\x01';
  }
  pUVar1 = (UnityEngine_Material_o *)(__this->fields).addBrightStuffOneOneShader;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(pUVar1,"_Intensity",intensity_,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).addBrightStuffOneOneShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,pUVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.BloomAndFlares$$BlendFlares
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__BlendFlares (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4254220

void UnityStandardAssets_ImageEffects_BloomAndFlares__BlendFlares
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

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
  
  if (DAT_0570522d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"colorD");
    il2cpp_init_method_metadata(&"colorB");
    il2cpp_init_method_metadata(&"colorA");
    il2cpp_init_method_metadata(&"colorC");
    DAT_0570522d = '\x01';
  }
  pUVar18 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
  if (pUVar18 != (UnityEngine_Material_o *)0x0) {
    uVar2 = (__this->fields).lensflareIntensity;
    uVar10 = (__this->fields).lensflareThreshold;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.BloomAndFlares$$BrightFilter
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__BrightFilter (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, float thresh, float useAlphaAsMask, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4253fa0

void UnityStandardAssets_ImageEffects_BloomAndFlares__BrightFilter
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,float thresh,
               float useAlphaAsMask,UnityEngine_RenderTexture_o *from,
               UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  float fVar2;
  UnityEngine_Vector4_o value;
  
  if (DAT_0570522e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"useSrcAlphaAsMask");
    il2cpp_init_method_metadata(&"threshold");
    DAT_0570522e = '\x01';
  }
  pUVar1 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
  if ((char)(__this->fields).screenBlendMode == '\0') {
    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_042540ad;
    fVar2 = 1.0 / (1.0 - thresh);
  }
  else {
    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_042540ad;
    fVar2 = 1.0;
  }
  value.fields.y = fVar2;
  value.fields.x = thresh;
  value.fields.z = 0.0;
  value.fields.w = 0.0;
  UnityEngine_Material__SetVector(pUVar1,"threshold",value,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(pUVar1,"useSrcAlphaAsMask",useAlphaAsMask,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,pUVar1,(MethodInfo *)0x0);
    return;
  }
LAB_042540ad:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.BloomAndFlares$$Vignette
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__Vignette (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, float amount, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x42540c0

void UnityStandardAssets_ImageEffects_BloomAndFlares__Vignette
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,float amount,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  UnityEngine_Material_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570522f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_ColorBuffer");
    il2cpp_init_method_metadata(&"vignetteIntensity");
    DAT_0570522f = '\x01';
  }
  exists = *(UnityEngine_Object_o **)&(__this->fields).flareColorD.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).vignetteShader;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar1,"vignetteIntensity",amount,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Material_o *)(__this->fields).vignetteShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture
                (pUVar1,"_ColorBuffer",
                 *(UnityEngine_Texture_o **)&(__this->fields).flareColorD.fields.a,(MethodInfo *)0x0
                );
      pUVar1 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)from,to,pUVar1,3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.BloomAndFlares$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares___ctor (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, const MethodInfo* method);
// 0x4254450

void UnityStandardAssets_ImageEffects_BloomAndFlares___ctor
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  *(undefined4 *)((long)&(__this->fields).createdMaterials + 4) = 1;
  (__this->fields).hdr = 0x3fc00000;
  (__this->fields).doHdr = 0x3f000000;
  (__this->fields).sepBlurSpread = 1.0;
  (__this->fields).useSrcAlphaAsMask = 0.5;
  (__this->fields).bloomIntensity = 2.8026e-45;
  (__this->fields).bloomBlurIterations = 2;
  (__this->fields).lensflares = 1;
  (__this->fields).hollywoodFlareBlurIterations = 0x40600000;
  (__this->fields).lensflareMode = 0x3f800000;
  (__this->fields).hollyStretchWidth = 0.3;
  (__this->fields).lensflareIntensity = 0.4;
  (__this->fields).lensflareThreshold = 0.4;
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


