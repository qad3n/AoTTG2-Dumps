// Type: Settings.AbilitySettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/AbilitySettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/AbilitySettings.cs
// --------------------------------

// Settings.AbilitySettings$$get_FileName
// il2cpp: System_String_o* Settings_AbilitySettings__get_FileName (Settings_AbilitySettings_o* __this, const MethodInfo* method);
// 0x4084c10

System_String_o *
Settings_AbilitySettings__get_FileName(Settings_AbilitySettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac3ca == '\0') {
    il2cpp_runtime_helper_023445d0(&"Ability_001.json");
    g_data_057ac3ca = '\x01';
  }
  return "Ability_001.json";
}


// Settings.AbilitySettings$$.ctor
// il2cpp: void Settings_AbilitySettings___ctor (Settings_AbilitySettings_o* __this, const MethodInfo* method);
// 0x4084c40

void Settings_AbilitySettings___ctor(Settings_AbilitySettings_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  Settings_ColorSetting_o *__this_01;
  Settings_IntSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  
  if (g_data_057ac3cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ac3cb = '\x01';
  }
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(__this_00,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  __this_01 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor_40fa620(__this_01,__this_00,0x80,(MethodInfo *)0x0);
  (__this->fields).BombColor = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).BombColor,__this_01);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,6,0,10,(MethodInfo *)0x0);
  (__this->fields).BombRadius = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).BombRadius,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,4,0,10,(MethodInfo *)0x0);
  (__this->fields).BombRange = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).BombRange,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,6,0,10,(MethodInfo *)0x0);
  (__this->fields).BombSpeed = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).BombSpeed,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,4,0,10,(MethodInfo *)0x0);
  (__this->fields).BombCooldown = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).BombCooldown);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).CursorCooldown = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CursorCooldown);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).ShowBombColors = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShowBombColors);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).UseOldEffect = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).UseOldEffect);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).BombCollision = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).BombCollision);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


