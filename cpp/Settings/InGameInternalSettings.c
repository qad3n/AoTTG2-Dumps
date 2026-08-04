// Type: Settings.InGameInternalSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameInternalSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameInternalSettings.cs
// --------------------------------

// Settings.InGameInternalSettings$$.ctor
// il2cpp: void Settings_InGameInternalSettings___ctor (Settings_InGameInternalSettings_o* __this, const MethodInfo* method);
// 0x408ae70

void Settings_InGameInternalSettings___ctor(Settings_InGameInternalSettings_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ac3f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Kills/Deaths/Avg Dmg/Total Dmg");
    g_data_057ac3f0 = '\x01';
  }
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,"Kills/Deaths/Avg Dmg/Total Dmg",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ScoreboardFormat = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ScoreboardFormat);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


