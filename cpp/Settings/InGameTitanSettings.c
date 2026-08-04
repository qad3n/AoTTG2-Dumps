// Type: Settings.InGameTitanSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameTitanSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameTitanSettings.cs
// --------------------------------

// Settings.InGameTitanSettings$$.ctor
// il2cpp: void Settings_InGameTitanSettings___ctor (Settings_InGameTitanSettings_o* __this, const MethodInfo* method);
// 0x408bff0

void Settings_InGameTitanSettings___ctor(Settings_InGameTitanSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (g_data_057ac3f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ac3f8 = '\x01';
  }
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnEnabled = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSpawnEnabled);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,20.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnNormal = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSpawnNormal);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,20.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnAbnormal = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSpawnAbnormal);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnJumper = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSpawnJumper);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnCrawler = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSpawnCrawler);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnThrower = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSpawnThrower);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnPunk = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSpawnPunk);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanSizeEnabled = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSizeEnabled);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,1.0,0.1,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSizeMin = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSizeMin);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,3.0,0.1,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSizeMax = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSizeMax);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar3,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitanHealthMode = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanHealthMode,pSVar3);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar3,100,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitanHealthMin = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanHealthMin,pSVar3);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar3,200,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitanHealthMax = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanHealthMax);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanArmorEnabled = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanArmorEnabled);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanArmorCrawlerEnabled = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanArmorCrawlerEnabled,pSVar1);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar3,1000,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitanArmor = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanArmor);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanStandardModels = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanStandardModels,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).TitanSmartMovement = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanSmartMovement);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


