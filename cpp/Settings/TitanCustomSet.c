// Type: Settings.TitanCustomSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/TitanCustomSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSet.cs
// --------------------------------

// Settings.TitanCustomSet$$.ctor
// il2cpp: void Settings_TitanCustomSet___ctor (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x408c4f0

void Settings_TitanCustomSet___ctor(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  Utility_Color255_o *pUVar2;
  Settings_ColorSetting_o *pSVar3;
  
  if (g_data_057ac3f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"HairM1");
    g_data_057ac3f9 = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Head = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Head);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Body = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Body);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Eye = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Eye,pSVar1);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,"HairM1",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Hair = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Hair,__this_00);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar3 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor_40fa620(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).SkinColor = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SkinColor,pSVar3);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,0x80,0x80,0x80,0xff,(MethodInfo *)0x0);
  pSVar3 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor_40fa620(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).HairColor = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HairColor);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


