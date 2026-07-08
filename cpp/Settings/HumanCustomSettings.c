// Type: Settings.HumanCustomSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/HumanCustomSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/HumanCustomSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.HumanCustomSettings$$get_FileName
// il2cpp: System_String_o* Settings_HumanCustomSettings__get_FileName (Settings_HumanCustomSettings_o* __this, const MethodInfo* method);
// 0x3d93ec0

System_String_o *
Settings_HumanCustomSettings__get_FileName
          (Settings_HumanCustomSettings_o *__this,MethodInfo *method)

{
  if (DAT_05702734 == '\0') {
    il2cpp_init_method_metadata(&"HumanCustom.json");
    DAT_05702734 = '\x01';
  }
  return "HumanCustom.json";
}


// Settings.HumanCustomSettings$$.ctor
// il2cpp: void Settings_HumanCustomSettings___ctor (Settings_HumanCustomSettings_o* __this, const MethodInfo* method);
// 0x3d93ef0

void Settings_HumanCustomSettings___ctor(Settings_HumanCustomSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar1;
  
  if (DAT_05702735 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SetSettingsContainerNoPresets_1_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_SetSettingsContainerNoPresets_HumanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_SetSettingsContainerPresetsOnly_1_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_SetSettingsContainerPresetsOnly_HumanCustomSet);
    DAT_05702735 = '\x01';
  }
  pSVar1 = (Settings_SetSettingsContainer_HumanCustomSet__o *)il2cpp_runtime_glue(TypeInfo_SetSettingsContainerNoPresets_HumanCustomSet);
  Settings_SetSettingsContainerNoPresets<object>___ctor
            ((Settings_SetSettingsContainerNoPresets_T__o *)pSVar1,MethodInfo_SetSettingsContainerNoPresets_1_HumanCustomSet);
  (__this->fields).CustomSets = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).CustomSets,pSVar1);
  pSVar1 = (Settings_SetSettingsContainer_HumanCustomSet__o *)il2cpp_runtime_glue(TypeInfo_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly<object>___ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar1,MethodInfo_SetSettingsContainerPresetsOnly_1_HumanCustomSet);
  (__this->fields).Costume1Sets = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Costume1Sets,pSVar1);
  pSVar1 = (Settings_SetSettingsContainer_HumanCustomSet__o *)il2cpp_runtime_glue(TypeInfo_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly<object>___ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar1,MethodInfo_SetSettingsContainerPresetsOnly_1_HumanCustomSet);
  (__this->fields).Costume2Sets = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Costume2Sets,pSVar1);
  pSVar1 = (Settings_SetSettingsContainer_HumanCustomSet__o *)il2cpp_runtime_glue(TypeInfo_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly<object>___ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar1,MethodInfo_SetSettingsContainerPresetsOnly_1_HumanCustomSet);
  (__this->fields).Costume3Sets = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Costume3Sets);
  Settings_PresetSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


