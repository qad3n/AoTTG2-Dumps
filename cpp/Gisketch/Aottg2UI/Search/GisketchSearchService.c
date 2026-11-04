// Type: Gisketch.Aottg2UI.Search.GisketchSearchService
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchService.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchService.ScoredEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, int32_t score, const MethodInfo* method);
// 0x180cfb160

void
Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry___ctor(Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, int32_t score, MethodInfo* method)

{
  (__this->fields).m_Impl = impl;
  Il2CppCodeGenWriteBarrier((void **)__this,impl);
  *(int32_t *)&(__this->fields).m_Container = container;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService___c___cctor (const MethodInfo* method);
// 0x1818bff70

void Gisketch_Aottg2UI_Search_GisketchSearchService___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Search_GisketchSearchService___c_o *__this;
  
  if (Il2CppMethodInitialized_184341f82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c);
    Il2CppMethodInitialized_184341f82 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService___c___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Search_GisketchSearchService___c___ctor(Gisketch_Aottg2UI_Search_GisketchSearchService___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$<Query>b__0_0
// il2cpp: int32_t Gisketch_Aottg2UI_Search_GisketchSearchService___c___Query_b__0_0 (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o a, Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o b, const MethodInfo* method);
// 0x1818bfc60

int32_t Gisketch_Aottg2UI_Search_GisketchSearchService___c___Query_b__0_0
                  (Gisketch_Aottg2UI_Search_GisketchSearchService___c_o *__this,
                  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o *a,
                  Gisketch_Aottg2UI_Search_GisketchSearchService_ScoredEntry_o *b,MethodInfo *method)

{
  int value;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar2;
  int32_t iVar3;
  
  value = (a->fields).Score;
  if ((b->fields).Score != value) {
    iVar3 = System_Int32__CompareTo_1b28ec0(&(b->fields).Score,value,(MethodInfo *)0x0);
    return iVar3;
  }
  pGVar1 = (a->fields).Entry;
  if ((pGVar1 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
     (pGVar2 = (b->fields).Entry, pGVar2 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) {
    iVar3 = System_String__CompareOrdinal
                      ((pGVar1->fields)._Title_k__BackingField,(pGVar2->fields)._Title_k__BackingField,
                       (MethodInfo *)0x0);
    return iVar3;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5___ctor (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5___ctor(Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_IDisposable_Dispose (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_IDisposable_Dispose(Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x1818be990

bool Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__MoveNext
               (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.Generic.IEnumerator<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.get_Current
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x180573e90

Gisketch_Aottg2UI_Search_GisketchSearchEntry_o*
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current(Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x1818beb00

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x1818bea70

System_Collections_Generic_IEnumerator_GisketchSearchEntry__o*
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator(Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, MethodInfo* method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_184341f83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
    Il2CppMethodInitialized_184341f83 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o* __this, const MethodInfo* method);
// 0x1818bea70

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_184341f83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
    Il2CppMethodInitialized_184341f83 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Query
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Query (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* entries, System_String_o* query, const MethodInfo* method);
// 0x1818b4c50
// eh: try 0x1818b4e30..0x1818b51e8 -> pad 0x183319370 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b4f89: mov r8, qword ptr [rsp + 0x38]
// asm:   0x1818b4f8e: cmp qword ptr [r8], 0
// asm:   0x1818b4f92: je 0x1818b4fa5
// asm:   0x1818b4f94: xor ecx, ecx
// asm:   0x1818b4f96: mov r8, qword ptr [r8]
// asm:   0x1818b4f99: mov rdx, qword ptr [rip + 0x27e4360]  ; TypeInfo_System_IDisposable
// asm:   0x1818b4fa0: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1818b4fa5: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818b4faa: test rcx, rcx
// asm:   0x1818b4fad: jne 0x1818b51d2
// asm:   0x1818b4fb3: xor r14d, r14d
// asm:   0x1818b4fb6: mov r15, qword ptr [rsp + 0xf8]
// asm:   0x1818b4fbe: mov r12, r15
// asm:   0x1818b5178: mov rdx, qword ptr [rip + 0x27ee481]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_Dispose
// asm:   0x1818b517f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818b5184: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818b5189: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818b518e: test rcx, rcx
// asm:   0x1818b5191: jne 0x1818b51e8
// asm:   0x1818b5193: mov rdi, qword ptr [rsp + 0xf8]
// asm:   0x1818b51d2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1818b51e8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183319370: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183319375: push rbp
// asm:   0x183319376: sub rsp, 0x30
// asm:   0x18331937a: mov rbp, rdx
// asm:   0x18331937d: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x183319384: mov rcx, qword ptr [rax]
// asm:   0x183319387: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18331938b: movabs rax, 0
// asm:   0x183319395: add rsp, 0x30
// asm:   0x183319399: pop rbp
// asm:   0x18331939a: ret 
// asm:   0x183320d80: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320d85: push rbp
// asm:   0x183320d86: sub rsp, 0x30
// asm:   0x183320d8a: mov rbp, rdx
// asm:   0x183320d8d: mov rax, qword ptr [rbp + 0xa8]
// asm:   0x183320d94: mov rcx, qword ptr [rax]
// asm:   0x183320d97: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183320d9b: movabs rax, 0
// asm:   0x183320da5: add rsp, 0x30
// asm:   0x183320da9: pop rbp
// asm:   0x183320daa: ret 

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Query
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *entries,System_String_o *query,
          MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  int32_t iVar10;
  System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *__this;
  Il2CppObject *pIVar11;
  void *pvVar12;
  VirtualInvokeData *pVVar13;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_00;
  System_String_o *displayTitle;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *pGVar14;
  UnityEngine_Rendering_DynamicArray_SortComparer_T__o *__this_01;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_02;
  ushort uVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Int32_array *pSStack_68;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o local_58;
  
  if (Il2CppMethodInitialized_184341f79 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor_40a5090);
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
    Il2CppMethodInitialized_184341f79 = '\x01';
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSStack_68 = (System_Int32_array *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry);
  System_Collections_Generic_List_GisketchSearchService_ScoredEntry____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_ctor);
  if (entries == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (Il2CppMethodInitialized_184341f7a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
      Il2CppMethodInitialized_184341f7a = '\x01';
    }
    entries = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)entries,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *)entries)->fields).__1__state = -2;
    iVar10 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *)entries)->fields).__l__initialThreadId =
         iVar10;
    if ((Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *)entries ==
        (Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *)0x0) goto label_1818b51bb;
  }
  pIVar11 = InterfaceInvoker0_Invoke
                      (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry,
                       (Il2CppObject *)entries);
  while( true ) {
    if (pIVar11 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar12 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar11);
    if ((char)pvVar12 == '\0') break;
    if (pIVar11 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = pIVar11->klass;
    uVar2 = (pIVar5->_2).interface_offsets_count;
    uVar15 = 0;
    if (uVar2 != 0) {
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      do {
        if (pIVar6[uVar15].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry) {
          pVVar13 = pIVar5->vtable + pIVar6[uVar15].offset;
          goto label_1818b4eb2;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar2);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar11,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry,0);
label_1818b4eb2:
    __this_00 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                (*pVVar13->methodPtr)(pIVar11,pVVar13->method);
    if (__this_00 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      displayTitle = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      displayTitle = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_18aeae0
                               (__this_00,true,(MethodInfo *)0x0);
    }
    pGVar14 = Gisketch_Aottg2UI_Search_GisketchSearchService__Match_18b3e50
                        (&local_58,__this_00,query,displayTitle,(MethodInfo *)0x0);
    iVar3 = (pGVar14->fields).Score;
    if (0 < iVar3) {
      uStack_90 = 0;
      local_98 = __this_00;
      Il2CppCodeGenWriteBarrier((void **)&local_98,__this_00);
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar3);
      if (__this == (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)0x0) {
        ThrowNullReferenceException();
      }
      local_58.fields.Score = (int32_t)local_98;
      local_58.fields.DisplayStart = local_98._4_4_;
      local_58.fields._12_4_ = uStack_90._4_4_;
      local_58.fields.DisplayLength = iVar3;
      il2cpp_runtime_helper_180039eb0(__this,&local_58,
                    MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_Add);
    }
  }
  if (pIVar11 != (Il2CppObject *)0x0) {
    InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar11);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c);
  }
  __this_01 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
              TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields->__9__0_0;
  if (__this_01 == (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c);
    }
    pIVar11 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields->__9;
    __this_01 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Comparison_GisketchSearchService_ScoredEntry);
    System_Comparison_GisketchSearchService_ScoredEntry____ctor
              (__this_01,pIVar11,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c_Query_b__0_0,
               (MethodInfo_C981A0 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields->__9__0_0 =
         (System_Comparison_GisketchSearchService_ScoredEntry__o *)__this_01;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c->static_fields->__9__0_0,__this_01);
  }
  if (__this != (System_Collections_Generic_List_GisketchSearchService_ScoredEntry__o *)0x0) {
    System_Collections_Generic_List_GisketchSearchService_ScoredEntry___Sort
              ((System_Collections_Generic_List_T__o *)__this,(System_Comparison_T__o *)__this_01,
               (MethodInfo_935C80 *)
               MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_Sort);
    iVar10 = (__this->fields)._size;
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_T__o *)__this_02,iVar10,
               (MethodInfo_92A4F0 *)
               MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor_40a5090);
    System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_58,
               (System_Collections_Generic_List_T__o *)__this,
               (MethodInfo_91F200 *)
               MethodInfo_System_Collections_Generic_List_GisketchSearchService_ScoredEntry_GetEnumerator);
    local_80.fields._list =
         (System_Collections_Generic_List_T__o *)CONCAT44(local_58.fields.DisplayStart,local_58.fields.Score);
    local_80.fields._version = local_58.fields._12_4_;
    local_80.fields._index = local_58.fields.DisplayLength;
    local_80.fields._current = (Il2CppObject *)local_58.fields.HiddenText;
    pSStack_68 = local_58.fields.DisplayIndices;
    while( true ) {
      bVar9 = System_Collections_Generic_List_Enumerator_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___MoveNext
                        (&local_80,
                         (MethodInfo_15292D0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_MoveNext
                        );
      pMVar8 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
      if (!bVar9) {
        System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                   MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchService_ScoredEntry_Dispose
                  );
        return __this_02;
      }
      if (__this_02 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar7 = (__this_02->fields)._items;
      if (pGVar7 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar4 = (__this_02->fields)._size;
      if (uVar4 < (uint)pGVar7->max_length) {
        (__this_02->fields)._size = uVar4 + 1;
        if ((uint)pGVar7->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        pGVar7->m_Items[(int)uVar4] =
             (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)local_80.fields._current;
        Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar4,local_80.fields._current);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,local_80.fields._current,
                   (MethodInfo_93DD50 *)pMVar8->klass->rgctx_data[0xe].method);
      }
    }
    ThrowNullReferenceException();
  }
