// Type: Settings.TitanCustomSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/TitanCustomSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSettings.cs
// --------------------------------

// Settings.TitanCustomSettings$$get_FileName
// il2cpp: System_String_o* Settings_TitanCustomSettings__get_FileName (Settings_TitanCustomSettings_o* __this, const MethodInfo* method);
// 0x408c6f0

System_String_o *
Settings_TitanCustomSettings__get_FileName(Settings_TitanCustomSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&"TitanCustom.json");
    g_data_057ac3fa = '\x01';
  }
  return "TitanCustom.json";
}


// Settings.TitanCustomSettings$$.ctor
// il2cpp: void Settings_TitanCustomSettings___ctor (Settings_TitanCustomSettings_o* __this, const MethodInfo* method);
// 0x408c720

void Settings_TitanCustomSettings___ctor(Settings_TitanCustomSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  
  if (g_data_057ac3fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetSettingsContainerNoPresets_1_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetSettingsContainerNoPresets_TitanCustomSet);
    g_data_057ac3fb = '\x01';
  }
  __this_00 = (Settings_SetSettingsContainer_TitanCustomSet__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetSettingsContainerNoPresets_TitanCustomSet);
  Settings_SetSettingsContainerNoPresets_object____ctor
            ((Settings_SetSettingsContainerNoPresets_T__o *)__this_00,MethodInfo_SetSettingsContainerNoPresets_1_TitanCustomSet);
  (__this->fields).TitanCustomSets = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanCustomSets);
  Settings_PresetSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


