// Type: Settings.WeatherSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/WeatherSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/WeatherSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.WeatherSettings$$get_FileName
// il2cpp: System_String_o* Settings_WeatherSettings__get_FileName (Settings_WeatherSettings_o* __this, const MethodInfo* method);
// 0x3d96bb0

System_String_o *
Settings_WeatherSettings__get_FileName(Settings_WeatherSettings_o *__this,MethodInfo *method)

{
  if (DAT_05702748 == '\0') {
    il2cpp_init_method_metadata(&"Weather.json");
    DAT_05702748 = '\x01';
  }
  return "Weather.json";
}


// Settings.WeatherSettings$$.ctor
// il2cpp: void Settings_WeatherSettings___ctor (Settings_WeatherSettings_o* __this, const MethodInfo* method);
// 0x3d96be0

void Settings_WeatherSettings___ctor(Settings_WeatherSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_WeatherSet__o *__this_00;
  
  if (DAT_05702749 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SetSettingsContainer_1_WeatherSet);
    il2cpp_init_method_metadata(&TypeInfo_SetSettingsContainer_WeatherSet);
    DAT_05702749 = '\x01';
  }
  __this_00 = (Settings_SetSettingsContainer_WeatherSet__o *)il2cpp_runtime_glue(TypeInfo_SetSettingsContainer_WeatherSet);
  Settings_SetSettingsContainer<object>___ctor
            ((Settings_SetSettingsContainer_T__o *)__this_00,MethodInfo_SetSettingsContainer_1_WeatherSet);
  (__this->fields).WeatherSets = __this_00;
  il2cpp_runtime_glue(&(__this->fields).WeatherSets);
  Settings_PresetSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


