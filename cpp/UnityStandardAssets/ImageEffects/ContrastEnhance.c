// Type: UnityStandardAssets.ImageEffects.ContrastEnhance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ContrastEnhance.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ContrastEnhance.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.ContrastEnhance$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_ContrastEnhance__CheckResources (UnityStandardAssets_ImageEffects_ContrastEnhance_o* __this, const MethodInfo* method);
// 0x45808c0

bool_conflict
UnityStandardAssets_ImageEffects_ContrastEnhance__CheckResources
          (UnityStandardAssets_ImageEffects_ContrastEnhance_o *__this,MethodInfo *method)

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
                      (__this->fields).separableBlurShader,(__this->fields).separableBlurMaterial,in_RCX);
  (__this->fields).separableBlurMaterial = pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).separableBlurMaterial,pUVar3);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         *(UnityEngine_Shader_o **)&(__this->fields).blurSpread,
                         *(UnityEngine_Material_o **)&(__this->fields).intensity,in_RCX);
  *(MethodInfo **)&(__this->fields).intensity = method_00;
  uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).intensity);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.ContrastEnhance$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastEnhance__OnRenderImage (UnityStandardAssets_ImageEffects_ContrastEnhance_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x45809a0

void UnityStandardAssets_ImageEffects_ContrastEnhance__OnRenderImage
               (UnityStandardAssets_ImageEffects_ContrastEnhance_o *__this,UnityEngine_RenderTexture_o *source
               ,UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Material_o *pUVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  UnityStandardAssets_ImageEffects_ContrastEnhance_o *__this_00;
  UnityStandardAssets_ImageEffects_ContrastEnhance_o *source_00;
  UnityEngine_Texture_o *source_01;
  UnityEngine_Texture_o *value;
  System_Collections_Generic_List_object__o *__this_01;
  int width;
  
  if (g_data_057af0c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"intensity");
    il2cpp_runtime_helper_023445d0(&"_MainTexBlurred");
    il2cpp_runtime_helper_023445d0(&"threshold");
    il2cpp_runtime_helper_023445d0(&"offsets");
    g_data_057af0c7 = '\x01';
  }
  __this_00 = __this;
  cVar3 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar3 != '\0') {
    if (source != (UnityEngine_RenderTexture_o *)0x0) {
      iVar4 = (*(source->klass->vtable)._5_get_width.methodPtr)
                        (source,(source->klass->vtable)._5_get_width.method);
      iVar5 = (*(source->klass->vtable)._7_get_height.methodPtr)
                        (source,(source->klass->vtable)._7_get_height.method);
      __this_00 = (UnityStandardAssets_ImageEffects_ContrastEnhance_o *)
                  UnityEngine_RenderTexture__GetTemporary_4de1d70(iVar4 / 2,iVar5 / 2,0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
      width = (int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2;
      iVar4 = (int)(((uint)(iVar5 >> 0x1f) >> 0x1e) + iVar5) >> 2;
      source_00 = (UnityStandardAssets_ImageEffects_ContrastEnhance_o *)
                  UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar4,0,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)__this_00,(UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0
                );
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
      if (source_00 != (UnityStandardAssets_ImageEffects_ContrastEnhance_o *)0x0) {
        pUVar2 = *(UnityEngine_Material_o **)&(__this->fields).intensity;
        fVar1 = *(float *)&(__this->fields).contrastCompositeMaterial;
        __this_00 = source_00;
        iVar5 = (*(((UnityEngine_Texture_c *)source_00->klass)->vtable)._7_get_height.methodPtr)
                          (source_00,
                           (((UnityEngine_Texture_c *)source_00->klass)->vtable)._7_get_height.method);
        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetVector
                    (pUVar2,"offsets",
                     (UnityEngine_Vector4_o)(ZEXT416((uint)(fVar1 / (float)iVar5)) << 0x20),(MethodInfo *)0x0)
          ;
          source_01 = (UnityEngine_Texture_o *)
                      UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar4,0,(MethodInfo *)0x0);
          UnityEngine_Graphics__Blit_4dc2ad0
                    ((UnityEngine_Texture_o *)source_00,(UnityEngine_RenderTexture_o *)source_01,
                     *(UnityEngine_Material_o **)&(__this->fields).intensity,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
          pUVar2 = *(UnityEngine_Material_o **)&(__this->fields).intensity;
          fVar1 = *(float *)&(__this->fields).contrastCompositeMaterial;
          iVar5 = (*(((UnityEngine_Texture_c *)source_00->klass)->vtable)._5_get_width.methodPtr)
                            (source_00,
                             (((UnityEngine_Texture_c *)source_00->klass)->vtable)._5_get_width.method);
          __this_00 = source_00;
          if (pUVar2 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetVector
                      (pUVar2,"offsets",(UnityEngine_Vector4_o)ZEXT416((uint)(fVar1 / (float)iVar5)),
                       (MethodInfo *)0x0);
            value = (UnityEngine_Texture_o *)
                    UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar4,0,(MethodInfo *)0x0);
            UnityEngine_Graphics__Blit_4dc2ad0
                      (source_01,(UnityEngine_RenderTexture_o *)value,
                       *(UnityEngine_Material_o **)&(__this->fields).intensity,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).separableBlurMaterial;
            __this_00 = (UnityStandardAssets_ImageEffects_ContrastEnhance_o *)0x0;
            if (pUVar2 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetTexture(pUVar2,"_MainTexBlurred",value,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).separableBlurMaterial;
              __this_00 = (UnityStandardAssets_ImageEffects_ContrastEnhance_o *)0x0;
              if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetFloat
                          (pUVar2,"intensity",*(float *)&(__this->fields).createdMaterials,(MethodInfo *)0x0)
                ;
                pUVar2 = (__this->fields).separableBlurMaterial;
                __this_00 = (UnityStandardAssets_ImageEffects_ContrastEnhance_o *)0x0;
                if (pUVar2 != (UnityEngine_Material_o *)0x0) {
                  UnityEngine_Material__SetFloat
                            (pUVar2,"threshold",*(float *)((long)&(__this->fields).createdMaterials + 4),
                             (MethodInfo *)0x0);
                  UnityEngine_Graphics__Blit_4dc2ad0
                            ((UnityEngine_Texture_o *)source,destination,
                             (__this->fields).separableBlurMaterial,(MethodInfo *)0x0);
                  UnityEngine_RenderTexture__ReleaseTemporary
                            ((UnityEngine_RenderTexture_o *)value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&(__this_00->fields).createdMaterials = 0x3f000000;
    *(undefined4 *)&(__this_00->fields).contrastCompositeMaterial = 0x3f800000;
    if (g_data_057af0ed == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      g_data_057af0ed = '\x01';
    }
    *(undefined1 *)&(__this_00->fields).supportHDRTextures = 1;
    *(undefined1 *)((long)&(__this_00->fields).supportHDRTextures + 2) = 1;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Material);
    *(System_Collections_Generic_List_object__o **)&(__this_00->fields).isSupported = __this_01;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).isSupported);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ContrastEnhance$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ContrastEnhance___ctor (UnityStandardAssets_ImageEffects_ContrastEnhance_o* __this, const MethodInfo* method);
// 0x4580ce0

void UnityStandardAssets_ImageEffects_ContrastEnhance___ctor
               (UnityStandardAssets_ImageEffects_ContrastEnhance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  *(undefined4 *)&(__this->fields).createdMaterials = 0x3f000000;
  *(undefined4 *)&(__this->fields).contrastCompositeMaterial = 0x3f800000;
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


