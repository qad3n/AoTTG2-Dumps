// Type: UnityStandardAssets.ImageEffects.Fisheye
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Fisheye.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Fisheye.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.Fisheye$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_Fisheye__CheckResources (UnityStandardAssets_ImageEffects_Fisheye_o* __this, const MethodInfo* method);
// 0x425d170

bool_conflict
UnityStandardAssets_ImageEffects_Fisheye__CheckResources
          (UnityStandardAssets_ImageEffects_Fisheye_o *__this,MethodInfo *method)

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
                         *(UnityEngine_Shader_o **)&(__this->fields).strengthX,
                         (UnityEngine_Material_o *)(__this->fields).fishEyeShader,in_RCX);
  (__this->fields).fishEyeShader = (UnityEngine_Shader_o *)method_00;
  uVar3 = il2cpp_runtime_glue(&(__this->fields).fishEyeShader);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.Fisheye$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Fisheye__OnRenderImage (UnityStandardAssets_ImageEffects_Fisheye_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x425d230

void UnityStandardAssets_ImageEffects_Fisheye__OnRenderImage
               (UnityStandardAssets_ImageEffects_Fisheye_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  UnityEngine_Vector4_o value;
  
  if (DAT_05705258 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"intensity");
    DAT_05705258 = '\x01';
  }
  cVar2 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar2 != '\0') {
    if (source != (UnityEngine_RenderTexture_o *)0x0) {
      iVar3 = (*(source->klass->vtable)._5_get_width.methodPtr)
                        (source,(source->klass->vtable)._5_get_width.method);
      iVar4 = (*(source->klass->vtable)._7_get_height.methodPtr)
                        (source,(source->klass->vtable)._7_get_height.method);
      pUVar1 = (UnityEngine_Material_o *)(__this->fields).fishEyeShader;
      if (pUVar1 != (UnityEngine_Material_o *)0x0) {
        value.fields.x =
             ((float)iVar3 / (float)iVar4) * *(float *)&(__this->fields).createdMaterials * 0.15625;
        value.fields.y = *(float *)((long)&(__this->fields).createdMaterials + 4) * 0.15625;
        value.fields.w = value.fields.y;
        value.fields.z = value.fields.x;
        UnityEngine_Material__SetVector(pUVar1,"intensity",value,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Material_o *)(__this->fields).fishEyeShader;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__Blit
                  ((UnityEngine_Texture_o *)source,destination,pUVar1,(MethodInfo *)0x0);
        return;
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


// UnityStandardAssets.ImageEffects.Fisheye$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Fisheye___ctor (UnityStandardAssets_ImageEffects_Fisheye_o* __this, const MethodInfo* method);
// 0x425d360

void UnityStandardAssets_ImageEffects_Fisheye___ctor
               (UnityStandardAssets_ImageEffects_Fisheye_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  (__this->fields).createdMaterials =
       (System_Collections_Generic_List_Material__o *)0x3d4ccccd3d4ccccd;
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


