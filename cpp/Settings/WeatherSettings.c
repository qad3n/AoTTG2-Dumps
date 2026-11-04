// Type: Settings.WeatherSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/WeatherSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSettings.cs
// --------------------------------

// Settings.WeatherSettings$$get_FileName
// il2cpp: System_String_o* Settings_WeatherSettings__get_FileName (Settings_WeatherSettings_o* __this, const MethodInfo* method);
// 0x181f2ca30

System_String_o *
Settings_WeatherSettings__get_FileName(Settings_WeatherSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345458 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Weather.json");
    Il2CppMethodInitialized_184345458 = '\x01';
  }
  return "Weather.json";
}


// Settings.WeatherSettings$$.ctor
// il2cpp: void Settings_WeatherSettings___ctor (Settings_WeatherSettings_o* __this, const MethodInfo* method);
// 0x181f2c9b0

void Settings_WeatherSettings___ctor(Settings_WeatherSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_WeatherSet__o *__this_00;
  
  if (Il2CppMethodInitialized_184345459 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_SetSettingsContainer_WeatherSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SetSettingsContainer_WeatherSet);
    Il2CppMethodInitialized_184345459 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SetSettingsContainer_WeatherSet);
  Settings_SetSettingsContainer_object____ctor
            ((Settings_SetSettingsContainer_T__o *)__this_00,
             (MethodInfo_C8F6A0 *)MethodInfo_Settings_SetSettingsContainer_WeatherSet_ctor);
  (__this->fields).WeatherSets = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeatherSets,__this_00);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


