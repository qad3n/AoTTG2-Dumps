// Type: Settings.InGameSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/InGameSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSet.cs
// --------------------------------

// Settings.InGameSet$$.ctor
// il2cpp: void Settings_InGameSet___ctor (Settings_InGameSet_o* __this, const MethodInfo* method);
// 0x5b48a00

void Settings_InGameSet___ctor(Settings_InGameSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iVar2;
  Settings_InGameGeneralSettings_o *__this_00;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  Settings_InGameTitanSettings_o *__this_01;
  Settings_InGameMiscSettings_o *__this_02;
  Settings_IntSetting_o *__this_03;
  Settings_StringSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547293 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameAddonSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameGeneralSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameMiscSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameModeSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameTitanSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547293 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameGeneralSettings);
  Settings_InGameGeneralSettings___ctor(__this_00,method);
  (__this->fields).General = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).General);
  pMVar3 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameModeSettings);
  Settings_InGameModeSettings___ctor((Settings_InGameModeSettings_o *)pMVar3,(MethodInfo *)__this_00);
  (__this->fields).Mode = (Settings_InGameModeSettings_o *)pMVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Mode);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameAddonSettings);
  Settings_InGameAddonSettings___ctor((Settings_InGameAddonSettings_o *)method_00,pMVar3);
  (__this->fields).Addons = (Settings_InGameAddonSettings_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Addons);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameTitanSettings);
  Settings_InGameTitanSettings___ctor(__this_01,method_00);
  (__this->fields).Titan = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titan);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameMiscSettings);
  Settings_InGameMiscSettings___ctor(__this_02,(MethodInfo *)__this_01);
  (__this->fields).Misc = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Misc);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (__this_03->fields).MinValue = -0x80000000;
  (__this_03->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)__this_03,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (__this_03->fields).MinValue = -0x80000000;
  (__this_03->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(__this_03->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this_03,0,(__this_03->klass->vtable)._11_SanitizeValue.method);
  (__this_03->fields).DefaultValue = iVar2;
  (*(__this_03->klass->vtable)._4_SetDefault.methodPtr)
            (__this_03,(__this_03->klass->vtable)._4_SetDefault.method);
  (__this->fields).WeatherIndex = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeatherIndex);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ExperienceName = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ExperienceName);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ExperienceCategory = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ExperienceCategory);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ExperienceSubcategory = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ExperienceSubcategory);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ExperienceVariant = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ExperienceVariant);
  pMVar3 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pMVar3,true,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).Sandbox = (Settings_BoolSetting_o *)pMVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sandbox);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,pMVar3);
  return;
}


