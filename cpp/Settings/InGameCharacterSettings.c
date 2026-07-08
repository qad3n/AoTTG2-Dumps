// Type: Settings.InGameCharacterSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/InGameCharacterSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/InGameCharacterSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.InGameCharacterSettings$$.ctor
// il2cpp: void Settings_InGameCharacterSettings___ctor (Settings_InGameCharacterSettings_o* __this, const MethodInfo* method);
// 0x3d947e0

void Settings_InGameCharacterSettings___ctor
               (Settings_InGameCharacterSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  
  if (DAT_05702739 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"Blue");
    DAT_05702739 = '\x01';
  }
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ChooseStatus = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).ChooseStatus,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CharacterType = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).CharacterType,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Loadout = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Loadout,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Special = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Special);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CustomSet = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).CustomSet);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Costume = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Costume,pSVar2);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar3,"Blue",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Team = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Team);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


