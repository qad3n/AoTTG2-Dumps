// Type: Settings.GeneralSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/GeneralSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/GeneralSettings.cs  [CHANGED since prior version]
// --------------------------------

// Settings.GeneralSettings$$get_FileName
// il2cpp: System_String_o* Settings_GeneralSettings__get_FileName (Settings_GeneralSettings_o* __this, const MethodInfo* method);
// 0x3d91500

System_String_o *
Settings_GeneralSettings__get_FileName(Settings_GeneralSettings_o *__this,MethodInfo *method)

{
  if (DAT_0570272b == '\0') {
    il2cpp_init_method_metadata(&"General.json");
    DAT_0570272b = '\x01';
  }
  return "General.json";
}


// Settings.GeneralSettings$$Apply
// il2cpp: void Settings_GeneralSettings__Apply (Settings_GeneralSettings_o* __this, const MethodInfo* method);
// 0x3d91530

void Settings_GeneralSettings__Apply(Settings_GeneralSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this_00;
  
  if (DAT_0570272c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570272c = '\x01';
  }
  __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      Cameras_InGameCamera__ApplyGeneralSettings(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Settings.GeneralSettings$$.ctor
// il2cpp: void Settings_GeneralSettings___ctor (Settings_GeneralSettings_o* __this, const MethodInfo* method);
// 0x3d915b0

void Settings_GeneralSettings___ctor(Settings_GeneralSettings_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  Settings_FloatSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (DAT_0570272d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"English");
    DAT_0570272d = '\x01';
  }
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,"English",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Language = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Language);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,0.5,0.01,1.0,(MethodInfo *)0x0);
  (__this->fields).MouseSpeed = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).MouseSpeed);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,1.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).CameraDistance = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).CameraDistance);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).CameraHeight = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).CameraHeight);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).CameraSide = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).CameraSide);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).InvertMouse = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).InvertMouse,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).CameraTilt = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).CameraTilt);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).SnapshotsEnabled = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).SnapshotsEnabled);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).SnapshotsShowInGame = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).SnapshotsShowInGame);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar3,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SnapshotsMinimumDamage = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SnapshotsMinimumDamage,pSVar3);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).MinimapEnabled = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).MinimapEnabled);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,1000.0,100.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).MinimapCameraHeight = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).MinimapCameraHeight);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CameraMode = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).CameraMode);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).SkipCutscenes = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).SkipCutscenes);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).CameraClipping = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).CameraClipping);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,50.0,1.0,120.0,(MethodInfo *)0x0);
  (__this->fields).FOVMin = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).FOVMin);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,100.0,1.0,120.0,(MethodInfo *)0x0);
  (__this->fields).FOVMax = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).FOVMax);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,80.0,1.0,120.0,(MethodInfo *)0x0);
  (__this->fields).FPSFOVMin = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).FPSFOVMin);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,100.0,1.0,120.0,(MethodInfo *)0x0);
  (__this->fields).FPSFOVMax = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).FPSFOVMax);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,0.2,0.0,0.99,(MethodInfo *)0x0);
  (__this->fields).OriginalCameraDeadzone = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).OriginalCameraDeadzone);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,60.0,0.1,200.0,(MethodInfo *)0x0);
  (__this->fields).OriginalCameraSpeed = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).OriginalCameraSpeed);
  Settings_SaveableSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


