// Type: PostProcessingManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/PostProcessingManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PostProcessingManager.cs
// --------------------------------

// PostProcessingManager$$Awake
// il2cpp: void PostProcessingManager__Awake (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x181dad4e0

void PostProcessingManager__Awake(PostProcessingManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Rendering_Volume_o *pUVar3;
  UnityEngine_Rendering_VolumeProfile_o *pUVar4;
  
  if (Il2CppMethodInitialized_184344891 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Volume);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_VolumeProfile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PostProcessingManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_Bloom);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_ChromaticAberration);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_ColorAdjustments);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_DepthOfField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_MotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultVolume");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterVolume");
    Il2CppMethodInitialized_184344891 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"DefaultVolume",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Volume);
      (__this->fields).defaultVolume = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).defaultVolume,pUVar3);
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__Find(pUVar2,"WaterVolume",(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar2,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Volume);
          (__this->fields).waterVolume = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields).waterVolume,pUVar3);
          pUVar4 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar3 = (__this->fields).defaultVolume;
            if (pUVar3 == (UnityEngine_Rendering_Volume_o *)0x0) goto label_181dad7cb;
            pUVar4 = UnityEngine_Rendering_Volume__get_profile(pUVar3,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            pUVar4 = UnityEngine_Object__Instantiate_object__746ba0
                               ((Il2CppObject *)pUVar4,
                                (MethodInfo_746BA0 *)MethodInfo_UnityEngine_Object_Instantiate_VolumeProfile);
            TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile = pUVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile,pUVar4);
          }
          pUVar3 = (__this->fields).defaultVolume;
          if (pUVar3 != (UnityEngine_Rendering_Volume_o *)0x0) {
            pUVar4 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
            (pUVar3->fields).m_InternalProfile = pUVar4;
            Il2CppCodeGenWriteBarrier(&(pUVar3->fields).m_InternalProfile,pUVar4);
            pUVar4 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
            if (pUVar4 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
              UnityEngine_Rendering_VolumeProfile__TryGet_object_
                        (pUVar4,(Il2CppObject **)&(__this->fields)._bloom,
                         (MethodInfo_86F290 *)MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_Bloom);
              pUVar4 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
              if (pUVar4 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
                UnityEngine_Rendering_VolumeProfile__TryGet_object_
                          (pUVar4,(Il2CppObject **)&(__this->fields)._chromaticAberration,
                           (MethodInfo_86F290 *)
                           MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_ChromaticAberration);
                pUVar4 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
                if (pUVar4 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
                  UnityEngine_Rendering_VolumeProfile__TryGet_object_
                            (pUVar4,(Il2CppObject **)&(__this->fields)._depthOfField,
                             (MethodInfo_86F290 *)
                             MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_DepthOfField);
                  pUVar4 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
                  if (pUVar4 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
                    UnityEngine_Rendering_VolumeProfile__TryGet_object_
                              (pUVar4,(Il2CppObject **)&(__this->fields)._motionBlur,
                               (MethodInfo_86F290 *)
                               MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_MotionBlur);
                    pUVar4 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
                    if (pUVar4 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
                      UnityEngine_Rendering_VolumeProfile__TryGet_object_
                                (pUVar4,(Il2CppObject **)&(__this->fields)._colorAdjustments,
                                 (MethodInfo_86F290 *)
                                 MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_ColorAdjustments);
                      PostProcessingManager__Apply(__this,(MethodInfo *)0x0);
                      PostProcessingManager__ToggleWaterFX(__this,false,(MethodInfo *)0x0);
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
label_181dad7cb:
  ThrowNullReferenceException();
}


// PostProcessingManager$$FixedUpdate
// il2cpp: void PostProcessingManager__FixedUpdate (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x181dad7e0

void PostProcessingManager__FixedUpdate(PostProcessingManager_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  bool active;
  
  if (Il2CppMethodInitialized_184344892 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344892 = '\x01';
  }
  if ((__this->fields).InsideWater != false) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar1 == (Settings_GraphicsSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).WaterFX, pSVar2 == (Settings_IntSetting_o *)0x0)) {
      ThrowNullReferenceException();
    }
    if ((pSVar2->fields)._value != 0) {
      active = true;
      goto label_181dad846;
    }
  }
  active = false;
label_181dad846:
  PostProcessingManager__ToggleWaterFX(__this,active,(MethodInfo *)0x0);
  (__this->fields).InsideWater = false;
  return;
}


// PostProcessingManager$$ToggleWaterFX
// il2cpp: void PostProcessingManager__ToggleWaterFX (PostProcessingManager_o* __this, bool active, const MethodInfo* method);
// 0x181dada90

void PostProcessingManager__ToggleWaterFX(PostProcessingManager_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_Rendering_Volume_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344893 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344893 = '\x01';
  }
  pUVar1 = (__this->fields).waterVolume;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__this->fields).waterVolume;
    if (pUVar1 == (UnityEngine_Rendering_Volume_o *)0x0) {
label_181dadb25:
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
    if (bVar2 != active) {
      pUVar1 = (__this->fields).waterVolume;
      if (pUVar1 == (UnityEngine_Rendering_Volume_o *)0x0) goto label_181dadb25;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,active,(MethodInfo *)0x0);
    }
  }
  return;
}


