// Type: Settings.InGameSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSet.cs
// --------------------------------

// Settings.InGameSet$$.ctor
// il2cpp: void Settings_InGameSet___ctor (Settings_InGameSet_o* __this, const MethodInfo* method);
// 0x408be70

void Settings_InGameSet___ctor(Settings_InGameSet_o *__this,MethodInfo *method)

{
  Settings_InGameGeneralSettings_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Settings_InGameTitanSettings_o *__this_01;
  Settings_InGameMiscSettings_o *__this_02;
  Settings_IntSetting_o *__this_03;
  
  if (g_data_057ac3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameAddonSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameGeneralSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMiscSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameModeSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameTitanSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ac3f5 = '\x01';
  }
  __this_00 = (Settings_InGameGeneralSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameGeneralSettings);
  Settings_InGameGeneralSettings___ctor(__this_00,method);
  (__this->fields).General = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).General);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameModeSettings);
  Settings_InGameModeSettings___ctor((Settings_InGameModeSettings_o *)method_00,(MethodInfo *)__this_00);
  (__this->fields).Mode = (Settings_InGameModeSettings_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Mode);
  method_01 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameAddonSettings);
  Settings_InGameAddonSettings___ctor((Settings_InGameAddonSettings_o *)method_01,method_00);
  (__this->fields).Addons = (Settings_InGameAddonSettings_o *)method_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Addons);
  __this_01 = (Settings_InGameTitanSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameTitanSettings);
  Settings_InGameTitanSettings___ctor(__this_01,method_01);
  (__this->fields).Titan = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Titan);
  __this_02 = (Settings_InGameMiscSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameMiscSettings);
  Settings_InGameMiscSettings___ctor(__this_02,(MethodInfo *)__this_01);
  (__this->fields).Misc = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Misc);
  __this_03 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(__this_03,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).WeatherIndex = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WeatherIndex);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


