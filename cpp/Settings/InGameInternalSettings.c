// Type: Settings.InGameInternalSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/InGameInternalSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameInternalSettings.cs
// --------------------------------

// Settings.InGameInternalSettings$$.ctor
// il2cpp: void Settings_InGameInternalSettings___ctor (Settings_InGameInternalSettings_o* __this, const MethodInfo* method);
// 0x5b47250

void Settings_InGameInternalSettings___ctor(Settings_InGameInternalSettings_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754728e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Kills/Deaths/Avg Dmg/Total Dmg");
    Il2CppMethodInitialized_0754728e = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730
            ((Settings_StringSetting_o *)method_00,"Kills/Deaths/Avg Dmg/Total Dmg",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ScoreboardFormat = (Settings_StringSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScoreboardFormat);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,method_00);
  return;
}


