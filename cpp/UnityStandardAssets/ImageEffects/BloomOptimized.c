// Type: UnityStandardAssets.ImageEffects.BloomOptimized
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/BloomOptimized.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/BloomOptimized.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.BloomOptimized$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_BloomOptimized__CheckResources (UnityStandardAssets_ImageEffects_BloomOptimized_o* __this, const MethodInfo* method);
// 0x4254540

bool_conflict
UnityStandardAssets_ImageEffects_BloomOptimized__CheckResources
          (UnityStandardAssets_ImageEffects_BloomOptimized_o *__this,MethodInfo *method)

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
                         (UnityEngine_Material_o *)(__this->fields).fastBloomShader,in_RCX);
  (__this->fields).fastBloomShader = (UnityEngine_Shader_o *)method_00;
  uVar3 = il2cpp_runtime_glue(&(__this->fields).fastBloomShader);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.BloomOptimized$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_BloomOptimized__OnDisable (UnityStandardAssets_ImageEffects_BloomOptimized_o* __this, const MethodInfo* method);
// 0x4254600

void UnityStandardAssets_ImageEffects_BloomOptimized__OnDisable
               (UnityStandardAssets_ImageEffects_BloomOptimized_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05705230 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705230 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).fastBloomShader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).fastBloomShader;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.BloomOptimized$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_BloomOptimized__OnRenderImage (UnityStandardAssets_ImageEffects_BloomOptimized_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4254680

void UnityStandardAssets_ImageEffects_BloomOptimized__OnRenderImage
               (UnityStandardAssets_ImageEffects_BloomOptimized_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Material_o *pUVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int32_t iVar6;
  UnityEngine_Texture_o *__this_00;
  UnityEngine_Texture_o *__this_01;
  int width;
  int iVar7;
  UnityEngine_Shader_o *__this_02;
  bool bVar8;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  
  if (DAT_05705231 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_Parameter");
    il2cpp_init_method_metadata(&"_Bloom");
    DAT_05705231 = '\x01';
  }
  cVar4 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar4 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  bVar8 = (__this->fields).intensity == 0.0;
  pUVar2 = (UnityEngine_Material_o *)(__this->fields).fastBloomShader;
  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
    fVar1 = *(float *)(&DAT_00cd0cf0 + (ulong)bVar8 * 4);
    value.fields.y = 0.0;
    value.fields.x = (__this->fields).threshold * fVar1;
    value.fields._8_8_ = (__this->fields).createdMaterials;
    UnityEngine_Material__SetVector(pUVar2,"_Parameter",value,(MethodInfo *)0x0);
    if (source != (UnityEngine_RenderTexture_o *)0x0) {
      iVar7 = bVar8 + 2 + (uint)bVar8;
      UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)source,1,(MethodInfo *)0x0);
      iVar5 = (*(source->klass->vtable)._5_get_width.methodPtr)
                        (source,(source->klass->vtable)._5_get_width.method);
      width = iVar5 / iVar7;
      iVar5 = (*(source->klass->vtable)._7_get_height.methodPtr)
                        (source,(source->klass->vtable)._7_get_height.method,
                         (long)iVar5 % (long)iVar7 & 0xffffffff);
      iVar5 = iVar5 / iVar7;
      iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_Texture_o *)
                  UnityEngine_RenderTexture__GetTemporary(width,iVar5,0,iVar6,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_filterMode(__this_00,1,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_Material_o *)(__this->fields).fastBloomShader;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar7 = 0;
        UnityEngine_Graphics__Blit
                  ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)__this_00,pUVar2,1
                   ,(MethodInfo *)0x0);
        __this_02 = (__this->fields).fastBloomShader;
        bVar8 = __this_02 == (UnityEngine_Shader_o *)0x0;
        if (0 < (int)(__this->fields).blurSize) {
          iVar3 = (uint)((__this->fields).resolution != 0) * 2;
          do {
            if (bVar8) goto LAB_04254a01;
            value_00.fields.y = 0.0;
            value_00.fields.x = (float)iVar7 + (__this->fields).threshold * fVar1;
            value_00.fields._8_8_ = (__this->fields).createdMaterials;
            UnityEngine_Material__SetVector
                      ((UnityEngine_Material_o *)__this_02,"_Parameter",value_00,(MethodInfo *)0x0);
            iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
            __this_01 = (UnityEngine_Texture_o *)
                        UnityEngine_RenderTexture__GetTemporary
                                  (width,iVar5,0,iVar6,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Texture_o *)0x0) goto LAB_04254a01;
            UnityEngine_Texture__set_filterMode(__this_01,1,(MethodInfo *)0x0);
            pUVar2 = (UnityEngine_Material_o *)(__this->fields).fastBloomShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__Blit
                      (__this_00,(UnityEngine_RenderTexture_o *)__this_01,pUVar2,iVar3 + 2,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
            iVar6 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_Texture_o *)
                        UnityEngine_RenderTexture__GetTemporary
                                  (width,iVar5,0,iVar6,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_Texture_o *)0x0) goto LAB_04254a01;
            UnityEngine_Texture__set_filterMode(__this_00,1,(MethodInfo *)0x0);
            UnityEngine_Graphics__Blit
                      (__this_01,(UnityEngine_RenderTexture_o *)__this_00,
                       (UnityEngine_Material_o *)(__this->fields).fastBloomShader,iVar3 + 3,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)__this_01,(MethodInfo *)0x0);
            iVar7 = iVar7 + 1;
            __this_02 = (__this->fields).fastBloomShader;
            bVar8 = __this_02 == (UnityEngine_Shader_o *)0x0;
          } while (iVar7 < (int)(__this->fields).blurSize);
        }
        if (!bVar8) {
          UnityEngine_Material__SetTexture
                    ((UnityEngine_Material_o *)__this_02,"_Bloom",__this_00,(MethodInfo *)0x0);
          pUVar2 = (UnityEngine_Material_o *)(__this->fields).fastBloomShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    ((UnityEngine_Texture_o *)source,destination,pUVar2,0,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04254a01:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.BloomOptimized$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_BloomOptimized___ctor (UnityStandardAssets_ImageEffects_BloomOptimized_o* __this, const MethodInfo* method);
// 0x4254a10

void UnityStandardAssets_ImageEffects_BloomOptimized___ctor
               (UnityStandardAssets_ImageEffects_BloomOptimized_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  (__this->fields).createdMaterials =
       (System_Collections_Generic_List_Material__o *)0x3f4000003e800000;
  (__this->fields).threshold = 1.0;
  (__this->fields).blurSize = 1.4013e-45;
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


