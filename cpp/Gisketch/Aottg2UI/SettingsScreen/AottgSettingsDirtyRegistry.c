// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsDirtyRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.Entry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* __this, System_String_o* rowId, int32_t order, const MethodInfo* method);
// 0x5e3c1a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *__this,
               System_String_o *rowId,int32_t order,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).RowId = rowId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RowId);
  (__this->fields).Order = order;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___cctor (const MethodInfo* method);
// 0x5e3d7f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075485be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c);
    Il2CppMethodInitialized_075485be = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields->__9 =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o* __this, const MethodInfo* method);
// 0x5e3d860

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.<>c$$<DirtyPaths>b__7_0
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___DirtyPaths_b__7_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* a, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* b, const MethodInfo* method);
// 0x5e3d870

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___DirtyPaths_b__7_0
                  (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o *__this,
                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *a,
                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *b,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((a == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) ||
     (b == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = System_Int32__CompareTo_54b7380(&(a->fields).Order,(b->fields).Order,(MethodInfo *)0x0);
  return iVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$Register
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__Register (System_String_o* rowId, System_String_o* path, System_Func_string__o* value, const MethodInfo* method);
// 0x5e3bff0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__Register
               (System_String_o *rowId,System_String_o *path,System_Func_string__o *value,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *__this;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *local_38;
  
  if (Il2CppMethodInitialized_075485b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry);
    Il2CppMethodInitialized_075485b3 = '\x01';
  }
  local_38 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0;
  bVar3 = System_String__IsNullOrEmpty(rowId,(MethodInfo *)0x0);
  if ((value == (System_Func_string__o *)0x0) || (bVar3)) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar2,(Il2CppObject *)rowId,(Il2CppObject **)&local_38,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_TryGetValue
                      );
    if (!bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      iVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->_nextOrder;
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->_nextOrder =
           iVar1 + 1;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      (__this->fields).RowId = rowId;
      method_00 = (MethodInfo *)rowId;
      Il2CppCodeGenWriteBarrier(&(__this->fields).RowId);
      (__this->fields).Order = iVar1;
      local_38 = __this;
      pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue(value,method_00);
      (__this->fields).Baseline = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Baseline);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05e3c199;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)rowId,(Il2CppObject *)local_38,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_set_Item
                );
    }
    if (local_38 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
      if (path != (System_String_o *)0x0) {
        rowId = path;
      }
      (local_38->fields).Path = rowId;
      Il2CppCodeGenWriteBarrier(&(local_38->fields).Path);
      if (local_38 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
        (local_38->fields).Value = value;
        Il2CppCodeGenWriteBarrier(&(local_38->fields).Value);
        return;
      }
    }
  }
