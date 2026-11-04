// Type: Settings.InGameTitanSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/InGameTitanSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameTitanSettings.cs
// --------------------------------

// Settings.InGameTitanSettings$$.ctor
// il2cpp: void Settings_InGameTitanSettings___ctor (Settings_InGameTitanSettings_o* __this, const MethodInfo* method);
// 0x181f1bde0

void Settings_InGameTitanSettings___ctor(Settings_InGameTitanSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  int32_t iVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_18434544e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_18434544e = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanSpawnEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnEnabled,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,20.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnNormal = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnNormal,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,20.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnAbnormal = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnAbnormal,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnJumper = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnJumper,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnCrawler = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnCrawler,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnThrower = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnThrower,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,15.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSpawnPunk = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnPunk,pSVar4);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanSizeEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSizeEnabled,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,1.0,0.1,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSizeMin = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSizeMin,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,3.0,0.1,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanSizeMax = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSizeMax,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar5->fields).MinValue = -0x80000000;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar5,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar5->klass;
  (pSVar5->fields).MinValue = 0;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar5,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = iVar2;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHealthMode = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHealthMode,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar5->fields).MinValue = -0x80000000;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar5,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar5->klass;
  (pSVar5->fields).MinValue = 0;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar5,100,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = iVar2;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHealthMin = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHealthMin,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar5->fields).MinValue = -0x80000000;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar5,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar5->klass;
  (pSVar5->fields).MinValue = 0;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar5,200,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = iVar2;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHealthMax = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHealthMax,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar5->fields).MinValue = -0x80000000;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar5,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar5->klass;
  (pSVar5->fields).MinValue = 0;
  (pSVar5->fields).MaxValue = 1;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar5,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = iVar2;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHeadMode = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHeadMode,pSVar5);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.75,0.1,10.0,(MethodInfo *)0x0);
  (__this->fields).TitanHeadRandomMin = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHeadRandomMin,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,1.25,0.1,10.0,(MethodInfo *)0x0);
  (__this->fields).TitanHeadRandomMax = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHeadRandomMax,pSVar4);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanDecapitationEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanDecapitationEnabled,pSVar3);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar5->fields).MinValue = -0x80000000;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar5,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar5->klass;
  (pSVar5->fields).MinValue = 0;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar5,1000,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = iVar2;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanDecapitationMinDamage = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanDecapitationMinDamage,pSVar5);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanArmorEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanArmorEnabled,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanArmorCrawlerEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanArmorCrawlerEnabled,pSVar3);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar5->fields).MinValue = -0x80000000;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar5,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar5->klass;
  (pSVar5->fields).MinValue = 0;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar5,1000,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = iVar2;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanArmor = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanArmor,pSVar5);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanStandardModels = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanStandardModels,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar3,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanSmartMovement = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSmartMovement,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,20.0,0.0,100.0,(MethodInfo *)0x0);
  (__this->fields).TitanChanceWarded = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanChanceWarded,pSVar4);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar3,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanWardedEnabled = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanWardedEnabled,pSVar3);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


