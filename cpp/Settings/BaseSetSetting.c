// Type: Settings.BaseSetSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/BaseSetSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetSetting.cs
// --------------------------------

// Settings.BaseSetSetting$$.ctor
// il2cpp: void Settings_BaseSetSetting___ctor (Settings_BaseSetSetting_o* __this, const MethodInfo* method);
// 0x181f0e9e0

void Settings_BaseSetSetting___ctor(Settings_BaseSetSetting_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  System_Guid_o *pSVar2;
  System_String_o *pSVar3;
  System_Guid_Fields local_28;
  System_Guid_o local_18;
  
  if (Il2CppMethodInitialized_18434547e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Set 1");
    Il2CppMethodInitialized_18434547e = '\x01';
  }
  local_28._a = 0;
  local_28._b = 0;
  local_28._c = 0;
  local_28._d = '\0';
  local_28._e = '\0';
  local_28._f = '\0';
  local_28._g = '\0';
  local_28._h = '\0';
  local_28._i = '\0';
  local_28._j = '\0';
  local_28._k = '\0';
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar3 = "Set 1";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar1->fields).MaxLength = 0x7fffffff;
  (__this->fields).Name = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,pSVar1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)__this_00,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).Preset = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Preset,__this_00);
  pSVar2 = System_Guid__NewGuid(&local_18,(MethodInfo *)0x0);
  local_28._a = (pSVar2->fields)._a;
  local_28._b = (pSVar2->fields)._b;
  local_28._c = (pSVar2->fields)._c;
  local_28._d = (pSVar2->fields)._d;
  local_28._e = (pSVar2->fields)._e;
  local_28._f = (pSVar2->fields)._f;
  local_28._g = (pSVar2->fields)._g;
  local_28._h = (pSVar2->fields)._h;
  local_28._i = (pSVar2->fields)._i;
  local_28._j = (pSVar2->fields)._j;
  local_28._k = (pSVar2->fields)._k;
  pSVar3 = System_Guid__ToString((System_Guid_o *)&local_28,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar1->fields).MaxLength = 0x7fffffff;
  (__this->fields).UniqueId = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UniqueId,pSVar1);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


