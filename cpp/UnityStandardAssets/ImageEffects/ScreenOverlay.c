// Type: UnityStandardAssets.ImageEffects.ScreenOverlay
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ScreenOverlay.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ScreenOverlay.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.ScreenOverlay$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_ScreenOverlay__CheckResources (UnityStandardAssets_ImageEffects_ScreenOverlay_o* __this, const MethodInfo* method);
// 0x4261450

bool_conflict
UnityStandardAssets_ImageEffects_ScreenOverlay__CheckResources
          (UnityStandardAssets_ImageEffects_ScreenOverlay_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  undefined8 uVar3;
  undefined8 extraout_RAX;
  MethodInfo *in_RCX;
  undefined1 uVar4;
  
  if (DAT_0570526e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    DAT_0570526e = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar4 = 0;
  bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar1;
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar2) {
    bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar4 = (undefined1)bVar1;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar4;
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).texture,
                         (UnityEngine_Material_o *)(__this->fields).overlayShader,in_RCX);
  (__this->fields).overlayShader = (UnityEngine_Shader_o *)method_00;
  uVar3 = il2cpp_runtime_glue(&(__this->fields).overlayShader);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.ScreenOverlay$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenOverlay__OnRenderImage (UnityStandardAssets_ImageEffects_ScreenOverlay_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4261510

void UnityStandardAssets_ImageEffects_ScreenOverlay__OnRenderImage
               (UnityStandardAssets_ImageEffects_ScreenOverlay_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  int32_t pass;
  UnityEngine_Material_o *pUVar1;
  char cVar2;
  UnityEngine_Vector4_o value;
  
  if (DAT_05705279 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_Intensity");
    il2cpp_init_method_metadata(&"_Overlay");
    il2cpp_init_method_metadata(&"_UV_Transform");
    DAT_05705279 = '\x01';
  }
  cVar2 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar2 != '\0') {
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).overlayShader;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      value.fields.z = 0.0;
      value.fields.w = 1.0;
      value.fields.x = 1.0;
      value.fields.y = 0.0;
      UnityEngine_Material__SetVector(pUVar1,"_UV_Transform",value,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Material_o *)(__this->fields).overlayShader;
      if (pUVar1 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat
                  (pUVar1,"_Intensity",*(float *)((long)&(__this->fields).createdMaterials + 4),
                   (MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Material_o *)(__this->fields).overlayShader;
        if (pUVar1 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetTexture
                    (pUVar1,"_Overlay",*(UnityEngine_Texture_o **)&(__this->fields).blendMode,
                     (MethodInfo *)0x0);
          pUVar1 = (UnityEngine_Material_o *)(__this->fields).overlayShader;
          pass = *(int32_t *)&(__this->fields).createdMaterials;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    ((UnityEngine_Texture_o *)source,destination,pUVar1,pass,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ScreenOverlay$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenOverlay___ctor (UnityStandardAssets_ImageEffects_ScreenOverlay_o* __this, const MethodInfo* method);
// 0x4261660

void UnityStandardAssets_ImageEffects_ScreenOverlay___ctor
               (UnityStandardAssets_ImageEffects_ScreenOverlay_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  (__this->fields).createdMaterials =
       (System_Collections_Generic_List_Material__o *)0x3f80000000000003;
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


