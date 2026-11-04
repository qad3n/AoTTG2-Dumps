// Type: Gisketch.Aottg2UI.Search.GisketchSearchResults
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchResults.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7___ctor (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7___ctor(Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_IDisposable_Dispose (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_IDisposable_Dispose(Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__MoveNext (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x1818be990

bool
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__MoveNext(Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, MethodInfo* method)

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.Generic.IEnumerator<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.get_Current
// il2cpp: Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x180573e90

Gisketch_Aottg2UI_Search_GisketchSearchEntry_o*
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_Generic_IEnumerator_Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Current(Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x1818bebd0

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x1818beb40

System_Collections_Generic_IEnumerator_GisketchSearchEntry__o*
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_Generic_IEnumerable_Gisketch_Aottg2UI_Search_GisketchSearchEntry__GetEnumerator(Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, MethodInfo* method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this_00;
  
  if (Il2CppMethodInitialized_184341f78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    Il2CppMethodInitialized_184341f78 = '\x01';
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
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o* __this, const MethodInfo* method);
// 0x1818beb40

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this_00;
  
  if (Il2CppMethodInitialized_184341f78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    Il2CppMethodInitialized_184341f78 = '\x01';
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
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$Merge
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* manifest, System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* live, System_String_o* activeScreenId, const MethodInfo* method);
// 0x1818b2580
// eh: try 0x1818b2860..0x1818b2fee -> pad 0x183318130 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 76 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b29bf: mov r8, qword ptr [rsp + 0x28]
// asm:   0x1818b29c4: cmp qword ptr [r8], 0
// asm:   0x1818b29c8: je 0x1818b29db
// asm:   0x1818b29ca: xor ecx, ecx
// asm:   0x1818b29cc: mov r8, qword ptr [r8]
// asm:   0x1818b29cf: mov rdx, qword ptr [rip + 0x27e692a]  ; TypeInfo_System_IDisposable
// asm:   0x1818b29d6: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1818b29db: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1818b29e0: test rcx, rcx
// asm:   0x1818b29e3: jne 0x1818b2fb8
// asm:   0x1818b29e9: xor r12d, r12d
// asm:   0x1818b29ec: mov rsi, qword ptr [rsp + 0xe0]
// asm:   0x1818b29f4: mov rax, qword ptr [rsp + 0x50]
// asm:   0x1818b29f9: mov qword ptr [rsp + 0x38], rax
// asm:   0x1818b29fe: mov r14, qword ptr [rsp + 0x70]
// asm:   0x1818b2a03: mov r15, qword ptr [rsp + 0x78]
// asm:   0x1818b2a08: mov r13, qword ptr [rsp + 0x48]
// asm:   0x1818b2a99: nop dword ptr [rax]
// asm:   0x1818b2d68: mov rdi, qword ptr [rsp + 0xf0]
// asm:   0x1818b2e62: mov r8, qword ptr [rsp + 0x28]
// asm:   0x1818b2e67: cmp qword ptr [r8], 0
// asm:   0x1818b2e6b: je 0x1818b2e7e
// asm:   0x1818b2e6d: xor ecx, ecx
// asm:   0x1818b2e6f: mov r8, qword ptr [r8]
// asm:   0x1818b2e72: mov rdx, qword ptr [rip + 0x27e6487]  ; TypeInfo_System_IDisposable
// asm:   0x1818b2e79: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1818b2e7e: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1818b2e83: test rcx, rcx
// asm:   0x1818b2e86: jne 0x1818b2fd8
// asm:   0x1818b2e8c: xor r12d, r12d
// asm:   0x1818b2e8f: mov r15, qword ptr [rsp + 0xe0]
// asm:   0x1818b2e97: mov r13, qword ptr [rsp + 0x48]
// asm:   0x1818b2e9c: mov rax, qword ptr [rsp + 0x50]
// asm:   0x1818b2f63: mov rdx, qword ptr [rip + 0x27cdabe]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose
// asm:   0x1818b2f6a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818b2f6f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818b2f74: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1818b2f79: test rcx, rcx
// asm:   0x1818b2f7c: jne 0x1818b2fee
// asm:   0x1818b2f7e: mov r15, qword ptr [rsp + 0xe0]
// asm:   0x1818b2fb8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1818b2fd8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1818b2fee: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318130: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318135: push rbp
// asm:   0x183318136: sub rsp, 0x20
// asm:   0x18331813a: mov rbp, rdx
// asm:   0x18331813d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318144: mov rcx, qword ptr [rax]
// asm:   0x183318147: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18331814b: movabs rax, 0
// asm:   0x183318155: add rsp, 0x20
// asm:   0x183318159: pop rbp
// asm:   0x18331815a: ret 
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Merge
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *manifest,
          System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *live,System_String_o *activeScreenId,
          MethodInfo *method)

{
  ushort uVar1;
  System_OrdinalIgnoreCaseComparer_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_Collections_Generic_HashSet_string__o *pSVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry;
  Il2CppObject *pIVar10;
  ushort uVar11;
  System_String_o *b;
  Il2CppObject *local_res10;
  System_String_o *local_res18;
  undefined1 local_b8 [16];
  Il2CppObject *local_a8;
  System_Collections_Generic_List_GisketchSearchEntry__o *local_a0;
  System_Collections_Generic_HashSet_string__o *local_98;
  System_Collections_Generic_HashSet_string__o *local_90;
  System_Collections_Generic_List_GisketchSearchEntry__o *local_88;
  undefined1 local_80 [8];
  uint64_t uStack_78;
  Il2CppObject *local_70;
  System_Collections_Generic_HashSet_string__o *local_68;
  System_Collections_Generic_List_GisketchSearchEntry__o *local_60;
  ulonglong uVar12;
  
  local_res18 = activeScreenId;
  if (Il2CppMethodInitialized_184341f72 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
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
    Il2CppMethodInitialized_184341f72 = '\x01';
  }
  local_res10 = (Il2CppObject *)0x0;
  local_80 = (undefined1  [8])0x0;
  uStack_78 = 0;
  local_70 = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  local_60 = __this;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
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
  pSVar2 = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  local_90 = __this_00;
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)pSVar2,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles(manifest,(MethodInfo *)0x0);
  local_a0 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)local_a0,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar2 = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  local_98 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)local_98,
             (System_Collections_Generic_IEqualityComparer_T__o *)pSVar2,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  if (live == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (Il2CppMethodInitialized_184341f77 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
      Il2CppMethodInitialized_184341f77 = '\x01';
    }
    live = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)live,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)live)->fields).__1__state = -2;
    iVar6 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)live)->fields).__l__initialThreadId =
         iVar6;
    if ((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)live ==
        (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)0x0) goto label_1818b2f9c;
  }
  local_88 = local_a0;
  local_68 = local_98;
  local_res10 = InterfaceInvoker0_Invoke
                          (0,(Il2CppClass *)
                             TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry,
                           (Il2CppObject *)live);
  local_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_b8._8_8_ = &local_res10;
  while( true ) {
    if (local_res10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res10);
    pIVar10 = local_res10;
    if ((char)pvVar8 == '\0') break;
    if (local_res10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_res10->klass;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar12 = 0;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      do {
        if (pIVar4[uVar12].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry) {
          pVVar9 = pIVar3->vtable + pIVar4[uVar12].offset;
          goto label_1818b28e6;
        }
        uVar11 = (short)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < uVar1);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res10,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry,0);
label_1818b28e6:
    entry = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pVVar9->methodPtr)(pIVar10,pVVar9->method);
    if (((entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
        (bVar5 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(entry,(MethodInfo *)0x0), bVar5)
        ) && (bVar5 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                (entry,local_res18,pSVar7,(MethodInfo *)0x0), !bVar5)) {
      if (local_a0 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180012890(local_a0,entry,MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
      bVar5 = System_String__IsNullOrEmpty((entry->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if (!bVar5) {
        if (local_98 == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)local_98,
                   (Il2CppObject *)(entry->fields)._TargetId_k__BackingField,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
    }
  }
  if (local_res10 != (Il2CppObject *)0x0) {
    InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res10);
  }
  pSVar7 = local_98;
  if (manifest == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (Il2CppMethodInitialized_184341f77 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
      Il2CppMethodInitialized_184341f77 = '\x01';
    }
    manifest = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)manifest,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)manifest)->fields).__1__state = -2;
    iVar6 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)manifest)->fields).__l__initialThreadId
         = iVar6;
    if ((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)manifest ==
        (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)0x0) {
label_1818b2f9c:
      ThrowNullReferenceException();
    }
  }
  local_90 = __this_00;
  local_res10 = InterfaceInvoker0_Invoke
                          (0,(Il2CppClass *)
                             TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry,
                           (Il2CppObject *)manifest);
  local_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_b8._8_8_ = &local_res10;
  do {
    pIVar10 = local_res10;
    if (local_res10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_res10->klass;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar12 = 0;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      do {
        if (pIVar4[uVar12].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar9 = pIVar3->vtable + pIVar4[uVar12].offset;
          goto label_1818b2b06;
        }
        uVar11 = (short)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < uVar1);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1818b2b06:
    bVar5 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
    pIVar10 = local_res10;
    if (!bVar5) {
      if (local_res10 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res10);
      }
      if (local_a0 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_1818b2f9c;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
                 (System_Collections_Generic_List_T__o *)local_a0,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_GetEnumerator);
      local_80 = (undefined1  [8])local_b8._0_8_;
      uStack_78 = local_b8._8_8_;
      local_70 = local_a8;
      local_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80;
      break;
    }
    if (local_res10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_res10->klass;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar12 = 0;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      do {
        if (pIVar4[uVar12].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry) {
          pVVar9 = pIVar3->vtable + pIVar4[uVar12].offset;
          goto label_1818b2b76;
        }
        uVar11 = (short)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < uVar1);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res10,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry,0);
label_1818b2b76:
    pIVar10 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
    b = local_res18;
    if ((((pIVar10 == (Il2CppObject *)0x0) ||
         (bVar5 = System_String__IsNullOrEmpty((System_String_o *)pIVar10[2].klass,(MethodInfo *)0x0),
         b = local_res18, bVar5)) ||
        (bVar5 = System_String__IsNullOrEmpty(local_res18,(MethodInfo *)0x0), bVar5)) ||
       (bVar5 = System_String__Equals_196c550((System_String_o *)pIVar10[2].klass,b,5,(MethodInfo *)0x0),
       !bVar5)) goto label_1818b2d70;
    pIVar3 = pIVar10[7].klass;
    if (Il2CppMethodInitialized_184341f75 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"select");
      il2cpp_codegen_initialize_runtime_metadata(&"input");
      il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
      il2cpp_codegen_initialize_runtime_metadata(&"Select");
      il2cpp_codegen_initialize_runtime_metadata(&"InputField");
      il2cpp_codegen_initialize_runtime_metadata(&"Button");
      il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
      il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
      Il2CppMethodInitialized_184341f75 = '\x01';
    }
    bVar5 = System_String__Equals_196c550((System_String_o *)pIVar3,"Button",5,(MethodInfo *)0x0)
    ;
    if ((((((!bVar5) &&
           (bVar5 = System_String__Equals_196c550
                              ((System_String_o *)pIVar3,"SpriteButton",5,(MethodInfo *)0x0), !bVar5))
          && ((bVar5 = System_String__Equals_196c550
                                 ((System_String_o *)pIVar3,"InputField",5,(MethodInfo *)0x0), !bVar5
              && ((bVar5 = System_String__Equals_196c550
                                     ((System_String_o *)pIVar3,"TextArea",5,(MethodInfo *)0x0),
                  !bVar5 && (bVar5 = System_String__Equals_196c550
                                               ((System_String_o *)pIVar3,"Dropdown",5,
                                                (MethodInfo *)0x0), !bVar5)))))) &&
         (bVar5 = System_String__Equals_196c550
                            ((System_String_o *)pIVar3,"Select",5,(MethodInfo *)0x0), !bVar5)) &&
        ((bVar5 = System_String__Equals_196c550
                            ((System_String_o *)pIVar3,"input",5,(MethodInfo *)0x0), !bVar5 &&
         (bVar5 = System_String__Equals_196c550
                            ((System_String_o *)pIVar3,"select",5,(MethodInfo *)0x0),
         b = local_res18, !bVar5)))) ||
       (bVar5 = System_String__IsNullOrEmpty(pIVar10[4].monitor,(MethodInfo *)0x0), b = local_res18, bVar5))
    goto label_1818b2d70;
    if (pSVar7 == (System_Collections_Generic_HashSet_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar5 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)pSVar7,pIVar10[4].monitor,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    b = local_res18;
    if (bVar5) {
label_1818b2d70:
      if (__this == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180012890(__this);
      if ((((pIVar10 != (Il2CppObject *)0x0) &&
           (bVar5 = System_String__IsNullOrEmpty((System_String_o *)pIVar10[2].klass,(MethodInfo *)0x0),
           !bVar5)) && (bVar5 = System_String__IsNullOrEmpty(b,(MethodInfo *)0x0), !bVar5)) &&
         ((bVar5 = System_String__Equals_196c550((System_String_o *)pIVar10[2].klass,b,5,(MethodInfo *)0x0),
          bVar5 && (bVar5 = System_String__IsNullOrEmpty(pIVar10[4].monitor,(MethodInfo *)0x0), !bVar5)))) {
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this_00,pIVar10[4].monitor,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
    }
  } while( true );
label_1818b2ee3:
  bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_80,
                     (MethodInfo_153A2A0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_MoveNext);
  pIVar10 = local_70;
  if (!bVar5) {
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
               MethodInfo_System_Collections_Generic_List_Enumerator_GisketchSearchEntry_Dispose);
    return __this;
  }
  if (local_70 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  bVar5 = System_String__IsNullOrEmpty(local_70[4].monitor,(MethodInfo *)0x0);
  if (!bVar5) goto code_r0x0001818b2f15;
  goto label_1818b2f35;
code_r0x0001818b2f15:
  if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar5 = System_Collections_Generic_HashSet_object___Contains
                    ((System_Collections_Generic_HashSet_object__o *)__this_00,pIVar10[4].monitor,
                     (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  if (!bVar5) {
label_1818b2f35:
    if (__this == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      ThrowNullReferenceException();
    }
    il2cpp_runtime_helper_180012890(__this,pIVar10,MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
  }
  goto label_1818b2ee3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$ScreenTitles
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* entries, const MethodInfo* method);
// 0x1818b3000
// eh: try 0x1818b3192..0x1818b330b -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b32b6: mov r8, qword ptr [rsp + 0x30]
// asm:   0x1818b32bb: cmp qword ptr [r8], 0
// asm:   0x1818b32bf: je 0x1818b32d2
// asm:   0x1818b32c1: xor ecx, ecx
// asm:   0x1818b32c3: mov r8, qword ptr [r8]
// asm:   0x1818b32c6: mov rdx, qword ptr [rip + 0x27e6033]  ; TypeInfo_System_IDisposable
// asm:   0x1818b32cd: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1818b32d2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818b32d7: test rcx, rcx
// asm:   0x1818b32da: jne 0x1818b330b
// asm:   0x1818b32dc: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x1818b330b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
          (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *entries,MethodInfo *method)

{
  ushort uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_HashSet_string__o *__this;
  Il2CppObject *obj;
  void *pvVar6;
  VirtualInvokeData *pVVar7;
  Il2CppObject *pIVar8;
  ushort uVar9;
  
  if (Il2CppMethodInitialized_184341f73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    Il2CppMethodInitialized_184341f73 = '\x01';
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
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  if (entries == (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)0x0) {
    if (Il2CppMethodInitialized_184341f77 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
      Il2CppMethodInitialized_184341f77 = '\x01';
    }
    entries = (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)entries,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)entries)->fields).__1__state = -2;
    iVar5 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)entries)->fields).__l__initialThreadId =
         iVar5;
    if ((Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)entries ==
        (Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  obj = InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_GisketchSearchEntry,
                   (Il2CppObject *)entries);
  do {
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar6 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,obj);
    if ((char)pvVar6 == '\0') {
      if (obj != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
      }
      return __this;
    }
    if (obj == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar9 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar9].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry) {
          pVVar7 = pIVar2->vtable + pIVar3[uVar9].offset;
          goto label_1818b3216;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar1);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_GisketchSearchEntry
                        ,0);
