// Type: Settings.AdvancedSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/AdvancedSettings.cs
// Prior real C# source: none
// --------------------------------

// Settings.AdvancedSettings$$get_FileName
// il2cpp: System_String_o* Settings_AdvancedSettings__get_FileName (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x181db9ac0

System_String_o *
Settings_AdvancedSettings__get_FileName(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Advanced.json");
    Il2CppMethodInitialized_184344a02 = '\x01';
  }
  return "Advanced.json";
}


// Settings.AdvancedSettings$$get_Encrypted
// il2cpp: bool Settings_AdvancedSettings__get_Encrypted (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Settings_AdvancedSettings__get_Encrypted(Settings_AdvancedSettings_o* __this, MethodInfo* method)

{
  return true;
}


// Settings.AdvancedSettings$$Validate
// il2cpp: bool Settings_AdvancedSettings__Validate (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x181db98d0

bool Settings_AdvancedSettings__Validate(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  int32_t iVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184344a03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetCount);
    Il2CppMethodInitialized_184344a03 = '\x01';
  }
  pSVar1 = (__this->fields).ServiceKeys;
  if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
    iVar2 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)pSVar1,
                       (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
    pSVar1 = (__this->fields).ServiceUrls;
    if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
      iVar3 = Settings_ListSetting_object___GetCount
                        ((Settings_ListSetting_T__o *)pSVar1,
                         (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
      if (iVar2 != iVar3) {
        return false;
      }
      pSVar1 = (__this->fields).SecretKeys;
      if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
        iVar2 = Settings_ListSetting_object___GetCount
                          ((Settings_ListSetting_T__o *)pSVar1,
                           (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
        pSVar1 = (__this->fields).SecretValues;
        if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
          iVar3 = Settings_ListSetting_object___GetCount
                            ((Settings_ListSetting_T__o *)pSVar1,
                             (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
          return iVar2 == iVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.AdvancedSettings$$TryGetServiceUrl
// il2cpp: bool Settings_AdvancedSettings__TryGetServiceUrl (Settings_AdvancedSettings_o* __this, System_String_o* key, System_String_o** url, const MethodInfo* method);
// 0x181db9790

bool Settings_AdvancedSettings__TryGetServiceUrl
               (Settings_AdvancedSettings_o *__this,System_String_o *key,System_String_o **url,
               MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_o *value;
  bool bVar3;
  Settings_StringSetting_o *pSVar4;
  int index;
  
  if (Il2CppMethodInitialized_184344a04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_184344a04 = '\x01';
  }
  *url = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(url,(void *)0x0);
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  pSVar1 = (__this->fields).ServiceKeys;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar2 = (__this->fields).ServiceUrls, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)) {
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value;
    index = 0;
    __this_01 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      while( true ) {
        if ((__this_01->fields)._size <= index) {
          return false;
        }
        pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           (__this_01,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_181db98be;
        bVar3 = System_String__op_Equality((pSVar4->fields)._value,key,(MethodInfo *)0x0);
        if (bVar3) break;
        index = index + 1;
      }
      if ((__this_00 != (System_Collections_Generic_List_object__o *)0x0) &&
         (pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this_00,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
         pSVar4 != (Settings_StringSetting_o *)0x0)) {
        value = (pSVar4->fields)._value;
        *url = value;
        Il2CppCodeGenWriteBarrier(url,value);
        return true;
      }
    }
  }
label_181db98be:
  ThrowNullReferenceException();
}


// Settings.AdvancedSettings$$TryGetSecretValue
// il2cpp: bool Settings_AdvancedSettings__TryGetSecretValue (Settings_AdvancedSettings_o* __this, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x181db9650

bool Settings_AdvancedSettings__TryGetSecretValue
               (Settings_AdvancedSettings_o *__this,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_o *value_00;
  bool bVar3;
  Settings_StringSetting_o *pSVar4;
  int index;
  
  if (Il2CppMethodInitialized_184344a05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_184344a05 = '\x01';
  }
  *value = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(value,(void *)0x0);
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  pSVar1 = (__this->fields).SecretKeys;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar2 = (__this->fields).SecretValues, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)) {
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value;
    index = 0;
    __this_01 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      while( true ) {
        if ((__this_01->fields)._size <= index) {
          return false;
        }
        pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           (__this_01,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_181db977e;
        bVar3 = System_String__op_Equality((pSVar4->fields)._value,key,(MethodInfo *)0x0);
        if (bVar3) break;
        index = index + 1;
      }
      if ((__this_00 != (System_Collections_Generic_List_object__o *)0x0) &&
         (pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this_00,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
         pSVar4 != (Settings_StringSetting_o *)0x0)) {
        value_00 = (pSVar4->fields)._value;
        *value = value_00;
        Il2CppCodeGenWriteBarrier(value,value_00);
        return true;
      }
    }
  }
label_181db977e:
  ThrowNullReferenceException();
}


// Settings.AdvancedSettings$$.ctor
// il2cpp: void Settings_AdvancedSettings___ctor (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x181db9980

void Settings_AdvancedSettings___ctor(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344a06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    Il2CppMethodInitialized_184344a06 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(__this_00,false,(MethodInfo *)0x0);
  (__this->fields).ServicesEnabled = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ServicesEnabled,__this_00);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).ServiceKeys = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ServiceKeys,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).ServiceUrls = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ServiceUrls,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).SecretKeys = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SecretKeys,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).SecretValues = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SecretValues,pSVar1);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


