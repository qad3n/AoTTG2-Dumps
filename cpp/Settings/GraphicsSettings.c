// Type: Settings.GraphicsSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Settings/GraphicsSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/GraphicsSettings.cs
// --------------------------------

// Settings.GraphicsSettings.<>c__DisplayClass50_0$$.ctor
// il2cpp: void Settings_GraphicsSettings___c__DisplayClass50_0___ctor (Settings_GraphicsSettings___c__DisplayClass50_0_o* __this, const MethodInfo* method);
// 0x5b42340

void Settings_GraphicsSettings___c__DisplayClass50_0___ctor
               (Settings_GraphicsSettings___c__DisplayClass50_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.GraphicsSettings.<>c__DisplayClass50_0$$<SetupURPAsset>b__0
// il2cpp: void Settings_GraphicsSettings___c__DisplayClass50_0___SetupURPAsset_b__0 (Settings_GraphicsSettings___c__DisplayClass50_0_o* __this, const MethodInfo* method);
// 0x5b43c50

void Settings_GraphicsSettings___c__DisplayClass50_0___SetupURPAsset_b__0
               (Settings_GraphicsSettings___c__DisplayClass50_0_o *__this,MethodInfo *method)

{
  UnityEngine_QualitySettings__set_renderPipeline((__this->fields).originalRenderPipeline,(MethodInfo *)0x0);
  return;
}


// Settings.GraphicsSettings$$get_FileName
// il2cpp: System_String_o* Settings_GraphicsSettings__get_FileName (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b41370

System_String_o *
Settings_GraphicsSettings__get_FileName(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Graphics.json");
    Il2CppMethodInitialized_07547279 = '\x01';
  }
  return "Graphics.json";
}


// Settings.GraphicsSettings$$get_CurrentVersion
// il2cpp: int32_t Settings_GraphicsSettings__get_CurrentVersion (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b413a0

int32_t Settings_GraphicsSettings__get_CurrentVersion(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  return 2;
}


// Settings.GraphicsSettings$$Migrate
// il2cpp: bool Settings_GraphicsSettings__Migrate (Settings_GraphicsSettings_o* __this, int32_t fromVersion, const MethodInfo* method);
// 0x5b413b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b414bc: jmp 0x5b414d5