label_1818b3216:
    pIVar8 = (*pVVar7->methodPtr)(obj,pVVar7->method);
    if (pIVar8 != (Il2CppObject *)0x0) {
      bVar4 = System_String__Equals_196c550
                        ((System_String_o *)pIVar8[7].klass,"screen",5,(MethodInfo *)0x0);
      if (bVar4) {
        bVar4 = System_String__IsNullOrEmpty(pIVar8[5].monitor,(MethodInfo *)0x0);
        if (!bVar4) {
          if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this,pIVar8[5].monitor,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        }
      }
    }
  } while( true );
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsDuplicateMainMenuScreenButton
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, System_Collections_Generic_HashSet_string__o* screenTitles, const MethodInfo* method);
// 0x1818b21b0

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
               System_Collections_Generic_HashSet_string__o *screenTitles,MethodInfo *method)

{
  System_String_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-option-");
    Il2CppMethodInitialized_184341f74 = '\x01';
  }
  bVar1 = System_String__Equals_196c550(activeScreenId,"main-menu",5,(MethodInfo *)0x0);
  if ((bVar1) && (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) {
    bVar1 = System_String__IsNullOrEmpty((entry->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      __this = (entry->fields)._TargetId_k__BackingField;
      if (__this == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_String__StartsWith_19722c0(__this,"main-menu-option-",5,(MethodInfo *)0x0);
      if ((bVar1) && (screenTitles != (System_Collections_Generic_HashSet_string__o *)0x0)) {
        bVar1 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)screenTitles,
                           (Il2CppObject *)(entry->fields)._Title_k__BackingField,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        return bVar1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsActive
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActive (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, const MethodInfo* method);
// 0x1818b2150

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
        bVar1 = System_String__Equals_196c550
                          ((entry->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsActiveInteractiveControl
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveInteractiveControl (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, System_String_o* activeScreenId, const MethodInfo* method);
// 0x1818b1f70

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveInteractiveControl
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,System_String_o *activeScreenId,
               MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((entry->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__Equals_196c550
                          ((entry->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
        if (bVar1) {
          a = (entry->fields)._Kind_k__BackingField;
          if (Il2CppMethodInitialized_184341f75 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"select");
            il2cpp_codegen_initialize_runtime_metadata(&"input");
            il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
            il2cpp_codegen_initialize_runtime_metadata(&"Select");
            il2cpp_codegen_initialize_runtime_metadata(&"InputField");
            il2cpp_codegen_initialize_runtime_metadata(&"Button");
            il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
            il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
            Il2CppMethodInitialized_184341f75 = '\x01';
          }
          bVar1 = System_String__Equals_196c550(a,"Button",5,(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__Equals_196c550(a,"SpriteButton",5,(MethodInfo *)0x0);
            if (!bVar1) {
              bVar1 = System_String__Equals_196c550(a,"InputField",5,(MethodInfo *)0x0);
              if (!bVar1) {
                bVar1 = System_String__Equals_196c550(a,"TextArea",5,(MethodInfo *)0x0);
                if (!bVar1) {
                  bVar1 = System_String__Equals_196c550(a,"Dropdown",5,(MethodInfo *)0x0);
                  if (!bVar1) {
                    bVar1 = System_String__Equals_196c550(a,"Select",5,(MethodInfo *)0x0);
                    if (!bVar1) {
                      bVar1 = System_String__Equals_196c550(a,"input",5,(MethodInfo *)0x0);
                      if (!bVar1) {
                        bVar1 = System_String__Equals_196c550(a,"select",5,(MethodInfo *)0x0);
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
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsInteractiveControlKind
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsInteractiveControlKind (System_String_o* kind, const MethodInfo* method);
// 0x1818b2290

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsInteractiveControlKind
               (System_String_o *kind,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"select");
    il2cpp_codegen_initialize_runtime_metadata(&"input");
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_184341f75 = '\x01';
  }
  bVar1 = System_String__Equals_196c550(kind,"Button",5,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__Equals_196c550(kind,"SpriteButton",5,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_196c550(kind,"InputField",5,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__Equals_196c550(kind,"TextArea",5,(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__Equals_196c550(kind,"Dropdown",5,(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__Equals_196c550(kind,"Select",5,(MethodInfo *)0x0);
            if (!bVar1) {
              bVar1 = System_String__Equals_196c550(kind,"input",5,(MethodInfo *)0x0);
              if (!bVar1) {
                bVar1 = System_String__Equals_196c550(kind,"select",5,(MethodInfo *)0x0);
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
// 0x1818b2400

bool Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_UI_Selectable_o *x_00;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *x_01;
  
  if (Il2CppMethodInitialized_184341f76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f76 = '\x01';
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
                       (pUVar1,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Selectable)
      ;
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
            if (x_00 == (UnityEngine_UI_Selectable_o *)0x0) goto label_1818b2576;
            bVar2 = (*(x_00->klass->vtable)._9_IsActive.methodPtr)
                              (x_00,(x_00->klass->vtable)._9_IsActive.method);
            if (bVar2) {
              bVar2 = (*(x_00->klass->vtable)._24_IsInteractable.methodPtr)
                                (x_00,(x_00->klass->vtable)._24_IsInteractable.method);
              if ((bVar2) && ((x_00->fields).m_Navigation.fields.m_Mode != 0)) {
                pUVar1 = (entry->fields)._Target_k__BackingField;
                if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  x_01 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar1,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar2 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  return bVar2;
                }
                goto label_1818b2576;
              }
            }
          }
        }
        return false;
      }
    }
  }
label_1818b2576:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Search.GisketchSearchResults$$Empty
// il2cpp: System_Collections_Generic_IEnumerable_GisketchSearchEntry__o* Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty (const MethodInfo* method);
// 0x1818b1f10

System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty(MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchResults__Empty_d__7_o *__this;
  
  if (Il2CppMethodInitialized_184341f77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
    Il2CppMethodInitialized_184341f77 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return (System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this;
}


