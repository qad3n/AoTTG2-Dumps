// Type: Settings.ShifterCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/ShifterCustomSkinSet.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/CustomSkins/ShifterCustomSkinSet.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.ShifterCustomSkinSet$$.ctor
// il2cpp: void Settings_ShifterCustomSkinSet___ctor (Settings_ShifterCustomSkinSet_o* __this, const MethodInfo* method);
// 0x3d90290

void Settings_ShifterCustomSkinSet___ctor
               (Settings_ShifterCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (DAT_05702724 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05702724 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Eren = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Eren,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Annie = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Annie,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Colossal = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Colossal);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


