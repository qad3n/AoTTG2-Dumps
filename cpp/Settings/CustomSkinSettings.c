// Type: Settings.CustomSkinSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/CustomSkinSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/CustomSkins/CustomSkinSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.CustomSkinSettings$$get_FileName
// il2cpp: System_String_o* Settings_CustomSkinSettings__get_FileName (Settings_CustomSkinSettings_o* __this, const MethodInfo* method);
// 0x3d8f700

System_String_o *
Settings_CustomSkinSettings__get_FileName(Settings_CustomSkinSettings_o *__this,MethodInfo *method)

{
  if (DAT_0570271e == '\0') {
    il2cpp_init_method_metadata(&"CustomSkins.json");
    DAT_0570271e = '\x01';
  }
  return "CustomSkins.json";
}


// Settings.CustomSkinSettings$$.ctor
// il2cpp: void Settings_CustomSkinSettings___ctor (Settings_CustomSkinSettings_o* __this, const MethodInfo* method);
// 0x3d8f730

void Settings_CustomSkinSettings___ctor(Settings_CustomSkinSettings_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSkinSettings_o *__this_00;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *__this_01;
  Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *__this_02;
  Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *__this_03;
  
  if (DAT_0570271f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCustomSkinSettings_1_TitanCustomSkinSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseCustomSkinSettings_1_SkyboxCustomSkinSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseCustomSkinSettings_1_ShifterCustomSkinSet);
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinSettings_SkyboxCustomSkinSet);
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinSettings_TitanCustomSkinSet);
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinSettings_ShifterCustomSkinSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSkinSettings);
    DAT_0570271f = '\x01';
  }
  __this_00 = (Settings_HumanCustomSkinSettings_o *)il2cpp_runtime_glue(TypeInfo_HumanCustomSkinSettings);
  Settings_HumanCustomSkinSettings___ctor(__this_00,method);
  (__this->fields).Human = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Human,__this_00);
  __this_01 = (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)
              il2cpp_runtime_glue(TypeInfo_BaseCustomSkinSettings_TitanCustomSkinSet);
  Settings_BaseCustomSkinSettings<object>___ctor
            ((Settings_BaseCustomSkinSettings_T__o *)__this_01,MethodInfo_BaseCustomSkinSettings_1_TitanCustomSkinSet);
  (__this->fields).Titan = __this_01;
  il2cpp_runtime_glue(&(__this->fields).Titan,__this_01);
  __this_02 = (Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *)
              il2cpp_runtime_glue(TypeInfo_BaseCustomSkinSettings_ShifterCustomSkinSet);
  Settings_BaseCustomSkinSettings<object>___ctor
            ((Settings_BaseCustomSkinSettings_T__o *)__this_02,MethodInfo_BaseCustomSkinSettings_1_ShifterCustomSkinSet);
  (__this->fields).Shifter = __this_02;
  il2cpp_runtime_glue(&(__this->fields).Shifter,__this_02);
  __this_03 = (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)
              il2cpp_runtime_glue(TypeInfo_BaseCustomSkinSettings_SkyboxCustomSkinSet);
  Settings_BaseCustomSkinSettings<object>___ctor
            ((Settings_BaseCustomSkinSettings_T__o *)__this_03,MethodInfo_BaseCustomSkinSettings_1_SkyboxCustomSkinSet);
  (__this->fields).Skybox = __this_03;
  il2cpp_runtime_glue(&(__this->fields).Skybox);
  Settings_SaveableSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


