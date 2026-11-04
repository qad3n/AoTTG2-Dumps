// Type: Settings.InGameSet
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/InGameSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSet.cs
// --------------------------------

// Settings.InGameSet$$.ctor
// il2cpp: void Settings_InGameSet___ctor (Settings_InGameSet_o* __this, const MethodInfo* method);
// 0x181f1b700

void Settings_InGameSet___ctor(Settings_InGameSet_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  Il2CppObject *pIVar2;
  int32_t iVar3;
  Settings_InGameGeneralSettings_o *__this_00;
  Settings_InGameModeSettings_o *__this_01;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_02;
  Settings_ListSetting_StringSetting__o *pSVar4;
  Settings_InGameAddonSettings_o *__this_03;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_04;
  Settings_InGameTitanSettings_o *__this_05;
  Settings_InGameMiscSettings_o *__this_06;
  Settings_IntSetting_o *__this_07;
  Settings_StringSetting_o *pSVar5;
  Settings_BoolSetting_o *__this_08;
  
  if (Il2CppMethodInitialized_18434544b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameAddonSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameGeneralSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameMiscSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameModeSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameTitanSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_18434544b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameGeneralSettings);
  Settings_InGameGeneralSettings___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).General = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).General,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameModeSettings);
  if (Il2CppMethodInitialized_18434544a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    Il2CppMethodInitialized_18434544a = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
  (__this_01->fields).Current = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Current,__this_02);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar4,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this_01->fields).Names = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Names,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar4,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this_01->fields).Values = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Values,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar4,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this_01->fields).Types = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Types,pSVar4);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this_01,(MethodInfo *)0x0);
  (__this->fields).Mode = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Mode,__this_01);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameAddonSettings);
  if (Il2CppMethodInitialized_184345442 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    Il2CppMethodInitialized_184345442 = '\x01';
  }
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
  (__this_03->fields).Current = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).Current,__this_04);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar4,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this_03->fields).Names = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).Names,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar4,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this_03->fields).Values = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).Values,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar4,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this_03->fields).Types = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).Types,pSVar4);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this_03,(MethodInfo *)0x0);
  (__this->fields).Addons = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Addons,__this_03);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameTitanSettings);
  Settings_InGameTitanSettings___ctor(__this_05,(MethodInfo *)0x0);
  (__this->fields).Titan = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titan,__this_05);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameMiscSettings);
  Settings_InGameMiscSettings___ctor(__this_06,(MethodInfo *)0x0);
  (__this->fields).Misc = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Misc,__this_06);
  __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (__this_07->fields).MinValue = -0x80000000;
  (__this_07->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this_07,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = __this_07->klass;
  (__this_07->fields).MinValue = -0x80000000;
  (__this_07->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (__this_07,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (__this_07->fields).DefaultValue = iVar3;
  (*(__this_07->klass->vtable)._4_SetDefault.methodPtr)
            (__this_07,(__this_07->klass->vtable)._4_SetDefault.method);
  (__this->fields).WeatherIndex = __this_07;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeatherIndex,__this_07);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ExperienceName = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ExperienceName,pSVar5);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ExperienceCategory = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ExperienceCategory,pSVar5);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ExperienceSubcategory = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ExperienceSubcategory,pSVar5);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ExperienceVariant = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ExperienceVariant,pSVar5);
  __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)__this_08,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).Sandbox = __this_08;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sandbox,__this_08);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


