// Type: PostProcessingManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PostProcessingManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/PostProcessingManager.cs  [CHANGED since prior version]
// --------------------------------

// PostProcessingManager$$Awake
// il2cpp: void PostProcessingManager__Awake (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x3d63ee0

void PostProcessingManager__Awake(PostProcessingManager_o *__this,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o **ppUVar1;
  long lVar2;
  bool_conflict bVar3;
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *pUVar4;
  UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *pUVar5;
  MethodInfo *method_00;
  
  if (DAT_057025c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_PostProcessVolume_GetComponent_PostProcessVolume);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetSettings_AmbientOcclusion);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetSettings_AutoExposure);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetSettings_Bloom);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetSettings_ChromaticAberration);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetSettings_ColorGrading);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetSettings_DepthOfField);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetSettings_MotionBlur);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"PostProcessingManager: No PostProcessVolume component found on this object.");
    DAT_057025c2 = '\x01';
  }
  pUVar4 = (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_PostProcessVolume_GetComponent_PostProcessVolume);
  ppUVar1 = &(__this->fields)._postProcessingVolume;
  (__this->fields)._postProcessingVolume = pUVar4;
  il2cpp_runtime_glue(ppUVar1);
  pUVar4 = (__this->fields)._postProcessingVolume;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogError("PostProcessingManager: No PostProcessVolume component found on this object.",(MethodInfo *)0x0);
    return;
  }
  pUVar4 = *ppUVar1;
  if (pUVar4 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
    pUVar5 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                       (pUVar4,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
      UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings<object>
                (pUVar5,(Il2CppObject **)&(__this->fields)._ambientOcclusion,MethodInfo_Boolean_TryGetSettings_AmbientOcclusion);
      pUVar4 = (__this->fields)._postProcessingVolume;
      if (pUVar4 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
        pUVar5 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                           (pUVar4,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
          UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings<object>
                    (pUVar5,(Il2CppObject **)&(__this->fields)._bloom,MethodInfo_Boolean_TryGetSettings_Bloom);
          pUVar4 = (__this->fields)._postProcessingVolume;
          if (pUVar4 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
            pUVar5 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                               (pUVar4,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
              UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings<object>
                        (pUVar5,(Il2CppObject **)&(__this->fields)._chromaticAberration,MethodInfo_Boolean_TryGetSettings_ChromaticAberration
                        );
              pUVar4 = (__this->fields)._postProcessingVolume;
              if (pUVar4 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
                pUVar5 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                   (pUVar4,(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0) {
                  UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings<object>
                            (pUVar5,(Il2CppObject **)&(__this->fields)._colorGrading,MethodInfo_Boolean_TryGetSettings_ColorGrading);
                  pUVar4 = (__this->fields)._postProcessingVolume;
                  if (pUVar4 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
                    pUVar5 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                       (pUVar4,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)0x0)
                    {
                      UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings<object>
                                (pUVar5,(Il2CppObject **)&(__this->fields)._depthOfField,
                                 MethodInfo_Boolean_TryGetSettings_DepthOfField);
                      pUVar4 = (__this->fields)._postProcessingVolume;
                      if (pUVar4 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0)
                      {
                        pUVar5 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                           (pUVar4,(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o *)
                                      0x0) {
                          UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings<object>
                                    (pUVar5,(Il2CppObject **)&(__this->fields)._motionBlur,
                                     MethodInfo_Boolean_TryGetSettings_MotionBlur);
                          pUVar4 = (__this->fields)._postProcessingVolume;
                          if (pUVar4 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)
                                        0x0) {
                            pUVar5 = UnityEngine_Rendering_PostProcessing_PostProcessVolume__get_profile
                                               (pUVar4,(MethodInfo *)0x0);
                            if (pUVar5 != (UnityEngine_Rendering_PostProcessing_PostProcessProfile_o
                                           *)0x0) {
                              method_00 = (MethodInfo *)0x3d6417b;
                              UnityEngine_Rendering_PostProcessing_PostProcessProfile__TryGetSettings<object>
                                        (pUVar5,(Il2CppObject **)&(__this->fields)._autoExposure,
                                         MethodInfo_Boolean_TryGetSettings_AutoExposure);
                              lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
                              if (lVar2 != 0) {
                                if (((((*(long *)(lVar2 + 0xd8) == 0) ||
                                      (*(long *)(lVar2 + 0xe0) == 0)) ||
                                     (*(long *)(lVar2 + 0xe8) == 0)) ||
                                    ((*(long *)(lVar2 + 0xf0) == 0 || (*(long *)(lVar2 + 0xf8) == 0)
                                     ))) || ((*(long *)(lVar2 + 0x100) == 0 ||
                                             ((*(long *)(lVar2 + 0x108) == 0 ||
                                              (*(long *)(lVar2 + 0x110) == 0))))))
                                goto LAB_03d64232;
                                PostProcessingManager__ApplySettings
                                          (__this,*(int32_t *)(*(long *)(lVar2 + 0xd8) + 0x14),
                                           *(int32_t *)(*(long *)(lVar2 + 0xe0) + 0x14),
                                           *(int32_t *)(*(long *)(lVar2 + 0xe8) + 0x14),
                                           *(int32_t *)(*(long *)(lVar2 + 0xf0) + 0x14),
                                           *(int32_t *)(*(long *)(lVar2 + 0xf8) + 0x14),
                                           *(int32_t *)(*(long *)(lVar2 + 0x100) + 0x14),
                                           *(int32_t *)(*(long *)(lVar2 + 0x108) + 0x14),
                                           *(int32_t *)(*(long *)(lVar2 + 0x110) + 0x14),method_00);
                              }
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
LAB_03d64232:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PostProcessingManager$$SetState
// il2cpp: void PostProcessingManager__SetState (PostProcessingManager_o* __this, bool state, const MethodInfo* method);
// 0x3d64460

void PostProcessingManager__SetState
               (PostProcessingManager_o *__this,bool_conflict state,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_057025c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"PostProcessingManager: No PostProcessVolume component found on this object.");
    DAT_057025c3 = '\x01';
  }
  pUVar1 = (__this->fields)._postProcessingVolume;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogError("PostProcessingManager: No PostProcessVolume component found on this object.",(MethodInfo *)0x0);
    return;
  }
  pUVar1 = (__this->fields)._postProcessingVolume;
  if (pUVar1 != (UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pUVar1,state & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PostProcessingManager$$ApplySettings
// il2cpp: void PostProcessingManager__ApplySettings (PostProcessingManager_o* __this, int32_t aol, int32_t bl, int32_t cal, int32_t cgl, int32_t ael, int32_t dofl, int32_t mbl, int32_t wfxl, const MethodInfo* method);
// 0x3d64240

void PostProcessingManager__ApplySettings
               (PostProcessingManager_o *__this,int32_t aol,int32_t bl,int32_t cal,int32_t cgl,
               int32_t ael,int32_t dofl,int32_t mbl,int32_t wfxl,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_PostProcessVolume_o *x;
  UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *pUVar3;
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *pUVar4;
  UnityEngine_Rendering_PostProcessing_AutoExposure_o *pUVar5;
  UnityEngine_Rendering_PostProcessing_DepthOfField_o *pUVar6;
  bool_conflict bVar7;
  uint uVar8;
  System_Object_array *pSVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_00;
  uint uVar10;
  
  if (DAT_057025c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_WaterEffect___FindObjectsByType_WaterEffect);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"PostProcessingManager: No PostProcessVolume component found on this object.");
    DAT_057025c4 = '\x01';
  }
  x = (__this->fields)._postProcessingVolume;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogError("PostProcessingManager: No PostProcessVolume component found on this object.",(MethodInfo *)0x0);
    return;
  }
  pUVar1 = (__this->fields)._ambientOcclusion;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).enabled,
     pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
    if (aol == 0) {
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 0;
    }
    else {
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
      pUVar3 = (pUVar1->fields).quality;
      if (pUVar3 == (UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *)0x0)
      goto LAB_03d64452;
      (pUVar3->fields).value = aol + -1;
    }
    PostProcessingManager__SetBloomQuality(__this,bl,method_00);
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
            il2cpp_init_class();
          }
          pSVar9 = UnityEngine_Object__FindObjectsByType<object>(0,MethodInfo_WaterEffect___FindObjectsByType_WaterEffect);
          if (pSVar9 != (System_Object_array *)0x0) {
            uVar8 = (uint)pSVar9->max_length;
            if (0 < (int)uVar8) {
              uVar10 = 0;
              method_03 = extraout_RDX;
              do {
                if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if ((WaterEffect_o *)pSVar9->m_Items[(int)uVar10] == (WaterEffect_o *)0x0)
                goto LAB_03d64452;
                WaterEffect__ApplySettings
                          ((WaterEffect_o *)pSVar9->m_Items[(int)uVar10],wfxl,method_03);
                uVar10 = uVar10 + 1;
                uVar8 = (uint)pSVar9->max_length;
                method_03 = extraout_RDX_00;
              } while ((int)uVar10 < (int)uVar8);
            }
            return;
          }
        }
      }
    }
  }
LAB_03d64452:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PostProcessingManager$$SetAmbientOcclusionQuality
// il2cpp: void PostProcessingManager__SetAmbientOcclusionQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x3d64520

void PostProcessingManager__SetAmbientOcclusionQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *pUVar3;
  
  pUVar1 = (__this->fields)._ambientOcclusion;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_AmbientOcclusion_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).enabled,
     pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
    if (quality == 0) {
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 0;
      return;
    }
    *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
    pUVar3 = (pUVar1->fields).quality;
    if (pUVar3 != (UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_o *)0x0) {
      (pUVar3->fields).value = quality + -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PostProcessingManager$$SetBloomQuality
// il2cpp: void PostProcessingManager__SetBloomQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x3d64560

void PostProcessingManager__SetBloomQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_Bloom_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  undefined1 uVar3;
  
  if (quality == 2) {
    pUVar1 = (__this->fields)._bloom;
    if ((pUVar1 == (UnityEngine_Rendering_PostProcessing_Bloom_o *)0x0) ||
       (pUVar2 = (pUVar1->fields).enabled,
       pUVar2 == (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) goto LAB_03d645cc;
    *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
    pUVar2 = (pUVar1->fields).fastMode;
  }
  else {
    if (quality == 1) {
      pUVar1 = (__this->fields)._bloom;
      if ((pUVar1 == (UnityEngine_Rendering_PostProcessing_Bloom_o *)0x0) ||
         (pUVar2 = (pUVar1->fields).enabled,
         pUVar2 == (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) goto LAB_03d645cc;
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
      pUVar2 = (pUVar1->fields).fastMode;
      uVar3 = 1;
      if (pUVar2 == (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) goto LAB_03d645cc;
      goto LAB_03d645c7;
    }
    if (quality != 0) {
      return;
    }
    pUVar1 = (__this->fields)._bloom;
    if (pUVar1 == (UnityEngine_Rendering_PostProcessing_Bloom_o *)0x0) goto LAB_03d645cc;
    pUVar2 = (pUVar1->fields).enabled;
  }
  if (pUVar2 == (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
LAB_03d645cc:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = 0;
LAB_03d645c7:
  *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = uVar3;
  return;
}


// PostProcessingManager$$SetChromaticAberrationQuality
// il2cpp: void PostProcessingManager__SetChromaticAberrationQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x3d645e0

void PostProcessingManager__SetChromaticAberrationQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  undefined1 uVar3;
  
  if (quality == 2) {
    pUVar1 = (__this->fields)._chromaticAberration;
    if ((pUVar1 == (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) ||
       (pUVar2 = (pUVar1->fields).enabled,
       pUVar2 == (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) goto LAB_03d6464c;
    *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
    pUVar2 = (pUVar1->fields).fastMode;
  }
  else {
    if (quality == 1) {
      pUVar1 = (__this->fields)._chromaticAberration;
      if ((pUVar1 == (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0) ||
         (pUVar2 = (pUVar1->fields).enabled,
         pUVar2 == (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) goto LAB_03d6464c;
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
      pUVar2 = (pUVar1->fields).fastMode;
      uVar3 = 1;
      if (pUVar2 == (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) goto LAB_03d6464c;
      goto LAB_03d64647;
    }
    if (quality != 0) {
      return;
    }
    pUVar1 = (__this->fields)._chromaticAberration;
    if (pUVar1 == (UnityEngine_Rendering_PostProcessing_ChromaticAberration_o *)0x0)
    goto LAB_03d6464c;
    pUVar2 = (pUVar1->fields).enabled;
  }
  if (pUVar2 == (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0) {
LAB_03d6464c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = 0;
LAB_03d64647:
  *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = uVar3;
  return;
}


// PostProcessingManager$$SetColorGradingQuality
// il2cpp: void PostProcessingManager__SetColorGradingQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x3d64660

void PostProcessingManager__SetColorGradingQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_ColorGrading_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  
  pUVar1 = (__this->fields)._colorGrading;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_ColorGrading_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).enabled,
     pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
    *(bool *)((long)&(pUVar2->fields).overrideState + 1) = quality != 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PostProcessingManager$$SetAutoExposureQuality
// il2cpp: void PostProcessingManager__SetAutoExposureQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x3d64680

void PostProcessingManager__SetAutoExposureQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_AutoExposure_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  
  pUVar1 = (__this->fields)._autoExposure;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_AutoExposure_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).enabled,
     pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
    *(bool *)((long)&(pUVar2->fields).overrideState + 1) = quality != 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PostProcessingManager$$SetDepthOfFieldQuality
// il2cpp: void PostProcessingManager__SetDepthOfFieldQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x3d646a0

void PostProcessingManager__SetDepthOfFieldQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_DepthOfField_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  
  pUVar1 = (__this->fields)._depthOfField;
  if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_DepthOfField_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).enabled,
     pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
    *(bool *)((long)&(pUVar2->fields).overrideState + 1) = quality != 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PostProcessingManager$$SetMotionBlurQuality
// il2cpp: void PostProcessingManager__SetMotionBlurQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x3d646c0

void PostProcessingManager__SetMotionBlurQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_PostProcessing_MotionBlur_o *pUVar1;
  UnityEngine_Rendering_PostProcessing_BoolParameter_o *pUVar2;
  UnityEngine_Rendering_PostProcessing_IntParameter_o *pUVar3;
  
  switch(quality) {
  case 0:
    pUVar1 = (__this->fields)._motionBlur;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_MotionBlur_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).enabled,
       pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 0;
      return;
    }
    break;
  case 1:
    pUVar1 = (__this->fields)._motionBlur;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_MotionBlur_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).enabled,
       pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
      pUVar3 = (pUVar1->fields).sampleCount;
      if (pUVar3 != (UnityEngine_Rendering_PostProcessing_IntParameter_o *)0x0) {
        (pUVar3->fields).value = 4;
        return;
      }
    }
    break;
  case 2:
    pUVar1 = (__this->fields)._motionBlur;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_MotionBlur_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).enabled,
       pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
      pUVar3 = (pUVar1->fields).sampleCount;
      if (pUVar3 != (UnityEngine_Rendering_PostProcessing_IntParameter_o *)0x0) {
        (pUVar3->fields).value = 8;
        return;
      }
    }
    break;
  case 3:
    pUVar1 = (__this->fields)._motionBlur;
    if ((pUVar1 != (UnityEngine_Rendering_PostProcessing_MotionBlur_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).enabled,
       pUVar2 != (UnityEngine_Rendering_PostProcessing_BoolParameter_o *)0x0)) {
      *(undefined1 *)((long)&(pUVar2->fields).overrideState + 1) = 1;
      pUVar3 = (pUVar1->fields).sampleCount;
      if (pUVar3 != (UnityEngine_Rendering_PostProcessing_IntParameter_o *)0x0) {
        (pUVar3->fields).value = 0x10;
        return;
      }
    }
    break;
  default:
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PostProcessingManager$$.ctor
// il2cpp: void PostProcessingManager___ctor (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x3d64860

void PostProcessingManager___ctor(PostProcessingManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


