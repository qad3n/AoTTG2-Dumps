// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsDirtyRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.Entry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* __this, System_String_o* rowId, int32_t order, const MethodInfo* method);
// 0x1808fb340

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* __this, System_String_o* rowId, int32_t order, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).RowId = table;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RowId,table);
  (__this->fields).Order = record;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___cctor (const MethodInfo* method);
// 0x1823200e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o *__this;
  
  if (Il2CppMethodInitialized_18434777d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c);
    Il2CppMethodInitialized_18434777d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields->__9,
             __this);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry.<>c$$<DirtyPaths>b__7_0
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___DirtyPaths_b__7_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* a, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* b, const MethodInfo* method);
// 0x18231fa50

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c___DirtyPaths_b__7_0
                  (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___c_o *__this,
                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *a,
                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *b,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((a != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) &&
     (b != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0)) {
    iVar1 = System_Int32__CompareTo_1b28ec0(&(a->fields).Order,(b->fields).Order,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$Register
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__Register (System_String_o* rowId, System_String_o* path, System_Func_string__o* value, const MethodInfo* method);
// 0x182315f50

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__Register
               (System_String_o *rowId,System_String_o *path,System_Func_string__o *value,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *__this;
  System_String_o *value_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *local_res8;
  
  if (Il2CppMethodInitialized_184347772 == '\0') {
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
    Il2CppMethodInitialized_184347772 = '\x01';
  }
  local_res8 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0;
  bVar3 = System_String__IsNullOrEmpty(rowId,(MethodInfo *)0x0);
  if ((bVar3) || (value == (System_Func_string__o *)0x0)) {
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
                      (pSVar2,(Il2CppObject *)rowId,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
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
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
      (__this->fields).RowId = rowId;
      Il2CppCodeGenWriteBarrier(&(__this->fields).RowId,rowId);
      (__this->fields).Order = iVar1;
      local_res8 = __this;
      value_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                           (value,(MethodInfo *)0x0);
      (__this->fields).Baseline = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Baseline,value_00);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182316110;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)rowId,(Il2CppObject *)local_res8,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_set_Item
                );
    }
    if (path == (System_String_o *)0x0) {
      path = rowId;
    }
    if (local_res8 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
      (local_res8->fields).Path = path;
      Il2CppCodeGenWriteBarrier(&(local_res8->fields).Path,path);
      if (local_res8 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
        (local_res8->fields).Value = value;
        Il2CppCodeGenWriteBarrier(&(local_res8->fields).Value,value);
        return;
      }
    }
  }
label_182316110:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$CaptureBaseline
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__CaptureBaseline (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x182315430
// eh: try 0x182315530..0x18231565d -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231552c: nop dword ptr [rax]
// asm:   0x182315605: mov rdx, qword ptr [rip + 0x1daa974]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x18231560c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182315611: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182315616: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18231561b: test rcx, rcx
// asm:   0x18231561e: jne 0x18231565d
// asm:   0x182315620: mov r14, qword ptr [rsp + 0x90]
// asm:   0x18231565d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__CaptureBaseline
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *__this;
  Il2CppClass *pIVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_String_o *pSVar4;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184347773 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0140
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    Il2CppMethodInitialized_184347773 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if (__this != (System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                          );
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
                );
      local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._currentValue = local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_48,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
                          );
        pIVar2 = local_48.fields._currentValue;
        if (!bVar3) {
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
                    );
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState(root,(MethodInfo *)0x0)
          ;
          return;
        }
        if (local_48.fields._currentValue == (Il2CppObject *)0x0) break;
        pIVar1 = local_48.fields._currentValue[3].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                           ((System_Func_string__o *)pIVar1,(MethodInfo *)0x0);
        pIVar2[2].monitor = pSVar4;
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,pSVar4);
        if (Il2CppMethodInitialized_18434777a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          Il2CppMethodInitialized_18434777a = '\x01';
        }
        if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (__this_00 = (root->fields)._State_k__BackingField,
           __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
          pIVar1 = pIVar2[1].klass;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          pSVar4 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow
                             ((System_String_o *)pIVar1,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this_00,pSVar4,false,(MethodInfo *)0x0);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SyncRow
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* rowId, const MethodInfo* method);
// 0x182316580
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231671b: mov rbp, qword ptr [rsp + 0x30]
// asm:   0x182316720: mov rsi, qword ptr [rsp + 0x40]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *rowId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_String_o *pSVar4;
  Il2CppObject *local_res10;
  
  if (Il2CppMethodInitialized_184347774 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_TryGetValue
              );
    Il2CppMethodInitialized_184347774 = '\x01';
  }
  local_res10 = (Il2CppObject *)0x0;
  bVar3 = System_String__IsNullOrEmpty(rowId,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_182316730:
      ThrowNullReferenceException();
    }
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)rowId,&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_TryGetValue
                      );
    pIVar2 = local_res10;
    if (bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      if (Il2CppMethodInitialized_184347779 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        Il2CppMethodInitialized_184347779 = '\x01';
      }
      if (pIVar2 == (Il2CppObject *)0x0) {
        bVar3 = false;
      }
      else {
        pIVar1 = pIVar2[3].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                           ((System_Func_string__o *)pIVar1,(MethodInfo *)0x0);
        bVar3 = System_String__Equals_196c550(pSVar4,pIVar2[2].monitor,4,(MethodInfo *)0x0);
        bVar3 = !bVar3;
      }
      if (Il2CppMethodInitialized_18434777a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        Il2CppMethodInitialized_18434777a = '\x01';
      }
      if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
         (__this_00 = (root->fields)._State_k__BackingField,
         __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
        if (pIVar2 == (Il2CppObject *)0x0) goto label_182316730;
        pIVar1 = pIVar2[1].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow
                           ((System_String_o *)pIVar1,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this_00,pSVar4,bVar3,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState(root,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SyncAll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncAll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823162e0
// eh: try 0x1823163f0..0x182316575 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182316511: mov rdx, qword ptr [rip + 0x1da9a68]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x182316518: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18231651d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182316522: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182316527: test rcx, rcx
// asm:   0x18231652a: jne 0x182316575
// asm:   0x18231652c: mov r15, qword ptr [rsp + 0x80]
// asm:   0x182316575: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncAll
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_String_o *pSVar4;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_184347775 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0140
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    Il2CppMethodInitialized_184347775 = '\x01';
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if (__this != (System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                          );
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_50,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
                );
      local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
      local_38.fields._index = local_50._8_4_;
      local_38.fields._version = local_50._12_4_;
      local_38.fields._currentValue = local_40;
      local_50._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_50._8_8_ = &local_38;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                            (&local_38,
                             (MethodInfo_155CFB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
                            );
          pIVar2 = local_38.fields._currentValue;
          if (!bVar3) {
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_38,
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
                      );
            if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
            }
            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState
                      (root,(MethodInfo *)0x0);
            return;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          if (Il2CppMethodInitialized_184347779 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
            Il2CppMethodInitialized_184347779 = '\x01';
          }
          if (pIVar2 == (Il2CppObject *)0x0) {
            bVar3 = false;
          }
          else {
            pIVar1 = pIVar2[3].klass;
            if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
            }
            pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                               ((System_Func_string__o *)pIVar1,(MethodInfo *)0x0);
            bVar3 = System_String__Equals_196c550(pSVar4,pIVar2[2].monitor,4,(MethodInfo *)0x0);
            bVar3 = !bVar3;
          }
          if (Il2CppMethodInitialized_18434777a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
            Il2CppMethodInitialized_18434777a = '\x01';
          }
        } while ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
                (__this_00 = (root->fields)._State_k__BackingField,
                __this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0));
        if (pIVar2 == (Il2CppObject *)0x0) break;
        pIVar1 = pIVar2[1].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow
                           ((System_String_o *)pIVar1,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this_00,pSVar4,bVar3,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$HasDirty
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__HasDirty (const MethodInfo* method);
// 0x182315cd0
// eh: try 0x182315dd0..0x182315e64 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182315e96: mov rdx, qword ptr [rip + 0x1daa0e3]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x182315e9d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182315ea2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182315ea7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182315eac: test rcx, rcx
// asm:   0x182315eaf: jne 0x182315ec9
// asm:   0x182315ec9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__HasDirty(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *__this;
  Il2CppClass *value;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_String_o *a;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_184347776 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0140
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    Il2CppMethodInitialized_184347776 = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if (__this != (System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                          );
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_00,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
                );
      local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._currentValue = local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = &local_28;
      do {
        do {
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                            (&local_28,
                             (MethodInfo_155CFB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
                            );
          pIVar1 = local_28.fields._currentValue;
          if (!bVar2) {
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
                      );
            return false;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          if (Il2CppMethodInitialized_184347779 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
            Il2CppMethodInitialized_184347779 = '\x01';
          }
        } while (pIVar1 == (Il2CppObject *)0x0);
        value = pIVar1[3].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        a = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                      ((System_Func_string__o *)value,(MethodInfo *)0x0);
        bVar2 = System_String__Equals_196c550(a,pIVar1[2].monitor,4,(MethodInfo *)0x0);
      } while (bVar2);
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
                );
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$DirtyPaths
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyPaths (const MethodInfo* method);
// 0x182315870
// eh: try 0x182315a30..0x182315ca7 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182315af5: mov rdx, qword ptr [rip + 0x1daa484]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x182315afc: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182315b01: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182315b06: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182315b0b: test rcx, rcx
// asm:   0x182315b0e: jne 0x182315ca7
// asm:   0x182315b14: xor esi, esi
// asm:   0x182315b16: mov r14, qword ptr [rsp + 0x98]
// asm:   0x182315b1e: mov r12, r14
// asm:   0x182315ca7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyPaths(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t capacity;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *__this;
  Il2CppClass *pIVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_String_o *a;
  UnityEngine_Rendering_DynamicArray_SortComparer_T__o *__this_02;
  System_Collections_Generic_List_string__o *__this_03;
  Il2CppObject *pIVar7;
  int index;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_184347777 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0140
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_Sort);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
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
    Il2CppMethodInitialized_184347777 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if (__this != (System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                          );
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
                );
      local_48 = (undefined1  [8])local_60._0_8_;
      pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
      local_38 = local_50;
      index = 0;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
      while( true ) {
        bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_48,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
                          );
        pIVar7 = local_38;
        if (!bVar6) break;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        if (Il2CppMethodInitialized_184347779 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          Il2CppMethodInitialized_184347779 = '\x01';
        }
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar3 = pIVar7[3].klass;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          a = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                        ((System_Func_string__o *)pIVar3,(MethodInfo *)0x0);
          bVar6 = System_String__Equals_196c550(a,pIVar7[2].monitor,4,(MethodInfo *)0x0);
          if (!bVar6) {
            if (__this_00 == (System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this_00,pIVar7,
                          MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_Add);
          }
        }
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
                );
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c);
      }
      __this_02 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields->
                  __9__7_0;
      if (__this_02 == (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c);
        }
        pIVar7 = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields->__9;
        __this_02 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Comparison_AottgSettingsDirtyRegistry_Entry);
        UnityEngine_Rendering_DynamicArray_SortComparer_object____ctor
                  (__this_02,pIVar7,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c_DirtyPaths_b__7_0,
                   (MethodInfo_C980B0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields->__9__7_0 =
             (System_Comparison_AottgSettingsDirtyRegistry_Entry__o *)__this_02;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c->static_fields->
                    __9__7_0,__this_02);
      }
      if (__this_00 != (System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry__o *)0x0) {
        System_Collections_Generic_List_object___Sort_949260
                  ((System_Collections_Generic_List_object__o *)__this_00,(System_Comparison_T__o *)__this_02,
                   (MethodInfo_949260 *)
                   MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_Sort);
        capacity = (__this_00->fields)._size;
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_T__o *)__this_03,capacity,
                   (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
        while( true ) {
          if ((__this_00->fields)._size <= index) {
            return __this_03;
          }
          pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_AottgSettingsDirtyRegistry_Entry_get_Item
                             );
          pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
          if ((pIVar7 == (Il2CppObject *)0x0) ||
             (__this_03 == (System_Collections_Generic_List_string__o *)0x0)) break;
          pIVar3 = pIVar7[2].klass;
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_03->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) break;
          uVar2 = (__this_03->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_03->fields)._size = uVar2 + 1;
            if ((uint)pSVar4->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[(int)uVar2] = (System_String_o *)pIVar3;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pIVar3);
            index = index + 1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pIVar3,
                       (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
            index = index + 1;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$DirtyCount
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyCount (const MethodInfo* method);
// 0x182315670
// eh: try 0x182315765..0x18231581b -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231582c: mov rdx, qword ptr [rip + 0x1daa74d]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
// asm:   0x182315833: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182315838: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18231583d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182315842: test rcx, rcx
// asm:   0x182315845: jne 0x182315860
// asm:   0x182315847: mov edi, dword ptr [rsp + 0x98]
// asm:   0x182315860: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyCount(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *__this;
  Il2CppClass *value;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_String_o *a;
  int iVar3;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184347778 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0140
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
              );
    Il2CppMethodInitialized_184347778 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries;
  if (__this != (System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_get_Values
                          );
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_00,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_AottgSettingsDirtyRegistry_Entry_Ge
                );
      local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._currentValue = local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      iVar3 = 0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_48,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist_40c0060
                          );
        pIVar1 = local_48.fields._currentValue;
        if (!bVar2) break;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        if (Il2CppMethodInitialized_184347779 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          Il2CppMethodInitialized_184347779 = '\x01';
        }
        if (pIVar1 != (Il2CppObject *)0x0) {
          value = pIVar1[3].klass;
          if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
          }
          a = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
                        ((System_Func_string__o *)value,(MethodInfo *)0x0);
          bVar2 = System_String__Equals_196c550(a,pIVar1[2].monitor,4,(MethodInfo *)0x0);
          if (!bVar2) {
            iVar3 = iVar3 + 1;
          }
        }
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_AottgSettingsDirtyRegist
                );
      return iVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$DirtyStateKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyStateKey (System_String_o* rowId, const MethodInfo* method);
