// Type: Settings.CustomSkinSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/CustomSkinSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/CustomSkinSettings.cs
// --------------------------------

// Settings.CustomSkinSettings$$get_FileName
// il2cpp: System_String_o* Settings_CustomSkinSettings__get_FileName (Settings_CustomSkinSettings_o* __this, const MethodInfo* method);
// 0x59d1830

System_String_o *
Settings_CustomSkinSettings__get_FileName(Settings_CustomSkinSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545c7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CustomSkins.json");
    Il2CppMethodInitialized_07545c7c = '\x01';
  }
  return "CustomSkins.json";
}


// Settings.CustomSkinSettings$$.ctor
// il2cpp: void Settings_CustomSkinSettings___ctor (Settings_CustomSkinSettings_o* __this, const MethodInfo* method);
// 0x59d1860

void Settings_CustomSkinSettings___ctor(Settings_CustomSkinSettings_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSkinSettings_o *__this_00;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *__this_01;
  Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *__this_02;
  Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *__this_03;
  
  if (Il2CppMethodInitialized_07545c7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_BaseCustomSkinSettings_TitanCustomSkinSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_BaseCustomSkinSettings_ShifterCustomSkinSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseCustomSkinSettings_TitanCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseCustomSkinSettings_ShifterCustomSkinSet)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSkinSettings);
    Il2CppMethodInitialized_07545c7d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSettings);
  Settings_HumanCustomSkinSettings___ctor(__this_00,method);
  (__this->fields).Human = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Human);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_BaseCustomSkinSettings_TitanCustomSkinSet);
  Settings_BaseCustomSkinSettings_object____ctor
            ((Settings_BaseCustomSkinSettings_T__o *)__this_01,
             (MethodInfo_44DADA0 *)MethodInfo_Settings_BaseCustomSkinSettings_TitanCustomSkinSet_ctor);
  (__this->fields).Titan = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titan);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_BaseCustomSkinSettings_ShifterCustomSkinSet);
  Settings_BaseCustomSkinSettings_object____ctor
            ((Settings_BaseCustomSkinSettings_T__o *)__this_02,
             (MethodInfo_44DADA0 *)MethodInfo_Settings_BaseCustomSkinSettings_ShifterCustomSkinSet_ctor);
  (__this->fields).Shifter = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifter);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet);
  Settings_BaseCustomSkinSettings_object____ctor
            ((Settings_BaseCustomSkinSettings_T__o *)__this_03,
             (MethodInfo_44DADA0 *)MethodInfo_Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet_ctor);
  (__this->fields).Skybox = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Skybox);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


