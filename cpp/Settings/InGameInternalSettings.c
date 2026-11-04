// Type: Settings.InGameInternalSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameInternalSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameInternalSettings.cs
// --------------------------------

// Settings.InGameInternalSettings$$.ctor
// il2cpp: void Settings_InGameInternalSettings___ctor (Settings_InGameInternalSettings_o* __this, const MethodInfo* method);
// 0x181f19ed0

void Settings_InGameInternalSettings___ctor(Settings_InGameInternalSettings_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_184345446 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Kills/Deaths/Avg Dmg/Total Dmg");
    Il2CppMethodInitialized_184345446 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  defaultValue = "Kills/Deaths/Avg Dmg/Total Dmg";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (__this_00->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this_00->fields).MaxLength = 0x7fffffff;
  (__this->fields).ScoreboardFormat = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScoreboardFormat,__this_00);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