// 0x182315cc0

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
// 0x182315ed0

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__IsDirty
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *entry,MethodInfo *method)

{
  System_Func_string__o *value;
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184347779 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_184347779 = '\x01';
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
  a = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue(value,(MethodInfo *)0x0);
  bVar1 = System_String__Equals_196c550(a,(entry->fields).Baseline,4,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SetRowState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetRowState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o* entry, bool dirty, const MethodInfo* method);
// 0x182316170

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetRowState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *entry,bool dirty,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434777a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_18434777a = '\x01';
  }
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this = (root->fields)._State_k__BackingField,
     __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    if (entry == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_Entry_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = (entry->fields).RowId;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__DirtyRow(pSVar1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,pSVar1,dirty,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SetSummaryState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x182316210

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SetSummaryState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_String_o *value;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434777b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&"settings.dirty.count");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.dirty.hasDirty");
    Il2CppMethodInitialized_18434777b = '\x01';
  }
  local_res8[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  local_res8[0] = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyCount((MethodInfo *)0x0);
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      value = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,"settings.dirty.count",value,(MethodInfo *)0x0);
    }
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                (pGVar1,"settings.dirty.hasDirty",0 < local_res8[0],(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$SafeValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue (System_Func_string__o* value, const MethodInfo* method);
// 0x182316120
// eh: try 0x182316134..0x182316165 -> pad 0x183331bd0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231614f: mov rax, qword ptr [rip + 0x203ecfa]
// asm:   0x182316156: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x18231615d: mov rax, qword ptr [rcx]
// asm:   0x183331bd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331bd5: push rbx
// asm:   0x183331bd6: push rbp
// asm:   0x183331bd7: push rdi
// asm:   0x183331bd8: sub rsp, 0x20
// asm:   0x183331bdc: mov rbp, rdx
// asm:   0x183331bdf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331be3: mov rax, qword ptr [rdi]
// asm:   0x183331be6: mov rbx, qword ptr [rax]
// asm:   0x183331be9: lea rcx, [rip + 0xd47368]  ; TypeInfo_System_Exception
// asm:   0x183331bf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331bf5: mov rcx, rax
// asm:   0x183331bf8: mov rdx, rbx
// asm:   0x183331bfb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331c00: test al, al
// asm:   0x183331c02: je 0x183331c10
// asm:   0x183331c04: movabs rax, 0
// asm:   0x183331c0e: jmp 0x183331c28
// asm:   0x183331c10: mov rax, qword ptr [rdi]
// asm:   0x183331c13: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331c17: lea rdx, [rip + 0xcaa36a]
// asm:   0x183331c1e: lea rcx, [rbp + 0x20]
// asm:   0x183331c22: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331c28: add rsp, 0x20
// asm:   0x183331c2c: pop rdi
// asm:   0x183331c2d: pop rbp
// asm:   0x183331c2e: pop rbx
// asm:   0x183331c2f: ret 

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SafeValue
          (System_Func_string__o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((value != (System_Func_string__o *)0x0) &&
     (pSVar1 = (System_String_o *)
               (*(code *)(value->fields).invoke_impl)((value->fields).method_code,(value->fields).method),
     pSVar1 != (System_String_o *)0x0)) {
    return pSVar1;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDirtyRegistry$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___cctor (const MethodInfo* method);
// 0x182316740

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__AottgSettingsDirtyRegistry_Entry__o *__this;
  
  if (Il2CppMethodInitialized_18434777c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_18434777c = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor_1453150
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AottgSettingsDirtyRegistry_Entry_ctor);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->static_fields->Entries,
             __this);
  return;
}


