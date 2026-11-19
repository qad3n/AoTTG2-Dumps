// Type: Settings.InGameAddonSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameAddonSettings.cs
// Prior real C# source: none
// --------------------------------

// Settings.InGameAddonSettings$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_InGameAddonSettings__SerializeToJsonObject (Settings_InGameAddonSettings_o* __this, const MethodInfo* method);
// 0x5b454e0
// eh: try 0x5b456aa..0x5b45a31 -> pad 0x5b45a58 (+29 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b45a3c..0x5b45a46 -> pad 0x5b45ab2 catch (...) [compiler noexcept guard]
// eh: try 0x5b45a73..0x5b45a78 -> pad 0x5b45a9d cleanup
// eh: try 0x5b45aa0..0x5b45aaa -> pad 0x5b45ab2 catch (...) [compiler noexcept guard]
// asm: 70 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b45699: nop dword ptr [rax]
// asm:   0x5b4594f: jmp 0x5b45a29
// asm:   0x5b459a4: jmp 0x5b459ca
// asm:   0x5b459a6: jmp 0x5b459ca
// asm:   0x5b459a8: jmp 0x5b459ca
// asm:   0x5b459aa: jmp 0x5b459ca
// asm:   0x5b459ac: jmp 0x5b459ca
// asm:   0x5b459ae: jmp 0x5b459ca
// asm:   0x5b459b0: jmp 0x5b459ca
// asm:   0x5b459b2: jmp 0x5b459ca
// asm:   0x5b459b4: jmp 0x5b459ca
// asm:   0x5b459b6: jmp 0x5b459ca
// asm:   0x5b459b8: jmp 0x5b459ca
// asm:   0x5b459ba: jmp 0x5b459ca
// asm:   0x5b459bc: jmp 0x5b459ca
// asm:   0x5b459be: jmp 0x5b459ca
// asm:   0x5b459c0: jmp 0x5b459ca
// asm:   0x5b459c2: jmp 0x5b459ca
// asm:   0x5b459c4: jmp 0x5b459ca
// asm:   0x5b459c6: jmp 0x5b459ca
// asm:   0x5b459c8: jmp 0x5b459ca
// asm:   0x5b459ca: mov rbx, rdx
// asm:   0x5b459cd: mov rbp, rax
// asm:   0x5b459d0: cmp ebx, 1
// asm:   0x5b459d3: jne 0x5b45a3c
// asm:   0x5b459d5: mov rdi, rbp
// asm:   0x5b459d8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b459dd: mov rbx, qword ptr [rax]
// asm:   0x5b459e0: mov qword ptr [rsp + 0x58], rbx
// asm:   0x5b459e5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b459ea: jmp 0x5b45932
// asm:   0x5b45a29: mov rdi, rbx
// asm:   0x5b45a2c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b45a36: mov rbx, rdx
// asm:   0x5b45a39: mov rbp, rax
// asm:   0x5b45a3c: lea rdi, [rsp + 0x58]
// asm:   0x5b45a41: call 0x2fd6db0  ; il2cpp_runtime_helper_02fd6db0()
// asm:   0x5b45a46: jmp 0x5b45a5e
// asm:   0x5b45a48: jmp 0x5b45a58
// asm:   0x5b45a4a: jmp 0x5b45a58
// asm:   0x5b45a4c: jmp 0x5b45a58
// asm:   0x5b45a4e: jmp 0x5b45a58
// asm:   0x5b45a50: jmp 0x5b45a58
// asm:   0x5b45a52: jmp 0x5b45a58
// asm:   0x5b45a54: jmp 0x5b45a58
// asm:   0x5b45a56: jmp 0x5b45a58
// asm:   0x5b45a58: mov rbx, rdx
// asm:   0x5b45a5b: mov rbp, rax
// asm:   0x5b45a5e: cmp ebx, 1
// asm:   0x5b45a61: jne 0x5b45aa0
// asm:   0x5b45a63: mov rdi, rbp
// asm:   0x5b45a66: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b45a6b: mov rbx, qword ptr [rax]
// asm:   0x5b45a6e: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5b45a73: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b45a78: lea rax, [rip + 0x174a261]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
// asm:   0x5b45a7f: mov rsi, qword ptr [rax]
// asm:   0x5b45a82: lea rdi, [rsp + 0x20]
// asm:   0x5b45a87: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b45a8c: test rbx, rbx
// asm:   0x5b45a8f: je 0x5b45a03
// asm:   0x5b45a95: mov rdi, rbx
// asm:   0x5b45a98: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b45a9d: mov rbp, rax
// asm:   0x5b45aa0: lea rdi, [rsp + 0x68]
// asm:   0x5b45aa5: call 0x2fd6de0  ; il2cpp_runtime_helper_02fd6de0()
// asm:   0x5b45aaa: mov rdi, rbp
// asm:   0x5b45aad: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b45ab2: mov rdi, rax
// asm:   0x5b45ab5: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Settings_InGameAddonSettings__SerializeToJsonObject(Settings_InGameAddonSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_String_o *str0;
  bool bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_BaseSetting_o *pSVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  MethodInfo *method_00;
  undefined1 auStack_a0 [8];
  void *pvStack_98;
  int32_t iStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  System_String_o *pSStack_78;
  undefined1 auStack_68 [8];
  void *pvStack_60;
  System_String_o *pSStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_07547288 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_718fce8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_718fcf0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_AddItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07547288 = '\x01';
  }
  auStack_88 = (undefined1  [8])0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  pSStack_78 = (System_String_o *)0x0;
  auStack_68 = (undefined1  [8])0x0;
  pvStack_60 = (void *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  pSVar1 = (__this->fields).Names;
  if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
    Settings_ListSetting_object___Clear
              ((Settings_ListSetting_T__o *)pSVar1,
               (MethodInfo_515E1C0 *)MethodInfo_Settings_ListSetting_StringSetting_Clear);
    pSVar1 = (__this->fields).Values;
    if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
      Settings_ListSetting_object___Clear
                ((Settings_ListSetting_T__o *)pSVar1,
                 (MethodInfo_515E1C0 *)MethodInfo_Settings_ListSetting_StringSetting_Clear);
      pSVar1 = (__this->fields).Types;
      if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
        Settings_ListSetting_object___Clear
                  ((Settings_ListSetting_T__o *)pSVar1,
                   (MethodInfo_515E1C0 *)MethodInfo_Settings_ListSetting_StringSetting_Clear);
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        if ((pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Keys
                               (pSVar4,(MethodInfo_4AAD0F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
                               ),
           pSVar3 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     auStack_a0,pSVar3,
                     (MethodInfo_511A520 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
                    );
          pSStack_78 = (System_String_o *)CONCAT44(uStack_8c,iStack_90);
          auStack_88 = auStack_a0;
          uStack_80 = pvStack_98;
          uStack_40 = 0;
          puStack_38 = auStack_88;
          do {
            bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                *)auStack_88,
                               (MethodInfo_4CE7080 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_718fce8
                              );
            str0 = pSStack_78;
            if (!bVar2) {
              method_00 = 
              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
              ;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         auStack_88,
                         (MethodInfo_4CE7070 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
                        );
              pSVar9 = Settings_BaseSettingsContainer__SerializeToJsonObject
                                 ((Settings_BaseSettingsContainer_o *)__this,method_00);
              return pSVar9;
            }
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar4,(Il2CppObject *)pSStack_78,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                               );
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Keys
                               (pSVar4,(MethodInfo_4AAD0F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                               );
            if (pSVar3 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       auStack_a0,pSVar3,
                       (MethodInfo_511A520 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                      );
            pSStack_58 = (System_String_o *)CONCAT44(uStack_8c,iStack_90);
            auStack_68 = auStack_a0;
            pvStack_60 = pvStack_98;
            uStack_50 = 0;
            puStack_48 = auStack_68;
            while (bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                     ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                       *)auStack_68,
                                      (MethodInfo_4CE7080 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                                     ), pSVar8 = pSStack_58, bVar2) {
              pSVar1 = (__this->fields).Names;
              pSVar5 = System_String__Concat_5301f10(str0,".",pSStack_58,(MethodInfo *)0x0);
              pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
              Settings_StringSetting___ctor_5b7b730(pSVar6,pSVar5,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar6,
                         (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar1 = (__this->fields).Values;
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar4,(Il2CppObject *)str0,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                 );
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar4,(Il2CppObject *)pSVar8,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                 );
              if (pSVar7 == (Settings_BaseSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar5 = (*(pSVar7->klass->vtable)._8_SerializeToJsonString.methodPtr)
                                 (pSVar7,(pSVar7->klass->vtable)._8_SerializeToJsonString.method);
              pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
              Settings_StringSetting___ctor_5b7b730(pSVar6,pSVar5,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar6,
                         (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar1 = (__this->fields).Types;
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar4,(Il2CppObject *)str0,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                 );
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar4,(Il2CppObject *)pSVar8,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                 );
              iStack_90 = Settings_SettingsUtil__GetSettingType(pSVar7,(MethodInfo *)0x0);
              auStack_a0 = (undefined1  [8])TypeInfo_Settings_SettingType;
              pvStack_98 = (void *)0xffffffffffffffff;
              pSVar8 = System_Enum__ToString((System_Enum_o *)auStack_a0,(MethodInfo *)0x0);
              pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
              Settings_StringSetting___ctor_5b7b730(pSVar6,pSVar8,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar6,
                         (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       auStack_68,
                       (MethodInfo_4CE7070 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                      );
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.InGameAddonSettings$$DeserializeFromJsonObject
// il2cpp: void Settings_InGameAddonSettings__DeserializeFromJsonObject (Settings_InGameAddonSettings_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5b45ed0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b4608d: jmp 0x5b4623f

void Settings_InGameAddonSettings__DeserializeFromJsonObject
               (Settings_InGameAddonSettings_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  System_String_o *value;
  bool bVar3;
  int32_t iVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *key;
  System_String_o *__this_00;
  Il2CppObject *value_00;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  MethodInfo *extraout_RDX;
  Settings_ListSetting_StringSetting__o *pSVar7;
  int32_t index;
  
  if (Il2CppMethodInitialized_07547289 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_ToEnum_SettingType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_07547289 = '\x01';
    method = extraout_RDX;
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,method);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar6,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_Clear
              );
    pSVar7 = (__this->fields).Names;
    if (pSVar7 != (Settings_ListSetting_StringSetting__o *)0x0) {
      index = 0;
      while( true ) {
        iVar4 = Settings_ListSetting_object___GetCount
                          ((Settings_ListSetting_T__o *)pSVar7,
                           (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
        if (iVar4 <= index) {
          return;
        }
        pSVar7 = (__this->fields).Names;
        if ((((pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) ||
             (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
             pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) ||
            (pSVar5 = System_Collections_Generic_List_object___get_Item
                                (pSVar2,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
            pSVar5 == (Settings_StringSetting_o *)0x0)) ||
           (__this_00 = (pSVar5->fields)._value, __this_00 == (System_String_o *)0x0)) break;
        iVar4 = System_String__IndexOf(__this_00,0x2e,(MethodInfo *)0x0);
        if (iVar4 < 0) {
          pSVar7 = (__this->fields).Types;
          key = __this_00;
        }
        else {
          key = System_String__Substring_53042f0(__this_00,0,iVar4,(MethodInfo *)0x0);
          __this_00 = System_String__Substring(__this_00,iVar4 + 1,(MethodInfo *)0x0);
          pSVar7 = (__this->fields).Types;
        }
        if (((pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
            pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pSVar5 = System_Collections_Generic_List_object___get_Item
                               (pSVar2,index,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
           pSVar5 == (Settings_StringSetting_o *)0x0)) break;
        value = (pSVar5->fields)._value;
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        iVar4 = MiscExtensions__ToEnum_Int32Enum_
                          (value,true,(MethodInfo_358DB10 *)MethodInfo_MiscExtensions_ToEnum_SettingType);
        pSVar7 = (__this->fields).Values;
        if (((pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
            pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pSVar5 = System_Collections_Generic_List_object___get_Item
                               (pSVar2,index,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
           pSVar5 == (Settings_StringSetting_o *)0x0)) break;
        value_00 = Settings_SettingsUtil__DeserializeValueFromJson
                             (iVar4,(pSVar5->fields)._value,(MethodInfo *)0x0);
        if (value_00 != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((value_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(value_00);
          }
        }
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar6,(Il2CppObject *)key,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ContainsKey
                          );
        if (!bVar3) {
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
          System_Collections_Generic_Dictionary_object__object____ctor
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                     (MethodInfo_4AAC8D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar6,(Il2CppObject *)key,(Il2CppObject *)__this_01,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
                    );
        }
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        if ((pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar6,(Il2CppObject *)key,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                               ), pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
        break;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar6,(Il2CppObject *)__this_00,value_00,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item);
        index = index + 1;
        pSVar7 = (__this->fields).Names;
        if (pSVar7 == (Settings_ListSetting_StringSetting__o *)0x0) break;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.InGameAddonSettings$$.ctor
// il2cpp: void Settings_InGameAddonSettings___ctor (Settings_InGameAddonSettings_o* __this, const MethodInfo* method);
// 0x5b46870

void Settings_InGameAddonSettings___ctor(Settings_InGameAddonSettings_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754728a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    Il2CppMethodInitialized_0754728a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
  (__this->fields).Current = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Current);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).Names = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Names);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).Values = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Values);
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)method_00,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).Types = (Settings_ListSetting_StringSetting__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Types);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,method_00);
  return;
}


