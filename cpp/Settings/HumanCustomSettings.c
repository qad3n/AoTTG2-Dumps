// Type: Settings.HumanCustomSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HumanCustomSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/HumanCustomSettings.cs
// --------------------------------

// Settings.HumanCustomSettings$$get_FileName
// il2cpp: System_String_o* Settings_HumanCustomSettings__get_FileName (Settings_HumanCustomSettings_o* __this, const MethodInfo* method);
// 0x181f17f10

System_String_o *
Settings_HumanCustomSettings__get_FileName(Settings_HumanCustomSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434543e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanCustom.json");
    Il2CppMethodInitialized_18434543e = '\x01';
  }
  return "HumanCustom.json";
}


// Settings.HumanCustomSettings$$.ctor
// il2cpp: void Settings_HumanCustomSettings___ctor (Settings_HumanCustomSettings_o* __this, const MethodInfo* method);
// 0x181f17df0

void Settings_HumanCustomSettings___ctor(Settings_HumanCustomSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainerNoPresets_HumanCustomSet__o *__this_00;
  Settings_SetSettingsContainerPresetsOnly_HumanCustomSet__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434543f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainerNoPresets_HumanCustomSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SetSettingsContainerNoPresets_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet);
    Il2CppMethodInitialized_18434543f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerNoPresets_HumanCustomSet);
  Settings_SetSettingsContainerNoPresets_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)__this_00,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerNoPresets_HumanCustomSet_ctor);
  (__this->fields).CustomSets = (Settings_SetSettingsContainer_HumanCustomSet__o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomSets,__this_00);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar1,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet_ctor);
  (__this->fields).Costume1Sets = (Settings_SetSettingsContainer_HumanCustomSet__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Costume1Sets,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar1,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet_ctor);
  (__this->fields).Costume2Sets = (Settings_SetSettingsContainer_HumanCustomSet__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Costume2Sets,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar1,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet_ctor);
  (__this->fields).Costume3Sets = (Settings_SetSettingsContainer_HumanCustomSet__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Costume3Sets,pSVar1);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


