// Type: Gisketch.Aottg2UI.Search.GisketchSearchResults
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchResults.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7___ctor (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x534b280

void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_IDisposable_Dispose (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x534b2b0

void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x534b2c0

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__MoveNext
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this,MethodInfo *method)

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
    return false;
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.Generic.IEnumerator<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.get_Current
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x534b2e0

Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x534b2f0

void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x534b330

Il2CppObject *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x534b340

System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this_00;
  
  if (Il2CppMethodInitialized_075428f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    Il2CppMethodInitialized_075428f4 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x534b3c0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this_00;
  
  if (Il2CppMethodInitialized_075428f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    Il2CppMethodInitialized_075428f4 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$Merge
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* manifest, System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* live, System_String_o* activeScreenId, const MethodInfo* method);
// 0x5349cf0
// eh: try 0x534a0af..0x534a617 -> pad 0x534a90c (+15 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534a71f..0x534a7b2 -> pad 0x534a866 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x534a7dd..0x534a7f1 -> pad 0x534a8d6 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534a7f1..0x534a7f6 -> pad 0x534a877 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x534a7f6..0x534a7fb -> pad 0x534a875 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534a7fb..0x534a800 -> pad 0x534a86a catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x534a800..0x534a805 -> pad 0x534a861 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534a805..0x534a80a -> pad 0x534a858 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x534a80a..0x534a826 -> pad 0x534a849 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534a88f..0x534a894 -> pad 0x534a8b9 cleanup
// eh: try 0x534a8bc..0x534a8c6 -> pad 0x534a946 catch (...) [compiler noexcept guard]
// eh: try 0x534a8f1..0x534a8f6 -> pad 0x534a8fb cleanup
// eh: try 0x534a8fe..0x534a908 -> pad 0x534a946 catch (...) [compiler noexcept guard]
// eh: try 0x534a927..0x534a92c -> pad 0x534a931 cleanup
// eh: try 0x534a934..0x534a93e -> pad 0x534a946 catch (...) [compiler noexcept guard]
// asm: 99 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5349f7d: nop dword ptr [rax]
// asm:   0x534a057: lea r15, [rip + 0x1f2f39a]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x534a05e: lea r13, [rip + 0x1f26f1b]  ; TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry
// asm:   0x534a065: jmp 0x534a07e
// asm:   0x534a070: mov rbp, qword ptr [rsp + 8]
// asm:   0x534a075: test rbp, rbp
// asm:   0x534a078: je 0x534a7e2
// asm:   0x534a09e: nop 
// asm:   0x534a39e: lea r14, [rip + 0x1f2f053]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x534a3a5: lea r13, [rip + 0x1f26bd4]  ; TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry
// asm:   0x534a3ac: lea r15, [rip + 0x1f4a51d]  ; MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add
// asm:   0x534a3b3: jmp 0x534a3ce
// asm:   0x534a3c0: mov rbp, qword ptr [rsp + 8]
// asm:   0x534a3c5: test rbp, rbp
// asm:   0x534a3c8: je 0x534a7ec
// asm:   0x534a3ee: nop 
// asm:   0x534a52d: nop dword ptr [rax]
// asm:   0x534a80f: mov rdi, r15
// asm:   0x534a812: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534a826: jmp 0x534a8d6
// asm:   0x534a82b: jmp 0x534a8d6
// asm:   0x534a830: jmp 0x534a8d6
// asm:   0x534a835: jmp 0x534a8d6
// asm:   0x534a83a: jmp 0x534a8d6
// asm:   0x534a83f: jmp 0x534a8d6
// asm:   0x534a844: jmp 0x534a90c
// asm:   0x534a849: jmp 0x534a90c
// asm:   0x534a84e: jmp 0x534a90c
// asm:   0x534a853: jmp 0x534a90c
// asm:   0x534a858: jmp 0x534a877
// asm:   0x534a85a: jmp 0x534a877
// asm:   0x534a85c: jmp 0x534a90c
// asm:   0x534a861: jmp 0x534a90c
// asm:   0x534a866: jmp 0x534a877
// asm:   0x534a868: jmp 0x534a877
// asm:   0x534a86a: jmp 0x534a877
// asm:   0x534a86c: jmp 0x534a877
// asm:   0x534a86e: jmp 0x534a90c
// asm:   0x534a873: jmp 0x534a8d6
// asm:   0x534a875: jmp 0x534a8d6
// asm:   0x534a877: mov rbp, rax
// asm:   0x534a87a: cmp edx, 1
// asm:   0x534a87d: jne 0x534a8bc
// asm:   0x534a87f: mov rdi, rbp
// asm:   0x534a882: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534a887: mov rbp, qword ptr [rax]
// asm:   0x534a88a: mov qword ptr [rsp + 0x10], rbp
// asm:   0x534a88f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534a894: lea rax, [rip + 0x1f4350d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose
// asm:   0x534a89b: mov rsi, qword ptr [rax]
// asm:   0x534a89e: lea rdi, [rsp + 0x40]
// asm:   0x534a8a3: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x534a8a8: test rbp, rbp
// asm:   0x534a8ab: je 0x534a7cb
// asm:   0x534a8b1: mov rdi, rbp
// asm:   0x534a8b4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534a8b9: mov rbp, rax
// asm:   0x534a8bc: lea rdi, [rsp + 0x10]
// asm:   0x534a8c1: call 0x2d4a5a0  ; il2cpp_runtime_helper_02d4a5a0()
// asm:   0x534a8c6: jmp 0x534a93e
// asm:   0x534a8c8: jmp 0x534a8d6
// asm:   0x534a8ca: jmp 0x534a8d6
// asm:   0x534a8cc: jmp 0x534a8d6
// asm:   0x534a8ce: jmp 0x534a90c
// asm:   0x534a8d0: jmp 0x534a90c
// asm:   0x534a8d2: jmp 0x534a8d6
// asm:   0x534a8d4: jmp 0x534a8d6
// asm:   0x534a8d6: mov rbp, rax
// asm:   0x534a8d9: cmp edx, 1
// asm:   0x534a8dc: jne 0x534a8fe
// asm:   0x534a8de: mov rdi, rbp
// asm:   0x534a8e1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534a8e6: mov r15, qword ptr [rax]
// asm:   0x534a8e9: mov qword ptr [rsp + 0x10], r15
// asm:   0x534a8ee: xor r14d, r14d
// asm:   0x534a8f1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534a8f6: jmp 0x534a625
// asm:   0x534a8fb: mov rbp, rax
// asm:   0x534a8fe: lea rdi, [rsp + 0x10]
// asm:   0x534a903: call 0x2d4a510  ; il2cpp_runtime_helper_02d4a510()
// asm:   0x534a908: jmp 0x534a93e
// asm:   0x534a90a: jmp 0x534a90c
// asm:   0x534a90c: mov rbp, rax
// asm:   0x534a90f: cmp edx, 1
// asm:   0x534a912: jne 0x534a934
// asm:   0x534a914: mov rdi, rbp
// asm:   0x534a917: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534a91c: mov r15, qword ptr [rax]
// asm:   0x534a91f: mov qword ptr [rsp + 0x10], r15
// asm:   0x534a924: xor r14d, r14d
// asm:   0x534a927: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534a92c: jmp 0x534a235
// asm:   0x534a931: mov rbp, rax
// asm:   0x534a934: lea rdi, [rsp + 0x10]
// asm:   0x534a939: call 0x2d4a480  ; il2cpp_runtime_helper_02d4a480()
// asm:   0x534a93e: mov rdi, rbp
// asm:   0x534a941: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x534a946: mov rdi, rax
// asm:   0x534a949: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *manifest,
          System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *live,System_String_o *activeScreenId,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_c *pGVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppClass *pIVar6;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar7;
  char cVar8;
  bool bVar9;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_HashSet_string__o *__this_00;
  VirtualInvokeData *pVVar10;
  Il2CppObject *pIVar11;
  MethodInfo *pMVar12;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar13;
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this_01;
  ulong uVar14;
  MethodInfo *method_00;
  long lVar15;
  Il2CppObject *local_90;
  undefined1 local_88 [16];
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *local_78;
  System_Collections_Generic_HashSet_string__o *local_70;
  System_Collections_Generic_List_GisketchSearchEntry__o *local_68;
  System_Collections_Generic_HashSet_string__o *local_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *local_48;
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *local_38;
  
  if (Il2CppMethodInitialized_075428ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_075428ee = '\x01';
  }
  local_90 = (Il2CppObject *)0x0;
  local_58 = (undefined1  [8])0x0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  local_48 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05349e3d;
label_05349fb7:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05349fb7;
label_05349e3d:
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pMVar12 = (MethodInfo *)TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  local_60 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)local_60,
             (System_Collections_Generic_IEqualityComparer_T__o *)pMVar12,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  local_38 = (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)manifest;
  screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles(manifest,pMVar12);
  local_68 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)local_68,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (live == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (Il2CppMethodInitialized_075428f3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
      Il2CppMethodInitialized_075428f3 = '\x01';
    }
    live = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7___ctor
              ((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)live,-2,(MethodInfo *)0x0);
    if ((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)live ==
        (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)0x0) {
label_0534a817:
      ThrowNullReferenceException();
    }
  }
  pGVar4 = ((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)live)->klass;
  uVar14 = (ulong)(pGVar4->_2).interface_offsets_count;
  local_70 = __this_00;
  if (uVar14 != 0) {
    pIVar5 = (pGVar4->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_GisketchSearchEntry__c **)
           ((long)&pIVar5->interfaceType + lVar15) ==
          TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry) {
        pVVar10 = (VirtualInvokeData *)
                  &(&(pGVar4->vtable)._0_Equals)[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
        goto label_0534a02a;
      }
      lVar15 = lVar15 + 0x10;
    } while (uVar14 * 0x10 != lVar15);
  }
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)live,
                       (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry,0);
