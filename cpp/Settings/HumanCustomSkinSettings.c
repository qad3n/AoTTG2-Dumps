// Type: Settings.HumanCustomSkinSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HumanCustomSkinSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/HumanCustomSkinSettings.cs
// --------------------------------

// Settings.HumanCustomSkinSettings$$.ctor
// il2cpp: void Settings_HumanCustomSkinSettings___ctor (Settings_HumanCustomSkinSettings_o* __this, const MethodInfo* method);
// 0x4085650

void Settings_HumanCustomSkinSettings___ctor(Settings_HumanCustomSkinSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (g_data_057ac3d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCustomSkinSettings_1_HumanCustomSkinSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ac3d8 = '\x01';
  }
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).GasEnabled = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GasEnabled,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).HookEnabled = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HookEnabled,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).SetSpecificSkinsEnabled = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SetSpecificSkinsEnabled,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).GlobalSkinOverridesEnabled = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GlobalSkinOverridesEnabled);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SkinMode = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SkinMode);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SelectedCharacterIndex = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SelectedCharacterIndex);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).LastGlobalPresetIndex = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LastGlobalPresetIndex,pSVar2);
  Settings_BaseCustomSkinSettings_object____ctor((Settings_BaseCustomSkinSettings_T__o *)__this,MethodInfo_BaseCustomSkinSettings_1_HumanCustomSkinSet);
  return;
}


