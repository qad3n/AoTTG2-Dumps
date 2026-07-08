// Type: UnityStandardAssets.ImageEffects.Antialiasing
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Antialiasing.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Antialiasing.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.Antialiasing$$CurrentAAMaterial
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_Antialiasing__CurrentAAMaterial (UnityStandardAssets_ImageEffects_Antialiasing_o* __this, const MethodInfo* method);
// 0x4250ba0

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
// 0x4250c00

bool_conflict
UnityStandardAssets_ImageEffects_Antialiasing__CheckResources
          (UnityStandardAssets_ImageEffects_Antialiasing_o *__this,MethodInfo *method)

{
  UnityEngine_Shader_o *__this_00;
  bool_conflict bVar1;
  int32_t iVar2;
  uint uVar3;
  UnityEngine_Material_o *pUVar4;
  ulong extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined1 uVar6;
  ulong uVar5;
  
  if (DAT_0570526e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    DAT_0570526e = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar6 = 0;
  bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar1;
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar2) {
    bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar6 = (undefined1)bVar1;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar6;
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  pUVar4 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).nfaa,
                      (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset2,in_RCX);
  (__this->fields).shaderFXAAPreset2 = (UnityEngine_Shader_o *)pUVar4;
  il2cpp_runtime_glue(&(__this->fields).shaderFXAAPreset2,pUVar4);
  pUVar4 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).materialFXAAPreset2,
                      (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset3,in_RCX);
  (__this->fields).shaderFXAAPreset3 = (UnityEngine_Shader_o *)pUVar4;
  il2cpp_runtime_glue(&(__this->fields).shaderFXAAPreset3,pUVar4);
  pUVar4 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).materialFXAAPreset3,
                      (UnityEngine_Material_o *)(__this->fields).shaderFXAAII,in_RCX);
  (__this->fields).shaderFXAAII = (UnityEngine_Shader_o *)pUVar4;
  il2cpp_runtime_glue(&(__this->fields).shaderFXAAII,pUVar4);
  pUVar4 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).materialFXAAII,
                      (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII,in_RCX);
  (__this->fields).shaderFXAAIII = (UnityEngine_Shader_o *)pUVar4;
  il2cpp_runtime_glue(&(__this->fields).shaderFXAAIII,pUVar4);
  pUVar4 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).dlaa,
                      (UnityEngine_Material_o *)(__this->fields).nfaaShader,in_RCX);
  (__this->fields).nfaaShader = (UnityEngine_Shader_o *)pUVar4;
  il2cpp_runtime_glue(&(__this->fields).nfaaShader,pUVar4);
  pUVar4 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      *(UnityEngine_Shader_o **)&(__this->fields).edgeSharpness,
                      (UnityEngine_Material_o *)(__this->fields).ssaaShader,in_RCX);
  (__this->fields).ssaaShader = (UnityEngine_Shader_o *)pUVar4;
  il2cpp_runtime_glue(&(__this->fields).ssaaShader,pUVar4);
  pUVar4 = UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
                     ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                      (UnityEngine_Shader_o *)(__this->fields).ssaa,
                      (UnityEngine_Material_o *)(__this->fields).dlaaShader,in_RCX);
  (__this->fields).dlaaShader = (UnityEngine_Shader_o *)pUVar4;
  il2cpp_runtime_glue(&(__this->fields).dlaaShader);
  __this_00 = *(UnityEngine_Shader_o **)&(__this->fields).edgeSharpness;
  if (__this_00 != (UnityEngine_Shader_o *)0x0) {
    uVar3 = UnityEngine_Shader__get_isSupported(__this_00,(MethodInfo *)0x0);
    uVar5 = (ulong)uVar3;
    if ((char)uVar3 == '\0') {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
      UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
                ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
      uVar5 = extraout_RAX;
    }
    return (bool_conflict)
           CONCAT71((int7)(uVar5 >> 8),
                    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Antialiasing$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Antialiasing__OnRenderImage (UnityStandardAssets_ImageEffects_Antialiasing_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4251190

void UnityStandardAssets_ImageEffects_Antialiasing__OnRenderImage
               (UnityStandardAssets_ImageEffects_Antialiasing_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

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
  
  if (DAT_05705224 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_OffsetScale");
    il2cpp_init_method_metadata(&"_EdgeThreshold");
    il2cpp_init_method_metadata(&"_EdgeSharpness");
    il2cpp_init_method_metadata(&"_BlurRadius");
    il2cpp_init_method_metadata(&"_EdgeThresholdMin");
    DAT_05705224 = '\x01';
  }
  cVar4 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar4 != '\0') {
    iVar6 = *(int *)&(__this->fields).createdMaterials;
    if (iVar6 == 1) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).shaderFXAAIII;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII;
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat
                    (pUVar3,"_EdgeThresholdMin",(__this->fields).offsetScale,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII;
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_042516d3;
          UnityEngine_Material__SetFloat
                    (pUVar3,"_EdgeThreshold",(__this->fields).blurRadius,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII;
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_042516d3;
          UnityEngine_Material__SetFloat
                    (pUVar3,"_EdgeSharpness",(__this->fields).edgeThresholdMin,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAIII;
          iVar6 = *(int *)(TypeInfo_Graphics + 0xe4);
          goto joined_r0x042514a3;
        }
        goto LAB_042516d3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 3) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).shaderFXAAPreset3;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset3;
        iVar6 = *(int *)(TypeInfo_Graphics + 0xe4);
        goto joined_r0x042514a3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 2) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).shaderFXAAPreset2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (source != (UnityEngine_RenderTexture_o *)0x0) {
          UnityEngine_Texture__set_anisoLevel((UnityEngine_Texture_o *)source,4,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAPreset2;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    ((UnityEngine_Texture_o *)source,destination,pUVar3,(MethodInfo *)0x0);
          UnityEngine_Texture__set_anisoLevel((UnityEngine_Texture_o *)source,0,(MethodInfo *)0x0);
          return;
        }
        goto LAB_042516d3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 0) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).shaderFXAAII;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).shaderFXAAII;
        iVar6 = *(int *)(TypeInfo_Graphics + 0xe4);
        goto joined_r0x042514a3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 5) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).ssaaShader;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar3 = (UnityEngine_Material_o *)(__this->fields).ssaaShader;
        iVar6 = *(int *)(TypeInfo_Graphics + 0xe4);
