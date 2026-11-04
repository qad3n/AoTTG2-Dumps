// Type: Settings.InGameSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSettings.cs
// --------------------------------

// Settings.InGameSettings$$get_FileName
// il2cpp: System_String_o* Settings_InGameSettings__get_FileName (Settings_InGameSettings_o* __this, const MethodInfo* method);
// 0x181f1bdb0

System_String_o * Settings_InGameSettings__get_FileName(Settings_InGameSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434544c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InGame.json");
    Il2CppMethodInitialized_18434544c = '\x01';
  }
  return "InGame.json";
}


// Settings.InGameSettings$$.ctor
// il2cpp: void Settings_InGameSettings___ctor (Settings_InGameSettings_o* __this, const MethodInfo* method);
// 0x181f1bd00

void Settings_InGameSettings___ctor(Settings_InGameSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_InGameSet__o *__this_00;
  Settings_InGameCharacterSettings_o *__this_01;
  
  if (Il2CppMethodInitialized_18434544d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_SetSettingsContainer_InGameSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SetSettingsContainer_InGameSet);
    Il2CppMethodInitialized_18434544d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SetSettingsContainer_InGameSet);
  Settings_SetSettingsContainer_object____ctor
            ((Settings_SetSettingsContainer_T__o *)__this_00,
             (MethodInfo_C8F6A0 *)MethodInfo_Settings_SetSettingsContainer_InGameSet_ctor);
  (__this->fields).InGameSets = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InGameSets,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).LastCharacter = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LastCharacter,__this_01);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


