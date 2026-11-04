// Type: Settings.GraphicsSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/GraphicsSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/GraphicsSettings.cs
// --------------------------------

// Settings.GraphicsSettings.<>c__DisplayClass40_0$$.ctor
// il2cpp: void Settings_GraphicsSettings___c__DisplayClass40_0___ctor (Settings_GraphicsSettings___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_GraphicsSettings___c__DisplayClass40_0___ctor(Settings_GraphicsSettings___c__DisplayClass40_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.GraphicsSettings.<>c__DisplayClass40_0$$<SetupURPAsset>b__0
// il2cpp: void Settings_GraphicsSettings___c__DisplayClass40_0___SetupURPAsset_b__0 (Settings_GraphicsSettings___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x181f2a430

void Settings_GraphicsSettings___c__DisplayClass40_0___SetupURPAsset_b__0
               (Settings_GraphicsSettings___c__DisplayClass40_0_o *__this,MethodInfo *method)

{
  UnityEngine_QualitySettings__set_renderPipeline((__this->fields).originalRenderPipeline,(MethodInfo *)0x0);
  return;
}


// Settings.GraphicsSettings$$get_FileName
// il2cpp: System_String_o* Settings_GraphicsSettings__get_FileName (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x181f16650

System_String_o *
Settings_GraphicsSettings__get_FileName(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345434 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Graphics.json");
    Il2CppMethodInitialized_184345434 = '\x01';
  }
  return "Graphics.json";
}


// Settings.GraphicsSettings$$get_CurrentVersion
// il2cpp: int32_t Settings_GraphicsSettings__get_CurrentVersion (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Settings_GraphicsSettings__get_CurrentVersion(Settings_GraphicsSettings_o* __this, MethodInfo* method)

{
  return 1;
}


// Settings.GraphicsSettings$$Migrate
// il2cpp: bool Settings_GraphicsSettings__Migrate (Settings_GraphicsSettings_o* __this, int32_t fromVersion, const MethodInfo* method);
// 0x181f14b50

bool Settings_GraphicsSettings__Migrate
               (Settings_GraphicsSettings_o *__this,int32_t fromVersion,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Settings_IntSetting_o *pSVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *value;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345435 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_PresetQualityLevel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"PresetQuality");
    Il2CppMethodInitialized_184345435 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FoundSettings;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)"PresetQuality",
                     (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  handle = TypeRef_Settings_PresetQualityLevel;
  if (bVar2) {
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).PresetQuality;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res8[0] = (pSVar1->fields)._value;
    value = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar2 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
    if (bVar2) {
      Settings_GraphicsSettings__ApplyRenderingPreset(__this,(MethodInfo *)0x0);
      return true;
    }
  }
  return false;
}


// Settings.GraphicsSettings$$ApplyRenderingPreset
// il2cpp: void Settings_GraphicsSettings__ApplyRenderingPreset (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x181f14240

