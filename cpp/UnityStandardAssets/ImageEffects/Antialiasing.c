// Type: UnityStandardAssets.ImageEffects.Antialiasing
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Antialiasing.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Antialiasing.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.Antialiasing$$CurrentAAMaterial
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_Antialiasing__CurrentAAMaterial (UnityStandardAssets_ImageEffects_Antialiasing_o* __this, const MethodInfo* method);
// 0x4575ca0

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_Antialiasing__CurrentAAMaterial
          (UnityStandardAssets_ImageEffects_Antialiasing_o *__this,MethodInfo *method)

{
  switch(*(undefined4 *)&(__this->fields).createdMaterials) {
  case 0:
    return (UnityEngine_Material_o *)(__this->fields).shaderFXAAII;
  case 1:
    return (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII;
  case 2:
    return (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset2;
  case 3:
    return (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset3;
  case 4:
    return (UnityEngine_Material_o *)(__this->fields).nfaaShader;
  case 5:
    return (UnityEngine_Material_o *)(__this->fields).ssaaShader;
  case 6:
    return (UnityEngine_Material_o *)(__this->fields).dlaaShader;
  default:
    return (UnityEngine_Material_o *)0x0;
  }
}


// UnityStandardAssets.ImageEffects.Antialiasing$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_Antialiasing__CheckResources (UnityStandardAssets_ImageEffects_Antialiasing_o* __this, const MethodInfo* method);
// 0x4575d00

bool_conflict
UnityStandardAssets_ImageEffects_Antialiasing__CheckResources
          (UnityStandardAssets_ImageEffects_Antialiasing_o *__this,MethodInfo *method)

{
  UnityEngine_Shader_o **ppUVar1;
  int32_t *piVar2;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  uint uVar7;
  bool_conflict bVar8;
  bool_conflict extraout_EAX;
  UnityEngine_Material_o *pUVar9;
  ulong extraout_RAX;
  UnityEngine_Camera_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_o *pSVar11;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *in_RCX;
  System_Collections_Generic_List_object__o *exists;
  char cVar12;
  MethodInfo *method_00;
  MethodInfo_24E7B40 *exists_00;
  UnityEngine_Shader_o *__this_03;
  undefined1 uVar13;
  ulong uVar10;
  
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar13 = 0;
  bVar5 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar5;
  iVar6 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar6) {
    bVar5 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar13 = (undefined1)bVar5;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar13;
  bVar5 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  pUVar9 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).nfaa,
                      (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset2,in_RCX);
  (__this->fields).shaderFXAAPreset2 = (UnityEngine_Shader_o *)pUVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields).shaderFXAAPreset2,pUVar9);
  pUVar9 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).materialFXAAPreset2,
                      (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset3,in_RCX);
  (__this->fields).shaderFXAAPreset3 = (UnityEngine_Shader_o *)pUVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields).shaderFXAAPreset3,pUVar9);
  pUVar9 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).materialFXAAPreset3,
                      (UnityEngine_Material_o *)(__this->fields).shaderFXAAII,in_RCX);
  (__this->fields).shaderFXAAII = (UnityEngine_Shader_o *)pUVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields).shaderFXAAII,pUVar9);
  pUVar9 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).materialFXAAII,
                      (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII,in_RCX);
  (__this->fields).shaderFXAAIII = (UnityEngine_Shader_o *)pUVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields).shaderFXAAIII,pUVar9);
  pUVar9 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).dlaa,
                      (UnityEngine_Material_o *)(__this->fields).nfaaShader,in_RCX);
  (__this->fields).nfaaShader = (UnityEngine_Shader_o *)pUVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields).nfaaShader,pUVar9);
  pUVar9 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      *(UnityEngine_Shader_o **)&(__this->fields).edgeSharpness,
                      (UnityEngine_Material_o *)(__this->fields).ssaaShader,in_RCX);
  (__this->fields).ssaaShader = (UnityEngine_Shader_o *)pUVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ssaaShader,pUVar9);
  ppUVar1 = &(__this->fields).dlaaShader;
  pUVar9 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).ssaa,
                      (UnityEngine_Material_o *)(__this->fields).dlaaShader,in_RCX);
  (__this->fields).dlaaShader = (UnityEngine_Shader_o *)pUVar9;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  cVar12 = (char)pUVar9;
  __this_03 = *(UnityEngine_Shader_o **)&(__this->fields).edgeSharpness;
  if (__this_03 != (UnityEngine_Shader_o *)0x0) {
    uVar7 = UnityEngine_Shader__get_isSupported(__this_03,(MethodInfo *)0x0);
    uVar10 = (ulong)uVar7;
    if ((char)uVar7 == '\0') {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
      UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
                ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
      uVar10 = extraout_RAX;
    }
    return (bool_conflict)
           CONCAT71((int7)(uVar10 >> 8),*(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
  }
  *(undefined1 *)((long)&((UnityEngine_Component_o *)(__this_03 + 1))->monitor + 2) = 1;
  uVar13 = 0;
  bVar5 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&((UnityEngine_Component_o *)(__this_03 + 1))->monitor = (char)bVar5;
  iVar6 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar6) {
    bVar5 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar13 = (undefined1)bVar5;
  }
  *(undefined1 *)((long)&((UnityEngine_Component_o *)(__this_03 + 1))->monitor + 1) = uVar13;
  bVar5 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_04575f7f:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_03,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&((UnityEngine_Component_o *)(__this_03 + 1))->monitor + 2) = 0;
    return 0;
  }
  bVar5 = (bool_conflict)CONCAT71((int7)((ulong)ppUVar1 >> 8),1);
  if (cVar12 == '\0') {
    return bVar5;
  }
  bVar8 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(1,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') goto label_04575f7f;
  exists_00 = MethodInfo_Camera_GetComponent_Camera;
  __this_00 = (UnityEngine_Camera_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_Camera_GetComponent_Camera);
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    uVar7 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(__this_00,uVar7 | 1,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Missing shader in ");
    g_data_057af0e7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists_00,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar11 = (System_String_o *)
              (*(((UnityEngine_Component_o *)__this_03)->klass->vtable)._3_ToString.methodPtr)
                        (__this_03,(((UnityEngine_Component_o *)__this_03)->klass->vtable)._3_ToString.method)
    ;
    pSVar11 = System_String__Concat_3ae5ba0("Missing shader in ",pSVar11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (System_Collections_Generic_List_object__o *)0x0;
    UnityEngine_Debug__Log((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
    goto label_045761b2;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = exists;
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_045760ff:
    if (exists_00 == (MethodInfo_24E7B40 *)0x0) goto label_045761bf;
  }
  else {
    if (exists == (System_Collections_Generic_List_object__o *)0x0) goto label_045761bf;
    __this_01 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Material__get_shader((UnityEngine_Material_o *)exists,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)exists_00,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_045760ff;
    if (exists_00 == (MethodInfo_24E7B40 *)0x0) goto label_045761bf;
    bVar5 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)exists_00,(MethodInfo *)0x0);
    __this_02 = exists;
    if ((char)bVar5 != '\0') goto label_045761b2;
  }
  __this_02 = (System_Collections_Generic_List_object__o *)0x0;
  bVar5 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)exists_00,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_045761b2:
    return (bool_conflict)__this_02;
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor
            ((UnityEngine_Material_o *)__this_02,(UnityEngine_Shader_o *)exists_00,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  __this_01 = (System_Collections_Generic_List_object__o *)
              (((UnityEngine_Component_o *)(__this_03 + 1))->fields).m_CachedPtr;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar2 = &(__this_01->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (__this_01->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar7 = (__this_01->fields)._size;
      if (uVar7 < (uint)pSVar3->max_length) {
        (__this_01->fields)._size = uVar7 + 1;
        __this_01 = (System_Collections_Generic_List_object__o *)(pSVar3->m_Items + (int)uVar7);
        pSVar3->m_Items[(int)uVar7] = (Il2CppObject *)__this_02;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_01,(Il2CppObject *)__this_02,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_02,0x34,(MethodInfo *)0x0);
        goto label_045761b2;
      }
    }
  }
label_045761bf:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this_01->fields)._syncRoot + 2) = 0;
  return extraout_EAX;
}


