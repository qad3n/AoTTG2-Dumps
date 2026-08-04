// Type: UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ScreenSpaceAmbientOcclusion.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ScreenSpaceAmbientOcclusion.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$CreateMaterial
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterial (UnityEngine_Shader_o* shader, const MethodInfo* method);
// 0x4587330

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterial
          (UnityEngine_Shader_o *shader,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *__this;
  undefined4 extraout_var;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_Object_o *exists;
  
  if (g_data_057af0f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0f8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_Object_o *)0x0;
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)shader,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    exists = __this;
    UnityEngine_Material___ctor((UnityEngine_Material_o *)__this,shader,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Object_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057af0f9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057af0f9 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__DestroyImmediate_4e01e00(exists,(MethodInfo *)0x0);
        return extraout_RAX;
      }
      return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar1);
    }
    UnityEngine_Object__set_hideFlags(__this,0x3d,(MethodInfo *)0x0);
  }
  return (UnityEngine_Material_o *)__this;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$DestroyMaterial
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__DestroyMaterial (UnityEngine_Material_o* mat, const MethodInfo* method);
// 0x45873d0

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__DestroyMaterial
               (UnityEngine_Material_o *mat,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057af0f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0f9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)mat,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)mat,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnDisable (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, const MethodInfo* method);