bool Settings_GraphicsSettings__Migrate
               (Settings_GraphicsSettings_o *__this,int32_t fromVersion,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Settings_IntSetting_o *pSVar1;
  Il2CppType *handle;
  bool bVar2;
  bool bVar3;
  System_Type_o *enumType;
  MethodInfo *method_00;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_0754727a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_PresetQualityLevel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"PresetQuality");
    Il2CppMethodInitialized_0754727a = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FoundSettings;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_05b414e4:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)"PresetQuality",
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  handle = TypeRef_Settings_PresetQualityLevel;
  if (bVar2) {
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).PresetQuality;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_05b414e4;
    iStack_2c = (pSVar1->fields)._value;
    method_00 = (MethodInfo *)il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar2 = false;
    bVar3 = System_Enum__IsDefined(enumType,(Il2CppObject *)method_00,(MethodInfo *)0x0);
    if (bVar3) {
      if (fromVersion < 1) {
        Settings_GraphicsSettings__ApplyRenderingPreset(__this,method_00);
      }
      else if (fromVersion != 1) {
        return true;
      }
      Settings_GraphicsSettings__MigrateToVersion2(__this,method_00);
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// Settings.GraphicsSettings$$MigrateToVersion1
// il2cpp: void Settings_GraphicsSettings__MigrateToVersion1 (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b414f0

void Settings_GraphicsSettings__MigrateToVersion1(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings__ApplyRenderingPreset(__this,method);
  return;
}


// Settings.GraphicsSettings$$MigrateToVersion2
// il2cpp: void Settings_GraphicsSettings__MigrateToVersion2 (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b41500

void Settings_GraphicsSettings__MigrateToVersion2(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754727b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754727b = '\x01';
  }
  pSVar1 = (__this->fields).DepthOfField;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar1,0,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar1 = (__this->fields).PresetQuality;
    if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
       (pSVar2 = (__this->fields).TitanGore, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar2,1 < (pSVar1->fields)._value,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar2 = (__this->fields).BloodSplatterEnabled;
      if ((pSVar2 != (Settings_BoolSetting_o *)0x0) &&
         (pSVar1 = (__this->fields).PresetQuality, pSVar1 != (Settings_IntSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar2,
                   1 < (pSVar1->fields)._value &&
                   ((Settings_TypedSetting_bool__Fields *)&pSVar2->fields)->_value != false,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar2 = (__this->fields).WindEffectEnabled;
        if ((pSVar2 != (Settings_BoolSetting_o *)0x0) &&
           (pSVar1 = (__this->fields).PresetQuality, pSVar1 != (Settings_IntSetting_o *)0x0)) {
          bVar3 = 0 < (pSVar1->fields)._value &&
                  ((Settings_TypedSetting_bool__Fields *)&pSVar2->fields)->_value != false;
          method_00 = (MethodInfo *)(ulong)bVar3;
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar2,bVar3,
                     (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          Settings_GraphicsSettings__ApplyResolutionPreset(__this,method_00);
          bVar3 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          pSVar1 = (__this->fields).FPSCap;
          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar1,0x3c,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$SetDefault
// il2cpp: void Settings_GraphicsSettings__SetDefault (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b41840

void Settings_GraphicsSettings__SetDefault(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  Settings_BaseSettingsContainer__SetDefault((Settings_BaseSettingsContainer_o *)__this,method);
  bVar1 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (bVar1) {
    Settings_GraphicsSettings__ApplyMobileDefaults(__this,method);
    return;
  }
  return;
}


// Settings.GraphicsSettings$$LoadLegacy
// il2cpp: void Settings_GraphicsSettings__LoadLegacy (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b41c20

void Settings_GraphicsSettings__LoadLegacy(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (bVar1) {
    Settings_GraphicsSettings__ApplyMobileDefaults(__this,method);
    return;
  }
  return;
}


// Settings.GraphicsSettings$$ApplyMobileDefaults
// il2cpp: void Settings_GraphicsSettings__ApplyMobileDefaults (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b41ba0

void Settings_GraphicsSettings__ApplyMobileDefaults(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  int32_t iVar2;
  uint value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754727c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754727c = '\x01';
  }
  pSVar1 = (__this->fields).PresetQuality;
  iVar2 = UnityEngine_SystemInfo__get_systemMemorySize((MethodInfo *)0x0);
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    value = (4999 < iVar2) + 1;
    method_00 = (MethodInfo *)(ulong)value;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar1,value,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    Settings_GraphicsSettings__OnSelectPreset(__this,method_00);
    pSVar1 = (__this->fields).FPSCap;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar1,0x3c,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$ApplyRenderingPreset
// il2cpp: void Settings_GraphicsSettings__ApplyRenderingPreset (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b41640

void Settings_GraphicsSettings__ApplyRenderingPreset(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *__this_00;
  int32_t iVar3;
  int32_t value;
  
  if (Il2CppMethodInitialized_0754727d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754727d = '\x01';
  }
  pSVar2 = (__this->fields).PresetQuality;
  if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
     (__this_00 = (__this->fields).HDR, __this_00 != (Settings_BoolSetting_o *)0x0)) {
    iVar1 = (pSVar2->fields)._value;
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,iVar1 - 3U < 2,
               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    pSVar2 = (__this->fields).AutoExposure;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,0,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar2 = (__this->fields).Bloom;
      iVar3 = 1;
      if (iVar1 != 3) {
        iVar3 = (uint)(iVar1 == 4) * 2;
      }
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,iVar3,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar2 = (__this->fields).LightDistance;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          value = 0;
          if (iVar1 - 2U < 3) {
            value = (iVar1 - 2U) * 500 + 500;
          }
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar2,value,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar2 = (__this->fields).AntiAliasingQuality;
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar2,iVar3,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar2 = (__this->fields).AnisotropicFiltering;
            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
              iVar3 = 1;
              if (iVar1 != 2) {
                iVar3 = (uint)(0xfffffffd < iVar1 - 5U) * 2;
              }
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar2,iVar3,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              pSVar2 = (__this->fields).AdditionalLights;
              if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar2,iVar3,
                           (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$ApplyResolutionPreset
// il2cpp: void Settings_GraphicsSettings__ApplyResolutionPreset (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b417b0

void Settings_GraphicsSettings__ApplyResolutionPreset(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *__this_00;
  int32_t value;
  
  if (Il2CppMethodInitialized_0754727e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754727e = '\x01';
  }
  pSVar2 = (__this->fields).PresetQuality;
  if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
     (__this_00 = (__this->fields).TextureQuality, __this_00 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar2->fields)._value;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_00,iVar1 == 0 ^ 3,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar2 = (__this->fields).RenderScale;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      value = 100;
      if (iVar1 == 0) {
        value = 0x32;
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,value,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$SetupURPAsset
// il2cpp: void Settings_GraphicsSettings__SetupURPAsset (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b42030
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b42133: jmp 0x5b42203
// asm:   0x5b4217b: xor ebx, ebx
// asm:   0x5b42302: jmp 0x5b4218a
// asm:   0x5b4232a: jmp 0x5b421ee

void Settings_GraphicsSettings__SetupURPAsset(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  bool bVar3;
  Settings_GraphicsSettings___c__DisplayClass50_0_o *__this_00;
  UnityEngine_Rendering_RenderPipelineAsset_o *pUVar4;
  UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *pUVar5;
  System_Action_o *__this_01;
  UnityEngine_Rendering_RenderPipelineAsset_o *x;
  
  if (Il2CppMethodInitialized_0754727f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rendering_GraphicsSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GraphicsSettings);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_Instantiate_UniversalRenderPipelineAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_GraphicsSettings_c__DisplayClass50_0_SetupURPAsset_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GraphicsSettings_c__DisplayClass50_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset);
    Il2CppMethodInitialized_0754727f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_GraphicsSettings_c__DisplayClass50_0)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  pUVar5 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if (!bVar3) {
    return;
  }
  pUVar4 = UnityEngine_QualitySettings__get_renderPipeline((MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0) {
label_05b4217d:
    x = (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset->_2).typeHierarchyDepth;
    if ((pUVar4->klass->_2).typeHierarchyDepth < bVar1) goto label_05b4217d;
    x = (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0;
    if ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset) {
      x = pUVar4;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UnityEngine_Rendering_GraphicsSettings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rendering_GraphicsSettings);
    }
    x = (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0;
    pUVar4 = UnityEngine_Rendering_GraphicsSettings__get_defaultRenderPipeline((MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0) {
      bVar1 = (TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset->_2).typeHierarchyDepth;
      if (bVar1 <= (pUVar4->klass->_2).typeHierarchyDepth) {
        x = (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0;
        if ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset) {
          x = pUVar4;
        }
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
        goto joined_r0x05b421ec;
      }
      x = (UnityEngine_Rendering_RenderPipelineAsset_o *)0x0;
    }
  }
  uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
joined_r0x05b421ec:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pUVar4 = UnityEngine_QualitySettings__get_renderPipeline((MethodInfo *)0x0);
  if (__this_00 == (Settings_GraphicsSettings___c__DisplayClass50_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).originalRenderPipeline = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).originalRenderPipeline);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar5 = UnityEngine_Object__Instantiate_object__35a4190
                     ((Il2CppObject *)x,
                      (MethodInfo_35A4190 *)
                      MethodInfo_UnityEngine_Object_Instantiate_UniversalRenderPipelineAsset);
  TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset = pUVar5;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset);
  UnityEngine_QualitySettings__set_renderPipeline
            ((UnityEngine_Rendering_RenderPipelineAsset_o *)
             TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_Settings_GraphicsSettings_c__DisplayClass50_0_SetupURPAsset_b__0,
             (MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  UnityEngine_Application__add_quitting(__this_01,(MethodInfo *)0x0);
  return;
}


// Settings.GraphicsSettings$$SetURPField
// il2cpp: void Settings_GraphicsSettings__SetURPField (System_String_o* fieldName, Il2CppObject* value, const MethodInfo* method);
// 0x5b42350

void Settings_GraphicsSettings__SetURPField(System_String_o *fieldName,Il2CppObject *value,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  System_Reflection_FieldInfo_o *__this;
  
  if (Il2CppMethodInitialized_07547280 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GraphicsSettings);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeRef_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset);
    Il2CppMethodInitialized_07547280 = '\x01';
  }
  handle = TypeRef_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = (System_Reflection_FieldInfo_o *)
           (*(pSVar1->klass->vtable)._90_unknown.methodPtr)
                     (pSVar1,fieldName,0x24,(pSVar1->klass->vtable)._90_unknown.method);
  if (__this == (System_Reflection_FieldInfo_o *)0x0) {
    return;
  }
  System_Reflection_FieldInfo__SetValue
            (__this,(Il2CppObject *)TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset,value,
             (MethodInfo *)0x0);
  return;
}


// Settings.GraphicsSettings$$Apply
// il2cpp: void Settings_GraphicsSettings__Apply (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b42410
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b42a55: jmp 0x5b42aef
// asm:   0x5b42ac5: mov rsi, qword ptr [rbx]

void Settings_GraphicsSettings__Apply(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *pUVar3;
  Settings_BoolSetting_o *pSVar4;
  Cameras_InGameCamera_o *__this_00;
  Settings_IntSetting_o *pSVar5;
  UI_BaseMenu_o *x;
  bool bVar6;
  int32_t iVar7;
  Il2CppObject *pIVar8;
  Settings_IntSetting_o *pSVar9;
  PostProcessingManager_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined4 uVar10;
  System_String_o **__this_02;
  UI_InGameMenu_o *__this_03;
  undefined1 uStack_2d;
  int iStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  __this_02 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_07547281 == '\0') {
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
    __this_02 = &"m_AdditionalLightShadowsSupported";
    il2cpp_codegen_initialize_runtime_metadata(&"m_AdditionalLightShadowsSupported");
    Il2CppMethodInitialized_07547281 = '\x01';
  }
  Settings_GraphicsSettings__SetupURPAsset((Settings_GraphicsSettings_o *)__this_02,method);
  pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pSVar4 = (__this->fields).HDR;
    if ((pSVar4 == (Settings_BoolSetting_o *)0x0) ||
       (pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset,
       pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)) goto label_05b42afa;
    (pUVar3->fields).m_SupportsHDR = (pSVar4->fields)._value;
    pSVar9 = (__this->fields).RenderScale;
    if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_05b42afa;
    UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_renderScale
              (pUVar3,(float)(pSVar9->fields)._value / 100.0,(MethodInfo *)0x0);
    pSVar9 = (__this->fields).AdditionalLights;
    if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_05b42afa;
    uStack_24 = (uint)((pSVar9->fields)._value != 0);
    pIVar8 = il2cpp_vm_Object_Box
                       ((Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_LightRenderingMode,&uStack_24)
    ;
    Settings_GraphicsSettings__SetURPField("m_AdditionalLightsRenderingMode",pIVar8,method_00);
    pSVar9 = (__this->fields).ShadowQuality;
    if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_05b42afa;
    pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
    if ((pSVar9->fields)._value == 0) {
      if (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0) goto label_05b42afa;
      UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowDistance
                (pUVar3,0.0,(MethodInfo *)0x0);
    }
    else {
      pSVar9 = (__this->fields).ShadowDistance;
      if ((pSVar9 == (Settings_IntSetting_o *)0x0) ||
         (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)) goto label_05b42afa;
      UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowDistance
                (pUVar3,(float)(pSVar9->fields)._value,(MethodInfo *)0x0);
      pSVar9 = (__this->fields).ShadowQuality;
      if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_05b42afa;
      iVar2 = (pSVar9->fields)._value;
      if (iVar2 == 3) {
        pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
        if (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)
        goto label_05b42afa;
        UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowCascadeCount
                  (pUVar3,4,(MethodInfo *)0x0);
        uVar10 = 0x800;
      }
      else if (iVar2 == 2) {
        pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
        if (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)
        goto label_05b42afa;
        UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowCascadeCount
                  (pUVar3,2,(MethodInfo *)0x0);
        uVar10 = 0x400;
      }
      else {
        uVar10 = 0x200;
        if (iVar2 == 1) {
          pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset;
          if (pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)
          goto label_05b42afa;
          UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowCascadeCount
                    (pUVar3,1,(MethodInfo *)0x0);
        }
      }
      uStack_28 = uVar10;
      pIVar8 = il2cpp_vm_Object_Box
                         ((Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_ShadowResolution,&uStack_28)
      ;
      Settings_GraphicsSettings__SetURPField("m_MainLightShadowmapResolution",pIVar8,method_01);
    }
    pSVar9 = (__this->fields).ShadowQuality;
    if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_05b42afa;
    if ((pSVar9->fields)._value == 0) {
      bVar6 = false;
    }
    else {
      pSVar9 = (__this->fields).AdditionalLights;
      if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_05b42afa;
      bVar6 = (pSVar9->fields)._value == 2;
    }
    uStack_2d = bVar6;
    pIVar8 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_2d);
    Settings_GraphicsSettings__SetURPField("m_AdditionalLightShadowsSupported",pIVar8,method_02);
    if (bVar6) {
      pSVar9 = (__this->fields).ShadowQuality;
      if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_05b42afa;
      iStack_2c = (uint)((pSVar9->fields)._value == 3) * 0x400 + 0x400;
      pIVar8 = il2cpp_vm_Object_Box
                         ((Il2CppClass *)TypeInfo_UnityEngine_Rendering_Universal_ShadowResolution,&iStack_2c)
      ;
      Settings_GraphicsSettings__SetURPField("m_AdditionalLightsShadowmapResolution",pIVar8,method_03);
    }
    pSVar9 = (__this->fields).AntiAliasingQuality;
    if ((pSVar9 == (Settings_IntSetting_o *)0x0) ||
       (pUVar3 = TypeInfo_Settings_GraphicsSettings->static_fields->URPAsset,
       pUVar3 == (UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_o *)0x0)) goto label_05b42afa;
    iVar2 = (pSVar9->fields)._value;
    iVar7 = 2;
    if (iVar2 != 1) {
      iVar7 = (uint)(iVar2 == 2) * 3 + 1;
    }
    (pUVar3->fields).m_MSAA = iVar7;
  }
  pSVar4 = (__this->fields).VSync;
  if (pSVar4 != (Settings_BoolSetting_o *)0x0) {
    bVar6 = (pSVar4->fields)._value;
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    iVar7 = System_Convert__ToInt32_541c200(bVar6,(MethodInfo *)0x0);
    UnityEngine_QualitySettings__set_vSyncCount(iVar7,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName & 0xfffffffeU) == 2) {
      pSVar9 = (__this->fields).FPSCap;
    }
    else {
      pSVar9 = (__this->fields).MenuFPSCap;
    }
    if (pSVar9 != (Settings_IntSetting_o *)0x0) {
      iVar7 = (pSVar9->fields)._value;
      if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
      }
      iVar7 = ApplicationManagers_FullscreenHandler__GetTargetFrameRate(iVar7,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      UnityEngine_Application__set_targetFrameRate(iVar7,(MethodInfo *)0x0);
      pSVar9 = (__this->fields).TextureQuality;
      if (pSVar9 != (Settings_IntSetting_o *)0x0) {
        UnityEngine_QualitySettings__set_globalTextureMipmapLimit
                  (3 - (pSVar9->fields)._value,(MethodInfo *)0x0);
        pSVar9 = (__this->fields).AnisotropicFiltering;
        if (pSVar9 != (Settings_IntSetting_o *)0x0) {
          UnityEngine_QualitySettings__set_anisotropicFiltering((pSVar9->fields)._value,(MethodInfo *)0x0);
          __this_00 = (Cameras_InGameCamera_o *)
                      TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
            bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
            if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
              Cameras_InGameCamera__ApplyGraphicsSettings(__this_00,(MethodInfo *)0x0);
            }
          }
          pSVar9 = (__this->fields).ScreenResolution;
          if (pSVar9 != (Settings_IntSetting_o *)0x0) {
            iVar7 = (pSVar9->fields)._value;
            if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler)
              ;
            }
            iVar7 = ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting(iVar7,(MethodInfo *)0x0);
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar9,iVar7,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar9 = (__this->fields).ScreenResolution;
            if ((pSVar9 != (Settings_IntSetting_o *)0x0) &&
               (pSVar5 = (__this->fields).FullScreenMode, pSVar5 != (Settings_IntSetting_o *)0x0)) {
              ApplicationManagers_FullscreenHandler__Apply
                        ((pSVar9->fields)._value,(pSVar5->fields)._value,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              __this_01 = UnityEngine_Object__FindFirstObjectByType_object_
                                    ((MethodInfo_35A3BB0 *)
                                     MethodInfo_UnityEngine_Object_FindFirstObjectByType_PostProcessingManager
                                    );
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar6) {
                if (__this_01 == (PostProcessingManager_o *)0x0) goto label_05b42afa;
                PostProcessingManager__Apply(__this_01,(MethodInfo *)0x0);
              }
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              x = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar6) {
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  __this_03 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                }
                else {
                  __this_03 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                }
                if (__this_03 != (UI_InGameMenu_o *)0x0) {
                  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
                  if ((bVar1 <= (((UI_BaseMenu_c *)__this_03->klass)->_2).typeHierarchyDepth) &&
                     ((((UI_BaseMenu_c *)__this_03->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                      (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                    if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      __this_03 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                      if (__this_03 == (UI_InGameMenu_o *)0x0) goto label_05b42afa;
                    }
                    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                    if (((__this_03->klass->_2).typeHierarchyDepth < bVar1) ||
                       ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                        (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                      il2cpp_codegen_raise_invalid_cast_exception();
                    }
                    UI_InGameMenu__ApplyUISettings(__this_03,(MethodInfo *)0x0);
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
label_05b42afa:
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$OnSelectPreset
// il2cpp: void Settings_GraphicsSettings__OnSelectPreset (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b41c40

void Settings_GraphicsSettings__OnSelectPreset(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  int32_t value;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547282 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547282 = '\x01';
  }
  Settings_GraphicsSettings__ApplyRenderingPreset(__this,method);
  Settings_GraphicsSettings__ApplyResolutionPreset(__this,method);
  pSVar2 = (__this->fields).PresetQuality;
  if ((pSVar2 == (Settings_IntSetting_o *)0x0) ||
     (pSVar1 = (__this->fields).TitanGore, pSVar1 == (Settings_BoolSetting_o *)0x0)) goto label_05b4202b;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar1,1 < (pSVar2->fields)._value,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar2 = (__this->fields).PresetQuality;
  if ((pSVar2 == (Settings_IntSetting_o *)0x0) ||
     (pSVar1 = (__this->fields).BloodSplatterEnabled, pSVar1 == (Settings_BoolSetting_o *)0x0))
  goto label_05b4202b;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar1,1 < (pSVar2->fields)._value,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar2 = (__this->fields).PresetQuality;
  if ((pSVar2 == (Settings_IntSetting_o *)0x0) ||
     (pSVar1 = (__this->fields).WindEffectEnabled, pSVar1 == (Settings_BoolSetting_o *)0x0))
  goto label_05b4202b;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar1,0 < (pSVar2->fields)._value,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar2 = (__this->fields).ColorGrading;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05b4202b;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar2,0,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar2 = (__this->fields).AmbientOcclusion;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05b4202b;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar2,0,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar2 = (__this->fields).MotionBlur;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05b4202b;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar2,0,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar2 = (__this->fields).ChromaticAberrationFX;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05b4202b;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar2,0,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar2 = (__this->fields).DepthOfField;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05b4202b;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar2,0,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar2 = (__this->fields).PresetQuality;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05b4202b;
  switch((pSVar2->fields)._value) {
  case 0:
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,0,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar2 = (__this->fields).WeatherEffects;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,0,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar2 = (__this->fields).ShadowDistance;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar2,500,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar2 = (__this->fields).WaterFX;
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar2,1,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar2 = (__this->fields).RenderDistance;
            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar2,1000,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              return;
            }
          }
        }
      }
    }
    break;
  case 1:
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,0,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar2 = (__this->fields).WeatherEffects;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,1,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar2 = (__this->fields).ShadowDistance;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar2,500,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar2 = (__this->fields).WaterFX;
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar2,1,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar2 = (__this->fields).RenderDistance;
            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar2,2000,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              return;
            }
          }
        }
      }
    }
    break;
  case 2:
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,1,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar2 = (__this->fields).WeatherEffects;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,2,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar2 = (__this->fields).ShadowDistance;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar2,500,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar2 = (__this->fields).WaterFX;
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar2,2,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar2 = (__this->fields).RenderDistance;
            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar2,5000,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              return;
            }
          }
        }
      }
    }
    break;
  case 3:
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) break;
    value = 2;
    goto label_05b41fbe;
  case 4:
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) break;
    value = 3;
