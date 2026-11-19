// Type: Gisketch.Aottg2UI.Search.GisketchSearchService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchService.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchService.ScoredEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, int32_t score, const MethodInfo* method);
// 0x534bc40

void Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o *__this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,int32_t score,MethodInfo *method)

{
  (__this->fields).Entry = entry;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Score = score;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService___c___cctor (const MethodInfo* method);
// 0x534d490

void Gisketch_Aottg2UI_Search_GisketchSearchService___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075428fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c);
    Il2CppMethodInitialized_075428fe = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService___c___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o* __this, const MethodInfo* method);
// 0x534d500

void Gisketch_Aottg2UI_Search_GisketchSearchService___c___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$<Query>b__0_0
// il2cpp: int32_t Gisketch_Aottg2UI_Search_GisketchSearchService___c___Query_b__0_0 (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o a, Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o b, const MethodInfo* method);
// 0x534d510

int32_t Gisketch_Aottg2UI_Search_GisketchSearchService___c___Query_b__0_0
                  (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o *__this,
                  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o a,
                  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o b,MethodInfo *method)

{
  int32_t iVar1;
  int local_8 [2];
  
  local_8[0] = b.fields.Score;
  if (local_8[0] != a.fields.Score) {
    iVar1 = System_Int32__CompareTo_54b7380(local_8,a.fields.Score,(MethodInfo *)0x0);
    return iVar1;
  }
  if ((a.fields.Entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) ||
     (b.fields.Entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = System_String__CompareOrdinal
                    (((a.fields.Entry)->fields)._Title_k__BackingField,
                     ((b.fields.Entry)->fields)._Title_k__BackingField,(MethodInfo *)0x0);
  return iVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x534d050

void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_IDisposable_Dispose (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x534d560

void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x534d570

bool Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__MoveNext
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
    return false;
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.Generic.IEnumerator<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.get_Current
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x534d590

Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x534d5a0

void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x534d5e0

Il2CppObject *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x534d5f0

System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_075428ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
    Il2CppMethodInitialized_075428ff = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_Generic_IEnumerator_GisketchSearchEntry__o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x534d670

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_075428ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
    Il2CppMethodInitialized_075428ff = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Query
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Query (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* entries, System_String_o* query, const MethodInfo* method);
// 0x534b440
// eh: try 0x534b67f..0x534b83b -> pad 0x534bb31 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534b99f..0x534ba92 -> pad 0x534bada (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x534babc..0x534bacb -> pad 0x534bb2f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534bacb..0x534bad0 -> pad 0x534badc catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x534baf6..0x534bafb -> pad 0x534bb1c cleanup
// eh: try 0x534bb1f..0x534bb29 -> pad 0x534bb70 catch (...) [compiler noexcept guard]
// eh: try 0x534bb51..0x534bb56 -> pad 0x534bb5b cleanup
// eh: try 0x534bb5e..0x534bb68 -> pad 0x534bb70 catch (...) [compiler noexcept guard]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534b5fc: nop dword ptr [rax]
// asm:   0x534b8f7: test r13, r13
// asm:   0x534bad0: mov rdi, r14
// asm:   0x534bad3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534bad8: jmp 0x534bade
// asm:   0x534bada: jmp 0x534bade
// asm:   0x534badc: jmp 0x534bade
// asm:   0x534bade: mov r14, rax
// asm:   0x534bae1: cmp edx, 1
// asm:   0x534bae4: jne 0x534bb1f
// asm:   0x534bae6: mov rdi, r14
// asm:   0x534bae9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534baee: mov rbp, qword ptr [rax]
// asm:   0x534baf1: mov qword ptr [rsp + 0x10], rbp
// asm:   0x534baf6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534bafb: lea rax, [rip + 0x1f436fe]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_Dispose
// asm:   0x534bb02: mov rsi, qword ptr [rax]
// asm:   0x534bb05: lea rdi, [rsp + 0x20]
// asm:   0x534bb0a: call 0x4d809d0  ; System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___Dispose()
// asm:   0x534bb0f: test rbp, rbp
// asm:   0x534bb12: je 0x534baaa
// asm:   0x534bb14: mov rdi, rbp
// asm:   0x534bb17: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534bb1c: mov r14, rax
// asm:   0x534bb1f: lea rdi, [rsp + 0x10]
// asm:   0x534bb24: call 0x2d4a6f0  ; il2cpp_runtime_helper_02d4a6f0()
// asm:   0x534bb29: jmp 0x534bb68
// asm:   0x534bb2b: jmp 0x534bb37
// asm:   0x534bb2d: jmp 0x534bb37
// asm:   0x534bb2f: jmp 0x534bb37
// asm:   0x534bb31: jmp 0x534bb37
// asm:   0x534bb33: jmp 0x534bb37
// asm:   0x534bb35: jmp 0x534bb37
// asm:   0x534bb37: mov r14, rax
// asm:   0x534bb3a: cmp edx, 1
// asm:   0x534bb3d: jne 0x534bb5e
// asm:   0x534bb3f: mov rdi, r14
// asm:   0x534bb42: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534bb47: mov r14, qword ptr [rax]
// asm:   0x534bb4a: mov qword ptr [rsp + 0x10], r14
// asm:   0x534bb4f: xor ebp, ebp
// asm:   0x534bb51: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534bb56: jmp 0x534b848
// asm:   0x534bb5b: mov r14, rax
// asm:   0x534bb5e: lea rdi, [rsp + 0x10]
// asm:   0x534bb63: call 0x2d4a660  ; il2cpp_runtime_helper_02d4a660()
// asm:   0x534bb68: mov rdi, r14
// asm:   0x534bb6b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x534bb70: mov rdi, rax
// asm:   0x534bb73: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Query
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *entries,System_String_o *query,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_c *pGVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppClass *pIVar5;
  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_array *pGVar6;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar7;
  Il2CppObject *pIVar8;
  MethodInfo *pMVar9;
  int iVar10;
  bool bVar11;
  int32_t iVar12;
  System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *__this;
  VirtualInvokeData *pVVar13;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_00;
  System_String_o *displayTitle;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_01;
  Gisketch_Aottg2UI_Search_GisketchSearchService___c_StaticFields *pGVar14;
  System_Comparison_T__o *comparison;
  ulong uVar15;
  long lVar16;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o item;
  Il2CppObject *local_90;
  undefined8 local_88;
  System_Collections_Generic_List_Enumerator_T__o *local_80;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  undefined8 uStack_60;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *local_50;
  undefined8 local_48;
  
  if (Il2CppMethodInitialized_075428f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_GisketchSearchService_ScoredEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_Sort);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor_71948c8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c_Query_b__0_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c);
    Il2CppMethodInitialized_075428f5 = '\x01';
  }
  local_90 = (Il2CppObject *)0x0;
  local_78.fields._current = (Il2CppObject *)0x0;
  uStack_60 = 0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry);
  System_Collections_Generic_List_GisketchSearchService_ScoredEntry____ctor
            (__this,(MethodInfo_3AA3950 *)
                    MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_ctor);
  if (entries == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (Il2CppMethodInitialized_075428f6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
      Il2CppMethodInitialized_075428f6 = '\x01';
    }
    entries = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
    System_Object___ctor((Il2CppObject *)entries,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *)entries)->fields).__1__state = -2;
    iVar12 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *)entries)->fields).__l__initialThreadId =
         iVar12;
  }
  pGVar3 = ((Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *)entries)->klass;
  uVar15 = (ulong)(pGVar3->_2).interface_offsets_count;
  if (uVar15 != 0) {
    pIVar4 = (pGVar3->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_GisketchSearchEntry__c **)
           ((long)&pIVar4->interfaceType + lVar16) ==
          TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry) {
        pVVar13 = &(pGVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar16);
        goto label_0534b631;
      }
      lVar16 = lVar16 + 0x10;
    } while (uVar15 * 0x10 != lVar16);
  }
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)entries,
                       (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry,0);
