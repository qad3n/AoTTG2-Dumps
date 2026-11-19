// Type: Gisketch.Aottg2UI.Code.AottgActionRegistry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgActionRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgActionRegistry$$Clear
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__Clear (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, const MethodInfo* method);
// 0x5361250

void Gisketch_Aottg2UI_Code_AottgActionRegistry__Clear
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_075429b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Clear);
    Il2CppMethodInitialized_075429b9 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this_00,
             (MethodInfo_4AAD690 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Clear);
  (__this->fields)._next = 0;
  return;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$ClearOwner
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerId, const MethodInfo* method);
// 0x53612a0
// eh: try 0x536149f..0x5361615 -> pad 0x536161a (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x536163e..0x5361643 -> pad 0x5361660 cleanup
// eh: try 0x5361663..0x536166d -> pad 0x53616ca catch (...) [compiler noexcept guard]
// eh: try 0x536168b..0x5361690 -> pad 0x53616b5 cleanup
// eh: try 0x53616b8..0x53616c2 -> pad 0x53616ca catch (...) [compiler noexcept guard]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x536147e: mov r12, rsp
// asm:   0x5361481: jmp 0x53614aa
// asm:   0x5361520: mov rbx, rsp
// asm:   0x5361523: nop word ptr cs:[rax + rax]
// asm:   0x536161a: jmp 0x5361626
// asm:   0x536161c: jmp 0x5361626
// asm:   0x536161e: jmp 0x5361626
// asm:   0x5361620: jmp 0x5361626
// asm:   0x5361622: jmp 0x5361626
// asm:   0x5361624: jmp 0x5361626
// asm:   0x5361626: mov rbx, rax
// asm:   0x5361629: cmp edx, 1
// asm:   0x536162c: jne 0x5361663
// asm:   0x536162e: mov rdi, rbx
// asm:   0x5361631: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5361636: mov rbx, qword ptr [rax]
// asm:   0x5361639: mov qword ptr [rsp + 0x18], rbx
// asm:   0x536163e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5361643: lea rax, [rip + 0x1f2e636]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
// asm:   0x536164a: mov rsi, qword ptr [rax]
// asm:   0x536164d: mov rdi, rsp
// asm:   0x5361650: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5361655: test rbx, rbx
// asm:   0x5361658: je 0x5361578
// asm:   0x536165e: jmp 0x53616ad
// asm:   0x5361660: mov rbx, rax
// asm:   0x5361663: lea rdi, [rsp + 0x18]
// asm:   0x5361668: call 0x2d4af60  ; il2cpp_runtime_helper_02d4af60()
// asm:   0x536166d: jmp 0x53616c2
// asm:   0x536166f: jmp 0x5361673
// asm:   0x5361671: jmp 0x5361673
// asm:   0x5361673: mov rbx, rax
// asm:   0x5361676: cmp edx, 1
// asm:   0x5361679: jne 0x53616b8
// asm:   0x536167b: mov rdi, rbx
// asm:   0x536167e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5361683: mov rbx, qword ptr [rax]
// asm:   0x5361686: mov qword ptr [rsp + 0x18], rbx
// asm:   0x536168b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5361690: lea rax, [rip + 0x1f2d461]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5361697: mov rsi, qword ptr [rax]
// asm:   0x536169a: lea rdi, [rsp + 0x30]
// asm:   0x536169f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x53616a4: test rbx, rbx
// asm:   0x53616a7: je 0x53615fc
// asm:   0x53616ad: mov rdi, rbx
// asm:   0x53616b0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x53616b5: mov rbx, rax
// asm:   0x53616b8: lea rdi, [rsp + 0x18]
// asm:   0x53616bd: call 0x2d4af90  ; il2cpp_runtime_helper_02d4af90()
// asm:   0x53616c2: mov rdi, rbx
// asm:   0x53616c5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53616ca: mov rdi, rax
// asm:   0x53616cd: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerId,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  System_String_o *item;
  undefined1 *puVar6;
  bool bVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  undefined1 local_78 [8];
  undefined1 *puStack_70;
  System_String_o *local_68;
  undefined1 local_60 [16];
  System_String_o *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_075429ba == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_718fc88
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_718fc90
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
    Il2CppMethodInitialized_075429ba = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  local_68 = (System_String_o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar7 = System_String__IsNullOrEmpty(ownerId,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  if (ownerId != (System_String_o *)0x0) {
    pSVar8 = System_String__Replace(ownerId,0x20,0x2d,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_5301f10
                       ("code.",pSVar8,".",(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
    if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (pSVar3,(MethodInfo_4AAD0F0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_get_Keys
                              ),
       __this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_01,
                 (MethodInfo_511A520 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Action_GisketchActionContext_GetEnume
                );
      local_68 = local_50;
      local_78 = (undefined1  [8])local_60._0_8_;
      puStack_70 = (undefined1 *)local_60._8_8_;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = local_78;
      puVar6 = local_78;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        do {
          local_60._8_8_ = puVar6;
          bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )local_78,
                             (MethodInfo_4CE7080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_718fc88
                            );
          if (!bVar7) goto label_05361566;
          if (local_68 == (System_String_o *)0x0) goto label_05361610;
          bVar7 = System_String__StartsWith_53002b0(local_68,pSVar8,5,(MethodInfo *)0x0);
          puVar6 = (undefined1 *)local_60._8_8_;
        } while (!bVar7);
label_05361561:
        ThrowNullReferenceException();
      }
      while (bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                 *)local_78,
                                (MethodInfo_4CE7080 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_718fc88
                               ), item = local_68, bVar7) {
        if (local_68 == (System_String_o *)0x0) {
label_05361610:
          ThrowNullReferenceException();
        }
        bVar7 = System_String__StartsWith_53002b0(local_68,pSVar8,5,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (bVar7) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_05361561;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
        }
      }
label_05361566:
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_78,
                 (MethodInfo_4CE7070 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
                );
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_60._8_8_ = &local_48;
        while( true ) {
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          if (!bVar7) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            return;
          }
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar3,local_48.fields._current,
                     (MethodInfo_4AAED10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Remove
                    );
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$ClearOwnersWithPrefix
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwnersWithPrefix (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerIdPrefix, const MethodInfo* method);
// 0x53616e0
// eh: try 0x53618bf..0x5361a35 -> pad 0x5361a3a (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5361a5e..0x5361a63 -> pad 0x5361a80 cleanup
// eh: try 0x5361a83..0x5361a8d -> pad 0x5361aea catch (...) [compiler noexcept guard]
// eh: try 0x5361aab..0x5361ab0 -> pad 0x5361ad5 cleanup
// eh: try 0x5361ad8..0x5361ae2 -> pad 0x5361aea catch (...) [compiler noexcept guard]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53618a8: mov r12, rsp
// asm:   0x53618ab: jmp 0x53618ca
// asm:   0x5361940: mov rbx, rsp
// asm:   0x5361943: nop word ptr cs:[rax + rax]
// asm:   0x5361a3a: jmp 0x5361a46
// asm:   0x5361a3c: jmp 0x5361a46
// asm:   0x5361a3e: jmp 0x5361a46
// asm:   0x5361a40: jmp 0x5361a46
// asm:   0x5361a42: jmp 0x5361a46
// asm:   0x5361a44: jmp 0x5361a46
// asm:   0x5361a46: mov rbx, rax
// asm:   0x5361a49: cmp edx, 1
// asm:   0x5361a4c: jne 0x5361a83
// asm:   0x5361a4e: mov rdi, rbx
// asm:   0x5361a51: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5361a56: mov rbx, qword ptr [rax]
// asm:   0x5361a59: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5361a5e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5361a63: lea rax, [rip + 0x1f2e216]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
// asm:   0x5361a6a: mov rsi, qword ptr [rax]
// asm:   0x5361a6d: mov rdi, rsp
// asm:   0x5361a70: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5361a75: test rbx, rbx
// asm:   0x5361a78: je 0x5361998
// asm:   0x5361a7e: jmp 0x5361acd
// asm:   0x5361a80: mov rbx, rax
// asm:   0x5361a83: lea rdi, [rsp + 0x18]
// asm:   0x5361a88: call 0x2d4afc0  ; il2cpp_runtime_helper_02d4afc0()
// asm:   0x5361a8d: jmp 0x5361ae2
// asm:   0x5361a8f: jmp 0x5361a93
// asm:   0x5361a91: jmp 0x5361a93
// asm:   0x5361a93: mov rbx, rax
// asm:   0x5361a96: cmp edx, 1
// asm:   0x5361a99: jne 0x5361ad8
// asm:   0x5361a9b: mov rdi, rbx
// asm:   0x5361a9e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5361aa3: mov rbx, qword ptr [rax]
// asm:   0x5361aa6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5361aab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5361ab0: lea rax, [rip + 0x1f2d041]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5361ab7: mov rsi, qword ptr [rax]
// asm:   0x5361aba: lea rdi, [rsp + 0x30]
// asm:   0x5361abf: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5361ac4: test rbx, rbx
// asm:   0x5361ac7: je 0x5361a1c
// asm:   0x5361acd: mov rdi, rbx
// asm:   0x5361ad0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5361ad5: mov rbx, rax
// asm:   0x5361ad8: lea rdi, [rsp + 0x18]
// asm:   0x5361add: call 0x2d4aff0  ; il2cpp_runtime_helper_02d4aff0()
// asm:   0x5361ae2: mov rdi, rbx
// asm:   0x5361ae5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5361aea: mov rdi, rax
// asm:   0x5361aed: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwnersWithPrefix
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerIdPrefix,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  System_String_o *item;
  undefined1 *puVar6;
  bool bVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  undefined1 local_78 [8];
  undefined1 *puStack_70;
  System_String_o *local_68;
  undefined1 local_60 [16];
  System_String_o *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_075429bb == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_718fc88
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_718fc90
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
    Il2CppMethodInitialized_075429bb = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  local_68 = (System_String_o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar7 = System_String__IsNullOrEmpty(ownerIdPrefix,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  if (ownerIdPrefix != (System_String_o *)0x0) {
    pSVar8 = System_String__Replace(ownerIdPrefix,0x20,0x2d,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_52f0320("code.",pSVar8,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
    if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (pSVar3,(MethodInfo_4AAD0F0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_get_Keys
                              ),
       __this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_01,
                 (MethodInfo_511A520 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Action_GisketchActionContext_GetEnume
                );
      local_68 = local_50;
      local_78 = (undefined1  [8])local_60._0_8_;
      puStack_70 = (undefined1 *)local_60._8_8_;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = local_78;
      puVar6 = local_78;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        do {
          local_60._8_8_ = puVar6;
          bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )local_78,
                             (MethodInfo_4CE7080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_718fc88
                            );
          if (!bVar7) goto label_05361986;
          if (local_68 == (System_String_o *)0x0) goto label_05361a30;
          bVar7 = System_String__StartsWith_53002b0(local_68,pSVar8,5,(MethodInfo *)0x0);
          puVar6 = (undefined1 *)local_60._8_8_;
        } while (!bVar7);
label_05361981:
        ThrowNullReferenceException();
      }
      while (bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                 *)local_78,
                                (MethodInfo_4CE7080 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte_718fc88
                               ), item = local_68, bVar7) {
        if (local_68 == (System_String_o *)0x0) {
label_05361a30:
          ThrowNullReferenceException();
        }
        bVar7 = System_String__StartsWith_53002b0(local_68,pSVar8,5,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (bVar7) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_05361981;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
        }
      }
label_05361986:
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_78,
                 (MethodInfo_4CE7070 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Action_GisketchActionConte
                );
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_60._8_8_ = &local_48;
        while( true ) {
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          if (!bVar7) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            return;
          }
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar3,local_48.fields._current,
                     (MethodInfo_4AAED10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Remove
                    );
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$Register
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgActionRegistry__Register (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerId, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x5361b00

System_String_o *
Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
          (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerId,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *str3;
  System_String_o *pSVar2;
  int local_1c;
  
  if (Il2CppMethodInitialized_075429bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"code.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_075429bc = '\x01';
  }
  if (action == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    bVar1 = System_String__IsNullOrEmpty(ownerId,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = "surface";
    }
    else {
      if (ownerId == (System_String_o *)0x0) goto label_05361c15;
      pSVar2 = System_String__Replace(ownerId,0x20,0x2d,(MethodInfo *)0x0);
    }
    local_1c = (__this->fields)._next;
    (__this->fields)._next = local_1c + 1;
    str3 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_5302810
                       ("code.",pSVar2,".",str3,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05361c15:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)pSVar2,(Il2CppObject *)action,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$TryHandle
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5361c20

bool Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  bool bVar2;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_075429bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_TryGetValue
              );
    Il2CppMethodInitialized_075429bd = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  bVar2 = false;
  bVar1 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05361cc4:
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)actionId,&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_TryGetValue
                      );
    if (bVar1) {
      if (local_20 == (Il2CppObject *)0x0) goto label_05361cc4;
      (*local_20[1].monitor)(local_20[4].klass,local_20[2].monitor);
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, const MethodInfo* method);
// 0x5361cd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5361cfc: cmp byte ptr [rip + 0x21e0b83], 0

void Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *__this_00;
  
  if (Il2CppMethodInitialized_075429be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_075429be = '\x01';
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
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_ctor);
  (__this->fields)._actions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