// 0x4587450

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnDisable
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  bool_conflict bVar1;
  
  exists = (UnityEngine_Object_o *)(__this->fields).m_SSAOMaterial;
  if (g_data_057af0f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0f9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(exists,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__Start (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, const MethodInfo* method);
// 0x45874d0

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__Start
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  UnityEngine_Shader_o *pUVar1;
  UnityEngine_Texture2D_o *pUVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int32_t iVar9;
  UnityEngine_Material_c *pUVar10;
  UnityEngine_Camera_o *pUVar11;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *value;
  UnityEngine_Texture_o *value_00;
  UnityEngine_RenderTexture_o *dest;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *pUVar12;
  MethodInfo *pMVar13;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *source;
  UnityEngine_Material_o *pUVar14;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this_00;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  float fStack_98;
  
  if (g_data_057af0fa == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057af0fa = '\x01';
  }
  bVar3 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pMVar13 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(1,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials(__this,pMVar13);
      exists = (UnityEngine_Object_o *)(__this->fields).m_SSAOMaterial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pUVar14 = (__this->fields).m_SSAOMaterial;
        if (pUVar14 == (UnityEngine_Material_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057af0fc == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&"_RandomTexture");
            g_data_057af0fc = '\x01';
          }
          pUVar10 = pUVar14[3].klass;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            return;
          }
          pUVar1 = (UnityEngine_Shader_o *)pUVar14[2].fields.m_CachedPtr;
          if (pUVar1 != (UnityEngine_Shader_o *)0x0) {
            pMVar13 = (MethodInfo *)0x0;
            bVar3 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              return;
            }
            pUVar10 = (UnityEngine_Material_c *)
                      UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterial
                                ((UnityEngine_Shader_o *)pUVar14[2].fields.m_CachedPtr,pMVar13);
            pUVar14[3].klass = pUVar10;
            il2cpp_runtime_helper_022b4080(pUVar14 + 3,pUVar10);
            if (pUVar14[3].klass != (UnityEngine_Material_c *)0x0) {
              UnityEngine_Material__SetTexture
                        ((UnityEngine_Material_o *)pUVar14[3].klass,"_RandomTexture",pUVar14[3].monitor,
                         (MethodInfo *)0x0);
              return;
            }
          }
          __this_00 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057af0fb == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
            g_data_057af0fb = '\x01';
          }
          source = MethodInfo_Camera_GetComponent_Camera;
          pUVar11 = (UnityEngine_Camera_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
          if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
            uVar5 = UnityEngine_Camera__get_depthTextureMode(pUVar11,(MethodInfo *)0x0);
            UnityEngine_Camera__set_depthTextureMode(pUVar11,uVar5 | 2,(MethodInfo *)0x0);
            return;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057af0fd == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&"_FarCorner");
            il2cpp_runtime_helper_023445d0(&"_NoiseScale");
            il2cpp_runtime_helper_023445d0(&"_TexelOffsetScale");
            il2cpp_runtime_helper_023445d0(&"_Params");
            il2cpp_runtime_helper_023445d0(&"_SSAO");
            g_data_057af0fd = '\x01';
          }
          if ((char)(__this_00->fields).m_Supported == '\0') {
label_04587d0e:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0);
            return;
          }
          pUVar1 = (__this_00->fields).m_SSAOShader;
          pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
          if (pUVar1 == (UnityEngine_Shader_o *)0x0) goto label_04587d3f;
          pMVar13 = (MethodInfo *)0x0;
          bVar3 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') goto label_04587d0e;
          pUVar12 = __this_00;
          UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials(__this_00,pMVar13);
          iVar8 = (__this_00->fields).m_Downsampling;
          iVar6 = 6;
          if (iVar8 < 7) {
            iVar6 = iVar8;
          }
          iVar8 = 1;
          if (0 < iVar6) {
            iVar8 = iVar6;
          }
          (__this_00->fields).m_Downsampling = iVar8;
          fVar15 = (__this_00->fields).m_Radius;
          fVar16 = (__this_00->fields).m_OcclusionIntensity;
          fStack_98 = 1.0;
          fVar17 = 1.0;
          if (fVar15 <= 1.0) {
            fVar17 = fVar15;
          }
          (__this_00->fields).m_Radius =
               (float)(~-(uint)(0.05 <= fVar15) & 0x3d4ccccd | (uint)fVar17 & -(uint)(0.05 <= fVar15));
          fVar15 = (__this_00->fields).m_MinZ;
          fVar17 = 4.0;
          if (fVar16 <= 4.0) {
            fVar17 = fVar16;
          }
          fVar18 = 0.5;
          if (fVar15 <= 0.5) {
            fVar18 = fVar15;
          }
          (__this_00->fields).m_MinZ =
               (float)(~-(uint)(1e-05 <= fVar15) & 0x3727c5ac | (uint)fVar18 & -(uint)(1e-05 <= fVar15));
          (__this_00->fields).m_OcclusionIntensity =
               (float)(~-(uint)(0.5 <= fVar16) & 0x3f000000 | (uint)fVar17 & -(uint)(0.5 <= fVar16));
          fVar15 = (__this_00->fields).m_OcclusionAttenuation;
          fVar16 = 2.0;
          if (fVar15 <= 2.0) {
            fVar16 = fVar15;
          }
          (__this_00->fields).m_OcclusionAttenuation =
               (float)(~-(uint)(0.2 <= fVar15) & 0x3e4ccccd | (uint)fVar16 & -(uint)(0.2 <= fVar15));
          iVar8 = (__this_00->fields).m_Blur;
          iVar6 = 4;
          if (iVar8 < 5) {
            iVar6 = iVar8;
          }
          iVar8 = 0;
          if (-1 < iVar6) {
            iVar8 = iVar6;
          }
          (__this_00->fields).m_Blur = iVar8;
          if (source != (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0) {
            iVar6 = (*(code *)source->klass[1]._1.name)(source,source->klass[1]._1.namespaze);
            iVar8 = (__this_00->fields).m_Downsampling;
            iVar7 = (*source->klass[1]._1.this_arg.data)
                              (source,*(undefined8 *)&source->klass[1]._1.this_arg.bits,
                               (long)iVar6 % (long)iVar8 & 0xffffffff);
            value = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                    UnityEngine_RenderTexture__GetTemporary_4de1d70
                              (iVar6 / iVar8,iVar7 / (__this_00->fields).m_Downsampling,0,(MethodInfo *)0x0);
            pUVar12 = __this_00;
            pUVar11 = (UnityEngine_Camera_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
            if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
              fVar15 = UnityEngine_Camera__get_fieldOfView(pUVar11,(MethodInfo *)0x0);
              pUVar12 = __this_00;
              pUVar11 = (UnityEngine_Camera_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
              if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
                fVar16 = UnityEngine_Camera__get_farClipPlane(pUVar11,(MethodInfo *)0x0);
                fVar15 = tanf(fVar15 * 0.017453292 * 0.5);
                pUVar12 = __this_00;
                pUVar11 = (UnityEngine_Camera_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
                if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
                  fVar17 = UnityEngine_Camera__get_aspect(pUVar11,(MethodInfo *)0x0);
                  pUVar14 = (__this_00->fields).m_SSAOMaterial;
                  pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                  if (pUVar14 != (UnityEngine_Material_o *)0x0) {
                    value_01.fields.x = fVar17 * fVar15 * fVar16;
                    value_01.fields.y = fVar15 * fVar16;
                    value_01.fields.z = fVar16;
                    value_01.fields.w = 0.0;
                    UnityEngine_Material__SetVector(pUVar14,"_FarCorner",value_01,(MethodInfo *)0x0);
                    pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                              (__this_00->fields).m_RandomTexture;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar12,(MethodInfo *)0x0)
                    ;
                    fVar15 = 1.0;
                    if ((char)bVar3 != '\0') {
                      pUVar2 = (__this_00->fields).m_RandomTexture;
                      pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto label_04587d3f;
                      iVar8 = (*(pUVar2->klass->vtable)._5_get_width.methodPtr)();
                      pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                                (__this_00->fields).m_RandomTexture;
                      if (pUVar12 == (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0)
                      goto label_04587d3f;
                      iVar6 = (*((UnityEngine_Object_c *)pUVar12->klass)[1]._1.this_arg.data)();
                      fVar15 = (float)iVar8;
                      fStack_98 = (float)iVar6;
                    }
                    if (value != (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0) {
                      pUVar14 = (__this_00->fields).m_SSAOMaterial;
                      iVar8 = (*(code *)value->klass[1]._1.name)(value,value->klass[1]._1.namespaze);
                      pUVar12 = value;
                      iVar6 = (*value->klass[1]._1.this_arg.data)();
                      if (pUVar14 != (UnityEngine_Material_o *)0x0) {
                        value_02.fields.x = (float)iVar8 / fVar15;
                        value_02.fields.y = (float)iVar6 / fStack_98;
                        value_02.fields.z = 0.0;
                        value_02.fields.w = 0.0;
                        UnityEngine_Material__SetVector(pUVar14,"_NoiseScale",value_02,(MethodInfo *)0x0);
                        pUVar14 = (__this_00->fields).m_SSAOMaterial;
                        pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                        if (pUVar14 != (UnityEngine_Material_o *)0x0) {
                          value_03.fields.z = 1.0 / (__this_00->fields).m_OcclusionAttenuation;
                          value_03.fields.w = (__this_00->fields).m_OcclusionIntensity;
                          value_03.fields.y = (__this_00->fields).m_MinZ;
                          value_03.fields.x = (__this_00->fields).m_Radius;
                          UnityEngine_Material__SetVector(pUVar14,"_Params",value_03,(MethodInfo *)0x0);
                          iVar4 = (__this_00->fields).m_SampleCount;
                          iVar8 = (__this_00->fields).m_Blur;
                          pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                          if (iVar8 < 1) {
                            pUVar12 = source;
                          }
                          pUVar14 = (__this_00->fields).m_SSAOMaterial;
                          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          UnityEngine_Graphics__Blit_4dc2a60
                                    ((UnityEngine_Texture_o *)pUVar12,(UnityEngine_RenderTexture_o *)value,
                                     pUVar14,iVar4,(MethodInfo *)0x0);
                          if (iVar8 < 1) {
                            pUVar14 = (__this_00->fields).m_SSAOMaterial;
                          }
                          else {
                            iVar4 = (*(code *)source->klass[1]._1.name)(source,source->klass[1]._1.namespaze);
                            iVar9 = (*source->klass[1]._1.this_arg.data)
                                              (source,*(undefined8 *)&source->klass[1]._1.this_arg.bits);
                            value_00 = (UnityEngine_Texture_o *)
                                       UnityEngine_RenderTexture__GetTemporary_4de1d70
                                                 (iVar4,iVar9,0,(MethodInfo *)0x0);
                            pUVar14 = (__this_00->fields).m_SSAOMaterial;
                            iVar8 = (__this_00->fields).m_Blur;
                            pUVar12 = source;
                            iVar6 = (*(code *)source->klass[1]._1.name)();
                            if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                            UnityEngine_Material__SetVector
                                      (pUVar14,"_TexelOffsetScale",
                                       (UnityEngine_Vector4_o)ZEXT416((uint)((float)iVar8 / (float)iVar6)),
                                       (MethodInfo *)0x0);
                            pUVar14 = (__this_00->fields).m_SSAOMaterial;
                            pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                            if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                            UnityEngine_Material__SetTexture
                                      (pUVar14,"_SSAO",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
                            pUVar14 = (__this_00->fields).m_SSAOMaterial;
                            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            UnityEngine_Graphics__Blit_4dc2a60
                                      ((UnityEngine_Texture_o *)0x0,(UnityEngine_RenderTexture_o *)value_00,
                                       pUVar14,3,(MethodInfo *)0x0);
                            UnityEngine_RenderTexture__ReleaseTemporary
                                      ((UnityEngine_RenderTexture_o *)value,(MethodInfo *)0x0);
                            iVar4 = (*(code *)source->klass[1]._1.name)(source,source->klass[1]._1.namespaze);
                            iVar9 = (*source->klass[1]._1.this_arg.data)
                                              (source,*(undefined8 *)&source->klass[1]._1.this_arg.bits);
                            value = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                                    UnityEngine_RenderTexture__GetTemporary_4de1d70
                                              (iVar4,iVar9,0,(MethodInfo *)0x0);
                            pUVar14 = (__this_00->fields).m_SSAOMaterial;
                            iVar8 = (__this_00->fields).m_Blur;
                            pUVar12 = source;
                            iVar6 = (*source->klass[1]._1.this_arg.data)();
                            if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                            UnityEngine_Material__SetVector
                                      (pUVar14,"_TexelOffsetScale",
                                       (UnityEngine_Vector4_o)
                                       (ZEXT416((uint)((float)iVar8 / (float)iVar6)) << 0x20),
                                       (MethodInfo *)0x0);
                            pUVar14 = (__this_00->fields).m_SSAOMaterial;
                            pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                            if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                            UnityEngine_Material__SetTexture(pUVar14,"_SSAO",value_00,(MethodInfo *)0x0);
                            UnityEngine_Graphics__Blit_4dc2a60
                                      ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)value,
                                       (__this_00->fields).m_SSAOMaterial,3,(MethodInfo *)0x0);
                            UnityEngine_RenderTexture__ReleaseTemporary
                                      ((UnityEngine_RenderTexture_o *)value_00,(MethodInfo *)0x0);
                            pUVar14 = (__this_00->fields).m_SSAOMaterial;
                          }
                          pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                          if (pUVar14 != (UnityEngine_Material_o *)0x0) {
                            UnityEngine_Material__SetTexture
                                      (pUVar14,"_SSAO",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
                            pUVar14 = (__this_00->fields).m_SSAOMaterial;
                            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            UnityEngine_Graphics__Blit_4dc2a60
                                      ((UnityEngine_Texture_o *)source,dest,pUVar14,4,(MethodInfo *)0x0);
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
label_04587d3f:
          il2cpp_runtime_helper_022b2c90();
          (pUVar12->fields).m_Radius = 0.4;
          (pUVar12->fields).m_SampleCount = 1;
          (pUVar12->fields).m_OcclusionIntensity = 1.5;
          (pUVar12->fields).m_Blur = 2;
          (pUVar12->fields).m_Downsampling = 2;
          (pUVar12->fields).m_OcclusionAttenuation = 1.0;
          (pUVar12->fields).m_MinZ = 0.01;
          UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar12,(MethodInfo *)0x0);
          return;
        }
        iVar4 = UnityEngine_Material__get_passCount(pUVar14,(MethodInfo *)0x0);
        if (iVar4 == 5) {
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
// 0x4587640

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnEnable
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,MethodInfo *method)

{
  UnityEngine_Shader_o *__this_00;
  UnityEngine_Material_o *pUVar1;
  UnityEngine_Texture2D_o *pUVar2;
  uint uVar3;
  bool_conflict bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int32_t iVar8;
  int32_t iVar9;
  UnityEngine_Camera_o *pUVar10;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *value;
  UnityEngine_Texture_o *value_00;
  UnityEngine_RenderTexture_o *dest;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *pUVar11;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *source;
  MethodInfo *method_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  float local_68;
  
  if (g_data_057af0fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0fb = '\x01';
  }
  source = MethodInfo_Camera_GetComponent_Camera;
  pUVar10 = (UnityEngine_Camera_o *)
            UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)__this,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
  if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
    uVar3 = UnityEngine_Camera__get_depthTextureMode(pUVar10,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(pUVar10,uVar3 | 2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_FarCorner");
    il2cpp_runtime_helper_023445d0(&"_NoiseScale");
    il2cpp_runtime_helper_023445d0(&"_TexelOffsetScale");
    il2cpp_runtime_helper_023445d0(&"_Params");
    il2cpp_runtime_helper_023445d0(&"_SSAO");
    g_data_057af0fd = '\x01';
  }
  if ((char)(__this->fields).m_Supported == '\0') {
label_04587d0e:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (__this->fields).m_SSAOShader;
  pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
  if (__this_00 == (UnityEngine_Shader_o *)0x0) goto label_04587d3f;
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Shader__get_isSupported(__this_00,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') goto label_04587d0e;
  pUVar11 = __this;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials(__this,method_00);
  iVar7 = (__this->fields).m_Downsampling;
  iVar5 = 6;
  if (iVar7 < 7) {
    iVar5 = iVar7;
  }
  iVar7 = 1;
  if (0 < iVar5) {
    iVar7 = iVar5;
  }
  (__this->fields).m_Downsampling = iVar7;
  fVar12 = (__this->fields).m_Radius;
  fVar13 = (__this->fields).m_OcclusionIntensity;
  local_68 = 1.0;
  fVar14 = 1.0;
  if (fVar12 <= 1.0) {
    fVar14 = fVar12;
  }
  (__this->fields).m_Radius =
       (float)(~-(uint)(0.05 <= fVar12) & 0x3d4ccccd | (uint)fVar14 & -(uint)(0.05 <= fVar12));
  fVar12 = (__this->fields).m_MinZ;
  fVar14 = 4.0;
  if (fVar13 <= 4.0) {
    fVar14 = fVar13;
  }
  fVar15 = 0.5;
  if (fVar12 <= 0.5) {
    fVar15 = fVar12;
  }
  (__this->fields).m_MinZ =
       (float)(~-(uint)(1e-05 <= fVar12) & 0x3727c5ac | (uint)fVar15 & -(uint)(1e-05 <= fVar12));
  (__this->fields).m_OcclusionIntensity =
       (float)(~-(uint)(0.5 <= fVar13) & 0x3f000000 | (uint)fVar14 & -(uint)(0.5 <= fVar13));
  fVar12 = (__this->fields).m_OcclusionAttenuation;
  fVar13 = 2.0;
  if (fVar12 <= 2.0) {
    fVar13 = fVar12;
  }
  (__this->fields).m_OcclusionAttenuation =
       (float)(~-(uint)(0.2 <= fVar12) & 0x3e4ccccd | (uint)fVar13 & -(uint)(0.2 <= fVar12));
  iVar7 = (__this->fields).m_Blur;
  iVar5 = 4;
  if (iVar7 < 5) {
    iVar5 = iVar7;
  }
  iVar7 = 0;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  (__this->fields).m_Blur = iVar7;
  if (source != (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0) {
    iVar5 = (*(code *)source->klass[1]._1.name)(source,source->klass[1]._1.namespaze);
    iVar7 = (__this->fields).m_Downsampling;
    iVar6 = (*source->klass[1]._1.this_arg.data)
                      (source,*(undefined8 *)&source->klass[1]._1.this_arg.bits,
                       (long)iVar5 % (long)iVar7 & 0xffffffff);
    value = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
            UnityEngine_RenderTexture__GetTemporary_4de1d70
                      (iVar5 / iVar7,iVar6 / (__this->fields).m_Downsampling,0,(MethodInfo *)0x0);
    pUVar11 = __this;
    pUVar10 = (UnityEngine_Camera_o *)
              UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
    if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
      fVar12 = UnityEngine_Camera__get_fieldOfView(pUVar10,(MethodInfo *)0x0);
      pUVar11 = __this;
      pUVar10 = (UnityEngine_Camera_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
      if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
        fVar13 = UnityEngine_Camera__get_farClipPlane(pUVar10,(MethodInfo *)0x0);
        fVar12 = tanf(fVar12 * 0.017453292 * 0.5);
        pUVar11 = __this;
        pUVar10 = (UnityEngine_Camera_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
        if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
          fVar14 = UnityEngine_Camera__get_aspect(pUVar10,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).m_SSAOMaterial;
          pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
          if (pUVar1 != (UnityEngine_Material_o *)0x0) {
            value_01.fields.x = fVar14 * fVar12 * fVar13;
            value_01.fields.y = fVar12 * fVar13;
            value_01.fields.z = fVar13;
            value_01.fields.w = 0.0;
            UnityEngine_Material__SetVector(pUVar1,"_FarCorner",value_01,(MethodInfo *)0x0);
            pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                      (__this->fields).m_RandomTexture;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
            fVar12 = 1.0;
            if ((char)bVar4 != '\0') {
              pUVar2 = (__this->fields).m_RandomTexture;
              pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
              if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto label_04587d3f;
              iVar7 = (*(pUVar2->klass->vtable)._5_get_width.methodPtr)();
              pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                        (__this->fields).m_RandomTexture;
              if (pUVar11 == (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0)
              goto label_04587d3f;
              iVar5 = (*((UnityEngine_Object_c *)pUVar11->klass)[1]._1.this_arg.data)();
              fVar12 = (float)iVar7;
              local_68 = (float)iVar5;
            }
            if (value != (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0) {
              pUVar1 = (__this->fields).m_SSAOMaterial;
              iVar7 = (*(code *)value->klass[1]._1.name)(value,value->klass[1]._1.namespaze);
              pUVar11 = value;
              iVar5 = (*value->klass[1]._1.this_arg.data)();
              if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                value_02.fields.x = (float)iVar7 / fVar12;
                value_02.fields.y = (float)iVar5 / local_68;
                value_02.fields.z = 0.0;
                value_02.fields.w = 0.0;
                UnityEngine_Material__SetVector(pUVar1,"_NoiseScale",value_02,(MethodInfo *)0x0);
                pUVar1 = (__this->fields).m_SSAOMaterial;
                pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                  value_03.fields.z = 1.0 / (__this->fields).m_OcclusionAttenuation;
                  value_03.fields.w = (__this->fields).m_OcclusionIntensity;
                  value_03.fields.y = (__this->fields).m_MinZ;
                  value_03.fields.x = (__this->fields).m_Radius;
                  UnityEngine_Material__SetVector(pUVar1,"_Params",value_03,(MethodInfo *)0x0);
                  iVar8 = (__this->fields).m_SampleCount;
                  iVar7 = (__this->fields).m_Blur;
                  pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                  if (iVar7 < 1) {
                    pUVar11 = source;
                  }
                  pUVar1 = (__this->fields).m_SSAOMaterial;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60
                            ((UnityEngine_Texture_o *)pUVar11,(UnityEngine_RenderTexture_o *)value,pUVar1,
                             iVar8,(MethodInfo *)0x0);
                  if (iVar7 < 1) {
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                  }
                  else {
                    iVar8 = (*(code *)source->klass[1]._1.name)(source,source->klass[1]._1.namespaze);
                    iVar9 = (*source->klass[1]._1.this_arg.data)
                                      (source,*(undefined8 *)&source->klass[1]._1.this_arg.bits);
                    value_00 = (UnityEngine_Texture_o *)
                               UnityEngine_RenderTexture__GetTemporary_4de1d70
                                         (iVar8,iVar9,0,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    iVar7 = (__this->fields).m_Blur;
                    pUVar11 = source;
                    iVar5 = (*(code *)source->klass[1]._1.name)();
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetVector
                              (pUVar1,"_TexelOffsetScale",
                               (UnityEngine_Vector4_o)ZEXT416((uint)((float)iVar7 / (float)iVar5)),
                               (MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetTexture
                              (pUVar1,"_SSAO",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)0x0,(UnityEngine_RenderTexture_o *)value_00,pUVar1,3,
                               (MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)value,(MethodInfo *)0x0);
                    iVar8 = (*(code *)source->klass[1]._1.name)(source,source->klass[1]._1.namespaze);
                    iVar9 = (*source->klass[1]._1.this_arg.data)
                                      (source,*(undefined8 *)&source->klass[1]._1.this_arg.bits);
                    value = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                            UnityEngine_RenderTexture__GetTemporary_4de1d70(iVar8,iVar9,0,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    iVar7 = (__this->fields).m_Blur;
                    pUVar11 = source;
                    iVar5 = (*source->klass[1]._1.this_arg.data)();
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetVector
                              (pUVar1,"_TexelOffsetScale",
                               (UnityEngine_Vector4_o)(ZEXT416((uint)((float)iVar7 / (float)iVar5)) << 0x20),
                               (MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetTexture(pUVar1,"_SSAO",value_00,(MethodInfo *)0x0);
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)value,
                               (__this->fields).m_SSAOMaterial,3,(MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)value_00,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                  }
                  pUVar11 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetTexture
                              (pUVar1,"_SSAO",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)source,dest,pUVar1,4,(MethodInfo *)0x0);
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
label_04587d3f:
  il2cpp_runtime_helper_022b2c90();
  (pUVar11->fields).m_Radius = 0.4;
  (pUVar11->fields).m_SampleCount = 1;
  (pUVar11->fields).m_OcclusionIntensity = 1.5;
  (pUVar11->fields).m_Blur = 2;
  (pUVar11->fields).m_Downsampling = 2;
  (pUVar11->fields).m_OcclusionAttenuation = 1.0;
  (pUVar11->fields).m_MinZ = 0.01;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar11,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$CreateMaterials
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, const MethodInfo* method);
// 0x4587580

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  UnityEngine_Shader_o *pUVar1;
  UnityEngine_Texture2D_o *pUVar2;
  bool_conflict bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int32_t iVar8;
  int32_t iVar9;
  UnityEngine_Material_o *pUVar10;
  UnityEngine_Camera_o *pUVar11;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *value;
  UnityEngine_Texture_o *value_00;
  UnityEngine_RenderTexture_o *dest;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *pUVar12;
  MethodInfo *pMVar13;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *source;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  float fStack_80;
  
  if (g_data_057af0fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_RandomTexture");
    g_data_057af0fc = '\x01';
  }
  exists = (UnityEngine_Object_o *)(__this->fields).m_SSAOMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  pUVar1 = (__this->fields).m_SSAOShader;
  if (pUVar1 != (UnityEngine_Shader_o *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pUVar10 = UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterial
                        ((__this->fields).m_SSAOShader,pMVar13);
    (__this->fields).m_SSAOMaterial = pUVar10;
    il2cpp_runtime_helper_022b4080(&(__this->fields).m_SSAOMaterial,pUVar10);
    pUVar10 = (__this->fields).m_SSAOMaterial;
    if (pUVar10 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture
                (pUVar10,"_RandomTexture",(UnityEngine_Texture_o *)(__this->fields).m_RandomTexture,
                 (MethodInfo *)0x0);
      return;
    }
  }
  __this_00 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0fb = '\x01';
  }
  source = MethodInfo_Camera_GetComponent_Camera;
  pUVar11 = (UnityEngine_Camera_o *)
            UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)__this_00,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
  if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
    uVar4 = UnityEngine_Camera__get_depthTextureMode(pUVar11,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(pUVar11,uVar4 | 2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_FarCorner");
    il2cpp_runtime_helper_023445d0(&"_NoiseScale");
    il2cpp_runtime_helper_023445d0(&"_TexelOffsetScale");
    il2cpp_runtime_helper_023445d0(&"_Params");
    il2cpp_runtime_helper_023445d0(&"_SSAO");
    g_data_057af0fd = '\x01';
  }
  if ((char)(__this_00->fields).m_Supported == '\0') {
label_04587d0e:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0);
    return;
  }
  pUVar1 = (__this_00->fields).m_SSAOShader;
  pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
  if (pUVar1 == (UnityEngine_Shader_o *)0x0) goto label_04587d3f;
  pMVar13 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Shader__get_isSupported(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') goto label_04587d0e;
  pUVar12 = __this_00;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__CreateMaterials(__this_00,pMVar13);
  iVar7 = (__this_00->fields).m_Downsampling;
  iVar5 = 6;
  if (iVar7 < 7) {
    iVar5 = iVar7;
  }
  iVar7 = 1;
  if (0 < iVar5) {
    iVar7 = iVar5;
  }
  (__this_00->fields).m_Downsampling = iVar7;
  fVar14 = (__this_00->fields).m_Radius;
  fVar15 = (__this_00->fields).m_OcclusionIntensity;
  fStack_80 = 1.0;
  fVar16 = 1.0;
  if (fVar14 <= 1.0) {
    fVar16 = fVar14;
  }
  (__this_00->fields).m_Radius =
       (float)(~-(uint)(0.05 <= fVar14) & 0x3d4ccccd | (uint)fVar16 & -(uint)(0.05 <= fVar14));
  fVar14 = (__this_00->fields).m_MinZ;
  fVar16 = 4.0;
  if (fVar15 <= 4.0) {
    fVar16 = fVar15;
  }
  fVar17 = 0.5;
  if (fVar14 <= 0.5) {
    fVar17 = fVar14;
  }
  (__this_00->fields).m_MinZ =
       (float)(~-(uint)(1e-05 <= fVar14) & 0x3727c5ac | (uint)fVar17 & -(uint)(1e-05 <= fVar14));
  (__this_00->fields).m_OcclusionIntensity =
       (float)(~-(uint)(0.5 <= fVar15) & 0x3f000000 | (uint)fVar16 & -(uint)(0.5 <= fVar15));
  fVar14 = (__this_00->fields).m_OcclusionAttenuation;
  fVar15 = 2.0;
  if (fVar14 <= 2.0) {
    fVar15 = fVar14;
  }
  (__this_00->fields).m_OcclusionAttenuation =
       (float)(~-(uint)(0.2 <= fVar14) & 0x3e4ccccd | (uint)fVar15 & -(uint)(0.2 <= fVar14));
  iVar7 = (__this_00->fields).m_Blur;
  iVar5 = 4;
  if (iVar7 < 5) {
    iVar5 = iVar7;
  }
  iVar7 = 0;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  (__this_00->fields).m_Blur = iVar7;
  if (source != (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0) {
    iVar5 = (*(code *)source->klass[1]._1.name)(source,source->klass[1]._1.namespaze);
    iVar7 = (__this_00->fields).m_Downsampling;
    iVar6 = (*source->klass[1]._1.this_arg.data)
                      (source,*(undefined8 *)&source->klass[1]._1.this_arg.bits,
                       (long)iVar5 % (long)iVar7 & 0xffffffff);
    value = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
            UnityEngine_RenderTexture__GetTemporary_4de1d70
                      (iVar5 / iVar7,iVar6 / (__this_00->fields).m_Downsampling,0,(MethodInfo *)0x0);
    pUVar12 = __this_00;
    pUVar11 = (UnityEngine_Camera_o *)
              UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this_00,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
    if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
      fVar14 = UnityEngine_Camera__get_fieldOfView(pUVar11,(MethodInfo *)0x0);
      pUVar12 = __this_00;
      pUVar11 = (UnityEngine_Camera_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
      if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
        fVar15 = UnityEngine_Camera__get_farClipPlane(pUVar11,(MethodInfo *)0x0);
        fVar14 = tanf(fVar14 * 0.017453292 * 0.5);
        pUVar12 = __this_00;
        pUVar11 = (UnityEngine_Camera_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
        if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
          fVar16 = UnityEngine_Camera__get_aspect(pUVar11,(MethodInfo *)0x0);
          pUVar10 = (__this_00->fields).m_SSAOMaterial;
          pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
          if (pUVar10 != (UnityEngine_Material_o *)0x0) {
            value_01.fields.x = fVar16 * fVar14 * fVar15;
            value_01.fields.y = fVar14 * fVar15;
            value_01.fields.z = fVar15;
            value_01.fields.w = 0.0;
            UnityEngine_Material__SetVector(pUVar10,"_FarCorner",value_01,(MethodInfo *)0x0);
            pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                      (__this_00->fields).m_RandomTexture;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar12,(MethodInfo *)0x0);
            fVar14 = 1.0;
            if ((char)bVar3 != '\0') {
              pUVar2 = (__this_00->fields).m_RandomTexture;
              pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
              if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto label_04587d3f;
              iVar7 = (*(pUVar2->klass->vtable)._5_get_width.methodPtr)();
              pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                        (__this_00->fields).m_RandomTexture;
              if (pUVar12 == (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0)
              goto label_04587d3f;
              iVar5 = (*((UnityEngine_Object_c *)pUVar12->klass)[1]._1.this_arg.data)();
              fVar14 = (float)iVar7;
              fStack_80 = (float)iVar5;
            }
            if (value != (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0) {
              pUVar10 = (__this_00->fields).m_SSAOMaterial;
              iVar7 = (*(code *)value->klass[1]._1.name)(value,value->klass[1]._1.namespaze);
              pUVar12 = value;
              iVar5 = (*value->klass[1]._1.this_arg.data)();
              if (pUVar10 != (UnityEngine_Material_o *)0x0) {
                value_02.fields.x = (float)iVar7 / fVar14;
                value_02.fields.y = (float)iVar5 / fStack_80;
                value_02.fields.z = 0.0;
                value_02.fields.w = 0.0;
                UnityEngine_Material__SetVector(pUVar10,"_NoiseScale",value_02,(MethodInfo *)0x0);
                pUVar10 = (__this_00->fields).m_SSAOMaterial;
                pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                if (pUVar10 != (UnityEngine_Material_o *)0x0) {
                  value_03.fields.z = 1.0 / (__this_00->fields).m_OcclusionAttenuation;
                  value_03.fields.w = (__this_00->fields).m_OcclusionIntensity;
                  value_03.fields.y = (__this_00->fields).m_MinZ;
                  value_03.fields.x = (__this_00->fields).m_Radius;
                  UnityEngine_Material__SetVector(pUVar10,"_Params",value_03,(MethodInfo *)0x0);
                  iVar8 = (__this_00->fields).m_SampleCount;
                  iVar7 = (__this_00->fields).m_Blur;
                  pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                  if (iVar7 < 1) {
                    pUVar12 = source;
                  }
                  pUVar10 = (__this_00->fields).m_SSAOMaterial;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60
                            ((UnityEngine_Texture_o *)pUVar12,(UnityEngine_RenderTexture_o *)value,pUVar10,
                             iVar8,(MethodInfo *)0x0);
                  if (iVar7 < 1) {
                    pUVar10 = (__this_00->fields).m_SSAOMaterial;
                  }
                  else {
                    iVar8 = (*(code *)source->klass[1]._1.name)(source,source->klass[1]._1.namespaze);
                    iVar9 = (*source->klass[1]._1.this_arg.data)
                                      (source,*(undefined8 *)&source->klass[1]._1.this_arg.bits);
                    value_00 = (UnityEngine_Texture_o *)
                               UnityEngine_RenderTexture__GetTemporary_4de1d70
                                         (iVar8,iVar9,0,(MethodInfo *)0x0);
                    pUVar10 = (__this_00->fields).m_SSAOMaterial;
                    iVar7 = (__this_00->fields).m_Blur;
                    pUVar12 = source;
                    iVar5 = (*(code *)source->klass[1]._1.name)();
                    if (pUVar10 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetVector
                              (pUVar10,"_TexelOffsetScale",
                               (UnityEngine_Vector4_o)ZEXT416((uint)((float)iVar7 / (float)iVar5)),
                               (MethodInfo *)0x0);
                    pUVar10 = (__this_00->fields).m_SSAOMaterial;
                    pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                    if (pUVar10 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetTexture
                              (pUVar10,"_SSAO",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
                    pUVar10 = (__this_00->fields).m_SSAOMaterial;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)0x0,(UnityEngine_RenderTexture_o *)value_00,pUVar10,3,
                               (MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)value,(MethodInfo *)0x0);
                    iVar8 = (*(code *)source->klass[1]._1.name)(source,source->klass[1]._1.namespaze);
                    iVar9 = (*source->klass[1]._1.this_arg.data)
                                      (source,*(undefined8 *)&source->klass[1]._1.this_arg.bits);
                    value = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                            UnityEngine_RenderTexture__GetTemporary_4de1d70(iVar8,iVar9,0,(MethodInfo *)0x0);
                    pUVar10 = (__this_00->fields).m_SSAOMaterial;
                    iVar7 = (__this_00->fields).m_Blur;
                    pUVar12 = source;
                    iVar5 = (*source->klass[1]._1.this_arg.data)();
                    if (pUVar10 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetVector
                              (pUVar10,"_TexelOffsetScale",
                               (UnityEngine_Vector4_o)(ZEXT416((uint)((float)iVar7 / (float)iVar5)) << 0x20),
                               (MethodInfo *)0x0);
                    pUVar10 = (__this_00->fields).m_SSAOMaterial;
                    pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                    if (pUVar10 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetTexture(pUVar10,"_SSAO",value_00,(MethodInfo *)0x0);
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)value,
                               (__this_00->fields).m_SSAOMaterial,3,(MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)value_00,(MethodInfo *)0x0);
                    pUVar10 = (__this_00->fields).m_SSAOMaterial;
                  }
                  pUVar12 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                  if (pUVar10 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetTexture
                              (pUVar10,"_SSAO",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
                    pUVar10 = (__this_00->fields).m_SSAOMaterial;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)source,dest,pUVar10,4,(MethodInfo *)0x0);
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
label_04587d3f:
  il2cpp_runtime_helper_022b2c90();
  (pUVar12->fields).m_Radius = 0.4;
  (pUVar12->fields).m_SampleCount = 1;
  (pUVar12->fields).m_OcclusionIntensity = 1.5;
  (pUVar12->fields).m_Blur = 2;
  (pUVar12->fields).m_Downsampling = 2;
  (pUVar12->fields).m_OcclusionAttenuation = 1.0;
  (pUVar12->fields).m_MinZ = 0.01;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar12,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnRenderImage (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x45876a0

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion__OnRenderImage
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,MethodInfo *method
               )

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
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *value;
  UnityEngine_Camera_o *pUVar9;
  UnityEngine_Texture_o *pUVar10;
  MethodInfo *method_00;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this_01;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  float fStack_60;
  
  if (g_data_057af0fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_FarCorner");
    il2cpp_runtime_helper_023445d0(&"_NoiseScale");
    il2cpp_runtime_helper_023445d0(&"_TexelOffsetScale");
    il2cpp_runtime_helper_023445d0(&"_Params");
    il2cpp_runtime_helper_023445d0(&"_SSAO");
    g_data_057af0fd = '\x01';
  }
  if ((char)(__this->fields).m_Supported == '\0') {
label_04587d0e:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (__this->fields).m_SSAOShader;
  __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
  if (__this_00 == (UnityEngine_Shader_o *)0x0) goto label_04587d3f;
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Shader__get_isSupported(__this_00,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') goto label_04587d0e;
  __this_01 = __this;
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
    value = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
            UnityEngine_RenderTexture__GetTemporary_4de1d70
                      (iVar4 / iVar6,iVar5 / (__this->fields).m_Downsampling,0,(MethodInfo *)0x0);
    __this_01 = __this;
    pUVar9 = (UnityEngine_Camera_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
    if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
      fVar11 = UnityEngine_Camera__get_fieldOfView(pUVar9,(MethodInfo *)0x0);
      __this_01 = __this;
      pUVar9 = (UnityEngine_Camera_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
      if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
        fVar12 = UnityEngine_Camera__get_farClipPlane(pUVar9,(MethodInfo *)0x0);
        fVar11 = tanf(fVar11 * 0.017453292 * 0.5);
        __this_01 = __this;
        pUVar9 = (UnityEngine_Camera_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
        if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
          fVar13 = UnityEngine_Camera__get_aspect(pUVar9,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).m_SSAOMaterial;
          __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
          if (pUVar1 != (UnityEngine_Material_o *)0x0) {
            value_00.fields.x = fVar13 * fVar11 * fVar12;
            value_00.fields.y = fVar11 * fVar12;
            value_00.fields.z = fVar12;
            value_00.fields.w = 0.0;
            UnityEngine_Material__SetVector(pUVar1,"_FarCorner",value_00,(MethodInfo *)0x0);
            __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                        (__this->fields).m_RandomTexture;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
            fVar11 = 1.0;
            if ((char)bVar3 != '\0') {
              pUVar2 = (__this->fields).m_RandomTexture;
              __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
              if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto label_04587d3f;
              iVar6 = (*(pUVar2->klass->vtable)._5_get_width.methodPtr)();
              __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                          (__this->fields).m_RandomTexture;
              if (__this_01 == (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0)
              goto label_04587d3f;
              iVar4 = (*(((UnityEngine_Texture_c *)__this_01->klass)->vtable)._7_get_height.methodPtr)();
              fVar11 = (float)iVar6;
              fStack_60 = (float)iVar4;
            }
            if (value != (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0) {
              pUVar1 = (__this->fields).m_SSAOMaterial;
              iVar6 = (*(((UnityEngine_Texture_c *)value->klass)->vtable)._5_get_width.methodPtr)
                                (value,(((UnityEngine_Texture_c *)value->klass)->vtable)._5_get_width.method);
              __this_01 = value;
              iVar4 = (*(((UnityEngine_Texture_c *)value->klass)->vtable)._7_get_height.methodPtr)();
              if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                value_01.fields.x = (float)iVar6 / fVar11;
                value_01.fields.y = (float)iVar4 / fStack_60;
                value_01.fields.z = 0.0;
                value_01.fields.w = 0.0;
                UnityEngine_Material__SetVector(pUVar1,"_NoiseScale",value_01,(MethodInfo *)0x0);
                pUVar1 = (__this->fields).m_SSAOMaterial;
                __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
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
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60
                            (pUVar10,(UnityEngine_RenderTexture_o *)value,pUVar1,iVar7,(MethodInfo *)0x0);
                  if (iVar6 < 1) {
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                  }
                  else {
                    iVar7 = (*(source->klass->vtable)._5_get_width.methodPtr)
                                      (source,(source->klass->vtable)._5_get_width.method);
                    iVar8 = (*(source->klass->vtable)._7_get_height.methodPtr)
                                      (source,(source->klass->vtable)._7_get_height.method);
                    pUVar10 = (UnityEngine_Texture_o *)
                              UnityEngine_RenderTexture__GetTemporary_4de1d70(iVar7,iVar8,0,(MethodInfo *)0x0)
                    ;
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    iVar6 = (__this->fields).m_Blur;
                    __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)source;
                    iVar4 = (*(source->klass->vtable)._5_get_width.methodPtr)();
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetVector
                              (pUVar1,"_TexelOffsetScale",
                               (UnityEngine_Vector4_o)ZEXT416((uint)((float)iVar6 / (float)iVar4)),
                               (MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetTexture
                              (pUVar1,"_SSAO",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)0x0,(UnityEngine_RenderTexture_o *)pUVar10,pUVar1,3,
                               (MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)value,(MethodInfo *)0x0);
                    iVar7 = (*(source->klass->vtable)._5_get_width.methodPtr)
                                      (source,(source->klass->vtable)._5_get_width.method);
                    iVar8 = (*(source->klass->vtable)._7_get_height.methodPtr)
                                      (source,(source->klass->vtable)._7_get_height.method);
                    value = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)
                            UnityEngine_RenderTexture__GetTemporary_4de1d70(iVar7,iVar8,0,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    iVar6 = (__this->fields).m_Blur;
                    __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)source;
                    iVar4 = (*(source->klass->vtable)._7_get_height.methodPtr)();
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetVector
                              (pUVar1,"_TexelOffsetScale",
                               (UnityEngine_Vector4_o)(ZEXT416((uint)((float)iVar6 / (float)iVar4)) << 0x20),
                               (MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_04587d3f;
                    UnityEngine_Material__SetTexture(pUVar1,"_SSAO",pUVar10,(MethodInfo *)0x0);
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)value,
                               (__this->fields).m_SSAOMaterial,3,(MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)pUVar10,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                  }
                  __this_01 = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *)0x0;
                  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetTexture
                              (pUVar1,"_SSAO",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).m_SSAOMaterial;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Graphics__Blit_4dc2a60
                              ((UnityEngine_Texture_o *)source,destination,pUVar1,4,(MethodInfo *)0x0);
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
label_04587d3f:
  il2cpp_runtime_helper_022b2c90();
  (__this_01->fields).m_Radius = 0.4;
  (__this_01->fields).m_SampleCount = 1;
  (__this_01->fields).m_OcclusionIntensity = 1.5;
  (__this_01->fields).m_Blur = 2;
  (__this_01->fields).m_Downsampling = 2;
  (__this_01->fields).m_OcclusionAttenuation = 1.0;
  (__this_01->fields).m_MinZ = 0.01;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion___ctor (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o* __this, const MethodInfo* method);
// 0x4587d50

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion___ctor
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_o *__this,MethodInfo *method)

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


