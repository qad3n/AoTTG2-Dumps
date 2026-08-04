// Type: Settings.InGameSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSettings.cs
// --------------------------------

// Settings.InGameSettings$$get_FileName
// il2cpp: System_String_o* Settings_InGameSettings__get_FileName (Settings_InGameSettings_o* __this, const MethodInfo* method);
// 0x408c410

System_String_o * Settings_InGameSettings__get_FileName(Settings_InGameSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"InGame.json");
    g_data_057ac3f6 = '\x01';
  }
  return "InGame.json";
}


// Settings.InGameSettings$$.ctor
// il2cpp: void Settings_InGameSettings___ctor (Settings_InGameSettings_o* __this, const MethodInfo* method);
// 0x408c440

void Settings_InGameSettings___ctor(Settings_InGameSettings_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  Settings_InGameCharacterSettings_o *__this_00;
  
  if (g_data_057ac3f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCharacterSettings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetSettingsContainer_1_InGameSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetSettingsContainer_InGameSet);
    g_data_057ac3f7 = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_SetSettingsContainer_InGameSet);
  Settings_SetSettingsContainer_object____ctor((Settings_SetSettingsContainer_T__o *)method_00,MethodInfo_SetSettingsContainer_1_InGameSet);
  (__this->fields).InGameSets = (Settings_SetSettingsContainer_InGameSet__o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).InGameSets);
  __this_00 = (Settings_InGameCharacterSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor(__this_00,method_00);
  (__this->fields).LastCharacter = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LastCharacter);
  Settings_PresetSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


