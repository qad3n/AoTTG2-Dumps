// Type: PostProcessingManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PostProcessingManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PostProcessingManager.cs
// --------------------------------

// PostProcessingManager$$Awake
// il2cpp: void PostProcessingManager__Awake (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x4059830

void PostProcessingManager__Awake(PostProcessingManager_o *__this,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o **ppUVar1;
  UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *pUVar2;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar3;
  UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *pUVar4;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *pUVar5;
  UnityEngine_Rendering_PostProcessing_AutoExposure_o *pUVar6;
  UnityEngine_Rendering_PostProcessing_DepthOfField_o *pUVar7;
  long lVar8;
  System_Collections_Generic_List_Collider__o *pSVar9;
  Il2CppObject *pIVar10;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *pUVar11;
  void *pvVar12;
  bool_conflict bVar13;
  uint uVar14;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *pUVar15;
  UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *pUVar16;
  PostProcessingManager_o *pPVar17;
  System_Object_array *pSVar18;
  UnityEngine_GameObject_o *__this_00;
  long lVar19;
  undefined1 uVar20;
  undefined8 *in_RCX;
  int32_t quality;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  uint uVar21;
  uint uVar22;
  int iVar23;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o **outSetting;
  MethodInfo_2589AB0 *pMVar24;
  ulong uVar25;
  PostProcessingManager_o *__this_01;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *__this_02;
  int iVar26;
  long in_R8;
  int iVar27;
  long in_R9;
  int unaff_R14D;
  int32_t unaff_R15D;
  uint unaff_retaddr;
  MethodInfo *pMVar28;
  
  if (g_data_057ac272 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_PostProcessVolume_GetComponent_PostProcessVolume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetSettings_AmbientOcclusion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetSettings_AutoExposure);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetSettings_Bloom);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetSettings_ChromaticAberration);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetSettings_ColorGrading);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetSettings_DepthOfField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetSettings_MotionBlur);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"PostProcessingManager: No PostProcessVolume component found on this object.");
    g_data_057ac272 = '\x01';
  }
  pUVar15 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_PostProcessVolume_GetComponent_PostProcessVolume);
  ppUVar1 = &(__this->fields)._postProcessingVolume;
  (__this->fields)._postProcessingVolume = pUVar15;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar15 = (__this->fields)._postProcessingVolume;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)0x0;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("PostProcessingManager: No PostProcessVolume component found on this object.",(MethodInfo *)0x0);
    return;
  }
  __this_01 = (PostProcessingManager_o *)*ppUVar1;
  if (__this_01 != (PostProcessingManager_o *)0x0) {
    outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)0x0;
    pUVar16 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                        ((UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)__this_01,
                         (MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
      outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)&(__this->fields)._ambientOcclusion
      ;
      in_RCX = &MethodInfo_Boolean_TryGetSettings_AmbientOcclusion;
      UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings_object_
                (pUVar16,(Il2CppObject **)outSetting,MethodInfo_Boolean_TryGetSettings_AmbientOcclusion);
      __this_01 = (PostProcessingManager_o *)(__this->fields)._postProcessingVolume;
      if (__this_01 != (PostProcessingManager_o *)0x0) {
        outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)0x0;
        pUVar16 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                            ((UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)__this_01,
                             (MethodInfo *)0x0);
        if (pUVar16 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
          outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)&(__this->fields)._bloom;
          in_RCX = &MethodInfo_Boolean_TryGetSettings_Bloom;
          UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings_object_
                    (pUVar16,(Il2CppObject **)outSetting,MethodInfo_Boolean_TryGetSettings_Bloom);
          __this_01 = (PostProcessingManager_o *)(__this->fields)._postProcessingVolume;
          if (__this_01 != (PostProcessingManager_o *)0x0) {
            outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)0x0;
            pUVar16 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                ((UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)__this_01,
                                 (MethodInfo *)0x0);
            if (pUVar16 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
              outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)
                           &(__this->fields)._chromaticAberration;
              in_RCX = &MethodInfo_Boolean_TryGetSettings_ChromaticAberration;
              UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings_object_
                        (pUVar16,(Il2CppObject **)outSetting,MethodInfo_Boolean_TryGetSettings_ChromaticAberration);
              __this_01 = (PostProcessingManager_o *)(__this->fields)._postProcessingVolume;
              if (__this_01 != (PostProcessingManager_o *)0x0) {
                outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)0x0;
                pUVar16 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                    ((UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)__this_01,
                                     (MethodInfo *)0x0);
                if (pUVar16 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
                  outSetting = &(__this->fields)._colorGrading;
                  in_RCX = &MethodInfo_Boolean_TryGetSettings_ColorGrading;
                  UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings_object_
                            (pUVar16,(Il2CppObject **)outSetting,MethodInfo_Boolean_TryGetSettings_ColorGrading);
                  __this_01 = (PostProcessingManager_o *)(__this->fields)._postProcessingVolume;
                  if (__this_01 != (PostProcessingManager_o *)0x0) {
                    outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)0x0;
                    pUVar16 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                        ((UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)__this_01
                                         ,(MethodInfo *)0x0);
                    if (pUVar16 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
                      outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)
                                   &(__this->fields)._depthOfField;
                      in_RCX = &MethodInfo_Boolean_TryGetSettings_DepthOfField;
                      UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings_object_
                                (pUVar16,(Il2CppObject **)outSetting,MethodInfo_Boolean_TryGetSettings_DepthOfField);
                      __this_01 = (PostProcessingManager_o *)(__this->fields)._postProcessingVolume;
                      if (__this_01 != (PostProcessingManager_o *)0x0) {
                        outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)0x0;
                        pUVar16 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                            ((UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
                                             __this_01,(MethodInfo *)0x0);
                        if (pUVar16 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
                          outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)
                                       &(__this->fields)._motionBlur;
                          in_RCX = &MethodInfo_Boolean_TryGetSettings_MotionBlur;
                          UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings_object_
                                    (pUVar16,(Il2CppObject **)outSetting,MethodInfo_Boolean_TryGetSettings_MotionBlur);
                          __this_01 = (PostProcessingManager_o *)(__this->fields)._postProcessingVolume;
                          if (__this_01 != (PostProcessingManager_o *)0x0) {
                            outSetting = (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)0x0;
                            pPVar17 = (PostProcessingManager_o *)
                                      UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                                ((UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
                                                 __this_01,(MethodInfo *)0x0);
                            if (pPVar17 != (PostProcessingManager_o *)0x0) {
                              in_RCX = &MethodInfo_Boolean_TryGetSettings_AutoExposure;
                              pMVar28 = (MethodInfo *)0x4059acb;
                              UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings_object_
                                        ((UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)pPVar17,
                                         (Il2CppObject **)&(__this->fields)._autoExposure,MethodInfo_Boolean_TryGetSettings_AutoExposure);
                              lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
                              if (lVar19 == 0) {
                                return;
                              }
                              outSetting = *(UnityEngine_Rendering_PostProcessing_ColorGrading_o ***)
                                            (lVar19 + 0xd8);
                              __this_01 = pPVar17;
                              if (((((outSetting !=
                                      (UnityEngine_Rendering_PostProcessing_ColorGrading_o **)0x0) &&
                                    (*(long *)(lVar19 + 0xe0) != 0)) &&
                                   (in_RCX = *(undefined8 **)(lVar19 + 0xe8), in_RCX != (undefined8 *)0x0)) &&
                                  ((in_R8 = *(long *)(lVar19 + 0xf0), in_R8 != 0 &&
                                   (in_R9 = *(long *)(lVar19 + 0xf8), in_R9 != 0)))) &&
                                 ((*(long *)(lVar19 + 0x100) != 0 &&
                                  ((__this_01 = *(PostProcessingManager_o **)(lVar19 + 0x108),
                                   __this_01 != (PostProcessingManager_o *)0x0 &&
                                   (*(long *)(lVar19 + 0x110) != 0)))))) {
                                PostProcessingManager__ApplySettings
                                          (__this,*(int32_t *)((long)outSetting + 0x14),
                                           *(int32_t *)(*(long *)(lVar19 + 0xe0) + 0x14),
                                           *(int32_t *)((long)in_RCX + 0x14),*(int32_t *)(in_R8 + 0x14),
                                           *(int32_t *)(in_R9 + 0x14),
                                           *(int32_t *)(*(long *)(lVar19 + 0x100) + 0x14),
                                           *(int32_t *)((long)&(__this_01->fields).m_CachedPtr + 4),
                                           *(int32_t *)(*(long *)(lVar19 + 0x110) + 0x14),pMVar28);
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
            }
          }
        }
      }
    }
  }
  uVar14 = (uint)in_RCX;
  iVar23 = (int)outSetting;
  iVar26 = (int)in_R8;
  iVar27 = (int)in_R9;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac274 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WaterEffect_FindObjectsByType_WaterEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"PostProcessingManager: No PostProcessVolume component found on this object.");
    g_data_057ac274 = '\x01';
  }
  pPVar17 = (PostProcessingManager_o *)(__this_01->fields)._postProcessingVolume;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar22 = 0;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pPVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("PostProcessingManager: No PostProcessVolume component found on this object.",(MethodInfo *)0x0);
    return;
  }
  pUVar2 = (__this_01->fields)._ambientOcclusion;
  if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *)0x0) &&
     (pUVar3 = (pUVar2->fields).enabled, pUVar3 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0
     )) {
    if (iVar23 == 0) {
      *(undefined1 *)((long)&(pUVar3->fields).overrideState + 1) = 0;
    }
    else {
      *(undefined1 *)((long)&(pUVar3->fields).overrideState + 1) = 1;
      pUVar4 = (pUVar2->fields).quality;
      if (pUVar4 == (UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *)0x0)
      goto label_04059da2;
      (pUVar4->fields).value = iVar23 + -1;
    }
    PostProcessingManager__SetBloomQuality(__this_01,quality,method_00);
    pPVar17 = __this_01;
    uVar22 = uVar14;
    PostProcessingManager__SetChromaticAberrationQuality(__this_01,uVar14,method_01);
    pUVar5 = (__this_01->fields)._colorGrading;
    if ((pUVar5 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
       (pUVar3 = (pUVar5->fields).enabled,
       pUVar3 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(bool *)((long)&(pUVar3->fields).overrideState + 1) = iVar26 != 0;
      pUVar6 = (__this_01->fields)._autoExposure;
      if ((pUVar6 != (UnityEngine_Rendering_PostProcessing_AutoExposure_o *)0x0) &&
         (pUVar3 = (pUVar6->fields).enabled,
         pUVar3 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
        *(bool *)((long)&(pUVar3->fields).overrideState + 1) = iVar27 != 0;
        pUVar7 = (__this_01->fields)._depthOfField;
        if ((pUVar7 != (UnityEngine_Rendering_PostProcessing_DepthOfField_o *)0x0) &&
           (pUVar3 = (pUVar7->fields).enabled,
           pUVar3 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          *(bool *)((long)&(pUVar3->fields).overrideState + 1) = unaff_R14D != 0;
          PostProcessingManager__SetMotionBlurQuality(__this_01,unaff_R15D,method_02);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pPVar17 = (PostProcessingManager_o *)0x0;
          pMVar24 = MethodInfo_WaterEffect_FindObjectsByType_WaterEffect;
          pSVar18 = UnityEngine_Object__FindObjectsByType_object_(0,MethodInfo_WaterEffect_FindObjectsByType_WaterEffect);
          uVar22 = (uint)pMVar24;
          if (pSVar18 != (System_Object_array *)0x0) {
            uVar14 = (uint)pSVar18->max_length;
            if (0 < (int)uVar14) {
              uVar21 = 0;
              pMVar28 = extraout_RDX;
              do {
                uVar22 = (uint)pMVar24;
                if (uVar14 <= uVar21) goto label_04059da7;
                pPVar17 = (PostProcessingManager_o *)pSVar18->m_Items[(int)uVar21];
                if (pPVar17 == (PostProcessingManager_o *)0x0) goto label_04059da2;
                pMVar24 = (MethodInfo_2589AB0 *)(ulong)unaff_retaddr;
                WaterEffect__ApplySettings((WaterEffect_o *)pPVar17,unaff_retaddr,pMVar28);
                uVar21 = uVar21 + 1;
                uVar14 = (uint)pSVar18->max_length;
                pMVar28 = extraout_RDX_00;
              } while ((int)uVar21 < (int)uVar14);
            }
            return;
          }
        }
      }
    }
  }
label_04059da2:
  il2cpp_runtime_helper_022b2c90();
label_04059da7:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac273 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"PostProcessingManager: No PostProcessVolume component found on this object.");
    g_data_057ac273 = '\x01';
  }
  pUVar15 = (pPVar17->fields)._postProcessingVolume;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar25 = 0;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("PostProcessingManager: No PostProcessVolume component found on this object.",(MethodInfo *)0x0);
    return;
  }
  pUVar15 = (pPVar17->fields)._postProcessingVolume;
  if (pUVar15 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar15,uVar22 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar19 = *(long *)&(pUVar15->fields).isGlobal;
  if ((lVar19 != 0) && (lVar8 = *(long *)(lVar19 + 0x20), lVar8 != 0)) {
    if ((int)uVar25 == 0) {
      *(undefined1 *)(lVar8 + 0x11) = 0;
      return;
    }
    *(undefined1 *)(lVar8 + 0x11) = 1;
    if (*(long *)(lVar19 + 0x88) != 0) {
      *(int *)(*(long *)(lVar19 + 0x88) + 0x14) = (int)uVar25 + -1;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar23 = (int)uVar25;
  if (iVar23 == 2) {
    lVar19 = *(long *)&(pUVar15->fields).weight;
    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar19 + 0x20) + 0x11) = 1;
      lVar19 = *(long *)(lVar19 + 0x68);
joined_r0x04059f13:
      if (lVar19 != 0) {
        uVar20 = 0;
label_04059f17:
        *(undefined1 *)(lVar19 + 0x11) = uVar20;
        return;
      }
    }
  }
  else if (iVar23 == 1) {
    lVar19 = *(long *)&(pUVar15->fields).weight;
    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar19 + 0x20) + 0x11) = 1;
      lVar19 = *(long *)(lVar19 + 0x68);
      uVar20 = 1;
      if (lVar19 != 0) goto label_04059f17;
    }
  }
  else {
    if (iVar23 != 0) {
      return;
    }
    lVar19 = *(long *)&(pUVar15->fields).weight;
    if (lVar19 != 0) {
      lVar19 = *(long *)(lVar19 + 0x20);
      goto joined_r0x04059f13;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar23 = (int)uVar25;
  if (iVar23 == 2) {
    lVar19 = *(long *)&(pUVar15->fields).m_PreviousLayer;
    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar19 + 0x20) + 0x11) = 1;
      lVar19 = *(long *)(lVar19 + 0x40);
joined_r0x04059f93:
      if (lVar19 != 0) {
        uVar20 = 0;
label_04059f97:
        *(undefined1 *)(lVar19 + 0x11) = uVar20;
        return;
      }
    }
  }
  else if (iVar23 == 1) {
    lVar19 = *(long *)&(pUVar15->fields).m_PreviousLayer;
    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar19 + 0x20) + 0x11) = 1;
      lVar19 = *(long *)(lVar19 + 0x40);
      uVar20 = 1;
      if (lVar19 != 0) goto label_04059f97;
    }
  }
  else {
    if (iVar23 != 0) {
      return;
    }
    lVar19 = *(long *)&(pUVar15->fields).m_PreviousLayer;
    if (lVar19 != 0) {
      lVar19 = *(long *)(lVar19 + 0x20);
      goto joined_r0x04059f93;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar9 = (pUVar15->fields).m_TempColliders;
  if ((pSVar9 != (System_Collections_Generic_List_Collider__o *)0x0) &&
     (pIVar10 = (pSVar9->fields)._syncRoot, pIVar10 != (Il2CppObject *)0x0)) {
    *(bool *)((long)&pIVar10[1].klass + 1) = (int)uVar25 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar19 = ((UnityEngine_Behaviour_Fields *)&pUVar15[1].monitor)->m_CachedPtr;
  if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x20), lVar19 != 0)) {
    *(bool *)(lVar19 + 0x11) = (int)uVar25 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar16 = (pUVar15->fields).m_InternalProfile;
  if ((pUVar16 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) &&
     (lVar19 = *(long *)&(pUVar16->fields).isDirty, lVar19 != 0)) {
    *(bool *)(lVar19 + 0x11) = (int)uVar25 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar23 = (int)uVar25;
  switch(uVar25 & 0xffffffff) {
  case 0:
    if ((pUVar15[1].klass != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar12 = ((pUVar15[1].klass)->_1).byval_arg.data, pvVar12 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar12 + 0x11) = 0;
      return;
    }
    break;
  case 1:
    pUVar11 = pUVar15[1].klass;
    if ((pUVar11 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar12 = (pUVar11->_1).byval_arg.data, pvVar12 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar12 + 0x11) = 1;
      lVar19 = *(long *)&(pUVar11->_1).this_arg.bits;
      if (lVar19 != 0) {
        *(undefined4 *)(lVar19 + 0x14) = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar11 = pUVar15[1].klass;
    if ((pUVar11 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar12 = (pUVar11->_1).byval_arg.data, pvVar12 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar12 + 0x11) = 1;
      lVar19 = *(long *)&(pUVar11->_1).this_arg.bits;
      if (lVar19 != 0) {
        *(undefined4 *)(lVar19 + 0x14) = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar11 = pUVar15[1].klass;
    if ((pUVar11 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar12 = (pUVar11->_1).byval_arg.data, pvVar12 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar12 + 0x11) = 1;
      lVar19 = *(long *)&(pUVar11->_1).this_arg.bits;
      if (lVar19 != 0) {
        *(undefined4 *)(lVar19 + 0x14) = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)(pUVar15->fields).sharedProfile;
  if ((__this_02 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (iVar23 == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar15,0,(MethodInfo *)0x0);
      *(undefined1 *)&pUVar15[1].klass = 0;
      __this_02 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
                  (pUVar15->fields).m_TempColliders;
      if (__this_02 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,0,(MethodInfo *)0x0);
        lVar19 = *(long *)&(pUVar15->fields).m_PreviousLayer;
        if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x20), lVar19 != 0)) {
          uVar20 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_02 = pUVar15;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar15,1,(MethodInfo *)0x0);
      if (iVar23 == 1) {
        *(undefined1 *)&pUVar15[1].klass = 0;
        __this_02 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
                    (pUVar15->fields).m_TempColliders;
        if (__this_02 == (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,0,(MethodInfo *)0x0);
        lVar19._0_4_ = (pUVar15->fields).m_PreviousLayer;
        lVar19._4_4_ = (pUVar15->fields).m_PreviousPriority;
      }
      else {
        if ((iVar23 != 2) && (iVar23 != 3)) {
          return;
        }
        *(undefined1 *)&pUVar15[1].klass = 1;
        lVar19._0_4_ = (pUVar15->fields).m_PreviousLayer;
        lVar19._4_4_ = (pUVar15->fields).m_PreviousPriority;
      }
      if (lVar19 != 0) {
        lVar19 = *(long *)(lVar19 + 0x20);
        uVar20 = 1;
        if (lVar19 != 0) {
label_0405a17f:
          *(undefined1 *)(lVar19 + 0x11) = uVar20;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$SetState
// il2cpp: void PostProcessingManager__SetState (PostProcessingManager_o* __this, bool state, const MethodInfo* method);
// 0x4059db0

void PostProcessingManager__SetState(PostProcessingManager_o *__this,bool_conflict state,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Collider__o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *pUVar4;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *pUVar5;
  void *pvVar6;
  bool_conflict bVar7;
  UnityEngine_GameObject_o *__this_00;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  ulong uVar11;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *pUVar12;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *__this_01;
  
  if (g_data_057ac273 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"PostProcessingManager: No PostProcessVolume component found on this object.");
    g_data_057ac273 = '\x01';
  }
  pUVar12 = (__this->fields)._postProcessingVolume;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar11 = 0;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("PostProcessingManager: No PostProcessVolume component found on this object.",(MethodInfo *)0x0);
    return;
  }
  pUVar12 = (__this->fields)._postProcessingVolume;
  if (pUVar12 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar12,state & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar8 = *(long *)&(pUVar12->fields).isGlobal;
  if ((lVar8 != 0) && (lVar1 = *(long *)(lVar8 + 0x20), lVar1 != 0)) {
    if ((int)uVar11 == 0) {
      *(undefined1 *)(lVar1 + 0x11) = 0;
      return;
    }
    *(undefined1 *)(lVar1 + 0x11) = 1;
    if (*(long *)(lVar8 + 0x88) != 0) {
      *(int *)(*(long *)(lVar8 + 0x88) + 0x14) = (int)uVar11 + -1;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar10 = (int)uVar11;
  if (iVar10 == 2) {
    lVar8 = *(long *)&(pUVar12->fields).weight;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar8 + 0x20) + 0x11) = 1;
      lVar8 = *(long *)(lVar8 + 0x68);
joined_r0x04059f13:
      if (lVar8 != 0) {
        uVar9 = 0;
label_04059f17:
        *(undefined1 *)(lVar8 + 0x11) = uVar9;
        return;
      }
    }
  }
  else if (iVar10 == 1) {
    lVar8 = *(long *)&(pUVar12->fields).weight;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar8 + 0x20) + 0x11) = 1;
      lVar8 = *(long *)(lVar8 + 0x68);
      uVar9 = 1;
      if (lVar8 != 0) goto label_04059f17;
    }
  }
  else {
    if (iVar10 != 0) {
      return;
    }
    lVar8 = *(long *)&(pUVar12->fields).weight;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x20);
      goto joined_r0x04059f13;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar10 = (int)uVar11;
  if (iVar10 == 2) {
    lVar8 = *(long *)&(pUVar12->fields).m_PreviousLayer;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar8 + 0x20) + 0x11) = 1;
      lVar8 = *(long *)(lVar8 + 0x40);
joined_r0x04059f93:
      if (lVar8 != 0) {
        uVar9 = 0;
label_04059f97:
        *(undefined1 *)(lVar8 + 0x11) = uVar9;
        return;
      }
    }
  }
  else if (iVar10 == 1) {
    lVar8 = *(long *)&(pUVar12->fields).m_PreviousLayer;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar8 + 0x20) + 0x11) = 1;
      lVar8 = *(long *)(lVar8 + 0x40);
      uVar9 = 1;
      if (lVar8 != 0) goto label_04059f97;
    }
  }
  else {
    if (iVar10 != 0) {
      return;
    }
    lVar8 = *(long *)&(pUVar12->fields).m_PreviousLayer;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x20);
      goto joined_r0x04059f93;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar2 = (pUVar12->fields).m_TempColliders;
  if ((pSVar2 != (System_Collections_Generic_List_Collider__o *)0x0) &&
     (pIVar3 = (pSVar2->fields)._syncRoot, pIVar3 != (Il2CppObject *)0x0)) {
    *(bool *)((long)&pIVar3[1].klass + 1) = (int)uVar11 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar8 = ((UnityEngine_Behaviour_Fields *)&pUVar12[1].monitor)->m_CachedPtr;
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) {
    *(bool *)(lVar8 + 0x11) = (int)uVar11 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (pUVar12->fields).m_InternalProfile;
  if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) &&
     (lVar8 = *(long *)&(pUVar4->fields).isDirty, lVar8 != 0)) {
    *(bool *)(lVar8 + 0x11) = (int)uVar11 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar10 = (int)uVar11;
  switch(uVar11 & 0xffffffff) {
  case 0:
    if ((pUVar12[1].klass != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar6 = ((pUVar12[1].klass)->_1).byval_arg.data, pvVar6 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar6 + 0x11) = 0;
      return;
    }
    break;
  case 1:
    pUVar5 = pUVar12[1].klass;
    if ((pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar6 = (pUVar5->_1).byval_arg.data, pvVar6 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar6 + 0x11) = 1;
      lVar8 = *(long *)&(pUVar5->_1).this_arg.bits;
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x14) = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar5 = pUVar12[1].klass;
    if ((pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar6 = (pUVar5->_1).byval_arg.data, pvVar6 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar6 + 0x11) = 1;
      lVar8 = *(long *)&(pUVar5->_1).this_arg.bits;
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x14) = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar5 = pUVar12[1].klass;
    if ((pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar6 = (pUVar5->_1).byval_arg.data, pvVar6 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar6 + 0x11) = 1;
      lVar8 = *(long *)&(pUVar5->_1).this_arg.bits;
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x14) = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)(pUVar12->fields).sharedProfile;
  if ((__this_01 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (iVar10 == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar12,0,(MethodInfo *)0x0);
      *(undefined1 *)&pUVar12[1].klass = 0;
      __this_01 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
                  (pUVar12->fields).m_TempColliders;
      if (__this_01 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        lVar8 = *(long *)&(pUVar12->fields).m_PreviousLayer;
        if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) {
          uVar9 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_01 = pUVar12;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar12,1,(MethodInfo *)0x0);
      if (iVar10 == 1) {
        *(undefined1 *)&pUVar12[1].klass = 0;
        __this_01 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
                    (pUVar12->fields).m_TempColliders;
        if (__this_01 == (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        lVar8._0_4_ = (pUVar12->fields).m_PreviousLayer;
        lVar8._4_4_ = (pUVar12->fields).m_PreviousPriority;
      }
      else {
        if ((iVar10 != 2) && (iVar10 != 3)) {
          return;
        }
        *(undefined1 *)&pUVar12[1].klass = 1;
        lVar8._0_4_ = (pUVar12->fields).m_PreviousLayer;
        lVar8._4_4_ = (pUVar12->fields).m_PreviousPriority;
      }
      if (lVar8 != 0) {
        lVar8 = *(long *)(lVar8 + 0x20);
        uVar9 = 1;
        if (lVar8 != 0) {
label_0405a17f:
          *(undefined1 *)(lVar8 + 0x11) = uVar9;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$ApplySettings
// il2cpp: void PostProcessingManager__ApplySettings (PostProcessingManager_o* __this, int32_t aol, int32_t bl, int32_t cal, int32_t cgl, int32_t ael, int32_t dofl, int32_t mbl, int32_t wfxl, const MethodInfo* method);
// 0x4059b90

void PostProcessingManager__ApplySettings
               (PostProcessingManager_o *__this,int32_t aol,int32_t bl,int32_t cal,int32_t cgl,int32_t ael,
               int32_t dofl,int32_t mbl,int32_t wfxl,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *pUVar3;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *pUVar4;
  UnityEngine_Rendering_PostProcessing_AutoExposure_o *pUVar5;
  UnityEngine_Rendering_PostProcessing_DepthOfField_o *pUVar6;
  long lVar7;
  System_Collections_Generic_List_Collider__o *pSVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *pUVar10;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *pUVar11;
  void *pvVar12;
  bool_conflict bVar13;
  uint uVar14;
  System_Object_array *pSVar15;
  UnityEngine_GameObject_o *__this_00;
  long lVar16;
  undefined1 uVar17;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_00;
  uint uVar18;
  uint uVar19;
  int iVar20;
  MethodInfo_2589AB0 *pMVar21;
  ulong uVar22;
  PostProcessingManager_o *__this_01;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *pUVar23;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *__this_02;
  
  if (g_data_057ac274 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WaterEffect_FindObjectsByType_WaterEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"PostProcessingManager: No PostProcessVolume component found on this object.");
    g_data_057ac274 = '\x01';
  }
  __this_01 = (PostProcessingManager_o *)(__this->fields)._postProcessingVolume;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar19 = 0;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("PostProcessingManager: No PostProcessVolume component found on this object.",(MethodInfo *)0x0);
    return;
  }
  pUVar1 = (__this->fields)._ambientOcclusion;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).enabled, pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0
     )) {
    if (aol == 0) {
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 0;
    }
    else {
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
      pUVar3 = (pUVar1->fields).quality;
      if (pUVar3 == (UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *)0x0)
      goto label_04059da2;
      (pUVar3->fields).value = aol + -1;
    }
    PostProcessingManager__SetBloomQuality(__this,bl,method_00);
    __this_01 = __this;
    uVar19 = cal;
    PostProcessingManager__SetChromaticAberrationQuality(__this,cal,method_01);
    pUVar4 = (__this->fields)._colorGrading;
    if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
       (pUVar2 = (pUVar4->fields).enabled,
       pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(bool *)((long)&(pUVar2->fields).overrideState + 1) = cgl != 0;
      pUVar5 = (__this->fields)._autoExposure;
      if ((pUVar5 != (UnityEngine_Rendering_PostProcessing_AutoExposure_o *)0x0) &&
         (pUVar2 = (pUVar5->fields).enabled,
         pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
        *(bool *)((long)&(pUVar2->fields).overrideState + 1) = ael != 0;
        pUVar6 = (__this->fields)._depthOfField;
        if ((pUVar6 != (UnityEngine_Rendering_PostProcessing_DepthOfField_o *)0x0) &&
           (pUVar2 = (pUVar6->fields).enabled,
           pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          *(bool *)((long)&(pUVar2->fields).overrideState + 1) = dofl != 0;
          PostProcessingManager__SetMotionBlurQuality(__this,mbl,method_02);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01 = (PostProcessingManager_o *)0x0;
          pMVar21 = MethodInfo_WaterEffect_FindObjectsByType_WaterEffect;
          pSVar15 = UnityEngine_Object__FindObjectsByType_object_(0,MethodInfo_WaterEffect_FindObjectsByType_WaterEffect);
          uVar19 = (uint)pMVar21;
          if (pSVar15 != (System_Object_array *)0x0) {
            uVar14 = (uint)pSVar15->max_length;
            if (0 < (int)uVar14) {
              uVar18 = 0;
              method_03 = extraout_RDX;
              do {
                uVar19 = (uint)pMVar21;
                if (uVar14 <= uVar18) goto label_04059da7;
                __this_01 = (PostProcessingManager_o *)pSVar15->m_Items[(int)uVar18];
                if (__this_01 == (PostProcessingManager_o *)0x0) goto label_04059da2;
                pMVar21 = (MethodInfo_2589AB0 *)(ulong)(uint)wfxl;
                WaterEffect__ApplySettings((WaterEffect_o *)__this_01,wfxl,method_03);
                uVar18 = uVar18 + 1;
                uVar14 = (uint)pSVar15->max_length;
                method_03 = extraout_RDX_00;
              } while ((int)uVar18 < (int)uVar14);
            }
            return;
          }
        }
      }
    }
  }
label_04059da2:
  il2cpp_runtime_helper_022b2c90();
label_04059da7:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac273 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"PostProcessingManager: No PostProcessVolume component found on this object.");
    g_data_057ac273 = '\x01';
  }
  pUVar23 = (__this_01->fields)._postProcessingVolume;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar22 = 0;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("PostProcessingManager: No PostProcessVolume component found on this object.",(MethodInfo *)0x0);
    return;
  }
  pUVar23 = (__this_01->fields)._postProcessingVolume;
  if (pUVar23 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar23,uVar19 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)&(pUVar23->fields).isGlobal;
  if ((lVar16 != 0) && (lVar7 = *(long *)(lVar16 + 0x20), lVar7 != 0)) {
    if ((int)uVar22 == 0) {
      *(undefined1 *)(lVar7 + 0x11) = 0;
      return;
    }
    *(undefined1 *)(lVar7 + 0x11) = 1;
    if (*(long *)(lVar16 + 0x88) != 0) {
      *(int *)(*(long *)(lVar16 + 0x88) + 0x14) = (int)uVar22 + -1;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar20 = (int)uVar22;
  if (iVar20 == 2) {
    lVar16 = *(long *)&(pUVar23->fields).weight;
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar16 + 0x20) + 0x11) = 1;
      lVar16 = *(long *)(lVar16 + 0x68);
joined_r0x04059f13:
      if (lVar16 != 0) {
        uVar17 = 0;
label_04059f17:
        *(undefined1 *)(lVar16 + 0x11) = uVar17;
        return;
      }
    }
  }
  else if (iVar20 == 1) {
    lVar16 = *(long *)&(pUVar23->fields).weight;
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar16 + 0x20) + 0x11) = 1;
      lVar16 = *(long *)(lVar16 + 0x68);
      uVar17 = 1;
      if (lVar16 != 0) goto label_04059f17;
    }
  }
  else {
    if (iVar20 != 0) {
      return;
    }
    lVar16 = *(long *)&(pUVar23->fields).weight;
    if (lVar16 != 0) {
      lVar16 = *(long *)(lVar16 + 0x20);
      goto joined_r0x04059f13;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar20 = (int)uVar22;
  if (iVar20 == 2) {
    lVar16 = *(long *)&(pUVar23->fields).m_PreviousLayer;
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar16 + 0x20) + 0x11) = 1;
      lVar16 = *(long *)(lVar16 + 0x40);
joined_r0x04059f93:
      if (lVar16 != 0) {
        uVar17 = 0;
label_04059f97:
        *(undefined1 *)(lVar16 + 0x11) = uVar17;
        return;
      }
    }
  }
  else if (iVar20 == 1) {
    lVar16 = *(long *)&(pUVar23->fields).m_PreviousLayer;
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x20) != 0)) {
      *(undefined1 *)(*(long *)(lVar16 + 0x20) + 0x11) = 1;
      lVar16 = *(long *)(lVar16 + 0x40);
      uVar17 = 1;
      if (lVar16 != 0) goto label_04059f97;
    }
  }
  else {
    if (iVar20 != 0) {
      return;
    }
    lVar16 = *(long *)&(pUVar23->fields).m_PreviousLayer;
    if (lVar16 != 0) {
      lVar16 = *(long *)(lVar16 + 0x20);
      goto joined_r0x04059f93;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar8 = (pUVar23->fields).m_TempColliders;
  if ((pSVar8 != (System_Collections_Generic_List_Collider__o *)0x0) &&
     (pIVar9 = (pSVar8->fields)._syncRoot, pIVar9 != (Il2CppObject *)0x0)) {
    *(bool *)((long)&pIVar9[1].klass + 1) = (int)uVar22 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar16 = ((UnityEngine_Behaviour_Fields *)&pUVar23[1].monitor)->m_CachedPtr;
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0)) {
    *(bool *)(lVar16 + 0x11) = (int)uVar22 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = (pUVar23->fields).m_InternalProfile;
  if ((pUVar10 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) &&
     (lVar16 = *(long *)&(pUVar10->fields).isDirty, lVar16 != 0)) {
    *(bool *)(lVar16 + 0x11) = (int)uVar22 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar20 = (int)uVar22;
  switch(uVar22 & 0xffffffff) {
  case 0:
    if ((pUVar23[1].klass != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar12 = ((pUVar23[1].klass)->_1).byval_arg.data, pvVar12 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar12 + 0x11) = 0;
      return;
    }
    break;
  case 1:
    pUVar11 = pUVar23[1].klass;
    if ((pUVar11 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar12 = (pUVar11->_1).byval_arg.data, pvVar12 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar12 + 0x11) = 1;
      lVar16 = *(long *)&(pUVar11->_1).this_arg.bits;
      if (lVar16 != 0) {
        *(undefined4 *)(lVar16 + 0x14) = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar11 = pUVar23[1].klass;
    if ((pUVar11 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar12 = (pUVar11->_1).byval_arg.data, pvVar12 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar12 + 0x11) = 1;
      lVar16 = *(long *)&(pUVar11->_1).this_arg.bits;
      if (lVar16 != 0) {
        *(undefined4 *)(lVar16 + 0x14) = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar11 = pUVar23[1].klass;
    if ((pUVar11 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_c *)0x0) &&
       (pvVar12 = (pUVar11->_1).byval_arg.data, pvVar12 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar12 + 0x11) = 1;
      lVar16 = *(long *)&(pUVar11->_1).this_arg.bits;
      if (lVar16 != 0) {
        *(undefined4 *)(lVar16 + 0x14) = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)(pUVar23->fields).sharedProfile;
  if ((__this_02 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (iVar20 == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar23,0,(MethodInfo *)0x0);
      *(undefined1 *)&pUVar23[1].klass = 0;
      __this_02 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
                  (pUVar23->fields).m_TempColliders;
      if (__this_02 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,0,(MethodInfo *)0x0);
        lVar16 = *(long *)&(pUVar23->fields).m_PreviousLayer;
        if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0)) {
          uVar17 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_02 = pUVar23;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar23,1,(MethodInfo *)0x0);
      if (iVar20 == 1) {
        *(undefined1 *)&pUVar23[1].klass = 0;
        __this_02 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
                    (pUVar23->fields).m_TempColliders;
        if (__this_02 == (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,0,(MethodInfo *)0x0);
        lVar16._0_4_ = (pUVar23->fields).m_PreviousLayer;
        lVar16._4_4_ = (pUVar23->fields).m_PreviousPriority;
      }
      else {
        if ((iVar20 != 2) && (iVar20 != 3)) {
          return;
        }
        *(undefined1 *)&pUVar23[1].klass = 1;
        lVar16._0_4_ = (pUVar23->fields).m_PreviousLayer;
        lVar16._4_4_ = (pUVar23->fields).m_PreviousPriority;
      }
      if (lVar16 != 0) {
        lVar16 = *(long *)(lVar16 + 0x20);
        uVar17 = 1;
        if (lVar16 != 0) {
label_0405a17f:
          *(undefined1 *)(lVar16 + 0x11) = uVar17;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$SetAmbientOcclusionQuality
// il2cpp: void PostProcessingManager__SetAmbientOcclusionQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x4059e70

void PostProcessingManager__SetAmbientOcclusionQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *pUVar2;
  UnityEngine_Rendering_PostProcessing_GradingModeParameter_o *pUVar3;
  UnityEngine_Rendering_PostProcessing_TextureParameter_o *pUVar4;
  long lVar5;
  UnityEngine_Rendering_PostProcessing_TonemapperParameter_o *pUVar6;
  UnityEngine_Rendering_PostProcessing_FloatParameter_o *pUVar7;
  UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *pUVar8;
  void *pvVar9;
  UnityEngine_Texture_o *pUVar10;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar11;
  undefined1 uVar12;
  int iVar13;
  ulong uVar14;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *__this_01;
  
  uVar14 = (ulong)(uint)quality;
  pUVar1 = (__this->fields)._ambientOcclusion;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *)0x0) &&
     (pUVar11 = (pUVar1->fields).enabled,
     pUVar11 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
    if (quality == 0) {
      *(undefined1 *)((long)&(pUVar11->fields).overrideState + 1) = 0;
      return;
    }
    *(undefined1 *)((long)&(pUVar11->fields).overrideState + 1) = 1;
    pUVar2 = (pUVar1->fields).quality;
    if (pUVar2 != (UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *)0x0) {
      (pUVar2->fields).value = quality + -1;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar13 = (int)uVar14;
  if (iVar13 == 2) {
    pUVar3 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).gradingMode;
    if ((pUVar3 != (UnityEngine_Rendering_PostProcessing_GradingModeParameter_o *)0x0) &&
       (pUVar3[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar3[1].monitor + 0x11) = 1;
      pvVar9 = pUVar3[4].monitor;
joined_r0x04059f13:
      if (pvVar9 != (void *)0x0) {
        uVar12 = 0;
label_04059f17:
        *(undefined1 *)((long)pvVar9 + 0x11) = uVar12;
        return;
      }
    }
  }
  else if (iVar13 == 1) {
    pUVar3 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).gradingMode;
    if ((pUVar3 != (UnityEngine_Rendering_PostProcessing_GradingModeParameter_o *)0x0) &&
       (pUVar3[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar3[1].monitor + 0x11) = 1;
      pvVar9 = pUVar3[4].monitor;
      uVar12 = 1;
      if (pvVar9 != (void *)0x0) goto label_04059f17;
    }
  }
  else {
    if (iVar13 != 0) {
      return;
    }
    pUVar3 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).gradingMode;
    if (pUVar3 != (UnityEngine_Rendering_PostProcessing_GradingModeParameter_o *)0x0) {
      pvVar9 = pUVar3[1].monitor;
      goto joined_r0x04059f13;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar13 = (int)uVar14;
  if (iVar13 == 2) {
    pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
    if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
       (lVar5 = *(long *)&(pUVar4->fields).defaultState, lVar5 != 0)) {
      *(undefined1 *)(lVar5 + 0x11) = 1;
      pUVar10 = pUVar4[1].fields.value;
joined_r0x04059f93:
      if (pUVar10 != (UnityEngine_Texture_o *)0x0) {
        uVar12 = 0;
label_04059f97:
        *(undefined1 *)((long)&(pUVar10->fields).m_CachedPtr + 1) = uVar12;
        return;
      }
    }
  }
  else if (iVar13 == 1) {
    pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
    if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
       (lVar5 = *(long *)&(pUVar4->fields).defaultState, lVar5 != 0)) {
      *(undefined1 *)(lVar5 + 0x11) = 1;
      pUVar10 = pUVar4[1].fields.value;
      uVar12 = 1;
      if (pUVar10 != (UnityEngine_Texture_o *)0x0) goto label_04059f97;
    }
  }
  else {
    if (iVar13 != 0) {
      return;
    }
    pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
    if (pUVar4 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) {
      pUVar10 = *(UnityEngine_Texture_o **)&(pUVar4->fields).defaultState;
      goto joined_r0x04059f93;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
  if ((pUVar6 != (UnityEngine_Rendering_PostProcessing_TonemapperParameter_o *)0x0) &&
     (pvVar9 = pUVar6[1].monitor, pvVar9 != (void *)0x0)) {
    *(bool *)((long)pvVar9 + 0x11) = (int)uVar14 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveShoulderStrength
  ;
  if ((pUVar7 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
     (pvVar9 = pUVar7[1].monitor, pvVar9 != (void *)0x0)) {
    *(bool *)((long)pvVar9 + 0x11) = (int)uVar14 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeStrength;
  if ((pUVar7 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
     (pvVar9 = pUVar7[1].monitor, pvVar9 != (void *)0x0)) {
    *(bool *)((long)pvVar9 + 0x11) = (int)uVar14 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar13 = (int)uVar14;
  switch(uVar14 & 0xffffffff) {
  case 0:
    pUVar7 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar7 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pvVar9 = pUVar7[1].monitor, pvVar9 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar9 + 0x11) = 0;
      return;
    }
    break;
  case 1:
    pUVar7 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar7 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar7[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar7[1].monitor + 0x11) = 1;
      if (pUVar7[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar7[2].monitor + 0x14) = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar7 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar7 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar7[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar7[1].monitor + 0x11) = 1;
      if (pUVar7[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar7[2].monitor + 0x14) = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar7 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar7 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar7[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar7[1].monitor + 0x11) = 1;
      if (pUVar7[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar7[2].monitor + 0x14) = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
              (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).enabled;
  if ((__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (iVar13 == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)
       &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                  (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
      if (__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
        if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
           (pUVar11 = *(UnityEngine_Rendering_PostProcessing_BoolParameter_o **)&(pUVar4->fields).defaultState
           , pUVar11 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          uVar12 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,1,(MethodInfo *)0x0);
      if (iVar13 == 1) {
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
        __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                    (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
        if (__this_01 == (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      else {
        if ((iVar13 != 2) && (iVar13 != 3)) {
          return;
        }
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 1;
        pUVar8 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      if (pUVar8 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) {
        pUVar11 = (pUVar8->fields).enabled;
        uVar12 = 1;
        if (pUVar11 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
label_0405a17f:
          *(undefined1 *)((long)&(pUVar11->fields).overrideState + 1) = uVar12;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$SetBloomQuality
// il2cpp: void PostProcessingManager__SetBloomQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x4059eb0

void PostProcessingManager__SetBloomQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_Bloom_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_TextureParameter_o *pUVar2;
  long lVar3;
  UnityEngine_Rendering_PostProcessing_TonemapperParameter_o *pUVar4;
  void *pvVar5;
  UnityEngine_Rendering_PostProcessing_FloatParameter_o *pUVar6;
  UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *pUVar7;
  UnityEngine_Texture_o *pUVar8;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar9;
  undefined1 uVar10;
  int iVar11;
  ulong uVar12;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *__this_01;
  
  uVar12 = (ulong)(uint)quality;
  if (quality == 2) {
    pUVar1 = (__this->fields)._bloom;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_Bloom_o *)0x0) &&
       (pUVar9 = (pUVar1->fields).enabled,
       pUVar9 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar9->fields).overrideState + 1) = 1;
      pUVar9 = (pUVar1->fields).fastMode;
joined_r0x04059f13:
      if (pUVar9 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
        uVar10 = 0;
label_04059f17:
        *(undefined1 *)((long)&(pUVar9->fields).overrideState + 1) = uVar10;
        return;
      }
    }
  }
  else if (quality == 1) {
    pUVar1 = (__this->fields)._bloom;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_Bloom_o *)0x0) &&
       (pUVar9 = (pUVar1->fields).enabled,
       pUVar9 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar9->fields).overrideState + 1) = 1;
      pUVar9 = (pUVar1->fields).fastMode;
      uVar10 = 1;
      if (pUVar9 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) goto label_04059f17;
    }
  }
  else {
    if (quality != 0) {
      return;
    }
    pUVar1 = (__this->fields)._bloom;
    if (pUVar1 != (UnityEngine_Rendering_PostProcessing_Bloom_o *)0x0) {
      pUVar9 = (pUVar1->fields).enabled;
      goto joined_r0x04059f13;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar11 = (int)uVar12;
  if (iVar11 == 2) {
    pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
    if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
       (lVar3 = *(long *)&(pUVar2->fields).defaultState, lVar3 != 0)) {
      *(undefined1 *)(lVar3 + 0x11) = 1;
      pUVar8 = pUVar2[1].fields.value;
joined_r0x04059f93:
      if (pUVar8 != (UnityEngine_Texture_o *)0x0) {
        uVar10 = 0;
label_04059f97:
        *(undefined1 *)((long)&(pUVar8->fields).m_CachedPtr + 1) = uVar10;
        return;
      }
    }
  }
  else if (iVar11 == 1) {
    pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
    if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
       (lVar3 = *(long *)&(pUVar2->fields).defaultState, lVar3 != 0)) {
      *(undefined1 *)(lVar3 + 0x11) = 1;
      pUVar8 = pUVar2[1].fields.value;
      uVar10 = 1;
      if (pUVar8 != (UnityEngine_Texture_o *)0x0) goto label_04059f97;
    }
  }
  else {
    if (iVar11 != 0) {
      return;
    }
    pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
    if (pUVar2 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) {
      pUVar8 = *(UnityEngine_Texture_o **)&(pUVar2->fields).defaultState;
      goto joined_r0x04059f93;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
  if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_TonemapperParameter_o *)0x0) &&
     (pvVar5 = pUVar4[1].monitor, pvVar5 != (void *)0x0)) {
    *(bool *)((long)pvVar5 + 0x11) = (int)uVar12 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveShoulderStrength
  ;
  if ((pUVar6 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
     (pvVar5 = pUVar6[1].monitor, pvVar5 != (void *)0x0)) {
    *(bool *)((long)pvVar5 + 0x11) = (int)uVar12 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeStrength;
  if ((pUVar6 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
     (pvVar5 = pUVar6[1].monitor, pvVar5 != (void *)0x0)) {
    *(bool *)((long)pvVar5 + 0x11) = (int)uVar12 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar11 = (int)uVar12;
  switch(uVar12 & 0xffffffff) {
  case 0:
    pUVar6 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar6 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pvVar5 = pUVar6[1].monitor, pvVar5 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar5 + 0x11) = 0;
      return;
    }
    break;
  case 1:
    pUVar6 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar6 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar6[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar6[1].monitor + 0x11) = 1;
      if (pUVar6[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar6[2].monitor + 0x14) = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar6 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar6 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar6[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar6[1].monitor + 0x11) = 1;
      if (pUVar6[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar6[2].monitor + 0x14) = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar6 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar6 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar6[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar6[1].monitor + 0x11) = 1;
      if (pUVar6[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar6[2].monitor + 0x14) = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
              (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).enabled;
  if ((__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (iVar11 == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)
       &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                  (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
      if (__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
        if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
           (pUVar9 = *(UnityEngine_Rendering_PostProcessing_BoolParameter_o **)&(pUVar2->fields).defaultState,
           pUVar9 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          uVar10 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,1,(MethodInfo *)0x0);
      if (iVar11 == 1) {
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
        __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                    (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
        if (__this_01 == (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      else {
        if ((iVar11 != 2) && (iVar11 != 3)) {
          return;
        }
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 1;
        pUVar7 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      if (pUVar7 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) {
        pUVar9 = (pUVar7->fields).enabled;
        uVar10 = 1;
        if (pUVar9 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
label_0405a17f:
          *(undefined1 *)((long)&(pUVar9->fields).overrideState + 1) = uVar10;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$SetChromaticAberrationQuality
// il2cpp: void PostProcessingManager__SetChromaticAberrationQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x4059f30

void PostProcessingManager__SetChromaticAberrationQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_TonemapperParameter_o *pUVar2;
  void *pvVar3;
  UnityEngine_Rendering_PostProcessing_FloatParameter_o *pUVar4;
  UnityEngine_Rendering_PostProcessing_TextureParameter_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar6;
  undefined1 uVar7;
  int iVar8;
  ulong uVar9;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *__this_01;
  
  uVar9 = (ulong)(uint)quality;
  if (quality == 2) {
    pUVar1 = (__this->fields)._chromaticAberration;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) &&
       (pUVar6 = (pUVar1->fields).enabled,
       pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar6->fields).overrideState + 1) = 1;
      pUVar6 = (pUVar1->fields).fastMode;
joined_r0x04059f93:
      if (pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
        uVar7 = 0;
label_04059f97:
        *(undefined1 *)((long)&(pUVar6->fields).overrideState + 1) = uVar7;
        return;
      }
    }
  }
  else if (quality == 1) {
    pUVar1 = (__this->fields)._chromaticAberration;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) &&
       (pUVar6 = (pUVar1->fields).enabled,
       pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar6->fields).overrideState + 1) = 1;
      pUVar6 = (pUVar1->fields).fastMode;
      uVar7 = 1;
      if (pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) goto label_04059f97;
    }
  }
  else {
    if (quality != 0) {
      return;
    }
    pUVar1 = (__this->fields)._chromaticAberration;
    if (pUVar1 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) {
      pUVar6 = (pUVar1->fields).enabled;
      goto joined_r0x04059f93;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
  if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_TonemapperParameter_o *)0x0) &&
     (pvVar3 = pUVar2[1].monitor, pvVar3 != (void *)0x0)) {
    *(bool *)((long)pvVar3 + 0x11) = (int)uVar9 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveShoulderStrength
  ;
  if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
     (pvVar3 = pUVar4[1].monitor, pvVar3 != (void *)0x0)) {
    *(bool *)((long)pvVar3 + 0x11) = (int)uVar9 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeStrength;
  if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
     (pvVar3 = pUVar4[1].monitor, pvVar3 != (void *)0x0)) {
    *(bool *)((long)pvVar3 + 0x11) = (int)uVar9 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar8 = (int)uVar9;
  switch(uVar9 & 0xffffffff) {
  case 0:
    pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pvVar3 = pUVar4[1].monitor, pvVar3 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar3 + 0x11) = 0;
      return;
    }
    break;
  case 1:
    pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar4[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar4[1].monitor + 0x11) = 1;
      if (pUVar4[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar4[2].monitor + 0x14) = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar4[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar4[1].monitor + 0x11) = 1;
      if (pUVar4[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar4[2].monitor + 0x14) = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar4[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar4[1].monitor + 0x11) = 1;
      if (pUVar4[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar4[2].monitor + 0x14) = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
              (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).enabled;
  if ((__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (iVar8 == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)
       &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                  (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
      if (__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar5 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
        if ((pUVar5 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
           (pUVar6 = *(UnityEngine_Rendering_PostProcessing_BoolParameter_o **)&(pUVar5->fields).defaultState,
           pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          uVar7 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,1,(MethodInfo *)0x0);
      if (iVar8 == 1) {
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
        __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                    (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
        if (__this_01 == (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      else {
        if ((iVar8 != 2) && (iVar8 != 3)) {
          return;
        }
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 1;
        pUVar1 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      if (pUVar1 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) {
        pUVar6 = (pUVar1->fields).enabled;
        uVar7 = 1;
        if (pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
label_0405a17f:
          *(undefined1 *)((long)&(pUVar6->fields).overrideState + 1) = uVar7;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$SetColorGradingQuality
// il2cpp: void PostProcessingManager__SetColorGradingQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x4059fb0

void PostProcessingManager__SetColorGradingQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_FloatParameter_o *pUVar1;
  void *pvVar2;
  UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *pUVar3;
  UnityEngine_Rendering_PostProcessing_TextureParameter_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar5;
  undefined1 uVar6;
  int iVar7;
  ulong uVar8;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *pUVar9;
  
  uVar8 = (ulong)(uint)quality;
  pUVar9 = (__this->fields)._colorGrading;
  if ((pUVar9 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
     (pUVar5 = (pUVar9->fields).enabled, pUVar5 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0
     )) {
    *(bool *)((long)&(pUVar5->fields).overrideState + 1) = quality != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveShoulderStrength
  ;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
     (pvVar2 = pUVar1[1].monitor, pvVar2 != (void *)0x0)) {
    *(bool *)((long)pvVar2 + 0x11) = (int)uVar8 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeStrength;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
     (pvVar2 = pUVar1[1].monitor, pvVar2 != (void *)0x0)) {
    *(bool *)((long)pvVar2 + 0x11) = (int)uVar8 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar7 = (int)uVar8;
  switch(uVar8 & 0xffffffff) {
  case 0:
    pUVar1 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pvVar2 = pUVar1[1].monitor, pvVar2 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar2 + 0x11) = 0;
      return;
    }
    break;
  case 1:
    pUVar1 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar1[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar1[1].monitor + 0x11) = 1;
      if (pUVar1[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar1[2].monitor + 0x14) = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar1 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar1[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar1[1].monitor + 0x11) = 1;
      if (pUVar1[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar1[2].monitor + 0x14) = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar1 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar1[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar1[1].monitor + 0x11) = 1;
      if (pUVar1[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar1[2].monitor + 0x14) = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
           (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).enabled;
  if ((pUVar9 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)pUVar9,(MethodInfo *)0x0)
     , __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (iVar7 == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)
       &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
      pUVar9 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
               (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
      if (pUVar9 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar9,0,(MethodInfo *)0x0);
        pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
        if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
           (pUVar5 = *(UnityEngine_Rendering_PostProcessing_BoolParameter_o **)&(pUVar4->fields).defaultState,
           pUVar5 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          uVar6 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      pUVar9 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,1,(MethodInfo *)0x0);
      if (iVar7 == 1) {
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
        pUVar9 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
        if (pUVar9 == (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar9,0,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      else {
        if ((iVar7 != 2) && (iVar7 != 3)) {
          return;
        }
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 1;
        pUVar3 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      if (pUVar3 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) {
        pUVar5 = (pUVar3->fields).enabled;
        uVar6 = 1;
        if (pUVar5 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
label_0405a17f:
          *(undefined1 *)((long)&(pUVar5->fields).overrideState + 1) = uVar6;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar9,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$SetAutoExposureQuality
// il2cpp: void PostProcessingManager__SetAutoExposureQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x4059fd0

void PostProcessingManager__SetAutoExposureQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_AutoExposure_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_FloatParameter_o *pUVar2;
  void *pvVar3;
  UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *pUVar4;
  UnityEngine_Rendering_PostProcessing_TextureParameter_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar6;
  undefined1 uVar7;
  int iVar8;
  ulong uVar9;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *__this_01;
  
  uVar9 = (ulong)(uint)quality;
  pUVar1 = (__this->fields)._autoExposure;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_AutoExposure_o *)0x0) &&
     (pUVar6 = (pUVar1->fields).enabled, pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0
     )) {
    *(bool *)((long)&(pUVar6->fields).overrideState + 1) = quality != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeStrength;
  if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
     (pvVar3 = pUVar2[1].monitor, pvVar3 != (void *)0x0)) {
    *(bool *)((long)pvVar3 + 0x11) = (int)uVar9 != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar8 = (int)uVar9;
  switch(uVar9 & 0xffffffff) {
  case 0:
    pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pvVar3 = pUVar2[1].monitor, pvVar3 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar3 + 0x11) = 0;
      return;
    }
    break;
  case 1:
    pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar2[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar2[1].monitor + 0x11) = 1;
      if (pUVar2[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar2[2].monitor + 0x14) = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar2[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar2[1].monitor + 0x11) = 1;
      if (pUVar2[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar2[2].monitor + 0x14) = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar2 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar2 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar2[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar2[1].monitor + 0x11) = 1;
      if (pUVar2[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar2[2].monitor + 0x14) = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
              (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).enabled;
  if ((__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (iVar8 == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)
       &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                  (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
      if (__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar5 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
        if ((pUVar5 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
           (pUVar6 = *(UnityEngine_Rendering_PostProcessing_BoolParameter_o **)&(pUVar5->fields).defaultState,
           pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          uVar7 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,1,(MethodInfo *)0x0);
      if (iVar8 == 1) {
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
        __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                    (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
        if (__this_01 == (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      else {
        if ((iVar8 != 2) && (iVar8 != 3)) {
          return;
        }
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 1;
        pUVar4 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      if (pUVar4 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) {
        pUVar6 = (pUVar4->fields).enabled;
        uVar7 = 1;
        if (pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
label_0405a17f:
          *(undefined1 *)((long)&(pUVar6->fields).overrideState + 1) = uVar7;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$SetDepthOfFieldQuality
// il2cpp: void PostProcessingManager__SetDepthOfFieldQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x4059ff0

void PostProcessingManager__SetDepthOfFieldQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_DepthOfField_o *pUVar1;
  void *pvVar2;
  UnityEngine_Rendering_PostProcessing_FloatParameter_o *pUVar3;
  UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *pUVar4;
  UnityEngine_Rendering_PostProcessing_TextureParameter_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar6;
  undefined1 uVar7;
  int iVar8;
  ulong uVar9;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *__this_01;
  
  uVar9 = (ulong)(uint)quality;
  pUVar1 = (__this->fields)._depthOfField;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_DepthOfField_o *)0x0) &&
     (pUVar6 = (pUVar1->fields).enabled, pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0
     )) {
    *(bool *)((long)&(pUVar6->fields).overrideState + 1) = quality != 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar8 = (int)uVar9;
  switch(uVar9 & 0xffffffff) {
  case 0:
    pUVar3 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar3 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pvVar2 = pUVar3[1].monitor, pvVar2 != (void *)0x0)) {
      *(undefined1 *)((long)pvVar2 + 0x11) = 0;
      return;
    }
    break;
  case 1:
    pUVar3 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar3 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar3[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar3[1].monitor + 0x11) = 1;
      if (pUVar3[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar3[2].monitor + 0x14) = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar3 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar3 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar3[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar3[1].monitor + 0x11) = 1;
      if (pUVar3[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar3[2].monitor + 0x14) = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar3 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength;
    if ((pUVar3 != (UnityEngine_Rendering_PostProcessing_FloatParameter_o *)0x0) &&
       (pUVar3[1].monitor != (void *)0x0)) {
      *(undefined1 *)((long)pUVar3[1].monitor + 0x11) = 1;
      if (pUVar3[2].monitor != (void *)0x0) {
        *(undefined4 *)((long)pUVar3[2].monitor + 0x14) = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
              (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).enabled;
  if ((__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (iVar8 == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)
       &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                  (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
      if (__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar5 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
        if ((pUVar5 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
           (pUVar6 = *(UnityEngine_Rendering_PostProcessing_BoolParameter_o **)&(pUVar5->fields).defaultState,
           pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          uVar7 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,1,(MethodInfo *)0x0);
      if (iVar8 == 1) {
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
        __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                    (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
        if (__this_01 == (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      else {
        if ((iVar8 != 2) && (iVar8 != 3)) {
          return;
        }
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 1;
        pUVar4 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      if (pUVar4 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) {
        pUVar6 = (pUVar4->fields).enabled;
        uVar7 = 1;
        if (pUVar6 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
label_0405a17f:
          *(undefined1 *)((long)&(pUVar6->fields).overrideState + 1) = uVar7;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$SetMotionBlurQuality
// il2cpp: void PostProcessingManager__SetMotionBlurQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x405a010

void PostProcessingManager__SetMotionBlurQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_MotionBlur_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_IntParameter_o *pUVar2;
  UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *pUVar3;
  UnityEngine_Rendering_PostProcessing_TextureParameter_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar5;
  undefined1 uVar6;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *__this_01;
  
  switch(quality) {
  case 0:
    pUVar1 = (__this->fields)._motionBlur;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_MotionBlur_o *)0x0) &&
       (pUVar5 = (pUVar1->fields).enabled,
       pUVar5 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar5->fields).overrideState + 1) = 0;
      return;
    }
    break;
  case 1:
    pUVar1 = (__this->fields)._motionBlur;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_MotionBlur_o *)0x0) &&
       (pUVar5 = (pUVar1->fields).enabled,
       pUVar5 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar5->fields).overrideState + 1) = 1;
      pUVar2 = (pUVar1->fields).sampleCount;
      if (pUVar2 != (UnityEngine_Rendering_PostProcessing_IntParameter_o *)0x0) {
        (pUVar2->fields).value = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar1 = (__this->fields)._motionBlur;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_MotionBlur_o *)0x0) &&
       (pUVar5 = (pUVar1->fields).enabled,
       pUVar5 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar5->fields).overrideState + 1) = 1;
      pUVar2 = (pUVar1->fields).sampleCount;
      if (pUVar2 != (UnityEngine_Rendering_PostProcessing_IntParameter_o *)0x0) {
        (pUVar2->fields).value = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar1 = (__this->fields)._motionBlur;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_MotionBlur_o *)0x0) &&
       (pUVar5 = (pUVar1->fields).enabled,
       pUVar5 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar5->fields).overrideState + 1) = 1;
      pUVar2 = (pUVar1->fields).sampleCount;
      if (pUVar2 != (UnityEngine_Rendering_PostProcessing_IntParameter_o *)0x0) {
        (pUVar2->fields).value = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
              (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).enabled;
  if ((__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_gameObject
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (quality == 0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
      *(undefined1 *)
       &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                  (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
      if (__this_01 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar4 = (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
        if ((pUVar4 != (UnityEngine_Rendering_PostProcessing_TextureParameter_o *)0x0) &&
           (pUVar5 = *(UnityEngine_Rendering_PostProcessing_BoolParameter_o **)&(pUVar4->fields).defaultState,
           pUVar5 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
          uVar6 = 0;
          goto label_0405a17f;
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,1,(MethodInfo *)0x0);
      if (quality == 1) {
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 0;
        __this_01 = (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)
                    (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).tonemapper;
        if (__this_01 == (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) goto label_0405a1a8;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      else {
        if ((quality != 2) && (quality != 3)) {
          return;
        }
        *(undefined1 *)
         &(((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).toneCurveToeLength = 1;
        pUVar3 = (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)
                 (((UnityEngine_Rendering_PostProcessing_ColorGrading_o *)__this)->fields).externalLut;
      }
      if (pUVar3 != (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) {
        pUVar5 = (pUVar3->fields).enabled;
        uVar6 = 1;
        if (pUVar5 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
label_0405a17f:
          *(undefined1 *)((long)&(pUVar5->fields).overrideState + 1) = uVar6;
          return;
        }
      }
    }
  }
label_0405a1a8:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$.ctor
// il2cpp: void PostProcessingManager___ctor (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x405a1b0

void PostProcessingManager___ctor(PostProcessingManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


