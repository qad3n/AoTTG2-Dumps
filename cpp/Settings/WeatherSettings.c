// Type: Settings.WeatherSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/WeatherSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSettings.cs
// --------------------------------

// Settings.WeatherSettings$$get_FileName
// il2cpp: System_String_o* Settings_WeatherSettings__get_FileName (Settings_WeatherSettings_o* __this, const MethodInfo* method);
// 0x408cd60

System_String_o *
Settings_WeatherSettings__get_FileName(Settings_WeatherSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac3fd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Weather.json");
    g_data_057ac3fd = '\x01';
  }
  return "Weather.json";
}


// Settings.WeatherSettings$$.ctor
// il2cpp: void Settings_WeatherSettings___ctor (Settings_WeatherSettings_o* __this, const MethodInfo* method);
// 0x408cd90

void Settings_WeatherSettings___ctor(Settings_WeatherSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_WeatherSet__o *__this_00;
  
  if (g_data_057ac3fe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetSettingsContainer_1_WeatherSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetSettingsContainer_WeatherSet);
    g_data_057ac3fe = '\x01';
  }
  __this_00 = (Settings_SetSettingsContainer_WeatherSet__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetSettingsContainer_WeatherSet);
  Settings_SetSettingsContainer_object____ctor((Settings_SetSettingsContainer_T__o *)__this_00,MethodInfo_SetSettingsContainer_1_WeatherSet);
  (__this->fields).WeatherSets = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WeatherSets);
  Settings_PresetSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


