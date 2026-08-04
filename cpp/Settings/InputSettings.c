// Type: Settings.InputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InputSettings.cs
// --------------------------------

// Settings.InputSettings$$get_FileName
// il2cpp: System_String_o* Settings_InputSettings__get_FileName (Settings_InputSettings_o* __this, const MethodInfo* method);
// 0x41f3af0

System_String_o * Settings_InputSettings__get_FileName(Settings_InputSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ad86a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Input.json");
    g_data_057ad86a = '\x01';
  }
  return "Input.json";
}


// Settings.InputSettings$$.ctor
// il2cpp: void Settings_InputSettings___ctor (Settings_InputSettings_o* __this, const MethodInfo* method);
// 0x41f3b20

void Settings_InputSettings___ctor(Settings_InputSettings_o *__this,MethodInfo *method)

{
  Settings_GeneralInputSettings_o *__this_00;
  Settings_HumanInputSettings_o *__this_01;
  Settings_TitanInputSettings_o *__this_02;
  Settings_AnnieShifterInputSettings_o *__this_03;
  MethodInfo *method_00;
  Settings_InteractionInputSettings_o *__this_04;
  Settings_MapEditorInputSettings_o *__this_05;
  
  if (g_data_057ad86b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnnieShifterInputSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ErenShifterInputSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GeneralInputSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanInputSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InteractionInputSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorInputSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanInputSettings);
    g_data_057ad86b = '\x01';
  }
  __this_00 = (Settings_GeneralInputSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GeneralInputSettings);
  Settings_GeneralInputSettings___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).General = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).General);
  __this_01 = (Settings_HumanInputSettings_o *)il2cpp_runtime_helper_023052d0(_DAT_055798e8);
  Settings_HumanInputSettings___ctor(__this_01,(MethodInfo *)__this_00);
  (__this->fields).Human = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Human);
  __this_02 = (Settings_TitanInputSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TitanInputSettings);
  Settings_TitanInputSettings___ctor(__this_02,(MethodInfo *)__this_01);
  (__this->fields).Titan = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Titan);
  __this_03 = (Settings_AnnieShifterInputSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnnieShifterInputSettings);
  Settings_AnnieShifterInputSettings___ctor(__this_03,(MethodInfo *)0x0);
  (__this->fields).AnnieShifter = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AnnieShifter);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_ErenShifterInputSettings);
  Settings_ErenShifterInputSettings___ctor((Settings_ErenShifterInputSettings_o *)method_00,(MethodInfo *)0x0)
  ;
  (__this->fields).ErenShifter = (Settings_ErenShifterInputSettings_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ErenShifter);
  __this_04 = (Settings_InteractionInputSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InteractionInputSettings);
  Settings_InteractionInputSettings___ctor(__this_04,method_00);
  (__this->fields).Interaction = __this_04;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Interaction);
  __this_05 = (Settings_MapEditorInputSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapEditorInputSettings);
  Settings_MapEditorInputSettings___ctor(__this_05,(MethodInfo *)__this_04);
  (__this->fields).MapEditor = __this_05;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MapEditor);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)__this_05);
  return;
}


