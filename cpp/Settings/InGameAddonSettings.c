// Type: Settings.InGameAddonSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameAddonSettings.cs
// Prior real C# source: none
// --------------------------------

// Settings.InGameAddonSettings$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_InGameAddonSettings__SerializeToJsonObject (Settings_InGameAddonSettings_o* __this, const MethodInfo* method);
// 0x181f18f40
// eh: try 0x181f19110..0x181f19456 -> pad 0x18333dad0 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f19388: mov rdx, qword ptr [rip + 0x219f871]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x181f1938f: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181f19394: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f19399: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181f1939e: test rcx, rcx
// asm:   0x181f193a1: jne 0x181f19441
// asm:   0x181f193a7: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x181f193af: jmp 0x181f19110
// asm:   0x181f193c7: mov rdx, qword ptr [rip + 0x219d372]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
// asm:   0x181f193ce: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181f193d3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f193d8: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181f193dd: test rcx, rcx
// asm:   0x181f193e0: jne 0x181f19456
// asm:   0x181f193e2: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x181f19441: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181f19456: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833254b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833254b5: push rbp
// asm:   0x1833254b6: sub rsp, 0x20
// asm:   0x1833254ba: mov rbp, rdx
// asm:   0x1833254bd: mov rax, qword ptr [rbp + 0x88]
// asm:   0x1833254c4: mov rcx, qword ptr [rax]
// asm:   0x1833254c7: mov qword ptr [rbp + 0x48], rcx
// asm:   0x1833254cb: movabs rax, 0
// asm:   0x1833254d5: add rsp, 0x20
// asm:   0x1833254d9: pop rbp
// asm:   0x1833254da: ret 
// asm:   0x18333dad0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333dad5: push rbp
// asm:   0x18333dad6: sub rsp, 0x20
// asm:   0x18333dada: mov rbp, rdx
// asm:   0x18333dadd: mov rax, qword ptr [rbp + 0x90]
// asm:   0x18333dae4: mov rcx, qword ptr [rax]
// asm:   0x18333dae7: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18333daeb: movabs rax, 0
// asm:   0x18333daf5: add rsp, 0x20
// asm:   0x18333daf9: pop rbp
// asm:   0x18333dafa: ret 

