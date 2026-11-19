// Type: Settings.InGameMiscSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Settings/InGameMiscSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameMiscSettings.cs
// --------------------------------

// Settings.InGameMiscSettings$$.ctor
// il2cpp: void Settings_InGameMiscSettings___ctor (Settings_InGameMiscSettings_o* __this, const MethodInfo* method);
// 0x5b472d0

void Settings_InGameMiscSettings___ctor(Settings_InGameMiscSettings_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  int32_t iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_StringSetting_o *__this_00;
  MethodInfo *method_00;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754728f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_0754728f = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).PVP = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PVP);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).EndlessRespawnEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).EndlessRespawnEnabled);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar4,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar4->fields).MinValue = 1.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,5.0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).EndlessRespawnTime = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).EndlessRespawnTime);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar4,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar4->fields).MinValue = 0.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,60.0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).AllowSpawnTime = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowSpawnTime);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar4,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar4->fields).MinValue = 0.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,3.0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).InvincibilityTime = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InvincibilityTime);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ThunderspearPVP = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ThunderspearPVP);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).APGPVP = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).APGPVP);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowBlades = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowBlades);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowAHSS = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowAHSS);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowAPG = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowAPG);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowThunderspears = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowThunderspears);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowUnarmed = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowUnarmed);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowCivilian = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowCivilian);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowPlayerTitans = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowPlayerTitans);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowShifterSpecials = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowShifterSpecials);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowShifters = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowShifters);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowVoteKicking = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowVoteKicking);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).Horses = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Horses);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).HorsebackCombat = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HorsebackCombat);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).DestructibleEnvironment = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DestructibleEnvironment);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).GunsAirReload = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GunsAirReload);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowStock = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowStock);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ClearKDROnRestart = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ClearKDROnRestart);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).GlobalMinimapDisable = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GlobalMinimapDisable);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).RealismMode = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RealismMode);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar4,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar4->fields).MinValue = 50.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,130.0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).RealismImpactThreshold = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RealismImpactThreshold);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar4,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar4->fields).MinValue = 0.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,120.0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).RealismMaxReel = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RealismMaxReel);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar4,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar4->fields).MinValue = 100.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,250.0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).RealismMaxSpeed = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RealismMaxSpeed);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 0;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,0,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).HookDamageMultiplier = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HookDamageMultiplier);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).CustomStats = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomStats);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).CustomPerks = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomPerks);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,defaultValue,1000,(MethodInfo *)0x0);
  (__this->fields).Motd = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Motd);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,2,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).VoiceChat = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChat);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar4,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar4->fields).MinValue = 1.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,20.0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).ProximityMinDistance = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ProximityMinDistance);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar4->fields).MinValue = -3.4028235e+38;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar4,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar4->fields).MinValue = 1.0;
  (pSVar4->fields).MaxValue = 3.4028235e+38;
  fVar5 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,80.0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = fVar5;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).ProximityMaxDistance = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ProximityMaxDistance);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 1;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).HumanHealth = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumanHealth);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 1;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1000,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShifterHealth = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShifterHealth);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = 1;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).HorseHealth = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HorseHealth);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)method_00,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AccountRequired = (Settings_BoolSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AccountRequired);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,method_00);
  return;
}