label_05e3c199:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$CaptureBaseline
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__CaptureBaseline (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e3c280
// eh: try 0x5e3c3c3..0x5e3c52d -> pad 0x5e3c53a (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e3c55a..0x5e3c55f -> pad 0x5e3c580 cleanup
// eh: try 0x5e3c583..0x5e3c58d -> pad 0x5e3c595 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3c2c3: jmp 0x5e3c52d
// asm:   0x5e3c532: jmp 0x5e3c542
// asm:   0x5e3c534: jmp 0x5e3c542
// asm:   0x5e3c536: jmp 0x5e3c542
// asm:   0x5e3c538: jmp 0x5e3c542
// asm:   0x5e3c53a: jmp 0x5e3c542
// asm:   0x5e3c53c: jmp 0x5e3c542
// asm:   0x5e3c53e: jmp 0x5e3c542
// asm:   0x5e3c540: jmp 0x5e3c542
// asm:   0x5e3c542: mov r15, rax
// asm:   0x5e3c545: cmp edx, 1
// asm:   0x5e3c548: jne 0x5e3c583
// asm:   0x5e3c54a: mov rdi, r15
// asm:   0x5e3c54d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e3c552: mov rbx, qword ptr [rax]
// asm:   0x5e3c555: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5e3c55a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e3c55f: lea rax, [rip + 0x1453d1a]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x5e3c566: mov rsi, qword ptr [rax]
// asm:   0x5e3c569: lea rdi, [rsp + 0x10]
// asm:   0x5e3c56e: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e3c573: test rbx, rbx
// asm:   0x5e3c576: je 0x5e3c4fd
// asm:   0x5e3c578: mov rdi, rbx
// asm:   0x5e3c57b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e3c580: mov r15, rax
// asm:   0x5e3c583: lea rdi, [rsp + 0x30]
// asm:   0x5e3c588: call 0x2fe1090  ; il2cpp_runtime_helper_02fe1090()
// asm:   0x5e3c58d: mov rdi, r15
// asm:   0x5e3c590: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e3c595: mov rdi, rax
// asm:   0x5e3c598: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__CaptureBaseline
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *pIVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_String_o *pSVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_075485b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190290
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    Il2CppMethodInitialized_075485b4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry)->
              static_fields;
  }
  if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this,(MethodInfo_4AAD2A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                            ),
     __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
             __this_01,
             (MethodInfo_43F93D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
            );
  local_68.fields._currentValue = local_38;
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48._8_8_ = &local_68;
  if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    while (pMVar6 = 
           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
          , bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                              (&local_68,
                               (MethodInfo_4CE7200 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
                              ), pIVar3 = local_68.fields._currentValue, bVar4) {
      if (local_68.fields._currentValue == (Il2CppObject *)0x0) goto label_05e3c528;
      pIVar2 = local_68.fields._currentValue[3].klass;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                         ((System_Func_string__o *)pIVar2,pMVar6);
      pIVar3[2].monitor = pSVar5;
      Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor);
      if (Il2CppMethodInitialized_075485bb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        Il2CppMethodInitialized_075485bb = '\x01';
      }
    }
  }
  else {
    while (pMVar6 = 
           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
          , bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                              (&local_68,
                               (MethodInfo_4CE7200 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
                              ), pIVar3 = local_68.fields._currentValue, bVar4) {
      if (local_68.fields._currentValue == (Il2CppObject *)0x0) {
label_05e3c528:
        ThrowNullReferenceException();
      }
      pIVar2 = local_68.fields._currentValue[3].klass;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                         ((System_Func_string__o *)pIVar2,pMVar6);
      pIVar3[2].monitor = pSVar5;
      Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor);
      if (Il2CppMethodInitialized_075485bb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        Il2CppMethodInitialized_075485bb = '\x01';
      }
      __this_00 = (root->fields)._State_k__BackingField;
      if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        pIVar2 = pIVar3[1].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar5 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow
                           ((System_String_o *)pIVar2,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this_00,pSVar5,false,(MethodInfo *)0x0);
      }
    }
  }
  pMVar6 = 
  MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (&local_68,
             (MethodInfo_4CE71F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
            );
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState(root,pMVar6);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SyncRow
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* rowId, const MethodInfo* method);
// 0x5e3c720
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3c8dd: jmp 0x5e3c83e

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *rowId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *pIVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_String_o *a;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_075485b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_TryGetValue
              );
    Il2CppMethodInitialized_075485b5 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  bVar3 = System_String__IsNullOrEmpty(rowId,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05e3c8e2;
  bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)rowId,&local_38,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_TryGetValue
                    );
  pIVar2 = local_38;
  if (!bVar3) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    if (Il2CppMethodInitialized_075485ba != '\0') goto label_05e3c7e2;
label_05e3c8b2:
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_075485ba = '\x01';
    if (pIVar2 != (Il2CppObject *)0x0) goto label_05e3c7eb;
