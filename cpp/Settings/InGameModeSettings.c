// Type: Settings.InGameModeSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameModeSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameModeSettings.cs
// --------------------------------

// Settings.InGameModeSettings$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_InGameModeSettings__SerializeToJsonObject (Settings_InGameModeSettings_o* __this, const MethodInfo* method);
// 0x181f1b220
// eh: try 0x181f1b380..0x181f1b5d9 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1b578: mov rdx, qword ptr [rip + 0x219d681]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x181f1b57f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f1b584: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f1b589: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f1b58e: test rcx, rcx
// asm:   0x181f1b591: jne 0x181f1b5d9
// asm:   0x181f1b593: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x181f1b5d9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

SimpleJSONFixed_JSONNode_o *
Settings_InGameModeSettings__SerializeToJsonObject(Settings_InGameModeSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *defaultValue;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Settings_StringSetting_o *pSVar4;
  Settings_BaseSetting_o *pSVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  undefined1 local_70 [8];
  uint64_t uStack_68;
  Il2CppObject *local_60;
  undefined1 local_58 [16];
  int32_t local_48;
  undefined4 uStack_44;
  
  if (Il2CppMethodInitialized_184345448 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_AddItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184345448 = '\x01';
  }
  local_70 = (undefined1  [8])0x0;
  uStack_68 = 0;
  local_60 = (Il2CppObject *)0x0;
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
        if (__this_00 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
          __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                 (MethodInfo_13C6500 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys)
          ;
          if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
            System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_58,__this_01,
                       (MethodInfo_F1E4D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                      );
            local_70 = (undefined1  [8])local_58._0_8_;
            uStack_68 = local_58._8_8_;
            local_60 = (Il2CppObject *)CONCAT44(uStack_44,local_48);
            while( true ) {
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                  *)local_70,
                                 (MethodInfo_156BDD0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                                );
              defaultValue = local_60;
              if (!bVar3) {
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70,
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                          );
                pSVar7 = Settings_BaseSettingsContainer__SerializeToJsonObject
                                   ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
                return pSVar7;
              }
              pSVar1 = (__this->fields).Names;
              pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
              if (Il2CppMethodInitialized_1843454ba == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
                Il2CppMethodInitialized_1843454ba = '\x01';
              }
              (pSVar4->fields).MaxLength = 0x7fffffff;
              Settings_TypedSetting_object____ctor_e8f190
                        ((Settings_TypedSetting_T__o *)pSVar4,defaultValue,
                         (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
              (pSVar4->fields).MaxLength = 0x7fffffff;
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                         (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar1 = (__this->fields).Values;
              pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,defaultValue,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                 );
              if (pSVar5 == (Settings_BaseSetting_o *)0x0) break;
              pSVar6 = (*(pSVar5->klass->vtable)._8_SerializeToJsonString.methodPtr)
                                 (pSVar5,(pSVar5->klass->vtable)._8_SerializeToJsonString.method);
              pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
              if (Il2CppMethodInitialized_1843454ba == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
                Il2CppMethodInitialized_1843454ba = '\x01';
              }
              (pSVar4->fields).MaxLength = 0x7fffffff;
              Settings_TypedSetting_object____ctor_e8f190
                        ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar6,
                         (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
              (pSVar4->fields).MaxLength = 0x7fffffff;
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                         (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar1 = (__this->fields).Types;
              pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,defaultValue,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                 );
              local_48 = Settings_SettingsUtil__GetSettingType(pSVar5,(MethodInfo *)0x0);
              local_58._0_8_ = TypeInfo_Settings_SettingType;
              local_58._8_8_ = &g_data_ffffffffffffffff;
              pSVar6 = System_Enum__ToString((System_Enum_o *)local_58,(MethodInfo *)0x0);
              pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
              if (Il2CppMethodInitialized_1843454ba == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
                Il2CppMethodInitialized_1843454ba = '\x01';
              }
              (pSVar4->fields).MaxLength = 0x7fffffff;
              Settings_TypedSetting_object____ctor_e8f190
                        ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar6,
                         (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
              (pSVar4->fields).MaxLength = 0x7fffffff;
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                         (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.InGameModeSettings$$DeserializeFromJsonObject
// il2cpp: void Settings_InGameModeSettings__DeserializeFromJsonObject (Settings_InGameModeSettings_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f1afd0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1b09e: nop 
// asm:   0x181f1b19f: jmp 0x181f1b1a3
// asm:   0x181f1b1f4: jmp 0x181f1b0a0

void Settings_InGameModeSettings__DeserializeFromJsonObject
               (Settings_InGameModeSettings_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  int32_t iVar4;
  Settings_ListSetting_StringSetting__o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_BaseSetting_o *value;
  int index;
  
  if (Il2CppMethodInitialized_184345449 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_ToEnum_SettingType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_184345449 = '\x01';
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Current;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Clear
              );
    pSVar5 = (__this->fields).Names;
    index = 0;
    if (pSVar5 != (Settings_ListSetting_StringSetting__o *)0x0) {
      while( true ) {
        iVar4 = Settings_ListSetting_object___GetCount
                          ((Settings_ListSetting_T__o *)pSVar5,
                           (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
        if (iVar4 <= index) {
          return;
        }
        pSVar5 = (__this->fields).Types;
        if (((pSVar5 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._value,
            pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (pSVar2,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
           pSVar6 == (Settings_StringSetting_o *)0x0)) break;
        pSVar3 = (pSVar6->fields)._value;
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        iVar4 = MiscExtensions__ToEnum_Int32Enum_
                          (pSVar3,true,(MethodInfo_732FD0 *)MethodInfo_MiscExtensions_ToEnum_SettingType);
        pSVar5 = (__this->fields).Values;
        if (((pSVar5 == (Settings_ListSetting_StringSetting__o *)0x0) ||
            (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._value,
            pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) ||
           (pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (pSVar2,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
           pSVar6 == (Settings_StringSetting_o *)0x0)) break;
        pSVar3 = (pSVar6->fields)._value;
        value = Settings_SettingsUtil__CreateBaseSetting(iVar4,(MethodInfo *)0x0);
        if (value == (Settings_BaseSetting_o *)0x0) {
          value = (Settings_BaseSetting_o *)0x0;
        }
        else {
          (*(value->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                    (value,pSVar3,(value->klass->vtable)._9_DeserializeFromJsonString.method);
          bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
        }
        pSVar5 = (__this->fields).Names;
        if ((pSVar5 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._value,
           pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) break;
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           (pSVar2,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if ((pSVar6 == (Settings_StringSetting_o *)0x0) ||
           (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_01,(Il2CppObject *)(pSVar6->fields)._value,(Il2CppObject *)value,
                   (MethodInfo_146B4B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
        pSVar5 = (__this->fields).Names;
        index = index + 1;
        if (pSVar5 == (Settings_ListSetting_StringSetting__o *)0x0) break;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.InGameModeSettings$$.ctor
// il2cpp: void Settings_InGameModeSettings___ctor (Settings_InGameModeSettings_o* __this, const MethodInfo* method);
// 0x181f1b5e0

void Settings_InGameModeSettings___ctor(Settings_InGameModeSettings_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434544a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    Il2CppMethodInitialized_18434544a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
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


