// Type: UnityStandardAssets.ImageEffects.TiltShift
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/TiltShift.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/TiltShift.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.TiltShift$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_TiltShift__CheckResources (UnityStandardAssets_ImageEffects_TiltShift_o* __this, const MethodInfo* method);
// 0x42635b0

bool_conflict
UnityStandardAssets_ImageEffects_TiltShift__CheckResources
          (UnityStandardAssets_ImageEffects_TiltShift_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  undefined8 uVar2;
  undefined8 extraout_RAX;
  
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,0,(MethodInfo *)0x0);
  pUVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      *(UnityEngine_Shader_o **)&(__this->fields).downsample,
                      (UnityEngine_Material_o *)(__this->fields).tiltShiftShader,(MethodInfo *)0x0);
  (__this->fields).tiltShiftShader = (UnityEngine_Shader_o *)pUVar1;
  uVar2 = il2cpp_runtime_glue(&(__this->fields).tiltShiftShader);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,(MethodInfo *)0x0);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.TiltShift$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_TiltShift__OnRenderImage (UnityStandardAssets_ImageEffects_TiltShift_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4263610

void UnityStandardAssets_ImageEffects_TiltShift__OnRenderImage
               (UnityStandardAssets_ImageEffects_TiltShift_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  UnityEngine_Material_o *pUVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int32_t format;
  bool_conflict bVar8;
  UnityEngine_Texture_o *__this_00;
  float value;
  
  if (DAT_05705286 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_Blurred");
    il2cpp_init_method_metadata(&"_BlurSize");
    il2cpp_init_method_metadata(&"_BlurArea");
    DAT_05705286 = '\x01';
  }
  cVar5 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar5 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  pUVar4 = (UnityEngine_Material_o *)(__this->fields).tiltShiftShader;
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    fVar1 = (float)(__this->fields).quality;
    value = 0.0;
    if (0.0 <= fVar1) {
      value = fVar1;
    }
    UnityEngine_Material__SetFloat(pUVar4,"_BlurSize",value,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Material_o *)(__this->fields).tiltShiftShader;
    if (pUVar4 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat
                (pUVar4,"_BlurArea",(float)(__this->fields).mode,(MethodInfo *)0x0);
      if (source != (UnityEngine_RenderTexture_o *)0x0) {
        UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)source,1,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_Texture_o *)destination;
        if (0 < (int)(__this->fields).blurArea) {
          iVar6 = (*(source->klass->vtable)._5_get_width.methodPtr)
                            (source,(source->klass->vtable)._5_get_width.method);
          bVar2 = *(byte *)&(__this->fields).blurArea;
          iVar7 = (*(source->klass->vtable)._7_get_height.methodPtr)(source);
          bVar3 = *(byte *)&(__this->fields).blurArea;
          format = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
          __this_00 = (UnityEngine_Texture_o *)
                      UnityEngine_RenderTexture__GetTemporary
                                (iVar6 >> (bVar2 & 0x1f),iVar7 >> (bVar3 & 0x1f),0,format,
                                 (MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_Texture_o *)0x0) goto LAB_04263881;
          UnityEngine_Texture__set_filterMode(__this_00,1,(MethodInfo *)0x0);
        }
        iVar6 = *(int *)((long)&(__this->fields).createdMaterials + 4);
        pUVar4 = (UnityEngine_Material_o *)(__this->fields).tiltShiftShader;
        iVar7 = *(int *)&(__this->fields).createdMaterials;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__Blit
                  ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)__this_00,pUVar4,
                   (uint)(iVar7 != 0) + iVar6 * 2,(MethodInfo *)0x0);
        if (0 < (int)(__this->fields).blurArea) {
          pUVar4 = (UnityEngine_Material_o *)(__this->fields).tiltShiftShader;
          if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_04263881;
          UnityEngine_Material__SetTexture(pUVar4,"_Blurred",__this_00,(MethodInfo *)0x0);
          pUVar4 = (UnityEngine_Material_o *)(__this->fields).tiltShiftShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    ((UnityEngine_Texture_o *)source,destination,pUVar4,8,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)destination,
                           (MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_04263881:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.TiltShift$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_TiltShift___ctor (UnityStandardAssets_ImageEffects_TiltShift_o* __this, const MethodInfo* method);
// 0x4263890

void UnityStandardAssets_ImageEffects_TiltShift___ctor
               (UnityStandardAssets_ImageEffects_TiltShift_o *__this,MethodInfo *method)

{
  *(undefined4 *)((long)&(__this->fields).createdMaterials + 4) = 2;
  (__this->fields).mode = 0x3f800000;
  (__this->fields).quality = 0x40a00000;
  UnityStandardAssets_ImageEffects_PostEffectsBase___ctor
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,(MethodInfo *)0x0);
  return;
}