label_05e3c8ce:
    bVar3 = false;
  }
  else {
    if (Il2CppMethodInitialized_075485ba == '\0') goto label_05e3c8b2;
label_05e3c7e2:
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05e3c8ce;
label_05e3c7eb:
    pIVar1 = pIVar2[3].klass;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    }
    a = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                  ((System_Func_string__o *)pIVar1,(MethodInfo *)rowId);
    rowId = pIVar2[2].monitor;
    bVar3 = System_String__Equals_52ffe30(a,rowId,4,(MethodInfo *)0x0);
    bVar3 = !bVar3;
  }
  if (Il2CppMethodInitialized_075485bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_075485bb = '\x01';
  }
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (root->fields)._State_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    if (pIVar2 == (Il2CppObject *)0x0) {
label_05e3c8e2:
      ThrowNullReferenceException();
    }
    pIVar1 = pIVar2[1].klass;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    }
    rowId = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow
                      ((System_String_o *)pIVar1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this_00,rowId,bVar3,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState(root,(MethodInfo *)rowId);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SyncAll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncAll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e3c970
// eh: try 0x5e3cab3..0x5e3cc9d -> pad 0x5e3ccaa (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e3ccc6..0x5e3cccb -> pad 0x5e3ccec cleanup
// eh: try 0x5e3ccef..0x5e3ccf9 -> pad 0x5e3cd01 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3c9b3: jmp 0x5e3cc9d
// asm:   0x5e3cb37: jmp 0x5e3cb5a
// asm:   0x5e3cca2: jmp 0x5e3ccae
// asm:   0x5e3cca4: jmp 0x5e3ccae
// asm:   0x5e3cca6: jmp 0x5e3ccae
// asm:   0x5e3cca8: jmp 0x5e3ccae
// asm:   0x5e3ccaa: jmp 0x5e3ccae
// asm:   0x5e3ccac: jmp 0x5e3ccae
// asm:   0x5e3ccae: mov r15, rax
// asm:   0x5e3ccb1: cmp edx, 1
// asm:   0x5e3ccb4: jne 0x5e3ccef
// asm:   0x5e3ccb6: mov rdi, r15
// asm:   0x5e3ccb9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e3ccbe: mov rbx, qword ptr [rax]
// asm:   0x5e3ccc1: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5e3ccc6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e3cccb: lea rax, [rip + 0x14535ae]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x5e3ccd2: mov rsi, qword ptr [rax]
// asm:   0x5e3ccd5: lea rdi, [rsp + 0x10]
// asm:   0x5e3ccda: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e3ccdf: test rbx, rbx
// asm:   0x5e3cce2: je 0x5e3cc6d
// asm:   0x5e3cce4: mov rdi, rbx
// asm:   0x5e3cce7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e3ccec: mov r15, rax
// asm:   0x5e3ccef: lea rdi, [rsp + 0x30]
// asm:   0x5e3ccf4: call 0x2fe10c0  ; il2cpp_runtime_helper_02fe10c0()
// asm:   0x5e3ccf9: mov rdi, r15
// asm:   0x5e3ccfc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e3cd01: mov rdi, rax
// asm:   0x5e3cd04: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncAll
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *pIVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_String_o *pSVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_075485b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190290
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    Il2CppMethodInitialized_075485b6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry)->
              static_fields;
  }
  if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this,(MethodInfo_4AAD2A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                            ),
     __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
             __this_01,
             (MethodInfo_43F93D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
            );
  local_68.fields._currentValue = local_38;
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48._8_8_ = &local_68;
  if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    while (pMVar6 = 
           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
          , bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                              (&local_68,
                               (MethodInfo_4CE7200 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
                              ), pIVar3 = local_68.fields._currentValue, bVar4) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      if (Il2CppMethodInitialized_075485ba == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        Il2CppMethodInitialized_075485ba = '\x01';
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar3[3].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                           ((System_Func_string__o *)pIVar2,pMVar6);
        System_String__Equals_52ffe30(pSVar5,pIVar3[2].monitor,4,(MethodInfo *)0x0);
      }
      if (Il2CppMethodInitialized_075485bb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        Il2CppMethodInitialized_075485bb = '\x01';
      }
    }
  }
  else {
    while (pMVar6 = 
           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
          , bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                              (&local_68,
                               (MethodInfo_4CE7200 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
                              ), pIVar3 = local_68.fields._currentValue, bVar4) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      if (Il2CppMethodInitialized_075485ba == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        Il2CppMethodInitialized_075485ba = '\x01';
      }
      if (pIVar3 == (Il2CppObject *)0x0) {
        bVar4 = false;
      }
      else {
        pIVar2 = pIVar3[3].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                           ((System_Func_string__o *)pIVar2,pMVar6);
        bVar4 = System_String__Equals_52ffe30(pSVar5,pIVar3[2].monitor,4,(MethodInfo *)0x0);
        bVar4 = !bVar4;
      }
      if (Il2CppMethodInitialized_075485bb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        Il2CppMethodInitialized_075485bb = '\x01';
      }
      __this_00 = (root->fields)._State_k__BackingField;
      if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar3[1].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar5 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow
                           ((System_String_o *)pIVar2,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this_00,pSVar5,bVar4,(MethodInfo *)0x0);
      }
    }
  }
  pMVar6 = 
  MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (&local_68,
             (MethodInfo_4CE71F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
            );
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState(root,pMVar6);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$HasDirty
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__HasDirty (const MethodInfo* method);
// 0x5e3cd10
// eh: try 0x5e3ce04..0x5e3ce76 -> pad 0x5e3ceb7 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e3ced1..0x5e3ced6 -> pad 0x5e3cefd cleanup
// eh: try 0x5e3cf00..0x5e3cf0a -> pad 0x5e3cf12 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3cdf9: nop dword ptr [rax]
// asm:   0x5e3ceb5: jmp 0x5e3ceb9
// asm:   0x5e3ceb7: jmp 0x5e3ceb9
// asm:   0x5e3ceb9: mov rbx, rax
// asm:   0x5e3cebc: cmp edx, 1
// asm:   0x5e3cebf: jne 0x5e3cf00
// asm:   0x5e3cec1: mov rdi, rbx
// asm:   0x5e3cec4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e3cec9: mov rbx, qword ptr [rax]
// asm:   0x5e3cecc: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5e3ced1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e3ced6: lea rax, [rip + 0x14533a3]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x5e3cedd: mov rsi, qword ptr [rax]
// asm:   0x5e3cee0: mov rdi, rsp
// asm:   0x5e3cee3: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e3cee8: xor r13d, r13d
// asm:   0x5e3ceeb: mov ebp, 0
// asm:   0x5e3cef0: test rbx, rbx
// asm:   0x5e3cef3: je 0x5e3ce98
// asm:   0x5e3cef5: mov rdi, rbx
// asm:   0x5e3cef8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e3cefd: mov rbx, rax
// asm:   0x5e3cf00: lea rdi, [rsp + 0x18]
// asm:   0x5e3cf05: call 0x2fe10f0  ; il2cpp_runtime_helper_02fe10f0()
// asm:   0x5e3cf0a: mov rdi, rbx
// asm:   0x5e3cf0d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e3cf12: mov rdi, rax
// asm:   0x5e3cf15: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__HasDirty(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *value;
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_String_o *a;
  int iVar4;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075485b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190290
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    Il2CppMethodInitialized_075485b7 = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_00 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this,(MethodInfo_4AAD2A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                          );
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&local_58,__this_00,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
                );
      local_40 = 0;
      local_38 = (undefined1 *)&local_58;
      do {
        do {
          method_00 = 
          MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
          ;
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            (&local_58,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
                            );
          pIVar1 = local_58.fields._currentValue;
          if (!bVar2) {
            iVar4 = 5;
            goto label_05e3ce86;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          if (Il2CppMethodInitialized_075485ba == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
            Il2CppMethodInitialized_075485ba = '\x01';
          }
        } while (pIVar1 == (Il2CppObject *)0x0);
        value = pIVar1[3].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        a = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                      ((System_Func_string__o *)value,method_00);
        bVar3 = System_String__Equals_52ffe30(a,pIVar1[2].monitor,4,(MethodInfo *)0x0);
      } while (bVar3);
      iVar4 = 4;
label_05e3ce86:
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (&local_58,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
                );
      return iVar4 == 4 && bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$DirtyPaths
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyPaths (const MethodInfo* method);
// 0x5e3cf20
// eh: try 0x5e3d0f3..0x5e3d25b -> pad 0x5e3d42f (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e3d453..0x5e3d458 -> pad 0x5e3d47b cleanup
// eh: try 0x5e3d47e..0x5e3d488 -> pad 0x5e3d490 catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3d0d8: lea r13, [rip + 0x14531a9]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
// asm:   0x5e3d0df: mov r15, rsp
// asm:   0x5e3d0e2: jmp 0x5e3d100
// asm:   0x5e3d0fe: nop 
// asm:   0x5e3d1c8: lea r15, [rip + 0x14530b9]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
// asm:   0x5e3d1cf: mov r13, rsp
// asm:   0x5e3d1d2: nop word ptr cs:[rax + rax]
// asm:   0x5e3d290: test r12, r12
// asm:   0x5e3d299: jmp 0x5e3d428
// asm:   0x5e3d42d: jmp 0x5e3d43b
// asm:   0x5e3d42f: jmp 0x5e3d43b
// asm:   0x5e3d431: jmp 0x5e3d43b
// asm:   0x5e3d433: jmp 0x5e3d43b
// asm:   0x5e3d435: jmp 0x5e3d43b
// asm:   0x5e3d437: jmp 0x5e3d43b
// asm:   0x5e3d439: jmp 0x5e3d43b
// asm:   0x5e3d43b: mov rbx, rax
// asm:   0x5e3d43e: cmp edx, 1
// asm:   0x5e3d441: jne 0x5e3d47e
// asm:   0x5e3d443: mov rdi, rbx
// asm:   0x5e3d446: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e3d44b: mov rbx, qword ptr [rax]
// asm:   0x5e3d44e: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5e3d453: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e3d458: lea rax, [rip + 0x1452e21]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x5e3d45f: mov rsi, qword ptr [rax]
// asm:   0x5e3d462: mov rdi, rsp
// asm:   0x5e3d465: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e3d46a: test rbx, rbx
// asm:   0x5e3d46d: je 0x5e3d26d
// asm:   0x5e3d473: mov rdi, rbx
// asm:   0x5e3d476: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e3d47b: mov rbx, rax
// asm:   0x5e3d47e: lea rdi, [rsp + 0x20]
// asm:   0x5e3d483: call 0x2fe1120  ; il2cpp_runtime_helper_02fe1120()
// asm:   0x5e3d488: mov rdi, rbx
// asm:   0x5e3d48b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e3d490: mov rdi, rax
// asm:   0x5e3d493: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyPaths(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int32_t capacity;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Func_string__o *pSVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_array *pGVar4;
  Il2CppClass *item;
  System_String_array *pSVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *pGVar6;
  undefined1 *puVar7;
  bool bVar8;
  System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_StaticFields *pGVar10;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_List_string__o *__this_02;
  Il2CppObject *pIVar11;
  int index;
  MethodInfo *pMVar12;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *local_58;
  undefined1 local_48 [16];
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *local_38;
  
  if (Il2CppMethodInitialized_075485b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_AottgSettingsDirtyRegistry_Entry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190290
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_Sort);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c_DirtyPaths_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    Il2CppMethodInitialized_075485b8 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if ((__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this,(MethodInfo_4AAD2A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                            ),
     __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
               __this_01,
               (MethodInfo_43F93D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    puStack_60 = (undefined1 *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_48._8_8_ = local_68;
    puVar7 = local_68;
    if (__this_00 == (System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry__o *)0x0) {
      do {
        do {
          local_48._8_8_ = puVar7;
          pMVar12 = 
          MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
          ;
          bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_68,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
                            );
          pGVar6 = local_58;
          if (!bVar8) goto label_05e3d25b;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          if (Il2CppMethodInitialized_075485ba == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
            Il2CppMethodInitialized_075485ba = '\x01';
          }
          puVar7 = (undefined1 *)local_48._8_8_;
        } while (pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0);
        pSVar3 = (pGVar6->fields).Value;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue(pSVar3,pMVar12);
        bVar8 = System_String__Equals_52ffe30(pSVar9,(pGVar6->fields).Baseline,4,(MethodInfo *)0x0);
        puVar7 = (undefined1 *)local_48._8_8_;
      } while (bVar8);
label_05e3d256:
      ThrowNullReferenceException();
    }
    while (pMVar12 = 
           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
          , bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                *)local_68,
                               (MethodInfo_4CE7200 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
                              ), pGVar6 = local_58, bVar8) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      if (Il2CppMethodInitialized_075485ba == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        Il2CppMethodInitialized_075485ba = '\x01';
      }
      if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
        pSVar3 = (pGVar6->fields).Value;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue(pSVar3,pMVar12);
        bVar8 = System_String__Equals_52ffe30(pSVar9,(pGVar6->fields).Baseline,4,(MethodInfo *)0x0);
        pMVar12 = MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_Add;
        if (!bVar8) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pGVar4 = (__this_00->fields)._items;
          if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_array *)0x0)
          goto label_05e3d256;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pGVar4->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pGVar4->m_Items[(int)uVar2] = pGVar6;
            Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pGVar6,
                       (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
          }
        }
      }
    }
