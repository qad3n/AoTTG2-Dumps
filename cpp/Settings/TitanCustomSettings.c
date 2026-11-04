// Type: Settings.TitanCustomSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/TitanCustomSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSettings.cs
// --------------------------------

// Settings.TitanCustomSettings$$get_FileName
// il2cpp: System_String_o* Settings_TitanCustomSettings__get_FileName (Settings_TitanCustomSettings_o* __this, const MethodInfo* method);
// 0x181f285f0

System_String_o *
Settings_TitanCustomSettings__get_FileName(Settings_TitanCustomSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345455 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanCustom.json");
    Il2CppMethodInitialized_184345455 = '\x01';
  }
  return "TitanCustom.json";
}


// Settings.TitanCustomSettings$$.ctor
// il2cpp: void Settings_TitanCustomSettings___ctor (Settings_TitanCustomSettings_o* __this, const MethodInfo* method);
// 0x181f28570

void Settings_TitanCustomSettings___ctor(Settings_TitanCustomSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainerNoPresets_TitanCustomSet__o *__this_00;
  
  if (Il2CppMethodInitialized_184345456 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainerNoPresets_TitanCustomSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SetSettingsContainerNoPresets_TitanCustomSet);
    Il2CppMethodInitialized_184345456 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerNoPresets_TitanCustomSet);
  Settings_SetSettingsContainerNoPresets_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)__this_00,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerNoPresets_TitanCustomSet_ctor);
  (__this->fields).TitanCustomSets = (Settings_SetSettingsContainer_TitanCustomSet__o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanCustomSets,__this_00);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