// PostProcessingManager$$Apply
// il2cpp: void PostProcessingManager__Apply (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x181dad210

void PostProcessingManager__Apply(PostProcessingManager_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Rendering_VolumeProfile_o *x;
  Settings_GraphicsSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  UnityEngine_Rendering_Universal_Bloom_o *pUVar4;
  UnityEngine_Rendering_BoolParameter_o *pUVar5;
  UnityEngine_Rendering_Universal_ChromaticAberration_o *pUVar6;
  UnityEngine_Rendering_Universal_DepthOfField_o *pUVar7;
  UnityEngine_Rendering_Universal_MotionBlur_o *pUVar8;
  UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *pUVar9;
  UnityEngine_Rendering_Universal_ColorAdjustments_o *pUVar10;
  bool bVar11;
  undefined8 uVar12;
  
  if (Il2CppMethodInitialized_184344894 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PostProcessingManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344894 = '\x01';
  }
  x = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  uVar12 = 0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar11) ||
     (pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings,
     pSVar2 == (Settings_GraphicsSettings_o *)0x0)) {
    return;
  }
  pSVar3 = (pSVar2->fields).Bloom;
  if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_181dad4da;
  iVar1 = (pSVar3->fields)._value;
  if (iVar1 == 0) {
    pUVar4 = (__this->fields)._bloom;
    if (pUVar4 == (UnityEngine_Rendering_Universal_Bloom_o *)0x0) goto label_181dad4da;
    (pUVar4->fields).active = false;
  }
  else if (iVar1 == 1) {
    pUVar4 = (__this->fields)._bloom;
    if (pUVar4 == (UnityEngine_Rendering_Universal_Bloom_o *)0x0) goto label_181dad4da;
    (pUVar4->fields).active = true;
    pUVar4 = (__this->fields)._bloom;
    if ((pUVar4 == (UnityEngine_Rendering_Universal_Bloom_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).highQualityFiltering, pUVar5 == (UnityEngine_Rendering_BoolParameter_o *)0x0
       )) goto label_181dad4da;
    (*(pUVar5->klass->vtable)._15_set_value.methodPtr)(pUVar5,0,(pUVar5->klass->vtable)._15_set_value.method);
  }
  else if (iVar1 == 2) {
    pUVar4 = (__this->fields)._bloom;
    if (pUVar4 == (UnityEngine_Rendering_Universal_Bloom_o *)0x0) goto label_181dad4da;
    (pUVar4->fields).active = true;
    pUVar4 = (__this->fields)._bloom;
    if ((pUVar4 == (UnityEngine_Rendering_Universal_Bloom_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).highQualityFiltering, pUVar5 == (UnityEngine_Rendering_BoolParameter_o *)0x0
       )) goto label_181dad4da;
    (*(pUVar5->klass->vtable)._15_set_value.methodPtr)
              (pUVar5,CONCAT71((int7)((ulonglong)uVar12 >> 8),1),(pUVar5->klass->vtable)._15_set_value.method)
    ;
  }
  pSVar3 = (pSVar2->fields).ChromaticAberrationFX;
  if ((pSVar3 != (Settings_IntSetting_o *)0x0) &&
     (pUVar6 = (__this->fields)._chromaticAberration,
     pUVar6 != (UnityEngine_Rendering_Universal_ChromaticAberration_o *)0x0)) {
    (pUVar6->fields).active = (pSVar3->fields)._value != 0;
    pSVar3 = (pSVar2->fields).DepthOfField;
    if ((pSVar3 != (Settings_IntSetting_o *)0x0) &&
       (pUVar7 = (__this->fields)._depthOfField,
       pUVar7 != (UnityEngine_Rendering_Universal_DepthOfField_o *)0x0)) {
      (pUVar7->fields).active = (pSVar3->fields)._value != 0;
      pSVar3 = (pSVar2->fields).MotionBlur;
      if (pSVar3 != (Settings_IntSetting_o *)0x0) {
        iVar1 = (pSVar3->fields)._value;
        if (iVar1 == 0) {
          pUVar8 = (__this->fields)._motionBlur;
          if (pUVar8 == (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) goto label_181dad4da;
          (pUVar8->fields).active = false;
        }
        else if (iVar1 == 1) {
          pUVar8 = (__this->fields)._motionBlur;
          if (pUVar8 == (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) goto label_181dad4da;
          (pUVar8->fields).active = true;
          pUVar8 = (__this->fields)._motionBlur;
          if ((pUVar8 == (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) ||
             (pUVar9 = (pUVar8->fields).quality,
             pUVar9 == (UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *)0x0))
          goto label_181dad4da;
          (*(pUVar9->klass->vtable)._15_set_value.methodPtr)
                    (pUVar9,0,(pUVar9->klass->vtable)._15_set_value.method);
        }
        else if (iVar1 == 2) {
          pUVar8 = (__this->fields)._motionBlur;
          if (pUVar8 == (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) goto label_181dad4da;
          (pUVar8->fields).active = true;
          pUVar8 = (__this->fields)._motionBlur;
          if ((pUVar8 == (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) ||
             (pUVar9 = (pUVar8->fields).quality,
             pUVar9 == (UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *)0x0))
          goto label_181dad4da;
          (*(pUVar9->klass->vtable)._15_set_value.methodPtr)
                    (pUVar9,1,(pUVar9->klass->vtable)._15_set_value.method);
        }
        else if (iVar1 == 3) {
          pUVar8 = (__this->fields)._motionBlur;
          if (pUVar8 == (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) goto label_181dad4da;
          (pUVar8->fields).active = true;
          pUVar8 = (__this->fields)._motionBlur;
          if ((pUVar8 == (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) ||
             (pUVar9 = (pUVar8->fields).quality,
             pUVar9 == (UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *)0x0))
          goto label_181dad4da;
          (*(pUVar9->klass->vtable)._15_set_value.methodPtr)
                    (pUVar9,2,(pUVar9->klass->vtable)._15_set_value.method);
        }
        pSVar3 = (pSVar2->fields).ColorGrading;
        if ((pSVar3 != (Settings_IntSetting_o *)0x0) &&
           (pUVar10 = (__this->fields)._colorAdjustments,
           pUVar10 != (UnityEngine_Rendering_Universal_ColorAdjustments_o *)0x0)) {
          (pUVar10->fields).active = (pSVar3->fields)._value != 0;
          return;
        }
      }
    }
  }
label_181dad4da:
  ThrowNullReferenceException();
}


// PostProcessingManager$$SetColorGradingQuality
// il2cpp: void PostProcessingManager__SetColorGradingQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x181dad940

void PostProcessingManager__SetColorGradingQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_ColorAdjustments_o *pUVar1;
  
  pUVar1 = (__this->fields)._colorAdjustments;
  if (pUVar1 != (UnityEngine_Rendering_Universal_ColorAdjustments_o *)0x0) {
    (pUVar1->fields).active = quality != 0;
    return;
  }
  ThrowNullReferenceException();
}


// PostProcessingManager$$SetBloomQuality
// il2cpp: void PostProcessingManager__SetBloomQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x181dad870

void PostProcessingManager__SetBloomQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_Bloom_o *pUVar1;
  UnityEngine_Rendering_BoolParameter_o *pUVar2;
  
  if (quality == 0) {
    pUVar1 = (__this->fields)._bloom;
    if (pUVar1 != (UnityEngine_Rendering_Universal_Bloom_o *)0x0) {
      (pUVar1->fields).active = false;
      return;
    }
  }
  else if (quality == 1) {
    pUVar1 = (__this->fields)._bloom;
    if (pUVar1 != (UnityEngine_Rendering_Universal_Bloom_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar1 = (__this->fields)._bloom;
      if ((pUVar1 != (UnityEngine_Rendering_Universal_Bloom_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).highQualityFiltering,
         pUVar2 != (UnityEngine_Rendering_BoolParameter_o *)0x0)) {
        (*(pUVar2->klass->vtable)._15_set_value.methodPtr)
                  (pUVar2,0,(pUVar2->klass->vtable)._15_set_value.method);
        return;
      }
    }
  }
  else {
    if (quality != 2) {
      return;
    }
    pUVar1 = (__this->fields)._bloom;
    if (pUVar1 != (UnityEngine_Rendering_Universal_Bloom_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar1 = (__this->fields)._bloom;
      if ((pUVar1 != (UnityEngine_Rendering_Universal_Bloom_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).highQualityFiltering,
         pUVar2 != (UnityEngine_Rendering_BoolParameter_o *)0x0)) {
        (*(pUVar2->klass->vtable)._15_set_value.methodPtr)
                  (pUVar2,1,(pUVar2->klass->vtable)._15_set_value.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// PostProcessingManager$$SetChromaticAberrationQuality
// il2cpp: void PostProcessingManager__SetChromaticAberrationQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x181dad910

void PostProcessingManager__SetChromaticAberrationQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_ChromaticAberration_o *pUVar1;
  
  pUVar1 = (__this->fields)._chromaticAberration;
  if (pUVar1 != (UnityEngine_Rendering_Universal_ChromaticAberration_o *)0x0) {
    (pUVar1->fields).active = quality != 0;
    return;
  }
  ThrowNullReferenceException();
}


// PostProcessingManager$$SetDepthOfFieldQuality
// il2cpp: void PostProcessingManager__SetDepthOfFieldQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x181dad970

void PostProcessingManager__SetDepthOfFieldQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_DepthOfField_o *pUVar1;
  
  pUVar1 = (__this->fields)._depthOfField;
  if (pUVar1 != (UnityEngine_Rendering_Universal_DepthOfField_o *)0x0) {
    (pUVar1->fields).active = quality != 0;
    return;
  }
  ThrowNullReferenceException();
}


// PostProcessingManager$$SetMotionBlurQuality
// il2cpp: void PostProcessingManager__SetMotionBlurQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x181dad9a0

void PostProcessingManager__SetMotionBlurQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_MotionBlur_o *pUVar1;
  UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *pUVar2;
  
  if (quality == 0) {
    pUVar1 = (__this->fields)._motionBlur;
    if (pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) {
      (pUVar1->fields).active = false;
      return;
    }
  }
  else if (quality == 1) {
    pUVar1 = (__this->fields)._motionBlur;
    if (pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar1 = (__this->fields)._motionBlur;
      if ((pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).quality,
         pUVar2 != (UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *)0x0)) {
        (*(pUVar2->klass->vtable)._15_set_value.methodPtr)
                  (pUVar2,0,(pUVar2->klass->vtable)._15_set_value.method);
        return;
      }
    }
  }
  else if (quality == 2) {
    pUVar1 = (__this->fields)._motionBlur;
    if (pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar1 = (__this->fields)._motionBlur;
      if ((pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).quality,
         pUVar2 != (UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *)0x0)) {
        (*(pUVar2->klass->vtable)._15_set_value.methodPtr)
                  (pUVar2,1,(pUVar2->klass->vtable)._15_set_value.method);
        return;
      }
    }
  }
  else {
    if (quality != 3) {
      return;
    }
    pUVar1 = (__this->fields)._motionBlur;
    if (pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar1 = (__this->fields)._motionBlur;
      if ((pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).quality,
         pUVar2 != (UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *)0x0)) {
        (*(pUVar2->klass->vtable)._15_set_value.methodPtr)
                  (pUVar2,2,(pUVar2->klass->vtable)._15_set_value.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// PostProcessingManager$$.ctor
// il2cpp: void PostProcessingManager___ctor (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x180528540

void
PostProcessingManager___ctor(PostProcessingManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


