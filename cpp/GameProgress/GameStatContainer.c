// Type: GameProgress.GameStatContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/GameStatContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatContainer.cs
// --------------------------------

// GameProgress.GameStatContainer$$.ctor
// il2cpp: void GameProgress_GameStatContainer___ctor (GameProgress_GameStatContainer_o* __this, const MethodInfo* method);
// 0x453d5f0

void GameProgress_GameStatContainer___ctor(GameProgress_GameStatContainer_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  GameProgress_DamageSetting_o *__this_00;
  
  if (g_data_057aef23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DamageSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057aef23 = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Level = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Level);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Exp = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Exp);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).PlayTime = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).PlayTime);
  pSVar2 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar2,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).HighestSpeed = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HighestSpeed);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledTotal = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitansKilledTotal);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledBlade = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitansKilledBlade);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledAHSS = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitansKilledAHSS);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledThunderspear = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitansKilledThunderspear);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledAPG = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitansKilledAPG);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TitansKilledOther = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitansKilledOther);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledTotal = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HumansKilledTotal);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledBlade = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HumansKilledBlade);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledAHSS = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HumansKilledAHSS);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledThunderspear = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HumansKilledThunderspear);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledAPG = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HumansKilledAPG);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledTitan = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HumansKilledTitan);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumansKilledOther = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HumansKilledOther);
  __this_00 = (GameProgress_DamageSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DamageSetting);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this_00,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
            (__this_00,(__this_00->klass->vtable)._4_SetDefault.method);
  (__this->fields).Damage = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Damage);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


