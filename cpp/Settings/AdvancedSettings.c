// Type: Settings.AdvancedSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/AdvancedSettings.cs
// Prior real C# source: none
// --------------------------------

// Settings.AdvancedSettings$$get_FileName
// il2cpp: System_String_o* Settings_AdvancedSettings__get_FileName (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x59d13b0

System_String_o *
Settings_AdvancedSettings__get_FileName(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545c77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Advanced.json");
    Il2CppMethodInitialized_07545c77 = '\x01';
  }
  return "Advanced.json";
}


// Settings.AdvancedSettings$$get_Encrypted
// il2cpp: bool Settings_AdvancedSettings__get_Encrypted (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x59d13e0

bool Settings_AdvancedSettings__get_Encrypted(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  return true;
}


// Settings.AdvancedSettings$$Validate
// il2cpp: bool Settings_AdvancedSettings__Validate (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x59d13f0

bool Settings_AdvancedSettings__Validate(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  int32_t iVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07545c78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetCount);
    Il2CppMethodInitialized_07545c78 = '\x01';
  }
  pSVar1 = (__this->fields).ServiceKeys;
  if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
    iVar2 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)pSVar1,
                       (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
    pSVar1 = (__this->fields).ServiceUrls;
    if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
      iVar3 = Settings_ListSetting_object___GetCount
                        ((Settings_ListSetting_T__o *)pSVar1,
                         (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
      if (iVar2 != iVar3) {
        return false;
      }
      pSVar1 = (__this->fields).SecretKeys;
      if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
        iVar2 = Settings_ListSetting_object___GetCount
                          ((Settings_ListSetting_T__o *)pSVar1,
                           (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
        pSVar1 = (__this->fields).SecretValues;
        if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
          iVar3 = Settings_ListSetting_object___GetCount
                            ((Settings_ListSetting_T__o *)pSVar1,
                             (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
          return iVar2 == iVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.AdvancedSettings$$TryGetServiceUrl
// il2cpp: bool Settings_AdvancedSettings__TryGetServiceUrl (Settings_AdvancedSettings_o* __this, System_String_o* key, System_String_o** url, const MethodInfo* method);
// 0x59d1480

bool Settings_AdvancedSettings__TryGetServiceUrl
               (Settings_AdvancedSettings_o *__this,System_String_o *key,System_String_o **url,
               MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  bool bVar3;
  Settings_StringSetting_o *pSVar4;
  int index;
  
  if (Il2CppMethodInitialized_07545c79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_07545c79 = '\x01';
  }
  *url = (System_String_o *)0x0;
  index = 0;
  Il2CppCodeGenWriteBarrier(url);
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar3) {
    pSVar1 = (__this->fields).ServiceKeys;
    if (((pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) ||
        (pSVar2 = (__this->fields).ServiceUrls, pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0)) ||
       (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
label_059d15ac:
      ThrowNullReferenceException();
    }
    index = 0;
    if (0 < (__this_00->fields)._size) {
      __this_01 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value;
      do {
        pSVar4 = System_Collections_Generic_List_object___get_Item
                           (__this_00,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_059d15ac;
        bVar3 = System_String__op_Equality((pSVar4->fields)._value,key,(MethodInfo *)0x0);
        if (bVar3) {
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_059d15ac;
          pSVar4 = System_Collections_Generic_List_object___get_Item
                             (__this_01,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
          if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_059d15ac;
          *url = (pSVar4->fields)._value;
          Il2CppCodeGenWriteBarrier(url);
          index = 1;
          goto label_059d159b;
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
      index = 0;
    }
  }
label_059d159b:
  return SUB41(index,0);
}


// Settings.AdvancedSettings$$TryGetSecretValue
// il2cpp: bool Settings_AdvancedSettings__TryGetSecretValue (Settings_AdvancedSettings_o* __this, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x59d15c0

bool Settings_AdvancedSettings__TryGetSecretValue
               (Settings_AdvancedSettings_o *__this,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  bool bVar3;
  Settings_StringSetting_o *pSVar4;
  int index;
  
  if (Il2CppMethodInitialized_07545c7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_07545c7a = '\x01';
  }
  *value = (System_String_o *)0x0;
  index = 0;
  Il2CppCodeGenWriteBarrier(value);
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar3) {
    pSVar1 = (__this->fields).SecretKeys;
    if (((pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) ||
        (pSVar2 = (__this->fields).SecretValues, pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0)) ||
       (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
label_059d16ec:
      ThrowNullReferenceException();
    }
    index = 0;
    if (0 < (__this_00->fields)._size) {
      __this_01 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value;
      do {
        pSVar4 = System_Collections_Generic_List_object___get_Item
                           (__this_00,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_059d16ec;
        bVar3 = System_String__op_Equality((pSVar4->fields)._value,key,(MethodInfo *)0x0);
        if (bVar3) {
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_059d16ec;
          pSVar4 = System_Collections_Generic_List_object___get_Item
                             (__this_01,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
          if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_059d16ec;
          *value = (pSVar4->fields)._value;
          Il2CppCodeGenWriteBarrier(value);
          index = 1;
          goto label_059d16db;
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
      index = 0;
    }
  }
label_059d16db:
  return SUB41(index,0);
}


// Settings.AdvancedSettings$$.ctor
// il2cpp: void Settings_AdvancedSettings___ctor (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x59d1700

void Settings_AdvancedSettings___ctor(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545c7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    Il2CppMethodInitialized_07545c7b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(__this_00,false,(MethodInfo *)0x0);
  (__this->fields).ServicesEnabled = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ServicesEnabled);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).ServiceKeys = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ServiceKeys);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).ServiceUrls = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ServiceUrls);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).SecretKeys = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SecretKeys);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).SecretValues = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SecretValues);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


