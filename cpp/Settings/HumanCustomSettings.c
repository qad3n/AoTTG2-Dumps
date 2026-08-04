// Type: Settings.HumanCustomSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HumanCustomSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/HumanCustomSettings.cs
// --------------------------------

// Settings.HumanCustomSettings$$get_FileName
// il2cpp: System_String_o* Settings_HumanCustomSettings__get_FileName (Settings_HumanCustomSettings_o* __this, const MethodInfo* method);
// 0x4089c90

System_String_o *
Settings_HumanCustomSettings__get_FileName(Settings_HumanCustomSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac3e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"HumanCustom.json");
    g_data_057ac3e9 = '\x01';
  }
  return "HumanCustom.json";
}


// Settings.HumanCustomSettings$$.ctor
// il2cpp: void Settings_HumanCustomSettings___ctor (Settings_HumanCustomSettings_o* __this, const MethodInfo* method);
// 0x4089cc0

void Settings_HumanCustomSettings___ctor(Settings_HumanCustomSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar1;
  
  if (g_data_057ac3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetSettingsContainerNoPresets_1_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetSettingsContainerNoPresets_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetSettingsContainerPresetsOnly_1_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetSettingsContainerPresetsOnly_HumanCustomSet);
    g_data_057ac3ea = '\x01';
  }
  pSVar1 = (Settings_SetSettingsContainer_HumanCustomSet__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetSettingsContainerNoPresets_HumanCustomSet);
  Settings_SetSettingsContainerNoPresets_object____ctor
            ((Settings_SetSettingsContainerNoPresets_T__o *)pSVar1,MethodInfo_SetSettingsContainerNoPresets_1_HumanCustomSet);
  (__this->fields).CustomSets = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CustomSets,pSVar1);
  pSVar1 = (Settings_SetSettingsContainer_HumanCustomSet__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar1,MethodInfo_SetSettingsContainerPresetsOnly_1_HumanCustomSet);
  (__this->fields).Costume1Sets = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Costume1Sets,pSVar1);
  pSVar1 = (Settings_SetSettingsContainer_HumanCustomSet__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar1,MethodInfo_SetSettingsContainerPresetsOnly_1_HumanCustomSet);
  (__this->fields).Costume2Sets = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Costume2Sets,pSVar1);
  pSVar1 = (Settings_SetSettingsContainer_HumanCustomSet__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar1,MethodInfo_SetSettingsContainerPresetsOnly_1_HumanCustomSet);
  (__this->fields).Costume3Sets = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Costume3Sets);
  Settings_PresetSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


