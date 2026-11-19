// Type: Settings.GeneralSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/GeneralSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/GeneralSettings.cs
// --------------------------------

// Settings.GeneralSettings$$get_FileName
// il2cpp: System_String_o* Settings_GeneralSettings__get_FileName (Settings_GeneralSettings_o* __this, const MethodInfo* method);
// 0x5b40380

System_String_o *
Settings_GeneralSettings__get_FileName(Settings_GeneralSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547276 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General.json");
    Il2CppMethodInitialized_07547276 = '\x01';
  }
  return "General.json";
}


// Settings.GeneralSettings$$Apply
// il2cpp: void Settings_GeneralSettings__Apply (Settings_GeneralSettings_o* __this, const MethodInfo* method);
// 0x5b403b0

void Settings_GeneralSettings__Apply(Settings_GeneralSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this_00;
  
  if (Il2CppMethodInitialized_07547277 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547277 = '\x01';
  }
  __this_00 = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera
  ;
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Cameras_InGameCamera
       )) {
      Cameras_InGameCamera__ApplyGeneralSettings(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Settings.GeneralSettings$$DeserializeFromJsonObject
// il2cpp: void Settings_GeneralSettings__DeserializeFromJsonObject (Settings_GeneralSettings_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5b40430

void Settings_GeneralSettings__DeserializeFromJsonObject
               (Settings_GeneralSettings_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  Settings_SaveableSettingsContainer__DeserializeFromJsonObject
            ((Settings_SaveableSettingsContainer_o *)__this,json,(MethodInfo *)0x0);
  return;
}


// Settings.GeneralSettings$$.ctor
// il2cpp: void Settings_GeneralSettings___ctor (Settings_GeneralSettings_o* __this, const MethodInfo* method);
// 0x5b40440

void Settings_GeneralSettings___ctor(Settings_GeneralSettings_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Settings_StringSetting_o *__this_00;
  Settings_FloatSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547278 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_07547278 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,"English",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Language = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Language);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.01;
  (pSVar2->fields).MaxValue = 1.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0.5,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).MouseSpeed = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MouseSpeed);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 1.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraDistance = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraDistance);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 2.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraHeight = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraHeight);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 2.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraSide = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraSide);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).InvertMouse = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InvertMouse);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 1.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraTiltStrength = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraTiltStrength);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).SnapshotsEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapshotsEnabled);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).SnapshotsShowInGame = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapshotsShowInGame);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar4,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar1;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).SnapshotsMinimumDamage = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnapshotsMinimumDamage);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).MinimapEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MinimapEnabled);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 100.0;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1000.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).MinimapCameraHeight = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MinimapCameraHeight);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar4,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar1;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).CameraMode = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraMode);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).OriginalCameraWOWRotation = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalCameraWOWRotation);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).SkipCutscenes = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkipCutscenes);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).CameraClipping = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CameraClipping);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 1.0;
  (pSVar2->fields).MaxValue = 120.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,50.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).FOVMin = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FOVMin);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 1.0;
  (pSVar2->fields).MaxValue = 120.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,100.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).FOVMax = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FOVMax);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 1.0;
  (pSVar2->fields).MaxValue = 120.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,80.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).FPSFOVMin = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FPSFOVMin);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 1.0;
  (pSVar2->fields).MaxValue = 120.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,100.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).FPSFOVMax = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FPSFOVMax);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 0.99;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0.2,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).OriginalCameraDeadzone = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalCameraDeadzone);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.1;
  (pSVar2->fields).MaxValue = 200.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,60.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).OriginalCameraSpeed = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OriginalCameraSpeed);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).MobileInputEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MobileInputEnabled);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).MobileButtonIcons = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MobileButtonIcons);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).MobileGyroscope = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MobileGyroscope);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = -1.0;
  (pSVar2->fields).MaxValue = 1.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).MobileGyroscopeHorizontalSensitivity = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MobileGyroscopeHorizontalSensitivity);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = -1.0;
  (pSVar2->fields).MaxValue = 1.0;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1.0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).MobileGyroscopeVerticalSensitivity = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MobileGyroscopeVerticalSensitivity);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar2->fields).MinValue = -3.4028235e+38;
  (pSVar2->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar2,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar2->fields).MinValue = 0.0;
  (pSVar2->fields).MaxValue = 0.9;
  fVar5 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0.6,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = fVar5;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).MobileLookStabilization = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MobileLookStabilization);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