label_05e3d25b:
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_68,
               (MethodInfo_4CE71F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
              );
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c);
      pGVar10 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields;
      comparison = (System_Comparison_T__o *)pGVar10->__9__7_0;
    }
    else {
      pGVar10 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields;
      comparison = (System_Comparison_T__o *)pGVar10->__9__7_0;
    }
    if (comparison == (System_Comparison_T__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c);
        pGVar10 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields;
      }
      pIVar11 = (Il2CppObject *)pGVar10->__9;
      comparison = (System_Comparison_T__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Comparison_AottgSettingsDirtyRegistry_Entry);
      System_Comparison_object____ctor
                ((System_Comparison_object__o *)comparison,pIVar11,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c_DirtyPaths_b__7_0,
                 (MethodInfo_48E28F0 *)0x0);
      pGVar10 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields;
      pGVar10->__9__7_0 = (System_Comparison_AottgSettingsDirtyRegistry_Entry__o *)comparison;
      Il2CppCodeGenWriteBarrier(&pGVar10->__9__7_0);
    }
    if (__this_00 != (System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry__o *)0x0) {
      System_Collections_Generic_List_object___Sort_395f500
                ((System_Collections_Generic_List_object__o *)__this_00,comparison,
                 (MethodInfo_395F500 *)
                 MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_Sort);
      capacity = (__this_00->fields)._size;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor_395c990
                ((System_Collections_Generic_List_object__o *)__this_02,capacity,
                 (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
      if (0 < (__this_00->fields)._size) {
        if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,0,
                     (MethodInfo_395CF20 *)
                     MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_get_Item);
          goto label_05e3d428;
        }
        index = 0;
        do {
          while( true ) {
            pIVar11 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_get_Item
                                );
            pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (pIVar11 == (Il2CppObject *)0x0) goto label_05e3d428;
            item = pIVar11[2].klass;
            piVar1 = &(__this_02->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_02->fields)._items;
            if (pSVar5 == (System_String_array *)0x0) goto label_05e3d428;
            uVar2 = (__this_02->fields)._size;
            if ((uint)pSVar5->max_length <= uVar2) break;
            (__this_02->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (System_String_o *)item;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
            index = index + 1;
            if ((__this_00->fields)._size <= index) {
              return __this_02;
            }
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
          index = index + 1;
        } while (index < (__this_00->fields)._size);
      }
      return __this_02;
    }
  }
