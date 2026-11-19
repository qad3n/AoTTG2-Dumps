// Type: Settings.BaseSetSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/BaseSetSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetSetting.cs
// --------------------------------

// Settings.BaseSetSetting$$.ctor
// il2cpp: void Settings_BaseSetSetting___ctor (Settings_BaseSetSetting_o* __this, const MethodInfo* method);
// 0x5b45250

void Settings_BaseSetSetting___ctor(Settings_BaseSetSetting_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  Settings_BoolSetting_o *__this_01;
  System_String_o *defaultValue;
  MethodInfo *method_00;
  System_Guid_o local_30;
  
  if (Il2CppMethodInitialized_075472ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Set 1");
    Il2CppMethodInitialized_075472ca = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,"Set 1",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Name = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)__this_01,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).Preset = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Preset);
  local_30 = System_Guid__NewGuid((MethodInfo *)0x0);
  defaultValue = System_Guid__ToString(&local_30,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).UniqueId = (Settings_StringSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UniqueId);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,method_00);
  return;
}