SimpleJSONFixed_JSONNode_o *
Settings_InGameAddonSettings__SerializeToJsonObject(Settings_InGameAddonSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_00;
  System_String_o *str0;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_String_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  Settings_BaseSetting_o *pSVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  undefined1 local_a8 [16];
  int32_t local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_88;
  undefined8 local_80;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_78;
  undefined1 local_70 [8];
  uint64_t uStack_68;
  System_String_o *local_60;
  undefined1 local_58 [8];
  undefined1 *puStack_50;
  System_String_o *local_48;
  
  if (Il2CppMethodInitialized_184345440 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_40b6820
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_40b6900
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
    Il2CppMethodInitialized_184345440 = '\x01';
  }
  local_70 = (undefined1  [8])0x0;
  uStack_68 = 0;
  local_60 = (System_String_o *)0x0;
  local_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  local_48 = (System_String_o *)0x0;
  pSVar1 = (__this->fields).Names;
  if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
    Settings_ListSetting_object___Clear
              ((Settings_ListSetting_T__o *)pSVar1,
               (MethodInfo_182A820 *)MethodInfo_Settings_ListSetting_StringSetting_Clear);
    pSVar1 = (__this->fields).Values;
    if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
      Settings_ListSetting_object___Clear
                ((Settings_ListSetting_T__o *)pSVar1,
                 (MethodInfo_182A820 *)MethodInfo_Settings_ListSetting_StringSetting_Clear);
      pSVar1 = (__this->fields).Types;
      if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
        Settings_ListSetting_object___Clear
                  ((Settings_ListSetting_T__o *)pSVar1,
                   (MethodInfo_182A820 *)MethodInfo_Settings_ListSetting_StringSetting_Clear);
        __this_00 = (__this->fields).Current;
        if (__this_00 !=
            (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) {
          pSVar3 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                   System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                              (MethodInfo_13C6500 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
                             );
          if (pSVar3 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
            System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_a8,pSVar3,
                       (MethodInfo_F1E4D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
                      );
            local_70 = (undefined1  [8])local_a8._0_8_;
            uStack_68 = local_a8._8_8_;
            local_60 = (System_String_o *)CONCAT44(uStack_94,local_98);
            local_90 = 0;
            local_88 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70;
            do {
              bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                  *)local_70,
                                 (MethodInfo_156BDD0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_40b6820
                                );
              str0 = local_60;
              if (!bVar2) {
                System_Configuration_ConfigurationCollectionAttribute___ctor
                          (local_88,
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
                          );
                pSVar9 = Settings_BaseSettingsContainer__SerializeToJsonObject
                                   ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
                return pSVar9;
              }
              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar6,(Il2CppObject *)local_60,
                                     (MethodInfo_147A5B0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                    );
              if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar3 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                       System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                 (__this_01,
                                  (MethodInfo_13C6500 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                                 );
              if (pSVar3 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         local_a8,pSVar3,
                         (MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                        );
              local_58 = (undefined1  [8])local_a8._0_8_;
              puStack_50 = (undefined1 *)local_a8._8_8_;
              local_48 = (System_String_o *)CONCAT44(uStack_94,local_98);
              local_80 = 0;
              local_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
              while( true ) {
                bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                    *)local_58,
                                   (MethodInfo_156BDD0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                                  );
                pSVar8 = local_48;
                if (!bVar2) break;
                pSVar1 = (__this->fields).Names;
                pSVar4 = System_String__Concat_1969b70(str0,".",local_48,(MethodInfo *)0x0);
                pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
                Settings_StringSetting___ctor_1f27ee0(pSVar5,pSVar4,0x7fffffff,(MethodInfo *)0x0);
                if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                  ThrowNullReferenceException();
                }
                Settings_ListSetting_object___AddItem
                          ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar5,
                           (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
                pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar1 = (__this->fields).Values;
                pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                         System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar6,(Il2CppObject *)str0,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                   );
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar6,(Il2CppObject *)pSVar8,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                   );
                if (pSVar7 == (Settings_BaseSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar4 = (*(pSVar7->klass->vtable)._8_SerializeToJsonString.methodPtr)
                                   (pSVar7,(pSVar7->klass->vtable)._8_SerializeToJsonString.method);
                pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
                Settings_StringSetting___ctor_1f27ee0(pSVar5,pSVar4,0x7fffffff,(MethodInfo *)0x0);
                if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                  ThrowNullReferenceException();
                }
                Settings_ListSetting_object___AddItem
                          ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar5,
                           (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
                pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar1 = (__this->fields).Types;
                pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                         System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar6,(Il2CppObject *)str0,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                   );
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar6,(Il2CppObject *)pSVar8,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                   );
                local_98 = Settings_SettingsUtil__GetSettingType(pSVar7,(MethodInfo *)0x0);
                local_a8._0_8_ = TypeInfo_Settings_SettingType;
                local_a8._8_8_ = &g_data_ffffffffffffffff;
                pSVar8 = System_Enum__ToString((System_Enum_o *)local_a8,(MethodInfo *)0x0);
                pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
                Settings_StringSetting___ctor_1f27ee0(pSVar5,pSVar8,0x7fffffff,(MethodInfo *)0x0);
                if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                  ThrowNullReferenceException();
                }
                Settings_ListSetting_object___AddItem
                          ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar5,
                           (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                        );
            } while( true );
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.InGameAddonSettings$$DeserializeFromJsonObject
// il2cpp: void Settings_InGameAddonSettings__DeserializeFromJsonObject (Settings_InGameAddonSettings_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f18be0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f18cfa: nop word ptr [rax + rax]
// asm:   0x181f18d91: mov r12, rdi
// asm:   0x181f18f06: jmp 0x181f18d00

void Settings_InGameAddonSettings__DeserializeFromJsonObject
               (Settings_InGameAddonSettings_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_String_o *value;
  bool bVar4;
  int32_t iVar5;
  Settings_ListSetting_StringSetting__o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  System_String_o *key;
  System_String_o *__this_00;
  Il2CppObject *value_00;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  int index;
  
  if (Il2CppMethodInitialized_184345441 == '\0') {
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
    Il2CppMethodInitialized_184345441 = '\x01';
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).Current;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_Clear);
    pSVar6 = (__this->fields).Names;
    index = 0;
    if (pSVar6 != (Settings_ListSetting_StringSetting__o *)0x0) {
      while( true ) {
        iVar5 = Settings_ListSetting_object___GetCount
                          ((Settings_ListSetting_T__o *)pSVar6,
                           (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
        if (iVar5 <= index) {
          return;
        }
        pSVar6 = (__this->fields).Names;
        if ((((pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) ||
             (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
             pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) ||
            (pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                (pSVar3,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
            pSVar7 == (Settings_StringSetting_o *)0x0)) ||
           (__this_00 = (pSVar7->fields)._value, __this_00 == (System_String_o *)0x0)) break;
        iVar5 = System_String__IndexOf(__this_00,0x2e,(MethodInfo *)0x0);
        key = __this_00;
        if (-1 < iVar5) {
          key = System_String__Substring_1972740(__this_00,0,iVar5,(MethodInfo *)0x0);
          __this_00 = System_String__Substring(__this_00,iVar5 + 1,(MethodInfo *)0x0);
        }
        pSVar6 = (__this->fields).Types;
        if (((pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
            pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (pSVar3,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
           pSVar7 == (Settings_StringSetting_o *)0x0)) break;
        value = (pSVar7->fields)._value;
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        iVar5 = MiscExtensions__ToEnum_Int32Enum_
                          (value,true,(MethodInfo_732FD0 *)MethodInfo_MiscExtensions_ToEnum_SettingType);
        pSVar6 = (__this->fields).Values;
        if (((pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
            pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (pSVar3,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
           pSVar7 == (Settings_StringSetting_o *)0x0)) break;
        value_00 = Settings_SettingsUtil__DeserializeValueFromJson
                             (iVar5,(pSVar7->fields)._value,(MethodInfo *)0x0);
        if (value_00 != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((value_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(value_00);
          }
        }
        pSVar2 = (__this->fields).Current;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)
        break;
        bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)key
                           ,(MethodInfo_1455450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ContainsKey
                          );
        if (!bVar4) {
          pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
          System_Collections_Generic_Dictionary_object__object____ctor
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                     (MethodInfo_1454140 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
          if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar8,(Il2CppObject *)key,(Il2CppObject *)__this_01,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
                    );
        }
        pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        if ((pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar8,(Il2CppObject *)key,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                               ), pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
        break;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar8,(Il2CppObject *)__this_00,value_00,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item);
        pSVar6 = (__this->fields).Names;
        index = index + 1;
        if (pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) break;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.InGameAddonSettings$$.ctor
// il2cpp: void Settings_InGameAddonSettings___ctor (Settings_InGameAddonSettings_o* __this, const MethodInfo* method);
// 0x181f19460

void Settings_InGameAddonSettings___ctor(Settings_InGameAddonSettings_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  
  if (Il2CppMethodInitialized_184345442 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    Il2CppMethodInitialized_184345442 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
  (__this->fields).Current = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Current,__this_00);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).Names = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Names,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).Values = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Values,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)pSVar1,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).Types = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Types,pSVar1);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


