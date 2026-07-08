// Type: Settings.InGameInternalSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/InGameInternalSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/InGameInternalSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.InGameInternalSettings$$.ctor
// il2cpp: void Settings_InGameInternalSettings___ctor (Settings_InGameInternalSettings_o* __this, const MethodInfo* method);
// 0x3d94cc0

void Settings_InGameInternalSettings___ctor
               (Settings_InGameInternalSettings_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  
  if (DAT_0570273b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"Kills/Deaths/Avg Dmg/Total Dmg");
    DAT_0570273b = '\x01';
  }
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,"Kills/Deaths/Avg Dmg/Total Dmg",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ScoreboardFormat = __this_00;
  il2cpp_runtime_glue(&(__this->fields).ScoreboardFormat);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


