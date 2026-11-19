// Type: Settings.InputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InputSettings.cs
// --------------------------------

// Settings.InputSettings$$get_FileName
// il2cpp: System_String_o* Settings_InputSettings__get_FileName (Settings_InputSettings_o* __this, const MethodInfo* method);
// 0x5b4da20

System_String_o * Settings_InputSettings__get_FileName(Settings_InputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Input.json");
    Il2CppMethodInitialized_075472ac = '\x01';
  }
  return "Input.json";
}


// Settings.InputSettings$$.ctor
// il2cpp: void Settings_InputSettings___ctor (Settings_InputSettings_o* __this, const MethodInfo* method);
// 0x5b4da50

void Settings_InputSettings___ctor(Settings_InputSettings_o *__this,MethodInfo *method)

{
  Settings_GeneralInputSettings_o *__this_00;
  Settings_HumanInputSettings_o *__this_01;
  Settings_TitanInputSettings_o *__this_02;
  Settings_AnnieShifterInputSettings_o *__this_03;
  MethodInfo *method_00;
  Settings_InteractionInputSettings_o *__this_04;
  Settings_MapEditorInputSettings_o *__this_05;
  
  if (Il2CppMethodInitialized_075472ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_AnnieShifterInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ErenShifterInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GeneralInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InteractionInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MapEditorInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanInputSettings);
    Il2CppMethodInitialized_075472ad = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_GeneralInputSettings);
  Settings_GeneralInputSettings___ctor(__this_00,method);
  (__this->fields).General = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).General);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HumanInputSettings);
  Settings_HumanInputSettings___ctor(__this_01,(MethodInfo *)__this_00);
  (__this->fields).Human = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Human);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanInputSettings);
  Settings_TitanInputSettings___ctor(__this_02,(MethodInfo *)__this_01);
  (__this->fields).Titan = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titan);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_AnnieShifterInputSettings);
  Settings_AnnieShifterInputSettings___ctor(__this_03,(MethodInfo *)__this_02);
  (__this->fields).AnnieShifter = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AnnieShifter);
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ErenShifterInputSettings);
  Settings_ErenShifterInputSettings___ctor
            ((Settings_ErenShifterInputSettings_o *)method_00,(MethodInfo *)__this_03);
  (__this->fields).ErenShifter = (Settings_ErenShifterInputSettings_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ErenShifter);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InteractionInputSettings);
  Settings_InteractionInputSettings___ctor(__this_04,method_00);
  (__this->fields).Interaction = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Interaction);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MapEditorInputSettings);
  Settings_MapEditorInputSettings___ctor(__this_05,(MethodInfo *)__this_04);
  (__this->fields).MapEditor = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapEditor);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