label_05e3d428:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$DirtyCount
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyCount (const MethodInfo* method);
// 0x5e3d4a0
// eh: try 0x5e3d5a0..0x5e3d605 -> pad 0x5e3d63e (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e3d656..0x5e3d65b -> pad 0x5e3d67a cleanup
// eh: try 0x5e3d67d..0x5e3d687 -> pad 0x5e3d68f catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3d5cb: mov rdi, rbx
// asm:   0x5e3d5ce: call 0x30d6060  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x5e3d5d3: jmp 0x5e3d590
// asm:   0x5e3d638: jmp 0x5e3d63e
// asm:   0x5e3d63a: jmp 0x5e3d63e
// asm:   0x5e3d63c: jmp 0x5e3d63e
// asm:   0x5e3d63e: mov rbx, rax
// asm:   0x5e3d641: cmp edx, 1
// asm:   0x5e3d644: jne 0x5e3d67d
// asm:   0x5e3d646: mov rdi, rbx
// asm:   0x5e3d649: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e3d64e: mov rbx, qword ptr [rax]
// asm:   0x5e3d651: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5e3d656: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e3d65b: lea rax, [rip + 0x1452c1e]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x5e3d662: mov rsi, qword ptr [rax]
// asm:   0x5e3d665: mov rdi, rsp
// asm:   0x5e3d668: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e3d66d: test rbx, rbx
// asm:   0x5e3d670: je 0x5e3d621
// asm:   0x5e3d672: mov rdi, rbx
// asm:   0x5e3d675: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e3d67a: mov rbx, rax
// asm:   0x5e3d67d: lea rdi, [rsp + 0x18]
// asm:   0x5e3d682: call 0x2fe1150  ; il2cpp_runtime_helper_02fe1150()
// asm:   0x5e3d687: mov rdi, rbx
// asm:   0x5e3d68a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e3d68f: mov rdi, rax
// asm:   0x5e3d692: call 0x2ab61e0  ; __clang_call_terminate()

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyCount(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *value;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_String_o *a;
  MethodInfo *method_00;
  int iVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075485b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190290
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    Il2CppMethodInitialized_075485b9 = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_00 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this,(MethodInfo_4AAD2A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                          );
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&local_58,__this_00,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
                );
      local_40 = 0;
      iVar3 = 0;
      local_38 = (undefined1 *)&local_58;
      while( true ) {
        method_00 = 
        MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
        ;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&local_58,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_7190288
                          );
        pIVar1 = local_58.fields._currentValue;
        if (!bVar2) break;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        if (Il2CppMethodInitialized_075485ba == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          Il2CppMethodInitialized_075485ba = '\x01';
        }
        if (pIVar1 != (Il2CppObject *)0x0) {
          value = pIVar1[3].klass;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          a = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                        ((System_Func_string__o *)value,method_00);
          bVar2 = System_String__Equals_52ffe30(a,pIVar1[2].monitor,4,(MethodInfo *)0x0);
          iVar3 = iVar3 + (uint)!bVar2;
        }
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (&local_58,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
                );
      return iVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$DirtyStateKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyStateKey (System_String_o* rowId, const MethodInfo* method);
