// Type: Gisketch.Aottg2UI.Code.AottgActionRegistry
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgActionRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgActionRegistry$$Clear
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__Clear (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, const MethodInfo* method);
// 0x1818c1110

void Gisketch_Aottg2UI_Code_AottgActionRegistry__Clear
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *__this_00;
  
  if (Il2CppMethodInitialized_18434203c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Clear);
    Il2CppMethodInitialized_18434203c = '\x01';
  }
  __this_00 = (__this->fields)._actions;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Clear);
    (__this->fields)._next = 0;
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$ClearOwner
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerId, const MethodInfo* method);
// 0x1818c0a70
// eh: try 0x1818c0c50..0x1818c0dbe -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c0cb9: mov rdx, qword ptr [rip + 0x27f5000]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
// asm:   0x1818c0cc0: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818c0cc5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818c0cca: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818c0ccf: test rcx, rcx
// asm:   0x1818c0cd2: jne 0x1818c0db2
// asm:   0x1818c0cd8: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x1818c0ce0: mov rsi, qword ptr [rsp + 0xa8]
// asm:   0x1818c0d2e: nop 
// asm:   0x1818c0d72: mov rdx, qword ptr [rip + 0x27d6b9f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1818c0d79: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818c0d7e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818c0d83: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818c0d88: test rcx, rcx
// asm:   0x1818c0d8b: jne 0x1818c0dbe
// asm:   0x1818c0db2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1818c0dbe: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerId,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  undefined1 local_68 [16];
  System_String_o *local_58;
  undefined1 local_50 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_48;
  System_String_o *local_40;
  undefined1 local_38 [8];
  uint64_t uStack_30;
  System_String_o *local_28;
  
  if (Il2CppMethodInitialized_18434203d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_get_Keys)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_40b5da0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_40b5e80
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Action_GisketchActionContext_GetEnume
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"code.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_18434203d = '\x01';
  }
  local_50 = (undefined1  [8])0x0;
  pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_40 = (System_String_o *)0x0;
  local_38 = (undefined1  [8])0x0;
  uStack_30 = 0;
  local_28 = (System_String_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(ownerId,(MethodInfo *)0x0);
  if (!bVar2) {
    if (ownerId != (System_String_o *)0x0) {
      pSVar3 = System_String__Replace(ownerId,0x20,0x2d,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969b70
                         ("code.",pSVar3,".",(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      __this_00 = (__this->fields)._actions;
      if ((__this_00 != (System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *)0x0)
         && (__this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                         System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                    (MethodInfo_13C6500 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_get_Keys
                                   ),
            __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_68,__this_03,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Action_GisketchActionContext_GetEnume
                  );
        local_50 = (undefined1  [8])local_68._0_8_;
        pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68._8_8_;
        local_40 = local_58;
        local_68._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50;
        while (bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                 ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)local_50,
                                  (MethodInfo_156BDD0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_40b5da0
                                 ), pSVar1 = local_40, bVar2) {
          if (local_40 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar2 = System_String__StartsWith_19722c0(local_40,pSVar3,5,(MethodInfo *)0x0);
          if (bVar2) {
            if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this_02,pSVar1,MethodInfo_System_Collections_Generic_List_string_Add);
          }
        }
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
                  );
        if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                     (System_Collections_Generic_List_T__o *)__this_02,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_38 = (undefined1  [8])local_68._0_8_;
          uStack_30 = local_68._8_8_;
          local_28 = local_58;
          local_68._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_38,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            if (!bVar2) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
              return;
            }
            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (__this_01,(Il2CppObject *)local_28,
                       (MethodInfo_1470BF0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Remove
                      );
          }
          ThrowNullReferenceException();
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$ClearOwnersWithPrefix
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwnersWithPrefix (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerIdPrefix, const MethodInfo* method);
// 0x1818c0dd0
// eh: try 0x1818c0f94..0x1818c1100 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c0ffd: mov rdx, qword ptr [rip + 0x27f4cbc]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
// asm:   0x1818c1004: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818c1009: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818c100e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818c1013: test rcx, rcx
// asm:   0x1818c1016: jne 0x1818c10f4
// asm:   0x1818c101c: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x1818c1024: mov rsi, qword ptr [rsp + 0xa8]
// asm:   0x1818c10b4: mov rdx, qword ptr [rip + 0x27d685d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1818c10bb: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818c10c0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818c10c5: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818c10ca: test rcx, rcx
// asm:   0x1818c10cd: jne 0x1818c1100
// asm:   0x1818c10f4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1818c1100: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwnersWithPrefix
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerIdPrefix,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  undefined1 local_68 [16];
  System_String_o *local_58;
  undefined1 local_50 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_48;
  System_String_o *local_40;
  undefined1 local_38 [8];
  uint64_t uStack_30;
  System_String_o *local_28;
  
  if (Il2CppMethodInitialized_18434203e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_get_Keys)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_40b5da0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_40b5e80
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Action_GisketchActionContext_GetEnume
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"code.");
    Il2CppMethodInitialized_18434203e = '\x01';
  }
  local_50 = (undefined1  [8])0x0;
  pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_40 = (System_String_o *)0x0;
  local_38 = (undefined1  [8])0x0;
  uStack_30 = 0;
  local_28 = (System_String_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(ownerIdPrefix,(MethodInfo *)0x0);
  if (!bVar2) {
    if (ownerIdPrefix != (System_String_o *)0x0) {
      pSVar3 = System_String__Replace(ownerIdPrefix,0x20,0x2d,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50("code.",pSVar3,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      __this_00 = (__this->fields)._actions;
      if ((__this_00 != (System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *)0x0)
         && (__this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                         System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                    (MethodInfo_13C6500 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_get_Keys
                                   ),
            __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_68,__this_03,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Action_GisketchActionContext_GetEnume
                  );
        local_50 = (undefined1  [8])local_68._0_8_;
        pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68._8_8_;
        local_40 = local_58;
        local_68._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50;
        while (bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                 ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)local_50,
                                  (MethodInfo_156BDD0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_40b5da0
                                 ), pSVar1 = local_40, bVar2) {
          if (local_40 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar2 = System_String__StartsWith_19722c0(local_40,pSVar3,5,(MethodInfo *)0x0);
          if (bVar2) {
            if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this_02,pSVar1,MethodInfo_System_Collections_Generic_List_string_Add);
          }
        }
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
                  );
        if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                     (System_Collections_Generic_List_T__o *)__this_02,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_38 = (undefined1  [8])local_68._0_8_;
          uStack_30 = local_68._8_8_;
          local_28 = local_58;
          local_68._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_38,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            if (!bVar2) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
              return;
            }
            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (__this_01,(Il2CppObject *)local_28,
                       (MethodInfo_1470BF0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Remove
                      );
          }
          ThrowNullReferenceException();
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$Register
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgActionRegistry__Register (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerId, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x1818c1160
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c11d7: mov rbx, qword ptr [rip + 0x2831b22]  ; "surface"
// asm:   0x1818c11de: jmp 0x1818c1202

System_String_o *
Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
          (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerId,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *str3;
  System_String_o *pSVar2;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_18434203f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"code.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_18434203f = '\x01';
  }
  local_res18[0] = 0;
  if (action == (System_Action_GisketchActionContext__o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  bVar1 = System_String__IsNullOrEmpty(ownerId,(MethodInfo *)0x0);
  pSVar2 = "surface";
  if (!bVar1) {
    if (ownerId == (System_String_o *)0x0) goto label_1818c128e;
    pSVar2 = System_String__Replace(ownerId,0x20,0x2d,(MethodInfo *)0x0);
  }
  local_res18[0] = (__this->fields)._next;
  (__this->fields)._next = local_res18[0] + 1;
  str3 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969590
                     ("code.",pSVar2,".",str3,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)pSVar2,(Il2CppObject *)action,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item);
    return pSVar2;
  }
label_1818c128e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$TryHandle
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1818c12a0

bool Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_res10;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_184342040 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_TryGetValue
              );
    Il2CppMethodInitialized_184342040 = '\x01';
  }
  local_res10 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)actionId,&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_TryGetValue
                      );
    if (!bVar1) {
      return false;
    }
    if (local_res10 != (Il2CppObject *)0x0) {
      local_28 = *(undefined4 *)&(context->fields).ElementId;
      uStack_24 = *(undefined4 *)((longlong)&(context->fields).ElementId + 4);
      uStack_20 = *(undefined4 *)&(context->fields).GameObject;
      uStack_1c = *(undefined4 *)((longlong)&(context->fields).GameObject + 4);
      local_18 = *(undefined4 *)&(context->fields).Node;
      uStack_14 = *(undefined4 *)((longlong)&(context->fields).Node + 4);
      iStack_10 = (context->fields).InputSource;
      uStack_c = *(undefined4 *)&(context->fields).field_0x1c;
      (*local_res10[1].monitor)(local_res10[4].klass,&local_28,local_res10[2].monitor);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, const MethodInfo* method);
// 0x1818c1370

void Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *__this_00;
  
  if (Il2CppMethodInitialized_184342041 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184342041 = '\x01';
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
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_ctor);
  (__this->fields)._actions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