joined_r0x042514a3:
        if (iVar6 == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__Blit
                  ((UnityEngine_Texture_o *)source,destination,pUVar3,(MethodInfo *)0x0);
        return;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 6) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).dlaaShader;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (source != (UnityEngine_RenderTexture_o *)0x0) {
          UnityEngine_Texture__set_anisoLevel((UnityEngine_Texture_o *)source,0,(MethodInfo *)0x0);
          width = (*(source->klass->vtable)._5_get_width.methodPtr)
                            (source,(source->klass->vtable)._5_get_width.method);
          height = (*(source->klass->vtable)._7_get_height.methodPtr)
                             (source,(source->klass->vtable)._7_get_height.method);
          source_00 = (UnityEngine_Texture_o *)
                      UnityEngine_RenderTexture__GetTemporary(width,height,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).dlaaShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,pUVar3
                     ,0,(MethodInfo *)0x0);
          cVar4 = *(char *)&(__this->fields).edgeThreshold;
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).dlaaShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Graphics__Blit
                    (source_00,destination,pUVar3,2 - (uint)(cVar4 == '\0'),(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
          return;
        }
        goto LAB_042516d3;
      }
      iVar6 = *(int *)&(__this->fields).createdMaterials;
    }
    if (iVar6 == 4) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).nfaaShader;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (source != (UnityEngine_RenderTexture_o *)0x0) {
          UnityEngine_Texture__set_anisoLevel((UnityEngine_Texture_o *)source,0,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Material_o *)(__this->fields).nfaaShader;
          if (pUVar3 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetFloat
                      (pUVar3,"_OffsetScale",(float)(__this->fields).mode,(MethodInfo *)0x0);
            pUVar3 = (UnityEngine_Material_o *)(__this->fields).nfaaShader;
            if (pUVar3 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetFloat
                        (pUVar3,"_BlurRadius",(float)(__this->fields).showGeneratedNormals,
                         (MethodInfo *)0x0);
              pUVar3 = (UnityEngine_Material_o *)(__this->fields).nfaaShader;
              bVar1 = *(byte *)((long)&(__this->fields).createdMaterials + 4);
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Graphics__Blit
                        ((UnityEngine_Texture_o *)source,destination,pUVar3,(uint)bVar1,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
LAB_042516d3:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Antialiasing$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Antialiasing___ctor (UnityStandardAssets_ImageEffects_Antialiasing_o* __this, const MethodInfo* method);
// 0x42516e0

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


