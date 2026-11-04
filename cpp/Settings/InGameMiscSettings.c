// Type: Settings.InGameMiscSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/InGameMiscSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameMiscSettings.cs
// --------------------------------

// Settings.InGameMiscSettings$$.ctor
// il2cpp: void Settings_InGameMiscSettings___ctor (Settings_InGameMiscSettings_o* __this, const MethodInfo* method);
// 0x181f19f90

void Settings_InGameMiscSettings___ctor(Settings_InGameMiscSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  Settings_FloatSetting_c *pSVar2;
  Il2CppObject *defaultValue;
  int32_t iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  Settings_StringSetting_o *__this_00;
  float fVar7;
  
  if (Il2CppMethodInitialized_184345447 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184345447 = '\x01';
  }
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar4,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).PVP = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PVP,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).EndlessRespawnEnabled = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).EndlessRespawnEnabled,pSVar5);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar6->fields).MinValue = -3.4028235e+38;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).MinValue = 1.0;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  fVar7 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,5.0,(pSVar2->vtable)._11_SanitizeValue.method);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).DefaultValue = fVar7;
  (*(pSVar2->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar2->vtable)._4_SetDefault.method);
  (__this->fields).EndlessRespawnTime = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).EndlessRespawnTime,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar6->fields).MinValue = -3.4028235e+38;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0.0;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  fVar7 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,60.0,(pSVar2->vtable)._11_SanitizeValue.method);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).DefaultValue = fVar7;
  (*(pSVar2->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar2->vtable)._4_SetDefault.method);
  (__this->fields).AllowSpawnTime = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowSpawnTime,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar6->fields).MinValue = -3.4028235e+38;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0.0;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  fVar7 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,3.0,(pSVar2->vtable)._11_SanitizeValue.method);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).DefaultValue = fVar7;
  (*(pSVar2->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar2->vtable)._4_SetDefault.method);
  (__this->fields).InvincibilityTime = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InvincibilityTime,pSVar6);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ThunderspearPVP = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ThunderspearPVP,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).APGPVP = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).APGPVP,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowBlades = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowBlades,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowAHSS = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowAHSS,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowAPG = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowAPG,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowThunderspears = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowThunderspears,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowUnarmed = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowUnarmed,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowCivilian = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowCivilian,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowPlayerTitans = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowPlayerTitans,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowShifterSpecials = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowShifterSpecials,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowShifters = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowShifters,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowVoteKicking = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowVoteKicking,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).Horses = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Horses,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).HorsebackCombat = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HorsebackCombat,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).DestructibleEnvironment = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DestructibleEnvironment,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).GunsAirReload = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GunsAirReload,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AllowStock = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllowStock,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ClearKDROnRestart = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ClearKDROnRestart,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).GlobalMinimapDisable = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GlobalMinimapDisable,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).RealismMode = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RealismMode,pSVar5);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar6->fields).MinValue = -3.4028235e+38;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).MinValue = 50.0;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  fVar7 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,130.0,(pSVar2->vtable)._11_SanitizeValue.method);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).DefaultValue = fVar7;
  (*(pSVar2->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar2->vtable)._4_SetDefault.method);
  (__this->fields).RealismImpactThreshold = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RealismImpactThreshold,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar6->fields).MinValue = -3.4028235e+38;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).MinValue = 0.0;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  fVar7 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,120.0,(pSVar2->vtable)._11_SanitizeValue.method);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).DefaultValue = fVar7;
  (*(pSVar2->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar2->vtable)._4_SetDefault.method);
  (__this->fields).RealismMaxReel = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RealismMaxReel,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar6->fields).MinValue = -3.4028235e+38;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).MinValue = 100.0;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  fVar7 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,250.0,(pSVar2->vtable)._11_SanitizeValue.method);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).DefaultValue = fVar7;
  (*(pSVar2->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar2->vtable)._4_SetDefault.method);
  (__this->fields).RealismMaxSpeed = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RealismMaxSpeed,pSVar6);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar4,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).HookDamageMultiplier = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HookDamageMultiplier,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).CustomStats = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomStats,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).CustomPerks = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomPerks,pSVar5);
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (__this_00->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this_00,defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this_00->fields).MaxLength = 1000;
  (__this->fields).Motd = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Motd,__this_00);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar4,1,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).VoiceChat = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChat,pSVar4);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar6->fields).MinValue = -3.4028235e+38;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).MinValue = 1.0;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  fVar7 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,20.0,(pSVar2->vtable)._11_SanitizeValue.method);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).DefaultValue = fVar7;
  (*(pSVar2->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar2->vtable)._4_SetDefault.method);
  (__this->fields).ProximityMinDistance = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ProximityMinDistance,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar6->fields).MinValue = -3.4028235e+38;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).MinValue = 1.0;
  (pSVar6->fields).MaxValue = 3.4028235e+38;
  fVar7 = (*(pSVar2->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar6,80.0,(pSVar2->vtable)._11_SanitizeValue.method);
  pSVar2 = pSVar6->klass;
  (pSVar6->fields).DefaultValue = fVar7;
  (*(pSVar2->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar2->vtable)._4_SetDefault.method);
  (__this->fields).ProximityMaxDistance = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ProximityMaxDistance,pSVar6);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = 1;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar4,1,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).HumanHealth = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HumanHealth,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = 1;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,1000,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).ShifterHealth = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShifterHealth,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).AccountRequired = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AccountRequired,pSVar5);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


