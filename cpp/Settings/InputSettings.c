// Type: Settings.InputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/InputSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/Input/InputSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.InputSettings$$get_FileName
// il2cpp: System_String_o* Settings_InputSettings__get_FileName (Settings_InputSettings_o* __this, const MethodInfo* method);
// 0x3f04b10

System_String_o *
Settings_InputSettings__get_FileName(Settings_InputSettings_o *__this,MethodInfo *method)

{
  if (DAT_05703c49 == '\0') {
    il2cpp_init_method_metadata(&"Input.json");
    DAT_05703c49 = '\x01';
  }
  return "Input.json";
}


// Settings.InputSettings$$.ctor
// il2cpp: void Settings_InputSettings___ctor (Settings_InputSettings_o* __this, const MethodInfo* method);
// 0x3f04b40

void Settings_InputSettings___ctor(Settings_InputSettings_o *__this,MethodInfo *method)

{
  Settings_GeneralInputSettings_o *__this_00;
  Settings_HumanInputSettings_o *__this_01;
  Settings_TitanInputSettings_o *__this_02;
  Settings_AnnieShifterInputSettings_o *__this_03;
  MethodInfo *method_00;
  Settings_InteractionInputSettings_o *__this_04;
  Settings_MapEditorInputSettings_o *__this_05;
  
  if (DAT_05703c4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnnieShifterInputSettings);
    il2cpp_init_method_metadata(&TypeInfo_ErenShifterInputSettings);
    il2cpp_init_method_metadata(&TypeInfo_GeneralInputSettings);
    il2cpp_init_method_metadata(&TypeInfo_HumanInputSettings);
    il2cpp_init_method_metadata(&TypeInfo_InteractionInputSettings);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorInputSettings);
    il2cpp_init_method_metadata(&TypeInfo_TitanInputSettings);
    DAT_05703c4a = '\x01';
  }
  __this_00 = (Settings_GeneralInputSettings_o *)il2cpp_runtime_glue(TypeInfo_GeneralInputSettings);
  Settings_GeneralInputSettings___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).General = __this_00;
  il2cpp_runtime_glue(&(__this->fields).General);
  __this_01 = (Settings_HumanInputSettings_o *)il2cpp_runtime_glue(TypeInfo_HumanInputSettings);
  Settings_HumanInputSettings___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).Human = __this_01;
  il2cpp_runtime_glue(&(__this->fields).Human);
  __this_02 = (Settings_TitanInputSettings_o *)il2cpp_runtime_glue(TypeInfo_TitanInputSettings);
  Settings_TitanInputSettings___ctor(__this_02,(MethodInfo *)__this_01);
  (__this->fields).Titan = __this_02;
  il2cpp_runtime_glue(&(__this->fields).Titan);
  __this_03 = (Settings_AnnieShifterInputSettings_o *)il2cpp_runtime_glue(TypeInfo_AnnieShifterInputSettings);
  Settings_AnnieShifterInputSettings___ctor(__this_03,(MethodInfo *)0x0);
  (__this->fields).AnnieShifter = __this_03;
  il2cpp_runtime_glue(&(__this->fields).AnnieShifter);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ErenShifterInputSettings);
  Settings_ErenShifterInputSettings___ctor
            ((Settings_ErenShifterInputSettings_o *)method_00,(MethodInfo *)0x0);
  (__this->fields).ErenShifter = (Settings_ErenShifterInputSettings_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).ErenShifter);
  __this_04 = (Settings_InteractionInputSettings_o *)il2cpp_runtime_glue(TypeInfo_InteractionInputSettings);
  Settings_InteractionInputSettings___ctor(__this_04,method_00);
  (__this->fields).Interaction = __this_04;
  il2cpp_runtime_glue(&(__this->fields).Interaction);
  __this_05 = (Settings_MapEditorInputSettings_o *)il2cpp_runtime_glue(TypeInfo_MapEditorInputSettings);
  Settings_MapEditorInputSettings___ctor(__this_05,(MethodInfo *)__this_04);
  (__this->fields).MapEditor = __this_05;
  il2cpp_runtime_glue(&(__this->fields).MapEditor);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)__this_05);
  return;
}


