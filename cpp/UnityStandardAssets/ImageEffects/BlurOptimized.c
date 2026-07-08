// Type: UnityStandardAssets.ImageEffects.BlurOptimized
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/BlurOptimized.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/BlurOptimized.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.BlurOptimized$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_BlurOptimized__CheckResources (UnityStandardAssets_ImageEffects_BlurOptimized_o* __this, const MethodInfo* method);
// 0x4255080

bool_conflict
UnityStandardAssets_ImageEffects_BlurOptimized__CheckResources
          (UnityStandardAssets_ImageEffects_BlurOptimized_o *__this,MethodInfo *method)

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
                         *(UnityEngine_Shader_o **)&(__this->fields).blurIterations,
                         (UnityEngine_Material_o *)(__this->fields).blurShader,in_RCX);
  (__this->fields).blurShader = (UnityEngine_Shader_o *)method_00;
  uVar3 = il2cpp_runtime_glue(&(__this->fields).blurShader);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.BlurOptimized$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_BlurOptimized__OnDisable (UnityStandardAssets_ImageEffects_BlurOptimized_o* __this, const MethodInfo* method);
// 0x4255140

void UnityStandardAssets_ImageEffects_BlurOptimized__OnDisable
               (UnityStandardAssets_ImageEffects_BlurOptimized_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05705238 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705238 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).blurShader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).blurShader;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.BlurOptimized$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_BlurOptimized__OnRenderImage (UnityStandardAssets_ImageEffects_BlurOptimized_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x42551c0

void UnityStandardAssets_ImageEffects_BlurOptimized__OnRenderImage
               (UnityStandardAssets_ImageEffects_BlurOptimized_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int32_t iVar6;
  UnityEngine_Texture_o *__this_00;
  UnityEngine_Texture_o *__this_01;
  int iVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  
  if (DAT_05705239 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_Parameter");
    DAT_05705239 = '\x01';
  }
  cVar3 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar3 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  pUVar1 = (UnityEngine_Material_o *)(__this->fields).blurShader;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    fVar9 = 1.0 / (float)(1 << (*(byte *)&(__this->fields).createdMaterials & 0x1f));
    fVar8 = *(float *)((long)&(__this->fields).createdMaterials + 4) * fVar9;
    value.fields._0_8_ = CONCAT44(fVar8,fVar8) ^ 0x8000000000000000;
    value.fields.z = 0.0;
    value.fields.w = 0.0;
    UnityEngine_Material__SetVector(pUVar1,"_Parameter",value,(MethodInfo *)0x0);
    if (source != (UnityEngine_RenderTexture_o *)0x0) {
      UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)source,1,(MethodInfo *)0x0);
      iVar4 = (*(source->klass->vtable)._5_get_width.methodPtr)
                        (source,(source->klass->vtable)._5_get_width.method);
      iVar4 = iVar4 >> (*(byte *)&(__this->fields).createdMaterials & 0x1f);
      iVar5 = (*(source->klass->vtable)._7_get_height.methodPtr)(source);
      iVar5 = iVar5 >> (*(byte *)&(__this->fields).createdMaterials & 0x1f);
      iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_Texture_o *)
                  UnityEngine_RenderTexture__GetTemporary(iVar4,iVar5,0,iVar6,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_filterMode(__this_00,1,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Material_o *)(__this->fields).blurShader;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar7 = 0;
        UnityEngine_Graphics__Blit
                  ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)__this_00,pUVar1,0
                   ,(MethodInfo *)0x0);
        if (0 < (__this->fields).downsample) {
          uVar2 = (uint)((__this->fields).blurSize != 0.0) * 2;
          do {
            pUVar1 = (UnityEngine_Material_o *)(__this->fields).blurShader;
            if (pUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_04255529;
            fVar8 = *(float *)((long)&(__this->fields).createdMaterials + 4) * fVar9;
            value_00.fields.x = fVar8 + (float)iVar7;
            value_00.fields.y = -fVar8 - (float)iVar7;
            value_00.fields.z = 0.0;
            value_00.fields.w = 0.0;
            UnityEngine_Material__SetVector(pUVar1,"_Parameter",value_00,(MethodInfo *)0x0);
            iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
            __this_01 = (UnityEngine_Texture_o *)
                        UnityEngine_RenderTexture__GetTemporary
                                  (iVar4,iVar5,0,iVar6,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Texture_o *)0x0) goto LAB_04255529;
            UnityEngine_Texture__set_filterMode(__this_01,1,(MethodInfo *)0x0);
            pUVar1 = (UnityEngine_Material_o *)(__this->fields).blurShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit
                      (__this_00,(UnityEngine_RenderTexture_o *)__this_01,pUVar1,uVar2 | 1,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
            iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_Texture_o *)
                        UnityEngine_RenderTexture__GetTemporary
                                  (iVar4,iVar5,0,iVar6,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_Texture_o *)0x0) goto LAB_04255529;
            UnityEngine_Texture__set_filterMode(__this_00,1,(MethodInfo *)0x0);
            UnityEngine_Graphics__Blit
                      (__this_01,(UnityEngine_RenderTexture_o *)__this_00,
                       (UnityEngine_Material_o *)(__this->fields).blurShader,uVar2 + 2,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)__this_01,(MethodInfo *)0x0);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (__this->fields).downsample);
        }
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__Blit(__this_00,destination,(MethodInfo *)0x0);
        UnityEngine_RenderTexture__ReleaseTemporary
                  ((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_04255529:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.BlurOptimized$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_BlurOptimized___ctor (UnityStandardAssets_ImageEffects_BlurOptimized_o* __this, const MethodInfo* method);
// 0x4255530

void UnityStandardAssets_ImageEffects_BlurOptimized___ctor
               (UnityStandardAssets_ImageEffects_BlurOptimized_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  (__this->fields).createdMaterials =
       (System_Collections_Generic_List_Material__o *)0x4040000000000001;
  (__this->fields).downsample = 2;
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