// 0x5e3d6a0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyStateKey
          (System_String_o *rowId,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow(rowId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$IsDirty
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__IsDirty (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* entry, const MethodInfo* method);
// 0x5e3c8f0

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__IsDirty
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *entry,MethodInfo *method)

{
  System_Func_string__o *value;
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_075485ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_075485ba = '\x01';
  }
  if (entry == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
    return false;
  }
  value = (entry->fields).Value;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  a = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue(value,method);
  bVar1 = System_String__Equals_52ffe30(a,(entry->fields).Baseline,4,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SetRowState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetRowState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* entry, bool dirty, const MethodInfo* method);
// 0x5e3c5a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetRowState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *entry,bool dirty,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075485bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_075485bb = '\x01';
  }
  if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this = (root->fields)._State_k__BackingField,
     __this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    return;
  }
  if (entry == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (entry->fields).RowId;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow(pSVar1,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,pSVar1,dirty,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SetSummaryState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e3c630

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_String_o *value;
  Il2CppClass *klass;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075485bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.dirty.count");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.dirty.hasDirty");
    Il2CppMethodInitialized_075485bc = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry;
  }
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    local_14 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyCount((MethodInfo *)klass);
  }
  else {
    local_14 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyCount((MethodInfo *)klass);
  }
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (pGVar2 = (root->fields)._State_k__BackingField,
     pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar2,"settings.dirty.count",value,(MethodInfo *)0x0);
    pGVar2 = (root->fields)._State_k__BackingField;
    if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                (pGVar2,"settings.dirty.hasDirty",0 < local_14,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SafeValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue (System_Func_string__o* value, const MethodInfo* method);
// 0x5e3c1d0
// eh: try 0x5e3c1e1..0x5e3c1e4 -> pad 0x5e3c1eb catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e3c1fe..0x5e3c25c -> pad 0x5e3c25c (+1 call sites) cleanup
// eh: try 0x5e3c25f..0x5e3c264 -> pad 0x5e3c26c catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3c1eb: mov rbx, rax
// asm:   0x5e3c1ee: cmp edx, 1
// asm:   0x5e3c1f1: jne 0x5e3c264
// asm:   0x5e3c1f3: mov rdi, rbx
// asm:   0x5e3c1f6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e3c1fb: mov rbx, rax
// asm:   0x5e3c1fe: lea rdi, [rip + 0x143bebb]  ; TypeInfo_System_Exception
// asm:   0x5e3c205: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e3c20a: mov rcx, qword ptr [rbx]
// asm:   0x5e3c20d: mov rsi, qword ptr [rcx]
// asm:   0x5e3c210: mov rdi, rax
// asm:   0x5e3c213: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e3c218: test al, al
// asm:   0x5e3c21a: je 0x5e3c23b
// asm:   0x5e3c21c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e3c23b: mov edi, 8
// asm:   0x5e3c240: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e3c245: mov rcx, qword ptr [rbx]
// asm:   0x5e3c248: mov qword ptr [rax], rcx
// asm:   0x5e3c24b: lea rsi, [rip + 0xff12ae]
// asm:   0x5e3c252: mov rdi, rax
// asm:   0x5e3c255: xor edx, edx
// asm:   0x5e3c257: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e3c25c: mov rbx, rax
// asm:   0x5e3c25f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e3c264: mov rdi, rbx
// asm:   0x5e3c267: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e3c26c: mov rdi, rax
// asm:   0x5e3c26f: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
          (System_Func_string__o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (value != (System_Func_string__o *)0x0) {
    pSVar1 = (System_String_o *)
             (*(code *)(value->fields).invoke_impl)((value->fields).method_code,(value->fields).method);
    if (pSVar1 != (System_String_o *)0x0) {
      return pSVar1;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___cctor (const MethodInfo* method);
// 0x5e3d6b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3d6d8: cmp byte ptr [rip + 0x17051a7], 0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *__this;
  
  if (Il2CppMethodInitialized_075485bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_075485bd = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_ctor);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries);
  return;
}


