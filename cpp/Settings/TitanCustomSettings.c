// Type: Settings.TitanCustomSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/TitanCustomSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/TitanCustomSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.TitanCustomSettings$$get_FileName
// il2cpp: System_String_o* Settings_TitanCustomSettings__get_FileName (Settings_TitanCustomSettings_o* __this, const MethodInfo* method);
// 0x3d96540

System_String_o *
Settings_TitanCustomSettings__get_FileName
          (Settings_TitanCustomSettings_o *__this,MethodInfo *method)

{
  if (DAT_05702745 == '\0') {
    il2cpp_init_method_metadata(&"TitanCustom.json");
    DAT_05702745 = '\x01';
  }
  return "TitanCustom.json";
}


// Settings.TitanCustomSettings$$.ctor
// il2cpp: void Settings_TitanCustomSettings___ctor (Settings_TitanCustomSettings_o* __this, const MethodInfo* method);
// 0x3d96570

void Settings_TitanCustomSettings___ctor(Settings_TitanCustomSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  
  if (DAT_05702746 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SetSettingsContainerNoPresets_1_TitanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_SetSettingsContainerNoPresets_TitanCustomSet);
    DAT_05702746 = '\x01';
  }
  __this_00 = (Settings_SetSettingsContainer_TitanCustomSet__o *)il2cpp_runtime_glue(TypeInfo_SetSettingsContainerNoPresets_TitanCustomSet);
  Settings_SetSettingsContainerNoPresets<object>___ctor
            ((Settings_SetSettingsContainerNoPresets_T__o *)__this_00,MethodInfo_SetSettingsContainerNoPresets_1_TitanCustomSet);
  (__this->fields).TitanCustomSets = __this_00;
  il2cpp_runtime_glue(&(__this->fields).TitanCustomSets);
  Settings_PresetSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


