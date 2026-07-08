// Type: GameProgress.GameStatContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/GameStatContainer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/GameStatContainer.cs  [prior source available (delta unverified)]
// --------------------------------

// GameProgress.GameStatContainer$$.ctor
// il2cpp: void GameProgress_GameStatContainer___ctor (GameProgress_GameStatContainer_o* __this, const MethodInfo* method);
// 0x420afa0

void GameProgress_GameStatContainer___ctor
               (GameProgress_GameStatContainer_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  GameProgress_DamageSetting_o *__this_00;
  
  if (DAT_05705048 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DamageSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    DAT_05705048 = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Level = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Level);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Exp = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Exp);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).PlayTime = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).PlayTime);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar2,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).HighestSpeed = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).HighestSpeed);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledTotal = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitansKilledTotal);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledBlade = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitansKilledBlade);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledAHSS = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitansKilledAHSS);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledThunderspear = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitansKilledThunderspear);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledAPG = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitansKilledAPG);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledOther = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TitansKilledOther);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledTotal = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HumansKilledTotal);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledBlade = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HumansKilledBlade);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledAHSS = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HumansKilledAHSS);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledThunderspear = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HumansKilledThunderspear);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledAPG = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HumansKilledAPG);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledTitan = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HumansKilledTitan);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledOther = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HumansKilledOther);
  __this_00 = (GameProgress_DamageSetting_o *)il2cpp_runtime_glue(TypeInfo_DamageSetting);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this_00,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
            (__this_00,(__this_00->klass->vtable)._4_SetDefault.method);
  (__this->fields).Damage = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Damage);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


