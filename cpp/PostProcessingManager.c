// Type: PostProcessingManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/PostProcessingManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PostProcessingManager.cs
// --------------------------------

// PostProcessingManager$$Awake
// il2cpp: void PostProcessingManager__Awake (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x5843360

void PostProcessingManager__Awake(PostProcessingManager_o *__this,MethodInfo *method)

{
  UnityEngine_Rendering_Volume_o **targetAddress;
  PostProcessingManager_StaticFields *pPVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Rendering_Volume_o *pUVar4;
  UnityEngine_Rendering_VolumeProfile_o *pUVar5;
  Events_OnLoadScene_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07544fe0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Volume);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_VolumeProfile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_PostProcessingManager_OnLoadScene);
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
    Il2CppMethodInitialized_07544fe0 = '\x01';
  }
  pPVar1 = TypeInfo_PostProcessingManager->static_fields;
  pPVar1->_instance = __this;
  Il2CppCodeGenWriteBarrier(&pPVar1->_instance);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"DefaultVolume",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Volume);
      targetAddress = &(__this->fields).defaultVolume;
      (__this->fields).defaultVolume = pUVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,"WaterVolume",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar3,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Volume);
          (__this->fields).waterVolume = pUVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields).waterVolume);
          pUVar5 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (*targetAddress == (UnityEngine_Rendering_Volume_o *)0x0) goto label_058436bb;
            pUVar5 = UnityEngine_Rendering_Volume__get_profile(*targetAddress,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            pUVar5 = UnityEngine_Object__Instantiate_object__35a4190
                               ((Il2CppObject *)pUVar5,
                                (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_VolumeProfile)
            ;
            TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile = pUVar5;
            Il2CppCodeGenWriteBarrier(&TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile);
          }
          pUVar4 = *targetAddress;
          if (pUVar4 != (UnityEngine_Rendering_Volume_o *)0x0) {
            (pUVar4->fields).m_InternalProfile =
                 TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
            Il2CppCodeGenWriteBarrier(&(pUVar4->fields).m_InternalProfile);
            pUVar5 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
            if (pUVar5 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
              UnityEngine_Rendering_VolumeProfile__TryGet_object_
                        (pUVar5,(Il2CppObject **)&(__this->fields)._bloom,
                         (MethodInfo_3782FC0 *)MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_Bloom);
              pUVar5 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
              if (pUVar5 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
                UnityEngine_Rendering_VolumeProfile__TryGet_object_
                          (pUVar5,(Il2CppObject **)&(__this->fields)._chromaticAberration,
                           (MethodInfo_3782FC0 *)
                           MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_ChromaticAberration);
                pUVar5 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
                if (pUVar5 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
                  UnityEngine_Rendering_VolumeProfile__TryGet_object_
                            (pUVar5,(Il2CppObject **)&(__this->fields)._depthOfField,
                             (MethodInfo_3782FC0 *)
                             MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_DepthOfField);
                  pUVar5 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
                  if (pUVar5 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
                    UnityEngine_Rendering_VolumeProfile__TryGet_object_
                              (pUVar5,(Il2CppObject **)&(__this->fields)._motionBlur,
                               (MethodInfo_3782FC0 *)
                               MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_MotionBlur);
                    pUVar5 = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
                    if (pUVar5 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) {
                      UnityEngine_Rendering_VolumeProfile__TryGet_object_
                                (pUVar5,(Il2CppObject **)&(__this->fields)._colorAdjustments,
                                 (MethodInfo_3782FC0 *)
                                 MethodInfo_UnityEngine_Rendering_VolumeProfile_TryGet_ColorAdjustments);
                      pUVar4 = (__this->fields).waterVolume;
                      if (pUVar4 != (UnityEngine_Rendering_Volume_o *)0x0) {
                        method_00 = (MethodInfo *)0x0;
                        UnityEngine_Behaviour__set_enabled
                                  ((UnityEngine_Behaviour_o *)pUVar4,false,(MethodInfo *)0x0);
                        PostProcessingManager__Apply(__this,method_00);
                        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
                        Events_OnLoadScene___ctor
                                  (__this_00,(Il2CppObject *)__this,
                                   (intptr_t)MethodInfo_PostProcessingManager_OnLoadScene,(MethodInfo *)0x0);
                        Events_EventManager__add_OnLoadScene(__this_00,(MethodInfo *)0x0);
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
label_058436bb:
  ThrowNullReferenceException();
}


// PostProcessingManager$$OnDestroy
// il2cpp: void PostProcessingManager__OnDestroy (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x5843810

void PostProcessingManager__OnDestroy(PostProcessingManager_o *__this,MethodInfo *method)

{
  Events_OnLoadScene_o *__this_00;
  
  if (Il2CppMethodInitialized_07544fe1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_PostProcessingManager_OnLoadScene);
    Il2CppMethodInitialized_07544fe1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_PostProcessingManager_OnLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__remove_OnLoadScene(__this_00,(MethodInfo *)0x0);
  return;
}


// PostProcessingManager$$OnLoadScene
// il2cpp: void PostProcessingManager__OnLoadScene (PostProcessingManager_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x5843880

void PostProcessingManager__OnLoadScene(PostProcessingManager_o *__this,int32_t sceneName,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  (__this->fields)._customVolumes = false;
  PostProcessingManager__ApplyCamera(__this,(MethodInfo *)CONCAT44(in_register_00000034,sceneName));
  return;
}


// PostProcessingManager$$EnableCustomVolumes
// il2cpp: void PostProcessingManager__EnableCustomVolumes (const MethodInfo* method);
// 0x58439a0

void PostProcessingManager__EnableCustomVolumes(MethodInfo *method)

{
  PostProcessingManager_o *pPVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07544fe2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PostProcessingManager);
    Il2CppMethodInitialized_07544fe2 = '\x01';
  }
  pPVar1 = TypeInfo_PostProcessingManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pPVar1 = TypeInfo_PostProcessingManager->static_fields->_instance;
    if (pPVar1 == (PostProcessingManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pPVar1->fields)._customVolumes == false) {
      (pPVar1->fields)._customVolumes = true;
      PostProcessingManager__ApplyCamera(pPVar1,method_00);
      return;
    }
  }
  return;
}


// PostProcessingManager$$FixedUpdate
// il2cpp: void PostProcessingManager__FixedUpdate (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x5843a40

void PostProcessingManager__FixedUpdate(PostProcessingManager_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  bool bVar3;
  MethodInfo *method_00;
  UnityEngine_Rendering_Volume_o *pUVar4;
  
  if (Il2CppMethodInitialized_07544fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07544fe3 = '\x01';
  }
  if ((__this->fields).InsideWater == false) {
label_05843ac2:
    pUVar4 = (__this->fields).waterVolume;
    if (pUVar4 == (UnityEngine_Rendering_Volume_o *)0x0) {
label_05843af6:
      ThrowNullReferenceException();
    }
    bVar3 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar4,(MethodInfo *)0x0);
    if (!bVar3) goto label_05843af0;
    pUVar4 = (__this->fields).waterVolume;
    if (pUVar4 == (UnityEngine_Rendering_Volume_o *)0x0) goto label_05843af6;
    method_00 = (MethodInfo *)0x0;
  }
  else {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar1 == (Settings_GraphicsSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).WaterFX, pSVar2 == (Settings_IntSetting_o *)0x0)) goto label_05843af6;
    if ((pSVar2->fields)._value == 0) goto label_05843ac2;
    pUVar4 = (__this->fields).waterVolume;
    if (pUVar4 == (UnityEngine_Rendering_Volume_o *)0x0) goto label_05843af6;
    bVar3 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar4,(MethodInfo *)0x0);
    if (bVar3) goto label_05843af0;
    pUVar4 = (__this->fields).waterVolume;
    if (pUVar4 == (UnityEngine_Rendering_Volume_o *)0x0) goto label_05843af6;
    method_00 = (MethodInfo *)0x1;
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,SUB81(method_00,0),(MethodInfo *)0x0);
  PostProcessingManager__ApplyCamera(__this,method_00);
label_05843af0:
  (__this->fields).InsideWater = false;
  return;
}


