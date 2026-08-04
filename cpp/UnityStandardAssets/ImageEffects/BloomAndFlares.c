// Type: UnityStandardAssets.ImageEffects.BloomAndFlares
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/BloomAndFlares.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/BloomAndFlares.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.BloomAndFlares$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_BloomAndFlares__CheckResources (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, const MethodInfo* method);
// 0x45782e0

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
                      (UnityEngine_Shader_o *)(__this->fields).addBrightStuffBlendOneOneMaterial,
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
                      (UnityEngine_Shader_o *)(__this->fields).lensFlareMaterial,
                      (UnityEngine_Material_o *)(__this->fields).vignetteShader,in_RCX);
  (__this->fields).vignetteShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).vignetteShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).vignetteMaterial,
                      (UnityEngine_Material_o *)(__this->fields).separableBlurShader,in_RCX);
  (__this->fields).separableBlurShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).separableBlurShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).separableBlurMaterial,
                      (UnityEngine_Material_o *)(__this->fields).addBrightStuffOneOneShader,in_RCX);
  (__this->fields).addBrightStuffOneOneShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).addBrightStuffOneOneShader,pUVar3);
  pUVar3 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).screenBlend,
                      (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,in_RCX);
  (__this->fields).hollywoodFlaresShader = (UnityEngine_Shader_o *)pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).hollywoodFlaresShader,pUVar3);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).hollywoodFlaresMaterial,
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


// UnityStandardAssets.ImageEffects.BloomAndFlares$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__OnRenderImage (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x45784c0

