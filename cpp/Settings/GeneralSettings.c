// Type: Settings.GeneralSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/GeneralSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/GeneralSettings.cs
// --------------------------------

// Settings.GeneralSettings$$get_FileName
// il2cpp: System_String_o* Settings_GeneralSettings__get_FileName (Settings_GeneralSettings_o* __this, const MethodInfo* method);
// 0x181f14210

System_String_o *
Settings_GeneralSettings__get_FileName(Settings_GeneralSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345431 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General.json");
    Il2CppMethodInitialized_184345431 = '\x01';
  }
  return "General.json";
}


// Settings.GeneralSettings$$Apply
// il2cpp: void Settings_GeneralSettings__Apply (Settings_GeneralSettings_o* __this, const MethodInfo* method);
// 0x181f13840

void Settings_GeneralSettings__Apply(Settings_GeneralSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Cameras_BaseCamera_c *pCVar3;
  Cameras_InGameCamera_o *__this_00;
  
  if (Il2CppMethodInitialized_184345432 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184345432 = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      __this_00 = (Cameras_InGameCamera_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
        Cameras_InGameCamera__ApplyGeneralSettings(__this_00,(MethodInfo *)0x0);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Cameras_InGameCamera);
    }
  }
  return;
}


// Settings.GeneralSettings$$DeserializeFromJsonObject
// il2cpp: void Settings_GeneralSettings__DeserializeFromJsonObject (Settings_GeneralSettings_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f13900

void
Settings_GeneralSettings__DeserializeFromJsonObject(Settings_GeneralSettings_o* __this, SimpleJSONFixed_JSONNode_o* json, MethodInfo* method)

{
  byte bVar1;
  Settings_SaveableSettingsContainer_c *pSVar2;
  SimpleJSONFixed_JSONNode_c *pSVar3;
  System_Xml_Schema_XmlSchema_c *pSVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  
  if (Il2CppMethodInitialized_1843454b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsVersion");
    Il2CppMethodInitialized_1843454b7 = '\x01';
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,(MethodInfo *)0x0);
  pSVar2 = __this->klass;
  (__this->fields)._migrationPending = false;
  pSVar8 = (*(pSVar2->vtable)._17_get_CurrentVersion.methodPtr)
                     (__this,(pSVar2->vtable)._17_get_CurrentVersion.method);
  if (((int)pSVar8 != 0) && (json != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar3 = json->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar3->_2).typeHierarchyDepth) &&
       ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject
       )) {
      pSVar8 = (*(pSVar3->vtable)._7_get_Item.methodPtr)(json,(MethodInfo *)"SettingsVersion");
      if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_181f13a4f:
        ThrowNullReferenceException();
      }
      pSVar4 = pSVar8->klass;
      cVar5 = (*(pSVar4->vtable)._12_set_NameAttribute.methodPtr)
                        (pSVar8,(System_Type_o *)(pSVar4->vtable)._12_set_NameAttribute.method,
                         (MethodInfo *)pSVar4);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
      else {
        pSVar8 = (*(json->klass->vtable)._7_get_Item.methodPtr)(json,(MethodInfo *)"SettingsVersion");
        if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181f13a4f;
        uVar7 = (*(code *)((Il2CppClass *)pSVar8->klass)->vtable[35].methodPtr)
                          (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[35].method);
      }
      pSVar8 = (*(__this->klass->vtable)._17_get_CurrentVersion.methodPtr)
                         (__this,(__this->klass->vtable)._17_get_CurrentVersion.method);
      if ((int)uVar7 < (int)pSVar8) {
        bVar6 = (*(__this->klass->vtable)._21_Migrate.methodPtr)(__this,(MethodInfo *)(ulonglong)uVar7);
        (__this->fields)._migrationPending = bVar6;
      }
    }
  }
  return;
}


// Settings.GeneralSettings$$.ctor
// il2cpp: void Settings_GeneralSettings___ctor (Settings_GeneralSettings_o* __this, const MethodInfo* method);
// 0x181f13a60

void Settings_GeneralSettings___ctor(Settings_GeneralSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  Settings_FloatSetting_c *pSVar2;
  System_String_o *defaultValue;
  int32_t iVar3;
  Settings_StringSetting_o *__this_00;
  Settings_FloatSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_184345433 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_184345433 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  defaultValue = "English";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (__this_00->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this_00->fields).MaxLength = 0x7fffffff;
  (__this->fields).Language = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Language,__this_00);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.5,0.01,1.0,(MethodInfo *)0x0);
  (__this->fields).MouseSpeed = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MouseSpeed,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,1.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).CameraDistance = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraDistance,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).CameraHeight = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraHeight,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).CameraSide = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraSide,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).InvertMouse = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InvertMouse,pSVar5);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).CameraTiltStrength = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraTiltStrength,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).SnapshotsEnabled = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapshotsEnabled,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).SnapshotsShowInGame = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapshotsShowInGame,pSVar5);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar3;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).SnapshotsMinimumDamage = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapshotsMinimumDamage,pSVar6);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).MinimapEnabled = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MinimapEnabled,pSVar5);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar2 = pSVar4->klass;
  (pSVar4->fields).MinValue = 100.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar7 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,1000.0,(pSVar2->vtable)._11_SanitizeValue.method);
  pSVar2 = pSVar4->klass;
  (pSVar4->fields).DefaultValue = fVar7;
  (*(pSVar2->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar2->vtable)._4_SetDefault.method);
  (__this->fields).MinimapCameraHeight = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MinimapCameraHeight,pSVar4);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar3;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraMode = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraMode,pSVar6);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).OriginalCameraWOWRotation = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalCameraWOWRotation,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).SkipCutscenes = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkipCutscenes,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).CameraClipping = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraClipping,pSVar5);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,50.0,1.0,120.0,(MethodInfo *)0x0);
  (__this->fields).FOVMin = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FOVMin,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,100.0,1.0,120.0,(MethodInfo *)0x0);
  (__this->fields).FOVMax = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FOVMax,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,80.0,1.0,120.0,(MethodInfo *)0x0);
  (__this->fields).FPSFOVMin = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FPSFOVMin,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,100.0,1.0,120.0,(MethodInfo *)0x0);
  (__this->fields).FPSFOVMax = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FPSFOVMax,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.2,0.0,0.99,(MethodInfo *)0x0);
  (__this->fields).OriginalCameraDeadzone = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalCameraDeadzone,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,60.0,0.1,200.0,(MethodInfo *)0x0);
  (__this->fields).OriginalCameraSpeed = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalCameraSpeed,pSVar4);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


