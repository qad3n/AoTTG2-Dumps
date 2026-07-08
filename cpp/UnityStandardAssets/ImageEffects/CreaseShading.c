// Type: UnityStandardAssets.ImageEffects.CreaseShading
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/CreaseShading.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/CreaseShading.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.CreaseShading$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_CreaseShading__CheckResources (UnityStandardAssets_ImageEffects_CreaseShading_o* __this, const MethodInfo* method);
// 0x425c8e0

bool_conflict
UnityStandardAssets_ImageEffects_CreaseShading__CheckResources
          (UnityStandardAssets_ImageEffects_CreaseShading_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  MethodInfo *method_00;
  undefined8 uVar2;
  undefined8 extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,1,in_RDX);
  pUVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      *(UnityEngine_Shader_o **)&(__this->fields).spread,
                      (UnityEngine_Material_o *)(__this->fields).blurShader,in_RCX);
  (__this->fields).blurShader = (UnityEngine_Shader_o *)pUVar1;
  il2cpp_runtime_glue(&(__this->fields).blurShader,pUVar1);
  pUVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).blurMaterial,
                      (UnityEngine_Material_o *)(__this->fields).depthFetchShader,in_RCX);
  (__this->fields).depthFetchShader = (UnityEngine_Shader_o *)pUVar1;
  il2cpp_runtime_glue(&(__this->fields).depthFetchShader,pUVar1);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).depthFetchMaterial,
                         (UnityEngine_Material_o *)(__this->fields).creaseApplyShader,in_RCX);
  (__this->fields).creaseApplyShader = (UnityEngine_Shader_o *)method_00;
  uVar2 = il2cpp_runtime_glue(&(__this->fields).creaseApplyShader);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.CreaseShading$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_CreaseShading__OnRenderImage (UnityStandardAssets_ImageEffects_CreaseShading_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x425c990

void UnityStandardAssets_ImageEffects_CreaseShading__OnRenderImage
               (UnityStandardAssets_ImageEffects_CreaseShading_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  char cVar2;
  int width;
  int32_t height;
  UnityEngine_Texture_o *source_00;
  UnityEngine_Texture_o *source_01;
  UnityEngine_Texture_o *source_02;
  int height_00;
  int width_00;
  int iVar3;
  
  if (DAT_05705255 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"intensity");
    il2cpp_init_method_metadata(&"_HrDepthTex");
    il2cpp_init_method_metadata(&"_LrDepthTex");
    il2cpp_init_method_metadata(&"offsets");
    DAT_05705255 = '\x01';
  }
  cVar2 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar2 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    width = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    height = (*(source->klass->vtable)._7_get_height.methodPtr)
                       (source,(source->klass->vtable)._7_get_height.method);
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary(width,height,0,(MethodInfo *)0x0);
    width_00 = width / 2;
    height_00 = height / 2;
    source_01 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary(width_00,height_00,0,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).depthFetchShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar3 = 0;
    UnityEngine_Graphics__Blit
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,pUVar1,
               (MethodInfo *)0x0);
    UnityEngine_Graphics__Blit(source_00,(UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0)
    ;
    if (0 < *(int *)((long)&(__this->fields).createdMaterials + 4)) {
      do {
        source_02 = (UnityEngine_Texture_o *)
                    UnityEngine_RenderTexture__GetTemporary(width_00,height_00,0,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Material_o *)(__this->fields).blurShader;
        if (pUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_0425cce6;
        UnityEngine_Material__SetVector
                  (pUVar1,"offsets",
                   (UnityEngine_Vector4_o)
                   (ZEXT416((uint)((__this->fields).intensity * 0.001953125)) << 0x20),
                   (MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Material_o *)(__this->fields).blurShader;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__Blit
                  (source_01,(UnityEngine_RenderTexture_o *)source_02,pUVar1,(MethodInfo *)0x0);
        UnityEngine_RenderTexture__ReleaseTemporary
                  ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
        source_01 = (UnityEngine_Texture_o *)
                    UnityEngine_RenderTexture__GetTemporary(width_00,height_00,0,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Material_o *)(__this->fields).blurShader;
        if (pUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_0425cce6;
        UnityEngine_Material__SetVector
                  (pUVar1,"offsets",
                   (UnityEngine_Vector4_o)
                   ZEXT416((uint)(((__this->fields).intensity * 0.001953125) /
                                 ((float)width / (float)height))),(MethodInfo *)0x0);
        UnityEngine_Graphics__Blit
                  (source_02,(UnityEngine_RenderTexture_o *)source_01,
                   (UnityEngine_Material_o *)(__this->fields).blurShader,(MethodInfo *)0x0);
        UnityEngine_RenderTexture__ReleaseTemporary
                  ((UnityEngine_RenderTexture_o *)source_02,(MethodInfo *)0x0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((long)&(__this->fields).createdMaterials + 4));
    }
    pUVar1 = (UnityEngine_Material_o *)(__this->fields).creaseApplyShader;
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture(pUVar1,"_HrDepthTex",source_00,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Material_o *)(__this->fields).creaseApplyShader;
      if (pUVar1 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetTexture(pUVar1,"_LrDepthTex",source_01,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Material_o *)(__this->fields).creaseApplyShader;
        if (pUVar1 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat
                    (pUVar1,"intensity",*(float *)&(__this->fields).createdMaterials,
                     (MethodInfo *)0x0);
          pUVar1 = (UnityEngine_Material_o *)(__this->fields).creaseApplyShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    ((UnityEngine_Texture_o *)source,destination,pUVar1,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0425cce6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.CreaseShading$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_CreaseShading___ctor (UnityStandardAssets_ImageEffects_CreaseShading_o* __this, const MethodInfo* method);
// 0x425ccf0

void UnityStandardAssets_ImageEffects_CreaseShading___ctor
               (UnityStandardAssets_ImageEffects_CreaseShading_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  (__this->fields).createdMaterials = (System_Collections_Generic_List_Material__o *)0x13f000000;
  (__this->fields).intensity = 1.0;
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