// PostProcessingManager$$ToggleWaterFX
// il2cpp: void PostProcessingManager__ToggleWaterFX (PostProcessingManager_o* __this, bool active, const MethodInfo* method);
// 0x5843b00

void PostProcessingManager__ToggleWaterFX(PostProcessingManager_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_Rendering_Volume_o *pUVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  pUVar1 = (__this->fields).waterVolume;
  if (pUVar1 != (UnityEngine_Rendering_Volume_o *)0x0) {
    bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
    if (bVar2 == active) {
      return;
    }
    pUVar1 = (__this->fields).waterVolume;
    if (pUVar1 != (UnityEngine_Rendering_Volume_o *)0x0) {
      method_00 = (MethodInfo *)(ulong)active;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,active,(MethodInfo *)0x0);
      PostProcessingManager__ApplyCamera(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// PostProcessingManager$$ApplyCamera
// il2cpp: void PostProcessingManager__ApplyCamera (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x5843890

void PostProcessingManager__ApplyCamera(PostProcessingManager_o *__this,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_Rendering_Volume_o *__this_00;
  UnityEngine_Rendering_Universal_Bloom_o *pUVar2;
  UnityEngine_Rendering_Universal_ChromaticAberration_o *pUVar3;
  UnityEngine_Rendering_Universal_DepthOfField_o *pUVar4;
  UnityEngine_Rendering_Universal_MotionBlur_o *pUVar5;
  UnityEngine_Rendering_Universal_ColorAdjustments_o *pUVar6;
  bool bVar7;
  bool bVar8;
  UnityEngine_Rendering_Universal_UniversalAdditionalCameraData_o *pUVar9;
  
  if (Il2CppMethodInitialized_07544fe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07544fe4 = '\x01';
  }
  pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  bVar7 = true;
  if ((__this->fields)._customVolumes == false) {
    __this_00 = (__this->fields).waterVolume;
    if (__this_00 == (UnityEngine_Rendering_Volume_o *)0x0) goto label_05843997;
    bVar8 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
    if (!bVar8) {
      pUVar2 = (__this->fields)._bloom;
      if (pUVar2 == (UnityEngine_Rendering_Universal_Bloom_o *)0x0) goto label_05843997;
      if ((pUVar2->fields).active == false) {
        pUVar3 = (__this->fields)._chromaticAberration;
        if (pUVar3 == (UnityEngine_Rendering_Universal_ChromaticAberration_o *)0x0) goto label_05843997;
        if ((pUVar3->fields).active == false) {
          pUVar4 = (__this->fields)._depthOfField;
          if (pUVar4 == (UnityEngine_Rendering_Universal_DepthOfField_o *)0x0) goto label_05843997;
          if ((pUVar4->fields).active == false) {
            pUVar5 = (__this->fields)._motionBlur;
            if (pUVar5 == (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) goto label_05843997;
            if ((pUVar5->fields).active == false) {
              pUVar6 = (__this->fields)._colorAdjustments;
              if (pUVar6 == (UnityEngine_Rendering_Universal_ColorAdjustments_o *)0x0) goto label_05843997;
              bVar7 = (pUVar6->fields).active;
            }
          }
        }
      }
    }
  }
  pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((pCVar1 != (Cameras_BaseCamera_o *)0x0) &&
     (pUVar9 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData
                         ((pCVar1->fields).Camera,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_Rendering_Universal_UniversalAdditionalCameraData_o *)0x0)) {
    (pUVar9->fields).m_RenderPostProcessing = bVar7;
    return;
  }
label_05843997:
  ThrowNullReferenceException();
}


// PostProcessingManager$$Apply
// il2cpp: void PostProcessingManager__Apply (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x58436c0

void PostProcessingManager__Apply(PostProcessingManager_o *__this,MethodInfo *method)

{
  uint quality;
  UnityEngine_Rendering_VolumeProfile_o *x;
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Rendering_Universal_ChromaticAberration_o *pUVar3;
  UnityEngine_Rendering_Universal_DepthOfField_o *pUVar4;
  UnityEngine_Rendering_Universal_ColorAdjustments_o *pUVar5;
  bool bVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (Il2CppMethodInitialized_07544fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PostProcessingManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07544fe5 = '\x01';
  }
  x = TypeInfo_PostProcessingManager->static_fields->DefaultVolumeProfile;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar6) ||
     (pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings,
     pSVar1 == (Settings_GraphicsSettings_o *)0x0)) {
    return;
  }
  pSVar2 = (pSVar1->fields).Bloom;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    PostProcessingManager__SetBloomQuality(__this,(pSVar2->fields)._value,method_00);
    pSVar2 = (pSVar1->fields).ChromaticAberrationFX;
    if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
       (pUVar3 = (__this->fields)._chromaticAberration,
       pUVar3 != (UnityEngine_Rendering_Universal_ChromaticAberration_o *)0x0)) {
      (pUVar3->fields).active = (pSVar2->fields)._value != 0;
      pSVar2 = (pSVar1->fields).DepthOfField;
      if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
         (pUVar4 = (__this->fields)._depthOfField,
         pUVar4 != (UnityEngine_Rendering_Universal_DepthOfField_o *)0x0)) {
        (pUVar4->fields).active = (pSVar2->fields)._value != 0;
        pSVar2 = (pSVar1->fields).MotionBlur;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          quality = (pSVar2->fields)._value;
          method_02 = (MethodInfo *)(ulong)quality;
          PostProcessingManager__SetMotionBlurQuality(__this,quality,method_01);
          pSVar2 = (pSVar1->fields).ColorGrading;
          if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
             (pUVar5 = (__this->fields)._colorAdjustments,
             pUVar5 != (UnityEngine_Rendering_Universal_ColorAdjustments_o *)0x0)) {
            (pUVar5->fields).active = (pSVar2->fields)._value != 0;
            PostProcessingManager__ApplyCamera(__this,method_02);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// PostProcessingManager$$SetColorGradingQuality
// il2cpp: void PostProcessingManager__SetColorGradingQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x5843cd0

void PostProcessingManager__SetColorGradingQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_ColorAdjustments_o *pUVar1;
  
  pUVar1 = (__this->fields)._colorAdjustments;
  if (pUVar1 == (UnityEngine_Rendering_Universal_ColorAdjustments_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).active = quality != 0;
  return;
}


// PostProcessingManager$$SetBloomQuality
// il2cpp: void PostProcessingManager__SetBloomQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x5843b50

void PostProcessingManager__SetBloomQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_Bloom_o *pUVar1;
  UnityEngine_Rendering_BoolParameter_o *pUVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  
  if (quality == 2) {
    pUVar1 = (__this->fields)._bloom;
    if (pUVar1 != (UnityEngine_Rendering_Universal_Bloom_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar2 = (pUVar1->fields).highQualityFiltering;
      if (pUVar2 != (UnityEngine_Rendering_BoolParameter_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pUVar2->klass->vtable)._15_set_value.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pUVar2,1,(pUVar2->klass->vtable)._15_set_value.method,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  else {
    if (quality != 1) {
      if (quality == 0) {
        pUVar1 = (__this->fields)._bloom;
        if (pUVar1 == (UnityEngine_Rendering_Universal_Bloom_o *)0x0) goto label_05843bc9;
        (pUVar1->fields).active = false;
      }
      return;
    }
    pUVar1 = (__this->fields)._bloom;
    if (pUVar1 != (UnityEngine_Rendering_Universal_Bloom_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar2 = (pUVar1->fields).highQualityFiltering;
      if (pUVar2 != (UnityEngine_Rendering_BoolParameter_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pUVar2->klass->vtable)._15_set_value.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pUVar2,0,(pUVar2->klass->vtable)._15_set_value.method,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
label_05843bc9:
  ThrowNullReferenceException();
}


// PostProcessingManager$$SetChromaticAberrationQuality
// il2cpp: void PostProcessingManager__SetChromaticAberrationQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x5843bd0

void PostProcessingManager__SetChromaticAberrationQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_ChromaticAberration_o *pUVar1;
  
  pUVar1 = (__this->fields)._chromaticAberration;
  if (pUVar1 == (UnityEngine_Rendering_Universal_ChromaticAberration_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).active = quality != 0;
  return;
}


// PostProcessingManager$$SetDepthOfFieldQuality
// il2cpp: void PostProcessingManager__SetDepthOfFieldQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x5843bf0

void PostProcessingManager__SetDepthOfFieldQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_DepthOfField_o *pUVar1;
  
  pUVar1 = (__this->fields)._depthOfField;
  if (pUVar1 == (UnityEngine_Rendering_Universal_DepthOfField_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pUVar1->fields).active = quality != 0;
  return;
}


// PostProcessingManager$$SetMotionBlurQuality
// il2cpp: void PostProcessingManager__SetMotionBlurQuality (PostProcessingManager_o* __this, int32_t quality, const MethodInfo* method);
// 0x5843c10

void PostProcessingManager__SetMotionBlurQuality
               (PostProcessingManager_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Rendering_Universal_MotionBlur_o *pUVar1;
  UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  
  switch(quality) {
  case 0:
    pUVar1 = (__this->fields)._motionBlur;
    if (pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) {
      (pUVar1->fields).active = false;
      return;
    }
    break;
  case 1:
    pUVar1 = (__this->fields)._motionBlur;
    if (pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar2 = (pUVar1->fields).quality;
      if (pUVar2 != (UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *)0x0) {
        vtableDispatch = (pUVar2->klass->vtable)._15_set_value.methodPtr;
        (*vtableDispatch)(pUVar2,0,(pUVar2->klass->vtable)._15_set_value.method,vtableDispatch);
        return;
      }
    }
    break;
  case 2:
    pUVar1 = (__this->fields)._motionBlur;
    if (pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar2 = (pUVar1->fields).quality;
      if (pUVar2 != (UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *)0x0) {
        vtableDispatch = (pUVar2->klass->vtable)._15_set_value.methodPtr;
        (*vtableDispatch)(pUVar2,1,(pUVar2->klass->vtable)._15_set_value.method,vtableDispatch);
        return;
      }
    }
    break;
  case 3:
    pUVar1 = (__this->fields)._motionBlur;
    if (pUVar1 != (UnityEngine_Rendering_Universal_MotionBlur_o *)0x0) {
      (pUVar1->fields).active = true;
      pUVar2 = (pUVar1->fields).quality;
      if (pUVar2 != (UnityEngine_Rendering_Universal_MotionBlurQualityParameter_o *)0x0) {
        vtableDispatch = (pUVar2->klass->vtable)._15_set_value.methodPtr;
        (*vtableDispatch)(pUVar2,2,(pUVar2->klass->vtable)._15_set_value.method,vtableDispatch);
        return;
      }
    }
    break;
  default:
    return;
  }
  ThrowNullReferenceException();
}


// PostProcessingManager$$.ctor
// il2cpp: void PostProcessingManager___ctor (PostProcessingManager_o* __this, const MethodInfo* method);
// 0x5843cf0

void PostProcessingManager___ctor(PostProcessingManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


