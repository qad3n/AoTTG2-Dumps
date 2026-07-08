// Type: Settings.InGameSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/InGameSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/InGameSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.InGameSettings$$get_FileName
// il2cpp: System_String_o* Settings_InGameSettings__get_FileName (Settings_InGameSettings_o* __this, const MethodInfo* method);
// 0x3d96260

System_String_o *
Settings_InGameSettings__get_FileName(Settings_InGameSettings_o *__this,MethodInfo *method)

{
  if (DAT_05702741 == '\0') {
    il2cpp_init_method_metadata(&"InGame.json");
    DAT_05702741 = '\x01';
  }
  return "InGame.json";
}


// Settings.InGameSettings$$.ctor
// il2cpp: void Settings_InGameSettings___ctor (Settings_InGameSettings_o* __this, const MethodInfo* method);
// 0x3d96290

void Settings_InGameSettings___ctor(Settings_InGameSettings_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  Settings_InGameCharacterSettings_o *__this_00;
  
  if (DAT_05702742 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCharacterSettings);
    il2cpp_init_method_metadata(&MethodInfo_SetSettingsContainer_1_InGameSet);
    il2cpp_init_method_metadata(&TypeInfo_SetSettingsContainer_InGameSet);
    DAT_05702742 = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_SetSettingsContainer_InGameSet);
  Settings_SetSettingsContainer<object>___ctor
            ((Settings_SetSettingsContainer_T__o *)method_00,MethodInfo_SetSettingsContainer_1_InGameSet);
  (__this->fields).InGameSets = (Settings_SetSettingsContainer_InGameSet__o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).InGameSets);
  __this_00 = (Settings_InGameCharacterSettings_o *)il2cpp_runtime_glue(TypeInfo_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor(__this_00,method_00);
  (__this->fields).LastCharacter = __this_00;
  il2cpp_runtime_glue(&(__this->fields).LastCharacter);
  Settings_PresetSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


