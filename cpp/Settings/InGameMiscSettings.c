// Type: Settings.InGameMiscSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/InGameMiscSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/InGame/InGameMiscSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.InGameMiscSettings$$.ctor
// il2cpp: void Settings_InGameMiscSettings___ctor (Settings_InGameMiscSettings_o* __this, const MethodInfo* method);
// 0x3d94d40

void Settings_InGameMiscSettings___ctor(Settings_InGameMiscSettings_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_IntSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_StringSetting_o *__this_00;
  
  if (DAT_0570273c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_0570273c = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).PVP = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).PVP);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).EndlessRespawnEnabled = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).EndlessRespawnEnabled);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,5.0,1.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).EndlessRespawnTime = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).EndlessRespawnTime);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,60.0,0.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).AllowSpawnTime = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).AllowSpawnTime);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,3.0,0.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).InvincibilityTime = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).InvincibilityTime);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).ThunderspearPVP = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).ThunderspearPVP);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).APGPVP = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).APGPVP,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowBlades = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AllowBlades,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowAHSS = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AllowAHSS,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowAPG = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AllowAPG,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowThunderspears = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AllowThunderspears,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowPlayerTitans = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AllowPlayerTitans,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowShifterSpecials = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AllowShifterSpecials);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).AllowShifters = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AllowShifters);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).AllowVoteKicking = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AllowVoteKicking);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).Horses = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Horses,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).HorsebackCombat = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).HorsebackCombat,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).GunsAirReload = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).GunsAirReload,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).AllowStock = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AllowStock,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).ClearKDROnRestart = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).ClearKDROnRestart);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).GlobalMinimapDisable = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).GlobalMinimapDisable);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).RealismMode = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).RealismMode);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,130.0,50.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).RealismImpactThreshold = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).RealismImpactThreshold);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,120.0,0.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).RealismMaxReel = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).RealismMaxReel);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,250.0,100.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).RealismMaxSpeed = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).RealismMaxSpeed);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HookDamageMultiplier = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HookDamageMultiplier,pSVar1);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).CustomStats = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).CustomStats,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields).CustomPerks = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).CustomPerks,pSVar2);
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,defaultValue,1000,(MethodInfo *)0x0);
  (__this->fields).Motd = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Motd,__this_00);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).VoiceChat = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).VoiceChat);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,20.0,1.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).ProximityMinDistance = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).ProximityMinDistance);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,80.0,1.0,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).ProximityMaxDistance = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).ProximityMaxDistance,pSVar3);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,1,1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HumanHealth = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).HumanHealth,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,1000,1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ShifterHealth = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).ShifterHealth);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,0,(MethodInfo *)0x0);
  (__this->fields).AccountRequired = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AccountRequired);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