// UnityStandardAssets.ImageEffects.Antialiasing$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Antialiasing__OnRenderImage (UnityStandardAssets_ImageEffects_Antialiasing_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4576290

void UnityStandardAssets_ImageEffects_Antialiasing__OnRenderImage
               (UnityStandardAssets_ImageEffects_Antialiasing_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  char cVar4;
  bool_conflict bVar5;
  int iVar6;
  int32_t width;
  int32_t height;
  UnityEngine_Texture_o *source_00;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057af0a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_OffsetScale");
    il2cpp_runtime_helper_023445d0(&"_EdgeThreshold");
    il2cpp_runtime_helper_023445d0(&"_EdgeSharpness");
    il2cpp_runtime_helper_023445d0(&"_BlurRadius");
    il2cpp_runtime_helper_023445d0(&"_EdgeThresholdMin");
    g_data_057af0a0 = '\x01';
  }
  cVar4 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar4 != '\0') {
    iVar6 = *(int *)&(__this->fields).createdMaterials;
    if (iVar6 == 1) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).shaderFXAAIII;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII;
        __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat(pUVar3,"_EdgeThresholdMin",(__this->fields).offsetScale,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII;
          __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_045767d3;
          UnityEngine_Material__SetFloat(pUVar3,"_EdgeThreshold",(__this->fields).blurRadius,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII;
          __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_045767d3;
          UnityEngine_Material__SetFloat
                    (pUVar3,"_EdgeSharpness",(__this->fields).edgeThresholdMin,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII;
          iVar6 = *(int *)(TypeInfo_Graphics + 0xe4);
          goto joined_r0x045765a3;
        }
        goto label_045767d3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 3) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).shaderFXAAPreset3;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset3;
        iVar6 = *(int *)(TypeInfo_Graphics + 0xe4);
        goto joined_r0x045765a3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 2) {
      __this_01 = (UnityEngine_MonoBehaviour_o *)(__this->fields).shaderFXAAPreset2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (source != (UnityEngine_RenderTexture_o *)0x0) {
          UnityEngine_Texture__set_anisoLevel((UnityEngine_Texture_o *)source,4,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset2;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__Blit_4dc2ad0
                    ((UnityEngine_Texture_o *)source,destination,pUVar3,(MethodInfo *)0x0);
          UnityEngine_Texture__set_anisoLevel((UnityEngine_Texture_o *)source,0,(MethodInfo *)0x0);
          return;
        }
        goto label_045767d3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 0) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).shaderFXAAII;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAII;
        iVar6 = *(int *)(TypeInfo_Graphics + 0xe4);
        goto joined_r0x045765a3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 5) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).ssaaShader;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).ssaaShader;
        iVar6 = *(int *)(TypeInfo_Graphics + 0xe4);
