// Type: UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/VignetteAndChromaticAberration.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/VignetteAndChromaticAberration.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration__CheckResources (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o* __this, const MethodInfo* method);
// 0x458a170

bool_conflict
UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration__CheckResources
          (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  undefined8 uVar2;
  undefined8 extraout_RAX;
  
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_4475ed0
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,0,(MethodInfo *)0x0);
  pUVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      *(UnityEngine_Shader_o **)&(__this->fields).luminanceDependency,
                      (UnityEngine_Material_o *)(__this->fields).chromAberrationShader,(MethodInfo *)0x0);
  (__this->fields).chromAberrationShader = (UnityEngine_Shader_o *)pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).chromAberrationShader,pUVar1);
  pUVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (__this->fields).vignetteShader,(__this->fields).m_VignetteMaterial,(MethodInfo *)0x0);
  (__this->fields).m_VignetteMaterial = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_VignetteMaterial,pUVar1);
  pUVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (__this->fields).separableBlurShader,(__this->fields).m_SeparableBlurMaterial,
                      (MethodInfo *)0x0);
  (__this->fields).m_SeparableBlurMaterial = pUVar1;
  uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).m_SeparableBlurMaterial);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,(MethodInfo *)0x0);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration__OnRenderImage (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x458a220

void UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration__OnRenderImage
               (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,MethodInfo *method
               )

{
  float fVar1;
  UnityEngine_Material_o *pUVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int height;
  int32_t iVar6;
  UnityEngine_Texture_o *dest;
  UnityEngine_Texture_o *pUVar7;
  UnityEngine_Texture_o *pUVar8;
  int width;
  UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *__this_00;
  int height_00;
  float fVar9;
  UnityEngine_Vector4_o value;
  
  if (g_data_057af10c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    il2cpp_runtime_helper_023445d0(&"_VignetteTex");
    il2cpp_runtime_helper_023445d0(&"_Luminance");
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    il2cpp_runtime_helper_023445d0(&"_Blur");
    il2cpp_runtime_helper_023445d0(&"_BlurDistance");
    il2cpp_runtime_helper_023445d0(&"_ChromaticAberration");
    il2cpp_runtime_helper_023445d0(&"_AxialAberration");
    il2cpp_runtime_helper_023445d0(&"offsets");
    g_data_057af10c = '\x01';
  }
  __this_00 = __this;
  cVar4 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)();
  if (cVar4 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  if (source == (UnityEngine_RenderTexture_o *)0x0) goto label_0458a86f;
  iVar5 = (*(source->klass->vtable)._5_get_width.methodPtr)
                    (source,(source->klass->vtable)._5_get_width.method);
  height = (*(source->klass->vtable)._7_get_height.methodPtr)(source);
  if (((__this->fields).chromaticAberration == 0.0) &&
     (*(float *)((long)&(__this->fields).createdMaterials + 4) == 0.0)) {
    bVar3 = false;
    pUVar7 = (UnityEngine_Texture_o *)0x0;
    dest = (UnityEngine_Texture_o *)0x0;
    pUVar2 = (__this->fields).m_SeparableBlurMaterial;
  }
  else {
    pUVar7 = (UnityEngine_Texture_o *)0x0;
    iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
    dest = (UnityEngine_Texture_o *)
           UnityEngine_RenderTexture__GetTemporary_4de1d50(iVar5,height,0,iVar6,(MethodInfo *)0x0);
    if ((__this->fields).chromaticAberration != 0.0) {
      iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
      width = iVar5 / 2;
      height_00 = height / 2;
      pUVar7 = (UnityEngine_Texture_o *)
               UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height_00,0,iVar6,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).m_SeparableBlurMaterial;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2a60
                ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)pUVar7,pUVar2,0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).m_VignetteMaterial;
      __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
      if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458a86f;
      UnityEngine_Material__SetVector
                (pUVar2,"offsets",
                 (UnityEngine_Vector4_o)
                 (ZEXT416((uint)((__this->fields).axialAberration * 0.001953125)) << 0x20),(MethodInfo *)0x0);
      iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_Texture_o *)
               UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height_00,0,iVar6,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).m_VignetteMaterial;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                (pUVar7,(UnityEngine_RenderTexture_o *)pUVar8,pUVar2,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar7,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).m_VignetteMaterial;
      __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
      if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458a86f;
      UnityEngine_Material__SetVector
                (pUVar2,"offsets",
                 (UnityEngine_Vector4_o)
                 ZEXT416((uint)(((__this->fields).axialAberration * 0.001953125) /
                               ((float)iVar5 / (float)height))),(MethodInfo *)0x0);
      iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
      pUVar7 = (UnityEngine_Texture_o *)
               UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height_00,0,iVar6,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit_4dc2ad0
                (pUVar8,(UnityEngine_RenderTexture_o *)pUVar7,(__this->fields).m_VignetteMaterial,
                 (MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar8,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).m_VignetteMaterial;
      __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
      if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458a86f;
      UnityEngine_Material__SetVector
                (pUVar2,"offsets",
                 (UnityEngine_Vector4_o)
                 (ZEXT416((uint)((__this->fields).axialAberration * 0.001953125)) << 0x20),(MethodInfo *)0x0);
      iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_Texture_o *)
               UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height_00,0,iVar6,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).m_VignetteMaterial;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                (pUVar7,(UnityEngine_RenderTexture_o *)pUVar8,pUVar2,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar7,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).m_VignetteMaterial;
      __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
      if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458a86f;
      UnityEngine_Material__SetVector
                (pUVar2,"offsets",
                 (UnityEngine_Vector4_o)
                 ZEXT416((uint)(((__this->fields).axialAberration * 0.001953125) /
                               ((float)iVar5 / (float)height))),(MethodInfo *)0x0);
      iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
      pUVar7 = (UnityEngine_Texture_o *)
               UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height_00,0,iVar6,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit_4dc2ad0
                (pUVar8,(UnityEngine_RenderTexture_o *)pUVar7,(__this->fields).m_VignetteMaterial,
                 (MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar8,(MethodInfo *)0x0);
    }
    pUVar2 = (UnityEngine_Material_o *)(__this->fields).chromAberrationShader;
    __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458a86f;
    UnityEngine_Material__SetFloat
              (pUVar2,"_Intensity",
               1.0 / (1.0 - *(float *)((long)&(__this->fields).createdMaterials + 4)) + -1.0,(MethodInfo *)0x0
              );
    pUVar2 = (UnityEngine_Material_o *)(__this->fields).chromAberrationShader;
    __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458a86f;
    UnityEngine_Material__SetFloat
              (pUVar2,"_Blur",1.0 / (1.0 - (__this->fields).chromaticAberration) + -1.0,(MethodInfo *)0x0
              );
    pUVar2 = (UnityEngine_Material_o *)(__this->fields).chromAberrationShader;
    __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458a86f;
    UnityEngine_Material__SetTexture(pUVar2,"_VignetteTex",pUVar7,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Material_o *)(__this->fields).chromAberrationShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)dest,pUVar2,0,(MethodInfo *)0x0)
    ;
    bVar3 = true;
    pUVar2 = (__this->fields).m_SeparableBlurMaterial;
  }
  __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(pUVar2,"_ChromaticAberration",(float)(__this->fields).mode,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).m_SeparableBlurMaterial;
    __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar2,_DAT_055d9450,(__this->fields).intensity,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).m_SeparableBlurMaterial;
      __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
        fVar1 = (__this->fields).blurSpread;
        value.fields._0_8_ = CONCAT44(fVar1,fVar1) ^ 0x80000000;
        value.fields.z = 0.0;
        value.fields.w = 0.0;
        UnityEngine_Material__SetVector(pUVar2,"_BlurDistance",value,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).m_SeparableBlurMaterial;
        __this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0;
        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
          fVar1 = (__this->fields).blur;
          fVar9 = **(float **)(TypeInfo_Mathf + 0xb8);
          if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar1) {
            fVar9 = fVar1;
          }
          UnityEngine_Material__SetFloat(pUVar2,"_Luminance",1.0 / fVar9,(MethodInfo *)0x0);
          pUVar8 = (UnityEngine_Texture_o *)source;
          if ((!bVar3) ||
             (__this_00 = (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *)0x0,
             pUVar8 = dest, dest != (UnityEngine_Texture_o *)0x0)) {
            UnityEngine_Texture__set_wrapMode(pUVar8,1,(MethodInfo *)0x0);
            if (bVar3) {
              source = (UnityEngine_RenderTexture_o *)dest;
            }
            pUVar2 = (__this->fields).m_SeparableBlurMaterial;
            iVar5 = *(int *)&(__this->fields).createdMaterials;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)source,destination,pUVar2,(iVar5 == 1) + 1,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)dest,(MethodInfo *)0x0)
            ;
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)pUVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0458a86f:
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)&(__this_00->fields).createdMaterials + 4) = 0x3e4ccccd3d1374bc;
  (__this_00->fields).intensity = 0.5;
  (__this_00->fields).axialAberration = 0.75;
  (__this_00->fields).blur = 0.25;
  (__this_00->fields).blurSpread = 2.5;
  UnityStandardAssets_ImageEffects_PostEffectsBase___ctor
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration___ctor (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o* __this, const MethodInfo* method);
// 0x458a880

void UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration___ctor
               (UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_o *__this,MethodInfo *method)

{
  *(undefined8 *)((long)&(__this->fields).createdMaterials + 4) = 0x3e4ccccd3d1374bc;
  (__this->fields).intensity = 0.5;
  (__this->fields).axialAberration = 0.75;
  (__this->fields).blur = 0.25;
  (__this->fields).blurSpread = 2.5;
  UnityStandardAssets_ImageEffects_PostEffectsBase___ctor
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,(MethodInfo *)0x0);
  return;
}


