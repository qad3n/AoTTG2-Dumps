// Type: Settings.InGameCharacterSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameCharacterSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameCharacterSettings.cs
// --------------------------------

// Settings.InGameCharacterSettings$$.ctor
// il2cpp: void Settings_InGameCharacterSettings___ctor (Settings_InGameCharacterSettings_o* __this, const MethodInfo* method);
// 0x408a990

void Settings_InGameCharacterSettings___ctor(Settings_InGameCharacterSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  
  if (g_data_057ac3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Blue");
    g_data_057ac3ee = '\x01';
  }
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ChooseStatus = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ChooseStatus,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CharacterType = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CharacterType,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Loadout = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Loadout,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Special = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Special);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CustomSet = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CustomSet);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Costume = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Costume,pSVar2);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,"Blue",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Team = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Team);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


