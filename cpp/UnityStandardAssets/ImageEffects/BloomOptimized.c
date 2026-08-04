// Type: UnityStandardAssets.ImageEffects.BloomOptimized
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/BloomOptimized.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/BloomOptimized.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.BloomOptimized$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_BloomOptimized__CheckResources (UnityStandardAssets_ImageEffects_BloomOptimized_o* __this, const MethodInfo* method);
// 0x4579640

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
  
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
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
  uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).fastBloomShader);
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
// 0x4579700

void UnityStandardAssets_ImageEffects_BloomOptimized__OnDisable
               (UnityStandardAssets_ImageEffects_BloomOptimized_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057af0ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0ac = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).fastBloomShader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).fastBloomShader;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.BloomOptimized$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_BloomOptimized__OnRenderImage (UnityStandardAssets_ImageEffects_BloomOptimized_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4579780

void UnityStandardAssets_ImageEffects_BloomOptimized__OnRenderImage
               (UnityStandardAssets_ImageEffects_BloomOptimized_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Material_o *pUVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int32_t iVar7;
  UnityEngine_Texture_o *__this_00;
  UnityEngine_Texture_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  int32_t width;
  int iVar8;
  UnityEngine_MonoBehaviour_o *__this_03;
  bool bVar9;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  
  if (g_data_057af0ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Parameter");
    il2cpp_runtime_helper_023445d0(&"_Bloom");
    g_data_057af0ad = '\x01';
  }
  cVar5 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar5 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  bVar9 = (__this->fields).intensity == 0.0;
  __this_03 = (UnityEngine_MonoBehaviour_o *)(__this->fields).fastBloomShader;
  if (__this_03 != (UnityEngine_MonoBehaviour_o *)0x0) {
    fVar1 = *(float *)(&g_data_00d1d380 + (ulong)bVar9 * 4);
    value.fields.y = 0.0;
    value.fields.x = (__this->fields).threshold * fVar1;
    value.fields._8_8_ = (__this->fields).createdMaterials;
    UnityEngine_Material__SetVector((UnityEngine_Material_o *)__this_03,"_Parameter",value,(MethodInfo *)0x0);
    if (source != (UnityEngine_RenderTexture_o *)0x0) {
      iVar8 = bVar9 + 2 + (uint)bVar9;
      UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)source,1,(MethodInfo *)0x0);
      iVar6 = (*(source->klass->vtable)._5_get_width.methodPtr)
                        (source,(source->klass->vtable)._5_get_width.method);
      uVar3 = (long)iVar6 / (long)iVar8;
      iVar6 = (*(source->klass->vtable)._7_get_height.methodPtr)
                        (source,(source->klass->vtable)._7_get_height.method,
                         (long)iVar6 % (long)iVar8 & 0xffffffff);
      iVar6 = iVar6 / iVar8;
      iVar7 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
      width = (int32_t)uVar3;
      __this_03 = (UnityEngine_MonoBehaviour_o *)(uVar3 & 0xffffffff);
      __this_00 = (UnityEngine_Texture_o *)
                  UnityEngine_RenderTexture__GetTemporary_4de1d50(width,iVar6,0,iVar7,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_filterMode(__this_00,1,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_Material_o *)(__this->fields).fastBloomShader;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar8 = 0;
        UnityEngine_Graphics__Blit_4dc2a60
                  ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)__this_00,pUVar2,1,
                   (MethodInfo *)0x0);
        __this_03 = (UnityEngine_MonoBehaviour_o *)(__this->fields).fastBloomShader;
        bVar9 = __this_03 == (UnityEngine_MonoBehaviour_o *)0x0;
        if (0 < (int)(__this->fields).blurSize) {
          iVar4 = (uint)((__this->fields).resolution != 0) * 2;
          do {
            if (bVar9) goto label_04579b01;
            value_00.fields.y = 0.0;
            value_00.fields.x = (float)iVar8 + (__this->fields).threshold * fVar1;
            value_00.fields._8_8_ = (__this->fields).createdMaterials;
            UnityEngine_Material__SetVector
                      ((UnityEngine_Material_o *)__this_03,"_Parameter",value_00,(MethodInfo *)0x0);
            iVar7 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
            __this_03 = (UnityEngine_MonoBehaviour_o *)(uVar3 & 0xffffffff);
            __this_01 = (UnityEngine_Texture_o *)
                        UnityEngine_RenderTexture__GetTemporary_4de1d50(width,iVar6,0,iVar7,(MethodInfo *)0x0)
            ;
            if (__this_01 == (UnityEngine_Texture_o *)0x0) goto label_04579b01;
            UnityEngine_Texture__set_filterMode(__this_01,1,(MethodInfo *)0x0);
            pUVar2 = (UnityEngine_Material_o *)(__this->fields).fastBloomShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2a60
                      (__this_00,(UnityEngine_RenderTexture_o *)__this_01,pUVar2,iVar4 + 2,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
            iVar7 = UnityEngine_RenderTexture__get_format(source,(MethodInfo *)0x0);
            __this_03 = (UnityEngine_MonoBehaviour_o *)(uVar3 & 0xffffffff);
            __this_00 = (UnityEngine_Texture_o *)
                        UnityEngine_RenderTexture__GetTemporary_4de1d50(width,iVar6,0,iVar7,(MethodInfo *)0x0)
            ;
            if (__this_00 == (UnityEngine_Texture_o *)0x0) goto label_04579b01;
            UnityEngine_Texture__set_filterMode(__this_00,1,(MethodInfo *)0x0);
            UnityEngine_Graphics__Blit_4dc2a60
                      (__this_01,(UnityEngine_RenderTexture_o *)__this_00,
                       (UnityEngine_Material_o *)(__this->fields).fastBloomShader,iVar4 + 3,(MethodInfo *)0x0)
            ;
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)__this_01,(MethodInfo *)0x0);
            iVar8 = iVar8 + 1;
            __this_03 = (UnityEngine_MonoBehaviour_o *)(__this->fields).fastBloomShader;
            bVar9 = __this_03 == (UnityEngine_MonoBehaviour_o *)0x0;
          } while (iVar8 < (int)(__this->fields).blurSize);
        }
        if (!bVar9) {
          UnityEngine_Material__SetTexture
                    ((UnityEngine_Material_o *)__this_03,"_Bloom",__this_00,(MethodInfo *)0x0);
          pUVar2 = (UnityEngine_Material_o *)(__this->fields).fastBloomShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)source,destination,pUVar2,0,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_04579b01:
  il2cpp_runtime_helper_022b2c90();
  __this_03[1].fields.m_CachedPtr = 0x3f4000003e800000;
  *(undefined4 *)&__this_03[1].fields.m_CancellationTokenSource = 0x3f800000;
  *(undefined4 *)&__this_03[2].klass = 1;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&__this_03[1].klass = 1;
  *(undefined1 *)((long)&__this_03[1].klass + 2) = 1;
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_Material);
  __this_03[1].monitor = __this_02;
  il2cpp_runtime_helper_022b4080(&__this_03[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.BloomOptimized$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_BloomOptimized___ctor (UnityStandardAssets_ImageEffects_BloomOptimized_o* __this, const MethodInfo* method);
// 0x4579b10

void UnityStandardAssets_ImageEffects_BloomOptimized___ctor
               (UnityStandardAssets_ImageEffects_BloomOptimized_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  (__this->fields).createdMaterials = (System_Collections_Generic_List_Material__o *)0x3f4000003e800000;
  (__this->fields).threshold = 1.0;
  (__this->fields).blurSize = 1.4013e-45;
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