void UnityStandardAssets_ImageEffects_BloomAndFlares__OnRenderImage
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Object_o *exists;
  char cVar4;
  int32_t iVar5;
  int iVar6;
  int iVar7;
  bool_conflict bVar8;
  ulong uVar9;
  UnityEngine_Texture_o *source_00;
  UnityStandardAssets_ImageEffects_BloomAndFlares_o *pUVar10;
  UnityStandardAssets_ImageEffects_BloomAndFlares_o *source_01;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *pMVar11;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_RenderTexture_o *dest_00;
  UnityEngine_RenderTexture_o *dest_01;
  UnityEngine_RenderTexture_o *dest_02;
  UnityStandardAssets_ImageEffects_BloomAndFlares_o *source_02;
  UnityStandardAssets_ImageEffects_BloomAndFlares_o *pUVar12;
  System_String_o *source_03;
  System_String_o *source_04;
  UnityEngine_Texture_c *pUVar13;
  long lVar14;
  UnityEngine_MonoBehaviour_o *__this_01;
  int format;
  UnityEngine_Texture_o *unaff_R12;
  System_String_o **unaff_R14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  UnityEngine_Vector4_o value_04;
  UnityEngine_Vector4_o value_05;
  float fStack_6c;
  UnityStandardAssets_ImageEffects_BloomAndFlares_o *pUStack_68;
  undefined1 auStack_58 [16];
  
  if (g_data_057af0a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    il2cpp_runtime_helper_023445d0(&"_threshold");
    il2cpp_runtime_helper_023445d0(&"tintColor");
    il2cpp_runtime_helper_023445d0(&"stretchWidth");
    il2cpp_runtime_helper_023445d0(&"offsets");
    g_data_057af0a7 = '\x01';
  }
  pUVar12 = __this;
  cVar4 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)();
  if (cVar4 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  *(undefined1 *)&(__this->fields).screenBlendMode = 0;
  iVar6 = (__this->fields).tweakMode;
  if (iVar6 == 0) {
    if (source != (UnityEngine_RenderTexture_o *)0x0) {
      pUVar10 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)source;
      iVar5 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
      if (iVar5 == 2) {
        pUVar12 = __this;
        pUVar10 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
        if (pUVar10 == (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0) goto label_04579055;
        bVar8 = UnityEngine_Camera__get_allowHDR((UnityEngine_Camera_o *)pUVar10,(MethodInfo *)0x0);
        *(char *)&(__this->fields).screenBlendMode = (char)bVar8;
        pUVar12 = pUVar10;
        if ((char)bVar8 != '\0') goto label_045785f7;
      }
      else {
        *(undefined1 *)&(__this->fields).screenBlendMode = 0;
      }
label_04578602:
      cVar4 = '\0';
      pUVar12 = pUVar10;
      goto label_04578604;
    }
label_04579055:
    il2cpp_runtime_helper_022b2c90();
    fVar16 = (float)auStack_58._0_4_;
  }
  else {
    *(bool *)&(__this->fields).screenBlendMode = iVar6 == 1;
    pUVar10 = pUVar12;
    if (iVar6 != 1) goto label_04578602;
label_045785f7:
    cVar4 = (char)(__this->fields).supportHDRTextures;
label_04578604:
    *(char *)&(__this->fields).screenBlendMode = cVar4;
    iVar5 = 1;
    if (cVar4 == '\0') {
      iVar5 = *(int32_t *)((long)&(__this->fields).createdMaterials + 4);
    }
    if (source == (UnityEngine_RenderTexture_o *)0x0) goto label_04579055;
    format = (uint)(cVar4 == '\0') * 5 + 2;
    iVar6 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    uVar9 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary_4de1d50
                          (iVar6 / 2,(int)(((uint)(uVar9 >> 0x1f) & 1) + (int)uVar9) >> 1,0,format,
                           (MethodInfo *)0x0);
    auStack_58._0_8_ = source_00;
    iVar6 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar7 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    pUVar10 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)
              UnityEngine_RenderTexture__GetTemporary_4de1d50
                        ((int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2,
                         (int)(((uint)(iVar7 >> 0x1f) >> 0x1e) + iVar7) >> 2,0,format,(MethodInfo *)0x0);
    iVar6 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar7 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    source_01 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)
                UnityEngine_RenderTexture__GetTemporary_4de1d50
                          ((int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2,
                           (int)(((uint)(iVar7 >> 0x1f) >> 0x1e) + iVar7) >> 2,0,format,(MethodInfo *)0x0);
    iVar6 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar7 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    unaff_R12 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary_4de1d50
                          ((int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2,
                           (int)(((uint)(iVar7 >> 0x1f) >> 0x1e) + iVar7) >> 2,0,format,(MethodInfo *)0x0);
    fStack_6c = (float)(*(source->klass->vtable)._5_get_width.methodPtr)
                                 (source,(source->klass->vtable)._5_get_width.method);
    iVar6 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    pUStack_68 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)CONCAT44(pUStack_68._4_4_,iVar6);
    pUVar3 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,pUVar3,2,
               (MethodInfo *)0x0);
    pMVar11 = (MethodInfo *)0x2;
    UnityEngine_Graphics__Blit_4dc2a60
              (source_00,(UnityEngine_RenderTexture_o *)pUVar10,
               (UnityEngine_Material_o *)(__this->fields).screenBlendShader,2,(MethodInfo *)0x0);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
    pUVar12 = __this;
    UnityStandardAssets_ImageEffects_BloomAndFlares__BrightFilter
              (__this,(__this->fields).useSrcAlphaAsMask,(float)(__this->fields).doHdr,
               (UnityEngine_RenderTexture_o *)pUVar10,(UnityEngine_RenderTexture_o *)source_01,pMVar11);
    unaff_R14 = (System_String_o **)pUVar10;
    if (pUVar10 == (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0) goto label_04579055;
    auStack_58._0_4_ = (float)iVar6;
    UnityEngine_RenderTexture__DiscardContents_4ddf360
              ((UnityEngine_RenderTexture_o *)pUVar10,(MethodInfo *)0x0);
    if ((int)(__this->fields).bloomIntensity < 1) {
      (__this->fields).bloomIntensity = 1.4013e-45;
    }
    fStack_6c = (float)(int)fStack_6c / (float)iVar6;
    pUStack_68 = pUVar10;
    if (unaff_R12 != (UnityEngine_Texture_o *)0x0) {
      unaff_R14 = (System_String_o **)0x0;
      do {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
        pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
        if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04579055;
        iVar6 = (int)unaff_R14;
        fVar16 = ((float)iVar6 * 0.5 + 1.0) * (float)(__this->fields).hdr;
        auStack_58 = ZEXT416((uint)fVar16);
        UnityEngine_Material__SetVector
                  (pUVar3,"offsets",(UnityEngine_Vector4_o)(ZEXT416((uint)(fVar16 * 0.001953125)) << 0x20),
                   (MethodInfo *)0x0);
        source_02 = pUVar10;
        if (iVar6 == 0) {
          source_02 = source_01;
        }
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar12 = source_02;
        UnityEngine_Graphics__Blit_4dc2ad0
                  ((UnityEngine_Texture_o *)source_02,(UnityEngine_RenderTexture_o *)unaff_R12,pUVar3,
                   (MethodInfo *)0x0);
        if (source_02 == (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0) goto label_04579055;
        UnityEngine_RenderTexture__DiscardContents_4ddf360
                  ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
        pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
        if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04579055;
        UnityEngine_Material__SetVector
                  (pUVar3,"offsets",
                   (UnityEngine_Vector4_o)ZEXT416((uint)((fVar16 / fStack_6c) * 0.001953125)),
                   (MethodInfo *)0x0);
        pMVar11 = (MethodInfo *)0x0;
        UnityEngine_Graphics__Blit_4dc2ad0
                  (unaff_R12,(UnityEngine_RenderTexture_o *)pUVar10,
                   (UnityEngine_Material_o *)(__this->fields).separableBlurShader,(MethodInfo *)0x0);
        UnityEngine_RenderTexture__DiscardContents_4ddf360
                  ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
        unaff_R14 = (System_String_o **)(ulong)(iVar6 + 1U);
      } while ((int)(iVar6 + 1U) < (int)(__this->fields).bloomIntensity);
      unaff_R14 = (System_String_o **)source_01;
      if (*(char *)&(__this->fields).bloomThreshold == '\0') {
label_04578f06:
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
        pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat(pUVar3,"_Intensity",(__this->fields).sepBlurSpread,(MethodInfo *)0x0)
          ;
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
          pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
          unaff_R14 = (System_String_o **)destination;
          if (pUVar3 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetTexture
                      (pUVar3,"_ColorBuffer",(UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
            pUVar3 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)pUVar10,destination,pUVar3,iVar5,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)pUVar10,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if ((__this->fields).lensflares == 0) {
        UnityStandardAssets_ImageEffects_BloomAndFlares__BrightFilter
                  (__this,(__this->fields).hollyStretchWidth,0.0,(UnityEngine_RenderTexture_o *)pUVar10,
                   (UnityEngine_RenderTexture_o *)unaff_R12,pMVar11);
        UnityEngine_RenderTexture__DiscardContents_4ddf360
                  ((UnityEngine_RenderTexture_o *)pUVar10,(MethodInfo *)0x0);
        UnityStandardAssets_ImageEffects_BloomAndFlares__Vignette
                  (__this,0.975,(UnityEngine_RenderTexture_o *)unaff_R12,
                   (UnityEngine_RenderTexture_o *)source_01,pMVar11);
        UnityEngine_RenderTexture__DiscardContents_4ddf360
                  ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
        pUVar12 = __this;
        UnityStandardAssets_ImageEffects_BloomAndFlares__BlendFlares
                  (__this,(UnityEngine_RenderTexture_o *)source_01,(UnityEngine_RenderTexture_o *)pUVar10,
                   pMVar11);
        if (source_01 != (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0) {
label_04578efc:
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
          goto label_04578f06;
        }
      }
      else {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
        pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          fVar16 = (__this->fields).hollyStretchWidth;
          value.fields.y = 1.0 / (1.0 - fVar16);
          value.fields.x = fVar16;
          value.fields.z = 0.0;
          value.fields.w = 0.0;
          UnityEngine_Material__SetVector(pUVar3,"_threshold",value,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
          pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
          if (pUVar3 != (UnityEngine_Material_o *)0x0) {
            fVar16 = (__this->fields).flareColorA.fields.g;
            uVar1 = (__this->fields).lensflareIntensity;
            uVar2 = (__this->fields).lensflareThreshold;
            fVar15 = (float)(__this->fields).lensflareMode;
            value_00.fields.x = (float)uVar1 * fVar16 * fVar15;
            value_00.fields.y = (float)uVar2 * fVar16 * fVar15;
            value_00.fields.z = (__this->fields).flareColorA.fields.r * fVar16 * fVar15;
            value_00.fields.w = fVar16 * fVar16 * fVar15;
            UnityEngine_Material__SetVector(pUVar3,"tintColor",value_00,(MethodInfo *)0x0);
            pUVar3 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2a60
                      (unaff_R12,(UnityEngine_RenderTexture_o *)source_01,pUVar3,2,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__DiscardContents_4ddf360
                      ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
            pUVar12 = source_01;
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)source_01,(UnityEngine_RenderTexture_o *)unaff_R12,
                       (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,3,(MethodInfo *)0x0);
            if (source_01 != (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0) {
              UnityEngine_RenderTexture__DiscardContents_4ddf360
                        ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
              pUVar3 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
              pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
              if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetVector
                          (pUVar3,"offsets",
                           (UnityEngine_Vector4_o)
                           ZEXT416((uint)(((float)(__this->fields).hdr / fStack_6c) * 0.001953125)),
                           (MethodInfo *)0x0);
                pUVar3 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
                pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
                if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                  UnityEngine_Material__SetFloat
                            (pUVar3,"stretchWidth",(float)(__this->fields).hollywoodFlareBlurIterations,
                             (MethodInfo *)0x0);
                  UnityEngine_Graphics__Blit_4dc2a60
                            (unaff_R12,(UnityEngine_RenderTexture_o *)source_01,
                             (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,1,
                             (MethodInfo *)0x0);
                  UnityEngine_RenderTexture__DiscardContents_4ddf360
                            ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
                  pUVar3 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
                  pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
                  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                    fVar16 = (float)(__this->fields).hollywoodFlareBlurIterations;
                    UnityEngine_Material__SetFloat(pUVar3,"stretchWidth",fVar16 + fVar16,(MethodInfo *)0x0);
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)source_01,(UnityEngine_RenderTexture_o *)unaff_R12,
                               (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,1,
                               (MethodInfo *)0x0);
                    UnityEngine_RenderTexture__DiscardContents_4ddf360
                              ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
                    pUVar3 = (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader;
                    pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
                    if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__SetFloat
                                (pUVar3,"stretchWidth",
                                 (float)(__this->fields).hollywoodFlareBlurIterations * 4.0,(MethodInfo *)0x0)
                      ;
                      pMVar11 = (MethodInfo *)0x1;
                      UnityEngine_Graphics__Blit_4dc2a60
                                (unaff_R12,(UnityEngine_RenderTexture_o *)source_01,
                                 (UnityEngine_Material_o *)(__this->fields).hollywoodFlaresShader,1,
                                 (MethodInfo *)0x0);
                      UnityEngine_RenderTexture__DiscardContents_4ddf360
                                ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
                      iVar6 = (__this->fields).bloomBlurIterations;
                      if ((__this->fields).lensflares == 1) {
                        if (0 < iVar6) {
                          iVar6 = 0;
                          do {
                            pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                            pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
                            if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04579055;
                            fVar16 = (float)(__this->fields).hollywoodFlareBlurIterations;
                            UnityEngine_Material__SetVector
                                      (pUVar3,"offsets",
                                       (UnityEngine_Vector4_o)
                                       ZEXT416((uint)(((fVar16 + fVar16) / fStack_6c) * 0.001953125)),
                                       (MethodInfo *)0x0);
                            pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            UnityEngine_Graphics__Blit_4dc2ad0
                                      ((UnityEngine_Texture_o *)source_01,
                                       (UnityEngine_RenderTexture_o *)unaff_R12,pUVar3,(MethodInfo *)0x0);
                            UnityEngine_RenderTexture__DiscardContents_4ddf360
                                      ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
                            pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                            pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
                            if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04579055;
                            fVar16 = (float)(__this->fields).hollywoodFlareBlurIterations;
                            UnityEngine_Material__SetVector
                                      (pUVar3,"offsets",
                                       (UnityEngine_Vector4_o)
                                       ZEXT416((uint)(((fVar16 + fVar16) / fStack_6c) * 0.001953125)),
                                       (MethodInfo *)0x0);
                            UnityEngine_Graphics__Blit_4dc2ad0
                                      (unaff_R12,(UnityEngine_RenderTexture_o *)source_01,
                                       (UnityEngine_Material_o *)(__this->fields).separableBlurShader,
                                       (MethodInfo *)0x0);
                            UnityEngine_RenderTexture__DiscardContents_4ddf360
                                      ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < (__this->fields).bloomBlurIterations);
                        }
                      }
                      else {
                        if (0 < iVar6) {
                          iVar6 = 0;
                          do {
                            pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                            pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
                            if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04579055;
                            fVar16 = (float)(__this->fields).hollywoodFlareBlurIterations;
                            UnityEngine_Material__SetVector
                                      (pUVar3,"offsets",
                                       (UnityEngine_Vector4_o)
                                       ZEXT416((uint)(((fVar16 + fVar16) / fStack_6c) * 0.001953125)),
                                       (MethodInfo *)0x0);
                            pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            UnityEngine_Graphics__Blit_4dc2ad0
                                      ((UnityEngine_Texture_o *)source_01,
                                       (UnityEngine_RenderTexture_o *)unaff_R12,pUVar3,(MethodInfo *)0x0);
                            UnityEngine_RenderTexture__DiscardContents_4ddf360
                                      ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
                            pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
                            pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
                            if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04579055;
                            fVar16 = (float)(__this->fields).hollywoodFlareBlurIterations;
                            UnityEngine_Material__SetVector
                                      (pUVar3,"offsets",
                                       (UnityEngine_Vector4_o)
                                       ZEXT416((uint)(((fVar16 + fVar16) / fStack_6c) * 0.001953125)),
                                       (MethodInfo *)0x0);
                            pMVar11 = (MethodInfo *)0x0;
                            UnityEngine_Graphics__Blit_4dc2ad0
                                      (unaff_R12,(UnityEngine_RenderTexture_o *)source_01,
                                       (UnityEngine_Material_o *)(__this->fields).separableBlurShader,
                                       (MethodInfo *)0x0);
                            UnityEngine_RenderTexture__DiscardContents_4ddf360
                                      ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < (__this->fields).bloomBlurIterations);
                        }
                        UnityStandardAssets_ImageEffects_BloomAndFlares__Vignette
                                  (__this,1.0,(UnityEngine_RenderTexture_o *)source_01,
                                   (UnityEngine_RenderTexture_o *)unaff_R12,pMVar11);
                        UnityEngine_RenderTexture__DiscardContents_4ddf360
                                  ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
                        UnityStandardAssets_ImageEffects_BloomAndFlares__BlendFlares
                                  (__this,(UnityEngine_RenderTexture_o *)unaff_R12,
                                   (UnityEngine_RenderTexture_o *)source_01,pMVar11);
                        UnityEngine_RenderTexture__DiscardContents_4ddf360
                                  ((UnityEngine_RenderTexture_o *)unaff_R12,(MethodInfo *)0x0);
                      }
                      if (g_data_057af0a8 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
                        il2cpp_runtime_helper_023445d0(&"_Intensity");
                        g_data_057af0a8 = '\x01';
                      }
                      pUVar3 = (UnityEngine_Material_o *)(__this->fields).addBrightStuffOneOneShader;
                      pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
                      if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                        UnityEngine_Material__SetFloat(pUVar3,"_Intensity",1.0,(MethodInfo *)0x0);
                        pUVar3 = (UnityEngine_Material_o *)(__this->fields).addBrightStuffOneOneShader;
                        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        UnityEngine_Graphics__Blit_4dc2ad0
                                  ((UnityEngine_Texture_o *)source_01,(UnityEngine_RenderTexture_o *)pUVar10,
                                   pUVar3,(MethodInfo *)0x0);
                        goto label_04578efc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_04579055;
    }
    pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
    pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0;
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_04579055;
    fVar16 = (float)(__this->fields).hdr;
    auStack_58 = ZEXT416((uint)fVar16);
    unaff_R14 = &"offsets";
    UnityEngine_Material__SetVector
              (pUVar3,"offsets",(UnityEngine_Vector4_o)(ZEXT416((uint)(fVar16 * 0.001953125)) << 0x20),
               (MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Material_o *)(__this->fields).separableBlurShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar12 = source_01;
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)source_01,(UnityEngine_RenderTexture_o *)0x0,pUVar3,(MethodInfo *)0x0)
    ;
    unaff_R14 = unaff_R14;
    if (source_01 == (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0) goto label_04579055;
    UnityEngine_RenderTexture__DiscardContents_4ddf360
              ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
    pUVar12 = (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)(__this->fields).separableBlurShader;
    unaff_R14 = unaff_R14;
    if (pUVar12 == (UnityStandardAssets_ImageEffects_BloomAndFlares_o *)0x0) goto label_04579055;
  }
  auStack_58._0_4_ = fVar16;
  fVar16 = 0.0;
  UnityEngine_Material__SetVector
            ((UnityEngine_Material_o *)pUVar12,
             (System_String_o *)((UnityStandardAssets_ImageEffects_BloomAndFlares_o *)unaff_R14)->klass,
             (UnityEngine_Vector4_o)ZEXT416((uint)(((float)auStack_58._0_4_ / fStack_6c) * 0.001953125)),
             (MethodInfo *)0x0);
  UnityEngine_Graphics__Blit_4dc2ad0
            (unaff_R12,(UnityEngine_RenderTexture_o *)pUStack_68,
             (UnityEngine_Material_o *)(__this->fields).separableBlurShader,(MethodInfo *)0x0);
  value_01.fields.x = (float)il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUStack_68;
  if (g_data_057af0aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"useSrcAlphaAsMask");
    il2cpp_runtime_helper_023445d0(&"threshold");
    g_data_057af0aa = '\x01';
  }
  pUVar13 = unaff_R12[0xc].klass;
  if (*(char *)((long)&unaff_R12[2].monitor + 4) == '\0') {
    if (pUVar13 == (UnityEngine_Texture_c *)0x0) goto label_045791ad;
    fVar15 = 1.0 / (1.0 - value_01.fields.x);
  }
  else {
    if (pUVar13 == (UnityEngine_Texture_c *)0x0) goto label_045791ad;
    fVar15 = 1.0;
  }
  value_01.fields.y = fVar15;
  value_01.fields.z = 0.0;
  value_01.fields.w = 0.0;
  pUVar12 = "threshold";
  UnityEngine_Material__SetVector
            ((UnityEngine_Material_o *)pUVar13,(System_String_o *)"threshold",value_01,(MethodInfo *)0x0);
  pUVar13 = (UnityEngine_Texture_c *)0x0;
  if (unaff_R12[0xc].klass != (UnityEngine_Texture_c *)0x0) {
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)unaff_R12[0xc].klass,"useSrcAlphaAsMask",fVar16,(MethodInfo *)0x0);
    pUVar13 = unaff_R12[0xc].klass;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2ad0
              ((UnityEngine_Texture_o *)pUStack_68,dest,(UnityEngine_Material_o *)pUVar13,(MethodInfo *)0x0);
    return;
  }
label_045791ad:
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    il2cpp_runtime_helper_023445d0(&"vignetteIntensity");
    g_data_057af0ab = '\x01';
  }
  exists = (UnityEngine_Object_o *)(pUVar13->_1).interfaceOffsets;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source_03 = (System_String_o *)0x0;
  bVar8 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar3 = (pUVar13->_2).unity_user_data;
    if (pUVar3 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar3,"vignetteIntensity",fVar16,(MethodInfo *)0x0);
      pUVar3 = (pUVar13->_2).unity_user_data;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)pUVar12,dest_00,pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar3 = *(UnityEngine_Material_o **)&(pUVar13->_2).element_size;
    if (pUVar3 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture
                (pUVar3,"_ColorBuffer",(UnityEngine_Texture_o *)(pUVar13->_1).interfaceOffsets,(MethodInfo *)0x0
                );
      pUVar3 = *(UnityEngine_Material_o **)&(pUVar13->_2).element_size;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)pUVar12,dest_00,pUVar3,3,(MethodInfo *)0x0);
      return;
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  source_04 = source_03;
  if (g_data_057af0a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"colorD");
    il2cpp_runtime_helper_023445d0(&"colorB");
    il2cpp_runtime_helper_023445d0(&"colorA");
    il2cpp_runtime_helper_023445d0(&"colorC");
    g_data_057af0a9 = '\x01';
  }
  if (*(UnityEngine_Material_o **)(lVar14 + 0xc0) != (UnityEngine_Material_o *)0x0) {
    fVar16 = *(float *)(lVar14 + 100);
    value_02.fields.x = (float)*(undefined8 *)(lVar14 + 0x6c) * fVar16;
    value_02.fields.y = (float)((ulong)*(undefined8 *)(lVar14 + 0x6c) >> 0x20) * fVar16;
    value_02.fields.z = (float)*(undefined8 *)(lVar14 + 0x74) * fVar16;
    value_02.fields.w = (float)((ulong)*(undefined8 *)(lVar14 + 0x74) >> 0x20) * fVar16;
    source_04 = "colorA";
    UnityEngine_Material__SetVector
              (*(UnityEngine_Material_o **)(lVar14 + 0xc0),"colorA",value_02,(MethodInfo *)0x0);
    if (*(UnityEngine_Material_o **)(lVar14 + 0xc0) != (UnityEngine_Material_o *)0x0) {
      fVar16 = *(float *)(lVar14 + 100);
      value_03.fields.x = (float)*(undefined8 *)(lVar14 + 0x7c) * fVar16;
      value_03.fields.y = (float)((ulong)*(undefined8 *)(lVar14 + 0x7c) >> 0x20) * fVar16;
      value_03.fields.z = (float)*(undefined8 *)(lVar14 + 0x84) * fVar16;
      value_03.fields.w = (float)((ulong)*(undefined8 *)(lVar14 + 0x84) >> 0x20) * fVar16;
      source_04 = "colorB";
      UnityEngine_Material__SetVector
                (*(UnityEngine_Material_o **)(lVar14 + 0xc0),"colorB",value_03,(MethodInfo *)0x0);
      if (*(UnityEngine_Material_o **)(lVar14 + 0xc0) != (UnityEngine_Material_o *)0x0) {
        fVar16 = *(float *)(lVar14 + 100);
        value_04.fields.x = (float)*(undefined8 *)(lVar14 + 0x8c) * fVar16;
        value_04.fields.y = (float)((ulong)*(undefined8 *)(lVar14 + 0x8c) >> 0x20) * fVar16;
        value_04.fields.z = (float)*(undefined8 *)(lVar14 + 0x94) * fVar16;
        value_04.fields.w = (float)((ulong)*(undefined8 *)(lVar14 + 0x94) >> 0x20) * fVar16;
        source_04 = "colorC";
        UnityEngine_Material__SetVector
                  (*(UnityEngine_Material_o **)(lVar14 + 0xc0),"colorC",value_04,(MethodInfo *)0x0);
        if (*(UnityEngine_Material_o **)(lVar14 + 0xc0) != (UnityEngine_Material_o *)0x0) {
          fVar16 = *(float *)(lVar14 + 100);
          value_05.fields.x = (float)*(undefined8 *)(lVar14 + 0x9c) * fVar16;
          value_05.fields.y = (float)((ulong)*(undefined8 *)(lVar14 + 0x9c) >> 0x20) * fVar16;
          value_05.fields.z = (float)*(undefined8 *)(lVar14 + 0xa4) * fVar16;
          value_05.fields.w = (float)((ulong)*(undefined8 *)(lVar14 + 0xa4) >> 0x20) * fVar16;
          UnityEngine_Material__SetVector
                    (*(UnityEngine_Material_o **)(lVar14 + 0xc0),"colorD",value_05,(MethodInfo *)0x0);
          pUVar3 = *(UnityEngine_Material_o **)(lVar14 + 0xc0);
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__Blit_4dc2ad0
                    ((UnityEngine_Texture_o *)source_03,dest_01,pUVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  lVar14 = 0;
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    g_data_057af0a8 = '\x01';
  }
  __this_01 = *(UnityEngine_MonoBehaviour_o **)(lVar14 + 0xf0);
  if (__this_01 == (UnityEngine_MonoBehaviour_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)((long)&__this_01[1].fields.m_CachedPtr + 4) = 1;
    __this_01[2].klass = (UnityEngine_MonoBehaviour_c *)0x3f0000003fc00000;
    __this_01[2].monitor = (void *)0x3f0000003f800000;
    *(undefined4 *)&__this_01[2].fields.m_CachedPtr = 2;
    __this_01[2].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)0x100000002;
    __this_01[3].klass = (UnityEngine_MonoBehaviour_c *)0x3f80000040600000;
    __this_01[3].monitor = (void *)0x3ecccccd3e99999a;
    __this_01[3].fields.m_CachedPtr = 0x3f4ccccd3ecccccd;
    __this_01[3].fields.m_CancellationTokenSource =
         (System_Threading_CancellationTokenSource_o *)0x3ecccccd3f400000;
    __this_01[4].klass = (UnityEngine_MonoBehaviour_c *)0x3f4ccccd3f4ccccd;
    __this_01[4].monitor = (void *)0x3f4ccccd3f400000;
    *(undefined4 *)&__this_01[4].fields.m_CachedPtr = 0x3ecccccd;
    *(undefined4 *)((long)&__this_01[4].fields.m_CachedPtr + 4) = 0x3f4ccccd;
    *(undefined4 *)&__this_01[4].fields.m_CancellationTokenSource = 0x3f400000;
    *(undefined4 *)((long)&__this_01[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd;
    __this_01[5].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd;
    *(undefined4 *)&__this_01[5].monitor = 0x3f400000;
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
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)__this_01,"_Intensity",fVar16,(MethodInfo *)0x0);
  pUVar3 = *(UnityEngine_Material_o **)(lVar14 + 0xf0);
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source_04,dest_02,pUVar3,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.BloomAndFlares$$AddTo
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__AddTo (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, float intensity_, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x45794b0

void UnityStandardAssets_ImageEffects_BloomAndFlares__AddTo
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,float intensity_,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Material_o *mat;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057af0a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    g_data_057af0a8 = '\x01';
  }
  __this_01 = (UnityEngine_MonoBehaviour_o *)(__this->fields).addBrightStuffOneOneShader;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)__this_01,"_Intensity",intensity_,(MethodInfo *)0x0);
    mat = (UnityEngine_Material_o *)(__this->fields).addBrightStuffOneOneShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)from,to,mat,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)&__this_01[1].fields.m_CachedPtr + 4) = 1;
  __this_01[2].klass = (UnityEngine_MonoBehaviour_c *)0x3f0000003fc00000;
  __this_01[2].monitor = (void *)0x3f0000003f800000;
  *(undefined4 *)&__this_01[2].fields.m_CachedPtr = 2;
  __this_01[2].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)0x100000002;
  __this_01[3].klass = (UnityEngine_MonoBehaviour_c *)0x3f80000040600000;
  __this_01[3].monitor = (void *)0x3ecccccd3e99999a;
  __this_01[3].fields.m_CachedPtr = 0x3f4ccccd3ecccccd;
  __this_01[3].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3ecccccd3f400000;
  __this_01[4].klass = (UnityEngine_MonoBehaviour_c *)0x3f4ccccd3f4ccccd;
  __this_01[4].monitor = (void *)0x3f4ccccd3f400000;
  *(undefined4 *)&__this_01[4].fields.m_CachedPtr = 0x3ecccccd;
  *(undefined4 *)((long)&__this_01[4].fields.m_CachedPtr + 4) = 0x3f4ccccd;
  *(undefined4 *)&__this_01[4].fields.m_CancellationTokenSource = 0x3f400000;
  *(undefined4 *)((long)&__this_01[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd;
  __this_01[5].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd;
  *(undefined4 *)&__this_01[5].monitor = 0x3f400000;
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


// UnityStandardAssets.ImageEffects.BloomAndFlares$$BlendFlares
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__BlendFlares (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x4579320

void UnityStandardAssets_ImageEffects_BloomAndFlares__BlendFlares
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,UnityEngine_RenderTexture_o *from,
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
  UnityEngine_RenderTexture_o *dest;
  System_String_o *source;
  long lVar18;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar19;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  
  source = (System_String_o *)from;
  if (g_data_057af0a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"colorD");
    il2cpp_runtime_helper_023445d0(&"colorB");
    il2cpp_runtime_helper_023445d0(&"colorA");
    il2cpp_runtime_helper_023445d0(&"colorC");
    g_data_057af0a9 = '\x01';
  }
  pUVar17 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
  if (pUVar17 != (UnityEngine_Material_o *)0x0) {
    uVar1 = (__this->fields).lensflareIntensity;
    uVar9 = (__this->fields).lensflareThreshold;
    fVar19 = (float)(__this->fields).lensflareMode;
    value.fields.x = (float)uVar1 * fVar19;
    value.fields.y = (float)uVar9 * fVar19;
    uVar2 = (__this->fields).flareColorA.fields.r;
    uVar10 = (__this->fields).flareColorA.fields.g;
    value.fields.z = (float)uVar2 * fVar19;
    value.fields.w = (float)uVar10 * fVar19;
    source = "colorA";
    UnityEngine_Material__SetVector(pUVar17,"colorA",value,(MethodInfo *)0x0);
    pUVar17 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
    if (pUVar17 != (UnityEngine_Material_o *)0x0) {
      uVar3 = (__this->fields).flareColorA.fields.b;
      uVar11 = (__this->fields).flareColorA.fields.a;
      fVar19 = (float)(__this->fields).lensflareMode;
      value_00.fields.x = (float)uVar3 * fVar19;
      value_00.fields.y = (float)uVar11 * fVar19;
      uVar4 = (__this->fields).flareColorB.fields.r;
      uVar12 = (__this->fields).flareColorB.fields.g;
      value_00.fields.z = (float)uVar4 * fVar19;
      value_00.fields.w = (float)uVar12 * fVar19;
      source = "colorB";
      UnityEngine_Material__SetVector(pUVar17,"colorB",value_00,(MethodInfo *)0x0);
      pUVar17 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
      if (pUVar17 != (UnityEngine_Material_o *)0x0) {
        uVar5 = (__this->fields).flareColorB.fields.b;
        uVar13 = (__this->fields).flareColorB.fields.a;
        fVar19 = (float)(__this->fields).lensflareMode;
        value_01.fields.x = (float)uVar5 * fVar19;
        value_01.fields.y = (float)uVar13 * fVar19;
        uVar6 = (__this->fields).flareColorC.fields.r;
        uVar14 = (__this->fields).flareColorC.fields.g;
        value_01.fields.z = (float)uVar6 * fVar19;
        value_01.fields.w = (float)uVar14 * fVar19;
        source = "colorC";
        UnityEngine_Material__SetVector(pUVar17,"colorC",value_01,(MethodInfo *)0x0);
        pUVar17 = (UnityEngine_Material_o *)(__this->fields).lensFlareShader;
        if (pUVar17 != (UnityEngine_Material_o *)0x0) {
          uVar7 = (__this->fields).flareColorC.fields.b;
          uVar15 = (__this->fields).flareColorC.fields.a;
          fVar19 = (float)(__this->fields).lensflareMode;
          value_02.fields.x = (float)uVar7 * fVar19;
          value_02.fields.y = (float)uVar15 * fVar19;
          uVar8 = (__this->fields).flareColorD.fields.r;
          uVar16 = (__this->fields).flareColorD.fields.g;
          value_02.fields.z = (float)uVar8 * fVar19;
          value_02.fields.w = (float)uVar16 * fVar19;
          UnityEngine_Material__SetVector(pUVar17,"colorD",value_02,(MethodInfo *)0x0);
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
  lVar18 = 0;
  fVar19 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    g_data_057af0a8 = '\x01';
  }
  __this_01 = *(UnityEngine_MonoBehaviour_o **)(lVar18 + 0xf0);
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)__this_01,"_Intensity",fVar19,(MethodInfo *)0x0);
    pUVar17 = *(UnityEngine_Material_o **)(lVar18 + 0xf0);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source,dest,pUVar17,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)&__this_01[1].fields.m_CachedPtr + 4) = 1;
  __this_01[2].klass = (UnityEngine_MonoBehaviour_c *)0x3f0000003fc00000;
  __this_01[2].monitor = (void *)0x3f0000003f800000;
  *(undefined4 *)&__this_01[2].fields.m_CachedPtr = 2;
  __this_01[2].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)0x100000002;
  __this_01[3].klass = (UnityEngine_MonoBehaviour_c *)0x3f80000040600000;
  __this_01[3].monitor = (void *)0x3ecccccd3e99999a;
  __this_01[3].fields.m_CachedPtr = 0x3f4ccccd3ecccccd;
  __this_01[3].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3ecccccd3f400000;
  __this_01[4].klass = (UnityEngine_MonoBehaviour_c *)0x3f4ccccd3f4ccccd;
  __this_01[4].monitor = (void *)0x3f4ccccd3f400000;
  *(undefined4 *)&__this_01[4].fields.m_CachedPtr = 0x3ecccccd;
  *(undefined4 *)((long)&__this_01[4].fields.m_CachedPtr + 4) = 0x3f4ccccd;
  *(undefined4 *)&__this_01[4].fields.m_CancellationTokenSource = 0x3f400000;
  *(undefined4 *)((long)&__this_01[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd;
  __this_01[5].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd;
  *(undefined4 *)&__this_01[5].monitor = 0x3f400000;
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


// UnityStandardAssets.ImageEffects.BloomAndFlares$$BrightFilter
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__BrightFilter (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, float thresh, float useAlphaAsMask, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x45790a0

void UnityStandardAssets_ImageEffects_BloomAndFlares__BrightFilter
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,float thresh,float useAlphaAsMask,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  UnityEngine_Object_o *exists;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_RenderTexture_o *dest_00;
  UnityEngine_RenderTexture_o *dest_01;
  System_String_o *pSVar3;
  System_String_o *source;
  UnityEngine_Material_o *pUVar4;
  long lVar5;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar6;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  
  pSVar3 = (System_String_o *)from;
  if (g_data_057af0aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"useSrcAlphaAsMask");
    il2cpp_runtime_helper_023445d0(&"threshold");
    g_data_057af0aa = '\x01';
  }
  pUVar4 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
  if ((char)(__this->fields).screenBlendMode == '\0') {
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_045791ad;
    fVar6 = 1.0 / (1.0 - thresh);
  }
  else {
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_045791ad;
    fVar6 = 1.0;
  }
  value.fields.y = fVar6;
  value.fields.x = thresh;
  value.fields.z = 0.0;
  value.fields.w = 0.0;
  pSVar3 = "threshold";
  UnityEngine_Material__SetVector(pUVar4,"threshold",value,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
  pUVar4 = (UnityEngine_Material_o *)0x0;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(pUVar1,"useSrcAlphaAsMask",useAlphaAsMask,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Material_o *)(__this->fields).brightPassFilterShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)from,to,pUVar4,(MethodInfo *)0x0);
    return;
  }
label_045791ad:
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    il2cpp_runtime_helper_023445d0(&"vignetteIntensity");
    g_data_057af0ab = '\x01';
  }
  exists = pUVar4[7].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_String_o *)0x0;
  bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar1 = (UnityEngine_Material_o *)pUVar4[8].fields.m_CachedPtr;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar1,"vignetteIntensity",fVar6,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Material_o *)pUVar4[8].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)pSVar3,dest,pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar1 = (UnityEngine_Material_o *)pUVar4[10].fields.m_CachedPtr;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture(pUVar1,"_ColorBuffer",pUVar4[7].monitor,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Material_o *)pUVar4[10].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)pSVar3,dest,pUVar4,3,(MethodInfo *)0x0);
      return;
    }
  }
  lVar5 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = source;
  if (g_data_057af0a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"colorD");
    il2cpp_runtime_helper_023445d0(&"colorB");
    il2cpp_runtime_helper_023445d0(&"colorA");
    il2cpp_runtime_helper_023445d0(&"colorC");
    g_data_057af0a9 = '\x01';
  }
  if (*(UnityEngine_Material_o **)(lVar5 + 0xc0) != (UnityEngine_Material_o *)0x0) {
    fVar6 = *(float *)(lVar5 + 100);
    value_00.fields.x = (float)*(undefined8 *)(lVar5 + 0x6c) * fVar6;
    value_00.fields.y = (float)((ulong)*(undefined8 *)(lVar5 + 0x6c) >> 0x20) * fVar6;
    value_00.fields.z = (float)*(undefined8 *)(lVar5 + 0x74) * fVar6;
    value_00.fields.w = (float)((ulong)*(undefined8 *)(lVar5 + 0x74) >> 0x20) * fVar6;
    pSVar3 = "colorA";
    UnityEngine_Material__SetVector
              (*(UnityEngine_Material_o **)(lVar5 + 0xc0),"colorA",value_00,(MethodInfo *)0x0);
    if (*(UnityEngine_Material_o **)(lVar5 + 0xc0) != (UnityEngine_Material_o *)0x0) {
      fVar6 = *(float *)(lVar5 + 100);
      value_01.fields.x = (float)*(undefined8 *)(lVar5 + 0x7c) * fVar6;
      value_01.fields.y = (float)((ulong)*(undefined8 *)(lVar5 + 0x7c) >> 0x20) * fVar6;
      value_01.fields.z = (float)*(undefined8 *)(lVar5 + 0x84) * fVar6;
      value_01.fields.w = (float)((ulong)*(undefined8 *)(lVar5 + 0x84) >> 0x20) * fVar6;
      pSVar3 = "colorB";
      UnityEngine_Material__SetVector
                (*(UnityEngine_Material_o **)(lVar5 + 0xc0),"colorB",value_01,(MethodInfo *)0x0);
      if (*(UnityEngine_Material_o **)(lVar5 + 0xc0) != (UnityEngine_Material_o *)0x0) {
        fVar6 = *(float *)(lVar5 + 100);
        value_02.fields.x = (float)*(undefined8 *)(lVar5 + 0x8c) * fVar6;
        value_02.fields.y = (float)((ulong)*(undefined8 *)(lVar5 + 0x8c) >> 0x20) * fVar6;
        value_02.fields.z = (float)*(undefined8 *)(lVar5 + 0x94) * fVar6;
        value_02.fields.w = (float)((ulong)*(undefined8 *)(lVar5 + 0x94) >> 0x20) * fVar6;
        pSVar3 = "colorC";
        UnityEngine_Material__SetVector
                  (*(UnityEngine_Material_o **)(lVar5 + 0xc0),"colorC",value_02,(MethodInfo *)0x0);
        if (*(UnityEngine_Material_o **)(lVar5 + 0xc0) != (UnityEngine_Material_o *)0x0) {
          fVar6 = *(float *)(lVar5 + 100);
          value_03.fields.x = (float)*(undefined8 *)(lVar5 + 0x9c) * fVar6;
          value_03.fields.y = (float)((ulong)*(undefined8 *)(lVar5 + 0x9c) >> 0x20) * fVar6;
          value_03.fields.z = (float)*(undefined8 *)(lVar5 + 0xa4) * fVar6;
          value_03.fields.w = (float)((ulong)*(undefined8 *)(lVar5 + 0xa4) >> 0x20) * fVar6;
          UnityEngine_Material__SetVector
                    (*(UnityEngine_Material_o **)(lVar5 + 0xc0),"colorD",value_03,(MethodInfo *)0x0);
          pUVar4 = *(UnityEngine_Material_o **)(lVar5 + 0xc0);
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source,dest_00,pUVar4,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  lVar5 = 0;
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    g_data_057af0a8 = '\x01';
  }
  __this_01 = *(UnityEngine_MonoBehaviour_o **)(lVar5 + 0xf0);
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)__this_01,"_Intensity",fVar6,(MethodInfo *)0x0);
    pUVar4 = *(UnityEngine_Material_o **)(lVar5 + 0xf0);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)pSVar3,dest_01,pUVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)&__this_01[1].fields.m_CachedPtr + 4) = 1;
  __this_01[2].klass = (UnityEngine_MonoBehaviour_c *)0x3f0000003fc00000;
  __this_01[2].monitor = (void *)0x3f0000003f800000;
  *(undefined4 *)&__this_01[2].fields.m_CachedPtr = 2;
  __this_01[2].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)0x100000002;
  __this_01[3].klass = (UnityEngine_MonoBehaviour_c *)0x3f80000040600000;
  __this_01[3].monitor = (void *)0x3ecccccd3e99999a;
  __this_01[3].fields.m_CachedPtr = 0x3f4ccccd3ecccccd;
  __this_01[3].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3ecccccd3f400000;
  __this_01[4].klass = (UnityEngine_MonoBehaviour_c *)0x3f4ccccd3f4ccccd;
  __this_01[4].monitor = (void *)0x3f4ccccd3f400000;
  *(undefined4 *)&__this_01[4].fields.m_CachedPtr = 0x3ecccccd;
  *(undefined4 *)((long)&__this_01[4].fields.m_CachedPtr + 4) = 0x3f4ccccd;
  *(undefined4 *)&__this_01[4].fields.m_CancellationTokenSource = 0x3f400000;
  *(undefined4 *)((long)&__this_01[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd;
  __this_01[5].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd;
  *(undefined4 *)&__this_01[5].monitor = 0x3f400000;
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


// UnityStandardAssets.ImageEffects.BloomAndFlares$$Vignette
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares__Vignette (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, float amount, UnityEngine_RenderTexture_o* from, UnityEngine_RenderTexture_o* to, const MethodInfo* method);
// 0x45791c0

void UnityStandardAssets_ImageEffects_BloomAndFlares__Vignette
               (UnityStandardAssets_ImageEffects_BloomAndFlares_o *__this,float amount,
               UnityEngine_RenderTexture_o *from,UnityEngine_RenderTexture_o *to,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  UnityEngine_Material_o *pUVar1;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_RenderTexture_o *dest_00;
  System_String_o *source;
  System_String_o *source_00;
  long lVar3;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar4;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  
  if (g_data_057af0ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    il2cpp_runtime_helper_023445d0(&"vignetteIntensity");
    g_data_057af0ab = '\x01';
  }
  exists = *(UnityEngine_Object_o **)&(__this->fields).flareColorD.fields.a;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_String_o *)0x0;
  bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).vignetteShader;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar1,"vignetteIntensity",amount,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Material_o *)(__this->fields).vignetteShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)from,to,pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture
                (pUVar1,"_ColorBuffer",*(UnityEngine_Texture_o **)&(__this->fields).flareColorD.fields.a,
                 (MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Material_o *)(__this->fields).screenBlendShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)from,to,pUVar1,3,(MethodInfo *)0x0);
      return;
    }
  }
  lVar3 = 0;
  il2cpp_runtime_helper_022b2c90();
  source_00 = source;
  if (g_data_057af0a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"colorD");
    il2cpp_runtime_helper_023445d0(&"colorB");
    il2cpp_runtime_helper_023445d0(&"colorA");
    il2cpp_runtime_helper_023445d0(&"colorC");
    g_data_057af0a9 = '\x01';
  }
  if (*(UnityEngine_Material_o **)(lVar3 + 0xc0) != (UnityEngine_Material_o *)0x0) {
    fVar4 = *(float *)(lVar3 + 100);
    value.fields.x = (float)*(undefined8 *)(lVar3 + 0x6c) * fVar4;
    value.fields.y = (float)((ulong)*(undefined8 *)(lVar3 + 0x6c) >> 0x20) * fVar4;
    value.fields.z = (float)*(undefined8 *)(lVar3 + 0x74) * fVar4;
    value.fields.w = (float)((ulong)*(undefined8 *)(lVar3 + 0x74) >> 0x20) * fVar4;
    source_00 = "colorA";
    UnityEngine_Material__SetVector
              (*(UnityEngine_Material_o **)(lVar3 + 0xc0),"colorA",value,(MethodInfo *)0x0);
    if (*(UnityEngine_Material_o **)(lVar3 + 0xc0) != (UnityEngine_Material_o *)0x0) {
      fVar4 = *(float *)(lVar3 + 100);
      value_00.fields.x = (float)*(undefined8 *)(lVar3 + 0x7c) * fVar4;
      value_00.fields.y = (float)((ulong)*(undefined8 *)(lVar3 + 0x7c) >> 0x20) * fVar4;
      value_00.fields.z = (float)*(undefined8 *)(lVar3 + 0x84) * fVar4;
      value_00.fields.w = (float)((ulong)*(undefined8 *)(lVar3 + 0x84) >> 0x20) * fVar4;
      source_00 = "colorB";
      UnityEngine_Material__SetVector
                (*(UnityEngine_Material_o **)(lVar3 + 0xc0),"colorB",value_00,(MethodInfo *)0x0);
      if (*(UnityEngine_Material_o **)(lVar3 + 0xc0) != (UnityEngine_Material_o *)0x0) {
        fVar4 = *(float *)(lVar3 + 100);
        value_01.fields.x = (float)*(undefined8 *)(lVar3 + 0x8c) * fVar4;
        value_01.fields.y = (float)((ulong)*(undefined8 *)(lVar3 + 0x8c) >> 0x20) * fVar4;
        value_01.fields.z = (float)*(undefined8 *)(lVar3 + 0x94) * fVar4;
        value_01.fields.w = (float)((ulong)*(undefined8 *)(lVar3 + 0x94) >> 0x20) * fVar4;
        source_00 = "colorC";
        UnityEngine_Material__SetVector
                  (*(UnityEngine_Material_o **)(lVar3 + 0xc0),"colorC",value_01,(MethodInfo *)0x0);
        if (*(UnityEngine_Material_o **)(lVar3 + 0xc0) != (UnityEngine_Material_o *)0x0) {
          fVar4 = *(float *)(lVar3 + 100);
          value_02.fields.x = (float)*(undefined8 *)(lVar3 + 0x9c) * fVar4;
          value_02.fields.y = (float)((ulong)*(undefined8 *)(lVar3 + 0x9c) >> 0x20) * fVar4;
          value_02.fields.z = (float)*(undefined8 *)(lVar3 + 0xa4) * fVar4;
          value_02.fields.w = (float)((ulong)*(undefined8 *)(lVar3 + 0xa4) >> 0x20) * fVar4;
          UnityEngine_Material__SetVector
                    (*(UnityEngine_Material_o **)(lVar3 + 0xc0),"colorD",value_02,(MethodInfo *)0x0);
          pUVar1 = *(UnityEngine_Material_o **)(lVar3 + 0xc0);
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source,dest,pUVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  lVar3 = 0;
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    g_data_057af0a8 = '\x01';
  }
  __this_01 = *(UnityEngine_MonoBehaviour_o **)(lVar3 + 0xf0);
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)__this_01,"_Intensity",fVar4,(MethodInfo *)0x0);
    pUVar1 = *(UnityEngine_Material_o **)(lVar3 + 0xf0);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source_00,dest_00,pUVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)&__this_01[1].fields.m_CachedPtr + 4) = 1;
  __this_01[2].klass = (UnityEngine_MonoBehaviour_c *)0x3f0000003fc00000;
  __this_01[2].monitor = (void *)0x3f0000003f800000;
  *(undefined4 *)&__this_01[2].fields.m_CachedPtr = 2;
  __this_01[2].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)0x100000002;
  __this_01[3].klass = (UnityEngine_MonoBehaviour_c *)0x3f80000040600000;
  __this_01[3].monitor = (void *)0x3ecccccd3e99999a;
  __this_01[3].fields.m_CachedPtr = 0x3f4ccccd3ecccccd;
  __this_01[3].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3ecccccd3f400000;
  __this_01[4].klass = (UnityEngine_MonoBehaviour_c *)0x3f4ccccd3f4ccccd;
  __this_01[4].monitor = (void *)0x3f4ccccd3f400000;
  *(undefined4 *)&__this_01[4].fields.m_CachedPtr = 0x3ecccccd;
  *(undefined4 *)((long)&__this_01[4].fields.m_CachedPtr + 4) = 0x3f4ccccd;
  *(undefined4 *)&__this_01[4].fields.m_CancellationTokenSource = 0x3f400000;
  *(undefined4 *)((long)&__this_01[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd;
  __this_01[5].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd;
  *(undefined4 *)&__this_01[5].monitor = 0x3f400000;
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


// UnityStandardAssets.ImageEffects.BloomAndFlares$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_BloomAndFlares___ctor (UnityStandardAssets_ImageEffects_BloomAndFlares_o* __this, const MethodInfo* method);
// 0x4579550

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