label_05b41fbe:
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar2,value,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar2 = (__this->fields).WeatherEffects;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,3,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar2 = (__this->fields).ShadowDistance;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,1000,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar2 = (__this->fields).WaterFX;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar2,3,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar2 = (__this->fields).RenderDistance;
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar2,10000,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            return;
          }
        }
      }
    }
    break;
  default:
    return;
  }
label_05b4202b:
  ThrowNullReferenceException();
}


// Settings.GraphicsSettings$$.ctor
// il2cpp: void Settings_GraphicsSettings___ctor (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x5b42b10

void Settings_GraphicsSettings___ctor(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547283 == '\0') {
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
    Il2CppMethodInitialized_07547283 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,4,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).PresetQuality = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PresetQuality);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).FullScreenMode = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FullScreenMode);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).ScreenResolution = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScreenResolution);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0x90,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).FPSCap = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FPSCap);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0x3c,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).MenuFPSCap = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MenuFPSCap);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).VSync = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VSync);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).InterpolationEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InterpolationEnabled);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ShowFPS = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowFPS);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 10;
  (pSVar2->fields).MaxValue = 1000000;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,10000,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).RenderDistance = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RenderDistance);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0x32;
  (pSVar2->fields).MaxValue = 100;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,100,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).RenderScale = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RenderScale);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,3,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).TextureQuality = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TextureQuality);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,3,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShadowQuality = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShadowQuality);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = 3000;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1000,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShadowDistance = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShadowDistance);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = 3000;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0x5dc,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).LightDistance = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LightDistance);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_AntiAliasingLevel);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,2,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).AntiAliasingQuality = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AntiAliasingQuality);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,2,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).AnisotropicFiltering = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AnisotropicFiltering);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,3,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).WeatherEffects = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeatherEffects);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,2,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).WeaponTrail = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeaponTrail);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).WeaponTrailHold = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeaponTrailHold);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).WeaponFireEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeaponFireEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).WindEffectEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WindEffectEnabled);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).BloodSplatterEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BloodSplatterEnabled);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).NapeBloodEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NapeBloodEnabled);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanGore = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanGore);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).MipmapEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MipmapEnabled);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_AdditionalLightingMode);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,2,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).AdditionalLights = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AdditionalLights);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_BloomLevel);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,2,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).Bloom = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Bloom);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_ChromaticAberrationLevel);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChromaticAberrationFX = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChromaticAberrationFX);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_DepthOfFieldLevel);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).DepthOfField = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DepthOfField);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_MotionBlurLevel);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).MotionBlur = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MotionBlur);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_WaterFXLevel);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,3,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).WaterFX = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WaterFX);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_AmbientOcclusionLevel);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).AmbientOcclusion = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AmbientOcclusion);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_ColorGradingLevel);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).ColorGrading = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColorGrading);
  iVar1 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_AutoExposureLevel);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = iVar1;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).AutoExposure = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AutoExposure);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).HDR = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HDR);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


