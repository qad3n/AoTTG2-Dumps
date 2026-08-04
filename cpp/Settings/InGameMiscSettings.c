// Type: Settings.InGameMiscSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameMiscSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameMiscSettings.cs
// --------------------------------

// Settings.InGameMiscSettings$$.ctor
// il2cpp: void Settings_InGameMiscSettings___ctor (Settings_InGameMiscSettings_o* __this, const MethodInfo* method);
// 0x408aef0

void Settings_InGameMiscSettings___ctor(Settings_InGameMiscSettings_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_IntSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ac3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3f1 = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).PVP = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).PVP);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).EndlessRespawnEnabled = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).EndlessRespawnEnabled);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,5.0,1.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).EndlessRespawnTime = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).EndlessRespawnTime);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,60.0,0.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).AllowSpawnTime = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowSpawnTime);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,3.0,0.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).InvincibilityTime = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).InvincibilityTime);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).ThunderspearPVP = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ThunderspearPVP);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).APGPVP = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).APGPVP,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowBlades = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowBlades,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowAHSS = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowAHSS,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowAPG = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowAPG,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowThunderspears = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowThunderspears,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowPlayerTitans = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowPlayerTitans,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowShifterSpecials = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowShifterSpecials);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).AllowShifters = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowShifters);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).AllowVoteKicking = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowVoteKicking);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).Horses = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Horses,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).HorsebackCombat = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HorsebackCombat,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).GunsAirReload = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GunsAirReload,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowStock = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AllowStock,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).ClearKDROnRestart = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ClearKDROnRestart);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).GlobalMinimapDisable = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GlobalMinimapDisable);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).RealismMode = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RealismMode);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,130.0,50.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).RealismImpactThreshold = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RealismImpactThreshold);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,120.0,0.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).RealismMaxReel = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RealismMaxReel);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,250.0,100.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).RealismMaxSpeed = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RealismMaxSpeed);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HookDamageMultiplier = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HookDamageMultiplier,pSVar1);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).CustomStats = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CustomStats,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).CustomPerks = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CustomPerks,pSVar2);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,defaultValue,1000,(MethodInfo *)0x0);
  (__this->fields).Motd = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Motd,__this_00);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).VoiceChat = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).VoiceChat);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,20.0,1.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).ProximityMinDistance = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ProximityMinDistance);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,80.0,1.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).ProximityMaxDistance = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ProximityMaxDistance,pSVar3);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,1,1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumanHealth = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HumanHealth,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,1000,1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ShifterHealth = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ShifterHealth);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).AccountRequired = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AccountRequired);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


