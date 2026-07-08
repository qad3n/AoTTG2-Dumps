// Type: Settings.TitanCustomSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/TitanCustomSet.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/TitanCustomSet.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.TitanCustomSet$$.ctor
// il2cpp: void Settings_TitanCustomSet___ctor (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x3d96340

void Settings_TitanCustomSet___ctor(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  Utility_Color255_o *pUVar2;
  Settings_ColorSetting_o *pSVar3;
  
  if (DAT_05702744 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"HairM1");
    DAT_05702744 = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Head = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Head);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Body = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Body);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Eye = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Eye,pSVar1);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,"HairM1",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Hair = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Hair,__this_00);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar3 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).SkinColor = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).SkinColor,pSVar3);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,0x80,0x80,0x80,0xff,(MethodInfo *)0x0);
  pSVar3 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).HairColor = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).HairColor);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