label_0534b631:
  local_90 = (*pVVar13->methodPtr)((Il2CppObject *)entries,pVVar13->method);
  local_88 = 0;
  local_80 = (System_Collections_Generic_List_Enumerator_T__o *)&local_90;
  if (local_90 != (Il2CppObject *)0x0) {
    do {
      pIVar8 = local_90;
      pIVar5 = local_90->klass;
      uVar15 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar4 = (pIVar5->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar16) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar13 = pIVar5->vtable + *(int *)((long)&pIVar4->offset + lVar16);
            goto label_0534b6f3;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar15 * 0x10 != lVar16);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_90,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0534b6f3:
      bVar11 = (*pVVar13->methodPtr)(pIVar8,pVVar13->method);
      pIVar8 = local_90;
      if (!bVar11) {
        if (local_90 == (Il2CppObject *)0x0) goto label_0534b8b6;
        pIVar5 = local_90->klass;
        uVar15 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar15 == 0) goto label_0534b88f;
        pIVar4 = (pIVar5->_1).interfaceOffsets;
        lVar16 = 0;
        goto label_0534b880;
      }
      if (local_90 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar5 = local_90->klass;
      uVar15 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar4 = (pIVar5->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_GisketchSearchEntry__c **)
               ((long)&pIVar4->interfaceType + lVar16) ==
              TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry) {
            pVVar13 = pIVar5->vtable + *(int *)((long)&pIVar4->offset + lVar16);
            goto label_0534b773;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar15 * 0x10 != lVar16);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_90,(Il2CppClass *)
                                    TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry,0);
label_0534b773:
      __this_00 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                  (*pVVar13->methodPtr)(pIVar8,pVVar13->method);
      if (__this_00 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        displayTitle = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      else {
        displayTitle = Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle
                                 (__this_00,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Search_GisketchSearchService__Match_524bc60
                ((Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)&local_50,__this_00,query,displayTitle,
                 in_R8);
      iVar10 = (int)local_50;
      if (0 < (int)local_50) {
        local_48._0_4_ = 0;
        local_48._4_4_ = 0;
        local_50 = __this_00;
        Il2CppCodeGenWriteBarrier((void **)&local_50);
        pMVar9 = MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_Add;
        local_48._0_4_ = iVar10;
        if (__this == (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)0x0) {
label_0534babc:
          ThrowNullReferenceException();
        }
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar6 = (__this->fields)._items;
        if (pGVar6 == (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_array *)0x0)
        goto label_0534babc;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pGVar6->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pGVar6->m_Items[(int)uVar2].fields.Entry = local_50;
          pGVar6->m_Items[(int)uVar2].fields.Score = iVar10;
          Il2CppCodeGenWriteBarrier((void **)(pGVar6->m_Items + (int)uVar2));
        }
        else {
          item.fields.Score = iVar10;
          item.fields.Entry = local_50;
          item.fields._12_4_ = 0;
          System_Collections_Generic_List_GisketchSearchService_ScoredEntry___AddWithResize
                    (__this,item,(MethodInfo_3AA42E0 *)pMVar9->klass->rgctx_data[0xe].method);
        }
      }
    } while (local_90 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
  while (lVar16 = lVar16 + 0x10, uVar15 * 0x10 != lVar16) {
label_0534b880:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar16) == TypeInfo_System_IDisposable) {
      pVVar13 = pIVar5->vtable + *(int *)((long)&pIVar4->offset + lVar16);
      goto label_0534b8ad;
    }
  }
