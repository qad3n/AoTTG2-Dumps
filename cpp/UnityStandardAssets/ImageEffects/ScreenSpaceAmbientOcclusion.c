// Type: UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ScreenSpaceAmbientOcclusion.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ScreenSpaceAmbientOcclusion.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$CreateMaterial
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterial (UnityEngine_Shader_o* shader, const MethodInfo* method);
// 0x4262230

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterial
          (UnityEngine_Shader_o *shader,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *__this;
  
  if (DAT_0570527c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570527c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_Object_o *)0x0;
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)shader,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor((UnityEngine_Material_o *)__this,shader,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Object__set_hideFlags(__this,0x3d,(MethodInfo *)0x0);
  }
  return (UnityEngine_Material_o *)__this;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$DestroyMaterial
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__DestroyMaterial (UnityEngine_Material_o* mat, const MethodInfo* method);
// 0x42622d0

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__DestroyMaterial
               (UnityEngine_Material_o *mat,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_0570527d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570527d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)mat,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate((UnityEngine_Object_o *)mat,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnDisable (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, const MethodInfo* method);
// 0x4262350

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnDisable
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  bool_conflict bVar1;
  
  exists = (UnityEngine_Object_o *)(__this->fields).m_SSAOMaterial;
  if (DAT_0570527d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570527d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(exists,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__Start (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, const MethodInfo* method);
// 0x42623d0

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__Start
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  UnityEngine_Material_o *__this_00;
  bool_conflict bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  if (DAT_0570527e == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570527e = '\x01';
  }
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(1,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials
                (__this,method_00);
      exists = (UnityEngine_Object_o *)(__this->fields).m_SSAOMaterial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        __this_00 = (__this->fields).m_SSAOMaterial;
        if (__this_00 == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar2 = UnityEngine_Material__get_passCount(__this_00,(MethodInfo *)0x0);
        if (iVar2 == 5) {
          *(undefined1 *)&(__this->fields).m_Supported = 1;
          return;
        }
      }
    }
  }
  *(undefined1 *)&(__this->fields).m_Supported = 0;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$OnEnable
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnEnable (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, const MethodInfo* method);
// 0x4262540

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnEnable
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Camera_o *__this_00;
  
  if (DAT_0570527f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    DAT_0570527f = '\x01';
  }
  __this_00 = (UnityEngine_Camera_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    uVar1 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(__this_00,uVar1 | 2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$CreateMaterials
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, const MethodInfo* method);
// 0x4262480

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  UnityEngine_Shader_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *method_00;
  
  if (DAT_05705280 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_RandomTexture");
    DAT_05705280 = '\x01';
  }
  exists = (UnityEngine_Object_o *)(__this->fields).m_SSAOMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  __this_00 = (__this->fields).m_SSAOShader;
  if (__this_00 != (UnityEngine_Shader_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Shader__get_isSupported(__this_00,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    pUVar2 = UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterial
                       ((__this->fields).m_SSAOShader,method_00);
    (__this->fields).m_SSAOMaterial = pUVar2;
    il2cpp_runtime_glue(&(__this->fields).m_SSAOMaterial,pUVar2);
    pUVar2 = (__this->fields).m_SSAOMaterial;
    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture
                (pUVar2,"_RandomTexture",(UnityEngine_Texture_o *)(__this->fields).m_RandomTexture,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnRenderImage (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x42625a0

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnRenderImage
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_Shader_o *__this_00;
  UnityEngine_Material_o *pUVar1;
  UnityEngine_Texture2D_o *pUVar2;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int32_t iVar7;
  int32_t iVar8;
  UnityEngine_Texture_o *value;
  UnityEngine_Camera_o *pUVar9;
  UnityEngine_Texture_o *pUVar10;
  MethodInfo *method_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  float fStack_60;
  
  if (DAT_05705281 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_FarCorner");
    il2cpp_init_method_metadata(&"_NoiseScale");
    il2cpp_init_method_metadata(&"_TexelOffsetScale");
    il2cpp_init_method_metadata(&"_Params");
    il2cpp_init_method_metadata(&"_SSAO");
    DAT_05705281 = '\x01';
  }
  if ((char)(__this->fields).m_Supported == '\0') {
LAB_04262c0e:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (__this->fields).m_SSAOShader;
  if (__this_00 == (UnityEngine_Shader_o *)0x0) goto LAB_04262c3f;
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Shader__get_isSupported(__this_00,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') goto LAB_04262c0e;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials(__this,method_00);
  iVar6 = (__this->fields).m_Downsampling;
  iVar4 = 6;
  if (iVar6 < 7) {
    iVar4 = iVar6;
  }
  iVar6 = 1;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  (__this->fields).m_Downsampling = iVar6;
  fVar11 = (__this->fields).m_Radius;
  fVar12 = (__this->fields).m_OcclusionIntensity;
  fStack_60 = 1.0;
  fVar13 = 1.0;
  if (fVar11 <= 1.0) {
    fVar13 = fVar11;
  }
  (__this->fields).m_Radius =
       (float)(~-(uint)(0.05 <= fVar11) & 0x3d4ccccd | (uint)fVar13 & -(uint)(0.05 <= fVar11));
  fVar11 = (__this->fields).m_MinZ;
  fVar13 = 4.0;
  if (fVar12 <= 4.0) {
    fVar13 = fVar12;
  }
  fVar14 = 0.5;
  if (fVar11 <= 0.5) {
    fVar14 = fVar11;
  }
  (__this->fields).m_MinZ =
       (float)(~-(uint)(1e-05 <= fVar11) & 0x3727c5ac | (uint)fVar14 & -(uint)(1e-05 <= fVar11));
  (__this->fields).m_OcclusionIntensity =
       (float)(~-(uint)(0.5 <= fVar12) & 0x3f000000 | (uint)fVar13 & -(uint)(0.5 <= fVar12));
  fVar11 = (__this->fields).m_OcclusionAttenuation;
  fVar12 = 2.0;
  if (fVar11 <= 2.0) {
    fVar12 = fVar11;
  }
  (__this->fields).m_OcclusionAttenuation =
       (float)(~-(uint)(0.2 <= fVar11) & 0x3e4ccccd | (uint)fVar12 & -(uint)(0.2 <= fVar11));
  iVar6 = (__this->fields).m_Blur;
  iVar4 = 4;
  if (iVar6 < 5) {
    iVar4 = iVar6;
  }
  iVar6 = 0;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  (__this->fields).m_Blur = iVar6;
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    iVar4 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    iVar6 = (__this->fields).m_Downsampling;
    iVar5 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method,
                       (long)iVar4 % (long)iVar6 & 0xffffffff);
    value = (UnityEngine_Texture_o *)
            UnityEngine_RenderTexture__GetTemporary
                      (iVar4 / iVar6,iVar5 / (__this->fields).m_Downsampling,0,(MethodInfo *)0x0);
    pUVar9 = (UnityEngine_Camera_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
      fVar11 = UnityEngine_Camera__get_fieldOfView(pUVar9,(MethodInfo *)0x0);
      pUVar9 = (UnityEngine_Camera_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
      if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
        fVar12 = UnityEngine_Camera__get_farClipPlane(pUVar9,(MethodInfo *)0x0);
        fVar11 = tanf(fVar11 * 0.017453292 * 0.5);
        pUVar9 = (UnityEngine_Camera_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
        if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
          fVar13 = UnityEngine_Camera__get_aspect(pUVar9,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).m_SSAOMaterial;
          if (pUVar1 != (UnityEngine_Material_o *)0x0) {
            value_00.fields.x = fVar13 * fVar11 * fVar12;
            value_00.fields.y = fVar11 * fVar12;
            value_00.fields.z = fVar12;
            value_00.fields.w = 0.0;
            UnityEngine_Material__SetVector(pUVar1,"_FarCorner",value_00,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).m_RandomTexture;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar3 = UnityEngine_Object__op_Implicit
                              ((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
            fVar11 = 1.0;
            if ((char)bVar3 != '\0') {
              pUVar2 = (__this->fields).m_RandomTexture;
              if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_04262c3f;
              iVar6 = (*(pUVar2->klass->vtable)._5_get_width.methodPtr)
                                (pUVar2,(pUVar2->klass->vtable)._5_get_width.method);
              pUVar2 = (__this->fields).m_RandomTexture;
              if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_04262c3f;
              iVar4 = (*(pUVar2->klass->vtable)._7_get_height.methodPtr)
                                (pUVar2,(pUVar2->klass->vtable)._7_get_height.method);
              fVar11 = (float)iVar6;
              fStack_60 = (float)iVar4;
            }
            if (value != (UnityEngine_Texture_o *)0x0) {
              pUVar1 = (__this->fields).m_SSAOMaterial;
              iVar6 = (*(value->klass->vtable)._5_get_width.methodPtr)
                                (value,(value->klass->vtable)._5_get_width.method);
              iVar4 = (*(value->klass->vtable)._7_get_height.methodPtr)
                                (value,(value->klass->vtable)._7_get_height.method);
              if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                value_01.fields.x = (float)iVar6 / fVar11;
                value_01.fields.y = (float)iVar4 / fStack_60;
                value_01.fields.z = 0.0;
                value_01.fields.w = 0.0;
                UnityEngine_Material__SetVector(pUVar1,"_NoiseScale",value_01,(MethodInfo *)0x0);
                pUVar1 = (__this->fields).m_SSAOMaterial;
                if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                  value_02.fields.z = 1.0 / (__this->fields).m_OcclusionAttenuation;
                  value_02.fields.w = (__this->fields).m_OcclusionIntensity;
                  value_02.fields.y = (__this->fields).m_MinZ;
                  value_02.fields.x = (__this->fields).m_Radius;
                  UnityEngine_Material__SetVector(pUVar1,"_Params",value_02,(MethodInfo *)0x0);
                  iVar7 = (__this->fields).m_SampleCount;
                  iVar6 = (__this->fields).m_Blur;
                  pUVar10 = (UnityEngine_Texture_o *)0x0;
                  if (iVar6 < 1) {
                    pUVar10 = (UnityEngine_Texture_o *)source;
                  }
                  pUVar1 = (__this->fields).m_SSAOMaterial;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  UnityEngine_Graphics__Blit
                            (pUVar10,(UnityEngine_RenderTexture_o *)value,pUVar1,iVar7,
                             (MethodInfo *)0x0);
                  if (iVar6 < 1) {
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                  }
                  else {
                    iVar7 = (*(source->klass->vtable)._5_get_width.methodPtr)
                                      (source,(source->klass->vtable)._5_get_width.method);
                    iVar8 = (*(source->klass->vtable)._7_get_height.methodPtr)
                                      (source,(source->klass->vtable)._7_get_height.method);
                    pUVar10 = (UnityEngine_Texture_o *)
                              UnityEngine_RenderTexture__GetTemporary
                                        (iVar7,iVar8,0,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    iVar6 = (__this->fields).m_Blur;
                    iVar4 = (*(source->klass->vtable)._5_get_width.methodPtr)
                                      (source,(source->klass->vtable)._5_get_width.method);
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_04262c3f;
                    UnityEngine_Material__SetVector
                              (pUVar1,"_TexelOffsetScale",
                               (UnityEngine_Vector4_o)ZEXT416((uint)((float)iVar6 / (float)iVar4)),
                               (MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_04262c3f;
                    UnityEngine_Material__SetTexture(pUVar1,"_SSAO",value,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    UnityEngine_Graphics__Blit
                              ((UnityEngine_Texture_o *)0x0,(UnityEngine_RenderTexture_o *)pUVar10,
                               pUVar1,3,(MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)value,(MethodInfo *)0x0);
                    iVar7 = (*(source->klass->vtable)._5_get_width.methodPtr)
                                      (source,(source->klass->vtable)._5_get_width.method);
                    iVar8 = (*(source->klass->vtable)._7_get_height.methodPtr)
                                      (source,(source->klass->vtable)._7_get_height.method);
                    value = (UnityEngine_Texture_o *)
                            UnityEngine_RenderTexture__GetTemporary(iVar7,iVar8,0,(MethodInfo *)0x0)
                    ;
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    iVar6 = (__this->fields).m_Blur;
                    iVar4 = (*(source->klass->vtable)._7_get_height.methodPtr)
                                      (source,(source->klass->vtable)._7_get_height.method);
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_04262c3f;
                    UnityEngine_Material__SetVector
                              (pUVar1,"_TexelOffsetScale",
                               (UnityEngine_Vector4_o)
                               (ZEXT416((uint)((float)iVar6 / (float)iVar4)) << 0x20),
                               (MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto LAB_04262c3f;
                    UnityEngine_Material__SetTexture(pUVar1,"_SSAO",pUVar10,(MethodInfo *)0x0);
                    UnityEngine_Graphics__Blit
                              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)value,
                               (__this->fields).m_SSAOMaterial,3,(MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)pUVar10,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                  }
                  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetTexture(pUVar1,"_SSAO",value,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    UnityEngine_Graphics__Blit
                              ((UnityEngine_Texture_o *)source,destination,pUVar1,4,
                               (MethodInfo *)0x0);
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
    }
  }
LAB_04262c3f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion___ctor (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, const MethodInfo* method);
// 0x4262c50

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion___ctor
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,
               MethodInfo *method)

{
  (__this->fields).m_Radius = 0.4;
  (__this->fields).m_SampleCount = 1;
  (__this->fields).m_OcclusionIntensity = 1.5;
  (__this->fields).m_Blur = 2;
  (__this->fields).m_Downsampling = 2;
  (__this->fields).m_OcclusionAttenuation = 1.0;
  (__this->fields).m_MinZ = 0.01;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


