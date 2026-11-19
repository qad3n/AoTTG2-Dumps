// Type: Settings.InGameGeneralSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/InGameGeneralSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameGeneralSettings.cs
// --------------------------------

// Settings.InGameGeneralSettings$$.ctor
// il2cpp: void Settings_InGameGeneralSettings___ctor (Settings_InGameGeneralSettings_o* __this, const MethodInfo* method);
// 0x5b46ec0

void Settings_InGameGeneralSettings___ctor(Settings_InGameGeneralSettings_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  int32_t iVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_IntSetting_o *__this_00;
  System_Collections_Generic_List_StringSetting__o *__this_01;
  Settings_ListSetting_StringSetting__o *__this_02;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754728d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor_7192bd0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Waves");
    il2cpp_codegen_initialize_runtime_metadata(&"Forest1");
    il2cpp_codegen_initialize_runtime_metadata(&"FoodForTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754728d = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,"General",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).MapCategory = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapCategory);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,"Forest1",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).MapName = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapName);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,"Waves",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).GameMode = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameMode);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,"",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).PrevGameMode = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PrevGameMode);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (__this_00->fields).MinValue = -0x80000000;
  (__this_00->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)__this_00,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (__this_00->fields).MinValue = -0x80000000;
  (__this_00->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(__this_00->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this_00,2,(__this_00->klass->vtable)._11_SanitizeValue.method);
  (__this_00->fields).DefaultValue = iVar1;
  (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
            (__this_00,(__this_00->klass->vtable)._4_SetDefault.method);
  (__this->fields).Difficulty = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Difficulty);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor
            ((Settings_ListSetting_T__o *)__this_02,(System_Collections_Generic_List_T__o *)__this_01,
             (MethodInfo_515D3D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor_7192bd0);
  (__this->fields).Addons = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Addons);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,"FoodForTitan",100,(MethodInfo *)0x0);
  (__this->fields).RoomName = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RoomName);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,defaultValue,100,(MethodInfo *)0x0);
  (__this->fields).Password = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Password);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  method_00->klass = (Il2CppClass *)0x7fffffff80000000;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)method_00,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  method_00->klass = (Il2CppClass *)0xff00000000;
  iVar1 = (*(((Settings_IntSetting_c *)method_00->methodPointer)->vtable)._11_SanitizeValue.methodPtr)
                    (method_00,10,
                     (((Settings_IntSetting_c *)method_00->methodPointer)->vtable)._11_SanitizeValue.method);
  *(int32_t *)&method_00->name = iVar1;
  (*(((Settings_IntSetting_c *)method_00->methodPointer)->vtable)._4_SetDefault.methodPtr)
            (method_00,(((Settings_IntSetting_c *)method_00->methodPointer)->vtable)._4_SetDefault.method);
  (__this->fields).MaxPlayers = (Settings_IntSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MaxPlayers);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,method_00);
  return;
}


