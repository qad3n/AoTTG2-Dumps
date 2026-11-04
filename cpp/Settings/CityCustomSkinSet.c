// Type: Settings.CityCustomSkinSet
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/CityCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/CityCustomSkinSet.cs
// --------------------------------

// Settings.CityCustomSkinSet$$Validate
// il2cpp: bool Settings_CityCustomSkinSet__Validate (Settings_CityCustomSkinSet_o* __this, const MethodInfo* method);
// 0x181dba180

bool Settings_CityCustomSkinSet__Validate(Settings_CityCustomSkinSet_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  
  if (Il2CppMethodInitialized_184344a07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_184344a07 = '\x01';
  }
  pSVar1 = (__this->fields).Houses;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    return (pSVar2->fields)._size == 8;
  }
  ThrowNullReferenceException();
}


// Settings.CityCustomSkinSet$$.ctor
// il2cpp: void Settings_CityCustomSkinSet___ctor (Settings_CityCustomSkinSet_o* __this, const MethodInfo* method);
// 0x181dba1e0

void Settings_CityCustomSkinSet___ctor(Settings_CityCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *__this_00;
  
  if (Il2CppMethodInitialized_184344a08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor_4072e08);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184344a08 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b9e0
            ((Settings_ListSetting_T__o *)__this_00,(Il2CppObject *)pSVar2,8,
             (MethodInfo_182B9E0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor_4072e08);
  (__this->fields).Houses = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Houses,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Ground = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Ground,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Wall = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Wall,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Gate = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Gate,pSVar2);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