label_0534a02a:
  pIVar11 = (*pVVar10->methodPtr)((Il2CppObject *)live,pVVar10->method);
  local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_88._8_8_ = &local_90;
joined_r0x0534a051:
  do {
    local_90 = pIVar11;
    if (pIVar11 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = pIVar11->klass;
    uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar5 = (pIVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar15) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar10 = (VirtualInvokeData *)&pIVar6->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
          goto label_0534a0d3;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0534a0d3:
    cVar8 = (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
    pIVar11 = local_90;
    if (cVar8 == '\0') {
      if (local_90 == (Il2CppObject *)0x0) goto label_0534a2a6;
      pIVar6 = local_90->klass;
      uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar14 == 0) goto label_0534a27f;
      pIVar5 = (pIVar6->_1).interfaceOffsets;
      lVar15 = 0;
      goto label_0534a270;
    }
    if (local_90 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = local_90->klass;
    uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar5 = (pIVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_GisketchSearchEntry__c **)
             ((long)&pIVar5->interfaceType + lVar15) ==
            TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry) {
          pMVar12 = (MethodInfo *)&pIVar6->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
          goto label_0534a153;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pMVar12 = (MethodInfo *)
              GetInterfaceInvokeDataFromVTableSlowPath
                        (local_90,(Il2CppClass *)
                                  TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry,0);
label_0534a153:
    method_00 = (MethodInfo *)pMVar12->virtualMethodPointer;
    pGVar13 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar12->methodPointer)(pIVar11,method_00);
    pIVar11 = local_90;
  } while (((pGVar13 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) ||
           (bVar9 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar13,method_00),
           pIVar11 = local_90, !bVar9)) ||
          (bVar9 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                             (pGVar13,activeScreenId,screenTitles,pMVar12),
          pMVar12 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add, pIVar11 = local_90,
          bVar9));
  if (local_68 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    piVar1 = &(local_68->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar7 = (local_68->fields)._items;
    if (pGVar7 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
      uVar3 = (local_68->fields)._size;
      if (uVar3 < (uint)pGVar7->max_length) {
        (local_68->fields)._size = uVar3 + 1;
        pGVar7->m_Items[(int)uVar3] = pGVar13;
        Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)local_68,(Il2CppObject *)pGVar13,
                   (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
      }
      bVar9 = System_String__IsNullOrEmpty((pGVar13->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      pIVar11 = local_90;
      if (!bVar9) {
        if (local_70 == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)local_70,
                   (Il2CppObject *)(pGVar13->fields)._TargetId_k__BackingField,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        pIVar11 = local_90;
      }
      goto joined_r0x0534a051;
    }
  }
  ThrowNullReferenceException();
  while (lVar15 = lVar15 + 0x10, uVar14 * 0x10 != lVar15) {
label_0534a270:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_System_IDisposable) {
      pVVar10 = (VirtualInvokeData *)&pIVar6->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
      goto label_0534a29d;
    }
  }
label_0534a27f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(local_90,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0534a29d:
  (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
label_0534a2a6:
  __this_01 = local_38;
  if (local_38 == (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)0x0) {
    if (Il2CppMethodInitialized_075428f3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
      Il2CppMethodInitialized_075428f3 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7___ctor(__this_01,-2,(MethodInfo *)0x0);
    if (__this_01 == (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)0x0) goto label_0534a817;
  }
  pGVar4 = __this_01->klass;
  uVar14 = (ulong)(pGVar4->_2).interface_offsets_count;
  if (uVar14 != 0) {
    pIVar5 = (pGVar4->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_GisketchSearchEntry__c **)
           ((long)&pIVar5->interfaceType + lVar15) ==
          TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry) {
        pVVar10 = (VirtualInvokeData *)
                  &(&(pGVar4->vtable)._0_Equals)[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
        goto label_0534a371;
      }
      lVar15 = lVar15 + 0x10;
    } while (uVar14 * 0x10 != lVar15);
  }
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)__this_01,
                       (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry,0);
label_0534a371:
  pIVar11 = (*pVVar10->methodPtr)((Il2CppObject *)__this_01,pVVar10->method);
  local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_88._8_8_ = &local_90;
joined_r0x0534a398:
  local_90 = pIVar11;
  if (pIVar11 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar6 = pIVar11->klass;
  uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
  if (uVar14 != 0) {
    pIVar5 = (pIVar6->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar15) ==
          (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
        pVVar10 = (VirtualInvokeData *)&pIVar6->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
        goto label_0534a423;
      }
      lVar15 = lVar15 + 0x10;
    } while (uVar14 * 0x10 != lVar15);
  }
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0534a423:
  cVar8 = (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
  pIVar11 = local_90;
  if (cVar8 != '\0') {
    if (local_90 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = local_90->klass;
    uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar5 = (pIVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_GisketchSearchEntry__c **)
             ((long)&pIVar5->interfaceType + lVar15) ==
            TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry) {
          pVVar10 = (VirtualInvokeData *)&pIVar6->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
          goto label_0534a4a3;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_90,(Il2CppClass *)
                                  TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry,0);
label_0534a4a3:
    pGVar13 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pVVar10->methodPtr)(pIVar11,pVVar10->method)
    ;
    if ((((pGVar13 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar9 = System_String__IsNullOrEmpty((pGVar13->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0),
         !bVar9)) && (bVar9 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), !bVar9)) &&
       (((pMVar12 = (MethodInfo *)activeScreenId,
         bVar9 = System_String__Equals_52ffe30
                           ((pGVar13->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0),
         bVar9 && (bVar9 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsInteractiveControlKind
                                     ((pGVar13->fields)._Kind_k__BackingField,pMVar12), bVar9)) &&
        (bVar9 = System_String__IsNullOrEmpty((pGVar13->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        !bVar9)))) goto code_r0x0534a504;
    goto label_0534a530;
  }
  if (local_90 == (Il2CppObject *)0x0) goto label_0534a696;
  pIVar6 = local_90->klass;
  uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
  if (uVar14 == 0) goto label_0534a66f;
  pIVar5 = (pIVar6->_1).interfaceOffsets;
  lVar15 = 0;
  goto label_0534a660;
  while (lVar15 = lVar15 + 0x10, uVar14 * 0x10 != lVar15) {
label_0534a660:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_System_IDisposable) {
      pVVar10 = (VirtualInvokeData *)&pIVar6->vtable[*(int *)((long)&pIVar5->offset + lVar15)].methodPtr;
      goto label_0534a68d;
    }
  }
label_0534a66f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(local_90,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0534a68d:
  (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
label_0534a696:
  if (local_68 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
               (System_Collections_Generic_List_object__o *)local_68,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_GetEnumerator);
    local_48 = local_78;
    local_58 = (undefined1  [8])local_88._0_8_;
    uStack_50 = (Il2CppObject **)local_88._8_8_;
    local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_88._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_58;
label_0534a72a:
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_MoveNext);
    pGVar13 = local_48;
    if (!bVar9) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose);
      return __this;
    }
    if (local_48 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar9 = System_String__IsNullOrEmpty((local_48->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
    if (!bVar9) goto code_r0x0534a756;
    goto label_0534a775;
  }
  goto label_0534a817;
code_r0x0534a756:
  if (local_60 == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar9 = System_Collections_Generic_HashSet_object___Contains
                    ((System_Collections_Generic_HashSet_object__o *)local_60,
                     (Il2CppObject *)(pGVar13->fields)._TargetId_k__BackingField,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  if (!bVar9) {
label_0534a775:
    pMVar12 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
    if (__this != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar7 = (__this->fields)._items;
      if (pGVar7 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
        uVar3 = (__this->fields)._size;
        if (uVar3 < (uint)pGVar7->max_length) {
          (__this->fields)._size = uVar3 + 1;
          pGVar7->m_Items[(int)uVar3] = pGVar13;
          Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar13,
                     (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
        }
        goto label_0534a72a;
      }
    }
    ThrowNullReferenceException();
  }
  goto label_0534a72a;
code_r0x0534a504:
  if (local_70 == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar9 = System_Collections_Generic_HashSet_object___Contains
                    ((System_Collections_Generic_HashSet_object__o *)local_70,
                     (Il2CppObject *)(pGVar13->fields)._TargetId_k__BackingField,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  pIVar11 = local_90;
  if (bVar9) {
label_0534a530:
    pMVar12 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
    if (__this != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar7 = (__this->fields)._items;
      if (pGVar7 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
        uVar3 = (__this->fields)._size;
        if (uVar3 < (uint)pGVar7->max_length) {
          (__this->fields)._size = uVar3 + 1;
          pGVar7->m_Items[(int)uVar3] = pGVar13;
          Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar13,
                     (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
        }
        pIVar11 = local_90;
        if (((pGVar13 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
            (bVar9 = System_String__IsNullOrEmpty
                               ((pGVar13->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0),
            pIVar11 = local_90, !bVar9)) &&
           ((bVar9 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0), pIVar11 = local_90,
            !bVar9 && ((bVar9 = System_String__Equals_52ffe30
                                          ((pGVar13->fields)._ScreenId_k__BackingField,activeScreenId,5,
                                           (MethodInfo *)0x0), pIVar11 = local_90, bVar9 &&
                       (bVar9 = System_String__IsNullOrEmpty
                                          ((pGVar13->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
                       pIVar11 = local_90, !bVar9)))))) {
          if (local_60 == (System_Collections_Generic_HashSet_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)local_60,
                     (Il2CppObject *)(pGVar13->fields)._TargetId_k__BackingField,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          pIVar11 = local_90;
        }
        goto joined_r0x0534a398;
      }
    }
    ThrowNullReferenceException();
  }
  goto joined_r0x0534a398;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$ScreenTitles
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* entries, const MethodInfo* method);
// 0x534a950
// eh: try 0x534abbf..0x534ad5c -> pad 0x534ad77 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534ad8f..0x534ad94 -> pad 0x534ad99 cleanup
// eh: try 0x534ad9c..0x534ada6 -> pad 0x534adae catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534a9fc: cmp byte ptr [rip + 0x21f7e83], 0
// asm:   0x534aa03: je 0x534aaf0
// asm:   0x534aabc: nop dword ptr [rax]
// asm:   0x534ab5d: lea r12, [rip + 0x1f2e894]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x534ab64: lea r13, [rip + 0x1f26415]  ; TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry
// asm:   0x534ab6b: lea rbp, [rip + 0x1fafd4e]  ; "screen"
// asm:   0x534ab72: lea r14, [rip + 0x1f46b9f]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x534ab79: jmp 0x534ab8d
// asm:   0x534ab80: mov rbx, qword ptr [rsp]
// asm:   0x534ab84: test rbx, rbx
// asm:   0x534ab87: je 0x534ad4d
// asm:   0x534abad: nop dword ptr [rax]
// asm:   0x534ad5c: mov rdi, rbp
// asm:   0x534ad5f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534ad69: jmp 0x534ad77
// asm:   0x534ad6b: jmp 0x534ad77
// asm:   0x534ad6d: jmp 0x534ad77
// asm:   0x534ad6f: jmp 0x534ad77
// asm:   0x534ad71: jmp 0x534ad77
// asm:   0x534ad73: jmp 0x534ad77
// asm:   0x534ad75: jmp 0x534ad77
// asm:   0x534ad77: mov rbx, rax
// asm:   0x534ad7a: cmp edx, 1
// asm:   0x534ad7d: jne 0x534ad9c
// asm:   0x534ad7f: mov rdi, rbx
// asm:   0x534ad82: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534ad87: mov rbp, qword ptr [rax]
// asm:   0x534ad8a: mov qword ptr [rsp + 8], rbp
// asm:   0x534ad8f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534ad94: jmp 0x534acc6
// asm:   0x534ad99: mov rbx, rax
// asm:   0x534ad9c: lea rdi, [rsp + 8]
// asm:   0x534ada1: call 0x2d4a5d0  ; il2cpp_runtime_helper_02d4a5d0()
// asm:   0x534ada6: mov rdi, rbx
// asm:   0x534ada9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x534adae: mov rdi, rax
// asm:   0x534adb1: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *entries,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_c *pGVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppClass *pIVar4;
  char cVar5;
  bool bVar6;
  System_Collections_Generic_HashSet_string__o *__this;
  VirtualInvokeData *pVVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  ulong uVar10;
  long lVar11;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075428ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    Il2CppMethodInitialized_075428ef = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
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
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (entries == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (Il2CppMethodInitialized_075428f3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
      Il2CppMethodInitialized_075428f3 = '\x01';
    }
    entries = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7___ctor
              ((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)entries,-2,(MethodInfo *)0x0);
    if ((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)entries ==
        (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  pGVar2 = ((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)entries)->klass;
  uVar10 = (ulong)(pGVar2->_2).interface_offsets_count;
  if (uVar10 != 0) {
    pIVar3 = (pGVar2->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_GisketchSearchEntry__c **)
           ((long)&pIVar3->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry) {
        pVVar7 = &(pGVar2->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar11);
        goto label_0534ab33;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar10 * 0x10 != lVar11);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)entries,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry,0);
label_0534ab33:
  pIVar8 = (*pVVar7->methodPtr)((Il2CppObject *)entries,pVVar7->method);
  local_40 = 0;
  local_38 = (undefined1 *)&local_48;
  do {
    local_48 = pIVar8;
    if (pIVar8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIVar8->klass;
    uVar10 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar11) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar11);
          goto label_0534abe3;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0534abe3:
    cVar5 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    pIVar8 = local_48;
    if (cVar5 == '\0') {
      if (local_48 == (Il2CppObject *)0x0) {
        return __this;
      }
      pIVar4 = local_48->klass;
      uVar10 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar10 == 0) goto label_0534ad0f;
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar11 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_48->klass;
    uVar10 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_GisketchSearchEntry__c **)
             ((long)&pIVar3->interfaceType + lVar11) ==
            TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry) {
          pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar11);
          goto label_0534ac63;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry,0);
label_0534ac63:
    pIVar9 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    pIVar8 = local_48;
    if (((pIVar9 != (Il2CppObject *)0x0) &&
        (bVar6 = System_String__Equals_52ffe30
                           ((System_String_o *)pIVar9[7].klass,"screen",5,(MethodInfo *)0x0),
        pIVar8 = local_48, bVar6)) &&
       (bVar6 = System_String__IsNullOrEmpty(pIVar9[5].monitor,(MethodInfo *)0x0), pIVar8 = local_48, !bVar6))
    {
      if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)__this,pIVar9[5].monitor,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      pIVar8 = local_48;
    }
  } while( true );
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar11);
      goto label_0534ad2d;
    }
  }
label_0534ad0f:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0534ad2d:
  (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
  return __this;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsDuplicateMainMenuScreenButton
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, System_Collections_Generic_HashSet_string__o* screenTitles, const MethodInfo* method);
// 0x534af90

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
               System_Collections_Generic_HashSet_string__o *screenTitles,MethodInfo *method)

{
  System_String_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075428f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-option-");
    Il2CppMethodInitialized_075428f0 = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30(activeScreenId,"main-menu",5,(MethodInfo *)0x0);
  if ((entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) && (bVar1)) {
    bVar1 = System_String__IsNullOrEmpty((entry->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      __this = (entry->fields)._TargetId_k__BackingField;
      if (__this == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_String__StartsWith_53002b0(__this,"main-menu-option-",5,(MethodInfo *)0x0);
      if ((screenTitles != (System_Collections_Generic_HashSet_string__o *)0x0) && (bVar1)) {
        bVar1 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)screenTitles,
                           (Il2CppObject *)(entry->fields)._Title_k__BackingField,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        return bVar1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsActive
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActive (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, const MethodInfo* method);
// 0x534b0c0

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActive
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
               MethodInfo *method)

{
  bool bVar1;
  
  if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((entry->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__Equals_52ffe30
                          ((entry->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsActiveInteractiveControl
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveInteractiveControl (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, const MethodInfo* method);
// 0x534b060

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveInteractiveControl
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
               MethodInfo *method)

{
  bool bVar1;
  
  if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((entry->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__Equals_52ffe30
                          ((entry->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
        if (bVar1) {
          bVar1 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsInteractiveControlKind
                            ((entry->fields)._Kind_k__BackingField,(MethodInfo *)activeScreenId);
          return bVar1;
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsInteractiveControlKind
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsInteractiveControlKind (System_String_o* kind, const MethodInfo* method);
// 0x534b110

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsInteractiveControlKind
               (System_String_o *kind,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075428f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"select");
    il2cpp_codegen_initialize_runtime_metadata(&"input");
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_075428f1 = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30(kind,"Button",5,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__Equals_52ffe30(kind,"SpriteButton",5,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_52ffe30(kind,"InputField",5,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__Equals_52ffe30(kind,"TextArea",5,(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__Equals_52ffe30(kind,"Dropdown",5,(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__Equals_52ffe30(kind,"Select",5,(MethodInfo *)0x0);
            if (!bVar1) {
              bVar1 = System_String__Equals_52ffe30(kind,"input",5,(MethodInfo *)0x0);
              if (!bVar1) {
                bVar1 = System_String__Equals_52ffe30(kind,"select",5,(MethodInfo *)0x0);
                return bVar1;
              }
            }
          }
        }
      }
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsLiveUsable
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, const MethodInfo* method);
// 0x534ae10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534af72: xor ebx, ebx

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_UI_Selectable_o *x_00;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *x_01;
  
  if (Il2CppMethodInitialized_075428f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075428f2 = '\x01';
  }
  if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    x = (UnityEngine_Object_o *)(entry->fields)._Target_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    pUVar1 = (entry->fields)._Target_k__BackingField;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      x_00 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar1,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Selectable
                       );
      pUVar1 = (entry->fields)._Target_k__BackingField;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        bVar2 = UnityEngine_GameObject__get_activeInHierarchy(pUVar1,(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (x_00 != (UnityEngine_UI_Selectable_o *)0x0) {
              bVar2 = (*(x_00->klass->vtable)._9_IsActive.methodPtr)
                                (x_00,(x_00->klass->vtable)._9_IsActive.method);
              if (!bVar2) {
                return false;
              }
              bVar2 = (*(x_00->klass->vtable)._24_IsInteractable.methodPtr)
                                (x_00,(x_00->klass->vtable)._24_IsInteractable.method);
              if (!bVar2) {
                return false;
              }
              if ((x_00->fields).m_Navigation.fields.m_Mode == 0) {
                return false;
              }
              pUVar1 = (entry->fields)._Target_k__BackingField;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                x_01 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar1,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar2 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                ;
                return bVar2;
              }
            }
            goto label_0534af82;
          }
        }
        return false;
      }
    }
  }
label_0534af82:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$Empty
// il2cpp: System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty (const MethodInfo* method);
// 0x534adc0

System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty(MethodInfo *method)

{
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this;
  
  if (Il2CppMethodInitialized_075428f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    Il2CppMethodInitialized_075428f3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7___ctor(__this,-2,(MethodInfo *)0x0);
  return (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this;
}