label_1818b51bb:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Match
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Match (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, const MethodInfo* method);
// 0x1818b4b70

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Match
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  int32_t iVar2;
  int32_t iVar3;
  undefined4 uVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *pGVar6;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o local_28;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_18aeae0(entry,true,(MethodInfo *)0x0);
  }
  pGVar6 = Gisketch_Aottg2UI_Search_GisketchSearchService__Match_18b3e50
                     (&local_28,entry,query,pSVar5,(MethodInfo *)0x0);
  iVar2 = (pGVar6->fields).DisplayStart;
  iVar3 = (pGVar6->fields).DisplayLength;
  uVar4 = *(undefined4 *)&(pGVar6->fields).field_0xc;
  pSVar5 = (pGVar6->fields).HiddenText;
  pSVar1 = (pGVar6->fields).DisplayIndices;
  (__return_storage_ptr__->fields).Score = (pGVar6->fields).Score;
  (__return_storage_ptr__->fields).DisplayStart = iVar2;
  (__return_storage_ptr__->fields).DisplayLength = iVar3;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = uVar4;
  (__return_storage_ptr__->fields).HiddenText = pSVar5;
  (__return_storage_ptr__->fields).DisplayIndices = pSVar1;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Match
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Match (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, System_String_o* displayTitle, const MethodInfo* method);
// 0x1818b3e50
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b40fc: mov r14, qword ptr [rbp - 0x19]
// asm:   0x1818b4119: nop dword ptr [rax]
// asm:   0x1818b4249: nop dword ptr [rax]
// asm:   0x1818b43ef: nop 
// asm:   0x1818b447d: mov r15, qword ptr [rbp - 0x11]
// asm:   0x1818b45ad: mov r12, qword ptr [rbp - 9]
// asm:   0x1818b4611: mov r13, qword ptr [rbp - 0x19]
// asm:   0x1818b474a: mov r12, qword ptr [rbp - 9]
// asm:   0x1818b474e: xor r15d, r15d
// asm:   0x1818b4751: mov r14, qword ptr [rbp - 0x19]
// asm:   0x1818b48ef: mov ecx, r15d

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Match_18b3e50
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,
          System_String_o *displayTitle,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  bool bVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  System_String_o *pSVar5;
  System_String_o *a;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  undefined8 *puVar8;
  System_Int32_array *value_00;
  void *pvVar9;
  int32_t index;
  int index_00;
  int iVar10;
  int iVar11;
  undefined4 local_98;
  int32_t iStack_94;
  uint uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int32_t local_78;
  uint local_74;
  System_String_o *local_70;
  System_String_o *local_68;
  System_String_o *local_60;
  System_Int32_array *local_58;
  System_String_o *local_50;
  System_Int32_array *local_48 [2];
  
  local_58 = (System_Int32_array *)0x0;
  local_48[0] = (System_Int32_array *)0x0;
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_1818b4b1b;
  bVar1 = System_String__IsNullOrEmpty(query,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if (query == (System_String_o *)0x0) goto label_1818b4b6a;
    pSVar7 = System_String__ToLowerInvariant(query,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  if (bVar1) {
    pvVar9 = (void *)**(longlong **)(g_data_184354e50 + 0xb8);
    uStack_7c = 0;
    local_98 = 1;
    iStack_94 = -1;
    uStack_90 = 0;
    uStack_80 = 0;
    if (pvVar9 == (void *)0x0) {
      pvVar9 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    uStack_88 = SUB84(pvVar9,0);
    uStack_84 = (undefined4)((ulonglong)pvVar9 >> 0x20);
    Il2CppCodeGenWriteBarrier((void **)&uStack_88,pvVar9);
    goto label_1818b4201;
  }
  pSVar5 = (entry->fields)._Title_k__BackingField;
  bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if (pSVar5 == (System_String_o *)0x0) goto label_1818b4b6a;
    pSVar5 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
  }
  local_68 = pSVar5;
  bVar1 = System_String__IsNullOrEmpty(displayTitle,(MethodInfo *)0x0);
  if (bVar1) {
    a = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if (displayTitle == (System_String_o *)0x0) goto label_1818b4b6a;
    a = System_String__ToLowerInvariant(displayTitle,(MethodInfo *)0x0);
  }
  pSVar6 = (entry->fields)._Keywords_k__BackingField;
  local_60 = a;
  bVar1 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if (pSVar6 == (System_String_o *)0x0) goto label_1818b4b6a;
    pSVar6 = System_String__ToLowerInvariant(pSVar6,(MethodInfo *)0x0);
  }
  value = (entry->fields)._Id_k__BackingField;
  local_70 = pSVar6;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    local_50 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if (value == (System_String_o *)0x0) goto label_1818b4b6a;
    local_50 = System_String__ToLowerInvariant(value,(MethodInfo *)0x0);
  }
  bVar1 = System_String__op_Equality(a,pSVar7,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = System_String__op_Equality(pSVar5,pSVar7,(MethodInfo *)0x0), bVar1)) {
    if (a == (System_String_o *)0x0) {
label_1818b4b64:
      ThrowNullReferenceException();
    }
    iStack_94 = System_String__IndexOf_196e2a0(a,pSVar7,(MethodInfo *)0x0);
    if (iStack_94 < 0) {
      uStack_90 = 0;
    }
    else {
      if (pSVar7 == (System_String_o *)0x0) goto label_1818b4b64;
      uStack_90 = (pSVar7->fields)._stringLength;
    }
    pvVar9 = (void *)**(longlong **)(g_data_184354e50 + 0xb8);
    local_98 = 100;
    goto label_1818b41d3;
  }
  if (a == (System_String_o *)0x0) goto label_1818b4b6a;
  bVar1 = System_String__StartsWith(a,pSVar7,(MethodInfo *)0x0);
  if (bVar1) {
label_1818b4a2c:
    iStack_94 = System_String__IndexOf_196e2a0(a,pSVar7,(MethodInfo *)0x0);
    if (iStack_94 < 0) {
      uStack_90 = 0;
    }
    else {
      if (pSVar7 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      uStack_90 = (pSVar7->fields)._stringLength;
    }
    pvVar9 = (void *)**(longlong **)(g_data_184354e50 + 0xb8);
    local_98 = 0x50;
    goto label_1818b41d3;
  }
  if (pSVar5 == (System_String_o *)0x0) goto label_1818b4b6a;
  bVar1 = System_String__StartsWith(pSVar5,pSVar7,(MethodInfo *)0x0);
  if (bVar1) goto label_1818b4a2c;
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if (!bVar1) {
    iStack_94 = 0;
    bVar1 = true;
    while (pSVar6 = local_70, iStack_94 < (a->fields)._stringLength) {
      uVar3 = System_String__get_Chars(a,iStack_94,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar2 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      if (bVar2) {
        if (bVar1) {
          if (pSVar7 == (System_String_o *)0x0) goto label_1818b4b6a;
          iVar10 = (pSVar7->fields)._stringLength;
          if (iStack_94 + iVar10 <= (a->fields)._stringLength) {
            pSVar6 = System_String__Substring_1972740(a,iStack_94,iVar10,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(pSVar6,pSVar7,(MethodInfo *)0x0);
            if (bVar1) goto label_1818b41b3;
          }
        }
        bVar1 = false;
        iStack_94 = iStack_94 + 1;
      }
      else {
        bVar1 = true;
        iStack_94 = iStack_94 + 1;
      }
    }
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (!bVar1) {
    iStack_94 = 0;
    bVar1 = true;
    while (pSVar6 = local_70, iStack_94 < (pSVar5->fields)._stringLength) {
      uVar3 = System_String__get_Chars(pSVar5,iStack_94,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar2 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      if (bVar2) {
        if (bVar1) {
          if (pSVar7 == (System_String_o *)0x0) goto label_1818b4b6a;
          iVar10 = (pSVar7->fields)._stringLength;
          if (iStack_94 + iVar10 <= (pSVar5->fields)._stringLength) {
            pSVar6 = System_String__Substring_1972740(pSVar5,iStack_94,iVar10,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(pSVar6,pSVar7,(MethodInfo *)0x0);
            if (bVar1) goto label_1818b41b3;
          }
        }
        bVar1 = false;
        iStack_94 = iStack_94 + 1;
      }
      else {
        bVar1 = true;
        iStack_94 = iStack_94 + 1;
      }
    }
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
  if (!bVar1) {
    if (pSVar6 == (System_String_o *)0x0) goto label_1818b4b6a;
    iVar10 = 0;
    bVar1 = true;
    while (iVar10 < (pSVar6->fields)._stringLength) {
      uVar3 = System_String__get_Chars(pSVar6,iVar10,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar2 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      if (bVar2) {
        if (bVar1) {
          if (pSVar7 == (System_String_o *)0x0) goto label_1818b4b6a;
          if ((pSVar7->fields)._stringLength + iVar10 <= (local_70->fields)._stringLength) {
            pSVar6 = System_String__Substring_1972740
                               (local_70,iVar10,(pSVar7->fields)._stringLength,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(pSVar6,pSVar7,(MethodInfo *)0x0);
            if (bVar1) {
              iVar11 = (pSVar7->fields)._stringLength;
              pSVar7 = (entry->fields)._Keywords_k__BackingField;
              bVar1 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
              if ((!bVar1) && (-1 < iVar10)) {
                if (pSVar7 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                if (iVar11 + iVar10 <= (pSVar7->fields)._stringLength) {
                  pSVar7 = System_String__Substring_1972740(pSVar7,iVar10,iVar11,(MethodInfo *)0x0);
                  goto label_1818b4346;
                }
              }
              pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
label_1818b4346:
              uStack_7c = 0;
              uStack_80 = 0;
              if (pSVar7 == (System_String_o *)0x0) {
                pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              uStack_88 = SUB84(pSVar7,0);
              uStack_84 = (undefined4)((ulonglong)pSVar7 >> 0x20);
              Il2CppCodeGenWriteBarrier((void **)&uStack_88,pSVar7);
              uStack_80 = 0;
              uStack_7c = 0;
              Il2CppCodeGenWriteBarrier((void **)&uStack_80,(void *)0x0);
              (__return_storage_ptr__->fields).Score = 0x3c;
              (__return_storage_ptr__->fields).DisplayStart = -1;
              *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
              (__return_storage_ptr__->fields).HiddenText = (System_String_o *)CONCAT44(uStack_84,uStack_88);
              (__return_storage_ptr__->fields).DisplayIndices =
                   (System_Int32_array *)CONCAT44(uStack_7c,uStack_80);
              return __return_storage_ptr__;
            }
          }
        }
        bVar1 = false;
        iVar10 = iVar10 + 1;
        pSVar6 = local_70;
      }
      else {
        bVar1 = true;
        iVar10 = iVar10 + 1;
        pSVar6 = local_70;
      }
    }
  }
  iStack_94 = -1;
  bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), bVar1)) goto label_1818b4481;
  if (pSVar7 == (System_String_o *)0x0) goto label_1818b4b6a;
  if (1 < (pSVar7->fields)._stringLength) {
    iVar10 = 0;
    index = 0;
    bVar1 = true;
    while (index < (a->fields)._stringLength) {
      uVar3 = System_String__get_Chars(a,index,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar2 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      if (bVar2) {
        if (((bVar1) && (iVar10 < (pSVar7->fields)._stringLength)) &&
           (uVar4 = System_String__get_Chars(pSVar7,iVar10,(MethodInfo *)0x0), uVar3 == uVar4)) {
          if (iStack_94 < 0) {
            iStack_94 = index;
          }
          iVar10 = iVar10 + 1;
        }
        bVar1 = false;
        index = index + 1;
        a = local_60;
      }
      else {
        bVar1 = true;
        index = index + 1;
        a = local_60;
      }
    }
    pSVar5 = local_68;
    if (iVar10 != (pSVar7->fields)._stringLength) goto label_1818b4481;
    iVar10 = (a->fields)._stringLength;
label_1818b4555:
    uStack_90 = iVar10 - iStack_94;
    pvVar9 = (void *)**(longlong **)(g_data_184354e50 + 0xb8);
    uStack_7c = 0;
    local_98 = 0x32;
    uStack_80 = 0;
    if (pvVar9 == (void *)0x0) {
      pvVar9 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    uStack_88 = SUB84(pvVar9,0);
    uStack_84 = (undefined4)((ulonglong)pvVar9 >> 0x20);
    Il2CppCodeGenWriteBarrier((void **)&uStack_88,pvVar9);
    goto label_1818b4201;
  }
label_1818b4481:
  iStack_94 = -1;
  bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar5 = local_68, !bVar1))
  {
    if (pSVar7 == (System_String_o *)0x0) goto label_1818b4b6a;
    if (1 < (pSVar7->fields)._stringLength) {
      iVar11 = 0;
      iVar10 = 0;
      bVar1 = true;
      while (iVar10 < (pSVar5->fields)._stringLength) {
        uVar3 = System_String__get_Chars(pSVar5,iVar10,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar2 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
        if (bVar2) {
          if (((bVar1) && (iVar11 < (pSVar7->fields)._stringLength)) &&
             (uVar4 = System_String__get_Chars(pSVar7,iVar11,(MethodInfo *)0x0), uVar3 == uVar4)) {
            if (iStack_94 < 0) {
              iStack_94 = iVar10;
            }
            iVar11 = iVar11 + 1;
          }
          bVar1 = false;
          iVar10 = iVar10 + 1;
        }
        else {
          bVar1 = true;
          iVar10 = iVar10 + 1;
        }
      }
      a = local_60;
      if (iVar11 == (pSVar7->fields)._stringLength) {
        iVar10 = (local_68->fields)._stringLength;
        goto label_1818b4555;
      }
    }
  }
  pSVar5 = local_70;
  iVar10 = -1;
  iVar11 = 0;
  local_78 = -1;
  local_74 = 0;
  bVar1 = System_String__IsNullOrEmpty(local_70,(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar6 = local_70, !bVar1))
  {
    if (pSVar7 == (System_String_o *)0x0) goto label_1818b4b6a;
    if ((pSVar7->fields)._stringLength < 2) goto label_1818b4755;
    index_00 = 0;
    bVar1 = true;
    if (local_70 == (System_String_o *)0x0) goto label_1818b4b6a;
    while (index_00 < (pSVar6->fields)._stringLength) {
      uVar3 = System_String__get_Chars(pSVar6,index_00,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar2 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      if (bVar2) {
        if (((bVar1) && (iVar11 < (pSVar7->fields)._stringLength)) &&
           (uVar4 = System_String__get_Chars(pSVar7,iVar11,(MethodInfo *)0x0), uVar3 == uVar4)) {
          if (iVar10 < 0) {
            iVar10 = index_00;
          }
          iVar11 = iVar11 + 1;
          local_74 = (index_00 - iVar10) + 1;
          local_78 = iVar10;
        }
        bVar1 = false;
        index_00 = index_00 + 1;
      }
      else {
        bVar1 = true;
        index_00 = index_00 + 1;
      }
    }
    a = local_60;
    pSVar5 = local_70;
    if (iVar11 != (pSVar7->fields)._stringLength) goto label_1818b4755;
    pSVar7 = (entry->fields)._Keywords_k__BackingField;
    iVar11 = (local_70->fields)._stringLength - iVar10;
    bVar1 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
    if ((bVar1) || (iVar10 < 0)) {
label_1818b46f0:
      pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      if (pSVar7 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar7->fields)._stringLength < iVar11 + iVar10) goto label_1818b46f0;
      pSVar7 = System_String__Substring_1972740(pSVar7,iVar10,iVar11,(MethodInfo *)0x0);
    }
    local_98 = 0x32;
    uStack_7c = 0;
    iStack_94 = -1;
    uStack_90 = 0;
    uStack_80 = 0;
    if (pSVar7 == (System_String_o *)0x0) {
      pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    uStack_88 = SUB84(pSVar7,0);
    uStack_84 = (undefined4)((ulonglong)pSVar7 >> 0x20);
    Il2CppCodeGenWriteBarrier((void **)&uStack_88,pSVar7);
    goto label_1818b4201;
  }
label_1818b4755:
  bVar1 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                    (a,pSVar7,&local_78,(int32_t *)&local_74,&local_58,(MethodInfo *)0x0);
  pSVar6 = local_68;
  uStack_90 = 0;
  if ((bVar1) ||
     (bVar1 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                        (local_68,pSVar7,&local_78,(int32_t *)&local_74,&local_58,(MethodInfo *)0x0), bVar1))
  {
    value_00 = local_58;
    pvVar9 = (void *)**(longlong **)(g_data_184354e50 + 0xb8);
    iStack_94 = local_78;
    uStack_90 = local_74;
    uStack_7c = 0;
    local_98 = 0x2d;
    uStack_80 = 0;
    if (pvVar9 == (void *)0x0) {
      pvVar9 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    uStack_88 = SUB84(pvVar9,0);
    uStack_84 = (undefined4)((ulonglong)pvVar9 >> 0x20);
    Il2CppCodeGenWriteBarrier((void **)&uStack_88,pvVar9);
    uStack_80 = SUB84(value_00,0);
    uStack_7c = (undefined4)((ulonglong)value_00 >> 0x20);
    goto label_1818b4203;
  }
  bVar1 = Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
                    (pSVar5,pSVar7,&local_78,(int32_t *)&local_74,local_48,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__Contains(a,pSVar7,(MethodInfo *)0x0);
    if ((bVar1) || (bVar1 = System_String__Contains(pSVar6,pSVar7,(MethodInfo *)0x0), bVar1)) {
      iStack_94 = System_String__IndexOf_196e2a0(a,pSVar7,(MethodInfo *)0x0);
      if (-1 < iStack_94) {
        if (pSVar7 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        uStack_90 = (pSVar7->fields)._stringLength;
      }
      query = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
      local_98 = 0x28;
      if (query == (System_String_o *)0x0) {
        puVar8 = *(undefined8 **)(g_data_184354e50 + 0xb8);
label_1818b4879:
        query = (System_String_o *)*puVar8;
      }
    }
    else {
      if (pSVar5 == (System_String_o *)0x0) {
label_1818b4b6a:
        ThrowNullReferenceException();
      }
      bVar1 = System_String__Contains(pSVar5,pSVar7,(MethodInfo *)0x0);
      if (bVar1) {
        local_98 = 0x28;
        iStack_94 = -1;
        uStack_90 = 0;
        if (query == (System_String_o *)0x0) {
          query = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
      }
      else {
        if (local_50 == (System_String_o *)0x0) goto label_1818b4b6a;
        bVar1 = System_String__Contains(local_50,pSVar7,(MethodInfo *)0x0);
        if (!bVar1) {
label_1818b4b1b:
          (__return_storage_ptr__->fields).Score = 0;
          (__return_storage_ptr__->fields).DisplayStart = 0;
          *(undefined8 *)&(__return_storage_ptr__->fields).DisplayLength = 0;
          (__return_storage_ptr__->fields).HiddenText = (System_String_o *)0x0;
          (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
          return __return_storage_ptr__;
        }
        query = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
        local_98 = 0x19;
        iStack_94 = -1;
        uStack_90 = 0;
        if (query == (System_String_o *)0x0) {
          puVar8 = *(undefined8 **)(g_data_184354e50 + 0xb8);
          goto label_1818b4879;
        }
      }
    }
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_88 = SUB84(query,0);
    uStack_84 = (undefined4)((ulonglong)query >> 0x20);
    Il2CppCodeGenWriteBarrier((void **)&uStack_88,query);
    goto label_1818b4201;
  }
  pSVar7 = (entry->fields)._Keywords_k__BackingField;
  bVar1 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  if ((bVar1) || (local_78 < 0)) {
label_1818b4979:
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if (pSVar7 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pSVar7->fields)._stringLength < (int)(local_74 + local_78)) goto label_1818b4979;
    pSVar7 = System_String__Substring_1972740(pSVar7,local_78,local_74,(MethodInfo *)0x0);
  }
  uStack_7c = 0;
  local_98 = 0x2d;
  iStack_94 = -1;
  uStack_90 = 0;
  uStack_80 = 0;
  if (pSVar7 == (System_String_o *)0x0) {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  uStack_88 = SUB84(pSVar7,0);
  uStack_84 = (undefined4)((ulonglong)pSVar7 >> 0x20);
  Il2CppCodeGenWriteBarrier((void **)&uStack_88,pSVar7);
  goto label_1818b4201;
label_1818b41b3:
  uStack_90 = (pSVar7->fields)._stringLength;
  pvVar9 = (void *)**(longlong **)(g_data_184354e50 + 0xb8);
  local_98 = 0x3c;
label_1818b41d3:
  uStack_7c = 0;
  uStack_80 = 0;
  if (pvVar9 == (void *)0x0) {
    pvVar9 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  uStack_88 = SUB84(pvVar9,0);
  uStack_84 = (undefined4)((ulonglong)pvVar9 >> 0x20);
  Il2CppCodeGenWriteBarrier((void **)&uStack_88,pvVar9);
label_1818b4201:
  uStack_7c = 0;
  uStack_80 = 0;
  value_00 = (System_Int32_array *)0x0;
label_1818b4203:
  Il2CppCodeGenWriteBarrier((void **)&uStack_80,value_00);
  (__return_storage_ptr__->fields).Score = local_98;
  (__return_storage_ptr__->fields).DisplayStart = iStack_94;
  *(ulonglong *)&(__return_storage_ptr__->fields).DisplayLength = (ulonglong)uStack_90;
  (__return_storage_ptr__->fields).HiddenText = (System_String_o *)CONCAT44(uStack_84,uStack_88);
  (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)CONCAT44(uStack_7c,uStack_80);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Markup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, bool active, System_String_o* matchHex, const MethodInfo* method);
// 0x1818b3bc0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Markup
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,bool active,
          System_String_o *matchHex,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_18aeae0(entry,true,(MethodInfo *)0x0);
  }
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_18b3c30
                     (entry,query,active,matchHex,pSVar1,(System_String_o *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Markup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* query, bool active, System_String_o* matchHex, System_String_o* displayTitle, System_String_o* normalHex, const MethodInfo* method);
// 0x1818b3c30
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b3d09: mov qword ptr [rsp + 0x60], rsi
// asm:   0x1818b3d0e: xor r9d, r9d
// asm:   0x1818b3d11: mov r8d, r14d
// asm:   0x1818b3d14: xor edx, edx
// asm:   0x1818b3d16: mov rcx, rbp
// asm:   0x1818b3d19: call 0x181972740  ; System_String__Substring()
// asm:   0x1818b3d1e: mov rcx, rax
// asm:   0x1818b3d21: xor edx, edx
// asm:   0x1818b3d23: call 0x1818b3380  ; Gisketch_Aottg2UI_Search_GisketchSearchService__Escape()
// asm:   0x1818b3d28: mov rdx, qword ptr [rsp + 0x88]
// asm:   0x1818b3d30: mov rcx, rax
// asm:   0x1818b3d33: xor r8d, r8d
// asm:   0x1818b3d36: call 0x1818b5320  ; Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal()
// asm:   0x1818b3d3b: xor r9d, r9d
// asm:   0x1818b3d3e: mov r8d, r15d
// asm:   0x1818b3d41: mov edx, r14d
// asm:   0x1818b3d44: mov rcx, rbp
// asm:   0x1818b3d47: mov rsi, rax
// asm:   0x1818b3d4a: call 0x181972740  ; System_String__Substring()
// asm:   0x1818b3d4f: mov rcx, rax
// asm:   0x1818b3d52: xor edx, edx
// asm:   0x1818b3d54: call 0x1818b3380  ; Gisketch_Aottg2UI_Search_GisketchSearchService__Escape()
// asm:   0x1818b3d59: mov rcx, rax
// asm:   0x1818b3d5c: xor r8d, r8d
// asm:   0x1818b3d5f: mov rdx, rbx
// asm:   0x1818b3d62: call 0x1818b5470  ; Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap()
// asm:   0x1818b3d67: lea edx, [r15 + r14]
// asm:   0x1818b3d6b: xor r8d, r8d
// asm:   0x1818b3d6e: mov rcx, rbp
// asm:   0x1818b3d71: mov rbx, rax
// asm:   0x1818b3d74: call 0x181972730  ; System_String__Substring()
// asm:   0x1818b3d79: mov rcx, rax
// asm:   0x1818b3d7c: xor edx, edx
// asm:   0x1818b3d7e: call 0x1818b3380  ; Gisketch_Aottg2UI_Search_GisketchSearchService__Escape()
// asm:   0x1818b3d83: mov rdx, qword ptr [rsp + 0x88]
// asm:   0x1818b3d8b: mov rcx, rax
// asm:   0x1818b3d8e: xor r8d, r8d
// asm:   0x1818b3d91: call 0x1818b5320  ; Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal()
// asm:   0x1818b3d96: mov r8, rax
// asm:   0x1818b3d99: xor r9d, r9d
// asm:   0x1818b3d9c: mov rdx, rbx
// asm:   0x1818b3d9f: mov rcx, rsi
// asm:   0x1818b3da2: call 0x181969b70  ; System_String__Concat()
// asm:   0x1818b3da7: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x1818b3dac: jmp 0x1818b3cd0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_18b3c30
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *query,bool active,
          System_String_o *matchHex,System_String_o *displayTitle,System_String_o *normalHex,
          MethodInfo *method)

{
  System_Int32_array *indices;
  int32_t length;
  int length_00;
  bool bVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *pGVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Search_GisketchSearchMatch_o local_28;
  
  if (displayTitle == (System_String_o *)0x0) {
    displayTitle = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pGVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__Match_18b3e50
                     (&local_28,entry,query,displayTitle,(MethodInfo *)0x0);
  length_00 = (pGVar2->fields).DisplayLength;
  indices = (pGVar2->fields).DisplayIndices;
  if ((1 < (pGVar2->fields).Score) && (length = (pGVar2->fields).DisplayStart, -1 < length)) {
    if ((indices != (System_Int32_array *)0x0) && (indices->max_length != 0)) {
      pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices
                         (displayTitle,indices,matchHex,normalHex,(MethodInfo *)0x0);
      return pSVar3;
    }
    if (0 < length_00) {
      if (displayTitle == (System_String_o *)0x0) goto label_1818b3e46;
      if (length_00 + length <= (displayTitle->fields)._stringLength) {
        pSVar3 = System_String__Substring_1972740(displayTitle,0,length,(MethodInfo *)0x0);
        pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(pSVar3,(MethodInfo *)0x0);
        pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
                           (pSVar3,normalHex,(MethodInfo *)0x0);
        pSVar4 = System_String__Substring_1972740(displayTitle,length,length_00,(MethodInfo *)0x0);
        pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(pSVar4,(MethodInfo *)0x0);
        pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar4,matchHex,(MethodInfo *)0x0);
        pSVar5 = System_String__Substring(displayTitle,length_00 + length,(MethodInfo *)0x0);
        pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(pSVar5,(MethodInfo *)0x0);
        pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
                           (pSVar5,normalHex,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969b70(pSVar3,pSVar4,pSVar5,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
  if (Il2CppMethodInitialized_184341f7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    Il2CppMethodInitialized_184341f7e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(displayTitle,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
                       ((System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),normalHex,(MethodInfo *)0x0
                       );
  }
  else {
    if (displayTitle == (System_String_o *)0x0) {
label_1818b3e46:
      ThrowNullReferenceException();
    }
    pSVar3 = System_String__Replace_1970e80
                       (displayTitle,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar3,normalHex,(MethodInfo *)0x0);
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Empty
// il2cpp: System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchService__Empty (const MethodInfo* method);
// 0x1818b3320

System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Empty(MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchService__Empty_d__5_o *__this;
  
  if (Il2CppMethodInitialized_184341f7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
    Il2CppMethodInitialized_184341f7a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Visible
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchMatch_o Gisketch_Aottg2UI_Search_GisketchSearchService__Visible (System_String_o* display, System_String_o* needle, int32_t score, const MethodInfo* method);
// 0x1818b5270
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b52b0: mov r8d, ebp

Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Visible
          (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__return_storage_ptr__,System_String_o *display,
          System_String_o *needle,int32_t score,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *value;
  int32_t iVar2;
  
  if (display == (System_String_o *)0x0) {
label_1818b5317:
    ThrowNullReferenceException();
  }
  iVar1 = System_String__IndexOf_196e2a0(display,needle,(MethodInfo *)0x0);
  iVar2 = 0;
  if (-1 < iVar1) {
    if (needle == (System_String_o *)0x0) goto label_1818b5317;
    iVar2 = (needle->fields)._stringLength;
  }
  value = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
  *(undefined8 *)&(__return_storage_ptr__->fields).field_0xc = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->fields).HiddenText + 4) = 0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->fields).DisplayIndices + 4) = 0;
  (__return_storage_ptr__->fields).Score = score;
  (__return_storage_ptr__->fields).DisplayStart = iVar1;
  (__return_storage_ptr__->fields).DisplayLength = iVar2;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__return_storage_ptr__->fields).HiddenText = value;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).HiddenText,value);
  (__return_storage_ptr__->fields).DisplayIndices = (System_Int32_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).DisplayIndices,(void *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkRange
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange (System_String_o* text, Gisketch_Aottg2UI_Search_GisketchSearchMatch_o match, bool active, System_String_o* matchHex, System_String_o* normalHex, const MethodInfo* method);
// 0x1818b3a00

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__MarkRange
          (System_String_o *text,Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *match,bool active,
          System_String_o *matchHex,System_String_o *normalHex,MethodInfo *method)

{
  int length;
  int length_00;
  System_Int32_array *indices;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (((match->fields).DisplayIndices != (System_Int32_array *)0x0) &&
     (indices = (match->fields).DisplayIndices, indices->max_length != 0)) {
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices
                       (text,indices,matchHex,normalHex,(MethodInfo *)0x0);
    return pSVar2;
  }
  length = (match->fields).DisplayStart;
  if ((-1 < length) && (length_00 = (match->fields).DisplayLength, 0 < length_00)) {
    if (text == (System_String_o *)0x0) goto label_1818b3bba;
    if (length_00 + length <= (text->fields)._stringLength) {
      pSVar2 = System_String__Substring_1972740(text,0,length,(MethodInfo *)0x0);
      pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(pSVar2,(MethodInfo *)0x0);
      pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar2,normalHex,(MethodInfo *)0x0);
      pSVar3 = System_String__Substring_1972740(text,length,length_00,(MethodInfo *)0x0);
      pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(pSVar3,(MethodInfo *)0x0);
      pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar3,matchHex,(MethodInfo *)0x0);
      pSVar4 = System_String__Substring(text,length_00 + length,(MethodInfo *)0x0);
      pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(pSVar4,(MethodInfo *)0x0);
      pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar4,normalHex,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969b70(pSVar2,pSVar3,pSVar4,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  if (Il2CppMethodInitialized_184341f7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    Il2CppMethodInitialized_184341f7e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
                       ((System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),normalHex,(MethodInfo *)0x0
                       );
  }
  else {
    if (text == (System_String_o *)0x0) {
label_1818b3bba:
      ThrowNullReferenceException();
    }
    pSVar2 = System_String__Replace_1970e80
                       (text,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal(pSVar2,normalHex,(MethodInfo *)0x0);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkIndices
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices (System_String_o* text, System_Int32_array* indices, System_String_o* matchHex, System_String_o* normalHex, const MethodInfo* method);
// 0x1818b3840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b38b9: nop dword ptr [rax]

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__MarkIndices
          (System_String_o *text,System_Int32_array *indices,System_String_o *matchHex,
          System_String_o *normalHex,MethodInfo *method)

{
  char cVar1;
  Il2CppObject *pIVar2;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar3;
  uint uVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184341f7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_bool_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184341f7b = '\x01';
  }
  if (text != (System_String_o *)0x0) {
    pIVar2 = SZArrayNew(TypeInfo_bool_array,(text->fields)._stringLength);
    if (indices != (System_Int32_array *)0x0) {
      for (uVar4 = 0; (int)uVar4 < (int)indices->max_length; uVar4 = uVar4 + 1) {
        if ((uint)indices->max_length <= uVar4) goto label_1818b39f7;
        uVar5 = indices->m_Items[(int)uVar4];
        if (-1 < (int)uVar5) {
          if (pIVar2 == (Il2CppObject *)0x0) goto label_1818b39f1;
          if ((int)uVar5 < (int)*(uint *)&pIVar2[1].monitor) {
            if (*(uint *)&pIVar2[1].monitor <= uVar5) goto label_1818b39f7;
            *(undefined1 *)((longlong)&pIVar2[2].klass + (longlong)(int)uVar5) = 1;
          }
        }
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
      System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
      uVar4 = 0;
      while ((int)uVar4 < (text->fields)._stringLength) {
        if (pIVar2 == (Il2CppObject *)0x0) goto label_1818b39f1;
        if (*(uint *)&pIVar2[1].monitor <= uVar4) {
label_1818b39f7:
          ThrowIndexOutOfRangeException();
        }
        cVar1 = *(char *)((longlong)&pIVar2[2].klass + (longlong)(int)uVar4);
        uVar5 = uVar4;
        if ((int)uVar4 < (text->fields)._stringLength) {
          do {
            if (*(uint *)&pIVar2[1].monitor <= uVar5) goto label_1818b39f7;
            if ((bool)*(char *)((longlong)&pIVar2[2].klass + (longlong)(int)uVar5) != (cVar1 != '\0')) break;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (text->fields)._stringLength);
        }
        pSVar3 = System_String__Substring_1972740(text,uVar4,uVar5 - uVar4,(MethodInfo *)0x0);
        pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(pSVar3,(MethodInfo *)0x0);
        if (cVar1 == '\0') {
          pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
                             (pSVar3,normalHex,(MethodInfo *)0x0);
        }
        else {
          pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap(pSVar3,matchHex,(MethodInfo *)0x0);
        }
        if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818b39f1;
        System_Text_StringBuilder__Append_197dca0(__this,pSVar3,(MethodInfo *)0x0);
        uVar4 = uVar5;
      }
      if (__this != (System_Text_StringBuilder_o *)0x0) {
        pSVar3 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method);
        return pSVar3;
      }
    }
  }
label_1818b39f1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Wrap
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap (System_String_o* text, System_String_o* matchHex, const MethodInfo* method);
// 0x1818b5470

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Wrap
          (System_String_o *text,System_String_o *matchHex,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184341f7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_184341f7c = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar1 = "<color=#";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<color=#";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = matchHex;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,matchHex);
        pSVar1 = ">";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = text;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,text);
            pSVar1 = "</color>";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$WrapNormal
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal (System_String_o* text, System_String_o* normalHex, const MethodInfo* method);
// 0x1818b5320

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__WrapNormal
          (System_String_o *text,System_String_o *normalHex,MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184341f7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_184341f7d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(normalHex,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if (!bVar1) {
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
      pSVar2 = "<color=#";
      if (values == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "<color=#";
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar2);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = normalHex;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,normalHex);
          pSVar2 = ">";
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = ">";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar2);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = text;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,text);
              pSVar2 = "</color>";
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "</color>";
                Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar2);
                pSVar2 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
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
// 0x1818b3380

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Escape(System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184341f7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\xb9");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    Il2CppMethodInitialized_184341f7e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (text != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace_1970e80
                       (text,"<","\xe2\x80\xb9",(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Lower
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Lower (System_String_o* value, const MethodInfo* method);
// 0x1818b37f0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Lower(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__ToLowerInvariant(value,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindToken
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, const MethodInfo* method);
// 0x1818b36e0

bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindToken
               (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
               MethodInfo *method)

{
  int length_00;
  bool bVar1;
  bool bVar2;
  uint16_t c;
  System_String_o *a;
  int32_t index;
  
  *start = -1;
  *length = 0;
  bVar1 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if (!bVar1) {
    if (haystack == (System_String_o *)0x0) {
label_1818b37e6:
      ThrowNullReferenceException();
    }
    index = 0;
    bVar1 = true;
    while (index < (haystack->fields)._stringLength) {
      c = System_String__get_Chars(haystack,index,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar2 = System_Char__IsLetterOrDigit(c,(MethodInfo *)0x0);
      if (bVar2) {
        if (bVar1) {
          if (needle == (System_String_o *)0x0) goto label_1818b37e6;
          length_00 = (needle->fields)._stringLength;
          if (index + length_00 <= (haystack->fields)._stringLength) {
            a = System_String__Substring_1972740(haystack,index,length_00,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(a,needle,(MethodInfo *)0x0);
            if (bVar1) {
              *start = index;
              *length = (needle->fields)._stringLength;
              return true;
            }
          }
        }
        bVar1 = false;
        index = index + 1;
      }
      else {
        bVar1 = true;
        index = index + 1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindInitials
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, const MethodInfo* method);
// 0x1818b35a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b3616: mov qword ptr [rsp + 0x50], r15
// asm:   0x1818b361b: nop dword ptr [rax + rax]

bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindInitials
               (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint16_t c;
  uint16_t uVar3;
  int index;
  int index_00;
  
  *start = -1;
  *length = 0;
  bVar1 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = System_String__IsNullOrEmpty(needle,(MethodInfo *)0x0), !bVar1)) {
    if (needle == (System_String_o *)0x0) {
label_1818b36d2:
      ThrowNullReferenceException();
    }
    if (1 < (needle->fields)._stringLength) {
      index_00 = 0;
      index = 0;
      bVar1 = true;
      if (haystack == (System_String_o *)0x0) goto label_1818b36d2;
      while (index < (haystack->fields)._stringLength) {
        c = System_String__get_Chars(haystack,index,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar2 = System_Char__IsLetterOrDigit(c,(MethodInfo *)0x0);
        if (bVar2) {
          if (((bVar1) && (index_00 < (needle->fields)._stringLength)) &&
             (uVar3 = System_String__get_Chars(needle,index_00,(MethodInfo *)0x0), c == uVar3)) {
            if (*start < 0) {
              *start = index;
            }
            index_00 = index_00 + 1;
            *length = (index - *start) + 1;
          }
          bVar1 = false;
          index = index + 1;
        }
        else {
          bVar1 = true;
          index = index + 1;
        }
      }
      if (index_00 == (needle->fields)._stringLength) {
        *length = (haystack->fields)._stringLength - *start;
        return true;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$FindCompact
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact (System_String_o* haystack, System_String_o* needle, int32_t* start, int32_t* length, System_Int32_array** indices, const MethodInfo* method);
// 0x1818b3400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b34b9: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Search_GisketchSearchService__FindCompact
               (System_String_o *haystack,System_String_o *needle,int32_t *start,int32_t *length,
               System_Int32_array **indices,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  System_Int32_array *value;
  longlong lVar5;
  uint index;
  int index_00;
  int iVar6;
  
  if (Il2CppMethodInitialized_184341f7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    Il2CppMethodInitialized_184341f7f = '\x01';
  }
  *start = -1;
  *length = 0;
  *indices = (System_Int32_array *)0x0;
  Il2CppCodeGenWriteBarrier(indices,(void *)0x0);
  bVar2 = System_String__IsNullOrEmpty(haystack,(MethodInfo *)0x0);
  if ((!bVar2) && (bVar2 = System_String__IsNullOrEmpty(needle,(MethodInfo *)0x0), !bVar2)) {
    if (needle == (System_String_o *)0x0) {
label_1818b358b:
      ThrowNullReferenceException();
    }
    if (2 < (needle->fields)._stringLength) {
      if (haystack == (System_String_o *)0x0) goto label_1818b358b;
      for (iVar6 = 0; iVar6 < (haystack->fields)._stringLength; iVar6 = iVar6 + 1) {
        index = 0;
        value = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,(needle->fields)._stringLength);
        for (index_00 = iVar6; index_00 < (haystack->fields)._stringLength; index_00 = index_00 + 1) {
          uVar1 = (needle->fields)._stringLength;
          if ((int)uVar1 <= (int)index) goto label_1818b352b;
          uVar3 = System_String__get_Chars(haystack,index_00,(MethodInfo *)0x0);
          uVar4 = System_String__get_Chars(needle,index,(MethodInfo *)0x0);
          if (uVar3 == uVar4) {
            if (value == (System_Int32_array *)0x0) goto label_1818b358b;
            if ((uint)value->max_length <= index) {
              ThrowIndexOutOfRangeException();
            }
            lVar5 = (longlong)(int)index;
            index = index + 1;
            value->m_Items[lVar5] = index_00;
          }
        }
        uVar1 = (needle->fields)._stringLength;
label_1818b352b:
        if ((index == uVar1) && (index_00 - iVar6 <= (needle->fields)._stringLength * 2)) {
          *start = iVar6;
          *length = index_00 - iVar6;
          *indices = value;
          Il2CppCodeGenWriteBarrier(indices,value);
          return true;
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$MatchesAt
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchService__MatchesAt (System_String_o* haystack, System_String_o* needle, int32_t start, const MethodInfo* method);
// 0x1818b4bf0

bool Gisketch_Aottg2UI_Search_GisketchSearchService__MatchesAt
               (System_String_o *haystack,System_String_o *needle,int32_t start,MethodInfo *method)

{
  int length;
  bool bVar1;
  System_String_o *a;
  
  if ((needle != (System_String_o *)0x0) && (haystack != (System_String_o *)0x0)) {
    length = (needle->fields)._stringLength;
    if ((haystack->fields)._stringLength < start + length) {
      return false;
    }
    a = System_String__Substring_1972740(haystack,start,length,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,needle,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchService$$Slice
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchService__Slice (System_String_o* value, int32_t start, int32_t length, const MethodInfo* method);
// 0x1818b51f0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchService__Slice
          (System_String_o *value,int32_t start,int32_t length,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((!bVar1) && (-1 < start)) {
    if (value == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (start + length <= (value->fields)._stringLength) {
      pSVar2 = System_String__Substring_1972740(value,start,length,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