void Settings_GraphicsSettings__ApplyRenderingPreset(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *__this_00;
  int32_t iVar3;
  int32_t value;
  
  if (Il2CppMethodInitialized_184345436 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184345436 = '\x01';
  }
  pSVar2 = (__this->fields).PresetQuality;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    iVar1 = (pSVar2->fields)._value;
    value = 1;
    __this_00 = (__this->fields).HDR;
    if (__this_00 != (Settings_BoolSetting_o *)0x0) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,iVar1 == 3 || iVar1 == 4,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar2 = (__this->fields).AutoExposure;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,0,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar2 = (__this->fields).Bloom;
        if (iVar1 == 3) {
          iVar3 = 1;
        }
        else {
          iVar3 = 0;
          if (iVar1 == 4) {
            iVar3 = 2;
          }
        }
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar2,iVar3,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar2 = (__this->fields).LightDistance;
          if (iVar1 == 2) {
            iVar3 = 500;
          }
          else if (iVar1 == 3) {
            iVar3 = 1000;
          }
          else if (iVar1 == 4) {
            iVar3 = 0x5dc;
          }
          else {
            iVar3 = 0;
          }
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar2,iVar3,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar2 = (__this->fields).AntiAliasingQuality;
            if (iVar1 == 2) {
              iVar3 = 1;
            }
            else {
              iVar3 = 0;
              if (iVar1 - 3U < 2) {
                iVar3 = 2;
              }
            }
            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar2,iVar3,
                         (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              pSVar2 = (__this->fields).AnisotropicFiltering;
              if (iVar1 == 2) {
                iVar3 = 1;
              }
              else {
                iVar3 = 0;
                if (iVar1 - 3U < 2) {
                  iVar3 = 2;
                }
              }
              if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar2,iVar3,
                           (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pSVar2 = (__this->fields).AdditionalLights;
                if ((iVar1 != 2) && (value = 0, iVar1 - 3U < 2)) {
                  value = 2;
                }
                if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar2,value,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$SetupURPAsset
// il2cpp: void Settings_GraphicsSettings__SetupURPAsset (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x181f151a0

void Settings_GraphicsSettings__SetupURPAsset(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  Settings_GraphicsSettings___c__DisplayClass40_0_o *object;
  UnityEngine_Rendering_RenderPipelineAsset_o *pUVar4;
  UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *pUVar5;
  System_Action_o *__this_00;
  UnityEngine_Rendering_RenderPipelineAsset_o *x;
  
  if (Il2CppMethodInitialized_184345437 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rendering_GraphicsSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GraphicsSettings);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_Instantiate_UniversalRenderPipelineAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_GraphicsSettings_c__DisplayClass40_0_SetupURPAsset_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GraphicsSettings_c__DisplayClass40_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset);
    Il2CppMethodInitialized_184345437 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_GraphicsSettings_c__DisplayClass40_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  pUVar5 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar2) {
      pUVar4 = UnityEngine_QualitySettings__get_renderPipeline((MethodInfo *)0x0);
      bVar2 = true;
      if (pUVar4 == (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0) {
        x = (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset->_2).typeHierarchyDepth
        ;
        if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        x = (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0;
        if (bVar3) {
          x = pUVar4;
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UnityEngine_Rendering_GraphicsSettings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rendering_GraphicsSettings);
        }
        pUVar4 = UnityEngine_Rendering_GraphicsSettings__get_defaultRenderPipeline((MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0) {
          x = (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset->_2).
                  typeHierarchyDepth;
          if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset)) {
            bVar2 = false;
          }
          x = (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0;
          if (bVar2) {
            x = pUVar4;
          }
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pUVar4 = UnityEngine_QualitySettings__get_renderPipeline((MethodInfo *)0x0);
        if (object == (Settings_GraphicsSettings___c__DisplayClass40_0_o *)0x0) {
          ThrowNullReferenceException();
        }
        (object->fields).originalRenderPipeline = pUVar4;
        Il2CppCodeGenWriteBarrier(&(object->fields).originalRenderPipeline,pUVar4);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        pUVar5 = UnityEngine_Object__Instantiate_object__746ba0
                           ((Il2CppObject *)x,
                            (MethodInfo_746BA0 *)
                            MethodInfo_UnityEngine_Object_Instantiate_UniversalRenderPipelineAsset);
        TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset = pUVar5;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset,pUVar5);
        UnityEngine_QualitySettings__set_renderPipeline
                  ((UnityEngine_Rendering_RenderPipelineAsset_o *)
                   TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        System_Action___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_Settings_GraphicsSettings_c__DisplayClass40_0_SetupURPAsset_b__0,
                   (MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        UnityEngine_Application__add_quitting(__this_00,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Settings.GraphicsSettings$$SetURPField
// il2cpp: void Settings_GraphicsSettings__SetURPField (System_String_o* fieldName, Il2CppObject* value, const MethodInfo* method);
// 0x181f150e0

void Settings_GraphicsSettings__SetURPField(System_String_o *fieldName,Il2CppObject *value,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  System_Reflection_FieldInfo_o *__this;
  
  if (Il2CppMethodInitialized_184345438 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GraphicsSettings);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeRef_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset);
    Il2CppMethodInitialized_184345438 = '\x01';
  }
  handle = TypeRef_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Type_o *)0x0) {
    __this = (System_Reflection_FieldInfo_o *)
             (*(pSVar1->klass->vtable)._90_unknown.methodPtr)(pSVar1,fieldName,0x24);
    if (__this != (System_Reflection_FieldInfo_o *)0x0) {
      System_Reflection_FieldInfo__SetValue
                (__this,(Il2CppObject *)TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset,value,
                 (MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$Apply
// il2cpp: void Settings_GraphicsSettings__Apply (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x181f14400

void Settings_GraphicsSettings__Apply(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *pUVar3;
  Settings_BoolSetting_o *pSVar4;
  Cameras_BaseCamera_o *pCVar5;
  Cameras_BaseCamera_c *pCVar6;
  Cameras_InGameCamera_o *__this_00;
  Settings_IntSetting_o *pSVar7;
  UI_BaseMenu_o *pUVar8;
  UI_BaseMenu_c *pUVar9;
  UI_InGameMenu_o *__this_01;
  bool bVar10;
  int32_t iVar11;
  Il2CppObject *pIVar12;
  Settings_IntSetting_o *pSVar13;
  PostProcessingManager_o *__this_02;
  uint uVar14;
  uint local_res18 [2];
  
  if (Il2CppMethodInitialized_184345439 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GraphicsSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rendering_Universal_LightRenderingMode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_FindFirstObjectByType_PostProcessingManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rendering_Universal_ShadowResolution);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"m_MainLightShadowmapResolution");
    il2cpp_codegen_initialize_runtime_metadata(&"m_AdditionalLightsRenderingMode");
    il2cpp_codegen_initialize_runtime_metadata(&"m_AdditionalLightsShadowmapResolution");
    il2cpp_codegen_initialize_runtime_metadata(&"m_AdditionalLightShadowsSupported");
    Il2CppMethodInitialized_184345439 = '\x01';
  }
  Settings_GraphicsSettings__SetupURPAsset(__this,(MethodInfo *)0x0);
  pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    pSVar4 = (__this->fields).HDR;
    if ((pSVar4 == (Settings_BoolSetting_o *)0x0) ||
       (pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset,
       pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)) goto label_181f14b26;
    (pUVar3->fields).m_SupportsHDR = (pSVar4->fields)._value;
    pSVar13 = (__this->fields).AdditionalLights;
    if (pSVar13 == (Settings_IntSetting_o *)0x0) goto label_181f14b26;
    local_res18[0] = (uint)((pSVar13->fields)._value != 0);
    pIVar12 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_LightRenderingMode,
                          local_res18);
    Settings_GraphicsSettings__SetURPField("m_AdditionalLightsRenderingMode",pIVar12,(MethodInfo *)0x0);
    pSVar13 = (__this->fields).ShadowQuality;
    if (pSVar13 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar11 = 2;
    if ((pSVar13->fields)._value == 0) {
      pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
      if (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0) goto label_181f14b26;
      UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowDistance
                (pUVar3,0.0,(MethodInfo *)0x0);
    }
    else {
      pSVar13 = (__this->fields).ShadowDistance;
      if ((pSVar13 == (Settings_IntSetting_o *)0x0) ||
         (pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset,
         pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)) goto label_181f14b26;
      UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowDistance
                (pUVar3,(float)(pSVar13->fields)._value,(MethodInfo *)0x0);
      pSVar13 = (__this->fields).ShadowQuality;
      if (pSVar13 == (Settings_IntSetting_o *)0x0) goto label_181f14b26;
      iVar2 = (pSVar13->fields)._value;
      uVar14 = 0x200;
      if (iVar2 == 1) {
        pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
        if (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)
        goto label_181f14b26;
        UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowCascadeCount
                  (pUVar3,1,(MethodInfo *)0x0);
      }
      else if (iVar2 == 2) {
        pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
        if (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)
        goto label_181f14b26;
        UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowCascadeCount
                  (pUVar3,2,(MethodInfo *)0x0);
        uVar14 = 0x400;
      }
      else if (iVar2 == 3) {
        pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
        if (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)
        goto label_181f14b26;
        UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowCascadeCount
                  (pUVar3,4,(MethodInfo *)0x0);
        uVar14 = 0x800;
      }
      local_res18[0] = uVar14;
      pIVar12 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_ShadowResolution,
                            local_res18);
      Settings_GraphicsSettings__SetURPField("m_MainLightShadowmapResolution",pIVar12,(MethodInfo *)0x0);
    }
    pSVar13 = (__this->fields).ShadowQuality;
    if (pSVar13 == (Settings_IntSetting_o *)0x0) goto label_181f14b26;
    if ((pSVar13->fields)._value == 0) {
      bVar10 = false;
    }
    else {
      pSVar13 = (__this->fields).AdditionalLights;
      if (pSVar13 == (Settings_IntSetting_o *)0x0) goto label_181f14b26;
      bVar10 = (pSVar13->fields)._value == 2;
    }
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,bVar10);
    pIVar12 = il2cpp_value_box(g_data_184354de8,local_res18);
    Settings_GraphicsSettings__SetURPField("m_AdditionalLightShadowsSupported",pIVar12,(MethodInfo *)0x0);
    if (bVar10 != false) {
      pSVar13 = (__this->fields).ShadowQuality;
      if (pSVar13 == (Settings_IntSetting_o *)0x0) goto label_181f14b26;
      local_res18[0] = 0x800;
      if ((pSVar13->fields)._value != 3) {
        local_res18[0] = 0x400;
      }
      pIVar12 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_ShadowResolution,
                            local_res18);
      Settings_GraphicsSettings__SetURPField("m_AdditionalLightsShadowmapResolution",pIVar12,(MethodInfo *)0x0);
    }
    pSVar13 = (__this->fields).AntiAliasingQuality;
    if (pSVar13 == (Settings_IntSetting_o *)0x0) goto label_181f14b26;
    iVar2 = (pSVar13->fields)._value;
    if ((iVar2 != 1) && (iVar11 = 4, iVar2 != 2)) {
      iVar11 = 1;
    }
    pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
    if (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0) goto label_181f14b26;
    (pUVar3->fields).m_MSAA = iVar11;
  }
  pSVar4 = (__this->fields).VSync;
  if (pSVar4 != (Settings_BoolSetting_o *)0x0) {
    bVar10 = (pSVar4->fields)._value;
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    iVar11 = Unity_Collections_Bitwise__FromBool(bVar10,(MethodInfo *)0x0);
    UnityEngine_QualitySettings__set_vSyncCount(iVar11,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2) ||
       (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 3)) {
      pSVar13 = (__this->fields).FPSCap;
    }
    else {
      pSVar13 = (__this->fields).MenuFPSCap;
    }
    if (pSVar13 != (Settings_IntSetting_o *)0x0) {
      if ((pSVar13->fields)._value < 1) {
        iVar11 = -1;
      }
      else {
        iVar11 = (pSVar13->fields)._value;
      }
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      UnityEngine_Application__set_targetFrameRate(iVar11,(MethodInfo *)0x0);
      pSVar13 = (__this->fields).TextureQuality;
      if (pSVar13 != (Settings_IntSetting_o *)0x0) {
        UnityEngine_QualitySettings__set_globalTextureMipmapLimit
                  (3 - (pSVar13->fields)._value,(MethodInfo *)0x0);
        pSVar13 = (__this->fields).AnisotropicFiltering;
        if (pSVar13 != (Settings_IntSetting_o *)0x0) {
          UnityEngine_QualitySettings__set_anisotropicFiltering((pSVar13->fields)._value,(MethodInfo *)0x0);
          pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          if (pCVar5 != (Cameras_BaseCamera_o *)0x0) {
            pCVar6 = pCVar5->klass;
            bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
            if ((bVar1 <= (pCVar6->_2).typeHierarchyDepth) &&
               ((pCVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
              __this_00 = (Cameras_InGameCamera_o *)
                          TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
              bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
              if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Cameras_InGameCamera);
              }
              Cameras_InGameCamera__ApplyGraphicsSettings(__this_00,(MethodInfo *)0x0);
            }
          }
          pSVar13 = (__this->fields).ScreenResolution;
          if (pSVar13 != (Settings_IntSetting_o *)0x0) {
            iVar11 = (pSVar13->fields)._value;
            if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler)
              ;
            }
            iVar11 = ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting
                               (iVar11,(MethodInfo *)0x0);
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar13,iVar11,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar13 = (__this->fields).ScreenResolution;
            if ((pSVar13 != (Settings_IntSetting_o *)0x0) &&
               (pSVar7 = (__this->fields).FullScreenMode, pSVar7 != (Settings_IntSetting_o *)0x0)) {
              ApplicationManagers_FullscreenHandler__Apply
                        ((pSVar13->fields)._value,(pSVar7->fields)._value,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              __this_02 = UnityEngine_Object__FindFirstObjectByType_object_
                                    ((MethodInfo_744E60 *)
                                     MethodInfo_UnityEngine_Object_FindFirstObjectByType_PostProcessingManager
                                    );
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if (bVar10) {
                if (__this_02 == (PostProcessingManager_o *)0x0) goto label_181f14b26;
                PostProcessingManager__Apply(__this_02,(MethodInfo *)0x0);
              }
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if (bVar10) {
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                  pUVar9 = pUVar8->klass;
                  bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                  if ((bVar1 <= (pUVar9->_2).typeHierarchyDepth) &&
                     ((pUVar9->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                      (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                    if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_181f14b26;
                    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                       ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                        (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                      il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_InGameMenu);
                    }
                    UI_InGameMenu__ApplyUISettings(__this_01,(MethodInfo *)0x0);
                  }
                }
              }
              return;
            }
          }
        }
      }
    }
  }
label_181f14b26:
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$OnSelectPreset
// il2cpp: void Settings_GraphicsSettings__OnSelectPreset (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x181f14c80

void Settings_GraphicsSettings__OnSelectPreset(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  int32_t value;
  
  if (Il2CppMethodInitialized_18434543a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_18434543a = '\x01';
  }
  Settings_GraphicsSettings__ApplyRenderingPreset(__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).ColorGrading;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar1,0,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar1 = (__this->fields).AmbientOcclusion;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar1,0,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar1 = (__this->fields).MotionBlur;
      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar1,0,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar1 = (__this->fields).ChromaticAberrationFX;
        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar1,0,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar1 = (__this->fields).DepthOfField;
          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar1,0,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar1 = (__this->fields).PresetQuality;
            if (pSVar1 != (Settings_IntSetting_o *)0x0) {
              if ((pSVar1->fields)._value == 0) {
                pSVar1 = (__this->fields).TextureQuality;
                if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar1,0,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  pSVar1 = (__this->fields).ShadowQuality;
                  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar1,0,
                               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                    pSVar1 = (__this->fields).WeatherEffects;
                    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar1,0,
                                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      pSVar1 = (__this->fields).ShadowDistance;
                      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar1,500,
                                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                        pSVar1 = (__this->fields).WaterFX;
                        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                          Settings_TypedSetting_int___set_Value
                                    ((Settings_TypedSetting_int__o *)pSVar1,1,
                                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                          pSVar1 = (__this->fields).RenderDistance;
                          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                            Settings_TypedSetting_int___set_Value
                                      ((Settings_TypedSetting_int__o *)pSVar1,1000,
                                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else if ((pSVar1->fields)._value == 1) {
                pSVar1 = (__this->fields).TextureQuality;
                if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar1,3,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  pSVar1 = (__this->fields).ShadowQuality;
                  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar1,0,
                               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                    pSVar1 = (__this->fields).WeatherEffects;
                    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar1,1,
                                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      pSVar1 = (__this->fields).ShadowDistance;
                      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar1,500,
                                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                        pSVar1 = (__this->fields).WaterFX;
                        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                          Settings_TypedSetting_int___set_Value
                                    ((Settings_TypedSetting_int__o *)pSVar1,1,
                                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                          pSVar1 = (__this->fields).RenderDistance;
                          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                            Settings_TypedSetting_int___set_Value
                                      ((Settings_TypedSetting_int__o *)pSVar1,2000,
                                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else if ((pSVar1->fields)._value == 2) {
                pSVar1 = (__this->fields).TextureQuality;
                if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar1,3,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  pSVar1 = (__this->fields).ShadowQuality;
                  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar1,1,
                               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                    pSVar1 = (__this->fields).WeatherEffects;
                    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar1,2,
                                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      pSVar1 = (__this->fields).ShadowDistance;
                      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar1,500,
                                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                        pSVar1 = (__this->fields).WaterFX;
                        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                          Settings_TypedSetting_int___set_Value
                                    ((Settings_TypedSetting_int__o *)pSVar1,2,
                                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                          pSVar1 = (__this->fields).RenderDistance;
                          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                            Settings_TypedSetting_int___set_Value
                                      ((Settings_TypedSetting_int__o *)pSVar1,5000,
                                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if ((pSVar1->fields)._value == 3) {
                  pSVar1 = (__this->fields).TextureQuality;
                  if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181f150d5;
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar1,3,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  pSVar1 = (__this->fields).ShadowQuality;
                  if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181f150d5;
                  value = 2;
                }
                else {
                  if ((pSVar1->fields)._value != 4) {
                    return;
                  }
                  pSVar1 = (__this->fields).TextureQuality;
                  if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181f150d5;
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar1,3,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  pSVar1 = (__this->fields).ShadowQuality;
                  if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181f150d5;
                  value = 3;
                }
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar1,value,
                           (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pSVar1 = (__this->fields).WeatherEffects;
                if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar1,3,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  pSVar1 = (__this->fields).ShadowDistance;
                  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar1,1000,
                               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                    pSVar1 = (__this->fields).WaterFX;
                    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar1,3,
                                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      pSVar1 = (__this->fields).RenderDistance;
                      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar1,10000,
                                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
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
label_181f150d5:
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$.ctor
// il2cpp: void Settings_GraphicsSettings___ctor (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x181f15480

void Settings_GraphicsSettings___ctor(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  int32_t iVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_18434543b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_AdditionalLightingMode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_AmbientOcclusionLevel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_AntiAliasingLevel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_AutoExposureLevel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_BloomLevel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_ChromaticAberrationLevel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_ColorGradingLevel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_DepthOfFieldLevel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_MotionBlurLevel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_WaterFXLevel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434543b = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,4,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).PresetQuality = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PresetQuality,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,1,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).FullScreenMode = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FullScreenMode,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).ScreenResolution = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScreenResolution,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0x90,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).FPSCap = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FPSCap,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0x3c,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).MenuFPSCap = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MenuFPSCap,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).VSync = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VSync,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).InterpolationEnabled = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InterpolationEnabled,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowFPS = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowFPS,pSVar4);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 10;
  (pSVar3->fields).MaxValue = 1000000;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,10000,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).RenderDistance = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RenderDistance,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,3,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TextureQuality = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TextureQuality,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,3,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShadowQuality = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShadowQuality,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = 3000;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,1000,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShadowDistance = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShadowDistance,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = 3000;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0x5dc,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).LightDistance = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LightDistance,pSVar3);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_AntiAliasingLevel);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,2,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).AntiAliasingQuality = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AntiAliasingQuality,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,2,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).AnisotropicFiltering = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AnisotropicFiltering,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,3,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).WeatherEffects = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeatherEffects,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,2,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).WeaponTrail = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeaponTrail,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).WeaponTrailHold = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeaponTrailHold,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).WeaponFireEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeaponFireEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).WindEffectEnabled = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WindEffectEnabled,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).BloodSplatterEnabled = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BloodSplatterEnabled,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).NapeBloodEnabled = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NapeBloodEnabled,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).MipmapEnabled = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MipmapEnabled,pSVar4);
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_AdditionalLightingMode);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,2,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).AdditionalLights = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AdditionalLights,pSVar3);
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_BloomLevel);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,2,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Bloom = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Bloom,pSVar3);
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_ChromaticAberrationLevel);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChromaticAberrationFX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChromaticAberrationFX,pSVar3);
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_DepthOfFieldLevel);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).DepthOfField = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DepthOfField,pSVar3);
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_MotionBlurLevel);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).MotionBlur = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MotionBlur,pSVar3);
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_WaterFXLevel);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,3,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).WaterFX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WaterFX,pSVar3);
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_AmbientOcclusionLevel);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).AmbientOcclusion = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AmbientOcclusion,pSVar3);
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_ColorGradingLevel);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).ColorGrading = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColorGrading,pSVar3);
  iVar2 = Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_
                    ((MethodInfo_8693C0 *)MethodInfo_Utility_Util_EnumMaxValue_AutoExposureLevel);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = iVar2;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).AutoExposure = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AutoExposure,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).HDR = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HDR,pSVar4);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


