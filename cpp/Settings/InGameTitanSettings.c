// Type: Settings.InGameTitanSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/InGameTitanSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameTitanSettings.cs
// --------------------------------

// Settings.InGameTitanSettings$$.ctor
// il2cpp: void Settings_InGameTitanSettings___ctor (Settings_InGameTitanSettings_o* __this, const MethodInfo* method);
// 0x5b48d70

void Settings_InGameTitanSettings___ctor(Settings_InGameTitanSettings_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  MethodInfo *method_00;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547296 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_07547296 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar2,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanSpawnEnabled = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnEnabled);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,20.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanSpawnNormal = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnNormal);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,20.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanSpawnAbnormal = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnAbnormal);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,15.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanSpawnJumper = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnJumper);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,15.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanSpawnCrawler = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnCrawler);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,15.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanSpawnThrower = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnThrower);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,15.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanSpawnPunk = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSpawnPunk);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar2,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanSizeEnabled = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSizeEnabled);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.1;
  (pSVar3->fields).MaxValue = 100.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,1.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanSizeMin = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSizeMin);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.1;
  (pSVar3->fields).MaxValue = 100.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,3.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanSizeMax = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSizeMax);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar4,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar1;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHealthMode = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHealthMode);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar4,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,100,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar1;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHealthMin = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHealthMin);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar4,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,200,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar1;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHealthMax = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHealthMax);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar4,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 1;
  iVar1 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,0,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar1;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHeadMode = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHeadMode);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.1;
  (pSVar3->fields).MaxValue = 10.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0.75,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHeadRandomMin = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHeadRandomMin);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.1;
  (pSVar3->fields).MaxValue = 10.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,1.25,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanHeadRandomMax = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanHeadRandomMax);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar2,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanDecapitationEnabled = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanDecapitationEnabled);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar4,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,1000,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar1;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanDecapitationMinDamage = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanDecapitationMinDamage);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar2,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanArmorEnabled = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanArmorEnabled);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar2,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanArmorCrawlerEnabled = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanArmorCrawlerEnabled);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar4,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar4->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,1000,(pSVar4->klass->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar1;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanArmor = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanArmor);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar2,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanStandardModels = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanStandardModels);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar2,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanSmartMovement = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanSmartMovement);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100.0;
  fVar5 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,20.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar5;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).TitanChanceWarded = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanChanceWarded);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)method_00,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanWardedEnabled = (Settings_BoolSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanWardedEnabled);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,method_00);
  return;
}


