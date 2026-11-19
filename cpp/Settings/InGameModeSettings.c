// Type: Settings.InGameModeSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameModeSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameModeSettings.cs
// --------------------------------

// Settings.InGameModeSettings$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_InGameModeSettings__SerializeToJsonObject (Settings_InGameModeSettings_o* __this, const MethodInfo* method);
// 0x5b48310
// eh: try 0x5b4847a..0x5b4862b -> pad 0x5b48646 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b48664..0x5b48669 -> pad 0x5b4868c cleanup
// eh: try 0x5b4868f..0x5b48699 -> pad 0x5b486a1 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b48630: jmp 0x5b4864c
// asm:   0x5b48632: jmp 0x5b4864c
// asm:   0x5b48634: jmp 0x5b4864c
// asm:   0x5b48636: jmp 0x5b4864c
// asm:   0x5b48638: jmp 0x5b4864c
// asm:   0x5b4863a: jmp 0x5b4864c
// asm:   0x5b4863c: jmp 0x5b4864c
// asm:   0x5b4863e: jmp 0x5b4864c
// asm:   0x5b48640: jmp 0x5b4864c
// asm:   0x5b48642: jmp 0x5b4864c
// asm:   0x5b48644: jmp 0x5b4864c
// asm:   0x5b48646: jmp 0x5b4864c
// asm:   0x5b48648: jmp 0x5b4864c
// asm:   0x5b4864a: jmp 0x5b4864c
// asm:   0x5b4864c: mov rbx, rax
// asm:   0x5b4864f: cmp edx, 1
// asm:   0x5b48652: jne 0x5b4868f
// asm:   0x5b48654: mov rdi, rbx
// asm:   0x5b48657: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b4865c: mov rbx, qword ptr [rax]
// asm:   0x5b4865f: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5b48664: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b48669: lea rax, [rip + 0x17477c0]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x5b48670: mov rsi, qword ptr [rax]
// asm:   0x5b48673: mov rdi, rsp
// asm:   0x5b48676: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b4867b: test rbx, rbx
// asm:   0x5b4867e: je 0x5b485f6
// asm:   0x5b48684: mov rdi, rbx
// asm:   0x5b48687: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b4868c: mov rbx, rax
// asm:   0x5b4868f: lea rdi, [rsp + 0x38]
// asm:   0x5b48694: call 0x2fd6e10  ; il2cpp_runtime_helper_02fd6e10()
// asm:   0x5b48699: mov rdi, rbx
// asm:   0x5b4869c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b486a1: mov rdi, rax
// asm:   0x5b486a4: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Settings_InGameModeSettings__SerializeToJsonObject(Settings_InGameModeSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  Settings_BaseSetting_o *pSVar5;
  System_String_o *defaultValue;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  MethodInfo *method_00;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  System_String_o *pSStack_68;
  undefined1 auStack_58 [8];
  void *pvStack_50;
  int32_t iStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_07547290 == '\0') {
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
    Il2CppMethodInitialized_07547290 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  pSStack_68 = (System_String_o *)0x0;
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
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          __this_00 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                (pSVar2,(MethodInfo_4AAD0F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                                );
          if (__this_00 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
            System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       auStack_58,__this_00,
                       (MethodInfo_511A520 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                      );
            puStack_38 = auStack_78;
            pSStack_68 = (System_String_o *)CONCAT44(uStack_44,iStack_48);
            auStack_78 = auStack_58;
            uStack_70 = pvStack_50;
            uStack_40 = 0;
            while( true ) {
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                  *)auStack_78,
                                 (MethodInfo_4CE7080 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                                );
              pSVar6 = pSStack_68;
              if (!bVar3) {
                method_00 = 
                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                ;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           auStack_78,
                           (MethodInfo_4CE7070 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                          );
                pSVar7 = Settings_BaseSettingsContainer__SerializeToJsonObject
                                   ((Settings_BaseSettingsContainer_o *)__this,method_00);
                return pSVar7;
              }
              pSVar1 = (__this->fields).Names;
              pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
              Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar6,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                         (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar1 = (__this->fields).Values;
              pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)pSVar6,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                 );
              if (pSVar5 == (Settings_BaseSetting_o *)0x0) break;
              defaultValue = (*(pSVar5->klass->vtable)._8_SerializeToJsonString.methodPtr)
                                       (pSVar5,(pSVar5->klass->vtable)._8_SerializeToJsonString.method);
              pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
              Settings_StringSetting___ctor_5b7b730(pSVar4,defaultValue,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                         (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar1 = (__this->fields).Types;
              pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)pSVar6,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                 );
              iStack_48 = Settings_SettingsUtil__GetSettingType(pSVar5,(MethodInfo *)0x0);
              auStack_58 = (undefined1  [8])TypeInfo_Settings_SettingType;
              pvStack_50 = (void *)0xffffffffffffffff;
              pSVar6 = System_Enum__ToString((System_Enum_o *)auStack_58,(MethodInfo *)0x0);
              pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
              Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar6,0x7fffffff,(MethodInfo *)0x0);
              if (pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_ListSetting_object___AddItem
                        ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)pSVar4,
                         (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
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
// 0x5b486b0

void Settings_InGameModeSettings__DeserializeFromJsonObject
               (Settings_InGameModeSettings_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_String_o *value;
  int32_t iVar4;
  Settings_StringSetting_o *pSVar5;
  Il2CppObject *value_00;
  MethodInfo *extraout_RDX;
  int32_t index;
  Settings_ListSetting_StringSetting__o *pSVar6;
  
  if (Il2CppMethodInitialized_07547291 == '\0') {
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
    Il2CppMethodInitialized_07547291 = '\x01';
    method = extraout_RDX;
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,method);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar2,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Clear);
    pSVar6 = (__this->fields).Names;
    if (pSVar6 != (Settings_ListSetting_StringSetting__o *)0x0) {
      index = 0;
      while( true ) {
        iVar4 = Settings_ListSetting_object___GetCount
                          ((Settings_ListSetting_T__o *)pSVar6,
                           (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
        if (iVar4 <= index) {
          return;
        }
        pSVar6 = (__this->fields).Types;
        if ((pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
           pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) break;
        pSVar5 = System_Collections_Generic_List_object___get_Item
                           (pSVar3,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if (pSVar5 == (Settings_StringSetting_o *)0x0) break;
        value = (pSVar5->fields)._value;
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        iVar4 = MiscExtensions__ToEnum_Int32Enum_
                          (value,true,(MethodInfo_358DB10 *)MethodInfo_MiscExtensions_ToEnum_SettingType);
        pSVar6 = (__this->fields).Values;
        if ((pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
           pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) break;
        pSVar5 = System_Collections_Generic_List_object___get_Item
                           (pSVar3,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if (pSVar5 == (Settings_StringSetting_o *)0x0) break;
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
        pSVar6 = (__this->fields).Names;
        if ((pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
           pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) break;
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Current;
        pSVar5 = System_Collections_Generic_List_object___get_Item
                           (pSVar3,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if ((pSVar5 == (Settings_StringSetting_o *)0x0) ||
           (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar2,(Il2CppObject *)(pSVar5->fields)._value,value_00,
                   (MethodInfo_4AAD4E0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
        index = index + 1;
        pSVar6 = (__this->fields).Names;
        if (pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0) break;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.InGameModeSettings$$.ctor
// il2cpp: void Settings_InGameModeSettings___ctor (Settings_InGameModeSettings_o* __this, const MethodInfo* method);
// 0x5b488e0

void Settings_InGameModeSettings___ctor(Settings_InGameModeSettings_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547292 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    Il2CppMethodInitialized_07547292 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
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


