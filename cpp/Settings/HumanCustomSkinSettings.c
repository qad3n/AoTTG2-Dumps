// Type: Settings.HumanCustomSkinSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/HumanCustomSkinSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/CustomSkins/HumanCustomSkinSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.HumanCustomSkinSettings$$.ctor
// il2cpp: void Settings_HumanCustomSkinSettings___ctor (Settings_HumanCustomSkinSettings_o* __this, const MethodInfo* method);
// 0x3d8f880

void Settings_HumanCustomSkinSettings___ctor
               (Settings_HumanCustomSkinSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (DAT_05702723 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCustomSkinSettings_1_HumanCustomSkinSet);
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    DAT_05702723 = '\x01';
  }
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).GasEnabled = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).GasEnabled,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).HookEnabled = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HookEnabled,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).SetSpecificSkinsEnabled = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).SetSpecificSkinsEnabled,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).GlobalSkinOverridesEnabled = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).GlobalSkinOverridesEnabled);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SkinMode = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).SkinMode);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SelectedCharacterIndex = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).SelectedCharacterIndex);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).LastGlobalPresetIndex = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).LastGlobalPresetIndex,pSVar2);
  Settings_BaseCustomSkinSettings<object>___ctor
            ((Settings_BaseCustomSkinSettings_T__o *)__this,MethodInfo_BaseCustomSkinSettings_1_HumanCustomSkinSet);
  return;
}