joined_r0x045765a3:
        if (iVar6 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2ad0
                  ((UnityEngine_Texture_o *)source,destination,pUVar3,(MethodInfo *)0x0);
        return;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 6) {
      __this_01 = (UnityEngine_MonoBehaviour_o *)(__this->fields).dlaaShader;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (source != (UnityEngine_RenderTexture_o *)0x0) {
          UnityEngine_Texture__set_anisoLevel((UnityEngine_Texture_o *)source,0,(MethodInfo *)0x0);
          width = (*(source->klass->vtable)._5_get_width.methodPtr)
                            (source,(source->klass->vtable)._5_get_width.method);
          height = (*(source->klass->vtable)._7_get_height.methodPtr)
                             (source,(source->klass->vtable)._7_get_height.method);
          source_00 = (UnityEngine_Texture_o *)
                      UnityEngine_RenderTexture__GetTemporary_4de1e00(width,height,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).dlaaShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,pUVar3,0,
                     (MethodInfo *)0x0);
          cVar4 = *(char *)&(__this->fields).edgeThreshold;
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).dlaaShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__Blit_4dc2a60
                    (source_00,destination,pUVar3,2 - (uint)(cVar4 == '\0'),(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
          return;
        }
        goto label_045767d3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 4) {
      __this_01 = (UnityEngine_MonoBehaviour_o *)(__this->fields).nfaaShader;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (source != (UnityEngine_RenderTexture_o *)0x0) {
          UnityEngine_Texture__set_anisoLevel((UnityEngine_Texture_o *)source,0,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).nfaaShader;
          __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
          if (pUVar3 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetFloat(pUVar3,"_OffsetScale",(float)(__this->fields).mode,(MethodInfo *)0x0)
            ;
            pUVar3 = (UnityEngine_Material_o *)(__this->fields).nfaaShader;
            __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
            if (pUVar3 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetFloat
                        (pUVar3,"_BlurRadius",(float)(__this->fields).showGeneratedNormals,(MethodInfo *)0x0);
              pUVar3 = (UnityEngine_Material_o *)(__this->fields).nfaaShader;
              bVar1 = *(byte *)((long)&(__this->fields).createdMaterials + 4);
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Graphics__Blit_4dc2a60
                        ((UnityEngine_Texture_o *)source,destination,pUVar3,(uint)bVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
label_045767d3:
        il2cpp_runtime_helper_022b2c90();
        *(undefined4 *)&__this_01[1].fields.m_CachedPtr = 1;
        *(undefined4 *)&__this_01[1].fields.m_CancellationTokenSource = 0x3e4ccccd;
        *(undefined4 *)((long)&__this_01[1].fields.m_CancellationTokenSource + 4) = 0x41900000;
        *(undefined4 *)&__this_01[2].klass = 0x3d4ccccd;
        *(undefined4 *)((long)&__this_01[2].klass + 4) = 0x3e4ccccd;
        *(undefined4 *)&__this_01[2].monitor = 0x40800000;
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
    }
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Antialiasing$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Antialiasing___ctor (UnityStandardAssets_ImageEffects_Antialiasing_o* __this, const MethodInfo* method);
// 0x45767e0

void UnityStandardAssets_ImageEffects_Antialiasing___ctor
               (UnityStandardAssets_ImageEffects_Antialiasing_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  *(undefined4 *)&(__this->fields).createdMaterials = 1;
  (__this->fields).mode = 0x3e4ccccd;
  (__this->fields).showGeneratedNormals = 0x41900000;
  (__this->fields).offsetScale = 0.05;
  (__this->fields).blurRadius = 0.2;
  (__this->fields).edgeThresholdMin = 4.0;
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


