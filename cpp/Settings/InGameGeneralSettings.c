// Type: Settings.InGameGeneralSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameGeneralSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameGeneralSettings.cs
// --------------------------------

// Settings.InGameGeneralSettings$$.ctor
// il2cpp: void Settings_InGameGeneralSettings___ctor (Settings_InGameGeneralSettings_o* __this, const MethodInfo* method);
// 0x181f19a40

void Settings_InGameGeneralSettings___ctor(Settings_InGameGeneralSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  Il2CppObject *defaultValue;
  System_String_o *pSVar2;
  int32_t iVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_Collections_Generic_List_StringSetting__o *defaultValue_00;
  Settings_ListSetting_StringSetting__o *__this_00;
  
  if (Il2CppMethodInitialized_184345445 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor_4072d28);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Waves");
    il2cpp_codegen_initialize_runtime_metadata(&"FoodForTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"Forest");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184345445 = '\x01';
  }
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar2 = "General";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).MapCategory = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapCategory,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar2 = "Forest";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).MapName = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapName,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar2 = "Waves";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).GameMode = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameMode,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar2 = "";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).PrevGameMode = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PrevGameMode,pSVar4);
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
  (pSVar5->fields).MinValue = -0x80000000;
  (pSVar5->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar5,2,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar5->fields).DefaultValue = iVar3;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).Difficulty = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Difficulty,pSVar5);
  defaultValue_00 =
       il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)defaultValue_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor
            ((Settings_ListSetting_T__o *)__this_00,(System_Collections_Generic_List_T__o *)defaultValue_00,
             (MethodInfo_1755D40 *)MethodInfo_Settings_ListSetting_StringSetting_ctor_4072d28);
  (__this->fields).Addons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Addons,__this_00);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar2 = "FoodForTitan";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 100;
  (__this->fields).RoomName = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RoomName,pSVar4);
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar4,defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 100;
  (__this->fields).Password = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Password,pSVar4);
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
  (pSVar5->fields).MaxValue = 0xff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar5,10,(pSVar1->vtable)._11_SanitizeValue.method)
  ;
  (pSVar5->fields).DefaultValue = iVar3;
  (*(pSVar5->klass->vtable)._4_SetDefault.methodPtr)(pSVar5,(pSVar5->klass->vtable)._4_SetDefault.method);
  (__this->fields).MaxPlayers = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MaxPlayers,pSVar5);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


