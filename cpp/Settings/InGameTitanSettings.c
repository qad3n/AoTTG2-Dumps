// Type: Settings.InGameTitanSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/InGameTitanSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/InGameTitanSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.InGameTitanSettings$$.ctor
// il2cpp: void Settings_InGameTitanSettings___ctor (Settings_InGameTitanSettings_o* __this, const MethodInfo* method);
// 0x3d95e40

void Settings_InGameTitanSettings___ctor(Settings_InGameTitanSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (DAT_05702743 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    DAT_05702743 = '\x01';
  }
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnEnabled = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitanSpawnEnabled);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,20.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnNormal = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).TitanSpawnNormal);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,20.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnAbnormal = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).TitanSpawnAbnormal);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnJumper = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).TitanSpawnJumper);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnCrawler = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).TitanSpawnCrawler);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnThrower = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).TitanSpawnThrower);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnPunk = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).TitanSpawnPunk);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanSizeEnabled = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitanSizeEnabled);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,1.0,0.1,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSizeMin = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).TitanSizeMin);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,3.0,0.1,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSizeMax = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).TitanSizeMax);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar3,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitanHealthMode = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).TitanHealthMode,pSVar3);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar3,100,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitanHealthMin = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).TitanHealthMin,pSVar3);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar3,200,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitanHealthMax = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).TitanHealthMax);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanArmorEnabled = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitanArmorEnabled);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanArmorCrawlerEnabled = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitanArmorCrawlerEnabled,pSVar1);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar3,1000,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitanArmor = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).TitanArmor);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).TitanStandardModels = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitanStandardModels,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).TitanSmartMovement = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitanSmartMovement);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


