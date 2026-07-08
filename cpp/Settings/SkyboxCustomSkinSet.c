// Type: Settings.SkyboxCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/SkyboxCustomSkinSet.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/CustomSkins/SkyboxCustomSkinSet.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.SkyboxCustomSkinSet$$.ctor
// il2cpp: void Settings_SkyboxCustomSkinSet___ctor (Settings_SkyboxCustomSkinSet_o* __this, const MethodInfo* method);
// 0x3d903a0

void Settings_SkyboxCustomSkinSet___ctor(Settings_SkyboxCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (DAT_05702725 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05702725 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Front = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Front,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Back = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Back,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Left = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Left,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Right = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Right,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Up = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Up,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Down = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Down);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