label_0534b88f:
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(local_90,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0534b8ad:
  (*pVVar13->methodPtr)(pIVar8,pVVar13->method);
label_0534b8b6:
  if ((TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c);
    pGVar14 = TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields;
    comparison = (System_Comparison_T__o *)pGVar14->__9__0_0;
  }
  else {
    pGVar14 = TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields;
    comparison = (System_Comparison_T__o *)pGVar14->__9__0_0;
  }
  if (comparison == (System_Comparison_T__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c);
      pGVar14 = TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields;
    }
    pIVar8 = (Il2CppObject *)pGVar14->__9;
    comparison = (System_Comparison_T__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Comparison_GisketchSearchService_ScoredEntry);
    System_Comparison_GisketchSearchService_ScoredEntry____ctor
              ((System_Comparison_GisketchSearchService_ScoredEntry__o *)comparison,pIVar8,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c_Query_b__0_0,
               (MethodInfo_48E6720 *)0x0);
    pGVar14 = TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields;
    pGVar14->__9__0_0 = (System_Comparison_GisketchSearchService_ScoredEntry__o *)comparison;
    Il2CppCodeGenWriteBarrier(&pGVar14->__9__0_0);
  }
  if (__this == (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_GisketchSearchService_ScoredEntry___Sort_3aa6700
            (__this,comparison,
             (MethodInfo_3AA6700 *)
             MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_Sort);
  iVar12 = (__this->fields)._size;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor_395c990
            ((System_Collections_Generic_List_object__o *)__this_01,iVar12,
             (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor_71948c8
            );
  System_Collections_Generic_List_GisketchSearchService_ScoredEntry___GetEnumerator
            (&local_78,__this,
             (MethodInfo_3AA5200 *)
             MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_GetEnumerator);
  local_88 = 0;
  local_80 = &local_78;
  if (__this_01 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    bVar11 = System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___MoveNext
                       (&local_78,
                        (MethodInfo_4C809E0 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_MoveNext
                       );
    if (bVar11) {
label_0534bacb:
      ThrowNullReferenceException();
    }
  }
  else {
    while( true ) {
      bVar11 = System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___MoveNext
                         (&local_78,
                          (MethodInfo_4C809E0 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_MoveNext
                         );
      pMVar9 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
      if (!bVar11) break;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar7 = (__this_01->fields)._items;
      if (pGVar7 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_0534bacb;
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pGVar7->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pGVar7->m_Items[(int)uVar2] =
             (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)local_78.fields._current;
        Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,local_78.fields._current,
                   (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___Dispose
            (&local_78,
             (MethodInfo_4C809D0 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_Dispose);
  return __this_01;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Match
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Match (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, const MethodInfo* method);
// 0x534bbd0

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Match
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,MethodInfo *method)

{
  System_String_o *displayTitle;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_Fields local_38;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    displayTitle = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    displayTitle = Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle(entry,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Search_GisketchSearchService__Match_524bc60
            ((Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)&local_38,entry,query,displayTitle,in_R8);
  (__return_storage_ptr__->fields).HiddenText = local_38.HiddenText;
  (__return_storage_ptr__->fields).DisplayIndices = local_38.DisplayIndices;
  (__return_storage_ptr__->fields).Score = local_38.Score;
  (__return_storage_ptr__->fields).DisplayStart = local_38.DisplayStart;
  (__return_storage_ptr__->fields).DisplayLength = local_38.DisplayLength;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = local_38._12_4_;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Match
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Match (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, System_String_o* displayTitle, const MethodInfo* method);
// 0x534bc60

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Match_524bc60
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,
          System_String_o *displayTitle,MethodInfo *method)

{
  System_String_o *pSVar1;
  long lVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  _union_14 _Var6;
  int32_t displayLength;
  MethodInfo *pMVar7;
  int32_t displayStart;
  uint uVar8;
  int32_t score;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  _union_13 displayIndices;
  MethodInfo *in_stack_ffffffffffffff78;
  int32_t local_80;
  int32_t local_7c;
  System_String_o *local_78;
  undefined1 local_70 [16];
  Il2CppClass *pIStack_60;
  System_Int32_array *pSStack_58;
  System_String_o *local_50;
  _union_13 local_48;
  _union_14 local_40;
  Il2CppMethodPointer local_38;
  
  local_7c = 0;
  local_80 = 0;
  local_48.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_38 = (Il2CppMethodPointer)0x0;
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
label_0534c2da:
    local_70._0_4_ = 0;
    local_70._4_4_ = 0;
    local_70._8_4_ = 0;
    local_70._12_4_ = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    goto label_0534c2e3;
  }
  bVar3 = System_String__IsNullOrEmpty(query,(MethodInfo *)0x0);
  if (bVar3) {
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (query == (System_String_o *)0x0) goto label_0534c2fa;
    pSVar4 = System_String__ToLowerInvariant(query,(MethodInfo *)0x0);
  }
  bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  lVar2 = g_data_07556758;
  if (bVar3) {
    pSVar4 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
    *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    (__return_storage_ptr__->fields).Score = 1;
    (__return_storage_ptr__->fields).DisplayStart = -1;
    if (pSVar4 == (System_String_o *)0x0) {
      pSVar4 = (System_String_o *)**(long **)(lVar2 + 0xb8);
    }
    (__return_storage_ptr__->fields).HiddenText = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).HiddenText);
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).DisplayIndices);
    return __return_storage_ptr__;
  }
  pSVar5 = (entry->fields)._Title_k__BackingField;
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (bVar3) {
    local_78 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pSVar5 == (System_String_o *)0x0) goto label_0534c2fa;
    local_78 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
  }
  bVar3 = System_String__IsNullOrEmpty(displayTitle,(MethodInfo *)0x0);
  if (bVar3) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (displayTitle == (System_String_o *)0x0) goto label_0534c2fa;
    pSVar5 = System_String__ToLowerInvariant(displayTitle,(MethodInfo *)0x0);
  }
  pSVar1 = (entry->fields)._Keywords_k__BackingField;
  bVar3 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar3) {
    local_50 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pSVar1 == (System_String_o *)0x0) goto label_0534c2fa;
    local_50 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
  }
  pSVar1 = (entry->fields)._Id_k__BackingField;
  bVar3 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar3) {
    _Var6.genericMethod = (void *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (pSVar1 == (System_String_o *)0x0) goto label_0534c2fa;
    _Var6.genericMethod = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
  }
  bVar3 = System_String__op_Equality(pSVar5,pSVar4,(MethodInfo *)0x0);
  if ((bVar3) || (bVar3 = System_String__op_Equality(local_78,pSVar4,(MethodInfo *)0x0), bVar3)) {
    if (pSVar5 == (System_String_o *)0x0) goto label_0534c2fa;
    uVar8 = 0;
    local_70._4_4_ = System_String__IndexOf_5307930(pSVar5,pSVar4,(MethodInfo *)0x0);
    if (-1 < (int)local_70._4_4_) {
      if (pSVar4 == (System_String_o *)0x0) goto label_0534c2fa;
      uVar8 = (pSVar4->fields)._stringLength;
    }
    pIStack_60 = (Il2CppClass *)**(undefined8 **)(g_data_07556758 + 0xb8);
    local_70._0_4_ = 100;
label_0534beed:
    pSStack_58 = (System_Int32_array *)0x0;
    local_70._12_4_ = 0;
    local_70._8_4_ = uVar8;
    Il2CppCodeGenWriteBarrier(&pIStack_60);
    pSStack_58 = (System_Int32_array *)0x0;
    Il2CppCodeGenWriteBarrier(&pSStack_58);
label_0534bf19:
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)pIStack_60;
    (__return_storage_ptr__->fields).DisplayIndices = pSStack_58;
label_0534c2e3:
    (__return_storage_ptr__->fields).Score = local_70._0_4_;
    (__return_storage_ptr__->fields).DisplayStart = local_70._4_4_;
    (__return_storage_ptr__->fields).DisplayLength = local_70._8_4_;
    *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = local_70._12_4_;
    return __return_storage_ptr__;
  }
  local_40.genericMethod = _Var6.genericMethod;
  if (pSVar5 == (System_String_o *)0x0) goto label_0534c2fa;
  uVar8 = 0;
  bVar3 = System_String__StartsWith(pSVar5,pSVar4,(MethodInfo *)0x0);
  if (bVar3) {
label_0534bf6b:
    local_70._4_4_ = System_String__IndexOf_5307930(pSVar5,pSVar4,(MethodInfo *)0x0);
    if (-1 < (int)local_70._4_4_) {
      if (pSVar4 == (System_String_o *)0x0) {
label_0534c2fa:
        ThrowNullReferenceException();
      }
      uVar8 = (pSVar4->fields)._stringLength;
    }
    pIStack_60 = (Il2CppClass *)**(undefined8 **)(g_data_07556758 + 0xb8);
    local_70._0_4_ = 0x50;
    goto label_0534beed;
  }
  if (local_78 == (System_String_o *)0x0) goto label_0534c2fa;
  bVar3 = System_String__StartsWith(local_78,pSVar4,(MethodInfo *)0x0);
  if (bVar3) goto label_0534bf6b;
  bVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken(pSVar5,pSVar4,&local_7c,&local_80,method);
  if ((bVar3) ||
     (bVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
                        (local_78,pSVar4,&local_7c,&local_80,method), pSVar1 = local_50, bVar3)) {
    query = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
    (__return_storage_ptr__->fields).Score = 0;
    (__return_storage_ptr__->fields).DisplayStart = 0;
    *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
    score = 0x3c;
    displayStart = local_7c;
    displayLength = local_80;
  }
  else {
    pMVar7 = (MethodInfo *)&local_80;
    bVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
                      (local_50,pSVar4,&local_7c,(int32_t *)pMVar7,method);
    if (bVar3) {
      query = Gisketch_Aottg2UI_Search_GisketchSearchService__Slice
                        ((entry->fields)._Keywords_k__BackingField,local_7c,local_80,pMVar7);
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      score = 0x3c;
label_0534c07b:
      displayStart = -1;
      displayLength = 0;
    }
    else {
      bVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
                        (pSVar5,pSVar4,&local_7c,&local_80,method);
      if ((!bVar3) &&
         (bVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
                            (local_78,pSVar4,&local_7c,&local_80,method), !bVar3)) {
        pMVar7 = (MethodInfo *)&local_80;
        bVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
                          (pSVar1,pSVar4,&local_7c,(int32_t *)pMVar7,method);
        if (bVar3) {
          query = Gisketch_Aottg2UI_Search_GisketchSearchService__Slice
                            ((entry->fields)._Keywords_k__BackingField,local_7c,local_80,pMVar7);
          (__return_storage_ptr__->fields).Score = 0;
          (__return_storage_ptr__->fields).DisplayStart = 0;
          *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
          (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
          (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
          score = 0x32;
          goto label_0534c07b;
        }
        bVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                          (pSVar5,pSVar4,&local_7c,&local_80,(System_Int32_array **)&local_48.rgctx_data,in_R9
                          );
        if ((bVar3) ||
           (bVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                              (local_78,pSVar4,&local_7c,&local_80,(System_Int32_array **)&local_48.rgctx_data
                               ,in_R9), bVar3)) {
          query = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
          (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
          (__return_storage_ptr__->fields).Score = 0;
          (__return_storage_ptr__->fields).DisplayStart = 0;
          *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
          score = 0x2d;
          displayIndices.methodMetadataHandle = local_48.methodMetadataHandle;
          displayStart = local_7c;
          displayLength = local_80;
          goto label_0534c02c;
        }
        pMVar7 = (MethodInfo *)&local_80;
        method_00 = (MethodInfo *)&local_38;
        bVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                          (pSVar1,pSVar4,&local_7c,(int32_t *)pMVar7,(System_Int32_array **)method_00,in_R9);
        if (bVar3) {
          query = Gisketch_Aottg2UI_Search_GisketchSearchService__Slice
                            ((entry->fields)._Keywords_k__BackingField,local_7c,local_80,pMVar7);
          (__return_storage_ptr__->fields).Score = 0;
          (__return_storage_ptr__->fields).DisplayStart = 0;
          *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
          (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
          (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
          score = 0x2d;
          goto label_0534c07b;
        }
        bVar3 = System_String__Contains(pSVar5,pSVar4,(MethodInfo *)0x0);
        if ((!bVar3) && (bVar3 = System_String__Contains(local_78,pSVar4,(MethodInfo *)0x0), !bVar3)) {
          if (local_50 == (System_String_o *)0x0) goto label_0534c2fa;
          bVar3 = System_String__Contains(local_50,pSVar4,(MethodInfo *)0x0);
          if (bVar3) {
            (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
            (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
            (__return_storage_ptr__->fields).Score = 0;
            (__return_storage_ptr__->fields).DisplayStart = 0;
            *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
            score = 0x28;
            displayStart = -1;
            displayLength = 0;
          }
          else {
            if (local_40.genericMethod == (System_String_o *)0x0) goto label_0534c2fa;
            bVar3 = System_String__Contains(local_40.genericMethod,pSVar4,(MethodInfo *)0x0);
            if (!bVar3) goto label_0534c2da;
            query = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
            (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
            (__return_storage_ptr__->fields).Score = 0;
            (__return_storage_ptr__->fields).DisplayStart = 0;
            *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
            score = 0x19;
            displayStart = -1;
            displayLength = 0;
          }
          goto label_0534c029;
        }
        Gisketch_Aottg2UI_Search_GisketchSearchService__Visible
                  ((Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *)local_70,pSVar5,pSVar4,0x28,method_00);
        goto label_0534bf19;
      }
      query = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
      (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
      (__return_storage_ptr__->fields).Score = 0;
      (__return_storage_ptr__->fields).DisplayStart = 0;
      *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
      score = 0x32;
      displayStart = local_7c;
      displayLength = local_80;
    }
  }
label_0534c029:
  displayIndices.rgctx_data = (Il2CppRGCTXData *)0x0;
label_0534c02c:
  Gisketch_Aottg2UI_Search_GisketchSearchMatch___ctor
            (__return_storage_ptr__,score,displayStart,displayLength,query,
             (System_Int32_array *)displayIndices.rgctx_data,in_stack_ffffffffffffff78);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Markup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, bool active, System_String_o* matchHex, const MethodInfo* method);
// 0x534ca10

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Markup
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,bool active,
          System_String_o *matchHex,MethodInfo *method)

{
  MethodInfo *in_RAX;
  System_String_o *pSVar1;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle(entry,(MethodInfo *)0x0);
  }
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_524ca70
                     (entry,query,active,matchHex,pSVar1,(System_String_o *)0x0,in_RAX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Markup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, bool active, System_String_o* matchHex, System_String_o* displayTitle, System_String_o* normalHex, const MethodInfo* method);
// 0x534ca70

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_524ca70
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,bool active,
          System_String_o *matchHex,System_String_o *displayTitle,System_String_o *normalHex,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match;
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o local_38;
  
  pSVar2 = displayTitle;
  if (displayTitle == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  Gisketch_Aottg2UI_Search_GisketchSearchService__Match_524bc60
            (&local_38,entry,query,pSVar2,(MethodInfo *)displayTitle);
  if ((local_38.fields.Score < 2) || (local_38.fields.DisplayStart < 0)) {
    if (Il2CppMethodInitialized_075428fa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
      il2cpp_codegen_initialize_runtime_metadata(&"<");
      Il2CppMethodInitialized_075428fa = '\x01';
    }
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      method_00 = extraout_RDX;
    }
    else {
      if (pSVar2 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = System_String__Replace_5304550
                         (pSVar2,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
    }
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar2,normalHex,method_00);
  }
  else {
    match.fields.DisplayStart = local_38.fields.DisplayStart;
    match.fields.Score = local_38.fields.Score;
    match.fields.DisplayLength = local_38.fields.DisplayLength;
    match.fields._12_4_ = local_38.fields._12_4_;
    match.fields.HiddenText = local_38.fields.HiddenText;
    match.fields.DisplayIndices = local_38.fields.DisplayIndices;
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange
                       (pSVar2,match,false,matchHex,normalHex,(MethodInfo *)displayTitle);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Empty
// il2cpp: System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty (const MethodInfo* method);
// 0x534bb80

System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty(MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this;
  
  if (Il2CppMethodInitialized_075428f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
    Il2CppMethodInitialized_075428f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Visible
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Visible (System_String_o* display, System_String_o* needle, int32_t score, const MethodInfo* method);
// 0x534c3a0

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Visible
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,System_String_o *display,
          System_String_o *needle,int32_t score,MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  int32_t iVar4;
  
  if (display == (System_String_o *)0x0) {
label_0534c447:
    ThrowNullReferenceException();
  }
  iVar4 = 0;
  iVar2 = System_String__IndexOf_5307930(display,needle,(MethodInfo *)0x0);
  lVar1 = g_data_07556758;
  if (-1 < iVar2) {
    if (needle == (System_String_o *)0x0) goto label_0534c447;
    iVar4 = (needle->fields)._stringLength;
  }
  pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
  *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
  (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
  (__return_storage_ptr__->fields).Score = score;
  (__return_storage_ptr__->fields).DisplayStart = iVar2;
  (__return_storage_ptr__->fields).DisplayLength = iVar4;
  if (pSVar3 == (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)**(long **)(lVar1 + 0xb8);
  }
  (__return_storage_ptr__->fields).HiddenText = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).HiddenText);
  (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).DisplayIndices);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkRange
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange (System_String_o* text, Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match, bool active, System_String_o* matchHex, System_String_o* normalHex, const MethodInfo* method);
// 0x534cd70

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange
          (System_String_o *text,Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match,bool active,
          System_String_o *matchHex,System_String_o *normalHex,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar5;
  
  if ((match.fields.DisplayIndices != (System_Int32_array *)0x0) &&
     ((match.fields.DisplayIndices)->max_length != 0)) {
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices
                       (text,match.fields.DisplayIndices,matchHex,normalHex,method);
    return pSVar2;
  }
  if ((-1 < match.fields.DisplayStart) && (0 < match.fields.DisplayLength)) {
    if (text == (System_String_o *)0x0) goto label_0534d04a;
    if (match.fields.DisplayLength + match.fields.DisplayStart <= (text->fields)._stringLength) {
      pSVar2 = System_String__Substring_53042f0(text,0,match.fields.DisplayStart,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075428fa == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
        il2cpp_codegen_initialize_runtime_metadata(&"<");
        Il2CppMethodInitialized_075428fa = '\x01';
      }
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        pMVar5 = extraout_RDX_01;
      }
      else {
        if (pSVar2 == (System_String_o *)0x0) goto label_0534d04a;
        pSVar2 = System_String__Replace_5304550
                           (pSVar2,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
        pMVar5 = extraout_RDX_02;
      }
      pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar2,normalHex,pMVar5);
      pSVar3 = System_String__Substring_53042f0
                         (text,match.fields.DisplayStart,match.fields.DisplayLength,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075428fa == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
        il2cpp_codegen_initialize_runtime_metadata(&"<");
        Il2CppMethodInitialized_075428fa = '\x01';
      }
      bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        pMVar5 = extraout_RDX_03;
      }
      else {
        if (pSVar3 == (System_String_o *)0x0) goto label_0534d04a;
        pSVar3 = System_String__Replace_5304550
                           (pSVar3,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
        pMVar5 = extraout_RDX_04;
      }
      pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar3,matchHex,pMVar5);
      pSVar4 = System_String__Substring
                         (text,match.fields.DisplayLength + match.fields.DisplayStart,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075428fa == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
        il2cpp_codegen_initialize_runtime_metadata(&"<");
        Il2CppMethodInitialized_075428fa = '\x01';
      }
      bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        pMVar5 = extraout_RDX_05;
      }
      else {
        if (pSVar4 == (System_String_o *)0x0) goto label_0534d04a;
        pSVar4 = System_String__Replace_5304550
                           (pSVar4,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
        pMVar5 = extraout_RDX_06;
      }
      pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar4,normalHex,pMVar5);
      pSVar2 = System_String__Concat_5301f10(pSVar2,pSVar3,pSVar4,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  if (Il2CppMethodInitialized_075428fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    Il2CppMethodInitialized_075428fa = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    pMVar5 = extraout_RDX;
  }
  else {
    if (text == (System_String_o *)0x0) {
label_0534d04a:
      ThrowNullReferenceException();
    }
    pSVar2 = System_String__Replace_5304550
                       (text,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    pMVar5 = extraout_RDX_00;
  }
  pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar2,normalHex,pMVar5);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkIndices
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices (System_String_o* text, System_Int32_array* indices, System_String_o* matchHex, System_String_o* normalHex, const MethodInfo* method);
// 0x534d080
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534d12e: nop 
// asm:   0x534d1f7: mov r14d, r8d
// asm:   0x534d1fa: jmp 0x534d203
// asm:   0x534d203: mov rbp, r9
// asm:   0x534d280: jmp 0x534d31e
// asm:   0x534d2ed: jmp 0x534d2f4

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices
          (System_String_o *text,System_Int32_array *indices,System_String_o *matchHex,
          System_String_o *normalHex,MethodInfo *method)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  Il2CppObject *pIVar5;
  System_Text_StringBuilder_o *__this;
  long lVar6;
  System_String_o *pSVar7;
  int iVar8;
  ulong uVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  uint startIndex;
  uint uVar11;
  uint uVar12;
  long lVar13;
  
  if (Il2CppMethodInitialized_075428f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_bool_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_075428f7 = '\x01';
  }
  if ((text != (System_String_o *)0x0) &&
     (pIVar5 = SZArrayNew(TypeInfo_bool_array,(text->fields)._stringLength),
     indices != (System_Int32_array *)0x0)) {
    uVar2 = indices->max_length;
    iVar4 = (int)uVar2;
    if (pIVar5 == (Il2CppObject *)0x0) {
      if (0 < iVar4) {
        iVar8 = 0;
        do {
          if (-1 < indices->m_Items[iVar8]) goto label_0534d31e;
          iVar8 = iVar8 + 1;
        } while (iVar4 != iVar8);
      }
    }
    else if (0 < iVar4) {
      uVar9 = 0;
      do {
        uVar11 = indices->m_Items[uVar9];
        if ((-1 < (int)uVar11) && ((int)uVar11 < (int)*(uint *)&pIVar5[1].monitor)) {
          if (*(uint *)&pIVar5[1].monitor <= uVar11) goto label_0534d319;
          *(undefined1 *)((long)&pIVar5[2].klass + (ulong)uVar11) = 1;
        }
        uVar9 = uVar9 + 1;
      } while ((uVar2 & 0xffffffff) != uVar9);
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    uVar11 = (text->fields)._stringLength;
    if ((int)uVar11 < 1) {
      if (__this != (System_Text_StringBuilder_o *)0x0) goto label_0534d2f4;
    }
    else if (pIVar5 != (Il2CppObject *)0x0) {
      startIndex = 0;
      do {
        if (*(uint *)&pIVar5[1].monitor <= startIndex) {
label_0534d319:
          ThrowIndexOutOfRangeException();
        }
        lVar6 = (long)(int)startIndex;
        cVar1 = *(char *)((long)&pIVar5[2].klass + lVar6);
        uVar12 = startIndex;
        if ((int)startIndex < (int)uVar11) {
          lVar13 = 0;
          do {
            if (*(uint *)&pIVar5[1].monitor <= startIndex + (int)lVar13) goto label_0534d319;
            if ((cVar1 != '\0') != (*(char *)((long)&pIVar5[2].klass + lVar13 + lVar6) != '\0')) {
              uVar12 = (int)lVar13 + startIndex;
              break;
            }
            lVar13 = lVar13 + 1;
            uVar12 = uVar11;
          } while ((int)uVar11 - lVar6 != lVar13);
        }
        pSVar7 = System_String__Substring_53042f0(text,startIndex,uVar12 - startIndex,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_075428fa == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
          il2cpp_codegen_initialize_runtime_metadata(&"<");
          Il2CppMethodInitialized_075428fa = '\x01';
        }
        bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          pMVar10 = extraout_RDX;
          if (cVar1 != '\0') goto label_0534d271;
label_0534d2c2:
          pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar7,normalHex,pMVar10);
        }
        else {
          if (pSVar7 == (System_String_o *)0x0) goto label_0534d31e;
          pSVar7 = System_String__Replace_5304550
                             (pSVar7,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
          pMVar10 = extraout_RDX_00;
          if (cVar1 == '\0') goto label_0534d2c2;
label_0534d271:
          pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar7,matchHex,pMVar10);
        }
        if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0534d31e;
        System_Text_StringBuilder__Append_530ed80(__this,pSVar7,(MethodInfo *)0x0);
        uVar11 = (text->fields)._stringLength;
        startIndex = uVar12;
      } while ((int)uVar12 < (int)uVar11);
label_0534d2f4:
      pSVar7 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar7;
    }
  }
label_0534d31e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Wrap
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap (System_String_o* text, System_String_o* matchHex, const MethodInfo* method);
// 0x534d330

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap
          (System_String_o *text,System_String_o *matchHex,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075428f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_075428f8 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "<color=#";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = matchHex;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = ">";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = text;
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = "</color>";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$WrapNormal
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal (System_String_o* text, System_String_o* normalHex, const MethodInfo* method);
// 0x534cc30

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
          (System_String_o *text,System_String_o *normalHex,MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075428f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_075428f9 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(normalHex,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if (!bVar1) {
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
      if (values == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "<color=#";
        Il2CppCodeGenWriteBarrier(values->m_Items);
        if ((values->max_length & 0xfffffffe) != 0) {
          values->m_Items[1] = normalHex;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = ">";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2);
            if ((values->max_length & 0xfffffffc) != 0) {
              values->m_Items[3] = text;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "</color>";
                Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                pSVar2 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                return pSVar2;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  return text;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Escape
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Escape (System_String_o* text, const MethodInfo* method);
// 0x534cbb0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075428fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    Il2CppMethodInitialized_075428fa = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (text == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__Replace_5304550(text,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Lower
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Lower (System_String_o* value, const MethodInfo* method);
// 0x534c300

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Lower(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (value == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__ToLowerInvariant(value,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindToken
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, const MethodInfo* method);
// 0x534c450

bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
               (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint16_t uVar4;
  System_String_o *a;
  int index;
  
  *start = -1;
  *length = 0;
  index = 0;
  bVar2 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if (!bVar2) {
    if (haystack == (System_String_o *)0x0) {
label_0534c5c2:
      ThrowNullReferenceException();
    }
    iVar1 = (haystack->fields)._stringLength;
    index = 0;
    if (needle == (System_String_o *)0x0) {
      if (iVar1 < 1) goto label_0534c5b1;
      bVar2 = true;
      do {
        uVar4 = System_String__get_Chars(haystack,index,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar3 = System_Char__IsLetterOrDigit(uVar4,(MethodInfo *)0x0);
        if ((bVar2 & bVar3) != 0) goto label_0534c5c2;
        index = index + 1;
        bVar2 = !bVar3;
      } while (index < (haystack->fields)._stringLength);
    }
    else {
      if (iVar1 < 1) goto label_0534c5b1;
      bVar2 = true;
      do {
        uVar4 = System_String__get_Chars(haystack,index,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar3 = System_Char__IsLetterOrDigit(uVar4,(MethodInfo *)0x0);
        if ((bVar2 & bVar3) == 1) {
          iVar1 = (needle->fields)._stringLength;
          if ((haystack->fields)._stringLength < index + iVar1) {
            bVar2 = false;
          }
          else {
            bVar2 = false;
            a = System_String__Substring_53042f0(haystack,index,iVar1,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(a,needle,(MethodInfo *)0x0);
            if (bVar3) {
              *start = index;
              *length = (needle->fields)._stringLength;
              index = 1;
              goto label_0534c5b1;
            }
          }
        }
        else {
          bVar2 = !bVar3;
        }
        index = index + 1;
      } while (index < (haystack->fields)._stringLength);
    }
    index = 0;
  }
label_0534c5b1:
  return SUB41(index,0);
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindInitials
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, const MethodInfo* method);
// 0x534c640

bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
               (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint16_t c;
  uint16_t uVar3;
  int iVar4;
  int iVar5;
  int index;
  
  *start = -1;
  *length = 0;
  bVar1 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  bVar1 = System_String__IsNullOrEmpty(needle,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if (needle != (System_String_o *)0x0) {
    iVar5 = (needle->fields)._stringLength;
    if (iVar5 < 2) {
      return false;
    }
    if (haystack != (System_String_o *)0x0) {
      iVar4 = (haystack->fields)._stringLength;
      if (iVar4 < 1) {
        if (iVar5 != 0) {
          return false;
        }
      }
      else {
        bVar1 = true;
        iVar5 = 0;
        index = 0;
        do {
          c = System_String__get_Chars(haystack,iVar5,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar2 = System_Char__IsLetterOrDigit(c,(MethodInfo *)0x0);
          if ((bVar1 & bVar2) == 1) {
            if (index < (needle->fields)._stringLength) {
              bVar1 = false;
              uVar3 = System_String__get_Chars(needle,index,(MethodInfo *)0x0);
              if (c != uVar3) goto label_0534c6d5;
              iVar4 = *start;
              if (*start < 0) {
                *start = iVar5;
                iVar4 = iVar5;
              }
              index = index + 1;
              *length = (iVar5 - iVar4) + 1;
            }
            bVar1 = false;
          }
          else {
            bVar1 = !bVar2;
          }
label_0534c6d5:
          iVar5 = iVar5 + 1;
          iVar4 = (haystack->fields)._stringLength;
        } while (iVar5 < iVar4);
        if (index != (needle->fields)._stringLength) {
          return false;
        }
      }
      *length = iVar4 - *start;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindCompact
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, System_Int32_array** indices, const MethodInfo* method);
// 0x534c7b0
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534c8d9: nop dword ptr [rax]
// asm:   0x534c929: jmp 0x534c950
// asm:   0x534c947: jmp 0x534c950
// asm:   0x534c978: nop dword ptr [rax + rax]
// asm:   0x534c9bd: mov rbx, qword ptr [rsp + 0x18]
// asm:   0x534c9c2: mov rdi, qword ptr [rsp + 0x10]
// asm:   0x534c9c7: jmp 0x534c950
// asm:   0x534c9c9: xor ebp, ebp
// asm:   0x534c9dc: mov rax, qword ptr [rsp + 0x20]
// asm:   0x534c9e1: mov dword ptr [rax], edx
// asm:   0x534c9e3: mov rax, qword ptr [rsp + 0x28]
// asm:   0x534c9e8: mov dword ptr [rax], ebx
// asm:   0x534c9ea: mov rsi, rdi
// asm:   0x534c9ed: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x534c9f2: mov qword ptr [rdi], rsi
// asm:   0x534c9f5: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x534c9fa: mov bpl, 1
// asm:   0x534c9fd: jmp 0x534c9cb

bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
               (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
               System_Int32_array **indices,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  int iVar5;
  System_Int32_array *pSVar6;
  int iVar7;
  int iVar8;
  int index;
  uint32_t length_00;
  uint32_t index_00;
  int local_5c;
  
  if (Il2CppMethodInitialized_075428fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    Il2CppMethodInitialized_075428fb = '\x01';
  }
  *start = -1;
  *length = 0;
  *indices = (System_Int32_array *)0x0;
  Il2CppCodeGenWriteBarrier(indices);
  bVar2 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if ((!bVar2) && (bVar2 = System_String__IsNullOrEmpty(needle,(MethodInfo *)0x0), !bVar2)) {
    if (needle == (System_String_o *)0x0) {
label_0534c9ff:
      ThrowNullReferenceException();
    }
    length_00 = (needle->fields)._stringLength;
    if (2 < (int)length_00) {
      if (haystack == (System_String_o *)0x0) goto label_0534c9ff;
      if (0 < (haystack->fields)._stringLength) {
        local_5c = 1;
        iVar7 = 0;
        do {
          pSVar6 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,length_00);
          iVar5 = (haystack->fields)._stringLength;
          index_00 = 0;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar1 = (needle->fields)._stringLength;
            if (pSVar6 == (System_Int32_array *)0x0) {
              index = iVar7;
              if (0 < iVar1) {
                do {
                  uVar3 = System_String__get_Chars(haystack,index,(MethodInfo *)0x0);
                  uVar4 = System_String__get_Chars(needle,0,(MethodInfo *)0x0);
                  if (uVar3 == uVar4) goto label_0534c9ff;
                  iVar8 = index + 1;
                  iVar5 = (haystack->fields)._stringLength;
                } while ((iVar8 < iVar5) && (index = index + 1, 0 < (needle->fields)._stringLength));
              }
            }
            else if (0 < iVar1) {
              index_00 = 0;
              iVar1 = local_5c;
              do {
                iVar8 = iVar1;
                uVar3 = System_String__get_Chars(haystack,iVar8 + -1,(MethodInfo *)0x0);
                uVar4 = System_String__get_Chars(needle,index_00,(MethodInfo *)0x0);
                if (uVar3 == uVar4) {
                  if ((uint)pSVar6->max_length <= index_00) {
                    ThrowIndexOutOfRangeException();
                  }
                  pSVar6->m_Items[(int)index_00] = iVar8 + -1;
                  index_00 = index_00 + 1;
                  iVar5 = (haystack->fields)._stringLength;
                }
                else {
                  iVar5 = (haystack->fields)._stringLength;
                }
              } while ((iVar8 < iVar5) && (iVar1 = iVar8 + 1, (int)index_00 < (needle->fields)._stringLength))
              ;
            }
          }
          length_00 = (needle->fields)._stringLength;
          if ((index_00 == length_00) && (iVar8 - iVar7 <= (int)(length_00 * 2))) {
            *start = iVar7;
            *length = iVar8 - iVar7;
            *indices = pSVar6;
            Il2CppCodeGenWriteBarrier(indices);
            return true;
          }
          iVar7 = iVar7 + 1;
          local_5c = local_5c + 1;
        } while (iVar7 < iVar5);
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MatchesAt
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__MatchesAt (System_String_o* haystack, System_String_o* needle, int32_t start, const MethodInfo* method);
// 0x534d450

bool Gisketch_Aottg2UI_Search_GisketchSearchService__MatchesAt
               (System_String_o *haystack,System_String_o *needle,int32_t start,MethodInfo *method)

{
  int length;
  bool bVar1;
  System_String_o *a;
  
  if ((needle == (System_String_o *)0x0) || (haystack == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  length = (needle->fields)._stringLength;
  if ((haystack->fields)._stringLength < length + start) {
    return false;
  }
  a = System_String__Substring_53042f0(haystack,start,length,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,needle,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Slice
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Slice (System_String_o* value, int32_t start, int32_t length, const MethodInfo* method);
// 0x534c5d0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Slice
          (System_String_o *value,int32_t start,int32_t length,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((-1 < start) && (!bVar1)) {
    if (value == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (length + start <= (value->fields)._stringLength) {
      pSVar2 = System_String__Substring_53042f0(value,start,length,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


