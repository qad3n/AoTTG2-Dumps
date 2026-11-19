// Type: CustomLogic.CustomLogicEvaluator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicEvaluator.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicEvaluator.cs
// --------------------------------

// CustomLogic.CustomLogicEvaluator.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c___cctor (const MethodInfo* method);
// 0x5b8d6d0

void CustomLogic_CustomLogicEvaluator___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075473e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_c);
    Il2CppMethodInitialized_075473e3 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields->__9 =
       (CustomLogic_CustomLogicEvaluator___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c___ctor (CustomLogic_CustomLogicEvaluator___c_o* __this, const MethodInfo* method);
// 0x5b8d740

void CustomLogic_CustomLogicEvaluator___c___ctor
               (CustomLogic_CustomLogicEvaluator___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c$$<CreateAddonNetworkChannels>b__20_0
// il2cpp: System_String_o* CustomLogic_CustomLogicEvaluator___c___CreateAddonNetworkChannels_b__20_0 (CustomLogic_CustomLogicEvaluator___c_o* __this, System_String_o* x, const MethodInfo* method);
// 0x5b8d750

System_String_o *
CustomLogic_CustomLogicEvaluator___c___CreateAddonNetworkChannels_b__20_0
          (CustomLogic_CustomLogicEvaluator___c_o *__this,System_String_o *x,MethodInfo *method)

{
  return x;
}


// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass40_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0___ctor (CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x5b8d760

void CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0___ctor
               (CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass40_0$$<CreateInspectorSetting>b__0
// il2cpp: bool CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0___CreateInspectorSetting_b__0 (CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o* __this, CustomLogic_CustomLogicAssignmentExpressionAst_o* item, const MethodInfo* method);
// 0x5b8d770

bool CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0___CreateInspectorSetting_b__0
               (CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o *__this,
               CustomLogic_CustomLogicAssignmentExpressionAst_o *item,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075473e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    Il2CppMethodInitialized_075473e4 = '\x01';
  }
  if (item == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = (item->fields).Left;
  if (pCVar2 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
      bVar3 = System_String__op_Equality
                        ((System_String_o *)(*(uint64_t *)((char *)pCVar2 + 0x18)),(__this->fields).variableName,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return false;
}


// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass41_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0___ctor (CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o* __this, const MethodInfo* method);
// 0x5b8d800

void CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0___ctor
               (CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass41_0$$<ApplyComponentInspectorRules>b__0
// il2cpp: bool CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0___ApplyComponentInspectorRules_b__0 (CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o* __this, CustomLogic_CustomLogicAssignmentExpressionAst_o* item, const MethodInfo* method);
// 0x5b8d810

bool CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0___ApplyComponentInspectorRules_b__0
               (CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o *__this,
               CustomLogic_CustomLogicAssignmentExpressionAst_o *item,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075473e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    Il2CppMethodInitialized_075473e5 = '\x01';
  }
  if (item == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = (item->fields).Left;
  if (pCVar2 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
      bVar3 = System_String__op_Equality
                        ((System_String_o *)(*(uint64_t *)((char *)pCVar2 + 0x18)),(__this->fields).variableName,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return false;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87___ctor (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5b8d8a0

void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87___ctor
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_IDisposable_Dispose (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x5b8d8c0
// eh: try 0x5b8d916..0x5b8d949 -> pad 0x5b8d99e catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b8d9b6..0x5b8d9bb -> pad 0x5b8d9bd cleanup
// eh: try 0x5b8d9c0..0x5b8d9ca -> pad 0x5b8d9d2 catch (...) [compiler noexcept guard]
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8d996: mov rdi, r14
// asm:   0x5b8d999: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8d99e: mov rbx, rax
// asm:   0x5b8d9a1: cmp edx, 1
// asm:   0x5b8d9a4: jne 0x5b8d9c0
// asm:   0x5b8d9a6: mov rdi, rbx
// asm:   0x5b8d9a9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8d9ae: mov r14, qword ptr [rax]
// asm:   0x5b8d9b1: mov qword ptr [rsp + 8], r14
// asm:   0x5b8d9b6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8d9bb: jmp 0x5b8d94c
// asm:   0x5b8d9bd: mov rbx, rax
// asm:   0x5b8d9c0: lea rdi, [rsp + 8]
// asm:   0x5b8d9c5: call 0x2fd7f80  ; il2cpp_runtime_helper_02fd7f80()
// asm:   0x5b8d9ca: mov rdi, rbx
// asm:   0x5b8d9cd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b8d9d2: mov rdi, rax
// asm:   0x5b8d9d5: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_IDisposable_Dispose
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  uint uVar1;
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *pCVar2;
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o **ppCVar3;
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *local_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_28;
  uVar1 = (__this->fields).__1__state;
  if (((uVar1 & 0xfffffffe) == 0xfffffffc) || (uVar1 - 1 < 0x13)) {
    local_20 = 0;
    local_28 = __this;
    ppCVar3 = &local_28;
    if ((uVar1 + 4 < 0x18) && (ppCVar3 = &local_28, (0xe00001U >> (uVar1 + 4 & 0x1f) & 1) != 0)) {
      ppCVar3 = &local_28;
      if (Il2CppMethodInitialized_075473e8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
        Il2CppMethodInitialized_075473e8 = '\x01';
        ppCVar3 = (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o **)local_18;
      }
      local_18 = (undefined1 *)ppCVar3;
      (__this->fields).__1__state = -3;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&(__this->fields).__7__wrap8,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
      ppCVar3 = (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o **)local_18;
    }
    local_18 = (undefined1 *)ppCVar3;
    pCVar2 = local_28;
    if (Il2CppMethodInitialized_075473e7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
      Il2CppMethodInitialized_075473e7 = '\x01';
    }
    (pCVar2->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&(pCVar2->fields).__7__wrap2,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__MoveNext (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x5b8d9e0
// eh: try 0x5b8db8a..0x5b8f1a5 -> pad 0x5b8e325 (+131 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b8f293..0x5b8f298 -> pad 0x5b8f2b3 cleanup
// eh: try 0x5b8f2b6..0x5b8f2c0 -> pad 0x5b8f2c8 catch (...) [compiler noexcept guard]
// asm: 123 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8e2c1: jmp 0x5b8f27b
// asm:   0x5b8e2c6: jmp 0x5b8f27b
// asm:   0x5b8e2cb: jmp 0x5b8f27b
// asm:   0x5b8e2d0: jmp 0x5b8f27b
// asm:   0x5b8e2d5: jmp 0x5b8f27b
// asm:   0x5b8e2da: jmp 0x5b8f27b
// asm:   0x5b8e2df: jmp 0x5b8f27b
// asm:   0x5b8e2e4: jmp 0x5b8f27b
// asm:   0x5b8e2e9: jmp 0x5b8f27b
// asm:   0x5b8e2ee: jmp 0x5b8f27b
// asm:   0x5b8e2f3: jmp 0x5b8f27b
// asm:   0x5b8e2f8: jmp 0x5b8f27b
// asm:   0x5b8e2fd: jmp 0x5b8f27b
// asm:   0x5b8e302: jmp 0x5b8f27b
// asm:   0x5b8e307: jmp 0x5b8f27b
// asm:   0x5b8e30c: jmp 0x5b8f27b
// asm:   0x5b8e311: jmp 0x5b8f27b
// asm:   0x5b8e316: jmp 0x5b8f27b
// asm:   0x5b8e31b: jmp 0x5b8f27b
// asm:   0x5b8e320: jmp 0x5b8f27b
// asm:   0x5b8e325: jmp 0x5b8f27b
// asm:   0x5b8f1a5: jmp 0x5b8f27b
// asm:   0x5b8f1aa: jmp 0x5b8f27b
// asm:   0x5b8f1af: jmp 0x5b8f27b
// asm:   0x5b8f1b4: jmp 0x5b8f27b
// asm:   0x5b8f1b9: jmp 0x5b8f27b
// asm:   0x5b8f1be: jmp 0x5b8f27b
// asm:   0x5b8f1c3: jmp 0x5b8f27b
// asm:   0x5b8f1c8: jmp 0x5b8f27b
// asm:   0x5b8f1cd: jmp 0x5b8f27b
// asm:   0x5b8f1d2: jmp 0x5b8f27b
// asm:   0x5b8f1d7: jmp 0x5b8f27b
// asm:   0x5b8f1dc: jmp 0x5b8f27b
// asm:   0x5b8f1e1: jmp 0x5b8f27b
// asm:   0x5b8f1e6: jmp 0x5b8f27b
// asm:   0x5b8f1eb: jmp 0x5b8f27b
// asm:   0x5b8f1f0: jmp 0x5b8f27b
// asm:   0x5b8f1f5: jmp 0x5b8f27b
// asm:   0x5b8f1fa: jmp 0x5b8f27b
// asm:   0x5b8f1fc: jmp 0x5b8f27b
// asm:   0x5b8f1fe: jmp 0x5b8f27b
// asm:   0x5b8f200: jmp 0x5b8f27b
// asm:   0x5b8f202: jmp 0x5b8f27b
// asm:   0x5b8f204: jmp 0x5b8f27b
// asm:   0x5b8f206: jmp 0x5b8f27b
// asm:   0x5b8f208: jmp 0x5b8f27b
// asm:   0x5b8f20a: jmp 0x5b8f27b
// asm:   0x5b8f20c: jmp 0x5b8f27b
// asm:   0x5b8f20e: jmp 0x5b8f27b
// asm:   0x5b8f210: jmp 0x5b8f27b
// asm:   0x5b8f212: jmp 0x5b8f27b
// asm:   0x5b8f214: jmp 0x5b8f27b
// asm:   0x5b8f216: jmp 0x5b8f27b
// asm:   0x5b8f218: jmp 0x5b8f27b
// asm:   0x5b8f21a: jmp 0x5b8f27b
// asm:   0x5b8f21c: jmp 0x5b8f27b
// asm:   0x5b8f21e: jmp 0x5b8f27b
// asm:   0x5b8f220: jmp 0x5b8f27b
// asm:   0x5b8f222: jmp 0x5b8f27b
// asm:   0x5b8f224: jmp 0x5b8f27b
// asm:   0x5b8f226: jmp 0x5b8f27b
// asm:   0x5b8f228: jmp 0x5b8f27b
// asm:   0x5b8f22a: jmp 0x5b8f27b
// asm:   0x5b8f22c: jmp 0x5b8f27b
// asm:   0x5b8f22e: jmp 0x5b8f27b
// asm:   0x5b8f230: jmp 0x5b8f27b
// asm:   0x5b8f232: jmp 0x5b8f27b
// asm:   0x5b8f234: jmp 0x5b8f27b
// asm:   0x5b8f236: jmp 0x5b8f27b
// asm:   0x5b8f238: jmp 0x5b8f27b
// asm:   0x5b8f23a: jmp 0x5b8f27b
// asm:   0x5b8f23c: jmp 0x5b8f27b
// asm:   0x5b8f23e: jmp 0x5b8f27b
// asm:   0x5b8f240: jmp 0x5b8f27b
// asm:   0x5b8f242: jmp 0x5b8f27b
// asm:   0x5b8f244: jmp 0x5b8f27b
// asm:   0x5b8f246: jmp 0x5b8f27b
// asm:   0x5b8f248: jmp 0x5b8f27b
// asm:   0x5b8f24a: jmp 0x5b8f27b
// asm:   0x5b8f24c: jmp 0x5b8f27b
// asm:   0x5b8f24e: jmp 0x5b8f27b
// asm:   0x5b8f250: jmp 0x5b8f27b
// asm:   0x5b8f252: jmp 0x5b8f27b
// asm:   0x5b8f254: jmp 0x5b8f27b
// asm:   0x5b8f256: jmp 0x5b8f27b
// asm:   0x5b8f258: jmp 0x5b8f27b
// asm:   0x5b8f25a: jmp 0x5b8f27b
// asm:   0x5b8f25c: jmp 0x5b8f27b
// asm:   0x5b8f25e: jmp 0x5b8f27b
// asm:   0x5b8f260: jmp 0x5b8f27b
// asm:   0x5b8f262: jmp 0x5b8f27b
// asm:   0x5b8f264: jmp 0x5b8f27b
// asm:   0x5b8f266: jmp 0x5b8f27b
// asm:   0x5b8f268: jmp 0x5b8f27b
// asm:   0x5b8f26a: jmp 0x5b8f27b
// asm:   0x5b8f26c: jmp 0x5b8f27b
// asm:   0x5b8f26e: jmp 0x5b8f27b
// asm:   0x5b8f270: jmp 0x5b8f27b
// asm:   0x5b8f272: jmp 0x5b8f27b
// asm:   0x5b8f274: mov rbx, rax
// asm:   0x5b8f277: jmp 0x5b8f27e
// asm:   0x5b8f279: jmp 0x5b8f27b
// asm:   0x5b8f27b: mov rbx, rax
// asm:   0x5b8f27e: cmp edx, 1
// asm:   0x5b8f281: jne 0x5b8f2b6
// asm:   0x5b8f283: mov rdi, rbx
// asm:   0x5b8f286: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8f28b: mov rbx, qword ptr [rax]
// asm:   0x5b8f28e: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5b8f293: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8f298: test rbx, rbx
// asm:   0x5b8f29b: je 0x5b8e8ec
// asm:   0x5b8f2a1: mov rdi, qword ptr [rsp + 8]
// asm:   0x5b8f2a6: call 0x2fd8620  ; il2cpp_runtime_helper_02fd8620()
// asm:   0x5b8f2ab: mov rdi, rbx
// asm:   0x5b8f2ae: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8f2b3: mov rbx, rax
// asm:   0x5b8f2b6: lea rdi, [rsp + 0x30]
// asm:   0x5b8f2bb: call 0x2fd7fe0  ; il2cpp_runtime_helper_02fd7fe0()
// asm:   0x5b8f2c0: mov rdi, rbx
// asm:   0x5b8f2c3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b8f2c8: mov rdi, rax
// asm:   0x5b8f2cb: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__MoveNext
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicBaseAst_o **targetAddress;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_01;
  Il2CppClass *pIVar6;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment;
  CustomLogic_CustomLogicAssignmentExpressionAst_c *pCVar7;
  CustomLogic_CustomLogicConditionalBlockAst_o *pCVar8;
  CustomLogic_CustomLogicToken_o *pCVar9;
  CustomLogic_CustomLogicForBlockAst_o *pCVar10;
  CustomLogic_CustomLogicBaseAst_o *pCVar11;
  CustomLogic_CustomLogicBaseAst_c *pCVar12;
  CustomLogic_CustomLogicVariableExpressionAst_o *pCVar13;
  System_String_o *key;
  CustomLogic_CustomLogicStartAst_o *pCVar14;
  CustomLogic_CustomLogicClassInstance_o *pCVar15;
  System_Collections_Generic_Dictionary_object__object__o *pSVar16;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar17;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar18;
  CustomLogic_CustomLogicManager_o *pCVar19;
  CustomLogic_CustomLogicConditionalBlockAst_c *pCVar20;
  CustomLogic_CustomLogicForBlockAst_c *pCVar21;
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *pCVar22;
  bool bVar23;
  UnityEngine_WaitForSeconds_o *pUVar24;
  int *piVar25;
  char *pcVar26;
  Il2CppObject *pIVar27;
  Il2CppObject *key_00;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar28;
  System_Collections_IEnumerator_o *pSVar29;
  Utility_CoroutineWithData_o *pUVar30;
  int32_t iVar31;
  int32_t iVar32;
  Utility_CoroutineWithData_o **ppUVar33;
  float fVar34;
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *local_70;
  float local_64;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  undefined8 local_48;
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o **local_40;
  System_Collections_Generic_List_T__o *local_38;
  int32_t iStack_30;
  int32_t iStack_2c;
  CustomLogic_CustomLogicBaseAst_o *local_28;
  
  local_70 = __this;
  if (Il2CppMethodInitialized_075473e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Coroutine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBaseExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBreakExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConditionalBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicContinueExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicReturnExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWaitExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_075473e6 = '\x01';
  }
  local_48 = 0;
  local_40 = &local_70;
  uVar3 = (__this->fields).__1__state;
  if (0x13 < uVar3) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar3) {
  case 0:
    (__this->fields).__1__state = -1;
    (__this->fields)._conditionalState_5__2 = 0;
    __this_01 = (__this->fields).statements;
    if (__this_01 == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_60,(System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_GetEnumerator);
    local_28 = (CustomLogic_CustomLogicBaseAst_o *)local_60.fields._current;
    local_38 = local_60.fields._list;
    iStack_30 = local_60.fields._index;
    iStack_2c = local_60.fields._version;
    (local_70->fields).__7__wrap2.fields._current =
         (CustomLogic_CustomLogicBaseAst_o *)local_60.fields._current;
    (local_70->fields).__7__wrap2.fields._list = local_60.fields._list;
    (local_70->fields).__7__wrap2.fields._index = local_60.fields._index;
    (local_70->fields).__7__wrap2.fields._version = local_60.fields._version;
    Il2CppCodeGenWriteBarrier((void **)&(local_70->fields).__7__wrap2);
    (local_70->fields).__1__state = -3;
    do {
      bVar23 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         ((System_Collections_Generic_List_Enumerator_object__o *)
                          &(local_70->fields).__7__wrap2,
                          (MethodInfo_4C45C50 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_MoveNext);
      pCVar22 = local_70;
      if (!bVar23) {
        if (Il2CppMethodInitialized_075473e7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
          Il2CppMethodInitialized_075473e7 = '\x01';
        }
        (pCVar22->fields).__1__state = -1;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&(pCVar22->fields).__7__wrap2,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
        (local_70->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
        (local_70->fields).__7__wrap2.fields._index = 0;
        (local_70->fields).__7__wrap2.fields._version = 0;
        (local_70->fields).__7__wrap2.fields._current = (CustomLogic_CustomLogicBaseAst_o *)0x0;
        return false;
      }
      (local_70->fields)._statement_5__4 = (local_70->fields).__7__wrap2.fields._current;
      Il2CppCodeGenWriteBarrier(&(local_70->fields)._statement_5__4);
      assignment = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)(local_70->fields)._statement_5__4;
      if (assignment == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields)._currentLineNumber = (assignment->fields).Line;
      pCVar21 = TypeInfo_CustomLogic_CustomLogicForBlockAst;
      pCVar20 = TypeInfo_CustomLogic_CustomLogicConditionalBlockAst;
      pCVar7 = assignment->klass;
      bVar1 = (pCVar7->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pCVar7->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst)) {
        bVar2 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
        if ((((bVar2 <= bVar1) &&
             ((pCVar7->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) ||
            ((bVar2 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth,
             bVar2 <= bVar1 &&
             ((pCVar7->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)))) ||
           ((bVar2 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
            bVar2 <= bVar1 &&
            ((pCVar7->_2).typeHierarchy[(ulong)bVar2 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
          (local_70->fields).__2__current = (Il2CppObject *)assignment;
          Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
          (local_70->fields).__1__state = 1;
          return true;
        }
        bVar2 = (TypeInfo_CustomLogic_CustomLogicWaitExpressionAst->_2).typeHierarchyDepth;
        if ((bVar2 <= bVar1) &&
           ((pCVar7->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWaitExpressionAst)) {
          pIVar27 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                              (__this_00,(local_70->fields).classInstance,(local_70->fields).localVariables,
                               (assignment->fields).Left,(MethodInfo *)0x0);
          pCVar14 = (__this_00->fields)._start;
          if (pCVar14 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar15 = (local_70->fields).classInstance;
          if (pCVar15 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar14->fields).Classes;
          key_00 = (Il2CppObject *)
                   (*(pCVar15->klass->vtable)._6_unknown.methodPtr)
                             (pCVar15,(pCVar15->klass->vtable)._6_unknown.method);
          if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar28 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar16,key_00,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                              );
          if (pCVar28 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar9 = (pCVar28->fields).Token;
          if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) {
            ThrowNullReferenceException();
          }
          piVar25 = (int *)il2cpp_runtime_helper_02abd3a0((pCVar9->fields).Value);
          if (pIVar27 == (Il2CppObject *)0x0) {
            (local_70->fields).__2__current = (Il2CppObject *)0x0;
            Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
            (local_70->fields).__1__state = 2;
            return true;
          }
          pCVar17 = (assignment->fields).Left;
          if (pCVar17 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
            pCVar18 = pCVar17->klass;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst->_2).typeHierarchyDepth;
            if ((bVar1 <= (pCVar18->_2).typeHierarchyDepth) &&
               ((pCVar18->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst)) {
              if ((*piVar25 == 4) || (pIVar27->klass != (Il2CppClass *)TypeInfo_UnityEngine_Coroutine)) {
                (local_70->fields).__2__current = (Il2CppObject *)0x0;
                Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
                (local_70->fields).__1__state = 4;
                return true;
              }
              (local_70->fields).__2__current = pIVar27;
              Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
              (local_70->fields).__1__state = 3;
              return true;
            }
          }
          uVar5 = (TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor;
          if (*piVar25 != 4) {
            if (uVar5 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
            }
            local_64 = MiscExtensions__UnboxToFloat(pIVar27,(MethodInfo *)0x0);
            pUVar24 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
            UnityEngine_WaitForSeconds___ctor(pUVar24,local_64,(MethodInfo *)0x0);
            (local_70->fields).__2__current = (Il2CppObject *)pUVar24;
            Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
            (local_70->fields).__1__state = 6;
            return true;
          }
          if (uVar5 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
          }
          fVar34 = MiscExtensions__UnboxToFloat(pIVar27,(MethodInfo *)0x0);
          (local_70->fields)._time_5__5 = fVar34;
          __this = local_70;
          goto joined_r0x05b8ddf1;
        }
        bVar2 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pCVar7->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) {
          bVar2 = (TypeInfo_CustomLogic_CustomLogicForBlockAst->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pCVar7->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForBlockAst)) {
            bVar2 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
            if ((bVar2 <= bVar1) &&
               ((pCVar7->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this_00,(local_70->fields).classInstance,(local_70->fields).localVariables,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)assignment,(MethodInfo *)0x0);
            }
          }
          else {
            (local_70->fields)._forBlock_5__8 = (CustomLogic_CustomLogicForBlockAst_o *)assignment;
            if (((assignment->klass->_2).typeHierarchyDepth < bVar2) ||
               ((assignment->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pCVar21)) {
              il2cpp_codegen_raise_invalid_cast_exception(assignment);
            }
            Il2CppCodeGenWriteBarrier(&(local_70->fields)._forBlock_5__8);
            pCVar10 = (local_70->fields)._forBlock_5__8;
            if (pCVar10 == (CustomLogic_CustomLogicForBlockAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar27 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                (__this_00,(local_70->fields).classInstance,(local_70->fields).localVariables,
                                 (pCVar10->fields).Iterable,(MethodInfo *)0x0);
            if (pIVar27 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
            if (((pIVar27->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pIVar27->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar27);
            }
            if (pIVar27[3].klass == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_object___GetEnumerator
                      (&local_60,(System_Collections_Generic_List_object__o *)pIVar27[3].klass,
                       (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
            local_28 = (CustomLogic_CustomLogicBaseAst_o *)local_60.fields._current;
            local_38 = local_60.fields._list;
            iStack_30 = local_60.fields._index;
            iStack_2c = local_60.fields._version;
            (local_70->fields).__7__wrap8.fields._current = local_60.fields._current;
            (local_70->fields).__7__wrap8.fields._list = local_60.fields._list;
            (local_70->fields).__7__wrap8.fields._index = local_60.fields._index;
            (local_70->fields).__7__wrap8.fields._version = local_60.fields._version;
            Il2CppCodeGenWriteBarrier((void **)&(local_70->fields).__7__wrap8);
            (local_70->fields).__1__state = -4;
label_05b8e6d0:
            bVar23 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&(local_70->fields).__7__wrap8,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
            pCVar22 = local_70;
            if (bVar23) {
              pCVar10 = (local_70->fields)._forBlock_5__8;
              if (pCVar10 == (CustomLogic_CustomLogicForBlockAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar13 = (pCVar10->fields).Variable;
              if (pCVar13 == (CustomLogic_CustomLogicVariableExpressionAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (local_70->fields).localVariables;
              if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar27 = (local_70->fields).__7__wrap8.fields._current;
              key = (pCVar13->fields).Name;
              bVar23 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                 (pSVar16,(Il2CppObject *)key,
                                  (MethodInfo_4AAD6F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
              pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (local_70->fields).localVariables;
              if (bVar23) {
                if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar16,(Il2CppObject *)key,pIVar27,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
              }
              else {
                if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar16,(Il2CppObject *)key,pIVar27,
                           (MethodInfo_4AAD4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
              }
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar10 = (local_70->fields)._forBlock_5__8;
              if (pCVar10 == (CustomLogic_CustomLogicForBlockAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar19 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
              pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                  (__this_00,(local_70->fields).classInstance,
                                   (local_70->fields).localVariables,(pCVar10->fields).Statements,
                                   (MethodInfo *)0x0);
              pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
              Utility_CoroutineWithData___ctor
                        (pUVar30,(UnityEngine_MonoBehaviour_o *)pCVar19,pSVar29,(MethodInfo *)0x0);
              (local_70->fields)._cwd_5__7 = pUVar30;
              Il2CppCodeGenWriteBarrier(&(local_70->fields)._cwd_5__7);
              pUVar30 = (local_70->fields)._cwd_5__7;
              if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                ThrowNullReferenceException();
              }
              (local_70->fields).__2__current = (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField;
              Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
              (local_70->fields).__1__state = 0x11;
              return true;
            }
            if (Il2CppMethodInitialized_075473e8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
              Il2CppMethodInitialized_075473e8 = '\x01';
            }
            (pCVar22->fields).__1__state = -3;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (&(pCVar22->fields).__7__wrap8,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
            (local_70->fields).__7__wrap8.fields._index = 0;
            (local_70->fields).__7__wrap8.fields._version = 0;
            (local_70->fields).__7__wrap8.fields._current = (Il2CppObject *)0x0;
            (local_70->fields)._forBlock_5__8 = (CustomLogic_CustomLogicForBlockAst_o *)0x0;
            (local_70->fields).__7__wrap8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
            Il2CppCodeGenWriteBarrier(&(local_70->fields)._forBlock_5__8);
          }
        }
        else {
          (local_70->fields)._conditional_5__6 = (CustomLogic_CustomLogicConditionalBlockAst_o *)assignment;
          if (((assignment->klass->_2).typeHierarchyDepth < bVar2) ||
             ((assignment->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pCVar20)) {
            il2cpp_codegen_raise_invalid_cast_exception(assignment);
          }
          Il2CppCodeGenWriteBarrier(&(local_70->fields)._conditional_5__6);
          pCVar8 = (local_70->fields)._conditional_5__6;
          if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar9 = (pCVar8->fields).Token;
          if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar27 = (pCVar9->fields).Value;
          if (pIVar27 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pIVar27->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          piVar25 = il2cpp_vm_Object_Unbox(pIVar27);
          pCVar8 = (local_70->fields)._conditional_5__6;
          if (*piVar25 == 0x2a) {
            if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar27 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                (__this_00,(local_70->fields).classInstance,(local_70->fields).localVariables,
                                 (pCVar8->fields).Condition,(MethodInfo *)0x0);
            if (pIVar27 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar27->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar27);
            }
            pcVar26 = il2cpp_vm_Object_Unbox(pIVar27);
            if (*pcVar26 != '\0') {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar8 = (local_70->fields)._conditional_5__6;
              if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar19 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
              pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                  (__this_00,(local_70->fields).classInstance,
                                   (local_70->fields).localVariables,(pCVar8->fields).Statements,
                                   (MethodInfo *)0x0);
              pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
              Utility_CoroutineWithData___ctor
                        (pUVar30,(UnityEngine_MonoBehaviour_o *)pCVar19,pSVar29,(MethodInfo *)0x0);
              (local_70->fields)._cwd_5__7 = pUVar30;
              Il2CppCodeGenWriteBarrier(&(local_70->fields)._cwd_5__7);
              pUVar30 = (local_70->fields)._cwd_5__7;
              if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                ThrowNullReferenceException();
              }
              (local_70->fields).__2__current = (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField;
              Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
              (local_70->fields).__1__state = 8;
              return true;
            }
            iVar31 = 2;
switchD_05b8ebde_default:
            (local_70->fields)._conditionalState_5__2 = iVar31;
          }
          else {
            if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar9 = (pCVar8->fields).Token;
            if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar27 = (pCVar9->fields).Value;
            if (pIVar27 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar27->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            piVar25 = il2cpp_vm_Object_Unbox(pIVar27);
            if (*piVar25 == 0x2d) {
label_05b8e79e:
              pCVar8 = (local_70->fields)._conditional_5__6;
              if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar27 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                  (__this_00,(local_70->fields).classInstance,
                                   (local_70->fields).localVariables,(pCVar8->fields).Condition,
                                   (MethodInfo *)0x0);
              if (pIVar27 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pIVar27->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar27);
              }
              pcVar26 = il2cpp_vm_Object_Unbox(pIVar27);
              if (*pcVar26 != '\0') {
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pCVar8 = (local_70->fields)._conditional_5__6;
                if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar19 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
                pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                    (__this_00,(local_70->fields).classInstance,
                                     (local_70->fields).localVariables,(pCVar8->fields).Statements,
                                     (MethodInfo *)0x0);
                pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
                Utility_CoroutineWithData___ctor
                          (pUVar30,(UnityEngine_MonoBehaviour_o *)pCVar19,pSVar29,(MethodInfo *)0x0);
                (local_70->fields)._cwd_5__7 = pUVar30;
                Il2CppCodeGenWriteBarrier(&(local_70->fields)._cwd_5__7);
                pUVar30 = (local_70->fields)._cwd_5__7;
                if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (local_70->fields).__2__current = (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField
                ;
                Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
                (local_70->fields).__1__state = 10;
                return true;
              }
              iVar31 = 0;
              goto switchD_05b8ebde_default;
            }
            pCVar8 = (local_70->fields)._conditional_5__6;
            if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar9 = (pCVar8->fields).Token;
            if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar27 = (pCVar9->fields).Value;
            if (pIVar27 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar27->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            piVar25 = il2cpp_vm_Object_Unbox(pIVar27);
            if (*piVar25 == 0x2b) {
              iVar4 = (local_70->fields)._conditionalState_5__2;
              if ((iVar4 == 4) || (iVar31 = 0, iVar4 == 2)) {
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pCVar8 = (local_70->fields)._conditional_5__6;
                if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar19 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
                pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                    (__this_00,(local_70->fields).classInstance,
                                     (local_70->fields).localVariables,(pCVar8->fields).Statements,
                                     (MethodInfo *)0x0);
                pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
                Utility_CoroutineWithData___ctor
                          (pUVar30,(UnityEngine_MonoBehaviour_o *)pCVar19,pSVar29,(MethodInfo *)0x0);
                (local_70->fields)._cwd_5__7 = pUVar30;
                Il2CppCodeGenWriteBarrier(&(local_70->fields)._cwd_5__7);
                pUVar30 = (local_70->fields)._cwd_5__7;
                if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (local_70->fields).__2__current = (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField
                ;
                Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
                (local_70->fields).__1__state = 0xd;
                return true;
              }
              goto switchD_05b8ebde_default;
            }
            pCVar8 = (local_70->fields)._conditional_5__6;
            if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar9 = (pCVar8->fields).Token;
            if (pCVar9 == (CustomLogic_CustomLogicToken_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar27 = (pCVar9->fields).Value;
            if (pIVar27 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar27->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            piVar25 = il2cpp_vm_Object_Unbox(pIVar27);
            if (*piVar25 == 0x2c) {
              iVar31 = 4;
              switch((local_70->fields)._conditionalState_5__2) {
              case 1:
              case 3:
                goto switchD_05b8ebde_caseD_1;
              case 2:
              case 4:
                pCVar8 = (local_70->fields)._conditional_5__6;
                if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar27 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                    (__this_00,(local_70->fields).classInstance,
                                     (local_70->fields).localVariables,(pCVar8->fields).Condition,
                                     (MethodInfo *)0x0);
                pcVar26 = (char *)il2cpp_runtime_helper_02abd3a0(pIVar27,g_data_075566f0);
                iVar31 = 4;
                if (*pcVar26 != '\0') {
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  pCVar8 = (local_70->fields)._conditional_5__6;
                  if (pCVar8 == (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pCVar19 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
                  pSVar29 = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                                      (__this_00,(local_70->fields).classInstance,
                                       (local_70->fields).localVariables,(pCVar8->fields).Statements,
                                       (MethodInfo *)0x0);
                  pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
                  Utility_CoroutineWithData___ctor
                            (pUVar30,(UnityEngine_MonoBehaviour_o *)pCVar19,pSVar29,(MethodInfo *)0x0);
                  (local_70->fields)._cwd_5__7 = pUVar30;
                  Il2CppCodeGenWriteBarrier(&(local_70->fields)._cwd_5__7);
                  pUVar30 = (local_70->fields)._cwd_5__7;
                  if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  (local_70->fields).__2__current =
                       (Il2CppObject *)(pUVar30->fields)._Coroutine_k__BackingField;
                  Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
                  (local_70->fields).__1__state = 0xf;
                  return true;
                }
              }
              goto switchD_05b8ebde_default;
            }
          }
switchD_05b8ebde_caseD_1:
          (local_70->fields)._conditional_5__6 = (CustomLogic_CustomLogicConditionalBlockAst_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(local_70->fields)._conditional_5__6);
        }
      }
      else {
        CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression
                  (__this_00,(local_70->fields).classInstance,(local_70->fields).localVariables,assignment,
                   (MethodInfo *)0x0);
      }
label_05b8e828:
      targetAddress = &(local_70->fields)._statement_5__4;
      pCVar11 = (local_70->fields)._statement_5__4;
      if (pCVar11 == (CustomLogic_CustomLogicBaseAst_o *)0x0) {
label_05b8e865:
        (local_70->fields)._conditionalState_5__2 = 0;
      }
      else {
        pCVar12 = pCVar11->klass;
        bVar1 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
        if (((pCVar12->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar12->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) goto label_05b8e865;
      }
      *targetAddress = (CustomLogic_CustomLogicBaseAst_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
    } while( true );
  case 1:
    (__this->fields).__1__state = -3;
    goto label_05b8e1d5;
  default:
    (__this->fields).__1__state = -3;
    goto label_05b8e828;
  case 5:
    (__this->fields).__1__state = -3;
    fVar34 = (__this->fields)._time_5__5 + -0.1;
    (__this->fields)._time_5__5 = fVar34;
joined_r0x05b8ddf1:
    if (0.0 < fVar34) {
      if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->SkipCutscene == false) {
        pUVar24 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pUVar24,0.1,(MethodInfo *)0x0);
        (local_70->fields).__2__current = (Il2CppObject *)pUVar24;
        Il2CppCodeGenWriteBarrier(&(local_70->fields).__2__current);
        (local_70->fields).__1__state = 5;
        return true;
      }
      __this = local_70;
    }
    goto label_05b8de2e;
  case 6:
    (__this->fields).__1__state = -3;
label_05b8de2e:
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (local_70->fields).__1__state = 7;
    break;
  case 8:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (local_70->fields).__1__state = 9;
    break;
  case 9:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar27 = (pUVar30->fields).Result;
    iVar32 = 1;
    iVar31 = 1;
    goto joined_r0x05b8e102;
  case 10:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (local_70->fields).__1__state = 0xb;
    break;
  case 0xb:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar27 = (pUVar30->fields).Result;
    if (pIVar27 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar27->klass;
      bVar1 = (pIVar6->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
      if (((bVar2 <= bVar1) &&
          ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
         ((bVar2 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
          bVar2 <= bVar1 &&
          ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (local_70->fields).__1__state = 0xc;
        return true;
      }
    }
    goto label_05b8df08;
  case 0xc:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
label_05b8df08:
    pIVar27 = (pUVar30->fields).Result;
    if (pIVar27 == (Il2CppObject *)0x0) {
label_05b8df6b:
      ppUVar33 = &(__this->fields)._cwd_5__7;
      *ppUVar33 = (Utility_CoroutineWithData_o *)0x0;
      Il2CppCodeGenWriteBarrier(ppUVar33);
      goto label_05b8e79e;
    }
    pIVar6 = pIVar27->klass;
    bVar1 = (pIVar6->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
    if (((bVar1 < bVar2) ||
        ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) &&
       ((bVar2 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth, bVar1 < bVar2 ||
        ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)))) goto label_05b8df6b;
    goto label_05b8e1d5;
  case 0xd:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (local_70->fields).__1__state = 0xe;
    break;
  case 0xe:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar27 = (pUVar30->fields).Result;
    if (pIVar27 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar27->klass;
      bVar1 = (pIVar6->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
      if ((((bVar2 <= bVar1) &&
           ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) ||
          ((bVar2 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth,
           bVar2 <= bVar1 &&
           ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)))) ||
         ((bVar2 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
          bVar2 <= bVar1 &&
          ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) goto label_05b8e1d5;
    }
    ppUVar33 = &(__this->fields)._cwd_5__7;
    *ppUVar33 = (Utility_CoroutineWithData_o *)0x0;
    Il2CppCodeGenWriteBarrier(ppUVar33);
    iVar31 = 0;
    goto switchD_05b8ebde_default;
  case 0xf:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (local_70->fields).__1__state = 0x10;
    break;
  case 0x10:
    (__this->fields).__1__state = -3;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar27 = (pUVar30->fields).Result;
    iVar32 = 3;
    iVar31 = 3;
joined_r0x05b8e102:
    if (pIVar27 == (Il2CppObject *)0x0) {
label_05b8e17b:
      (__this->fields)._conditionalState_5__2 = iVar31;
      ppUVar33 = &(__this->fields)._cwd_5__7;
      *ppUVar33 = (Utility_CoroutineWithData_o *)0x0;
      Il2CppCodeGenWriteBarrier(ppUVar33);
      goto switchD_05b8ebde_caseD_1;
    }
    pIVar6 = pIVar27->klass;
    bVar1 = (pIVar6->_2).typeHierarchyDepth;
    bVar2 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)->_2).typeHierarchyDepth;
    if (((bVar1 < bVar2) ||
        ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) &&
       ((bVar2 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)->_2).typeHierarchyDepth,
        bVar1 < bVar2 ||
        ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)))) {
      bVar2 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)->_2).typeHierarchyDepth;
      iVar31 = iVar32;
      if ((bVar1 < bVar2) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) goto label_05b8e17b;
    }
label_05b8e1d5:
    if (Il2CppMethodInitialized_075473e7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
      Il2CppMethodInitialized_075473e7 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap2,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
    return false;
  case 0x11:
    (__this->fields).__1__state = -4;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields).__2__current = (pUVar30->fields).Result;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (local_70->fields).__1__state = 0x12;
    break;
  case 0x12:
    (__this->fields).__1__state = -4;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar27 = (pUVar30->fields).Result;
    if (pIVar27 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar27->klass;
      bVar1 = (pIVar6->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
      if (((bVar2 <= bVar1) &&
          ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
         ((bVar2 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
          bVar2 <= bVar1 &&
          ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
           (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (local_70->fields).__1__state = 0x13;
        return true;
      }
    }
    goto label_05b8e05a;
  case 0x13:
    (__this->fields).__1__state = -4;
    pUVar30 = (__this->fields)._cwd_5__7;
    if (pUVar30 == (Utility_CoroutineWithData_o *)0x0) {
      ThrowNullReferenceException();
    }
label_05b8e05a:
    pIVar27 = (pUVar30->fields).Result;
    if (pIVar27 == (Il2CppObject *)0x0) {
label_05b8e0bd:
      ppUVar33 = &(__this->fields)._cwd_5__7;
      *ppUVar33 = (Utility_CoroutineWithData_o *)0x0;
      Il2CppCodeGenWriteBarrier(ppUVar33);
      goto label_05b8e6d0;
    }
    pIVar6 = pIVar27->klass;
    bVar1 = (pIVar6->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
    if (((bVar1 < bVar2) ||
        ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) &&
       ((bVar2 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth, bVar1 < bVar2 ||
        ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)))) goto label_05b8e0bd;
    if (Il2CppMethodInitialized_075473e8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
      Il2CppMethodInitialized_075473e8 = '\x01';
    }
    (__this->fields).__1__state = -3;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&(__this->fields).__7__wrap8,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    __this = local_70;
    goto label_05b8e1d5;
  }
  return true;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally1 (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x5b8f320

void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally1
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075473e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
    Il2CppMethodInitialized_075473e7 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap2,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$<>m__Finally2
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally2 (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x5b8f2d0

void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87____m__Finally2
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075473e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    Il2CppMethodInitialized_075473e8 = '\x01';
  }
  (__this->fields).__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&(__this->fields).__7__wrap8,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
  return;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x5b8f360

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x5b8f370

void CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateBlockCoroutine_d__87_System_Collections_IEnumerator_Res
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o* __this, const MethodInfo* method);
// 0x5b8f3b0

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnSecond_d__18___ctor (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5b8f3c0

void CustomLogic_CustomLogicEvaluator__OnSecond_d__18___ctor
               (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_IDisposable_Dispose (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x5b8f3e0

void CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_IDisposable_Dispose
               (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicEvaluator__OnSecond_d__18__MoveNext (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x5b8f3f0
// eh: try 0x5b8f653..0x5b8f6f1 -> pad 0x5b8f70e (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b8f727..0x5b8f72c -> pad 0x5b8f752 cleanup
// eh: try 0x5b8f755..0x5b8f75d -> pad 0x5b8f765 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8f518: jmp 0x5b8f69b
// asm:   0x5b8f70a: jmp 0x5b8f710
// asm:   0x5b8f70c: jmp 0x5b8f710
// asm:   0x5b8f70e: jmp 0x5b8f710
// asm:   0x5b8f710: mov rbx, rax
// asm:   0x5b8f713: cmp edx, 1
// asm:   0x5b8f716: jne 0x5b8f755
// asm:   0x5b8f718: mov rdi, rbx
// asm:   0x5b8f71b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8f720: mov rbx, qword ptr [rax]
// asm:   0x5b8f723: mov qword ptr [rsp], rbx
// asm:   0x5b8f727: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8f72c: lea rax, [rip + 0x17000fd]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin
// asm:   0x5b8f733: mov rsi, qword ptr [rax]
// asm:   0x5b8f736: lea rdi, [rsp + 0x10]
// asm:   0x5b8f73b: call 0x4da27d0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose()
// asm:   0x5b8f740: test rbx, rbx
// asm:   0x5b8f743: jne 0x5b8f74a
// asm:   0x5b8f745: call 0x30d5fc0  ; il2cpp_runtime_helper_030d5fc0()
// asm:   0x5b8f74a: mov rdi, rbx
// asm:   0x5b8f74d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8f752: mov rbx, rax
// asm:   0x5b8f755: mov rdi, rsp
// asm:   0x5b8f758: call 0x2fd8000  ; il2cpp_runtime_helper_02fd8000()
// asm:   0x5b8f75d: mov rdi, rbx
// asm:   0x5b8f760: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b8f765: mov rdi, rax
// asm:   0x5b8f768: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicEvaluator__OnSecond_d__18__MoveNext
               (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  undefined1 uVar3;
  bool bVar4;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_03;
  UnityEngine_WaitForSeconds_o *__this_04;
  undefined8 local_58;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_075473e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin_718f838
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin_718f840
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_CustomLogicNetworkViewBuiltin_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"OnSecond");
    il2cpp_codegen_initialize_runtime_metadata(&"SyncCurrentTimeRPC");
    Il2CppMethodInitialized_075473e9 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
label_05b8f69b:
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_04,1.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_04;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this_00,"OnSecond",(System_Object_array *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      uVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    else {
      uVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    if (!(bool)uVar3) goto label_05b8f69b;
    local_58._4_4_ = (undefined4)((ulong)local_58 >> 0x20);
    __this_01 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_58 = CONCAT44(local_58._4_4_,(__this_00->fields).CurrentTime);
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,&local_58);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar5;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_01,"SyncCurrentTimeRPC",1,parameters,(MethodInfo *)0x0);
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this_00->fields).IdToNetworkView;
        if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
           (__this_02 = System_Collections_Generic_Dictionary_int__object___get_Keys
                                  (pSVar2,(MethodInfo_4A0F330 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Keys
                                  ),
           __this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
                    (&local_48,__this_02,
                     (MethodInfo_510AAB0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_CustomLogicNetworkViewBuiltin_GetEnumera
                    );
          local_58 = 0;
          local_50 = &local_48;
          while (bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                                   (&local_48,
                                    (MethodInfo_4CA27E0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin_718f838
                                   ), bVar4) {
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                     (__this_00->fields).IdToNetworkView;
            if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_03 = System_Collections_Generic_Dictionary_int__object___get_Item
                                  (pSVar2,(int32_t)local_48.fields._currentKey,
                                   (MethodInfo_4A0F690 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                                  );
            if (__this_03 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
              ThrowNullReferenceException();
            }
            CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond(__this_03,(MethodInfo *)0x0);
          }
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                    (&local_48,
                     (MethodInfo_4CA27D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_CustomLogicNetworkViewBuiltin
                    );
          goto label_05b8f69b;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x5b8f770

Il2CppObject *
CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x5b8f780

void CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o* __this, const MethodInfo* method);
// 0x5b8f7c0

Il2CppObject *
CustomLogic_CustomLogicEvaluator__OnSecond_d__18__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicEvaluator$$Start
// il2cpp: void CustomLogic_CustomLogicEvaluator__Start (CustomLogic_CustomLogicEvaluator_o* __this, System_Collections_Generic_Dictionary_string__BaseSetting__o* modeSettings, System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* addonSettings, const MethodInfo* method);
// 0x5b7a300
// eh: try 0x5b7a583..0x5b7b2d2 -> pad 0x5b7b328 (+97 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b7b2d8..0x5b7b2f7 -> pad 0x5b7b583 catch (...) [compiler noexcept guard]
// eh: try 0x5b7b39e..0x5b7b3a3 -> pad 0x5b7b3a8 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b7b3ae..0x5b7b3b8 -> pad 0x5b7b583 catch (...) [compiler noexcept guard]
// eh: try 0x5b7b3df..0x5b7b3e4 -> pad 0x5b7b3e9 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b7b3ef..0x5b7b3f9 -> pad 0x5b7b583 catch (...) [compiler noexcept guard]
// eh: try 0x5b7b434..0x5b7b439 -> pad 0x5b7b43e catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b7b444..0x5b7b44e -> pad 0x5b7b583 catch (...) [compiler noexcept guard]
// eh: try 0x5b7b472..0x5b7b477 -> pad 0x5b7b47c catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b7b482..0x5b7b48c -> pad 0x5b7b583 catch (...) [compiler noexcept guard]
// eh: try 0x5b7b4ae..0x5b7b4b3 -> pad 0x5b7b4bc catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b7b4c2..0x5b7b4cc -> pad 0x5b7b583 catch (...) [compiler noexcept guard]
// eh: try 0x5b7b4e1..0x5b7b56e -> pad 0x5b7b573 (+1 call sites) cleanup
// eh: try 0x5b7b576..0x5b7b57b -> pad 0x5b7b583 catch (...) [compiler noexcept guard]
// asm: 269 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7a8eb: lea rbx, [rip + 0x1715606]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
// asm:   0x5b7a8f2: lea rbp, [rsp + 0x80]
// asm:   0x5b7a8fa: lea r15, [rip + 0x1710527]  ; MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ContainsKey
// asm:   0x5b7a901: lea r13, [rip + 0x1710540]  ; MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
// asm:   0x5b7a908: nop dword ptr [rax + rax]
// asm:   0x5b7aca5: jmp 0x5b7acbb
// asm:   0x5b7aca7: jmp 0x5b7acbb
// asm:   0x5b7aca9: jmp 0x5b7acbb
// asm:   0x5b7acab: jmp 0x5b7acbb
// asm:   0x5b7acad: jmp 0x5b7acbb
// asm:   0x5b7acaf: jmp 0x5b7accd
// asm:   0x5b7acb1: jmp 0x5b7acbb
// asm:   0x5b7acb3: jmp 0x5b7acbb
// asm:   0x5b7acb5: jmp 0x5b7acbb
// asm:   0x5b7acb7: jmp 0x5b7accd
// asm:   0x5b7acb9: jmp 0x5b7accd
// asm:   0x5b7acbb: mov r15, rdx
// asm:   0x5b7acbe: mov rbp, rax
// asm:   0x5b7acc1: mov r14, qword ptr [rsp]
// asm:   0x5b7acc5: jmp 0x5b7acd3
// asm:   0x5b7acc7: jmp 0x5b7accd
// asm:   0x5b7acc9: jmp 0x5b7accd
// asm:   0x5b7accb: jmp 0x5b7accd
// asm:   0x5b7accd: mov r15, rdx
// asm:   0x5b7acd0: mov rbp, rax
// asm:   0x5b7acd3: cmp r15d, 1
// asm:   0x5b7acd7: jne 0x5b7b2ed
// asm:   0x5b7acdd: mov rdi, rbp
// asm:   0x5b7ace0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b7ace5: mov r15, qword ptr [rax]
// asm:   0x5b7ace8: mov qword ptr [rsp + 0x10], r15
// asm:   0x5b7aced: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7acf2: jmp 0x5b7ac13
// asm:   0x5b7acf7: mov ebx, 0xf
// asm:   0x5b7acfc: xor r14d, r14d
// asm:   0x5b7acff: jmp 0x5b7ad35
// asm:   0x5b7ad30: mov ebx, 0xf
// asm:   0x5b7aecf: nop 
// asm:   0x5b7afcc: test ebp, ebp
// asm:   0x5b7afce: je 0x5b7aed0
// asm:   0x5b7afd4: jmp 0x5b7b012
// asm:   0x5b7afe0: jmp 0x5b7afe4
// asm:   0x5b7afe2: jmp 0x5b7afe4
// asm:   0x5b7afe4: mov r15, rdx
// asm:   0x5b7afe7: mov rbp, rax
// asm:   0x5b7afea: cmp r15d, 1
// asm:   0x5b7afee: jne 0x5b7b2d8
// asm:   0x5b7aff4: mov rdi, rbp
// asm:   0x5b7aff7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b7affc: mov r15, qword ptr [rax]
// asm:   0x5b7afff: mov qword ptr [rsp + 0x10], r15
// asm:   0x5b7b004: xor ebp, ebp
// asm:   0x5b7b006: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7b00b: jmp 0x5b7afa8
// asm:   0x5b7b0ad: nop dword ptr [rax]
// asm:   0x5b7b182: jmp 0x5b7b1b2
// asm:   0x5b7b220: mov rdi, r15
// asm:   0x5b7b223: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b7b237: mov rdi, r15
// asm:   0x5b7b23a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b7b27b: mov rdi, rbp
// asm:   0x5b7b27e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b7b28d: mov rdi, r14
// asm:   0x5b7b290: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b7b29f: mov rdi, r14
// asm:   0x5b7b2a2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b7b2b1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b7b2c5: mov rdi, rbx
// asm:   0x5b7b2c8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b7b2d2: mov r15, rdx
// asm:   0x5b7b2d5: mov rbp, rax
// asm:   0x5b7b2d8: lea rdi, [rsp + 0x10]
// asm:   0x5b7b2dd: call 0x2fd7800  ; il2cpp_runtime_helper_02fd7800()
// asm:   0x5b7b2e2: jmp 0x5b7b3c3
// asm:   0x5b7b2e7: mov r15, rdx
// asm:   0x5b7b2ea: mov rbp, rax
// asm:   0x5b7b2ed: lea rdi, [rsp + 0x10]
// asm:   0x5b7b2f2: call 0x2fd7770  ; il2cpp_runtime_helper_02fd7770()
// asm:   0x5b7b2f7: jmp 0x5b7b41c
// asm:   0x5b7b2fc: jmp 0x5b7b33a
// asm:   0x5b7b2fe: jmp 0x5b7b33a
// asm:   0x5b7b300: jmp 0x5b7b33a
// asm:   0x5b7b302: jmp 0x5b7b33a
// asm:   0x5b7b304: jmp 0x5b7b33a
// asm:   0x5b7b306: jmp 0x5b7b33a
// asm:   0x5b7b308: jmp 0x5b7b33a
// asm:   0x5b7b30a: jmp 0x5b7b33a
// asm:   0x5b7b30c: jmp 0x5b7b33a
// asm:   0x5b7b30e: jmp 0x5b7b33a
// asm:   0x5b7b310: jmp 0x5b7b33a
// asm:   0x5b7b312: jmp 0x5b7b33a
// asm:   0x5b7b314: jmp 0x5b7b33a
// asm:   0x5b7b316: jmp 0x5b7b33a
// asm:   0x5b7b318: jmp 0x5b7b33a
// asm:   0x5b7b31a: jmp 0x5b7b33a
// asm:   0x5b7b31c: jmp 0x5b7b33a
// asm:   0x5b7b31e: jmp 0x5b7b33a
// asm:   0x5b7b320: jmp 0x5b7b33a
// asm:   0x5b7b322: jmp 0x5b7b33a
// asm:   0x5b7b324: jmp 0x5b7b33a
// asm:   0x5b7b326: jmp 0x5b7b33a
// asm:   0x5b7b328: jmp 0x5b7b33a
// asm:   0x5b7b32a: jmp 0x5b7b33a
// asm:   0x5b7b32c: jmp 0x5b7b33a
// asm:   0x5b7b32e: jmp 0x5b7b490
// asm:   0x5b7b333: jmp 0x5b7b490
// asm:   0x5b7b338: jmp 0x5b7b33a
// asm:   0x5b7b33a: mov r15, rdx
// asm:   0x5b7b33d: mov rbp, rax
// asm:   0x5b7b340: jmp 0x5b7b4cc
// asm:   0x5b7b345: jmp 0x5b7b490
// asm:   0x5b7b34a: jmp 0x5b7b490
// asm:   0x5b7b34f: jmp 0x5b7b490
// asm:   0x5b7b354: jmp 0x5b7b490
// asm:   0x5b7b359: jmp 0x5b7b490
// asm:   0x5b7b35e: jmp 0x5b7b490
// asm:   0x5b7b363: jmp 0x5b7b490
// asm:   0x5b7b368: jmp 0x5b7b490
// asm:   0x5b7b36d: jmp 0x5b7b490
// asm:   0x5b7b372: jmp 0x5b7b380
// asm:   0x5b7b374: jmp 0x5b7b3bd
// asm:   0x5b7b376: jmp 0x5b7b3bd
// asm:   0x5b7b378: jmp 0x5b7b3bd
// asm:   0x5b7b37a: jmp 0x5b7b3bd
// asm:   0x5b7b37c: jmp 0x5b7b3bd
// asm:   0x5b7b37e: jmp 0x5b7b3bd
// asm:   0x5b7b380: mov r15, rdx
// asm:   0x5b7b383: mov rbp, rax
// asm:   0x5b7b386: cmp r15d, 1
// asm:   0x5b7b38a: jne 0x5b7b3ae
// asm:   0x5b7b38c: mov rdi, rbp
// asm:   0x5b7b38f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b7b394: mov rbx, qword ptr [rax]
// asm:   0x5b7b397: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5b7b39c: xor ebp, ebp
// asm:   0x5b7b39e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7b3a3: jmp 0x5b7b0d6
// asm:   0x5b7b3a8: mov r15, rdx
// asm:   0x5b7b3ab: mov rbp, rax
// asm:   0x5b7b3ae: lea rdi, [rsp + 0x10]
// asm:   0x5b7b3b3: call 0x2fd7860  ; il2cpp_runtime_helper_02fd7860()
// asm:   0x5b7b3b8: jmp 0x5b7b4cc
// asm:   0x5b7b3bd: mov r15, rdx
// asm:   0x5b7b3c0: mov rbp, rax
// asm:   0x5b7b3c3: cmp r15d, 1
// asm:   0x5b7b3c7: jne 0x5b7b3ef
// asm:   0x5b7b3c9: mov rdi, rbp
// asm:   0x5b7b3cc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b7b3d1: mov rcx, qword ptr [rax]
// asm:   0x5b7b3d4: mov qword ptr [rsp], rcx
// asm:   0x5b7b3d8: mov qword ptr [rsp + 0x30], rcx
// asm:   0x5b7b3dd: xor ebp, ebp
// asm:   0x5b7b3df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7b3e4: jmp 0x5b7b012
// asm:   0x5b7b3e9: mov r15, rdx
// asm:   0x5b7b3ec: mov rbp, rax
// asm:   0x5b7b3ef: lea rdi, [rsp + 0x30]
// asm:   0x5b7b3f4: call 0x2fd7830  ; il2cpp_runtime_helper_02fd7830()
// asm:   0x5b7b3f9: jmp 0x5b7b4cc
// asm:   0x5b7b3fe: jmp 0x5b7b416
// asm:   0x5b7b400: jmp 0x5b7b416
// asm:   0x5b7b402: jmp 0x5b7b416
// asm:   0x5b7b404: jmp 0x5b7b416
// asm:   0x5b7b406: jmp 0x5b7b416
// asm:   0x5b7b408: jmp 0x5b7b416
// asm:   0x5b7b40a: jmp 0x5b7b416
// asm:   0x5b7b40c: jmp 0x5b7b416
// asm:   0x5b7b40e: jmp 0x5b7b416
// asm:   0x5b7b410: jmp 0x5b7b490
// asm:   0x5b7b412: jmp 0x5b7b416
// asm:   0x5b7b414: jmp 0x5b7b416
// asm:   0x5b7b416: mov r15, rdx
// asm:   0x5b7b419: mov rbp, rax
// asm:   0x5b7b41c: cmp r15d, 1
// asm:   0x5b7b420: jne 0x5b7b444
// asm:   0x5b7b422: mov rdi, rbp
// asm:   0x5b7b425: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b7b42a: mov r14, qword ptr [rax]
// asm:   0x5b7b42d: mov qword ptr [rsp + 0x30], r14
// asm:   0x5b7b432: xor ebx, ebx
// asm:   0x5b7b434: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7b439: jmp 0x5b7ad35
// asm:   0x5b7b43e: mov r15, rdx
// asm:   0x5b7b441: mov rbp, rax
// asm:   0x5b7b444: lea rdi, [rsp + 0x30]
// asm:   0x5b7b449: call 0x2fd77a0  ; il2cpp_runtime_helper_02fd77a0()
// asm:   0x5b7b44e: jmp 0x5b7b4cc
// asm:   0x5b7b450: jmp 0x5b7b454
// asm:   0x5b7b452: jmp 0x5b7b454
// asm:   0x5b7b454: mov r15, rdx
// asm:   0x5b7b457: mov rbp, rax
// asm:   0x5b7b45a: cmp r15d, 1
// asm:   0x5b7b45e: jne 0x5b7b482
// asm:   0x5b7b460: mov rdi, rbp
// asm:   0x5b7b463: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b7b468: mov r14, qword ptr [rax]
// asm:   0x5b7b46b: mov qword ptr [rsp + 0x10], r14
// asm:   0x5b7b470: xor ebx, ebx
// asm:   0x5b7b472: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7b477: jmp 0x5b7ae1f
// asm:   0x5b7b47c: mov r15, rdx
// asm:   0x5b7b47f: mov rbp, rax
// asm:   0x5b7b482: lea rdi, [rsp + 0x10]
// asm:   0x5b7b487: call 0x2fd77d0  ; il2cpp_runtime_helper_02fd77d0()
// asm:   0x5b7b48c: jmp 0x5b7b4cc
// asm:   0x5b7b48e: jmp 0x5b7b490
// asm:   0x5b7b490: mov r15, rdx
// asm:   0x5b7b493: mov rbp, rax
// asm:   0x5b7b496: cmp r15d, 1
// asm:   0x5b7b49a: jne 0x5b7b4c2
// asm:   0x5b7b49c: mov rdi, rbp
// asm:   0x5b7b49f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b7b4a4: mov rbp, qword ptr [rax]
// asm:   0x5b7b4a7: mov qword ptr [rsp + 0x10], rbp
// asm:   0x5b7b4ac: xor ebx, ebx
// asm:   0x5b7b4ae: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7b4b3: mov r14, qword ptr [rsp]
// asm:   0x5b7b4b7: jmp 0x5b7a847
// asm:   0x5b7b4bc: mov r15, rdx
// asm:   0x5b7b4bf: mov rbp, rax
// asm:   0x5b7b4c2: lea rdi, [rsp + 0x10]
// asm:   0x5b7b4c7: call 0x2fd7740  ; il2cpp_runtime_helper_02fd7740()
// asm:   0x5b7b4cc: cmp r15d, 1
// asm:   0x5b7b4d0: jne 0x5b7b57b
// asm:   0x5b7b4d6: mov rdi, rbp
// asm:   0x5b7b4d9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b7b4de: mov rbx, rax
// asm:   0x5b7b4e1: lea rdi, [rip + 0x16fcbd8]  ; TypeInfo_System_Exception
// asm:   0x5b7b4e8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b7b4ed: mov rcx, qword ptr [rbx]
// asm:   0x5b7b4f0: mov rsi, qword ptr [rcx]
// asm:   0x5b7b4f3: mov rdi, rax
// asm:   0x5b7b4f6: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b7b4fb: test al, al
// asm:   0x5b7b4fd: je 0x5b7b54d
// asm:   0x5b7b4ff: mov rbx, qword ptr [rbx]
// asm:   0x5b7b502: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7b507: test rbx, rbx
// asm:   0x5b7b50a: je 0x5b7b56e
// asm:   0x5b7b50c: mov rax, qword ptr [rbx]
// asm:   0x5b7b50f: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b7b516: mov rdi, rbx
// asm:   0x5b7b519: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b7b51f: mov rbx, rax
// asm:   0x5b7b522: lea rdi, [rip + 0x175da07]  ; "Custom logic runtime error: "
// asm:   0x5b7b529: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b7b52e: mov rdi, rax
// asm:   0x5b7b531: mov rsi, rbx
// asm:   0x5b7b534: xor edx, edx
// asm:   0x5b7b536: call 0x53f0320  ; System_String__Concat()
// asm:   0x5b7b53b: mov rsi, rax
// asm:   0x5b7b53e: mov edx, 1
// asm:   0x5b7b543: call 0x5b83160  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x5b7b548: jmp 0x5b7b204
// asm:   0x5b7b54d: mov edi, 8
// asm:   0x5b7b552: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b7b557: mov rcx, qword ptr [rbx]
// asm:   0x5b7b55a: mov qword ptr [rax], rcx
// asm:   0x5b7b55d: lea rsi, [rip + 0x12b1f9c]
// asm:   0x5b7b564: mov rdi, rax
// asm:   0x5b7b567: xor edx, edx
// asm:   0x5b7b569: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b7b56e: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5b7b573: mov rbp, rax
// asm:   0x5b7b576: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7b57b: mov rdi, rbp
// asm:   0x5b7b57e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b7b583: mov rdi, rax
// asm:   0x5b7b586: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicEvaluator__Start
               (CustomLogic_CustomLogicEvaluator_o *__this,
               System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings,
               System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *addonSettings
               ,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  CustomLogic_CustomLogicManager_o *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *key;
  bool bVar5;
  CustomLogic_CustomLogicClassInstance_o *pCVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar7;
  Settings_BaseSetting_o *pSVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar11;
  CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this_01;
  MethodInfo **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_R9;
  undefined1 local_f8 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_b8;
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_98;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  undefined1 local_48 [8];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *pSStack_40;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_38;
  
  method_03 = (MethodInfo *)modeSettings;
  if (Il2CppMethodInitialized_075473a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_718fca0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_718f6b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_718f6c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_718fca8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_g
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassInstance_GetEnumerato
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
              );
    il2cpp_codegen_initialize_runtime_metadata(&"OnGameStart");
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_075473a6 = '\x01';
  }
  local_c8 = (undefined1  [8])0x0;
  uStack_c0._0_4_ = 0;
  uStack_c0._4_4_ = 0;
  local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88 = (undefined1  [8])0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8 = (undefined1  [8])0x0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  local_98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68 = (undefined1  [8])0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)0x0;
  local_38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  CustomLogic_CustomLogicEvaluator__Init(__this,method_03);
  (__this->fields).CurrentTime = 0.0;
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
  if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar10,(Il2CppObject *)"Main",
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                     );
  if (modeSettings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Keys
                     ((System_Collections_Generic_Dictionary_object__object__o *)modeSettings,
                      (MethodInfo_4AAD0F0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
  if (pSVar7 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_f8,pSVar7
             ,(MethodInfo_511A520 *)
              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator)
  ;
  local_b8 = local_e8;
  local_c8 = (undefined1  [8])local_f8._0_8_;
  uStack_c0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_f8._8_8_
  ;
  local_f8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8._8_8_ = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_c8;
  while (bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                           ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                            local_c8,(MethodInfo_4CE7080 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                           ), pSVar4 = local_b8, bVar5) {
    pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)modeSettings,
                        (Il2CppObject *)local_b8,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    if (pSVar8 != (Settings_BaseSetting_o *)0x0) {
      pSVar3 = pSVar8->klass;
      bVar1 = (pSVar3->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
            bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
            if ((bVar2 <= bVar1) &&
               ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting))
            {
              if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Variables;
              local_d8 = CONCAT71(local_d8._1_7_,*(undefined1 *)((long)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 1));
              pIVar9 = il2cpp_vm_Object_Box(g_data_075566f0,&local_d8);
              if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar10,(Il2CppObject *)pSVar4,pIVar9,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
            }
          }
          else {
            if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Variables;
            local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)((long)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 4));
            pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_d8);
            if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar10,(Il2CppObject *)pSVar4,pIVar9,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          }
        }
        else {
          if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Variables;
          if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar10,(Il2CppObject *)pSVar4,(*(uint64_t *)((char *)pSVar8 + 0x20)),
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        }
      }
      else {
        if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Variables;
        local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)((long)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 4));
        pIVar9 = il2cpp_vm_Object_Box(g_data_07556740,&local_d8);
        if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar10,(Il2CppObject *)pSVar4,pIVar9,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_c8,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
            );
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses;
  if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Keys
                     (pSVar10,(MethodInfo_4AAD0F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys
                     );
  if (pSVar7 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_f8,pSVar7
             ,(MethodInfo_511A520 *)
              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassInstance_GetEnumerato
            );
  local_78 = local_e8;
  local_88 = (undefined1  [8])local_f8._0_8_;
  uStack_80 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_f8._8_8_
  ;
  local_d8 = 0;
  local_d0 = local_88;
  if (addonSettings == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0
     ) {
    do {
      bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_88,(MethodInfo_4CE7080 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
                        );
    } while (bVar5);
  }
  else {
    while (bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                               *)local_88,
                              (MethodInfo_4CE7080 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
                             ), pSVar4 = local_78, bVar5) {
      bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)addonSettings,
                         (Il2CppObject *)local_78,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ContainsKey
                        );
      if (bVar5) {
        pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses;
        if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar10,(Il2CppObject *)pSVar4,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                           );
        pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)addonSettings,
                             (Il2CppObject *)pSVar4,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                            );
        if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Keys
                           (pSVar10,(MethodInfo_4AAD0F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                           );
        if (pSVar7 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_f8,
                   pSVar7,(MethodInfo_511A520 *)
                          MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                  );
        local_b8 = local_e8;
        local_c8 = (undefined1  [8])local_f8._0_8_;
        uStack_c0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                    local_f8._8_8_;
        local_f8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_f8._8_8_ = local_c8;
        while (bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                 ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)local_c8,
                                  (MethodInfo_4CE7080 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                                 ), key = local_b8, bVar5) {
          pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)addonSettings,
                               (Il2CppObject *)pSVar4,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                              );
          if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar10,(Il2CppObject *)key,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
          if (pSVar8 != (Settings_BaseSetting_o *)0x0) {
            pSVar3 = pSVar8->klass;
            bVar1 = (pSVar3->_2).typeHierarchyDepth;
            bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
            if ((bVar1 < bVar2) ||
               ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
               ) {
              bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
              if ((bVar1 < bVar2) ||
                 ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
                if ((bVar1 < bVar2) ||
                   ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                  bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
                  if ((bVar2 <= bVar1) &&
                     ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                      (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
                    if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
                              (pCVar6->fields).Variables;
                    local_dc = CONCAT31(local_dc._1_3_,*(undefined1 *)((long)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 1));
                    pIVar9 = il2cpp_vm_Object_Box(g_data_075566f0,&local_dc);
                    if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pSVar10,(Il2CppObject *)key,pIVar9,
                               (MethodInfo_4AAD4C0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
                  }
                }
                else {
                  if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
                            (pCVar6->fields).Variables;
                  local_dc = *(undefined4 *)((long)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 4);
                  pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_dc);
                  if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar10,(Il2CppObject *)key,pIVar9,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
                }
              }
              else {
                if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (pCVar6->fields).Variables;
                if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar10,(Il2CppObject *)key,(*(uint64_t *)((char *)pSVar8 + 0x20)),
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
              }
            }
            else {
              if (pCVar6 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Variables;
              local_dc = *(undefined4 *)((long)&(*(uint64_t *)((char *)pSVar8 + 0x18)) + 4);
              pIVar9 = il2cpp_vm_Object_Box(g_data_07556740,&local_dc);
              if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar10,(Il2CppObject *)key,pIVar9,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
            }
          }
        }
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_c8,
                   (MethodInfo_4CE7070 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                  );
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_88,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
            );
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
  if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Values
                      (pSVar10,(MethodInfo_4AAD2A0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                      );
  if (pSVar11 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_f8,
             pSVar11,(MethodInfo_43F93D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
            );
  local_98 = local_e8;
  local_a8 = (undefined1  [8])local_f8._0_8_;
  uStack_a0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_f8._8_8_
  ;
  local_f8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8._8_8_ =
       (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_a8;
  while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                           ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                             *)local_a8,
                            (MethodInfo_4CE7200 *)
                            MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
                           ), pSVar4 = local_98, bVar5) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_98,"Init",
               (System_Object_array *)0x0,0,in_R9);
    if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      ThrowNullReferenceException();
    }
    *(bool *)((long)&(pSVar4->fields)._buckets + 1) = true;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_a8,
             (MethodInfo_4CE71F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
            );
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
            (__this->fields)._namespacedStaticClasses;
  if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Values
                      (pSVar10,(MethodInfo_4AAD2A0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb8
                      );
  if (pSVar11 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_f8,
             pSVar11,(MethodInfo_43F93D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
            );
  local_58 = local_e8;
  local_68 = (undefined1  [8])local_f8._0_8_;
  uStack_60 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
              local_f8._8_8_;
  local_d8 = 0;
  local_d0 = local_68;
  while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                           ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                             *)local_68,
                            (MethodInfo_4CE7200 *)
                            MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_718fca0
                           ), bVar5) {
    if (local_58 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar11 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values
                        (local_58,(MethodInfo_4A54D80 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
                        );
    if (pSVar11 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_f8,
               pSVar11,(MethodInfo_43F1210 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
              );
    local_38 = local_e8;
    local_48 = (undefined1  [8])local_f8._0_8_;
    pSStack_40 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                 local_f8._8_8_;
    local_f8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_f8._8_8_ =
         (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48;
    while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                             ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                               *)local_48,
                              (MethodInfo_4CDC070 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_718f6b8
                             ), pSVar4 = local_38, bVar5) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this,(CustomLogic_CustomLogicClassInstance_o *)local_38,"Init",
                 (System_Object_array *)0x0,0,in_R9);
      if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        ThrowNullReferenceException();
      }
      *(undefined1 *)((long)&(pSVar4->fields)._buckets + 1) = 1;
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
               (MethodInfo_4CDC060 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
              );
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_68,
             (MethodInfo_4CE71F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
            );
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses;
  if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Values
                      (pSVar10,(MethodInfo_4AAD2A0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                      );
  if (pSVar11 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = &
              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
  ;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_f8,
             pSVar11,(MethodInfo_43F93D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
            );
  local_98 = local_e8;
  local_a8 = (undefined1  [8])local_f8._0_8_;
  uStack_a0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_f8._8_8_
  ;
  local_f8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8._8_8_ =
       (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_a8;
  while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                           ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                             *)local_a8,
                            (MethodInfo_4CE7200 *)
                            MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
                           ), bVar5) {
    CustomLogic_CustomLogicEvaluator__AddCallbacks
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_98,method_01);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_a8,
             (MethodInfo_4CE71F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
            );
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"Init",(System_Object_array *)0x0,(MethodInfo *)method_00);
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
  if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar10,(Il2CppObject *)"Main",
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                     );
  CustomLogic_CustomLogicEvaluator__AddCallbacks(__this,pCVar6,method_02);
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnGameStart",(System_Object_array *)0x0,(MethodInfo *)method_00);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  else {
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  if (Il2CppMethodInitialized_075473b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18);
    Il2CppMethodInitialized_075473b7 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18);
  CustomLogic_CustomLogicEvaluator__OnSecond_d__18___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    if (__this_00 != (CustomLogic_CustomLogicManager_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$AddCallbacks
// il2cpp: void CustomLogic_CustomLogicEvaluator__AddCallbacks (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x5b82c30
// eh: try 0x5b82dbf..0x5b82ef6 -> pad 0x5b82f05 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b82f23..0x5b82f28 -> pad 0x5b82f49 cleanup
// eh: try 0x5b82f4c..0x5b82f56 -> pad 0x5b82f5e catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b82efb: jmp 0x5b82f0b
// asm:   0x5b82efd: jmp 0x5b82f0b
// asm:   0x5b82eff: jmp 0x5b82f0b
// asm:   0x5b82f01: jmp 0x5b82f0b
// asm:   0x5b82f03: jmp 0x5b82f0b
// asm:   0x5b82f05: jmp 0x5b82f0b
// asm:   0x5b82f07: jmp 0x5b82f0b
// asm:   0x5b82f09: jmp 0x5b82f0b
// asm:   0x5b82f0b: mov rbx, rax
// asm:   0x5b82f0e: cmp edx, 1
// asm:   0x5b82f11: jne 0x5b82f4c
// asm:   0x5b82f13: mov rdi, rbx
// asm:   0x5b82f16: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b82f1b: mov rbx, qword ptr [rax]
// asm:   0x5b82f1e: mov qword ptr [rsp + 8], rbx
// asm:   0x5b82f23: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b82f28: lea rax, [rip + 0x170d009]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
// asm:   0x5b82f2f: mov rsi, qword ptr [rax]
// asm:   0x5b82f32: lea rdi, [rsp + 0x20]
// asm:   0x5b82f37: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b82f3c: test rbx, rbx
// asm:   0x5b82f3f: je 0x5b82ed3
// asm:   0x5b82f41: mov rdi, rbx
// asm:   0x5b82f44: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b82f49: mov rbx, rax
// asm:   0x5b82f4c: lea rdi, [rsp + 8]
// asm:   0x5b82f51: call 0x2fd7890  ; il2cpp_runtime_helper_02fd7890()
// asm:   0x5b82f56: mov rdi, rbx
// asm:   0x5b82f59: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b82f5e: mov rdi, rax
// asm:   0x5b82f61: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicEvaluator__AddCallbacks
               (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *instance,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  Il2CppObject *pIVar8;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar9;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_075473a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_718ff40
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_718ff48
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicMethodDefinitionAst_GetEnu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
    Il2CppMethodInitialized_075473a7 = '\x01';
  }
  pCVar3 = (__this->fields)._start;
  if ((pCVar3 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (instance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
    pIVar8 = (Il2CppObject *)
             (*(instance->klass->vtable)._6_unknown.methodPtr)
                       (instance,(instance->klass->vtable)._6_unknown.method);
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar4,pIVar8,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         );
      if ((pCVar9 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) &&
         (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar9->fields).Methods,
         pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        __this_00 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (pSVar4,(MethodInfo_4AAD0F0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Keys
                              );
        if (__this_00 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     local_60,__this_00,
                     (MethodInfo_511A520 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicMethodDefinitionAst_GetEnu
                    );
          local_48.fields._currentKey = local_50;
          local_48.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
          local_48.fields._index = local_60._8_4_;
          local_48.fields._version = local_60._12_4_;
          local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_60._8_8_ = &local_48;
          while( true ) {
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (&local_48,
                               (MethodInfo_4CE7080 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_718ff40
                              );
            pIVar8 = local_48.fields._currentKey;
            if (!bVar7) {
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        (&local_48,
                         (MethodInfo_4CE7070 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
                        );
              return;
            }
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                              (pSVar4,local_48.fields._currentKey,
                               (MethodInfo_4AAD6F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
                              );
            if (!bVar7) {
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (MethodInfo_395C910 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar4,pIVar8,(Il2CppObject *)__this_01,
                         (MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_Add
                        );
            }
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_02 = (System_Collections_Generic_List_object__o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar4,pIVar8,
                                   (MethodInfo_4AAD450 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
                                  );
            pMVar6 = MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Add;
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) break;
            piVar1 = &(__this_02->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_02->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) break;
            uVar2 = (__this_02->fields)._size;
            if (uVar2 < (uint)pSVar5->max_length) {
              (__this_02->fields)._size = uVar2 + 1;
              pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)instance;
              Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_02,(Il2CppObject *)instance,
                         (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$RemoveCallbacks
// il2cpp: void CustomLogic_CustomLogicEvaluator__RemoveCallbacks (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x5b832f0
// eh: try 0x5b83464..0x5b8351c -> pad 0x5b8352f (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b83547..0x5b8354c -> pad 0x5b8356d cleanup
// eh: try 0x5b83570..0x5b8357a -> pad 0x5b83582 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b83521: jmp 0x5b8352f
// asm:   0x5b83523: jmp 0x5b8352f
// asm:   0x5b83525: jmp 0x5b8352f
// asm:   0x5b83527: jmp 0x5b8352f
// asm:   0x5b83529: jmp 0x5b8352f
// asm:   0x5b8352b: jmp 0x5b8352f
// asm:   0x5b8352d: jmp 0x5b8352f
// asm:   0x5b8352f: mov rbx, rax
// asm:   0x5b83532: cmp edx, 1
// asm:   0x5b83535: jne 0x5b83570
// asm:   0x5b83537: mov rdi, rbx
// asm:   0x5b8353a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8353f: mov rbx, qword ptr [rax]
// asm:   0x5b83542: mov qword ptr [rsp + 8], rbx
// asm:   0x5b83547: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8354c: lea rax, [rip + 0x170c9e5]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
// asm:   0x5b83553: mov rsi, qword ptr [rax]
// asm:   0x5b83556: lea rdi, [rsp + 0x20]
// asm:   0x5b8355b: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b83560: test rbx, rbx
// asm:   0x5b83563: je 0x5b834fe
// asm:   0x5b83565: mov rdi, rbx
// asm:   0x5b83568: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8356d: mov rbx, rax
// asm:   0x5b83570: lea rdi, [rsp + 8]
// asm:   0x5b83575: call 0x2fd78c0  ; il2cpp_runtime_helper_02fd78c0()
// asm:   0x5b8357a: mov rdi, rbx
// asm:   0x5b8357d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b83582: mov rdi, rax
// asm:   0x5b83585: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicEvaluator__RemoveCallbacks
               (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *instance,
               MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  undefined1 auStack_60 [16];
  Il2CppObject *pIStack_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_48;
  
  if (Il2CppMethodInitialized_075473a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_718ff40
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_718ff48
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicMethodDefinitionAst_GetEnu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Remove);
    Il2CppMethodInitialized_075473a8 = '\x01';
  }
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (instance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    pIVar4 = (Il2CppObject *)
             (*(instance->klass->vtable)._6_unknown.methodPtr)
                       (instance,(instance->klass->vtable)._6_unknown.method);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,pIVar4,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         );
      if ((pCVar5 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar5->fields).Methods,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        __this_00 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (pSVar2,(MethodInfo_4AAD0F0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Keys
                              );
        if (__this_00 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     auStack_60,__this_00,
                     (MethodInfo_511A520 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicMethodDefinitionAst_GetEnu
                    );
          SStack_48.fields._currentKey = pIStack_50;
          SStack_48.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_60._0_8_;
          SStack_48.fields._index = auStack_60._8_4_;
          SStack_48.fields._version = auStack_60._12_4_;
          auStack_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          auStack_60._8_8_ = &SStack_48;
          while( true ) {
            do {
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                (&SStack_48,
                                 (MethodInfo_4CE7080 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio_718ff40
                                );
              pIVar4 = SStack_48.fields._currentKey;
              if (!bVar3) {
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          (&SStack_48,
                           (MethodInfo_4CE7070 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicMethodDefinitio
                          );
                return;
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar2,SStack_48.fields._currentKey,
                                 (MethodInfo_4AAD6F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
                                );
            } while (!bVar3);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_01 = (System_Collections_Generic_List_object__o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar2,pIVar4,
                                   (MethodInfo_4AAD450 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
                                  );
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
            bVar3 = System_Collections_Generic_List_object___Contains
                              (__this_01,(Il2CppObject *)instance,
                               (MethodInfo_395D6D0 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Contains);
            if (bVar3) {
              System_Collections_Generic_List_object___Remove
                        (__this_01,(Il2CppObject *)instance,
                         (MethodInfo_395ED70 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Remove);
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$OnTick
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnTick (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b7b690

void CustomLogic_CustomLogicEvaluator__OnTick(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  float fVar1;
  MethodInfo *in_RCX;
  float fVar2;
  
  if (Il2CppMethodInitialized_075473a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OnTick");
    Il2CppMethodInitialized_075473a9 = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnTick",(System_Object_array *)0x0,in_RCX);
  fVar1 = (__this->fields).CurrentTime;
  fVar2 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields).CurrentTime = fVar2 + fVar1;
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnFrame
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnFrame (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b7ba20

void CustomLogic_CustomLogicEvaluator__OnFrame(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075473aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OnFrame");
    Il2CppMethodInitialized_075473aa = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnFrame",(System_Object_array *)0x0,in_RCX);
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnLateFrame
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnLateFrame (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b7bb50

void CustomLogic_CustomLogicEvaluator__OnLateFrame
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075473ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OnLateFrame");
    Il2CppMethodInitialized_075473ab = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this,"OnLateFrame",(System_Object_array *)0x0,in_RCX);
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnButtonClick
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnButtonClick (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5b83590

void CustomLogic_CustomLogicEvaluator__OnButtonClick
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075473ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Unity_VisualScripting_ArrayPool_object);
    il2cpp_codegen_initialize_runtime_metadata(&"OnButtonClick");
    Il2CppMethodInitialized_075473ac = '\x01';
  }
  if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
  }
  parameters = Unity_VisualScripting_ArrayPool_object___New
                         (1,(MethodInfo_4CBAE90 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (name != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = (Il2CppObject *)name;
  Il2CppCodeGenWriteBarrier(parameters->m_Items);
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks(__this,"OnButtonClick",parameters,in_RCX)
  ;
  Unity_VisualScripting_ArrayPool_object___Free
            (parameters,(MethodInfo_4CBB5B0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnPlayerSpawn
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnPlayerSpawn (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* player, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5b83690

void CustomLogic_CustomLogicEvaluator__OnPlayerSpawn
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *player,
               Characters_BaseCharacter_o *character,MethodInfo *method)

{
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_075473ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnPlayerSpawn");
    Il2CppMethodInitialized_075473ad = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)player);
  }
  else {
    obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)player);
  }
  if (obj == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    return;
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pIVar1 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)__this_00,(((parameters->obj).klass)->_1).element_class),
     pIVar1 == (Il2CppObject *)0x0)) {
label_05b837f9:
    pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_05b837f9;
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                (__this,"OnPlayerSpawn",parameters,method);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterSpawn
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterSpawn (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5b83810

void CustomLogic_CustomLogicEvaluator__OnCharacterSpawn
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  MethodInfo *in_RCX;
  Characters_BaseCharacter_o *pCVar3;
  
  pCVar3 = character;
  if (Il2CppMethodInitialized_075473ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCharacterSpawn");
    Il2CppMethodInitialized_075473ae = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)pCVar3);
  }
  else {
    obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)pCVar3);
  }
  if (obj == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    return;
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
  if (pIVar2 == (Il2CppObject *)0x0) {
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = (Il2CppObject *)obj;
  Il2CppCodeGenWriteBarrier(parameters->m_Items);
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks(__this,"OnCharacterSpawn",parameters,in_RCX)
  ;
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterReloaded
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterReloaded (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5b83940

void CustomLogic_CustomLogicEvaluator__OnCharacterReloaded
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  MethodInfo *in_RCX;
  Characters_BaseCharacter_o *pCVar3;
  
  pCVar3 = character;
  if (Il2CppMethodInitialized_075473af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCharacterReloaded");
    Il2CppMethodInitialized_075473af = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)pCVar3);
  }
  else {
    obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)pCVar3);
  }
  if (obj == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    return;
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
  if (pIVar2 == (Il2CppObject *)0x0) {
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = (Il2CppObject *)obj;
  Il2CppCodeGenWriteBarrier(parameters->m_Items);
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks(__this,"OnCharacterReloaded",parameters,in_RCX)
  ;
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterDie
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterDie (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* victim, Characters_BaseCharacter_o* killer, System_String_o* killerName, const MethodInfo* method);
// 0x5b83a70

void CustomLogic_CustomLogicEvaluator__OnCharacterDie
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *victim,
               Characters_BaseCharacter_o *killer,System_String_o *killerName,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  CustomLogic_CustomLogicCharacterBuiltin_o *obj_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *method_01;
  
  method_00 = (MethodInfo *)killerName;
  method_01 = victim;
  if (Il2CppMethodInitialized_075473b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCharacterDie");
    Il2CppMethodInitialized_075473b0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(victim,(MethodInfo *)method_01);
  obj_00 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(killer,(MethodInfo *)method_01);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (obj != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_05b83bc5;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (obj_00 != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj_00,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) goto label_05b83bc5;
    }
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = (Il2CppObject *)obj_00;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      if (killerName != (System_String_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)killerName,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
label_05b83bc5:
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = (Il2CppObject *)killerName;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
        CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                  (__this,"OnCharacterDie",parameters,method_00);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicEvaluator$$OnCharacterDamaged
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnCharacterDamaged (CustomLogic_CustomLogicEvaluator_o* __this, Characters_BaseCharacter_o* victim, Characters_BaseCharacter_o* killer, System_String_o* killerName, int32_t damage, const MethodInfo* method);
// 0x5b83be0

void CustomLogic_CustomLogicEvaluator__OnCharacterDamaged
               (CustomLogic_CustomLogicEvaluator_o *__this,Characters_BaseCharacter_o *victim,
               Characters_BaseCharacter_o *killer,System_String_o *killerName,int32_t damage,
               MethodInfo *method)

{
  undefined8 in_RAX;
  CustomLogic_CustomLogicCharacterBuiltin_o *obj;
  CustomLogic_CustomLogicCharacterBuiltin_o *obj_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *method_01;
  undefined8 uStack_38;
  
  method_00 = (MethodInfo *)killerName;
  method_01 = victim;
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_075473b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCharacterDamaged");
    Il2CppMethodInitialized_075473b1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  obj = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(victim,(MethodInfo *)method_01);
  obj_00 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(killer,(MethodInfo *)method_01);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (obj != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_05b83da3;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (obj_00 != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj_00,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) goto label_05b83da3;
    }
    if ((parameters->max_length & 0xfffffffe) == 0) goto label_05b83d9e;
    parameters->m_Items[1] = (Il2CppObject *)obj_00;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
    if (killerName != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)killerName,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) goto label_05b83da3;
    }
    if (2 < (uint)parameters->max_length) {
      parameters->m_Items[2] = (Il2CppObject *)killerName;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
      uStack_38 = CONCAT44(damage,(undefined4)uStack_38);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_38 + 4));
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
label_05b83da3:
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if ((parameters->max_length & 0xfffffffc) != 0) {
        parameters->m_Items[3] = pIVar1;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
        CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
                  (__this,"OnCharacterDamaged",parameters,method_00);
        return;
      }
    }
  }
label_05b83d9e:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicEvaluator$$OnChatInput
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__OnChatInput (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* message, const MethodInfo* method);
// 0x5b83dc0
// eh: try 0x5b84053..0x5b841ca -> pad 0x5b841f5 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b8420d..0x5b84212 -> pad 0x5b84242 cleanup
// eh: try 0x5b84245..0x5b8424f -> pad 0x5b84257 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b841e3: jmp 0x5b841f5
// asm:   0x5b841e5: jmp 0x5b841f5
// asm:   0x5b841e7: jmp 0x5b841f5
// asm:   0x5b841e9: jmp 0x5b841f5
// asm:   0x5b841eb: jmp 0x5b841f5
// asm:   0x5b841ed: jmp 0x5b841f5
// asm:   0x5b841ef: jmp 0x5b841f5
// asm:   0x5b841f1: jmp 0x5b841f5
// asm:   0x5b841f3: jmp 0x5b841f5
// asm:   0x5b841f5: mov rbx, rax
// asm:   0x5b841f8: cmp edx, 1
// asm:   0x5b841fb: jne 0x5b84245
// asm:   0x5b841fd: mov rdi, rbx
// asm:   0x5b84200: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b84205: mov rbx, qword ptr [rax]
// asm:   0x5b84208: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5b8420d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b84212: lea rax, [rip + 0x170bcef]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x5b84219: mov rsi, qword ptr [rax]
// asm:   0x5b8421c: lea rdi, [rsp + 0x30]
// asm:   0x5b84221: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5b84226: test rbx, rbx
// asm:   0x5b84229: jne 0x5b8423a
// asm:   0x5b8422b: xor r14d, r14d
// asm:   0x5b8422e: xor ebx, ebx
// asm:   0x5b84230: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5b84235: jmp 0x5b84193
// asm:   0x5b8423a: mov rdi, rbx
// asm:   0x5b8423d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b84242: mov rbx, rax
// asm:   0x5b84245: lea rdi, [rsp + 0x18]
// asm:   0x5b8424a: call 0x2fd78f0  ; il2cpp_runtime_helper_02fd78f0()
// asm:   0x5b8424f: mov rdi, rbx
// asm:   0x5b84252: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b84257: mov rdi, rax
// asm:   0x5b8425a: call 0x2ab61e0  ; __clang_call_terminate()

Il2CppObject *
CustomLogic_CustomLogicEvaluator__OnChatInput
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *message,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  System_Object_array *parameterValues;
  char *pcVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Il2CppObject *pIVar6;
  MethodInfo **parameterValues_00;
  int iVar7;
  MethodInfo *in_R9;
  undefined1 local_69;
  Il2CppObject *local_68;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicClassInstance_o *local_50;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_075473b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff18
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    il2cpp_codegen_initialize_runtime_metadata(&"OnChatInput");
    Il2CppMethodInitialized_075473b2 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  local_60[0] = 1;
  pIVar3 = il2cpp_vm_Object_Box((Il2CppClass *)g_data_075566f0,local_60);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return pIVar3;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b841ca;
  pCVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar1,(Il2CppObject *)"Main",
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                     );
  bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                    (__this_00,pCVar4,"OnChatInput",(MethodInfo *)&"OnChatInput");
  if (bVar2) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b841ca;
    pCVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)"Main",
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                       );
    parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameterValues == (System_Object_array *)0x0) goto label_05b841ca;
    if ((message != (System_String_o *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)message,(((parameterValues->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,pCVar4,"OnChatInput",parameterValues,0,in_R9);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)0x0;
    }
    else if (((System_Object_array *)pIVar3->klass == g_data_075566f0) &&
            (pcVar5 = il2cpp_vm_Object_Unbox(pIVar3), *pcVar5 == '\0')) {
      local_60._0_8_ = local_60._0_8_ & 0xffffffffffffff00;
      pIVar3 = il2cpp_vm_Object_Box((Il2CppClass *)g_data_075566f0,local_60);
      return pIVar3;
    }
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (local_68 = pIVar3,
     __this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                           (pSVar1,(MethodInfo_4AAD2A0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                           ),
     __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    parameterValues_00 =
         &
         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
    ;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
               __this_01,
               (MethodInfo_43F93D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    local_48.fields._currentValue = (Il2CppObject *)local_50;
    local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_60._8_8_ = &local_48;
    do {
      do {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&local_48,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
                          );
        pIVar3 = local_48.fields._currentValue;
        if (!bVar2) {
          iVar7 = 3;
          pIVar6 = (Il2CppObject *)0x0;
          pIVar3 = local_68;
          goto label_05b8417f;
        }
        if ((CustomLogic_CustomLogicClassInstance_o *)local_48.fields._currentValue ==
            (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (*(((CustomLogic_CustomLogicClassInstance_c *)(local_48.fields._currentValue)->klass)->vtable)
                  ._4_get_Enabled.methodPtr)
                          (local_48.fields._currentValue,
                           (((CustomLogic_CustomLogicClassInstance_c *)(local_48.fields._currentValue)->klass)
                           ->vtable)._4_get_Enabled.method);
      } while ((!bVar2) ||
              (bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                                 (__this_00,(CustomLogic_CustomLogicClassInstance_o *)pIVar3,
                                  "OnChatInput",(MethodInfo *)parameterValues_00), !bVar2));
      parameterValues_00 = (MethodInfo **)SZArrayNew(TypeInfo_object_array,1);
      if ((System_Object_array *)parameterValues_00 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((message != (System_String_o *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)message,
                              (((((System_Object_array *)parameterValues_00)->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)((System_Object_array *)parameterValues_00)->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      ((System_Object_array *)parameterValues_00)->m_Items[0] = (Il2CppObject *)message;
      Il2CppCodeGenWriteBarrier(((System_Object_array *)parameterValues_00)->m_Items);
      pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (__this_00,(CustomLogic_CustomLogicClassInstance_o *)pIVar3,"OnChatInput",
                          (System_Object_array *)parameterValues_00,0,in_R9);
    } while (((pIVar3 == (Il2CppObject *)0x0) ||
             (parameterValues_00 = (MethodInfo **)pIVar3->klass,
             (System_Object_array *)parameterValues_00 != g_data_075566f0)) ||
            (pcVar5 = il2cpp_vm_Object_Unbox(pIVar3), pIVar3 = local_68, *pcVar5 != '\0'));
    local_69 = 0;
    pIVar6 = il2cpp_vm_Object_Box((Il2CppClass *)g_data_075566f0,&local_69);
    iVar7 = 6;
label_05b8417f:
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (&local_48,
               (MethodInfo_4CE71F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    if (iVar7 == 6) {
      return pIVar6;
    }
    return pIVar3;
  }
label_05b841ca:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$OnPlayerJoin
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnPlayerJoin (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5b84260

void CustomLogic_CustomLogicEvaluator__OnPlayerJoin
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicUIBuiltin_o *__this_02;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075473b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnPlayerJoin");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    Il2CppMethodInitialized_075473b3 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters != (System_Object_array *)0x0) {
    if (__this_01 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)__this_01,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this,"OnPlayerJoin",parameters,in_RCX);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = (CustomLogic_CustomLogicUIBuiltin_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)"UI",
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                            );
      if (__this_02 != (CustomLogic_CustomLogicUIBuiltin_o *)0x0) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).typeHierarchyDepth;
        if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_02);
        }
        CustomLogic_CustomLogicUIBuiltin__OnPlayerJoin(__this_02,player,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$OnPlayerLeave
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnPlayerLeave (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5b843e0

void CustomLogic_CustomLogicEvaluator__OnPlayerLeave
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075473b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnPlayerLeave");
    Il2CppMethodInitialized_075473b4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (__this_00 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)__this_00,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = (Il2CppObject *)__this_00;
  Il2CppCodeGenWriteBarrier(parameters->m_Items);
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks(__this,"OnPlayerLeave",parameters,in_RCX)
  ;
  return;
}


// CustomLogic.CustomLogicEvaluator$$OnNetworkMessage
// il2cpp: void CustomLogic_CustomLogicEvaluator__OnNetworkMessage (CustomLogic_CustomLogicEvaluator_o* __this, Photon_Realtime_Player_o* sender, System_String_o* message, double sentServerTimestamp, const MethodInfo* method);
// 0x5b844c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b84667: jmp 0x5b846ec

void CustomLogic_CustomLogicEvaluator__OnNetworkMessage
               (CustomLogic_CustomLogicEvaluator_o *__this,Photon_Realtime_Player_o *sender,
               System_String_o *message,double sentServerTimestamp,MethodInfo *method)

{
  System_Object_array *pSVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  CustomLogic_CustomLogicClassInstance_o *pCVar6;
  MethodInfo *in_R9;
  double local_30;
  
  if (Il2CppMethodInitialized_075473b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkMessage");
    Il2CppMethodInitialized_075473b5 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,sender,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._networkCallback;
  if (pSVar1 == (System_Object_array *)0x0) goto label_05b846fa;
  if ((__this_01 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)__this_01,(((pSVar1->obj).klass)->_1).element_class),
     pIVar4 == (Il2CppObject *)0x0)) {
label_05b84704:
    pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
  }
  if ((int)pSVar1->max_length == 0) {
label_05b846ff:
    ThrowIndexOutOfRangeException();
  }
  pSVar1->m_Items[0] = (Il2CppObject *)__this_01;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
  pSVar1 = (__this->fields)._networkCallback;
  if (pSVar1 == (System_Object_array *)0x0) goto label_05b846fa;
  if ((message != (System_String_o *)0x0) &&
     (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((pSVar1->obj).klass)->_1).element_class),
     pIVar4 == (Il2CppObject *)0x0)) goto label_05b84704;
  if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05b846ff;
  pSVar1->m_Items[1] = (Il2CppObject *)message;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
  pSVar1 = (__this->fields)._networkCallback;
  local_30 = sentServerTimestamp;
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556748,&local_30);
  if (pSVar1 == (System_Object_array *)0x0) goto label_05b846fa;
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar1->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) goto label_05b84704;
  if ((uint)pSVar1->max_length < 3) goto label_05b846ff;
  pSVar1->m_Items[2] = pIVar4;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05b846fa:
      ThrowNullReferenceException();
    }
    pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)"Main",
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                       );
    bVar3 = CustomLogic_CustomLogicEvaluator__HasMethod(__this_00,pCVar6,"OnNetworkMessage",method);
    if (bVar3) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b846fa;
      pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)"Main",
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                         );
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this_00,pCVar6,"OnNetworkMessage",(__this->fields)._networkCallback,0,in_R9);
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$GetCharacterBuiltin
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin (Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5b6aaa0
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6acb2: mov rdi, rbx
// asm:   0x5b6acb5: mov rsi, r14
// asm:   0x5b6acb8: xor edx, edx
// asm:   0x5b6acba: call 0x5a184e0  ; CustomLogic_CustomLogicHumanBuiltin___ctor()
// asm:   0x5b6acbf: jmp 0x5b6ac4b
// asm:   0x5b6acf6: mov rdi, rbx
// asm:   0x5b6acf9: mov rsi, r14
// asm:   0x5b6acfc: xor edx, edx
// asm:   0x5b6acfe: call 0x5a43c00  ; CustomLogic_CustomLogicTitanBuiltin___ctor()
// asm:   0x5b6ad03: jmp 0x5b6ac4b
// asm:   0x5b6ad08: lea rax, [rip + 0x170c479]  ; TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin
// asm:   0x5b6ad0f: mov rdi, qword ptr [rax]
// asm:   0x5b6ad12: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6ad17: mov rbx, rax
// asm:   0x5b6ad1a: mov rsi, qword ptr [r15]
// asm:   0x5b6ad1d: mov rdi, r14
// asm:   0x5b6ad20: call 0x2ca5e10  ; il2cpp_codegen_is_inst_class()
// asm:   0x5b6ad25: mov rdi, rbx
// asm:   0x5b6ad28: mov rsi, rax
// asm:   0x5b6ad2b: xor edx, edx
// asm:   0x5b6ad2d: call 0x5a505b0  ; CustomLogic_CustomLogicWallColossalBuiltin___ctor()
// asm:   0x5b6ad32: jmp 0x5b6ac4b
// asm:   0x5b6ad37: lea rax, [rip + 0x170c2fa]  ; TypeInfo_CustomLogic_CustomLogicShifterBuiltin
// asm:   0x5b6ad3e: mov rdi, qword ptr [rax]
// asm:   0x5b6ad41: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6ad46: mov rbx, rax
// asm:   0x5b6ad49: mov rsi, qword ptr [r15]
// asm:   0x5b6ad4c: mov rdi, r14
// asm:   0x5b6ad4f: call 0x2ca5e10  ; il2cpp_codegen_is_inst_class()
// asm:   0x5b6ad54: mov rdi, rbx
// asm:   0x5b6ad57: mov rsi, rax
// asm:   0x5b6ad5a: xor edx, edx
// asm:   0x5b6ad5c: call 0x5a3e860  ; CustomLogic_CustomLogicShifterBuiltin___ctor()
// asm:   0x5b6ad61: jmp 0x5b6ac4b

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
          (Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_c *pCVar3;
  bool bVar4;
  CustomLogic_CustomLogicHorseBuiltin_o *__this;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_00;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_01;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_02;
  Characters_WallColossalShifter_o *shifter;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_03;
  Characters_BaseShifter_o *shifter_00;
  
  if (Il2CppMethodInitialized_075473b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_075473b6 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
    return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
  }
  pCVar3 = character->klass;
  bVar1 = (pCVar3->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
  if ((bVar2 <= bVar1) &&
     ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseBuiltin);
    CustomLogic_CustomLogicHorseBuiltin___ctor(__this,(Characters_Horse_o *)character,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this;
  }
  bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      bVar2 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
      if ((bVar2 <= bVar1) &&
         ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin);
        shifter = (Characters_WallColossalShifter_o *)
                  il2cpp_codegen_is_inst_class
                            ((Il2CppObject *)character,(Il2CppClass *)TypeInfo_Characters_WallColossalShifter)
        ;
        CustomLogic_CustomLogicWallColossalBuiltin___ctor(__this_02,shifter,(MethodInfo *)0x0);
        return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_02;
      }
      bVar2 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if (bVar1 < bVar2) {
        return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
      }
      if ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseShifter) {
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin);
        shifter_00 = (Characters_BaseShifter_o *)
                     il2cpp_codegen_is_inst_class
                               ((Il2CppObject *)character,(Il2CppClass *)TypeInfo_Characters_BaseShifter);
        CustomLogic_CustomLogicShifterBuiltin___ctor(__this_03,shifter_00,(MethodInfo *)0x0);
        return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_03;
      }
      return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin);
    bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (character->klass->_2).typeHierarchyDepth) &&
       ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      CustomLogic_CustomLogicTitanBuiltin___ctor
                (__this_01,(Characters_BasicTitan_o *)character,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_01;
    }
  }
  else {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (character->klass->_2).typeHierarchyDepth) &&
       ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      CustomLogic_CustomLogicHumanBuiltin___ctor(__this_00,(Characters_Human_o *)character,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCharacterBuiltin_o *)__this_00;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(character);
}


// CustomLogic.CustomLogicEvaluator$$OnSecond
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicEvaluator__OnSecond (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b830f0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicEvaluator__OnSecond(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_075473b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18);
    Il2CppMethodInitialized_075473b7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18);
  CustomLogic_CustomLogicEvaluator__OnSecond_d__18___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator__OnSecond_d__18_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicEvaluator$$Init
// il2cpp: void CustomLogic_CustomLogicEvaluator__Init (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b818d0
// eh: try 0x5b81d04..0x5b82873 -> pad 0x5b82b17 (+75 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b82879..0x5b82883 -> pad 0x5b82c1a catch (...) [compiler noexcept guard]
// eh: try 0x5b829a9..0x5b829ae -> pad 0x5b829d0 cleanup
// eh: try 0x5b829d3..0x5b829e0 -> pad 0x5b82c1a catch (...) [compiler noexcept guard]
// eh: try 0x5b82a05..0x5b82a0a -> pad 0x5b82a2f cleanup
// eh: try 0x5b82a32..0x5b82a3c -> pad 0x5b82c1a catch (...) [compiler noexcept guard]
// eh: try 0x5b82a59..0x5b82a5e -> pad 0x5b82a88 cleanup
// eh: try 0x5b82a8b..0x5b82a95 -> pad 0x5b82c1a catch (...) [compiler noexcept guard]
// eh: try 0x5b82adb..0x5b82ae0 -> pad 0x5b82b05 cleanup
// eh: try 0x5b82b08..0x5b82b12 -> pad 0x5b82c1a catch (...) [compiler noexcept guard]
// eh: try 0x5b82b2f..0x5b82b34 -> pad 0x5b82b59 cleanup
// eh: try 0x5b82b5c..0x5b82b66 -> pad 0x5b82c1a catch (...) [compiler noexcept guard]
// eh: try 0x5b82b83..0x5b82b88 -> pad 0x5b82baf cleanup
// eh: try 0x5b82bb2..0x5b82bbc -> pad 0x5b82c1a catch (...) [compiler noexcept guard]
// eh: try 0x5b82bd6..0x5b82bdb -> pad 0x5b82c05 cleanup
// eh: try 0x5b82c08..0x5b82c12 -> pad 0x5b82c1a catch (...) [compiler noexcept guard]
// asm: 249 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b822ce: nop 
// asm:   0x5b823d5: jmp 0x5b82398
// asm:   0x5b82548: jmp 0x5b82508
// asm:   0x5b82580: test r15d, r15d
// asm:   0x5b82583: je 0x5b82470
// asm:   0x5b82589: jmp 0x5b827ac
// asm:   0x5b8258e: jmp 0x5b82590
// asm:   0x5b82590: mov r15, rdx
// asm:   0x5b82593: mov r13, rax
// asm:   0x5b82596: cmp r15d, 1
// asm:   0x5b8259a: jne 0x5b82879
// asm:   0x5b825a0: mov rdi, r13
// asm:   0x5b825a3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b825a8: mov rbx, qword ptr [rax]
// asm:   0x5b825ab: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5b825b0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b825b5: xor r15d, r15d
// asm:   0x5b825b8: mov r13b, 1
// asm:   0x5b825bb: jmp 0x5b8255b
// asm:   0x5b82684: jmp 0x5b82648
// asm:   0x5b827ac: lea rax, [rip + 0x170d4e5]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
// asm:   0x5b827b3: mov rsi, qword ptr [rax]
// asm:   0x5b827b6: lea rdi, [rsp + 0x60]
// asm:   0x5b827bb: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5b827c0: test r13b, r13b
// asm:   0x5b827c3: mov rbx, qword ptr [rsp + 8]
// asm:   0x5b827c8: jne 0x5b825d1
// asm:   0x5b827ce: jmp 0x5b8279a
// asm:   0x5b827df: mov rdi, rbx
// asm:   0x5b827e2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b82873: mov r15, rdx
// asm:   0x5b82876: mov r13, rax
// asm:   0x5b82879: lea rdi, [rsp + 0x10]
// asm:   0x5b8287e: call 0x2fd79e0  ; il2cpp_runtime_helper_02fd79e0()
// asm:   0x5b82883: jmp 0x5b8298b
// asm:   0x5b82888: jmp 0x5b82ac3
// asm:   0x5b8288d: jmp 0x5b82a9f
// asm:   0x5b82892: jmp 0x5b82ac3
// asm:   0x5b82897: jmp 0x5b82ac3
// asm:   0x5b8289c: jmp 0x5b82ac3
// asm:   0x5b828a1: jmp 0x5b82a9f
// asm:   0x5b828a6: jmp 0x5b82a9f
// asm:   0x5b828ab: jmp 0x5b82ac3
// asm:   0x5b828b0: jmp 0x5b82ac3
// asm:   0x5b828b5: jmp 0x5b82ac3
// asm:   0x5b828ba: jmp 0x5b82ac3
// asm:   0x5b828bf: jmp 0x5b82ac3
// asm:   0x5b828c4: jmp 0x5b82ac3
// asm:   0x5b828c9: jmp 0x5b82a9f
// asm:   0x5b828ce: jmp 0x5b82ac3
// asm:   0x5b828d3: jmp 0x5b82a9f
// asm:   0x5b828d8: jmp 0x5b82ac3
// asm:   0x5b828dd: jmp 0x5b82a9f
// asm:   0x5b828e2: jmp 0x5b82a9f
// asm:   0x5b828e7: jmp 0x5b82a9f
// asm:   0x5b828ec: jmp 0x5b82a9f
// asm:   0x5b828f1: jmp 0x5b82ac3
// asm:   0x5b828f6: jmp 0x5b82ac3
// asm:   0x5b828fb: jmp 0x5b82a9f
// asm:   0x5b82900: jmp 0x5b82ac3
// asm:   0x5b82905: jmp 0x5b82a9f
// asm:   0x5b8290a: jmp 0x5b82a9f
// asm:   0x5b8290f: jmp 0x5b82ac3
// asm:   0x5b82914: jmp 0x5b82ac3
// asm:   0x5b82919: jmp 0x5b82a9f
// asm:   0x5b8291e: jmp 0x5b82a9f
// asm:   0x5b82923: jmp 0x5b82a9f
// asm:   0x5b82928: jmp 0x5b82a9f
// asm:   0x5b8292d: jmp 0x5b82a9f
// asm:   0x5b82932: jmp 0x5b82ac3
// asm:   0x5b82937: jmp 0x5b82ac3
// asm:   0x5b8293c: jmp 0x5b829ed
// asm:   0x5b82941: jmp 0x5b82b17
// asm:   0x5b82946: jmp 0x5b82b17
// asm:   0x5b8294b: jmp 0x5b82ac3
// asm:   0x5b82950: jmp 0x5b82a9f
// asm:   0x5b82955: jmp 0x5b82a9f
// asm:   0x5b8295a: jmp 0x5b82a9f
// asm:   0x5b8295f: jmp 0x5b82ac3
// asm:   0x5b82964: jmp 0x5b82a9f
// asm:   0x5b82969: jmp 0x5b82a9f
// asm:   0x5b8296e: jmp 0x5b82ac3
// asm:   0x5b82973: jmp 0x5b8297b
// asm:   0x5b82975: jmp 0x5b82985
// asm:   0x5b82977: jmp 0x5b82985
// asm:   0x5b82979: jmp 0x5b82985
// asm:   0x5b8297b: mov r15, rdx
// asm:   0x5b8297e: mov r13, rax
// asm:   0x5b82981: jmp 0x5b82990
// asm:   0x5b82983: jmp 0x5b82985
// asm:   0x5b82985: mov r15, rdx
// asm:   0x5b82988: mov r13, rax
// asm:   0x5b8298b: mov rbx, qword ptr [rsp + 8]
// asm:   0x5b82990: cmp r15d, 1
// asm:   0x5b82994: jne 0x5b829d3
// asm:   0x5b82996: mov rdi, r13
// asm:   0x5b82999: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8299e: mov rbp, qword ptr [rax]
// asm:   0x5b829a1: mov qword ptr [rsp + 0x128], rbp
// asm:   0x5b829a9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b829ae: lea rax, [rip + 0x170d2e3]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
// asm:   0x5b829b5: mov rsi, qword ptr [rax]
// asm:   0x5b829b8: lea rdi, [rsp + 0x60]
// asm:   0x5b829bd: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5b829c2: test rbp, rbp
// asm:   0x5b829c5: je 0x5b825d1
// asm:   0x5b829cb: jmp 0x5b82a80
// asm:   0x5b829d0: mov r13, rax
// asm:   0x5b829d3: lea rdi, [rsp + 0x128]
// asm:   0x5b829db: call 0x2fd7a10  ; il2cpp_runtime_helper_02fd7a10()
// asm:   0x5b829e0: jmp 0x5b82c12
// asm:   0x5b829e5: jmp 0x5b82a41
// asm:   0x5b829e7: jmp 0x5b829ed
// asm:   0x5b829e9: jmp 0x5b829ed
// asm:   0x5b829eb: jmp 0x5b829ed
// asm:   0x5b829ed: mov r13, rax
// asm:   0x5b829f0: cmp edx, 1
// asm:   0x5b829f3: jne 0x5b82a32
// asm:   0x5b829f5: mov rdi, r13
// asm:   0x5b829f8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b829fd: mov rbx, qword ptr [rax]
// asm:   0x5b82a00: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5b82a05: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b82a0a: lea rax, [rip + 0x170cf0f]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
// asm:   0x5b82a11: mov rsi, qword ptr [rax]
// asm:   0x5b82a14: lea rdi, [rsp + 0xe0]
// asm:   0x5b82a1c: call 0x4da27d0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose()
// asm:   0x5b82a21: test rbx, rbx
// asm:   0x5b82a24: je 0x5b8279a
// asm:   0x5b82a2a: jmp 0x5b82bfd
// asm:   0x5b82a2f: mov r13, rax
// asm:   0x5b82a32: lea rdi, [rsp + 0x10]
// asm:   0x5b82a37: call 0x2fd7a70  ; il2cpp_runtime_helper_02fd7a70()
// asm:   0x5b82a3c: jmp 0x5b82c12
// asm:   0x5b82a41: mov r13, rax
// asm:   0x5b82a44: cmp edx, 1
// asm:   0x5b82a47: jne 0x5b82a8b
// asm:   0x5b82a49: mov rdi, r13
// asm:   0x5b82a4c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b82a51: mov rbp, qword ptr [rax]
// asm:   0x5b82a54: mov qword ptr [rsp + 0x10], rbp
// asm:   0x5b82a59: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b82a5e: lea rax, [rip + 0x170d4a3]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x5b82a65: mov rsi, qword ptr [rax]
// asm:   0x5b82a68: lea rdi, [rsp + 0x40]
// asm:   0x5b82a6d: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5b82a72: test rbp, rbp
// asm:   0x5b82a75: mov rbx, qword ptr [rsp + 8]
// asm:   0x5b82a7a: je 0x5b8269a
// asm:   0x5b82a80: mov rdi, rbp
// asm:   0x5b82a83: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b82a88: mov r13, rax
// asm:   0x5b82a8b: lea rdi, [rsp + 0x10]
// asm:   0x5b82a90: call 0x2fd7a40  ; il2cpp_runtime_helper_02fd7a40()
// asm:   0x5b82a95: jmp 0x5b82c12
// asm:   0x5b82a9a: jmp 0x5b82bbe
// asm:   0x5b82a9f: mov r13, rax
// asm:   0x5b82aa2: mov r15, qword ptr [rsp + 8]
// asm:   0x5b82aa7: jmp 0x5b82ac6
// asm:   0x5b82aa9: jmp 0x5b82ac3
// asm:   0x5b82aab: mov r13, rax
// asm:   0x5b82aae: mov r15, qword ptr [rsp + 8]
// asm:   0x5b82ab3: jmp 0x5b82b1a
// asm:   0x5b82ab5: jmp 0x5b82b17
// asm:   0x5b82ab7: jmp 0x5b82b17
// asm:   0x5b82ab9: jmp 0x5b82b6b
// asm:   0x5b82abe: jmp 0x5b82b6b
// asm:   0x5b82ac3: mov r13, rax
// asm:   0x5b82ac6: cmp edx, 1
// asm:   0x5b82ac9: jne 0x5b82b08
// asm:   0x5b82acb: mov rdi, r13
// asm:   0x5b82ace: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b82ad3: mov rbx, qword ptr [rax]
// asm:   0x5b82ad6: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5b82adb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b82ae0: lea rax, [rip + 0x170d3f1]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
// asm:   0x5b82ae7: mov rsi, qword ptr [rax]
// asm:   0x5b82aea: lea rdi, [rsp + 0xa0]
// asm:   0x5b82af2: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b82af7: test rbx, rbx
// asm:   0x5b82afa: je 0x5b82254
// asm:   0x5b82b00: jmp 0x5b82bfd
// asm:   0x5b82b05: mov r13, rax
// asm:   0x5b82b08: lea rdi, [rsp + 0x10]
// asm:   0x5b82b0d: call 0x2fd7950  ; il2cpp_runtime_helper_02fd7950()
// asm:   0x5b82b12: jmp 0x5b82c12
// asm:   0x5b82b17: mov r13, rax
// asm:   0x5b82b1a: cmp edx, 1
// asm:   0x5b82b1d: jne 0x5b82b5c
// asm:   0x5b82b1f: mov rdi, r13
// asm:   0x5b82b22: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b82b27: mov rbx, qword ptr [rax]
// asm:   0x5b82b2a: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5b82b2f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b82b34: lea rax, [rip + 0x170bfa5]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x5b82b3b: mov rsi, qword ptr [rax]
// asm:   0x5b82b3e: lea rdi, [rsp + 0xc0]
// asm:   0x5b82b46: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5b82b4b: test rbx, rbx
// asm:   0x5b82b4e: je 0x5b81da1
// asm:   0x5b82b54: jmp 0x5b82bfd
// asm:   0x5b82b59: mov r13, rax
// asm:   0x5b82b5c: lea rdi, [rsp + 0x10]
// asm:   0x5b82b61: call 0x2fd7920  ; il2cpp_runtime_helper_02fd7920()
// asm:   0x5b82b66: jmp 0x5b82c12
// asm:   0x5b82b6b: mov r13, rax
// asm:   0x5b82b6e: cmp edx, 1
// asm:   0x5b82b71: jne 0x5b82bb2
// asm:   0x5b82b73: mov rdi, r13
// asm:   0x5b82b76: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b82b7b: mov rbx, qword ptr [rax]
// asm:   0x5b82b7e: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5b82b83: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b82b88: lea rax, [rip + 0x170d361]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
// asm:   0x5b82b8f: mov rsi, qword ptr [rax]
// asm:   0x5b82b92: lea rdi, [rsp + 0x80]
// asm:   0x5b82b9a: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b82b9f: test rbx, rbx
// asm:   0x5b82ba2: mov r15, qword ptr [rsp + 8]
// asm:   0x5b82ba7: je 0x5b82316
// asm:   0x5b82bad: jmp 0x5b82bfd
// asm:   0x5b82baf: mov r13, rax
// asm:   0x5b82bb2: lea rdi, [rsp + 0x10]
// asm:   0x5b82bb7: call 0x2fd7980  ; il2cpp_runtime_helper_02fd7980()
// asm:   0x5b82bbc: jmp 0x5b82c12
// asm:   0x5b82bbe: mov r13, rax
// asm:   0x5b82bc1: cmp edx, 1
// asm:   0x5b82bc4: jne 0x5b82c08
// asm:   0x5b82bc6: mov rdi, r13
// asm:   0x5b82bc9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b82bce: mov rbx, qword ptr [rax]
// asm:   0x5b82bd1: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5b82bd6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b82bdb: lea rax, [rip + 0x170d326]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
// asm:   0x5b82be2: mov rsi, qword ptr [rax]
// asm:   0x5b82be5: lea rdi, [rsp + 0x40]
// asm:   0x5b82bea: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5b82bef: test rbx, rbx
// asm:   0x5b82bf2: mov r15, qword ptr [rsp + 8]
// asm:   0x5b82bf7: je 0x5b823eb
// asm:   0x5b82bfd: mov rdi, rbx
// asm:   0x5b82c00: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b82c05: mov r13, rax
// asm:   0x5b82c08: lea rdi, [rsp + 0x10]
// asm:   0x5b82c0d: call 0x2fd79b0  ; il2cpp_runtime_helper_02fd79b0()
// asm:   0x5b82c12: mov rdi, r13
// asm:   0x5b82c15: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b82c1a: mov rdi, rax
// asm:   0x5b82c1d: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicEvaluator__Init(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Object_array *args;
  CustomLogic_CustomLogicStartAst_o *pCVar4;
  CustomLogic_CustomLogicToken_o *pCVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar7;
  System_Collections_Generic_Dictionary_int__object__o *pSVar8;
  bool bVar9;
  int32_t iVar10;
  CustomLogic_BuiltinClassInstance_o *value;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar11;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar12;
  int *piVar13;
  CustomLogic_CustomLogicClassInstance_o *pCVar14;
  System_Collections_Generic_Dictionary_CustomLogicSourceType__CustomLogicClassInstance__o *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar16;
  Map_MapObject_o *obj;
  MethodInfo **method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar17;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *in_R9;
  undefined1 local_158 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_148;
  System_Nullable_CustomLogicSourceType__Fields local_140;
  int32_t local_138;
  int32_t local_134;
  System_Nullable_CustomLogicSourceType__Fields local_130;
  undefined1 local_128 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_120;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_118;
  undefined1 local_108 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_100;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_f8;
  undefined1 local_e8 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_e0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_d8;
  undefined1 local_c8 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_b8;
  undefined1 local_a8 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_a0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_98;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_88;
  undefined1 local_68 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_60;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075473b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718ada8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adc0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_718fca0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_718f6b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_718f6c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_718fca8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassInstance_GetEnumerato
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_075473b8 = '\x01';
  }
  local_a8 = (undefined1  [8])0x0;
  pSStack_a0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8 = (undefined1  [8])0x0;
  pSStack_c0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_140.hasValue = false;
  local_140._1_3_ = 0;
  local_140.value = 0;
  local_134 = 0;
  local_130.hasValue = false;
  local_130._1_3_ = 0;
  local_130.value = 0;
  local_138 = 0;
  local_e8 = (undefined1  [8])0x0;
  pSStack_e0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_d8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128 = (undefined1  [8])0x0;
  pSStack_120 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_118 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_108 = (undefined1  [8])0x0;
  pSStack_100 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_f8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._currentKey = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar2,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Clear);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AddonToNetworkView;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (pSVar2,(MethodInfo_4AAD690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_Clear
                );
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->StaticTypeNames;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_158,pSVar3,
                   (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
        local_98 = local_148;
        local_a8 = (undefined1  [8])local_158._0_8_;
        pSStack_a0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     local_158._8_8_;
        local_158._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_158._8_8_ =
             (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_a8;
        while (bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a8,
                                  (MethodInfo_4C456D0 *)
                                  MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext),
              pSVar15 = local_98, bVar9) {
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          args = TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs;
          if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
          }
          value = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                            ((System_String_o *)pSVar15,args,(MethodInfo *)0x0);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar2,(Il2CppObject *)pSVar15,(Il2CppObject *)value,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                    );
        }
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a8,
                   (MethodInfo_4C456C0 *)
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
        pCVar4 = (__this->fields)._start;
        if (((pCVar4 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
            (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Classes,
            pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
           (pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                (pSVar2,(MethodInfo_4AAD0F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
                                ),
           pSVar11 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     local_158,pSVar11,
                     (MethodInfo_511A520 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
                    );
          local_b8 = local_148;
          local_c8 = (undefined1  [8])local_158._0_8_;
          pSStack_c0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_158._8_8_;
          local_158._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_158._8_8_ =
               (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_c8;
          while (bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                   ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                     *)local_c8,
                                    (MethodInfo_4CE7080 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee0
                                   ), pSVar15 = local_b8, bVar9) {
            bVar9 = System_String__op_Equality
                              ((System_String_o *)local_b8,"Main",(MethodInfo *)0x0);
            if (bVar9) {
              CustomLogic_CustomLogicEvaluator__CreateStaticClass(__this,(System_String_o *)pSVar15,method_01)
              ;
            }
            else {
              pCVar4 = (__this->fields)._start;
              if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Classes;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar2,(Il2CppObject *)pSVar15,
                                   (MethodInfo_4AAD450 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                                  );
              if (pCVar12 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar5 = (pCVar12->fields).Token;
              if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar6 = (pCVar5->fields).Value;
              if (pIVar6 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              piVar13 = il2cpp_vm_Object_Unbox(pIVar6);
              if (*piVar13 == 2) {
                local_140.hasValue = false;
                local_140._1_3_ = 0;
                local_140.value = 0;
                pCVar4 = (__this->fields)._start;
                if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar7 = (pCVar4->fields).ClassNamespaces;
                if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar9 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                   (Il2CppObject *)pSVar15,&local_134,
                                   (MethodInfo_4AA3530 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                                  );
                if (bVar9) {
                  System_Nullable_Int32Enum____ctor
                            ((System_Nullable_Int32Enum__o *)&local_140,local_134,
                             (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
                }
                if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
                }
                pCVar14 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                                    (__this,(System_String_o *)pSVar15,
                                     TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false
                                     ,(System_Nullable_CustomLogicSourceType__o)local_140,in_R9);
                if (pCVar14 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (pCVar14->fields)._Namespace_k__BackingField.fields = local_140;
                if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
                }
                pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                         TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->StaticTypeNames;
                if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)pSVar15,
                                   (MethodInfo_4FB3720 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                if (bVar9) {
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._namespacedStaticClasses;
                  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                    (pSVar2,(Il2CppObject *)pSVar15,
                                     (MethodInfo_4AAD6F0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718ada8
                                    );
                  if (!bVar9) {
                    local_48 = (__this->fields)._namespacedStaticClasses;
                    __this_00 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance
                                          );
                    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (MethodInfo_4A543B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_ctor
                              );
                    if (local_48 ==
                        (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
                         *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)local_48,
                               (Il2CppObject *)pSVar15,(Il2CppObject *)__this_00,
                               (MethodInfo_4AAD4C0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adc0
                              );
                  }
                  if (local_140.hasValue != false) {
                    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._namespacedStaticClasses;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        (pSVar2,(Il2CppObject *)pSVar15,
                                         (MethodInfo_4AAD450 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb0
                                        );
                    iVar10 = System_Nullable_Int32Enum___get_Value
                                       ((System_Nullable_Int32Enum__o *)&local_140,
                                        (MethodInfo_3CD4F80 *)
                                        MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
                    if (pSVar15 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                              (pSVar15,iVar10,(Il2CppObject *)pCVar14,
                               (MethodInfo_4A54FC0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_set_Item
                              );
                  }
                }
                else {
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._staticClasses;
                  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar2,(Il2CppObject *)pSVar15,(Il2CppObject *)pCVar14,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                            );
                }
              }
              else {
                pCVar4 = (__this->fields)._start;
                if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Classes;
                if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar2,(Il2CppObject *)pSVar15,
                                     (MethodInfo_4AAD450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                                    );
                if (pCVar12 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar5 = (pCVar12->fields).Token;
                if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar6 = (pCVar5->fields).Value;
                if (pIVar6 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
                  il2cpp_codegen_raise_invalid_cast_exception();
                }
                piVar13 = il2cpp_vm_Object_Unbox(pIVar6);
                if (*piVar13 == 3) {
                  local_130.hasValue = false;
                  local_130._1_3_ = 0;
                  local_130.value = 0;
                  pCVar4 = (__this->fields)._start;
                  if (pCVar4 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar7 = (pCVar4->fields).ClassNamespaces;
                  if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
                  {
                    ThrowNullReferenceException();
                  }
                  bVar9 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                     (Il2CppObject *)pSVar15,&local_138,
                                     (MethodInfo_4AA3530 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                                    );
                  if (bVar9) {
                    System_Nullable_Int32Enum____ctor
                              ((System_Nullable_Int32Enum__o *)&local_130,local_138,
                               (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
                  }
                  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
                  }
                  pCVar14 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                                      (__this,(System_String_o *)pSVar15,
                                       TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,
                                       false,(System_Nullable_CustomLogicSourceType__o)local_130,in_R9);
                  if (pCVar14 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  (pCVar14->fields)._Namespace_k__BackingField.fields = local_130;
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._addonClasses;
                  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar2,(Il2CppObject *)pSVar15,(Il2CppObject *)pCVar14,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item
                            );
                }
              }
            }
          }
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     local_c8,(MethodInfo_4CE7070 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
                    );
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
          if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                  (pSVar2,(MethodInfo_4AAD0F0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys
                                  ),
             pSVar11 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_158,pSVar11,
                       (MethodInfo_511A520 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassInstance_GetEnumerato
                      );
            local_d8 = local_148;
            local_e8 = (undefined1  [8])local_158._0_8_;
            pSStack_e0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_158._8_8_;
            local_158._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_158._8_8_ =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_e8;
            while (bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                     ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                       *)local_e8,
                                      (MethodInfo_4CE7080 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_M
                                     ), bVar9) {
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._staticClasses;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar2,(Il2CppObject *)local_d8,
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                        );
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_e8,(MethodInfo_4CE7070 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassInstance_D
                      );
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._staticClasses;
            if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (pSVar16 = System_Collections_Generic_Dictionary_object__object___get_Values
                                    (pSVar2,(MethodInfo_4AAD2A0 *)
                                            MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                                    ),
               pSVar16 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
              System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         local_158,pSVar16,
                         (MethodInfo_43F93D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                        );
              local_118 = local_148;
              local_128 = (undefined1  [8])local_158._0_8_;
              pSStack_120 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                            local_158._8_8_;
              local_158._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_158._8_8_ =
                   (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_128
              ;
label_05b82398:
              bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                  *)local_128,
                                 (MethodInfo_4CE7200 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
                                );
              if (bVar9) {
                pMVar17 = extraout_RDX;
                if (local_118 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                goto code_r0x05b823b2;
                goto label_05b82390;
              }
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         local_128,
                         (MethodInfo_4CE71F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                        );
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._namespacedStaticClasses;
              if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                 (pSVar16 = System_Collections_Generic_Dictionary_object__object___get_Values
                                      (pSVar2,(MethodInfo_4AAD2A0 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb8
                                      ),
                 pSVar16 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_158,pSVar16,
                           (MethodInfo_43F93D0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Dictionary_CustomLogicSourceType_Cu
                          );
                local_f8 = local_148;
                local_108 = (undefined1  [8])local_158._0_8_;
                pSStack_100 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                               *)local_158._8_8_;
                local_40 = 0;
                local_38 = local_108;
                while (bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                         ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                           *)local_108,
                                          (MethodInfo_4CE7200 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo_718fca0
                                         ), bVar9) {
                  if (local_f8 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar16 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values
                                      (local_f8,(MethodInfo_4A54D80 *)
                                                MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_get_Values
                                      );
                  if (pSVar16 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
                  {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_158,pSVar16,
                             (MethodInfo_43F1210 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_CustomLogicSourceType_CustomLogicClassInst
                            );
                  local_58 = local_148;
                  local_68 = (undefined1  [8])local_158._0_8_;
                  pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                *)local_158._8_8_;
                  local_158._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                  local_158._8_8_ =
                       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_68;
label_05b82508:
                  bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                      *)local_68,
                                     (MethodInfo_4CDC070 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog_718f6b8
                                    );
                  if (bVar9) {
                    pMVar17 = extraout_RDX_00;
                    if (local_58 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                    goto code_r0x05b82525;
                    goto label_05b82500;
                  }
                  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_68,
                             (MethodInfo_4CDC060 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_CustomLogicSourceType_CustomLog
                            );
                }
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_108,
                           (MethodInfo_4CE71F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Dictionary_CustomLogicSo
                          );
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._addonClasses;
                if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  pSVar16 = System_Collections_Generic_Dictionary_object__object___get_Values
                                      (pSVar2,(MethodInfo_4AAD2A0 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Values
                                      );
                  if (pSVar16 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
                  {
                    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                *)local_158,pSVar16,
                               (MethodInfo_43F93D0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera
                              );
                    local_118 = local_148;
                    local_128 = (undefined1  [8])local_158._0_8_;
                    pSStack_120 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)local_158._8_8_;
                    local_158._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                    local_158._8_8_ =
                         (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_128;
label_05b82648:
                    bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                        *)local_128,
                                       (MethodInfo_4CE7200 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance_718ff10
                                      );
                    if (bVar9) {
                      pMVar17 = extraout_RDX_01;
                      if (local_118 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                      goto code_r0x05b82661;
                      goto label_05b82640;
                    }
                    pMVar17 = 
                    MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                    ;
                    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                *)local_128,
                               (MethodInfo_4CE71F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance
                              );
                    CustomLogic_CustomLogicEvaluator__CreateAddonNetworkChannels(__this,pMVar17);
                    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                    }
                    pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                    if ((pSVar8 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                       (pSVar11 = System_Collections_Generic_Dictionary_int__object___get_Keys
                                            (pSVar8,(MethodInfo_4A0F330 *)
                                                    MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys
                                            ),
                       pSVar11 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
                    {
                      method_00 = &
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator
                      ;
                      System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
                                (&local_88,pSVar11,
                                 (MethodInfo_510AAB0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator
                                );
                      local_158._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                      local_158._8_8_ = &local_88;
                      while( true ) {
                        bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                                          (&local_88,
                                           (MethodInfo_4CA27E0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
                                          );
                        if (!bVar9) {
                          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                                    (&local_88,
                                     (MethodInfo_4CA27D0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
                                    );
                          return;
                        }
                        iVar10 = (int32_t)local_88.fields._currentKey;
                        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                        }
                        pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                        if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
                        obj = System_Collections_Generic_Dictionary_int__object___get_Item
                                        (pSVar8,iVar10,
                                         (MethodInfo_4A0F690 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item
                                        );
                        CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
                                  (__this,obj,false,(MethodInfo *)method_00);
                      }
                      ThrowNullReferenceException();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
code_r0x05b823b2:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  pMVar17 = (MethodInfo *)(ulong)bVar1;
  if (((local_118->klass->_2).typeHierarchyDepth < bVar1) ||
     ((local_118->klass->_2).typeHierarchy[(long)&pMVar17[-1].field_0x57] !=
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_05b82390:
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_118,pMVar17);
  }
  goto label_05b82398;
code_r0x05b82525:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  pMVar17 = (MethodInfo *)(ulong)bVar1;
  if (((local_58->klass->_2).typeHierarchyDepth < bVar1) ||
     ((local_58->klass->_2).typeHierarchy[(long)&pMVar17[-1].field_0x57] !=
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_05b82500:
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_58,pMVar17);
  }
  goto label_05b82508;
code_r0x05b82661:
  bVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  pMVar17 = (MethodInfo *)(ulong)bVar1;
  if (((local_118->klass->_2).typeHierarchyDepth < bVar1) ||
     ((local_118->klass->_2).typeHierarchy[(long)&pMVar17[-1].field_0x57] !=
      (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance)) {
label_05b82640:
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)local_118,pMVar17);
  }
  goto label_05b82648;
}


// CustomLogic.CustomLogicEvaluator$$CreateAddonNetworkChannels
// il2cpp: void CustomLogic_CustomLogicEvaluator__CreateAddonNetworkChannels (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b85000
// eh: try 0x5b852ac..0x5b8562b -> pad 0x5b85672 (+38 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b85694..0x5b85699 -> pad 0x5b856be cleanup
// eh: try 0x5b856c1..0x5b856cb -> pad 0x5b856d3 catch (...) [compiler noexcept guard]
// asm: 64 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8519d: jmp 0x5b851b7
// asm:   0x5b852cf: nop 
// asm:   0x5b85307: jmp 0x5b852d0
// asm:   0x5b85630: jmp 0x5b8567c
// asm:   0x5b85632: jmp 0x5b8567c
// asm:   0x5b85634: jmp 0x5b8567c
// asm:   0x5b85636: jmp 0x5b8567c
// asm:   0x5b85638: jmp 0x5b8567c
// asm:   0x5b8563a: jmp 0x5b8567c
// asm:   0x5b8563c: jmp 0x5b8567c
// asm:   0x5b8563e: jmp 0x5b8567c
// asm:   0x5b85640: jmp 0x5b8567c
// asm:   0x5b85642: jmp 0x5b8567c
// asm:   0x5b85644: jmp 0x5b8567c
// asm:   0x5b85646: jmp 0x5b8567c
// asm:   0x5b85648: jmp 0x5b8567c
// asm:   0x5b8564a: jmp 0x5b8567c
// asm:   0x5b8564c: jmp 0x5b8567c
// asm:   0x5b8564e: jmp 0x5b8567c
// asm:   0x5b85650: jmp 0x5b8567c
// asm:   0x5b85652: jmp 0x5b8567c
// asm:   0x5b85654: jmp 0x5b8567c
// asm:   0x5b85656: jmp 0x5b8567c
// asm:   0x5b85658: jmp 0x5b8567c
// asm:   0x5b8565a: jmp 0x5b8567c
// asm:   0x5b8565c: jmp 0x5b8567c
// asm:   0x5b8565e: jmp 0x5b8567c
// asm:   0x5b85660: jmp 0x5b8567c
// asm:   0x5b85662: jmp 0x5b8567c
// asm:   0x5b85664: jmp 0x5b8567c
// asm:   0x5b85666: jmp 0x5b8567c
// asm:   0x5b85668: jmp 0x5b8567c
// asm:   0x5b8566a: jmp 0x5b8567c
// asm:   0x5b8566c: jmp 0x5b8567c
// asm:   0x5b8566e: jmp 0x5b8567c
// asm:   0x5b85670: jmp 0x5b8567c
// asm:   0x5b85672: jmp 0x5b8567c
// asm:   0x5b85674: jmp 0x5b8567c
// asm:   0x5b85676: jmp 0x5b8567c
// asm:   0x5b85678: jmp 0x5b8567c
// asm:   0x5b8567a: jmp 0x5b8567c
// asm:   0x5b8567c: mov rbx, rax
// asm:   0x5b8567f: cmp edx, 1
// asm:   0x5b85682: jne 0x5b856c1
// asm:   0x5b85684: mov rdi, rbx
// asm:   0x5b85687: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8568c: mov rbx, qword ptr [rax]
// asm:   0x5b8568f: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5b85694: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b85699: lea rax, [rip + 0x1709458]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5b856a0: mov rsi, qword ptr [rax]
// asm:   0x5b856a3: lea rdi, [rsp + 0x10]
// asm:   0x5b856a8: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b856ad: test rbx, rbx
// asm:   0x5b856b0: je 0x5b855d1
// asm:   0x5b856b6: mov rdi, rbx
// asm:   0x5b856b9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b856be: mov rbx, rax
// asm:   0x5b856c1: lea rdi, [rsp + 0x30]
// asm:   0x5b856c6: call 0x2fd7aa0  ; il2cpp_runtime_helper_02fd7aa0()
// asm:   0x5b856cb: mov rdi, rbx
// asm:   0x5b856ce: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b856d3: mov rdi, rax
// asm:   0x5b856d6: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicEvaluator__CreateAddonNetworkChannels
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  bool bVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  CustomLogic_CustomLogicEvaluator___c_StaticFields *pCVar7;
  System_Func_string__string__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  Map_MapScriptSceneObject_o *__this_02;
  System_String_o *pSVar8;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicPhotonSync_o *__this_03;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_04;
  CustomLogic_CustomLogicClassInstance_o *instance;
  MethodInfo **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int32_t key;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075473b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_c_CreateAddonNetworkChannels_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_c);
    il2cpp_codegen_initialize_runtime_metadata(&"CLAddon_");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkView");
    Il2CppMethodInitialized_075473b9 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       (pSVar2,(MethodInfo_4AAD0F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Keys
                       );
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c);
      pCVar7 = TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields;
      __this_00 = pCVar7->__9__20_0;
    }
    else {
      pCVar7 = TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields;
      __this_00 = pCVar7->__9__20_0;
    }
    if (__this_00 == (System_Func_string__string__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c)->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c);
        pCVar7 = TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields;
      }
      pIVar3 = (Il2CppObject *)pCVar7->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_00,pIVar3,
                 (intptr_t)MethodInfo_CustomLogic_CustomLogicEvaluator_c_CreateAddonNetworkChannels_b__20_0,
                 (MethodInfo_4F19B50 *)0x0);
      pCVar7 = TypeInfo_CustomLogic_CustomLogicEvaluator_c->static_fields;
      pCVar7->__9__20_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pCVar7->__9__20_0);
    }
    source_00 = System_Linq_Enumerable__OrderBy_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TKey__o *)__this_00,
                           (MethodInfo_34F1E50 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
    __this_01 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
      method_00 = &MethodInfo_System_Collections_Generic_List_string_GetEnumerator;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_01,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_68.fields._current = (Il2CppObject *)local_38;
      local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      local_68.fields._index = local_48._8_4_;
      local_68.fields._version = local_48._12_4_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = &local_68;
      key = -500000;
      do {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        pIVar3 = local_68.fields._current;
        if (!bVar6) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (&local_68,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          return;
        }
        uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        while( true ) {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar4,key,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (!bVar6) break;
          key = key + -1;
          uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        }
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
        Map_MapScriptSceneObject___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 == (Map_MapScriptSceneObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        (__this_02->fields).Id = key;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        (__this_02->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
        pSVar8 = System_String__Concat_52f0320
                           ("CLAddon_",(System_String_o *)pIVar3,(MethodInfo *)0x0);
        (__this_02->fields).Name = pSVar8;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).Name);
        (__this_02->fields).Asset = "None";
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).Asset);
        (__this_02->fields).Active = false;
        (__this_02->fields).Static = true;
        (__this_02->fields).Visible = false;
        (__this_02->fields).Networked = true;
        if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
        }
        (__this_02->fields).CollideMode = TypeInfo_Map_MapObjectCollideMode->static_fields->None;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).CollideMode);
        if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
        }
        (__this_02->fields).CollideWith = TypeInfo_Map_MapObjectCollideWith->static_fields->All;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).CollideWith);
        mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_02,false,(MethodInfo *)0x0);
        Map_MapLoader__SetParent_58998f0(mapObject,(MethodInfo *)0x0);
        CustomLogic_CustomLogicEvaluator__SetupMapObject(__this,mapObject,method_01);
        __this_03 = CustomLogic_CustomLogicEvaluator__SetupNetworking(__this,mapObject,method_02);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          if (mapObject == (Map_MapObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar5 = (mapObject->fields).ScriptObject;
          if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (__this_03 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
            ThrowNullReferenceException();
          }
          CustomLogic_CustomLogicPhotonSync__Init(__this_03,(pMVar5->fields).Id,false,(MethodInfo *)method_00)
          ;
        }
        else if (mapObject == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar5 = (mapObject->fields).ScriptObject;
        if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToNetworkView;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        method_00 = (MethodInfo **)__this;
        bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar4,(pMVar5->fields).Id,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                          );
        if (bVar6) {
          pMVar5 = (mapObject->fields).ScriptObject;
          if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToNetworkView;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_04 = System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar4,(pMVar5->fields).Id,
                                 (MethodInfo_4A0F690 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                                );
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).AddonToNetworkView;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar2,pIVar3,(Il2CppObject *)__this_04,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_set_Item
                    );
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._addonClasses;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          instance = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,pIVar3,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                               );
          if (instance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(instance->fields).Variables;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          method_00 = (MethodInfo **)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar2,(Il2CppObject *)"NetworkView",(Il2CppObject *)__this_04,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          if (__this_04 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance
                    (__this_04,instance,(MethodInfo *)0x0);
        }
        key = key + -1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateMethodForCallbacks
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x5b82f70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b830a9: jmp 0x5b83050
// asm:   0x5b830cc: jmp 0x5b83075

void CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *methodName,
               System_Object_array *parameters,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *pCVar3;
  int32_t index;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075473ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    Il2CppMethodInitialized_075473ba = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05b830dd:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)methodName,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ContainsKey
                    );
  if (bVar2) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._callbacks;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_00 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar1,(Il2CppObject *)methodName,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_get_Item
                              ), __this_00 == (System_Collections_Generic_List_object__o *)0x0))
    goto label_05b830dd;
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        bVar2 = System_String__op_Equality(methodName,"Init",(MethodInfo *)0x0);
        pCVar3 = System_Collections_Generic_List_object___get_Item
                           (__this_00,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_get_Item);
        if (bVar2) {
          if (pCVar3 == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto label_05b830dd;
          if ((pCVar3->fields).Inited == false) {
label_05b83050:
            pCVar3 = System_Collections_Generic_List_object___get_Item
                               (__this_00,index,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_get_Item);
            CustomLogic_CustomLogicEvaluator__EvaluateMethod(__this,pCVar3,methodName,parameters,0,in_R9);
          }
        }
        else {
          if (pCVar3 == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto label_05b830dd;
          bVar2 = (*(pCVar3->klass->vtable)._4_get_Enabled.methodPtr)
                            (pCVar3,(pCVar3->klass->vtable)._4_get_Enabled.method);
          if (bVar2) goto label_05b83050;
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$LoadMapObjectComponents
// il2cpp: void CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, bool init, const MethodInfo* method);
// 0x5b856e0

void CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
               (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,bool init,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  Map_MapScriptBaseObject_c *pMVar3;
  bool rigidbody;
  bool bVar4;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075473bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075473bb = '\x01';
  }
  if (obj == (Map_MapObject_o *)0x0) {
label_05b857e0:
    ThrowNullReferenceException();
  }
  pMVar2 = (obj->fields).ScriptObject;
  if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
    pMVar3 = pMVar2->klass;
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if ((bVar1 <= (pMVar3->_2).typeHierarchyDepth) &&
       (method_00 = (MethodInfo *)(pMVar3->_2).typeHierarchy,
       *(Map_MapScriptSceneObject_c **)((long)method_00 + (long)(ulong)bVar1 * 8 + -8) ==
       TypeInfo_Map_MapScriptSceneObject)) {
      __this_00 = CustomLogic_CustomLogicEvaluator__SetupNetworking(__this,obj,(MethodInfo *)(ulong)bVar1);
      CustomLogic_CustomLogicEvaluator__SetupMapObject(__this,obj,method_01);
      rigidbody = CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents(__this,obj,init,method_00);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pMVar2 = (obj->fields).ScriptObject;
        if ((pMVar2 != (Map_MapScriptBaseObject_o *)0x0) &&
           (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
          CustomLogic_CustomLogicPhotonSync__Init(__this_00,(pMVar2->fields).Id,rigidbody,method_00);
          return;
        }
        goto label_05b857e0;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$LoadRuntimeMapObjectComponents
// il2cpp: bool CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, bool init, const MethodInfo* method);
// 0x5b6ff50
// eh: try 0x5b700a4..0x5b70287 -> pad 0x5b702a0 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b702c6..0x5b702cb -> pad 0x5b702f0 cleanup
// eh: try 0x5b702f3..0x5b702fd -> pad 0x5b70305 catch (...) [compiler noexcept guard]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7009d: nop dword ptr [rax]
// asm:   0x5b7016c: jmp 0x5b700a0
// asm:   0x5b70222: mov qword ptr [rsp + 8], rcx
// asm:   0x5b70227: jmp 0x5b70190
// asm:   0x5b7022c: mov r12, qword ptr [rsp + 8]
// asm:   0x5b7025a: mov qword ptr [rsp + 8], r12
// asm:   0x5b70264: mov qword ptr [rsp + 8], r12
// asm:   0x5b7026e: mov qword ptr [rsp + 8], r12
// asm:   0x5b70287: jmp 0x5b702a9
// asm:   0x5b70289: jmp 0x5b702a9
// asm:   0x5b7028b: jmp 0x5b702a9
// asm:   0x5b7028d: jmp 0x5b702a9
// asm:   0x5b7028f: jmp 0x5b702a9
// asm:   0x5b70291: jmp 0x5b702a9
// asm:   0x5b70293: jmp 0x5b702a9
// asm:   0x5b70295: jmp 0x5b702a9
// asm:   0x5b70297: mov rbx, rax
// asm:   0x5b7029a: jmp 0x5b702b1
// asm:   0x5b7029c: jmp 0x5b702a9
// asm:   0x5b7029e: jmp 0x5b702a9
// asm:   0x5b702a0: mov rbx, rax
// asm:   0x5b702a3: jmp 0x5b702b1
// asm:   0x5b702a5: jmp 0x5b702a9
// asm:   0x5b702a7: jmp 0x5b702a9
// asm:   0x5b702a9: mov rbx, rax
// asm:   0x5b702ac: mov r12, qword ptr [rsp + 8]
// asm:   0x5b702b1: cmp edx, 1
// asm:   0x5b702b4: jne 0x5b702f3
// asm:   0x5b702b6: mov rdi, rbx
// asm:   0x5b702b9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b702be: mov rbx, qword ptr [rax]
// asm:   0x5b702c1: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5b702c6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b702cb: lea rax, [rip + 0x171e11e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose
// asm:   0x5b702d2: mov rsi, qword ptr [rax]
// asm:   0x5b702d5: lea rdi, [rsp + 0x10]
// asm:   0x5b702da: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b702df: test rbx, rbx
// asm:   0x5b702e2: je 0x5b70245
// asm:   0x5b702e8: mov rdi, rbx
// asm:   0x5b702eb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b702f0: mov rbx, rax
// asm:   0x5b702f3: lea rdi, [rsp + 0x30]
// asm:   0x5b702f8: call 0x2fd7ad0  ; il2cpp_runtime_helper_02fd7ad0()
// asm:   0x5b702fd: mov rdi, rbx
// asm:   0x5b70300: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b70305: mov rdi, rax
// asm:   0x5b70308: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
               (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,bool init,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  bool bVar5;
  Il2CppObject *pIVar6;
  Map_MapObject_o *obj_00;
  bool bVar7;
  CustomLogic_CustomLogicComponentInstance_o *pCVar8;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  Map_MapObject_o *local_50;
  undefined1 local_48 [16];
  Map_MapScriptComponent_o *local_38;
  
  if (Il2CppMethodInitialized_075473bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    Il2CppMethodInitialized_075473bc = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (obj->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)&(*(uint32_t *)((char *)pMVar2 + 0x80));
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      local_50 = obj;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_00,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
      obj_00 = local_50;
      local_68.fields._current = (Il2CppObject *)local_38;
      local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      local_68.fields._index = local_48._8_4_;
      local_68.fields._version = local_48._12_4_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = &local_68;
      if (init) {
        bVar5 = false;
        while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_68,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext
                                 ), pIVar6 = local_68.fields._current, bVar7) {
          pCVar3 = (__this->fields)._start;
          if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
label_05b70269:
            ThrowNullReferenceException();
          }
          if ((Map_MapScriptComponent_o *)local_68.fields._current == (Map_MapScriptComponent_o *)0x0) {
label_05b70273:
            ThrowNullReferenceException();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05b7025f:
            ThrowNullReferenceException();
          }
          bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar4,(Il2CppObject *)
                                    ((Map_MapScriptComponent_Fields *)((long)local_68.fields._current + 0x10))
                                    ->ComponentName,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                            );
          if (bVar7) {
            pCVar8 = CustomLogic_CustomLogicEvaluator__CreateComponentInstance
                               (__this,((Map_MapScriptComponent_Fields *)((long)pIVar6 + 0x10))->ComponentName
                                ,obj_00,(Map_MapScriptComponent_o *)pIVar6,in_R8);
            Map_MapObject__RegisterComponentInstance(obj_00,pCVar8,(MethodInfo *)0x0);
            in_R8 = (MethodInfo *)0x0;
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (__this,(CustomLogic_CustomLogicClassInstance_o *)pCVar8,"Init",
                       (System_Object_array *)0x0,0,in_R9);
            if (pCVar8 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
              ThrowNullReferenceException();
            }
            (pCVar8->fields).Inited = true;
            bVar7 = System_String__op_Equality
                              (((Map_MapScriptComponent_Fields *)((long)pIVar6 + 0x10))->ComponentName,
                               "Rigidbody",(MethodInfo *)0x0);
            if (bVar7) {
              bVar5 = true;
            }
          }
        }
      }
      else {
        bVar5 = false;
        while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_68,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext
                                 ), pIVar6 = local_68.fields._current, bVar7) {
          pCVar3 = (__this->fields)._start;
          if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) goto label_05b70269;
          if ((Map_MapScriptComponent_o *)local_68.fields._current == (Map_MapScriptComponent_o *)0x0)
          goto label_05b70273;
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b7025f;
          bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar4,(Il2CppObject *)
                                    ((Map_MapScriptComponent_Fields *)((long)local_68.fields._current + 0x10))
                                    ->ComponentName,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                            );
          if (bVar7) {
            pCVar8 = CustomLogic_CustomLogicEvaluator__CreateComponentInstance
                               (__this,((Map_MapScriptComponent_Fields *)((long)pIVar6 + 0x10))->ComponentName
                                ,obj_00,(Map_MapScriptComponent_o *)pIVar6,in_R8);
            Map_MapObject__RegisterComponentInstance(obj_00,pCVar8,(MethodInfo *)0x0);
            bVar7 = System_String__op_Equality
                              (((Map_MapScriptComponent_Fields *)((long)pIVar6 + 0x10))->ComponentName,
                               "Rigidbody",(MethodInfo *)0x0);
            if (bVar7) {
              bVar5 = true;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_68,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
      return bVar5;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$AddMapObjectComponent
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicEvaluator__AddMapObjectComponent (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, System_String_o* componentName, const MethodInfo* method);
// 0x5b860a0
// eh: try 0x5b862d1..0x5b866df -> pad 0x5b866ed (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b8670b..0x5b86710 -> pad 0x5b86735 cleanup
// eh: try 0x5b86738..0x5b86742 -> pad 0x5b8674a catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b862dc: nop dword ptr [rax]
// asm:   0x5b8648a: jmp 0x5b862e0
// asm:   0x5b865b9: movzx edx, al
// asm:   0x5b865bc: mov rdi, r13
// asm:   0x5b865bf: mov esi, ebp
// asm:   0x5b866df: jmp 0x5b866f3
// asm:   0x5b866e1: jmp 0x5b866f3
// asm:   0x5b866e3: jmp 0x5b866f3
// asm:   0x5b866e5: jmp 0x5b866f3
// asm:   0x5b866e7: jmp 0x5b866f3
// asm:   0x5b866e9: jmp 0x5b866f3
// asm:   0x5b866eb: jmp 0x5b866f3
// asm:   0x5b866ed: jmp 0x5b866f3
// asm:   0x5b866ef: jmp 0x5b866f3
// asm:   0x5b866f1: jmp 0x5b866f3
// asm:   0x5b866f3: mov rbx, rax
// asm:   0x5b866f6: cmp edx, 1
// asm:   0x5b866f9: jne 0x5b86738
// asm:   0x5b866fb: mov rdi, rbx
// asm:   0x5b866fe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b86703: mov rbx, qword ptr [rax]
// asm:   0x5b86706: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5b8670b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b86710: lea rax, [rip + 0x17072a1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
// asm:   0x5b86717: mov rsi, qword ptr [rax]
// asm:   0x5b8671a: lea rdi, [rsp + 0x10]
// asm:   0x5b8671f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b86724: test rbx, rbx
// asm:   0x5b86727: je 0x5b864a3
// asm:   0x5b8672d: mov rdi, rbx
// asm:   0x5b86730: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b86735: mov rbx, rax
// asm:   0x5b86738: lea rdi, [rsp + 0x28]
// asm:   0x5b8673d: call 0x2fd7b00  ; il2cpp_runtime_helper_02fd7b00()
// asm:   0x5b86742: mov rdi, rbx
// asm:   0x5b86745: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b8674a: mov rdi, rax
// asm:   0x5b8674d: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicEvaluator__AddMapObjectComponent
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,System_String_o *componentName,
          MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  CustomLogic_CustomLogicStartAst_o *pCVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *__this_00;
  long *plVar6;
  long *plVar7;
  System_String_array *pSVar8;
  Map_MapScriptBaseObject_o *pMVar9;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar10;
  Map_MapObject_o *pMVar11;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  Il2CppObject *pIVar12;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  Map_MapObject_o *obj_00;
  bool bVar13;
  System_Collections_Generic_List_string__o *__this_03;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  Map_MapScriptComponent_o *__this_04;
  CustomLogic_CustomLogicPhotonSync_o *__this_05;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  Il2CppClass *klass;
  System_Exception_o *__this_06;
  MethodInfo *pMVar17;
  Map_MapScriptBaseObject_o *pMVar18;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t mapObjectId;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  Il2CppObject *local_80;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  Il2CppObject *local_68;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  CustomLogic_CustomLogicEvaluator_o *local_48;
  System_String_o *local_40;
  Map_MapObject_o *local_38;
  
  if (Il2CppMethodInitialized_075473bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_075473bd = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_68 = (Il2CppObject *)0x0;
  local_80 = (Il2CppObject *)0x0;
  pCVar4 = (__this->fields)._start;
  if ((pCVar4 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Classes,
     pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar13 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar5,(Il2CppObject *)componentName,
                        (MethodInfo_4AAD6F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                       );
    if (!bVar13) {
      pSVar16 = il2cpp_codegen_get_runtime_metadata(&"No component named ");
      pSVar15 = il2cpp_codegen_get_runtime_metadata(&" found");
      pSVar16 = System_String__Concat_5301f10(pSVar16,componentName,pSVar15,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_06 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_54fa440(__this_06,pSVar16,(MethodInfo *)0x0);
      pMVar17 = il2cpp_codegen_get_runtime_metadata
                          (&MethodInfo_CustomLogic_CustomLogicEvaluator_AddMapObjectComponent);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_06,pMVar17);
    }
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_03,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pCVar4 = (__this->fields)._start;
    if (((pCVar4 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
        (pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Classes,
        pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (pCVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar5,(Il2CppObject *)componentName,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                            ), pCVar14 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0)) {
      __this_00 = (pCVar14->fields).Assignments;
      local_48 = __this;
      local_40 = componentName;
      local_38 = obj;
      if (__this_00 != (System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                   (System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_GetEnumerator
                  );
        local_68 = local_50;
        local_78 = (undefined1  [8])local_60._0_8_;
        pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_60._8_8_;
        local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_78;
label_05b862e0:
        pMVar17 = 
        MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_MoveNext;
        bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_MoveNext
                           );
        pIVar12 = local_68;
        if (bVar13) {
          if (local_68 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          plVar6 = local_68[1].monitor;
          if (plVar6 != (long *)0x0) {
            bVar2 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
            if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
               (*(CustomLogic_CustomLogicVariableExpressionAst_c **)
                 (*(long *)(*plVar6 + 200) + -8 + (ulong)bVar2 * 8) ==
                TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
              plVar7 = local_68[2].monitor;
              if (plVar7 != (long *)0x0) {
                bVar2 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
                if ((bVar2 <= *(byte *)(*plVar7 + 0x130)) &&
                   (*(CustomLogic_CustomLogicPrimitiveExpressionAst_c **)
                     (*(long *)(*plVar7 + 200) + -8 + (ulong)bVar2 * 8) ==
                    TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
                  bVar13 = System_String__op_Equality
                                     ((System_String_o *)plVar6[3],"Description",(MethodInfo *)0x0);
                  if (bVar13) goto label_05b862e0;
                  if ((System_String_o *)plVar6[3] == (System_String_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar13 = System_String__EndsWith
                                     ((System_String_o *)plVar6[3],"Tooltip",(MethodInfo *)0x0);
                  if (((bVar13) && ((long *)plVar7[3] != (long *)0x0)) && (*(long *)plVar7[3] == g_data_07556758)
                     ) goto label_05b862e0;
                  if ((System_String_o *)plVar6[3] == (System_String_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pMVar17 = (MethodInfo *)"Dropbox";
                  bVar13 = System_String__EndsWith
                                     ((System_String_o *)plVar6[3],"Dropbox",(MethodInfo *)0x0);
                  if (((bVar13) && ((long *)plVar7[3] != (long *)0x0)) && (*(long *)plVar7[3] == g_data_07556758)
                     ) goto label_05b862e0;
                }
              }
              pSVar16 = (System_String_o *)plVar6[3];
              pSVar15 = CustomLogic_CustomLogicUtils__SerializeAst(pIVar12[2].monitor,pMVar17);
              pSVar16 = System_String__Concat_5301f10(pSVar16,":",pSVar15,(MethodInfo *)0x0)
              ;
              pMVar17 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (__this_03 != (System_Collections_Generic_List_string__o *)0x0) {
                piVar1 = &(__this_03->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_03->fields)._items;
                if (pSVar8 != (System_String_array *)0x0) {
                  uVar3 = (__this_03->fields)._size;
                  if (uVar3 < (uint)pSVar8->max_length) {
                    (__this_03->fields)._size = uVar3 + 1;
                    pSVar8->m_Items[(int)uVar3] = pSVar16;
                    Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar3);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar16,
                               (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
                  }
                  goto label_05b862e0;
                }
              }
              ThrowNullReferenceException();
            }
          }
          goto label_05b862e0;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
                  );
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
        Map_MapScriptComponent___ctor(__this_04,(MethodInfo *)0x0);
        obj_00 = local_38;
        pSVar16 = local_40;
        __this_02 = local_48;
        if (__this_04 != (Map_MapScriptComponent_o *)0x0) {
          (__this_04->fields).ComponentName = local_40;
          Il2CppCodeGenWriteBarrier(&(__this_04->fields).ComponentName);
          (__this_04->fields).Parameters = __this_03;
          Il2CppCodeGenWriteBarrier(&(__this_04->fields).Parameters);
          __this_05 = CustomLogic_CustomLogicEvaluator__SetupNetworking(__this_02,obj_00,method_00);
          CustomLogic_CustomLogicEvaluator__SetupMapObject(__this_02,obj_00,method_01);
          instance = CustomLogic_CustomLogicEvaluator__CreateComponentInstance
                               (__this_02,pSVar16,obj_00,__this_04,in_R8);
          if (obj_00 != (Map_MapObject_o *)0x0) {
            Map_MapObject__RegisterComponentInstance(obj_00,instance,(MethodInfo *)0x0);
            pMVar18 = (Map_MapScriptBaseObject_o *)0x0;
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (__this_02,(CustomLogic_CustomLogicClassInstance_o *)instance,"Init",
                       (System_Object_array *)0x0,0,in_R9);
            if (instance != (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
              (instance->fields).Inited = true;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar13 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if (bVar13) {
                pMVar9 = (obj_00->fields).ScriptObject;
                if (pMVar9 != (Map_MapScriptBaseObject_o *)0x0) {
                  mapObjectId = (pMVar9->fields).Id;
                  bVar13 = System_String__op_Equality(pSVar16,"Rigidbody",(MethodInfo *)0x0);
                  if (__this_05 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto label_05b865c1;
                }
              }
              else {
                bVar13 = System_String__op_Equality(pSVar16,"Rigidbody",(MethodInfo *)0x0);
                if (!bVar13) {
                  return instance;
                }
                pCVar10 = (instance->fields).MapObject;
                if (((pCVar10 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
                    (pMVar11 = (pCVar10->fields).Value, pMVar11 != (Map_MapObject_o *)0x0)) &&
                   ((pMVar18 = (pMVar11->fields).ScriptObject, pMVar18 != (Map_MapScriptBaseObject_o *)0x0 &&
                    (__this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                                 (__this_02->fields).IdToNetworkView,
                    __this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)))) {
                  bVar13 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                                     (__this_01,(pMVar18->fields).Id,&local_80,
                                      (MethodInfo_4A114B0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_TryGetValue
                                     );
                  if (!bVar13) {
                    return instance;
                  }
                  if (((local_80 != (Il2CppObject *)0x0) &&
                      (pMVar18 = (obj_00->fields).ScriptObject, pMVar18 != (Map_MapScriptBaseObject_o *)0x0))
                     && (__this_05 = local_80[3].monitor,
                        __this_05 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
                    mapObjectId = (pMVar18->fields).Id;
                    bVar13 = true;
label_05b865c1:
                    CustomLogic_CustomLogicPhotonSync__Init
                              (__this_05,mapObjectId,bVar13,(MethodInfo *)pMVar18);
                    return instance;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$RemoveComponent
// il2cpp: void CustomLogic_CustomLogicEvaluator__RemoveComponent (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x5b86760

void CustomLogic_CustomLogicEvaluator__RemoveComponent
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *instance,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (instance == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicComponentInstance__DestroyLineRenderers(instance,(MethodInfo *)instance);
  CustomLogic_CustomLogicEvaluator__RemoveCallbacks
            (__this,(CustomLogic_CustomLogicClassInstance_o *)instance,method_00);
  return;
}


// CustomLogic.CustomLogicEvaluator$$CreateComponentInstance
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* CustomLogic_CustomLogicEvaluator__CreateComponentInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, Map_MapObject_o* obj, Map_MapScriptComponent_o* script, const MethodInfo* method);
// 0x5b85c80
// eh: try 0x5b85f83..0x5b8602c -> pad 0x5b8603f (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b86057..0x5b8605c -> pad 0x5b8607d cleanup
// eh: try 0x5b86080..0x5b8608a -> pad 0x5b86092 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b85dc8: jmp 0x5b8602c
// asm:   0x5b86031: jmp 0x5b8603f
// asm:   0x5b86033: jmp 0x5b8603f
// asm:   0x5b86035: jmp 0x5b8603f
// asm:   0x5b86037: jmp 0x5b8603f
// asm:   0x5b86039: jmp 0x5b8603f
// asm:   0x5b8603b: jmp 0x5b8603f
// asm:   0x5b8603d: jmp 0x5b8603f
// asm:   0x5b8603f: mov rbp, rax
// asm:   0x5b86042: cmp edx, 1
// asm:   0x5b86045: jne 0x5b86080
// asm:   0x5b86047: mov rdi, rbp
// asm:   0x5b8604a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8604f: mov rbx, qword ptr [rax]
// asm:   0x5b86052: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5b86057: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8605c: lea rax, [rip + 0x1707cfd]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_Dispose
// asm:   0x5b86063: mov rsi, qword ptr [rax]
// asm:   0x5b86066: lea rdi, [rsp + 0x30]
// asm:   0x5b8606b: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5b86070: test rbx, rbx
// asm:   0x5b86073: je 0x5b8600b
// asm:   0x5b86075: mov rdi, rbx
// asm:   0x5b86078: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8607d: mov rbp, rax
// asm:   0x5b86080: lea rdi, [rsp + 0x18]
// asm:   0x5b86085: call 0x2fd7b30  ; il2cpp_runtime_helper_02fd7b30()
// asm:   0x5b8608a: mov rdi, rbp
// asm:   0x5b8608d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b86092: mov rdi, rax
// asm:   0x5b86095: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicComponentInstance_o *
CustomLogic_CustomLogicEvaluator__CreateComponentInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,Map_MapObject_o *obj,
          Map_MapScriptComponent_o *script,MethodInfo *method)

{
  System_Nullable_CustomLogicSourceType__Fields *pSVar1;
  System_Collections_Generic_Dictionary_string__object__o **ppSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar6;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView;
  CustomLogic_CustomLogicMapObjectBuiltin_o *obj_00;
  MethodInfo *pMVar7;
  System_Collections_Generic_HashSet_GameObject__o *__this_02;
  UnityEngine_Transform_o *t;
  CustomLogic_CustomLogicCollisionHandler_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar8;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_02;
  MethodInfo *in_R9;
  int32_t local_6c;
  MethodInfo *local_68;
  undefined1 local_60 [16];
  UnityEngine_GameObject_o *local_50;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_075473be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075473be = '\x01';
  }
  local_6c = 0;
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((obj == (Map_MapObject_o *)0x0) ||
     (pMVar3 = (obj->fields).ScriptObject, pMVar3 == (Map_MapScriptBaseObject_o *)0x0)) goto label_05b8602c;
  if ((pMVar3->fields).Networked == false) {
    networkView = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0;
    pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin;
  }
  else {
    pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToNetworkView;
    if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05b8602c;
    networkView = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar4,(pMVar3->fields).Id,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                            );
    pMVar3 = (obj->fields).ScriptObject;
    if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto label_05b8602c;
    pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin;
  }
  local_68 = (MethodInfo *)obj;
  if (pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    obj_00 = System_Collections_Generic_Dictionary_int__object___get_Item
                       (pSVar4,(pMVar3->fields).Id,
                        (MethodInfo_4A0F690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                       );
    pMVar7 = (MethodInfo *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicComponentInstance);
    CustomLogic_CustomLogicComponentInstance___ctor_5a6c7c0
              ((CustomLogic_CustomLogicComponentInstance_o *)pMVar7,className,obj_00,script,networkView,in_R9)
    ;
    pCVar5 = (__this->fields)._start;
    if ((pCVar5 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
       (__this_00 = (pCVar5->fields).ClassNamespaces,
       __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)) {
      method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue;
      bVar6 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)className,&local_6c,
                         (MethodInfo_4AA3530 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                        );
      pMVar8 = extraout_RDX;
      if (bVar6) {
        local_60[0] = false;
        local_60._1_3_ = 0;
        local_60._4_4_ = 0;
        System_Nullable_Int32Enum____ctor
                  ((System_Nullable_Int32Enum__o *)local_60,local_6c,
                   (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
        if (pMVar7 == (MethodInfo *)0x0) goto label_05b8602c;
        pSVar1 = (System_Nullable_CustomLogicSourceType__Fields *)((long)&pMVar7->klass + 4);
        pSVar1->hasValue = (bool)local_60[0];
        *(undefined3 *)&pSVar1->field_0x1 = local_60._1_3_;
        pSVar1->value = local_60._4_4_;
        pMVar8 = extraout_RDX_00;
      }
      if (networkView != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance
                  (networkView,(CustomLogic_CustomLogicComponentInstance_o *)pMVar7,(MethodInfo *)0x0);
        pMVar8 = extraout_RDX_01;
      }
      method_02 = pMVar7;
      CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
                (__this,(CustomLogic_CustomLogicClassInstance_o *)pMVar7,pMVar8);
      if (pMVar7 != (MethodInfo *)0x0) {
        CustomLogic_CustomLogicComponentInstance__LoadVariables
                  ((CustomLogic_CustomLogicComponentInstance_o *)pMVar7,method_02);
        pMVar8 = pMVar7;
        CustomLogic_CustomLogicEvaluator__AddCallbacks
                  (__this,(CustomLogic_CustomLogicClassInstance_o *)pMVar7,method_01);
        bVar6 = CustomLogic_CustomLogicComponentInstance__UsesCollider
                          ((CustomLogic_CustomLogicComponentInstance_o *)pMVar7,pMVar8);
        if (!bVar6) {
          return (CustomLogic_CustomLogicComponentInstance_o *)pMVar7;
        }
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_GameObject);
        System_Collections_Generic_HashSet_object____ctor
                  ((System_Collections_Generic_HashSet_object__o *)__this_02,
                   (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor);
        ppSVar2 = (System_Collections_Generic_Dictionary_string__object__o **)&local_68->name;
        if (*ppSVar2 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
          local_68 = pMVar7;
          t = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)*ppSVar2,(MethodInfo *)0x0);
          CustomLogic_CustomLogicEvaluator__FindSubcolliders(__this,t,__this_02,method_00);
          if (__this_02 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
            System_Collections_Generic_HashSet_object___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,
                       (System_Collections_Generic_HashSet_object__o *)__this_02,
                       (MethodInfo_4FB3DA0 *)
                       MethodInfo_System_Collections_Generic_HashSet_GameObject_GetEnumerator);
            local_48.fields._current = (Il2CppObject *)local_50;
            local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)local_60._0_8_;
            local_48.fields._index = local_60._8_4_;
            local_48.fields._version = local_60._12_4_;
            local_60[0] = false;
            local_60._1_3_ = 0;
            local_60._4_4_ = 0;
            local_60._8_8_ = &local_48;
            while( true ) {
              bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                (&local_48,
                                 (MethodInfo_4C456D0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_MoveNext)
              ;
              __this_01 = local_48.fields._current;
              if (!bVar6) {
                System_Collections_Generic_HashSet_Enumerator_object___Dispose
                          (&local_48,
                           (MethodInfo_4C456C0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_GameObject_Dispose);
                return (CustomLogic_CustomLogicComponentInstance_o *)local_68;
              }
              if ((UnityEngine_GameObject_o *)local_48.fields._current == (UnityEngine_GameObject_o *)0x0)
              break;
              __this_03 = UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)local_48.fields._current,
                                     (MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler
                                    );
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              pMVar7 = extraout_RDX_02;
              if (bVar6) {
                __this_03 = UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)__this_01,
                                       (MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_CustomLogicCollisionHandler
                                      );
                pMVar7 = extraout_RDX_03;
              }
              if (__this_03 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                ThrowNullReferenceException();
              }
              CustomLogic_CustomLogicCollisionHandler__RegisterInstance
                        (__this_03,(CustomLogic_CustomLogicComponentInstance_o *)local_68,pMVar7);
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
label_05b8602c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$FindSubcolliders
// il2cpp: void CustomLogic_CustomLogicEvaluator__FindSubcolliders (CustomLogic_CustomLogicEvaluator_o* __this, UnityEngine_Transform_o* t, System_Collections_Generic_HashSet_GameObject__o* set, const MethodInfo* method);
// 0x5b86790
// eh: try 0x5b8691f..0x5b86b36 -> pad 0x5b86b53 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b86b6d..0x5b86b72 -> pad 0x5b86b77 cleanup
// eh: try 0x5b86b7a..0x5b86b84 -> pad 0x5b86b8c catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b868c8: lea rbp, [rip + 0x16f2b29]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5b868cf: lea r15, [rip + 0x16f40ba]  ; TypeInfo_Map_MapLoader
// asm:   0x5b868d6: lea r14, [rip + 0x1702e4b]  ; MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey
// asm:   0x5b868dd: jmp 0x5b868ee
// asm:   0x5b868e0: mov rbx, qword ptr [rsp + 8]
// asm:   0x5b868e5: test rbx, rbx
// asm:   0x5b868e8: je 0x5b86b22
// asm:   0x5b8690e: nop 
// asm:   0x5b86b3b: mov rdi, r14
// asm:   0x5b86b3e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b86b43: jmp 0x5b86b55
// asm:   0x5b86b45: jmp 0x5b86b55
// asm:   0x5b86b47: jmp 0x5b86b55
// asm:   0x5b86b49: jmp 0x5b86b55
// asm:   0x5b86b4b: jmp 0x5b86b55
// asm:   0x5b86b4d: jmp 0x5b86b55
// asm:   0x5b86b4f: jmp 0x5b86b55
// asm:   0x5b86b51: jmp 0x5b86b55
// asm:   0x5b86b53: jmp 0x5b86b55
// asm:   0x5b86b55: mov rbx, rax
// asm:   0x5b86b58: cmp edx, 1
// asm:   0x5b86b5b: jne 0x5b86b7a
// asm:   0x5b86b5d: mov rdi, rbx
// asm:   0x5b86b60: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b86b65: mov r14, qword ptr [rax]
// asm:   0x5b86b68: mov qword ptr [rsp + 0x20], r14
// asm:   0x5b86b6d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b86b72: jmp 0x5b86a84
// asm:   0x5b86b77: mov rbx, rax
// asm:   0x5b86b7a: lea rdi, [rsp + 0x20]
// asm:   0x5b86b7f: call 0x2fd7b60  ; il2cpp_runtime_helper_02fd7b60()
// asm:   0x5b86b84: mov rdi, rbx
// asm:   0x5b86b87: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b86b8c: mov rdi, rax
// asm:   0x5b86b8f: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicEvaluator__FindSubcolliders
               (CustomLogic_CustomLogicEvaluator_o *__this,UnityEngine_Transform_o *t,
               System_Collections_Generic_HashSet_GameObject__o *set,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar4;
  char cVar5;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  MethodInfo *method_00;
  UnityEngine_Transform_o *t_00;
  ulong uVar9;
  long lVar10;
  Il2CppObject *local_60;
  Il2CppObject *local_58;
  CustomLogic_CustomLogicEvaluator_o *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  local_50 = __this;
  if (Il2CppMethodInitialized_075473bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_075473bf = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  if (t == (UnityEngine_Transform_o *)0x0) {
label_05b86b36:
    ThrowNullReferenceException();
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)t,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Collider);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)t,(MethodInfo *)0x0);
    if (set == (System_Collections_Generic_HashSet_GameObject__o *)0x0) goto label_05b86b36;
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)set,(Il2CppObject *)pUVar6,
               (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
  }
  pIVar7 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(t,(MethodInfo *)0x0);
  local_48 = 0;
  local_40 = &local_60;
  local_38 = &local_58;
  do {
    local_60 = pIVar7;
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar7->klass;
    uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar10) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
          goto label_05b86943;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05b86943:
    cVar5 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    pIVar7 = local_60;
    if (cVar5 == '\0') {
      pIVar7 = il2cpp_vm_Object_IsInst(local_60,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar7 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar2 = pIVar7->klass;
      uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
      local_58 = pIVar7;
      if (uVar9 == 0) goto label_05b86adf;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar10 = 0;
      break;
    }
    if (local_60 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_60->klass;
    uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar10) ==
            TypeInfo_System_Collections_IEnumerator) {
          method_00 = (MethodInfo *)(pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 1));
          goto label_05b869d7;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    method_00 = (MethodInfo *)
                GetInterfaceInvokeDataFromVTableSlowPath
                          (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05b869d7:
    t_00 = (UnityEngine_Transform_o *)
           (*method_00->methodPointer)(pIVar7,(MethodInfo *)method_00->virtualMethodPointer);
    if (t_00 != (UnityEngine_Transform_o *)0x0) {
      bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      method_00 = (MethodInfo *)(ulong)bVar1;
      if (((t_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((t_00->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(t_00);
      }
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if (t_00 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)t_00,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)pUVar6,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    pIVar7 = local_60;
    if (!bVar4) {
      CustomLogic_CustomLogicEvaluator__FindSubcolliders(local_50,t_00,set,method_00);
      pIVar7 = local_60;
    }
  } while( true );
  while (lVar10 = lVar10 + 0x10, uVar9 * 0x10 != lVar10) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_System_IDisposable) {
      pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
      goto label_05b86afd;
    }
  }
label_05b86adf:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05b86afd:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  return;
}


// CustomLogic.CustomLogicEvaluator$$SetupMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicEvaluator__SetupMapObject (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5b857f0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicEvaluator__SetupMapObject
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  bool bVar3;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_075473c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item);
    Il2CppMethodInitialized_075473c0 = '\x01';
  }
  if (((obj == (Map_MapObject_o *)0x0) ||
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) ||
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin,
     pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05b858f0;
  bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar2,(pMVar1->fields).Id,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                    );
  if (!bVar3) {
    pMVar1 = (obj->fields).ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) goto label_05b858f0;
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin;
    key = (pMVar1->fields).Id;
    pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor(pCVar4,obj,(MethodInfo *)0x0);
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05b858f0;
    System_Collections_Generic_Dictionary_int__object___Add
              (pSVar2,key,(Il2CppObject *)pCVar4,
               (MethodInfo_4A0F740 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add);
  }
  pMVar1 = (obj->fields).ScriptObject;
  if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    pCVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                       (pSVar2,(pMVar1->fields).Id,
                        (MethodInfo_4A0F690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                       );
    return pCVar4;
  }
label_05b858f0:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$GetOrCreateMapObjectBuiltin
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5b6c380

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  bool bVar3;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_075473c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item);
    Il2CppMethodInitialized_075473c1 = '\x01';
  }
  if (obj == (Map_MapObject_o *)0x0) {
    return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  }
  pMVar1 = (obj->fields).ScriptObject;
  if ((pMVar1 == (Map_MapScriptBaseObject_o *)0x0) ||
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin,
     pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05b6c48b;
  bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar2,(pMVar1->fields).Id,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                    );
  if (!bVar3) {
    pMVar1 = (obj->fields).ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) goto label_05b6c48b;
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin;
    key = (pMVar1->fields).Id;
    pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor(pCVar4,obj,(MethodInfo *)0x0);
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05b6c48b;
    System_Collections_Generic_Dictionary_int__object___Add
              (pSVar2,key,(Il2CppObject *)pCVar4,
               (MethodInfo_4A0F740 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_Add);
  }
  pMVar1 = (obj->fields).ScriptObject;
  if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToMapObjectBuiltin,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    pCVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                       (pSVar2,(pMVar1->fields).Id,
                        (MethodInfo_4A0F690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_get_Item
                       );
    return pCVar4;
  }
label_05b6c48b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$SetupNetworking
// il2cpp: CustomLogic_CustomLogicPhotonSync_o* CustomLogic_CustomLogicEvaluator__SetupNetworking (CustomLogic_CustomLogicEvaluator_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5b85900
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b85c48: lea rcx, [rip + 0x17250c1]  ; MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync
// asm:   0x5b85c4f: mov rsi, qword ptr [rcx]
// asm:   0x5b85c52: mov rdi, rax
// asm:   0x5b85c55: call 0x363b730  ; UnityEngine_GameObject__GetComponent_object_()
// asm:   0x5b85c5a: mov rbx, rax
// asm:   0x5b85c5d: jmp 0x5b859b7

CustomLogic_CustomLogicPhotonSync_o *
CustomLogic_CustomLogicEvaluator__SetupNetworking
          (CustomLogic_CustomLogicEvaluator_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Quaternion_StaticFields *pUVar7;
  bool bVar8;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_00;
  System_Object_array *data;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  UnityEngine_GameObject_o *__this_01;
  CustomLogic_CustomLogicPhotonSync_o *pCVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o position;
  undefined1 local_65;
  float local_64;
  int32_t local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_075473c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
    Il2CppMethodInitialized_075473c2 = '\x01';
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pMVar4 = (obj->fields).ScriptObject, pMVar4 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar4->fields).Networked == false) {
      return (CustomLogic_CustomLogicPhotonSync_o *)0x0;
    }
    pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToNetworkView;
    if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      bVar8 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar5,(pMVar4->fields).Id,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                        );
      if (bVar8) {
        return (CustomLogic_CustomLogicPhotonSync_o *)0x0;
      }
      pMVar4 = (obj->fields).ScriptObject;
      if (pMVar4 != (Map_MapScriptBaseObject_o *)0x0) {
        pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IdToNetworkView;
        key = (pMVar4->fields).Id;
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
        CustomLogic_CustomLogicNetworkViewBuiltin___ctor(__this_00,obj,(MethodInfo *)0x0);
        if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary_int__object___Add
                    (pSVar5,key,(Il2CppObject *)__this_00,
                     (MethodInfo_4A0F740 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Add);
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          if (!bVar8) {
            return (CustomLogic_CustomLogicPhotonSync_o *)0x0;
          }
          data = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
          local_60[1] = 1;
          pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,local_60 + 1);
          if (data != (System_Object_array *)0x0) {
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((data->obj).klass)->_1).element_class),
               pIVar10 == (Il2CppObject *)0x0)) goto label_05b85c6c;
            if ((int)data->max_length == 0) goto label_05b85c67;
            data->m_Items[0] = pIVar9;
            Il2CppCodeGenWriteBarrier(data->m_Items);
            pMVar4 = (obj->fields).ScriptObject;
            if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) goto label_05b85c62;
            local_60[0] = (pMVar4->fields).Id;
            pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,local_60);
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((data->obj).klass)->_1).element_class),
               pIVar10 == (Il2CppObject *)0x0)) {
label_05b85c6c:
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if ((data->max_length & 0xfffffffe) != 0) {
              data->m_Items[1] = pIVar9;
              Il2CppCodeGenWriteBarrier(data->m_Items + 1);
              local_65 = 0;
              pIVar9 = il2cpp_vm_Object_Box(g_data_075566f0,&local_65);
              if ((pIVar9 != (Il2CppObject *)0x0) &&
                 (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((data->obj).klass)->_1).element_class),
                 pIVar10 == (Il2CppObject *)0x0)) goto label_05b85c6c;
              if (2 < (uint)data->max_length) {
                data->m_Items[2] = pIVar9;
                Il2CppCodeGenWriteBarrier(data->m_Items + 2);
                if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e4b6 = '\x01';
                }
                pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar1._0_4_ = (pUVar6->zeroVector).fields.x;
                uVar1._4_4_ = (pUVar6->zeroVector).fields.y;
                fVar14 = (pUVar6->zeroVector).fields.z;
                uVar12 = 0;
                uVar13 = 0;
                if (g_data_0753e72b == '\0') {
                  uStack_50 = 0;
                  local_64 = fVar14;
                  local_58 = uVar1;
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                  g_data_0753e72b = '\x01';
                  uVar1._0_4_ = (undefined4)local_58;
                  uVar1._4_4_ = local_58._4_4_;
                  uVar12 = (undefined4)uStack_50;
                  uVar13 = uStack_50._4_4_;
                  fVar14 = local_64;
                }
                pUVar7 = TypeInfo_UnityEngine_Quaternion->static_fields;
                uVar2._0_4_ = (pUVar7->identityQuaternion).fields.x;
                uVar2._4_4_ = (pUVar7->identityQuaternion).fields.y;
                uVar3._0_4_ = (pUVar7->identityQuaternion).fields.z;
                uVar3._4_4_ = (pUVar7->identityQuaternion).fields.w;
                if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                  local_58 = CONCAT44(uVar1._4_4_,(undefined4)uVar1);
                  uStack_50 = CONCAT44(uVar13,uVar12);
                  uStack_30 = 0;
                  uStack_40 = 0;
                  local_64 = fVar14;
                  local_48 = uVar3;
                  local_38 = uVar2;
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                  uVar1._0_4_ = (undefined4)local_58;
                  uVar1._4_4_ = local_58._4_4_;
                  fVar14 = local_64;
                  uVar2._0_4_ = (undefined4)local_38;
                  uVar2._4_4_ = local_38._4_4_;
                  uVar3._0_4_ = (undefined4)local_48;
                  uVar3._4_4_ = local_48._4_4_;
                }
                rotation.fields.y = (float)uVar2._4_4_;
                rotation.fields.x = (float)(undefined4)uVar2;
                rotation.fields.w = (float)uVar3._4_4_;
                rotation.fields.z = (float)(undefined4)uVar3;
                position.fields.y = (float)uVar1._4_4_;
                position.fields.x = (float)(undefined4)uVar1;
                position.fields.z = fVar14;
                __this_01 = Photon_Pun_PhotonNetwork__Instantiate
                                      ("Game/CustomLogicPhotonSyncDynamicPrefab",position,rotation,0,data,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                  pCVar11 = UnityEngine_GameObject__GetComponent_object_
                                      (__this_01,
                                       (MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
                  return pCVar11;
                }
                goto label_05b85c62;
              }
            }
label_05b85c67:
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
  }
label_05b85c62:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicEvaluator__GetLineNumberString (CustomLogic_CustomLogicEvaluator_o* __this, int32_t lineNumber, const MethodInfo* method);
// 0x5b86ba0

System_String_o *
CustomLogic_CustomLogicEvaluator__GetLineNumberString
          (CustomLogic_CustomLogicEvaluator_o *__this,int32_t lineNumber,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_String_o *pSVar1;
  int32_t local_4;
  
  __this_00 = (__this->fields)._Compiler_k__BackingField;
  if (__this_00 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = System_Int32__ToString(&local_4,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = CustomLogic_CustomLogicCompiler__FormatLineNumber(__this_00,lineNumber,method);
  return pSVar1;
}


// CustomLogic.CustomLogicEvaluator$$LogCustomLogicError
// il2cpp: void CustomLogic_CustomLogicEvaluator__LogCustomLogicError (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* errorMessage, bool showInChat, const MethodInfo* method);
// 0x5b83160

void CustomLogic_CustomLogicEvaluator__LogCustomLogicError
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *errorMessage,bool showInChat,
               MethodInfo *method)

{
  uint32_t uVar1;
  Settings_UISettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_InputSettings_o *pSVar4;
  Settings_GeneralInputSettings_o *pSVar5;
  Settings_KeybindSetting_o *pSVar6;
  bool bVar7;
  System_String_o *str1;
  
  if (Il2CppMethodInitialized_075473c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"CL Runtime Exception, press ");
    il2cpp_codegen_initialize_runtime_metadata(&" to view in debug console");
    Il2CppMethodInitialized_075473c3 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  ApplicationManagers_DebugConsole__LogCustomLogic(errorMessage,false,(MethodInfo *)0x0);
  if (showInChat) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      bVar7 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    }
    else {
      bVar7 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    }
    if (bVar7) {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).ChatCLErrors, pSVar3 == (Settings_BoolSetting_o *)0x0)) {
label_05b832e2:
        ThrowNullReferenceException();
      }
      if ((pSVar3->fields)._value == false) {
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        if (((pSVar4 == (Settings_InputSettings_o *)0x0) ||
            (pSVar5 = (pSVar4->fields).General, pSVar5 == (Settings_GeneralInputSettings_o *)0x0)) ||
           (pSVar6 = (pSVar5->fields).DebugWindow, pSVar6 == (Settings_KeybindSetting_o *)0x0))
        goto label_05b832e2;
        str1 = (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                         (pSVar6,(pSVar6->klass->vtable)._3_ToString.method);
        errorMessage = System_String__Concat_5301f10
                                 ("CL Runtime Exception, press ",str1," to view in debug console",(MethodInfo *)0x0);
        uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddException(errorMessage,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_CustomLogicEvaluator__GetStartAst (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b86bd0

CustomLogic_CustomLogicStartAst_o *
CustomLogic_CustomLogicEvaluator__GetStartAst(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._start;
}


// CustomLogic.CustomLogicEvaluator$$GetStaticClasses
// il2cpp: System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* CustomLogic_CustomLogicEvaluator__GetStaticClasses (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b86be0

System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *
CustomLogic_CustomLogicEvaluator__GetStaticClasses
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._staticClasses;
}


// CustomLogic.CustomLogicEvaluator$$GetNamespacedStaticClasses
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o* CustomLogic_CustomLogicEvaluator__GetNamespacedStaticClasses (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b86bf0

System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o *
CustomLogic_CustomLogicEvaluator__GetNamespacedStaticClasses
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._namespacedStaticClasses;
}


// CustomLogic.CustomLogicEvaluator$$GetModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicEvaluator__GetModeSettings (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b77610
// eh: try 0x5b7771c..0x5b77a06 -> pad 0x5b779be (+23 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b77a11..0x5b77a1b -> pad 0x5b77acf catch (...) [compiler noexcept guard]
// eh: try 0x5b77a2f..0x5b77abf -> pad 0x5b77abf (+1 call sites) cleanup
// eh: try 0x5b77ac2..0x5b77ac7 -> pad 0x5b77acf catch (...) [compiler noexcept guard]
// asm: 83 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b777df: nop 
// asm:   0x5b779b0: mov rdi, rbp
// asm:   0x5b779b3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b779b8: jmp 0x5b779c4
// asm:   0x5b779ba: jmp 0x5b779c4
// asm:   0x5b779bc: jmp 0x5b779c4
// asm:   0x5b779be: jmp 0x5b779c4
// asm:   0x5b779c0: jmp 0x5b779c4
// asm:   0x5b779c2: jmp 0x5b779c4
// asm:   0x5b779c4: mov rbx, rdx
// asm:   0x5b779c7: mov r15, rax
// asm:   0x5b779ca: jmp 0x5b77a1b
// asm:   0x5b779cc: jmp 0x5b779e6
// asm:   0x5b779ce: jmp 0x5b779e6
// asm:   0x5b779d0: jmp 0x5b779e6
// asm:   0x5b779d2: jmp 0x5b779e6
// asm:   0x5b779d4: jmp 0x5b779e6
// asm:   0x5b779d6: jmp 0x5b779e6
// asm:   0x5b779d8: jmp 0x5b779e6
// asm:   0x5b779da: jmp 0x5b779e6
// asm:   0x5b779dc: jmp 0x5b779e6
// asm:   0x5b779de: jmp 0x5b779e6
// asm:   0x5b779e0: jmp 0x5b779e6
// asm:   0x5b779e2: jmp 0x5b779e6
// asm:   0x5b779e4: jmp 0x5b779e6
// asm:   0x5b779e6: mov rbx, rdx
// asm:   0x5b779e9: mov r15, rax
// asm:   0x5b779ec: cmp ebx, 1
// asm:   0x5b779ef: jne 0x5b77a11
// asm:   0x5b779f1: mov rdi, r15
// asm:   0x5b779f4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b779f9: mov rbp, qword ptr [rax]
// asm:   0x5b779fc: mov qword ptr [rsp + 0x30], rbp
// asm:   0x5b77a01: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b77a06: jmp 0x5b77967
// asm:   0x5b77a0b: mov rbx, rdx
// asm:   0x5b77a0e: mov r15, rax
// asm:   0x5b77a11: lea rdi, [rsp + 0x30]
// asm:   0x5b77a16: call 0x2fd7c00  ; il2cpp_runtime_helper_02fd7c00()
// asm:   0x5b77a1b: cmp ebx, 1
// asm:   0x5b77a1e: jne 0x5b77ac7
// asm:   0x5b77a24: mov rdi, r15
// asm:   0x5b77a27: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b77a2c: mov rbx, rax
// asm:   0x5b77a2f: lea rdi, [rip + 0x170068a]  ; TypeInfo_System_Exception
// asm:   0x5b77a36: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b77a3b: mov rcx, qword ptr [rbx]
// asm:   0x5b77a3e: mov rsi, qword ptr [rcx]
// asm:   0x5b77a41: mov rdi, rax
// asm:   0x5b77a44: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b77a49: test al, al
// asm:   0x5b77a4b: je 0x5b77a9e
// asm:   0x5b77a4d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b77a52: lea rdi, [rip + 0x17614af]  ; "Custom logic error getting main logic settings"
// asm:   0x5b77a59: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b77a5e: mov rsi, rax
// asm:   0x5b77a61: mov edx, 1
// asm:   0x5b77a66: call 0x5b83160  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x5b77a6b: lea rdi, [rip + 0x16f690e]  ; TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting
// asm:   0x5b77a72: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b77a77: mov rdi, rax
// asm:   0x5b77a7a: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b77a7f: mov rbx, rax
// asm:   0x5b77a82: lea rdi, [rip + 0x1713877]  ; MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor
// asm:   0x5b77a89: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b77a8e: mov rdi, rbx
// asm:   0x5b77a91: mov rsi, rax
// asm:   0x5b77a94: call 0x4bac8d0  ; System_Collections_Generic_Dictionary_object__object____ctor()
// asm:   0x5b77a99: jmp 0x5b77985
// asm:   0x5b77a9e: mov edi, 8
// asm:   0x5b77aa3: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b77aa8: mov rcx, qword ptr [rbx]
// asm:   0x5b77aab: mov qword ptr [rax], rcx
// asm:   0x5b77aae: lea rsi, [rip + 0x12b5a4b]
// asm:   0x5b77ab5: mov rdi, rax
// asm:   0x5b77ab8: xor edx, edx
// asm:   0x5b77aba: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b77abf: mov r15, rax
// asm:   0x5b77ac2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b77ac7: mov rdi, r15
// asm:   0x5b77aca: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b77acf: mov rdi, rax
// asm:   0x5b77ad2: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicEvaluator__GetModeSettings
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  Il2CppObject *pIVar4;
  Settings_BaseSetting_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R9;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_68;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSStack_50;
  undefined1 auStack_48 [16];
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_075473c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    Il2CppMethodInitialized_075473c4 = '\x01';
  }
  SStack_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_01 = (MethodInfo *)0x0;
  classInstance =
       CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                 (__this,"Main",
                  TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false,
                  (System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this,classInstance,method_00);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(classInstance->fields).Variables;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        (pSVar1,(MethodInfo_4AAD0F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
  if (__this_01 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_48,
             __this_01,
             (MethodInfo_511A520 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
  SStack_68.fields._currentKey = (Il2CppObject *)pSStack_38;
  SStack_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_48._0_8_;
  SStack_68.fields._index = auStack_48._8_4_;
  SStack_68.fields._version = auStack_48._12_4_;
  auStack_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_48._8_8_ = &SStack_68;
  pSStack_50 = __this_00;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    while (bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (&SStack_68,
                              (MethodInfo_4CE7080 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                             ), pIVar2 = SStack_68.fields._currentKey, bVar3) {
      if ((System_String_o *)SStack_68.fields._currentKey == (System_String_o *)0x0) goto label_05b77997;
      bVar3 = System_String__StartsWith
                        ((System_String_o *)SStack_68.fields._currentKey,"_",
                         (MethodInfo *)0x0);
      if (!bVar3) {
        if (Il2CppMethodInitialized_07547356 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Type");
          Il2CppMethodInitialized_07547356 = '\x01';
        }
        bVar3 = System_String__op_Equality((System_String_o *)pIVar2,"Type",(MethodInfo *)0x0);
        if ((!bVar3) || ((classInstance->fields)._containsTypeOverride != false)) {
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (classInstance->fields).Variables;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b7799c;
          pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,pIVar2,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
          pSVar5 = CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
                             (__this,"Main",(System_String_o *)pIVar2,pIVar4,method_01);
          if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
  else {
    while (bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (&SStack_68,
                              (MethodInfo_4CE7080 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                             ), pIVar2 = SStack_68.fields._currentKey, bVar3) {
      if ((System_String_o *)SStack_68.fields._currentKey == (System_String_o *)0x0) {
label_05b77997:
        ThrowNullReferenceException();
      }
      bVar3 = System_String__StartsWith
                        ((System_String_o *)SStack_68.fields._currentKey,"_",
                         (MethodInfo *)0x0);
      if (!bVar3) {
        if (Il2CppMethodInitialized_07547356 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Type");
          Il2CppMethodInitialized_07547356 = '\x01';
        }
        bVar3 = System_String__op_Equality((System_String_o *)pIVar2,"Type",(MethodInfo *)0x0);
        if ((!bVar3) || ((classInstance->fields)._containsTypeOverride != false)) {
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (classInstance->fields).Variables;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05b7799c:
            ThrowNullReferenceException();
          }
          pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,pIVar2,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
          pSVar5 = CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
                             (__this,"Main",(System_String_o *)pIVar2,pIVar4,method_01);
          if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_50,pIVar2,
                       (Il2CppObject *)pSVar5,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
          }
        }
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (&SStack_68,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose);
  return pSStack_50;
}


// CustomLogic.CustomLogicEvaluator$$GetAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* CustomLogic_CustomLogicEvaluator__GetAddonSettings (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b787e0
// eh: try 0x5b789ca..0x5b78aa0 -> pad 0x5b78edf (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b78aa0..0x5b78dcc -> pad 0x5b78d80 (+25 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b78dd7..0x5b78de1 -> pad 0x5b78eb8 catch (...) [compiler noexcept guard]
// eh: try 0x5b78df5..0x5b78eb4 -> pad 0x5b78ec0 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b78ec6..0x5b78ecb -> pad 0x5b78f40 catch (...) [compiler noexcept guard]
// eh: try 0x5b78f01..0x5b78f06 -> pad 0x5b78f2b cleanup
// eh: try 0x5b78f2e..0x5b78f38 -> pad 0x5b78f40 catch (...) [compiler noexcept guard]
// asm: 116 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b78b47: nop word ptr [rax + rax]
// asm:   0x5b78d63: mov rdi, rbp
// asm:   0x5b78d66: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b78d7a: jmp 0x5b78d88
// asm:   0x5b78d7c: jmp 0x5b78d88
// asm:   0x5b78d7e: jmp 0x5b78d88
// asm:   0x5b78d80: jmp 0x5b78d88
// asm:   0x5b78d82: jmp 0x5b78d88
// asm:   0x5b78d84: jmp 0x5b78d88
// asm:   0x5b78d86: jmp 0x5b78d88
// asm:   0x5b78d88: mov rbx, rdx
// asm:   0x5b78d8b: mov r14, rax
// asm:   0x5b78d8e: jmp 0x5b78de1
// asm:   0x5b78d90: jmp 0x5b78daa
// asm:   0x5b78d92: jmp 0x5b78daa
// asm:   0x5b78d94: jmp 0x5b78daa
// asm:   0x5b78d96: jmp 0x5b78daa
// asm:   0x5b78d98: jmp 0x5b78daa
// asm:   0x5b78d9a: jmp 0x5b78daa
// asm:   0x5b78d9c: jmp 0x5b78daa
// asm:   0x5b78d9e: jmp 0x5b78daa
// asm:   0x5b78da0: jmp 0x5b78daa
// asm:   0x5b78da2: jmp 0x5b78daa
// asm:   0x5b78da4: jmp 0x5b78daa
// asm:   0x5b78da6: jmp 0x5b78daa
// asm:   0x5b78da8: jmp 0x5b78daa
// asm:   0x5b78daa: mov rbx, rdx
// asm:   0x5b78dad: mov r14, rax
// asm:   0x5b78db0: cmp ebx, 1
// asm:   0x5b78db3: jne 0x5b78dd7
// asm:   0x5b78db5: mov rdi, r14
// asm:   0x5b78db8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b78dbd: mov rbp, qword ptr [rax]
// asm:   0x5b78dc0: mov qword ptr [rsp + 0x18], rbp
// asm:   0x5b78dc5: xor ebx, ebx
// asm:   0x5b78dc7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b78dcc: jmp 0x5b78ce7
// asm:   0x5b78dd1: mov rbx, rdx
// asm:   0x5b78dd4: mov r14, rax
// asm:   0x5b78dd7: lea rdi, [rsp + 0x18]
// asm:   0x5b78ddc: call 0x2fd7c30  ; il2cpp_runtime_helper_02fd7c30()
// asm:   0x5b78de1: cmp ebx, 1
// asm:   0x5b78de4: jne 0x5b78ee7
// asm:   0x5b78dea: mov rdi, r14
// asm:   0x5b78ded: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b78df2: mov rbp, rax
// asm:   0x5b78df5: lea rdi, [rip + 0x16ff2c4]  ; TypeInfo_System_Exception
// asm:   0x5b78dfc: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b78e01: mov rcx, qword ptr [rbp]
// asm:   0x5b78e05: mov rsi, qword ptr [rcx]
// asm:   0x5b78e08: mov rdi, rax
// asm:   0x5b78e0b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b78e10: test al, al
// asm:   0x5b78e12: je 0x5b78e92
// asm:   0x5b78e14: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b78e19: lea rdi, [rip + 0x17600d8]  ; "Custom logic error getting addon settings for "
// asm:   0x5b78e20: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b78e25: mov rdi, rax
// asm:   0x5b78e28: mov rsi, r15
// asm:   0x5b78e2b: xor edx, edx
// asm:   0x5b78e2d: call 0x53f0320  ; System_String__Concat()
// asm:   0x5b78e32: mov rsi, rax
// asm:   0x5b78e35: mov edx, 1
// asm:   0x5b78e3a: call 0x5b83160  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x5b78e3f: jmp 0x5b789c0
// asm:   0x5b78e92: mov edi, 8
// asm:   0x5b78e97: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b78e9c: mov rcx, qword ptr [rbp]
// asm:   0x5b78ea0: mov qword ptr [rax], rcx
// asm:   0x5b78ea3: lea rsi, [rip + 0x12b4656]
// asm:   0x5b78eaa: mov rdi, rax
// asm:   0x5b78ead: xor edx, edx
// asm:   0x5b78eaf: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b78eb4: jmp 0x5b78ee1
// asm:   0x5b78eb6: jmp 0x5b78ec0
// asm:   0x5b78eb8: mov rdi, rax
// asm:   0x5b78ebb: call 0x2ab61e0  ; __clang_call_terminate()
// asm:   0x5b78ec0: mov rbx, rdx
// asm:   0x5b78ec3: mov r14, rax
// asm:   0x5b78ec6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b78ecb: jmp 0x5b78ee7
// asm:   0x5b78ecd: jmp 0x5b78ee1
// asm:   0x5b78ecf: jmp 0x5b78ee1
// asm:   0x5b78ed1: jmp 0x5b78ee1
// asm:   0x5b78ed3: jmp 0x5b78ee1
// asm:   0x5b78ed5: jmp 0x5b78ee1
// asm:   0x5b78ed7: jmp 0x5b78ee1
// asm:   0x5b78ed9: jmp 0x5b78ee1
// asm:   0x5b78edb: jmp 0x5b78ee1
// asm:   0x5b78edd: jmp 0x5b78ee1
// asm:   0x5b78edf: jmp 0x5b78ee1
// asm:   0x5b78ee1: mov rbx, rdx
// asm:   0x5b78ee4: mov r14, rax
// asm:   0x5b78ee7: mov rbp, qword ptr [rsp + 8]
// asm:   0x5b78eec: cmp ebx, 1
// asm:   0x5b78eef: jne 0x5b78f2e
// asm:   0x5b78ef1: mov rdi, r14
// asm:   0x5b78ef4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b78ef9: mov rbx, qword ptr [rax]
// asm:   0x5b78efc: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5b78f01: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b78f06: lea rax, [rip + 0x1716fcb]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
// asm:   0x5b78f0d: mov rsi, qword ptr [rax]
// asm:   0x5b78f10: lea rdi, [rsp + 0x30]
// asm:   0x5b78f15: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b78f1a: test rbx, rbx
// asm:   0x5b78f1d: je 0x5b78e5d
// asm:   0x5b78f23: mov rdi, rbx
// asm:   0x5b78f26: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b78f2b: mov r14, rax
// asm:   0x5b78f2e: lea rdi, [rsp + 0x68]
// asm:   0x5b78f33: call 0x2fd7c60  ; il2cpp_runtime_helper_02fd7c60()
// asm:   0x5b78f38: mov rdi, r14
// asm:   0x5b78f3b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b78f40: mov rdi, rax
// asm:   0x5b78f43: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicEvaluator__GetAddonSettings
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicToken_o *pCVar3;
  System_String_o *className;
  System_String_o *pSVar4;
  bool bVar5;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar6;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar7;
  int *piVar8;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_01;
  Il2CppObject *pIVar9;
  Settings_BaseSetting_o *pSVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R9;
  undefined1 local_90 [16];
  System_String_o *local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  System_String_o *local_68;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *local_60;
  undefined1 local_58 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_50;
  System_String_o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075473c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    Il2CppMethodInitialized_075473c5 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  local_68 = (System_String_o *)0x0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_48 = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
  pCVar1 = (__this->fields)._start;
  if (((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
      (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes,
      pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
     (pSVar6 = System_Collections_Generic_Dictionary_object__object___get_Keys
                         (pSVar2,(MethodInfo_4AAD0F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
                         ),
     pSVar6 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_90,pSVar6
             ,(MethodInfo_511A520 *)
              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
            );
  local_68 = local_80;
  local_78 = (undefined1  [8])local_90._0_8_;
  uStack_70 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_90._8_8_
  ;
  local_40 = 0;
  local_38 = local_78;
  do {
    do {
      bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_78,(MethodInfo_4CE7080 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee0
                        );
      className = local_68;
      if (!bVar5) {
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_78,
                   (MethodInfo_4CE7070 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
                  );
        return __this_00;
      }
      pCVar1 = (__this->fields)._start;
      if (pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)local_68,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         );
      if (pCVar7 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar3 = (pCVar7->fields).Token;
      if (pCVar3 == (CustomLogic_CustomLogicToken_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar9 = (pCVar3->fields).Value;
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar9->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      piVar8 = il2cpp_vm_Object_Unbox(pIVar9);
    } while (*piVar8 != 3);
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_01 = (MethodInfo *)0x0;
    classInstance =
         CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                   (__this,className,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false
                    ,(System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this,classInstance,method_00);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor)
    ;
    if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(classInstance->fields).Variables;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = System_Collections_Generic_Dictionary_object__object___get_Keys
                       (pSVar2,(MethodInfo_4AAD0F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    if (pSVar6 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_90,
               pSVar6,(MethodInfo_511A520 *)
                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator
              );
    local_48 = local_80;
    local_58 = (undefined1  [8])local_90._0_8_;
    pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 local_90._8_8_;
    local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_90._8_8_ =
         (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_58;
    local_60 = __this_01;
    if (__this_01 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
      while (bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                 *)local_58,
                                (MethodInfo_4CE7080 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                               ), pSVar4 = local_48, bVar5) {
        if (local_48 == (System_String_o *)0x0) goto label_05b78d31;
        bVar5 = System_String__StartsWith(local_48,"_",(MethodInfo *)0x0);
        if (!bVar5) {
          if (Il2CppMethodInitialized_07547356 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"Type");
            Il2CppMethodInitialized_07547356 = '\x01';
          }
          bVar5 = System_String__op_Equality(pSVar4,"Type",(MethodInfo *)0x0);
          if ((!bVar5) || ((classInstance->fields)._containsTypeOverride != false)) {
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (classInstance->fields).Variables;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b78d3b;
            pIVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)pSVar4,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
            pSVar10 = CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
                                (__this,className,pSVar4,pIVar9,method_01);
            if (pSVar10 != (Settings_BaseSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
          }
        }
      }
    }
    else {
      while (bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                 *)local_58,
                                (MethodInfo_4CE7080 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                               ), pSVar4 = local_48, bVar5) {
        if (local_48 == (System_String_o *)0x0) {
label_05b78d31:
          ThrowNullReferenceException();
        }
        bVar5 = System_String__StartsWith(local_48,"_",(MethodInfo *)0x0);
        if (!bVar5) {
          if (Il2CppMethodInitialized_07547356 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"Type");
            Il2CppMethodInitialized_07547356 = '\x01';
          }
          bVar5 = System_String__op_Equality(pSVar4,"Type",(MethodInfo *)0x0);
          if ((!bVar5) || ((classInstance->fields)._containsTypeOverride != false)) {
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (classInstance->fields).Variables;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05b78d3b:
              ThrowNullReferenceException();
            }
            pIVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)pSVar4,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
            pSVar10 = CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
                                (__this,className,pSVar4,pIVar9,method_01);
            if (pSVar10 != (Settings_BaseSetting_o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)local_60,
                         (Il2CppObject *)pSVar4,(Il2CppObject *)pSVar10,
                         (MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
            }
          }
        }
      }
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_58,
               (MethodInfo_4CE7070 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
              );
    if (__this_00 == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)
    {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)className,
               (Il2CppObject *)local_60,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item)
    ;
  } while( true );
}


// CustomLogic.CustomLogicEvaluator$$GetComponentSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicEvaluator__GetComponentSettings (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* component, System_Collections_Generic_List_string__o* parameters, const MethodInfo* method);
// 0x5b87160
// eh: try 0x5b872f9..0x5b877b0 -> pad 0x5b87742 (+41 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b877be..0x5b877c8 -> pad 0x5b8798e catch (...) [compiler noexcept guard]
// eh: try 0x5b877e5..0x5b877ea -> pad 0x5b877ef catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b877f5..0x5b877ff -> pad 0x5b8798e catch (...) [compiler noexcept guard]
// eh: try 0x5b87813..0x5b8797e -> pad 0x5b8797e (+1 call sites) cleanup
// eh: try 0x5b87981..0x5b87986 -> pad 0x5b8798e catch (...) [compiler noexcept guard]
// asm: 171 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8738f: nop 
// asm:   0x5b8740a: xor r15d, r15d
// asm:   0x5b874bc: nop dword ptr [rax]
// asm:   0x5b876cb: mov rdi, r15
// asm:   0x5b876ce: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b876e2: mov rdi, rbx
// asm:   0x5b876e5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8773e: jmp 0x5b87790
// asm:   0x5b87740: jmp 0x5b8778d
// asm:   0x5b87742: jmp 0x5b87756
// asm:   0x5b87744: jmp 0x5b87756
// asm:   0x5b87746: jmp 0x5b87756
// asm:   0x5b87748: jmp 0x5b87756
// asm:   0x5b8774a: jmp 0x5b87756
// asm:   0x5b8774c: jmp 0x5b87756
// asm:   0x5b8774e: jmp 0x5b87756
// asm:   0x5b87750: jmp 0x5b87756
// asm:   0x5b87752: jmp 0x5b87756
// asm:   0x5b87754: jmp 0x5b87756
// asm:   0x5b87756: mov rbp, rdx
// asm:   0x5b87759: mov rbx, rax
// asm:   0x5b8775c: jmp 0x5b877ff
// asm:   0x5b87761: jmp 0x5b877ca
// asm:   0x5b87763: jmp 0x5b877ca
// asm:   0x5b87765: jmp 0x5b877ca
// asm:   0x5b87767: jmp 0x5b877ca
// asm:   0x5b87769: jmp 0x5b877ca
// asm:   0x5b8776b: jmp 0x5b877ca
// asm:   0x5b8776d: jmp 0x5b877ca
// asm:   0x5b8776f: jmp 0x5b877ca
// asm:   0x5b87771: jmp 0x5b877ca
// asm:   0x5b87773: jmp 0x5b877ca
// asm:   0x5b87775: jmp 0x5b877ca
// asm:   0x5b87777: jmp 0x5b877ca
// asm:   0x5b87779: jmp 0x5b877ca
// asm:   0x5b8777b: jmp 0x5b877ca
// asm:   0x5b8777d: jmp 0x5b877ca
// asm:   0x5b8777f: jmp 0x5b8778d
// asm:   0x5b87781: jmp 0x5b8778d
// asm:   0x5b87783: jmp 0x5b87790
// asm:   0x5b87785: jmp 0x5b87790
// asm:   0x5b87787: jmp 0x5b87790
// asm:   0x5b87789: jmp 0x5b87790
// asm:   0x5b8778b: jmp 0x5b877ca
// asm:   0x5b8778d: mov r12, r13
// asm:   0x5b87790: mov rbp, rdx
// asm:   0x5b87793: mov rbx, rax
// asm:   0x5b87796: cmp ebp, 1
// asm:   0x5b87799: jne 0x5b877be
// asm:   0x5b8779b: mov rdi, rbx
// asm:   0x5b8779e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b877a3: mov r15, qword ptr [rax]
// asm:   0x5b877a6: mov qword ptr [rsp + 0x10], r15
// asm:   0x5b877ab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b877b0: mov r13, r12
// asm:   0x5b877b3: jmp 0x5b8740d
// asm:   0x5b877b8: mov rbp, rdx
// asm:   0x5b877bb: mov rbx, rax
// asm:   0x5b877be: lea rdi, [rsp + 0x10]
// asm:   0x5b877c3: call 0x2fd7c90  ; il2cpp_runtime_helper_02fd7c90()
// asm:   0x5b877c8: jmp 0x5b877ff
// asm:   0x5b877ca: mov rbp, rdx
// asm:   0x5b877cd: mov rbx, rax
// asm:   0x5b877d0: cmp ebp, 1
// asm:   0x5b877d3: jne 0x5b877f5
// asm:   0x5b877d5: mov rdi, rbx
// asm:   0x5b877d8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b877dd: mov rbx, qword ptr [rax]
// asm:   0x5b877e0: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5b877e5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b877ea: jmp 0x5b87678
// asm:   0x5b877ef: mov rbp, rdx
// asm:   0x5b877f2: mov rbx, rax
// asm:   0x5b877f5: lea rdi, [rsp + 0x10]
// asm:   0x5b877fa: call 0x2fd7cc0  ; il2cpp_runtime_helper_02fd7cc0()
// asm:   0x5b877ff: cmp ebp, 1
// asm:   0x5b87802: jne 0x5b87986
// asm:   0x5b87808: mov rdi, rbx
// asm:   0x5b8780b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b87810: mov rbx, rax
// asm:   0x5b87813: lea rdi, [rip + 0x16f08a6]  ; TypeInfo_System_Exception
// asm:   0x5b8781a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8781f: mov rcx, qword ptr [rbx]
// asm:   0x5b87822: mov rsi, qword ptr [rcx]
// asm:   0x5b87825: mov rdi, rax
// asm:   0x5b87828: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b8782d: test al, al
// asm:   0x5b8782f: je 0x5b8795d
// asm:   0x5b87835: mov rbp, qword ptr [rbx]
// asm:   0x5b87838: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8783d: lea rdi, [rip + 0x16ed0f4]  ; TypeInfo_string_array
// asm:   0x5b87844: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b87849: mov rdi, rax
// asm:   0x5b8784c: mov esi, 6
// asm:   0x5b87851: call 0x30d6180  ; SZArrayNew()
// asm:   0x5b87856: test rax, rax
// asm:   0x5b87859: je 0x5b87958
// asm:   0x5b8785f: mov rbx, rax
// asm:   0x5b87862: lea rdi, [rip + 0x1751697]  ; "Custom logic error getting component settings for "
// asm:   0x5b87869: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8786e: mov rdi, rbx
// asm:   0x5b87871: xor esi, esi
// asm:   0x5b87873: mov rdx, rax
// asm:   0x5b87876: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8787b: mov esi, 1
// asm:   0x5b87880: mov rdi, rbx
// asm:   0x5b87883: mov rdx, qword ptr [rsp + 0x28]
// asm:   0x5b87888: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8788d: lea rdi, [rip + 0x174a6ec]  ; ": "
// asm:   0x5b87894: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b87899: mov esi, 2
// asm:   0x5b8789e: mov rdi, rbx
// asm:   0x5b878a1: mov rdx, rax
// asm:   0x5b878a4: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b878a9: test rbp, rbp
// asm:   0x5b878ac: je 0x5b87958
// asm:   0x5b878b2: mov rax, qword ptr [rbp]
// asm:   0x5b878b6: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b878bd: mov rdi, rbp
// asm:   0x5b878c0: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b878c6: mov esi, 3
// asm:   0x5b878cb: mov rdi, rbx
// asm:   0x5b878ce: mov rdx, rax
// asm:   0x5b878d1: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b878d6: lea rdi, [rip + 0x17462a3]  ; "\n"
// asm:   0x5b878dd: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b878e2: mov esi, 4
// asm:   0x5b878e7: mov rdi, rbx
// asm:   0x5b878ea: mov rdx, rax
// asm:   0x5b878ed: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b878f2: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x5b878f6: test rdi, rdi
// asm:   0x5b878f9: je 0x5b87910
// asm:   0x5b878fb: mov rax, qword ptr [rdi]
// asm:   0x5b878fe: mov rsi, qword ptr [rax + 0x170]
// asm:   0x5b87905: call qword ptr [rax + 0x168]  ; vtable slot 3
// asm:   0x5b8790b: mov rdx, rax
// asm:   0x5b8790e: jmp 0x5b87912
// asm:   0x5b87910: xor edx, edx
// asm:   0x5b87912: mov esi, 5
// asm:   0x5b87917: mov rdi, rbx
// asm:   0x5b8791a: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8791f: mov rdi, rbx
// asm:   0x5b87922: xor esi, esi
// asm:   0x5b87924: call 0x5402910  ; System_String__Concat()
// asm:   0x5b87929: mov rbx, rax
// asm:   0x5b8792c: lea rdi, [rip + 0x16efd15]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5b87933: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b87938: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5b8793f: jne 0x5b87949
// asm:   0x5b87941: mov rdi, rax
// asm:   0x5b87944: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5b87949: mov rdi, rbx
// asm:   0x5b8794c: xor esi, esi
// asm:   0x5b8794e: call 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x5b87953: jmp 0x5b87691
// asm:   0x5b87958: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5b8795d: mov edi, 8
// asm:   0x5b87962: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b87967: mov rcx, qword ptr [rbx]
// asm:   0x5b8796a: mov qword ptr [rax], rcx
// asm:   0x5b8796d: lea rsi, [rip + 0x12a5b8c]
// asm:   0x5b87974: mov rdi, rax
// asm:   0x5b87977: xor edx, edx
// asm:   0x5b87979: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b8797e: mov rbx, rax
// asm:   0x5b87981: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b87986: mov rdi, rbx
// asm:   0x5b87989: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b8798e: mov rdi, rax
// asm:   0x5b87991: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicEvaluator__GetComponentSettings
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *component,
          System_Collections_Generic_List_string__o *parameters,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_String_o *pSVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_String_array *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  Il2CppObject *obj;
  System_String_o *value;
  Settings_BaseSetting_o *value_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_R9;
  undefined1 local_98 [16];
  System_String_o *local_88;
  System_String_o *local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  System_String_o *local_68;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *local_40;
  CustomLogic_CustomLogicEvaluator_o *local_38;
  
  local_80 = component;
  if (Il2CppMethodInitialized_075473c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    Il2CppMethodInitialized_075473c6 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  local_78 = (undefined1  [8])0x0;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  local_68 = (System_String_o *)0x0;
  local_40 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)local_40,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_02 = (MethodInfo *)0x0;
  classInstance =
       CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                 (__this,local_80,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,false,
                  (System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance(__this,classInstance,method_00);
  if (parameters == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
             (System_Collections_Generic_List_object__o *)parameters,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_58.fields._current = (Il2CppObject *)local_88;
  local_58.fields._list = (System_Collections_Generic_List_T__o *)local_98._0_8_;
  local_58.fields._index = local_98._8_4_;
  local_58.fields._version = local_98._12_4_;
  local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_98._8_8_ = &local_58;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    if (bVar4) {
      if ((System_String_o *)local_58.fields._current != (System_String_o *)0x0) {
        pSVar5 = System_String__Split((System_String_o *)local_58.fields._current,0x3a,0,(MethodInfo *)0x0);
        if (pSVar5 != (System_String_array *)0x0) {
          iVar1 = (int)pSVar5->max_length;
          if (iVar1 == 0) {
label_05b87731:
            ThrowIndexOutOfRangeException();
          }
          if (iVar1 != 1) {
            ThrowNullReferenceException();
          }
label_05b87729:
          ThrowIndexOutOfRangeException();
        }
label_05b87715:
        ThrowNullReferenceException();
      }
label_05b876f4:
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_58,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext), bVar4) {
      if ((System_String_o *)local_58.fields._current == (System_String_o *)0x0) goto label_05b876f4;
      pSVar5 = System_String__Split((System_String_o *)local_58.fields._current,0x3a,0,(MethodInfo *)0x0);
      if (pSVar5 == (System_String_array *)0x0) goto label_05b87715;
      iVar1 = (int)pSVar5->max_length;
      if (iVar1 == 1) goto label_05b87729;
      if (iVar1 == 0) goto label_05b87731;
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                 (Il2CppObject *)pSVar5->m_Items[0],(Il2CppObject *)pSVar5->m_Items[1],
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_58,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(classInstance->fields).Variables;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        (pSVar2,(MethodInfo_4AAD0F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
  if (__this_01 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_98,
             __this_01,
             (MethodInfo_511A520 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
  local_68 = local_88;
  local_78 = (undefined1  [8])local_98._0_8_;
  uStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_98._8_8_;
  local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_98._8_8_ = local_78;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    while (bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                               *)local_78,
                              (MethodInfo_4CE7080 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                             ), pSVar3 = local_68, bVar4) {
      if (local_68 == (System_String_o *)0x0) {
label_05b876a5:
        ThrowNullReferenceException();
      }
      bVar4 = System_String__StartsWith(local_68,"_",(MethodInfo *)0x0);
      if (!bVar4) {
        if (Il2CppMethodInitialized_07547356 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Type");
          Il2CppMethodInitialized_07547356 = '\x01';
        }
        bVar4 = System_String__op_Equality(pSVar3,"Type",(MethodInfo *)0x0);
        if ((!bVar4) || ((classInstance->fields)._containsTypeOverride != false)) {
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (classInstance->fields).Variables;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___get_Item
                      (pSVar2,(Il2CppObject *)pSVar3,
                       (MethodInfo_4AAD450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
            ThrowNullReferenceException();
          }
label_05b87671:
          ThrowNullReferenceException();
        }
      }
    }
  }
  else {
    local_38 = __this;
    while (bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                               *)local_78,
                              (MethodInfo_4CE7080 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                             ), pSVar3 = local_68, bVar4) {
      if (local_68 == (System_String_o *)0x0) goto label_05b876a5;
      bVar4 = System_String__StartsWith(local_68,"_",(MethodInfo *)0x0);
      if (!bVar4) {
        if (Il2CppMethodInitialized_07547356 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Type");
          Il2CppMethodInitialized_07547356 = '\x01';
        }
        bVar4 = System_String__op_Equality(pSVar3,"Type",(MethodInfo *)0x0);
        if ((!bVar4) || ((classInstance->fields)._containsTypeOverride != false)) {
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (classInstance->fields).Variables;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b87671;
          obj = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar2,(Il2CppObject *)pSVar3,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
          bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                             (Il2CppObject *)pSVar3,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
          if (bVar4) {
            value = System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                               (Il2CppObject *)pSVar3,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
            obj = CustomLogic_CustomLogicComponentInstance__DeserializeValue(obj,value,method_01);
          }
          value_00 = CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
                               (local_38,local_80,pSVar3,obj,method_02);
          if (value_00 != (Settings_BaseSetting_o *)0x0) {
            if (local_40 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)local_40,
                       (Il2CppObject *)pSVar3,(Il2CppObject *)value_00,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
          }
        }
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_78,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose);
  return local_40;
}


// CustomLogic.CustomLogicEvaluator$$CreateInspectorSetting
// il2cpp: Settings_BaseSetting_o* CustomLogic_CustomLogicEvaluator__CreateInspectorSetting (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x5b86c10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8708e: jmp 0x5b87019

Settings_BaseSetting_o *
CustomLogic_CustomLogicEvaluator__CreateInspectorSetting
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,System_String_o *variableName
          ,Il2CppObject *value,MethodInfo *method)

{
  float defaultValue;
  byte bVar1;
  byte bVar2;
  bool defaultValue_00;
  int32_t defaultValue_01;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *source;
  Il2CppClass *pIVar4;
  UnityEngine_Vector3_Fields defaultValue_02;
  CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o *__this_01;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar5;
  System_Func_CustomLogicAssignmentExpressionAst__bool__o *__this_02;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment;
  Settings_InspectorSettingMetadata_o *pSVar6;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  Settings_ColorSetting_o *__this_04;
  float *pfVar7;
  int32_t *piVar8;
  void *pvVar9;
  int32_t maxValue;
  int32_t minValue;
  float local_50;
  float local_4c;
  
  if (Il2CppMethodInitialized_075473c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OfType_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAssignmentExpressionAst_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HashSetSetting_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass40_0_CreateInspectorSetting_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass40_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_075473c7 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass40_0);
  CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (CustomLogic_CustomLogicEvaluator___c__DisplayClass40_0_o *)0x0) goto label_05b8714c;
  (__this_01->fields).variableName = variableName;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).variableName);
  pCVar3 = (__this->fields)._start;
  if (((pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
      (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes,
      __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
     (pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)className,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         ), pCVar5 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0)) goto label_05b8714c;
  source = (pCVar5->fields).Assignments;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAssignmentExpressionAst_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_02,(Il2CppObject *)__this_01,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass40_0_CreateInspectorSetting_b__0,
             (MethodInfo_4F19300 *)0x0);
  assignment = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this_02,
                          (MethodInfo_34ED9E0 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicAssignmentExpressionAst)
  ;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar6 = CustomLogic_CustomLogicEvaluator__CreateInspectorMetadata(assignment,(MethodInfo *)__this_02);
  if (value == (Il2CppObject *)0x0) {
label_05b86e99:
    if (pSVar6 == (Settings_InspectorSettingMetadata_o *)0x0) {
label_05b8714c:
      ThrowNullReferenceException();
    }
    if ((pSVar6->fields).MapObjectList == false) {
      return (Settings_BaseSetting_o *)0x0;
    }
    if (value == (Il2CppObject *)0x0) {
      return (Settings_BaseSetting_o *)0x0;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
    if ((value->klass->_2).typeHierarchyDepth < bVar1) {
      return (Settings_BaseSetting_o *)0x0;
    }
    if ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin) {
      return (Settings_BaseSetting_o *)0x0;
    }
    collection = System_Linq_Enumerable__OfType_int_
                           ((System_Collections_IEnumerable_o *)value[3].klass,
                            (MethodInfo_34F1640 *)MethodInfo_System_Linq_Enumerable_OfType_int);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_4fa7660
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    __this_04 = (Settings_ColorSetting_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HashSetSetting_int);
    Settings_HashSetSetting_int____ctor
              ((Settings_HashSetSetting_int__o *)__this_04,
               (System_Collections_Generic_HashSet_T__o *)__this_03,
               (MethodInfo_4F63FE0 *)MethodInfo_Settings_HashSetSetting_int_ctor);
    goto label_05b87116;
  }
  pIVar4 = value->klass;
  if (pIVar4 == g_data_07556740) {
    pfVar7 = il2cpp_vm_Object_Unbox(value);
    if (pSVar6 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_05b8714c;
    defaultValue = *pfVar7;
    if (((pSVar6->fields).HasClamp == false) && ((pSVar6->fields).HasSlider == false)) {
      local_50 = 3.4028235e+38;
      local_4c = -3.4028235e+38;
    }
    else {
      local_4c = (pSVar6->fields).Min;
      local_50 = (pSVar6->fields).Max;
    }
    __this_04 = (Settings_ColorSetting_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
    Settings_FloatSetting___ctor_5a411f0
              ((Settings_FloatSetting_o *)__this_04,defaultValue,local_4c,local_50,(MethodInfo *)0x0);
    goto label_05b87116;
  }
  if (pIVar4 == g_data_07556758) {
    __this_04 = (Settings_ColorSetting_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_5b7b730
              ((Settings_StringSetting_o *)__this_04,(System_String_o *)value,0x7fffffff,(MethodInfo *)0x0);
    goto label_05b87116;
  }
  if (pIVar4 != g_data_07556710) {
    if (pIVar4 == g_data_075566f0) {
      pvVar9 = il2cpp_vm_Object_Unbox(value);
      defaultValue_00 = *(bool *)pvVar9;
      __this_04 = (Settings_ColorSetting_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
      Settings_BoolSetting___ctor_5a412a0
                ((Settings_BoolSetting_o *)__this_04,defaultValue_00,(MethodInfo *)0x0);
      goto label_05b87116;
    }
    bVar1 = (pIVar4->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
      pIVar4 = value[3].klass;
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
      Settings_ColorSetting___ctor_5a451c0(__this_04,(Utility_Color255_o *)pIVar4,0,(MethodInfo *)0x0);
      goto label_05b87116;
    }
    bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
      defaultValue_02 = *(UnityEngine_Vector3_Fields *)(value + 3);
      __this_04 = (Settings_ColorSetting_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_Vector3Setting);
      Settings_Vector3Setting___ctor_5b7d0c0
                ((Settings_Vector3Setting_o *)__this_04,(UnityEngine_Vector3_o)defaultValue_02,
                 (MethodInfo *)0x0);
      goto label_05b87116;
    }
    goto label_05b86e99;
  }
  piVar8 = il2cpp_vm_Object_Unbox(value);
  if (pSVar6 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_05b8714c;
  defaultValue_01 = *piVar8;
  if ((pSVar6->fields).HasClamp == false) {
    maxValue = 0x7fffffff;
    if ((pSVar6->fields).HasSlider == false) {
      minValue = -0x80000000;
    }
    else {
      minValue = (int32_t)(pSVar6->fields).Min;
      if ((pSVar6->fields).HasSlider != false) goto label_05b87013;
    }
  }
  else {
    minValue = (int32_t)(pSVar6->fields).Min;
label_05b87013:
    maxValue = (int32_t)(pSVar6->fields).Max;
  }
  __this_04 = (Settings_ColorSetting_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0
            ((Settings_IntSetting_o *)__this_04,defaultValue_01,minValue,maxValue,(MethodInfo *)0x0);
label_05b87116:
  if (__this_04 == (Settings_ColorSetting_o *)0x0) {
    return (Settings_BaseSetting_o *)0x0;
  }
  ((Settings_StringSetting_Fields *)&__this_04->fields)->InspectorMetadata = pSVar6;
  Il2CppCodeGenWriteBarrier((void **)&__this_04->fields);
  return (Settings_BaseSetting_o *)__this_04;
}


// CustomLogic.CustomLogicEvaluator$$ApplyComponentInspectorRules
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ApplyComponentInspectorRules (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x5b6d350
// eh: try 0x5b6d765..0x5b6d941 -> pad 0x5b6d953 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6d96b..0x5b6d970 -> pad 0x5b6d995 cleanup
// eh: try 0x5b6d998..0x5b6d9a2 -> pad 0x5b6d9aa catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6d5a0: jmp 0x5b6d698
// asm:   0x5b6d941: jmp 0x5b6d953
// asm:   0x5b6d943: jmp 0x5b6d953
// asm:   0x5b6d945: jmp 0x5b6d953
// asm:   0x5b6d947: jmp 0x5b6d953
// asm:   0x5b6d949: jmp 0x5b6d953
// asm:   0x5b6d94b: jmp 0x5b6d953
// asm:   0x5b6d94d: jmp 0x5b6d953
// asm:   0x5b6d94f: jmp 0x5b6d953
// asm:   0x5b6d951: jmp 0x5b6d953
// asm:   0x5b6d953: mov rbx, rax
// asm:   0x5b6d956: cmp edx, 1
// asm:   0x5b6d959: jne 0x5b6d998
// asm:   0x5b6d95b: mov rdi, rbx
// asm:   0x5b6d95e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6d963: mov rbx, qword ptr [rax]
// asm:   0x5b6d966: mov qword ptr [rsp + 8], rbx
// asm:   0x5b6d96b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6d970: lea rax, [rip + 0x1720ca1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x5b6d977: mov rsi, qword ptr [rax]
// asm:   0x5b6d97a: lea rdi, [rsp + 0x30]
// asm:   0x5b6d97f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6d984: test rbx, rbx
// asm:   0x5b6d987: je 0x5b6d8fb
// asm:   0x5b6d98d: mov rdi, rbx
// asm:   0x5b6d990: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6d995: mov rbx, rax
// asm:   0x5b6d998: lea rdi, [rsp + 8]
// asm:   0x5b6d99d: call 0x2fd7cf0  ; il2cpp_runtime_helper_02fd7cf0()
// asm:   0x5b6d9a2: mov rdi, rbx
// asm:   0x5b6d9a5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6d9aa: mov rdi, rax
// asm:   0x5b6d9ad: call 0x2ab61e0  ; __clang_call_terminate()

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ApplyComponentInspectorRules
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,System_String_o *variableName
          ,Il2CppObject *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  int32_t iVar5;
  CustomLogic_CustomLogicStartAst_o *pCVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *source;
  System_Collections_Generic_Dictionary_int__object__o *pSVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  System_Object_array *pSVar9;
  MethodInfo *pMVar10;
  bool bVar11;
  CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o *__this_01;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar12;
  System_Func_CustomLogicAssignmentExpressionAst__bool__o *__this_02;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment;
  Settings_InspectorSettingMetadata_o *pSVar13;
  float *pfVar14;
  int *piVar15;
  int32_t *piVar16;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar17;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  int iVar18;
  int iVar19;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar20;
  uint uVar21;
  float fVar22;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  Map_MapObject_o *local_58;
  Map_MapObject_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_075473c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAssignmentExpressionAst_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass41_0_ApplyComponentInspectorRules_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass41_0)
    ;
    Il2CppMethodInitialized_075473c8 = '\x01';
  }
  local_50 = (Map_MapObject_o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  local_58 = (Map_MapObject_o *)0x0;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass41_0);
  CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (CustomLogic_CustomLogicEvaluator___c__DisplayClass41_0_o *)0x0) goto label_05b6d923;
  (__this_01->fields).variableName = variableName;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).variableName);
  pCVar6 = (__this->fields)._start;
  if (((pCVar6 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
      (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar6->fields).Classes,
      __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
     (pCVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)className,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                          ), pCVar12 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0))
  goto label_05b6d923;
  source = (pCVar12->fields).Assignments;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAssignmentExpressionAst_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_02,(Il2CppObject *)__this_01,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass41_0_ApplyComponentInspectorRules_b__0
             ,(MethodInfo_4F19300 *)0x0);
  assignment = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this_02,
                          (MethodInfo_34ED9E0 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicAssignmentExpressionAst)
  ;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar13 = CustomLogic_CustomLogicEvaluator__CreateInspectorMetadata(assignment,(MethodInfo *)__this_02);
  if (pSVar13 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_05b6d923;
  if ((pSVar13->fields).HasClamp == false) {
label_05b6d5d8:
    if ((pSVar13->fields).MapObject != false) {
      if (value == (Il2CppObject *)0x0) {
        return (Il2CppObject *)0x0;
      }
      pIVar20 = value->klass;
      bVar3 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
      if ((bVar3 <= (pIVar20->_2).typeHierarchyDepth) &&
         ((pIVar20->_2).typeHierarchy[(ulong)bVar3 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
        return value;
      }
      if (pIVar20 != g_data_07556710) {
        return (Il2CppObject *)0x0;
      }
      piVar16 = il2cpp_vm_Object_Unbox(value);
      iVar5 = *piVar16;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar7 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        bVar11 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                           (pSVar7,iVar5,(Il2CppObject **)&local_50,
                            (MethodInfo_4A114B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
        if (bVar11) {
          pCVar17 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this,local_50,method_00);
          return (Il2CppObject *)pCVar17;
        }
        return (Il2CppObject *)0x0;
      }
      goto label_05b6d923;
    }
  }
  else {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == g_data_07556710) {
        piVar15 = il2cpp_vm_Object_Unbox(value);
        iVar18 = (int)(pSVar13->fields).Min;
        iVar4 = *piVar15;
        iVar19 = (int)(pSVar13->fields).Max;
        if (iVar4 < iVar19) {
          iVar19 = iVar4;
        }
        if (iVar4 < iVar18) {
          iVar19 = iVar18;
        }
        local_70._0_4_ = iVar19;
        pIVar20 = g_data_07556710;
      }
      else {
        if (value->klass != g_data_07556740) goto label_05b6d5d8;
        pfVar14 = il2cpp_vm_Object_Unbox(value);
        fVar1 = *pfVar14;
        fVar2 = (pSVar13->fields).Min;
        fVar22 = (pSVar13->fields).Max;
        if (fVar1 <= fVar22) {
          fVar22 = fVar1;
        }
        uVar21 = -(uint)(fVar2 <= fVar1);
        local_70._0_4_ = ~uVar21 & (uint)fVar2 | (uint)fVar22 & uVar21;
        pIVar20 = g_data_07556740;
      }
      value = il2cpp_vm_Object_Box(pIVar20,local_70);
      goto label_05b6d5d8;
    }
    value = (Il2CppObject *)0x0;
    if ((pSVar13->fields).MapObject != false) {
      return (Il2CppObject *)0x0;
    }
  }
  if ((pSVar13->fields).MapObjectList == false) {
    return value;
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
  if (value == (Il2CppObject *)0x0) {
    return (Il2CppObject *)__this_03;
  }
  bVar3 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
  if ((value->klass->_2).typeHierarchyDepth < bVar3) {
    return (Il2CppObject *)__this_03;
  }
  if ((value->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin) {
    return (Il2CppObject *)__this_03;
  }
  if (value[3].klass != (Il2CppClass *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_object__o *)value[3].klass,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    local_48.fields._current = local_60;
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
    local_48.fields._index = local_70._8_4_;
    local_48.fields._version = local_70._12_4_;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = &local_48;
label_05b6d761:
    do {
      do {
        while( true ) {
          do {
            bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_48,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
            pMVar10 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (!bVar11) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (&local_48,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
              return (Il2CppObject *)__this_03;
            }
          } while (local_48.fields._current == (Il2CppObject *)0x0);
          pIVar20 = (local_48.fields._current)->klass;
          bVar3 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          if (((pIVar20->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar20->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) break;
          if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar8 = (__this_03->fields).List;
          if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
label_05b6d928:
            ThrowNullReferenceException();
          }
          piVar16 = &(pSVar8->fields)._version;
          *piVar16 = *piVar16 + 1;
          pSVar9 = (pSVar8->fields)._items;
          if (pSVar9 == (System_Object_array *)0x0) goto label_05b6d928;
          uVar21 = (pSVar8->fields)._size;
          if (uVar21 < (uint)pSVar9->max_length) {
            (pSVar8->fields)._size = uVar21 + 1;
            pSVar9->m_Items[(int)uVar21] = local_48.fields._current;
            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar21);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar8,local_48.fields._current,
                       (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
          }
        }
      } while (pIVar20 != g_data_07556710);
      piVar16 = il2cpp_vm_Object_Unbox(local_48.fields._current);
      iVar5 = *piVar16;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar11 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                         (pSVar7,iVar5,(Il2CppObject **)&local_58,
                          (MethodInfo_4A114B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
    } while (!bVar11);
    if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = (__this_03->fields).List;
    pCVar17 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this,local_58,method_01);
    pMVar10 = MethodInfo_System_Collections_Generic_List_object_Add;
    if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar16 = &(pSVar8->fields)._version;
      *piVar16 = *piVar16 + 1;
      pSVar9 = (pSVar8->fields)._items;
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar21 = (pSVar8->fields)._size;
        if (uVar21 < (uint)pSVar9->max_length) {
          (pSVar8->fields)._size = uVar21 + 1;
          pSVar9->m_Items[(int)uVar21] = (Il2CppObject *)pCVar17;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar21);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar8,(Il2CppObject *)pCVar17,
                     (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
        }
        goto label_05b6d761;
      }
    }
    ThrowNullReferenceException();
  }
label_05b6d923:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$CreateInspectorMetadata
// il2cpp: Settings_InspectorSettingMetadata_o* CustomLogic_CustomLogicEvaluator__CreateInspectorMetadata (CustomLogic_CustomLogicAssignmentExpressionAst_o* assignment, const MethodInfo* method);
// 0x5b879a0
// eh: try 0x5b87b7a..0x5b88183 -> pad 0x5b881eb (+52 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b88203..0x5b88208 -> pad 0x5b8822d cleanup
// eh: try 0x5b88230..0x5b8823a -> pad 0x5b88242 catch (...) [compiler noexcept guard]
// asm: 76 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b87b6c: nop dword ptr [rax]
// asm:   0x5b88183: jmp 0x5b881eb
// asm:   0x5b88185: jmp 0x5b881eb
// asm:   0x5b88187: jmp 0x5b881eb
// asm:   0x5b88189: jmp 0x5b881eb
// asm:   0x5b8818b: jmp 0x5b881eb
// asm:   0x5b8818d: jmp 0x5b881eb
// asm:   0x5b8818f: jmp 0x5b881eb
// asm:   0x5b88191: jmp 0x5b881eb
// asm:   0x5b88193: jmp 0x5b881eb
// asm:   0x5b88195: jmp 0x5b881eb
// asm:   0x5b88197: jmp 0x5b881eb
// asm:   0x5b88199: jmp 0x5b881eb
// asm:   0x5b8819b: jmp 0x5b881eb
// asm:   0x5b8819d: jmp 0x5b881eb
// asm:   0x5b8819f: jmp 0x5b881eb
// asm:   0x5b881a1: jmp 0x5b881eb
// asm:   0x5b881a3: jmp 0x5b881eb
// asm:   0x5b881a5: jmp 0x5b881eb
// asm:   0x5b881a7: jmp 0x5b881eb
// asm:   0x5b881a9: jmp 0x5b881eb
// asm:   0x5b881ab: jmp 0x5b881eb
// asm:   0x5b881ad: jmp 0x5b881eb
// asm:   0x5b881af: jmp 0x5b881eb
// asm:   0x5b881b1: jmp 0x5b881eb
// asm:   0x5b881b3: jmp 0x5b881eb
// asm:   0x5b881b5: jmp 0x5b881eb
// asm:   0x5b881b7: jmp 0x5b881eb
// asm:   0x5b881b9: jmp 0x5b881eb
// asm:   0x5b881bb: jmp 0x5b881eb
// asm:   0x5b881bd: jmp 0x5b881eb
// asm:   0x5b881bf: jmp 0x5b881eb
// asm:   0x5b881c1: jmp 0x5b881eb
// asm:   0x5b881c3: jmp 0x5b881eb
// asm:   0x5b881c5: jmp 0x5b881eb
// asm:   0x5b881c7: jmp 0x5b881eb
// asm:   0x5b881c9: jmp 0x5b881eb
// asm:   0x5b881cb: jmp 0x5b881eb
// asm:   0x5b881cd: jmp 0x5b881eb
// asm:   0x5b881cf: jmp 0x5b881eb
// asm:   0x5b881d1: jmp 0x5b881eb
// asm:   0x5b881d3: jmp 0x5b881eb
// asm:   0x5b881d5: jmp 0x5b881eb
// asm:   0x5b881d7: jmp 0x5b881eb
// asm:   0x5b881d9: jmp 0x5b881eb
// asm:   0x5b881db: jmp 0x5b881eb
// asm:   0x5b881dd: jmp 0x5b881eb
// asm:   0x5b881df: jmp 0x5b881eb
// asm:   0x5b881e1: jmp 0x5b881eb
// asm:   0x5b881e3: jmp 0x5b881eb
// asm:   0x5b881e5: jmp 0x5b881eb
// asm:   0x5b881e7: jmp 0x5b881eb
// asm:   0x5b881e9: jmp 0x5b881eb
// asm:   0x5b881eb: mov rbp, rax
// asm:   0x5b881ee: cmp edx, 1
// asm:   0x5b881f1: jne 0x5b88230
// asm:   0x5b881f3: mov rdi, rbp
// asm:   0x5b881f6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b881fb: mov rbx, qword ptr [rax]
// asm:   0x5b881fe: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5b88203: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b88208: lea rax, [rip + 0x1705839]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_Dispose
// asm:   0x5b8820f: mov rsi, qword ptr [rax]
// asm:   0x5b88212: lea rdi, [rsp + 0x10]
// asm:   0x5b88217: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b8821c: test rbx, rbx
// asm:   0x5b8821f: je 0x5b880b7
// asm:   0x5b88225: mov rdi, rbx
// asm:   0x5b88228: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8822d: mov rbp, rax
// asm:   0x5b88230: lea rdi, [rsp + 0x28]
// asm:   0x5b88235: call 0x2fd7d20  ; il2cpp_runtime_helper_02fd7d20()
// asm:   0x5b8823a: mov rdi, rbp
// asm:   0x5b8823d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b88242: mov rdi, rax
// asm:   0x5b88245: call 0x2ab61e0  ; __clang_call_terminate()

Settings_InspectorSettingMetadata_o *
CustomLogic_CustomLogicEvaluator__CreateInspectorMetadata
          (CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment,MethodInfo *method)

{
  float val1;
  System_Collections_Generic_List_CustomLogicDecorator__o *__this;
  System_Collections_Generic_List_object__o *pSVar1;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  bool bVar2;
  bool bVar3;
  Settings_InspectorSettingMetadata_o *__this_00;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  System_Func_object__string__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_string__o *pSVar6;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  System_Exception_o *__this_02;
  MethodInfo *lastManagedFrame;
  byte bVar9;
  System_Collections_Generic_List_string__o **targetAddress;
  float fVar10;
  float val2;
  System_Collections_Generic_List_Enumerator_object__o local_88;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  System_String_o **local_58;
  System_String_o **local_50;
  System_Collections_Generic_List_string__o **local_48;
  System_String_o **local_40;
  Settings_InspectorSettingMetadata_Fields *local_38;
  
  if (Il2CppMethodInitialized_075473c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Convert_ToString);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_object_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InspectorSettingMetadata);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    il2cpp_codegen_initialize_runtime_metadata(&"group");
    il2cpp_codegen_initialize_runtime_metadata(&"dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"clamp");
    il2cpp_codegen_initialize_runtime_metadata(&"mapobject");
    il2cpp_codegen_initialize_runtime_metadata(&"tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"mapobjectlist");
    Il2CppMethodInitialized_075473c9 = '\x01';
  }
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InspectorSettingMetadata);
  Settings_InspectorSettingMetadata___ctor(__this_00,(MethodInfo *)0x0);
  if (assignment != (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
    __this = (assignment->fields).Decorators;
    if (__this == (System_Collections_Generic_List_CustomLogicDecorator__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_GetEnumerator);
    local_88.fields._current = local_60;
    local_88.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
    local_88.fields._index = local_70._8_4_;
    local_88.fields._version = local_70._12_4_;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_50 = &(__this_00->fields).GroupId;
    local_58 = &(__this_00->fields).GroupHeader;
    local_40 = &(__this_00->fields).Header;
    targetAddress = &(__this_00->fields).Dropbox;
    local_38 = &__this_00->fields;
    local_70._8_8_ = &local_88;
    local_48 = targetAddress;
label_05b87b70:
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_88,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_MoveNext);
    pIVar5 = local_88.fields._current;
    if (bVar2) {
      if (local_88.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_88.fields._current[1].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar4 = System_String__ToLowerInvariant
                         ((System_String_o *)local_88.fields._current[1].klass,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar4,"tooltip",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = pIVar5[1].monitor;
        if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar1->fields)._size == 1) {
          pIVar5 = System_Collections_Generic_List_object___get_Item
                             (pSVar1,0,(MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_object_get_Item);
          if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
          }
          pSVar4 = System_Convert__ToString(pIVar5,(MethodInfo *)0x0);
          if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_38->Tooltip = pSVar4;
          Il2CppCodeGenWriteBarrier(&local_38->Tooltip);
          goto label_05b87b70;
        }
      }
      bVar2 = System_String__op_Equality(pSVar4,"dropbox",(MethodInfo *)0x0);
      if (bVar2) {
        source = pIVar5[1].monitor;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_string);
        System_Func_object__object____ctor
                  ((System_Func_object__object__o *)__this_01,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_System_Convert_ToString,(MethodInfo_4F19B50 *)0x0);
        source_00 = System_Linq_Enumerable__Select_object__object_
                              (source,(System_Func_TSource__TResult__o *)__this_01,
                               (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_object_string);
        pSVar6 = (System_Collections_Generic_List_string__o *)
                 System_Linq_Enumerable__ToList_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                            (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
          ThrowNullReferenceException();
        }
        *targetAddress = pSVar6;
        Il2CppCodeGenWriteBarrier(targetAddress);
        goto label_05b87b70;
      }
      bVar2 = System_String__op_Equality(pSVar4,"header",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = pIVar5[1].monitor;
        if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar1->fields)._size == 1) {
          pIVar5 = System_Collections_Generic_List_object___get_Item
                             (pSVar1,0,(MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_object_get_Item);
          if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
          }
          pSVar4 = System_Convert__ToString(pIVar5,(MethodInfo *)0x0);
          if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
            ThrowNullReferenceException();
          }
          *local_40 = pSVar4;
          Il2CppCodeGenWriteBarrier(local_40);
          goto label_05b87b70;
        }
      }
      bVar2 = System_String__op_Equality(pSVar4,"group",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = pIVar5[1].monitor;
        if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar1->fields)._size == 2) {
          pIVar7 = System_Collections_Generic_List_object___get_Item
                             (pSVar1,0,(MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_object_get_Item);
          if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
          }
          pSVar4 = System_Convert__ToString(pIVar7,(MethodInfo *)0x0);
          if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
            ThrowNullReferenceException();
          }
          *local_50 = pSVar4;
          Il2CppCodeGenWriteBarrier(local_50);
          if (pIVar5[1].monitor == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar5 = System_Collections_Generic_List_object___get_Item
                             (pIVar5[1].monitor,1,
                              (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item
                             );
          pSVar4 = System_Convert__ToString(pIVar5,(MethodInfo *)0x0);
          *local_58 = pSVar4;
          Il2CppCodeGenWriteBarrier(local_58);
          goto label_05b87b70;
        }
      }
      bVar2 = System_String__op_Equality(pSVar4,"clamp",(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = System_String__op_Equality(pSVar4,"slider",(MethodInfo *)0x0);
        if (bVar2) goto label_05b87e40;
label_05b87e53:
        bVar2 = System_String__op_Equality(pSVar4,"mapobject",(MethodInfo *)0x0);
        if (bVar2) {
          if (pIVar5[1].monitor == (void *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(int *)((long)pIVar5[1].monitor + 0x18) == 0) {
            if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
              ThrowNullReferenceException();
            }
            (__this_00->fields).MapObject = true;
            goto label_05b87b70;
          }
        }
        bVar2 = System_String__op_Equality(pSVar4,"mapobjectlist",(MethodInfo *)0x0);
        if (bVar2) {
          if (pIVar5[1].monitor == (void *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(int *)((long)pIVar5[1].monitor + 0x18) == 0) {
            if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
              ThrowNullReferenceException();
            }
            (__this_00->fields).MapObjectList = true;
          }
        }
        goto label_05b87b70;
      }
label_05b87e40:
      pSVar1 = pIVar5[1].monitor;
      if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar1->fields)._size < 2) goto label_05b87e53;
      pIVar7 = System_Collections_Generic_List_object___get_Item
                         (pSVar1,0,(MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_object_get_Item);
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      fVar10 = System_Convert__ToSingle(pIVar7,(MethodInfo *)0x0);
      if (pIVar5[1].monitor == (System_Collections_Generic_List_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = System_Collections_Generic_List_object___get_Item
                         (pIVar5[1].monitor,1,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      val2 = System_Convert__ToSingle(pIVar7,(MethodInfo *)0x0);
      if (val2 < fVar10) {
        pIVar8 = pIVar5[1].klass;
        pSVar4 = il2cpp_codegen_get_runtime_metadata(&" minimum cannot exceed maximum");
        pSVar4 = System_String__Concat_52f0320((System_String_o *)pIVar8,pSVar4,(MethodInfo *)0x0);
        pIVar8 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar8);
        System_Exception___ctor_54fa440(__this_02,pSVar4,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicEvaluator_CreateInspectorMetadata);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
      }
      if (__this_00 == (Settings_InspectorSettingMetadata_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (((__this_00->fields).HasClamp == false) && ((__this_00->fields).HasSlider == false)) {
        (__this_00->fields).Min = fVar10;
        (__this_00->fields).Max = val2;
        bVar9 = 0;
      }
      else {
        val1 = (__this_00->fields).Min;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar10 = System_Math__Max_54bad70(val1,fVar10,(MethodInfo *)0x0);
        (__this_00->fields).Min = fVar10;
        fVar10 = System_Math__Min_54baee0((__this_00->fields).Max,val2,(MethodInfo *)0x0);
        (__this_00->fields).Max = fVar10;
        bVar9 = (__this_00->fields).HasClamp;
      }
      bVar2 = System_String__op_Equality(pSVar4,"clamp",(MethodInfo *)0x0);
      (__this_00->fields).HasClamp = (bool)(bVar9 | bVar2);
      bVar2 = (__this_00->fields).HasSlider;
      bVar3 = System_String__op_Equality(pSVar4,"slider",(MethodInfo *)0x0);
      (__this_00->fields).HasSlider = (bool)(bVar2 | bVar3);
      bVar2 = System_String__op_Equality(pSVar4,"slider",(MethodInfo *)0x0);
      targetAddress = local_48;
      if (bVar2) {
        pSVar1 = pIVar5[1].monitor;
        if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar1->fields)._size == 3) {
          pIVar5 = System_Collections_Generic_List_object___get_Item
                             (pSVar1,2,(MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_object_get_Item);
          if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
          }
          fVar10 = System_Convert__ToSingle(pIVar5,(MethodInfo *)0x0);
          (__this_00->fields).SliderInterval = fVar10;
        }
      }
      goto label_05b87b70;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_88,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicDecorator_Dispose);
  }
  return __this_00;
}


// CustomLogic.CustomLogicEvaluator$$GetComponentNames
// il2cpp: System_Collections_Generic_List_string__o* CustomLogic_CustomLogicEvaluator__GetComponentNames (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b88250
// eh: try 0x5b883bc..0x5b88585 -> pad 0x5b8858a (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b885ba..0x5b885bf -> pad 0x5b885e4 cleanup
// eh: try 0x5b885e7..0x5b885f1 -> pad 0x5b885f9 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8858a: jmp 0x5b885a2
// asm:   0x5b8858c: jmp 0x5b885a2
// asm:   0x5b8858e: jmp 0x5b885a2
// asm:   0x5b88590: jmp 0x5b885a2
// asm:   0x5b88592: jmp 0x5b885a2
// asm:   0x5b88594: jmp 0x5b885a2
// asm:   0x5b88596: jmp 0x5b885a2
// asm:   0x5b88598: jmp 0x5b885a2
// asm:   0x5b8859a: jmp 0x5b885a2
// asm:   0x5b8859c: jmp 0x5b885a2
// asm:   0x5b8859e: jmp 0x5b885a2
// asm:   0x5b885a0: jmp 0x5b885a2
// asm:   0x5b885a2: mov rbx, rax
// asm:   0x5b885a5: cmp edx, 1
// asm:   0x5b885a8: jne 0x5b885e7
// asm:   0x5b885aa: mov rdi, rbx
// asm:   0x5b885ad: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b885b2: mov rbx, qword ptr [rax]
// asm:   0x5b885b5: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5b885ba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b885bf: lea rax, [rip + 0x1707912]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
// asm:   0x5b885c6: mov rsi, qword ptr [rax]
// asm:   0x5b885c9: lea rdi, [rsp + 0x10]
// asm:   0x5b885ce: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b885d3: test rbx, rbx
// asm:   0x5b885d6: je 0x5b88553
// asm:   0x5b885dc: mov rdi, rbx
// asm:   0x5b885df: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b885e4: mov rbx, rax
// asm:   0x5b885e7: lea rdi, [rsp + 0x30]
// asm:   0x5b885ec: call 0x2fd7d50  ; il2cpp_runtime_helper_02fd7d50()
// asm:   0x5b885f1: mov rdi, rbx
// asm:   0x5b885f4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b885f9: mov rdi, rax
// asm:   0x5b885fc: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
CustomLogic_CustomLogicEvaluator__GetComponentNames
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  CustomLogic_CustomLogicToken_o *pCVar5;
  Il2CppObject *obj;
  System_String_array *pSVar6;
  Il2CppObject *pIVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar10;
  int *piVar11;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075473ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075473ca = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentKey = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pCVar3 = (__this->fields)._start;
  if ((pCVar3 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes,
     pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                          (pSVar4,(MethodInfo_4AAD0F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Keys
                          );
    if (__this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
                 __this_01,
                 (MethodInfo_511A520 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum
                );
      local_68.fields._currentKey = (Il2CppObject *)local_38;
      local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
      local_68.fields._index = local_48._8_4_;
      local_68.fields._version = local_48._12_4_;
      local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_48._8_8_ = &local_68;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        do {
          bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (&local_68,
                             (MethodInfo_4CE7080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee0
                            );
          if (!bVar9) goto label_05b8853f;
          pCVar3 = (__this->fields)._start;
          if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) goto label_05b8857b;
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b88580;
          pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar4,local_68.fields._currentKey,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                              );
          if (pCVar10 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) goto label_05b8856c;
          pCVar5 = (pCVar10->fields).Token;
          if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b88576;
          pIVar7 = (pCVar5->fields).Value;
          if (pIVar7 == (Il2CppObject *)0x0) goto label_05b88567;
          if ((pIVar7->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05b88571;
          piVar11 = il2cpp_vm_Object_Unbox(pIVar7);
        } while (*piVar11 != 0);
label_05b8853a:
        ThrowNullReferenceException();
      }
      do {
        do {
          bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (&local_68,
                             (MethodInfo_4CE7080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition_718fee0
                            );
          pIVar7 = local_68.fields._currentKey;
          if (!bVar9) {
label_05b8853f:
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (&local_68,
                       (MethodInfo_4CE7070 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_CustomLogicClassDefinition
                      );
            return __this_00;
          }
          pCVar3 = (__this->fields)._start;
          if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
label_05b8857b:
            ThrowNullReferenceException();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05b88580:
            ThrowNullReferenceException();
          }
          pCVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar4,local_68.fields._currentKey,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                              );
          if (pCVar10 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
label_05b8856c:
            ThrowNullReferenceException();
          }
          pCVar5 = (pCVar10->fields).Token;
          if (pCVar5 == (CustomLogic_CustomLogicToken_o *)0x0) {
label_05b88576:
            ThrowNullReferenceException();
          }
          obj = (pCVar5->fields).Value;
          if (obj == (Il2CppObject *)0x0) {
label_05b88567:
            ThrowNullReferenceException();
          }
          if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
label_05b88571:
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          piVar11 = il2cpp_vm_Object_Unbox(obj);
          pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
        } while (*piVar11 != 0);
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_00->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) goto label_05b8853a;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = (System_String_o *)pIVar7;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,pIVar7,
                     (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$GetStaticClass
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__GetStaticClass (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x5b88610

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__GetStaticClass
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  CustomLogic_CustomLogicClassInstance_o *pCVar3;
  
  if (Il2CppMethodInitialized_075473cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    Il2CppMethodInitialized_075473cb = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)className,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                      );
    if (!bVar2) {
      return (CustomLogic_CustomLogicClassInstance_o *)0x0;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)className,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                         );
      return pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$CreateStaticClass
// il2cpp: void CustomLogic_CustomLogicEvaluator__CreateStaticClass (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x5b84720

void CustomLogic_CustomLogicEvaluator__CreateStaticClass
               (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_00;
  bool bVar3;
  CustomLogic_CustomLogicClassInstance_o *value;
  MethodInfo *in_R9;
  int32_t local_24;
  System_Nullable_CustomLogicSourceType__Fields local_20;
  
  if (Il2CppMethodInitialized_075473cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    Il2CppMethodInitialized_075473cc = '\x01';
  }
  local_24 = 0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)className,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                      );
    if (bVar3) {
      return;
    }
    local_20.hasValue = false;
    local_20._1_3_ = 0;
    local_20.value = 0;
    pCVar2 = (__this->fields)._start;
    if ((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
       (__this_00 = (pCVar2->fields).ClassNamespaces,
       __this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)) {
      bVar3 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)className,&local_24,
                         (MethodInfo_4AA3530 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                        );
      if (bVar3) {
        System_Nullable_Int32Enum____ctor
                  ((System_Nullable_Int32Enum__o *)&local_20,local_24,
                   (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
      }
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                        (__this,className,TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs,
                         false,(System_Nullable_CustomLogicSourceType__o)local_20,in_R9);
      if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        (value->fields)._Namespace_k__BackingField.fields = local_20;
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,(Il2CppObject *)className,(Il2CppObject *)value,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_Add);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicEvaluator__get_Compiler (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b886a0

CustomLogic_CustomLogicCompiler_o *
CustomLogic_CustomLogicEvaluator__get_Compiler(CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicEvaluator$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicEvaluator__set_Compiler (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x5b886b0

void CustomLogic_CustomLogicEvaluator__set_Compiler
               (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicCompiler_o *value,
               MethodInfo *method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField);
  return;
}


// CustomLogic.CustomLogicEvaluator$$get_CaptureErrors
// il2cpp: bool CustomLogic_CustomLogicEvaluator__get_CaptureErrors (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b886d0

bool CustomLogic_CustomLogicEvaluator__get_CaptureErrors
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._CaptureErrors_k__BackingField;
}


// CustomLogic.CustomLogicEvaluator$$set_CaptureErrors
// il2cpp: void CustomLogic_CustomLogicEvaluator__set_CaptureErrors (CustomLogic_CustomLogicEvaluator_o* __this, bool value, const MethodInfo* method);
// 0x5b886e0

void CustomLogic_CustomLogicEvaluator__set_CaptureErrors
               (CustomLogic_CustomLogicEvaluator_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._CaptureErrors_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicEvaluator$$get_CapturedErrors
// il2cpp: System_Collections_Generic_List_CustomLogicError__o* CustomLogic_CustomLogicEvaluator__get_CapturedErrors (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b886f0

System_Collections_Generic_List_CustomLogicError__o *
CustomLogic_CustomLogicEvaluator__get_CapturedErrors
          (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._CapturedErrors_k__BackingField;
}


// CustomLogic.CustomLogicEvaluator$$set_CapturedErrors
// il2cpp: void CustomLogic_CustomLogicEvaluator__set_CapturedErrors (CustomLogic_CustomLogicEvaluator_o* __this, System_Collections_Generic_List_CustomLogicError__o* value, const MethodInfo* method);
// 0x5b88700

void CustomLogic_CustomLogicEvaluator__set_CapturedErrors
               (CustomLogic_CustomLogicEvaluator_o *__this,
               System_Collections_Generic_List_CustomLogicError__o *value,MethodInfo *method)

{
  (__this->fields)._CapturedErrors_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CapturedErrors_k__BackingField);
  return;
}


// CustomLogic.CustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___ctor (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicStartAst_o* start, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x5b78210

void CustomLogic_CustomLogicEvaluator___ctor
               (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicStartAst_o *start,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Object_array *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *__this_01;
  System_Collections_Generic_Dictionary_string__CustomLogicNetworkViewBuiltin__o *__this_02;
  System_Collections_Generic_Dictionary_int__CustomLogicMapObjectBuiltin__o *__this_03;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar2;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *__this_04;
  System_Collections_Generic_Dictionary_string__List_CustomLogicClassInstance___o *__this_05;
  System_Collections_Generic_Dictionary_int__Dictionary_string__float___o *__this_06;
  System_Collections_Generic_List_CustomLogicError__o *__this_07;
  System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o *__this_08;
  
  if (Il2CppMethodInitialized_075473cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicError);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType
              );
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mod__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    Il2CppMethodInitialized_075473cd = '\x01';
  }
  pSVar1 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  (__this->fields)._networkCallback = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._networkCallback);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            (__this_00,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields).emptyList = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).emptyList);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_01,
             (MethodInfo_4A0EB10 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ctor);
  (__this->fields).IdToNetworkView = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).IdToNetworkView);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicNetworkViewBuiltin_ctor);
  (__this->fields).AddonToNetworkView = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AddonToNetworkView);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_03,
             (MethodInfo_4A0EB10 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ctor);
  (__this->fields).IdToMapObjectBuiltin = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).IdToMapObjectBuiltin);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ctor);
  (__this->fields)._staticClasses = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._staticClasses);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ctor);
  (__this->fields)._addonClasses = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._addonClasses);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn
            );
  (__this->fields)._namespacedStaticClasses = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._namespacedStaticClasses);
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_CustomLogicClassInstance_ctor);
  (__this->fields)._callbacks = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._callbacks);
  __this_06 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_06,
             (MethodInfo_4A0EB10 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_ctor);
  (__this->fields).PlayerIdToLastPropertyChanges = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PlayerIdToLastPropertyChanges);
  (__this->fields).ScoreboardProperty = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScoreboardProperty);
  (__this->fields).ShowScoreboardStatus = true;
  (__this->fields).DefaultShowKillScore = true;
  (__this->fields).DefaultShowKillFeed = true;
  (__this->fields).DefaultAddKillScore = true;
  (__this->fields).ShowScoreboardLoadout = true;
  (__this->fields).ForcedCharacterType = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForcedCharacterType);
  (__this->fields).ForcedLoadout = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForcedLoadout);
  __this_07 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicError);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_07,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CustomLogicError_ctor);
  (__this->fields)._CapturedErrors_k__BackingField = __this_07;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CapturedErrors_k__BackingField);
  __this_08 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType
                        );
  System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum______ctor
            ((System_Collections_Generic_Stack_T__o *)__this_08,
             (MethodInfo_4101330 *)
             MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor
            );
  (__this->fields)._executionStack = __this_08;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._executionStack);
  pSVar1 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  (__this->fields).Parameters3 = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parameters3);
  (__this->fields).add = "__Add__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).add);
  (__this->fields).sub = "__Sub__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).sub);
  (__this->fields).mul = "__Mul__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).mul);
  (__this->fields).div = "__Div__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).div);
  (__this->fields).mod = "__Mod__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).mod);
  (__this->fields).eq = "__Eq__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).eq);
  (__this->fields).copy = "__Copy__";
  Il2CppCodeGenWriteBarrier(&(__this->fields).copy);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._start = start;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._start);
  (__this->fields)._Compiler_k__BackingField = compiler;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Compiler_k__BackingField);
  return;
}


// CustomLogic.CustomLogicEvaluator$$ClearCapturedErrors
// il2cpp: void CustomLogic_CustomLogicEvaluator__ClearCapturedErrors (CustomLogic_CustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x5b88720

void CustomLogic_CustomLogicEvaluator__ClearCapturedErrors
               (CustomLogic_CustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_CustomLogicError__o *pSVar2;
  
  if (Il2CppMethodInitialized_075473ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_Clear);
    Il2CppMethodInitialized_075473ce = '\x01';
  }
  pSVar2 = (__this->fields)._CapturedErrors_k__BackingField;
  if (pSVar2 == (System_Collections_Generic_List_CustomLogicError__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (length < 1) {
    return;
  }
  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicEvaluator$$CreateClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__CreateClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_Object_array* parameterValues, bool init, const MethodInfo* method);
// 0x5b86c00

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__CreateClassInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          System_Object_array *parameterValues,bool init,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  MethodInfo *in_R9;
  
  pCVar1 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                     (__this,className,parameterValues,init,(System_Nullable_CustomLogicSourceType__o)0x0,
                      in_R9);
  return pCVar1;
}


// CustomLogic.CustomLogicEvaluator$$CreateClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__CreateClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_Object_array* parameterValues, bool init, System_Nullable_CustomLogicSourceType__o callerNamespace, const MethodInfo* method);
// 0x5b84880

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          System_Object_array *parameterValues,bool init,
          System_Nullable_CustomLogicSourceType__o callerNamespace,MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar3;
  bool bVar4;
  int32_t iVar5;
  CustomLogic_BuiltinClassInstance_o *pCVar6;
  CustomLogic_CustomLogicClassInstance_o *pCVar7;
  System_String_o *pSVar8;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t iVar9;
  System_Nullable_CustomLogicSourceType__Fields classNamespace;
  int32_t local_44;
  System_Nullable_CustomLogicSourceType__Fields local_40;
  int32_t local_34;
  System_Nullable_CustomLogicSourceType__o local_30;
  
  local_30.fields = callerNamespace.fields;
  if (Il2CppMethodInitialized_075473cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
    Il2CppMethodInitialized_075473cf = '\x01';
  }
  local_44 = 0;
  local_34 = 0;
  if (callerNamespace.fields.hasValue == false) {
label_05b849a6:
    if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    }
    bVar4 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(className,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      bVar4 = CustomLogic_CustomLogicBuiltinTypes__IsAbstract(className,(MethodInfo *)0x0);
      if (!bVar4) {
        if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
        }
        pCVar6 = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                           (className,parameterValues,(MethodInfo *)0x0);
        return (CustomLogic_CustomLogicClassInstance_o *)pCVar6;
      }
      pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Cannot instantiate abstract type ");
      pSVar8 = System_String__Concat_52f0320(pSVar8,className,(MethodInfo *)0x0);
label_05b84b0d:
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_54fa440(__this_00,pSVar8,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicEvaluator_CreateClassInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pCVar1 = (__this->fields)._start;
    if ((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes,
       pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
label_05b84ac2:
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)className,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                      );
    if (!bVar4) {
      pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Class ");
      str2 = il2cpp_codegen_get_runtime_metadata(&" not found");
      pSVar8 = System_String__Concat_5301f10(pSVar8,className,str2,(MethodInfo *)0x0);
      goto label_05b84b0d;
    }
    local_40.hasValue = false;
    local_40._1_3_ = 0;
    local_40.value = 0;
    pCVar1 = (__this->fields)._start;
    if ((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
       (pSVar3 = (pCVar1->fields).ClassNamespaces,
       pSVar3 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0))
    goto label_05b84ac2;
    bVar4 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       (Il2CppObject *)className,&local_34,
                       (MethodInfo_4AA3530 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                      );
    if (!bVar4) {
      classNamespace.hasValue = false;
      classNamespace._1_3_ = 0;
      classNamespace.value = 0;
      goto label_05b84aa3;
    }
    iVar9 = local_34;
  }
  else {
    pCVar1 = (__this->fields)._start;
    if ((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes,
       pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05b84ac2;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)className,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                      );
    if (!bVar4) goto label_05b849a6;
    pCVar1 = (__this->fields)._start;
    if ((pCVar1 == (CustomLogic_CustomLogicStartAst_o *)0x0) ||
       (pSVar3 = (pCVar1->fields).ClassNamespaces,
       pSVar3 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0))
    goto label_05b84ac2;
    bVar4 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       (Il2CppObject *)className,&local_44,
                       (MethodInfo_4AA3530 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_TryGetValue
                      );
    iVar9 = local_44;
    if ((!bVar4) ||
       (iVar5 = System_Nullable_Int32Enum___get_Value
                          ((System_Nullable_Int32Enum__o *)&local_30,
                           (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_CustomLogicSourceType_get_Value),
       iVar9 != iVar5)) goto label_05b849a6;
    local_40.hasValue = false;
    local_40._1_3_ = 0;
    local_40.value = 0;
    iVar9 = local_44;
  }
  System_Nullable_Int32Enum____ctor
            ((System_Nullable_Int32Enum__o *)&local_40,iVar9,
             (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
  classNamespace = local_40;
label_05b84aa3:
  pCVar7 = CustomLogic_CustomLogicEvaluator__CreateUserClassInstance
                     (__this,className,parameterValues,init,
                      (System_Nullable_CustomLogicSourceType__o)classNamespace,method);
  return pCVar7;
}


// CustomLogic.CustomLogicEvaluator$$CreateUserClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_CustomLogicEvaluator__CreateUserClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, System_String_o* className, System_Object_array* parameterValues, bool init, System_Nullable_CustomLogicSourceType__o classNamespace, const MethodInfo* method);
// 0x5b88780

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_CustomLogicEvaluator__CreateUserClassInstance
          (CustomLogic_CustomLogicEvaluator_o *__this,System_String_o *className,
          System_Object_array *parameterValues,bool init,
          System_Nullable_CustomLogicSourceType__o classNamespace,MethodInfo *method)

{
  CustomLogic_UserClassInstance_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075473d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    Il2CppMethodInitialized_075473d0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_UserClassInstance);
  CustomLogic_UserClassInstance___ctor(__this_00,className,(MethodInfo *)0x0);
  if (__this_00 == (CustomLogic_UserClassInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields)._Namespace_k__BackingField.fields = classNamespace.fields;
  if (init) {
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (__this,(CustomLogic_CustomLogicClassInstance_o *)__this_00,method_00);
    CustomLogic_CustomLogicEvaluator__EvaluateMethod
              (__this,(CustomLogic_CustomLogicClassInstance_o *)__this_00,"Init",
               parameterValues,0,method);
    (__this_00->fields).Inited = true;
  }
  return (CustomLogic_CustomLogicClassInstance_o *)__this_00;
}


// CustomLogic.CustomLogicEvaluator$$RunAssignmentsClassInstance
// il2cpp: void CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, const MethodInfo* method);
// 0x5b84b50
// eh: try 0x5b84d3a..0x5b84f3c -> pad 0x5b84f51 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b84f6e..0x5b84f73 -> pad 0x5b84f8e cleanup
// eh: try 0x5b84f91..0x5b84f99 -> pad 0x5b84fef catch (...) [compiler noexcept guard]
// eh: try 0x5b84fb2..0x5b84fb7 -> pad 0x5b84fdc cleanup
// eh: try 0x5b84fdf..0x5b84fe7 -> pad 0x5b84fef catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b84f41: jmp 0x5b84f9b
// asm:   0x5b84f43: jmp 0x5b84f9b
// asm:   0x5b84f45: jmp 0x5b84f9b
// asm:   0x5b84f47: jmp 0x5b84f9b
// asm:   0x5b84f49: jmp 0x5b84f9b
// asm:   0x5b84f4b: jmp 0x5b84f57
// asm:   0x5b84f4d: jmp 0x5b84f57
// asm:   0x5b84f4f: jmp 0x5b84f57
// asm:   0x5b84f51: jmp 0x5b84f9b
// asm:   0x5b84f53: jmp 0x5b84f57
// asm:   0x5b84f55: jmp 0x5b84f9b
// asm:   0x5b84f57: mov rbx, rax
// asm:   0x5b84f5a: cmp edx, 1
// asm:   0x5b84f5d: jne 0x5b84f91
// asm:   0x5b84f5f: mov rdi, rbx
// asm:   0x5b84f62: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b84f67: mov rbx, qword ptr [rax]
// asm:   0x5b84f6a: mov qword ptr [rsp], rbx
// asm:   0x5b84f6e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b84f73: lea rax, [rip + 0x170afa6]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_Dispose
// asm:   0x5b84f7a: mov rsi, qword ptr [rax]
// asm:   0x5b84f7d: lea rdi, [rsp + 0x50]
// asm:   0x5b84f82: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5b84f87: test rbx, rbx
// asm:   0x5b84f8a: je 0x5b84f11
// asm:   0x5b84f8c: jmp 0x5b84fd4
// asm:   0x5b84f8e: mov rbx, rax
// asm:   0x5b84f91: mov rdi, rsp
// asm:   0x5b84f94: call 0x2fd7db0  ; il2cpp_runtime_helper_02fd7db0()
// asm:   0x5b84f99: jmp 0x5b84fe7
// asm:   0x5b84f9b: mov rbx, rax
// asm:   0x5b84f9e: cmp edx, 1
// asm:   0x5b84fa1: jne 0x5b84fdf
// asm:   0x5b84fa3: mov rdi, rbx
// asm:   0x5b84fa6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b84fab: mov rbx, qword ptr [rax]
// asm:   0x5b84fae: mov qword ptr [rsp], rbx
// asm:   0x5b84fb2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b84fb7: lea rax, [rip + 0x17089fa]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
// asm:   0x5b84fbe: mov rsi, qword ptr [rax]
// asm:   0x5b84fc1: lea rdi, [rsp + 0x30]
// asm:   0x5b84fc6: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b84fcb: test rbx, rbx
// asm:   0x5b84fce: je 0x5b84e29
// asm:   0x5b84fd4: mov rdi, rbx
// asm:   0x5b84fd7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b84fdc: mov rbx, rax
// asm:   0x5b84fdf: mov rdi, rsp
// asm:   0x5b84fe2: call 0x2fd7d80  ; il2cpp_runtime_helper_02fd7d80()
// asm:   0x5b84fe7: mov rdi, rbx
// asm:   0x5b84fea: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b84fef: mov rdi, rax
// asm:   0x5b84ff2: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *__this_00;
  long *plVar4;
  System_String_o *a;
  CustomLogic_CustomLogicMethodDefinitionAst_o *ast;
  bool bVar5;
  Il2CppObject *pIVar6;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar7;
  System_Collections_Generic_Dictionary_string__object__o *__this_01;
  CustomLogic_UserMethod_o *__this_02;
  MethodInfo *in_R8;
  undefined1 local_c8 [16];
  Il2CppObject *local_b8;
  CustomLogic_CustomLogicEvaluator_o *local_b0;
  CustomLogic_CustomLogicMethodDefinitionAst_o *local_a8;
  Il2CppObject *local_a0;
  undefined1 local_98 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_90;
  Il2CppObject *local_88;
  CustomLogic_CustomLogicClassDefinitionAst_o *local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_78;
  System_Collections_Generic_KeyValuePair_object__object__o local_48;
  
  local_b0 = __this;
  if (Il2CppMethodInitialized_075473d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_get_Curre
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_CustomLogicMethodDefinitionAst_Deconstruct
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    Il2CppMethodInitialized_075473d1 = '\x01';
  }
  local_98 = (undefined1  [8])0x0;
  pSStack_90 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_88 = (Il2CppObject *)0x0;
  local_78.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.fields._version = 0;
  local_78.fields._index = 0;
  local_78.fields._getEnumeratorRetType = 0;
  local_78.fields._36_4_ = 0;
  local_48.fields.key = (Il2CppObject *)0x0;
  local_48.fields.value = (Il2CppObject *)0x0;
  local_a0 = (Il2CppObject *)0x0;
  local_a8 = (CustomLogic_CustomLogicMethodDefinitionAst_o *)0x0;
  pCVar2 = (local_b0->fields)._start;
  if ((pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (classInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).Classes;
    pIVar6 = (Il2CppObject *)
             (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                       (classInstance,(classInstance->klass->vtable)._6_unknown.method);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,pIVar6,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         );
      if (pCVar7 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
        __this_00 = (pCVar7->fields).Assignments;
        local_80 = pCVar7;
        if (__this_00 != (System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_c8,
                     (System_Collections_Generic_List_object__o *)__this_00,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_GetEnumerator
                    );
          local_88 = local_b8;
          local_98 = (undefined1  [8])local_c8._0_8_;
          pSStack_90 = (System_Collections_Generic_List_Enumerator_object__o *)local_c8._8_8_;
          local_c8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_98;
          while( true ) {
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_MoveNext
                              );
            pIVar6 = local_88;
            if (!bVar5) break;
            if (local_88 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            plVar4 = local_88[1].monitor;
            if (plVar4 == (long *)0x0) {
              ThrowNullReferenceException();
            }
            bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
            if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
               (*(CustomLogic_CustomLogicVariableExpressionAst_c **)
                 (*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) !=
                TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            a = (System_String_o *)plVar4[3];
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object
                                  );
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (MethodInfo_4AAC8D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
            pIVar6 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                               (local_b0,classInstance,__this_01,pIVar6[2].monitor,in_R8);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (classInstance->fields).Variables;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar3,(Il2CppObject *)a,pIVar6,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
            bVar5 = System_String__op_Equality(a,"Type",(MethodInfo *)0x0);
            if (bVar5) {
              (classInstance->fields)._containsTypeOverride = true;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicAssignmentExpressionAst_Dispose
                    );
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(local_80->fields).Methods;
          if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator
                      (&local_78,pSVar3,
                       (MethodInfo_4AAD970 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_GetEnumerator
                      );
            local_c8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            local_c8._8_8_ = &local_78;
            while( true ) {
              bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                 &local_78,
                                 (MethodInfo_4CE66D0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_MoveNext
                                );
              if (!bVar5) {
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                          ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_78,
                           (MethodInfo_4CE67F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_CustomLogicMethodDefinitionAst_Dispose
                          );
                return;
              }
              local_48.fields.key = local_78.fields._current.fields.key;
              local_48.fields.value = local_78.fields._current.fields.value;
              System_Collections_Generic_KeyValuePair_object__object___Deconstruct
                        (&local_48,&local_a0,(Il2CppObject **)&local_a8,
                         (MethodInfo_5139210 *)
                         MethodInfo_System_Collections_Generic_KeyValuePair_string_CustomLogicMethodDefinitionAst_Deconstruct
                        );
              pIVar6 = local_a0;
              ast = local_a8;
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_UserMethod);
              CustomLogic_UserMethod___ctor(__this_02,classInstance,ast,(MethodInfo *)0x0);
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (classInstance->fields).Variables;
              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar3,pIVar6,(Il2CppObject *)__this_02,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateBlockCoroutine
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, System_Collections_Generic_List_CustomLogicBaseAst__o* statements, const MethodInfo* method);
// 0x5b89ba0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
          (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *classInstance,
          System_Collections_Generic_Dictionary_string__object__o *localVariables,
          System_Collections_Generic_List_CustomLogicBaseAst__o *statements,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this_00;
  
  if (Il2CppMethodInitialized_075473d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicEvaluator_EvaluateBlockCoroutine_d__87);
    Il2CppMethodInitialized_075473d2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator_EvaluateBlockCoroutine_d__87
                        );
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).classInstance = classInstance;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).classInstance);
  (__this_00->fields).localVariables = localVariables;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).localVariables);
  (__this_00->fields).statements = statements;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).statements);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateBlock
// il2cpp: bool CustomLogic_CustomLogicEvaluator__EvaluateBlock (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, System_Collections_Generic_List_CustomLogicBaseAst__o* statements, Il2CppObject** result, const MethodInfo* method);
// 0x5b89c50
// eh: try 0x5b89e76..0x5b8a8f8 -> pad 0x5b8a963 (+53 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b8a902..0x5b8a90c -> pad 0x5b8a9ce catch (...) [compiler noexcept guard]
// eh: try 0x5b8a984..0x5b8a989 -> pad 0x5b8a9b6 cleanup
// eh: try 0x5b8a9b9..0x5b8a9c6 -> pad 0x5b8a9ce catch (...) [compiler noexcept guard]
// asm: 106 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8a03e: nop 
// asm:   0x5b8a2a6: nop word ptr cs:[rax + rax]
// asm:   0x5b8a38d: jmp 0x5b8a67c
// asm:   0x5b8a43c: mov rbx, r13
// asm:   0x5b8a43f: mov r13, rbp
// asm:   0x5b8a614: jmp 0x5b8a624
// asm:   0x5b8a616: jmp 0x5b8a624
// asm:   0x5b8a618: jmp 0x5b8a624
// asm:   0x5b8a61a: jmp 0x5b8a624
// asm:   0x5b8a61c: jmp 0x5b8a624
// asm:   0x5b8a61e: jmp 0x5b8a624
// asm:   0x5b8a620: jmp 0x5b8a624
// asm:   0x5b8a622: jmp 0x5b8a624
// asm:   0x5b8a624: mov r15, rdx
// asm:   0x5b8a627: mov rbx, rax
// asm:   0x5b8a62a: cmp r15d, 1
// asm:   0x5b8a62e: jne 0x5b8a902
// asm:   0x5b8a634: mov rdi, rbx
// asm:   0x5b8a637: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8a63c: mov rbp, qword ptr [rax]
// asm:   0x5b8a63f: mov qword ptr [rsp + 0x28], rbp
// asm:   0x5b8a644: xor r12d, r12d
// asm:   0x5b8a647: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8a64c: mov r13, qword ptr [rsp + 0x20]
// asm:   0x5b8a651: mov rbx, qword ptr [rsp + 0x78]
// asm:   0x5b8a656: jmp 0x5b8a444
// asm:   0x5b8a6f9: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x5b8a701: test rsi, rsi
// asm:   0x5b8a704: je 0x5b8a755
// asm:   0x5b8a8a4: mov rdi, rbp
// asm:   0x5b8a8a7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8a8f8: jmp 0x5b8a926
// asm:   0x5b8a8fa: jmp 0x5b8a963
// asm:   0x5b8a8fc: mov r15, rdx
// asm:   0x5b8a8ff: mov rbx, rax
// asm:   0x5b8a902: lea rdi, [rsp + 0x28]
// asm:   0x5b8a907: call 0x2fd7de0  ; il2cpp_runtime_helper_02fd7de0()
// asm:   0x5b8a90c: jmp 0x5b8a969
// asm:   0x5b8a90e: jmp 0x5b8a926
// asm:   0x5b8a910: jmp 0x5b8a963
// asm:   0x5b8a912: jmp 0x5b8a926
// asm:   0x5b8a914: jmp 0x5b8a963
// asm:   0x5b8a916: jmp 0x5b8a963
// asm:   0x5b8a918: jmp 0x5b8a963
// asm:   0x5b8a91a: jmp 0x5b8a963
// asm:   0x5b8a91c: jmp 0x5b8a963
// asm:   0x5b8a91e: jmp 0x5b8a963
// asm:   0x5b8a920: jmp 0x5b8a963
// asm:   0x5b8a922: jmp 0x5b8a963
// asm:   0x5b8a924: jmp 0x5b8a926
// asm:   0x5b8a926: mov r15, rdx
// asm:   0x5b8a929: mov rbx, rax
// asm:   0x5b8a92c: mov bpl, 1
// asm:   0x5b8a92f: jmp 0x5b8a96b
// asm:   0x5b8a931: jmp 0x5b8a963
// asm:   0x5b8a933: jmp 0x5b8a963
// asm:   0x5b8a935: jmp 0x5b8a963
// asm:   0x5b8a937: jmp 0x5b8a963
// asm:   0x5b8a939: jmp 0x5b8a963
// asm:   0x5b8a93b: jmp 0x5b8a963
// asm:   0x5b8a93d: jmp 0x5b8a963
// asm:   0x5b8a93f: jmp 0x5b8a963
// asm:   0x5b8a941: jmp 0x5b8a963
// asm:   0x5b8a943: jmp 0x5b8a963
// asm:   0x5b8a945: jmp 0x5b8a963
// asm:   0x5b8a947: jmp 0x5b8a963
// asm:   0x5b8a949: jmp 0x5b8a963
// asm:   0x5b8a94b: jmp 0x5b8a963
// asm:   0x5b8a94d: jmp 0x5b8a963
// asm:   0x5b8a94f: jmp 0x5b8a963
// asm:   0x5b8a951: jmp 0x5b8a963
// asm:   0x5b8a953: jmp 0x5b8a963
// asm:   0x5b8a955: jmp 0x5b8a963
// asm:   0x5b8a957: jmp 0x5b8a963
// asm:   0x5b8a959: jmp 0x5b8a963
// asm:   0x5b8a95b: jmp 0x5b8a963
// asm:   0x5b8a95d: jmp 0x5b8a963
// asm:   0x5b8a95f: jmp 0x5b8a963
// asm:   0x5b8a961: jmp 0x5b8a963
// asm:   0x5b8a963: mov r15, rdx
// asm:   0x5b8a966: mov rbx, rax
// asm:   0x5b8a969: xor ebp, ebp
// asm:   0x5b8a96b: cmp r15d, 1
// asm:   0x5b8a96f: jne 0x5b8a9b9
// asm:   0x5b8a971: mov rdi, rbx
// asm:   0x5b8a974: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8a979: mov r14, qword ptr [rax]
// asm:   0x5b8a97c: mov qword ptr [rsp + 0xa8], r14
// asm:   0x5b8a984: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8a989: lea rax, [rip + 0x1703040]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose
// asm:   0x5b8a990: mov rsi, qword ptr [rax]
// asm:   0x5b8a993: lea rdi, [rsp + 0x60]
// asm:   0x5b8a998: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b8a99d: xor r12d, r12d
// asm:   0x5b8a9a0: test r14, r14
// asm:   0x5b8a9a3: mov rbx, qword ptr [rsp + 0x18]
// asm:   0x5b8a9a8: je 0x5b8a6d7
// asm:   0x5b8a9ae: mov rdi, r14
// asm:   0x5b8a9b1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8a9b6: mov rbx, rax
// asm:   0x5b8a9b9: lea rdi, [rsp + 0xa8]
// asm:   0x5b8a9c1: call 0x2fd7e10  ; il2cpp_runtime_helper_02fd7e10()
// asm:   0x5b8a9c6: mov rdi, rbx
// asm:   0x5b8a9c9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b8a9ce: mov rdi, rax
// asm:   0x5b8a9d1: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomLogic_CustomLogicEvaluator__EvaluateBlock
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,
               System_Collections_Generic_Dictionary_string__object__o *localVariables,
               System_Collections_Generic_List_CustomLogicBaseAst__o *statements,Il2CppObject **result,
               MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicToken_o *pCVar2;
  Il2CppClass *pIVar3;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar4;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar5;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *value;
  bool bVar6;
  Il2CppObject *pIVar7;
  int *piVar8;
  char *pcVar9;
  CustomLogic_CustomLogicAssignmentExpressionAst_c *pCVar10;
  byte bVar11;
  MethodInfo *method_00;
  int iVar12;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *expression;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_e0;
  bool local_d0;
  undefined1 local_c0 [16];
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_b0;
  undefined1 local_a8 [8];
  undefined1 *puStack_a0;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_98;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  CustomLogic_CustomLogicAssignmentExpressionAst_o *local_78;
  CustomLogic_CustomLogicEvaluator_o *local_70;
  Il2CppObject *local_68;
  Il2CppObject *local_60;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  Il2CppClass *local_48;
  Il2CppClass *local_40;
  Il2CppClass *local_38;
  
  method_00 = (MethodInfo *)result;
  if (Il2CppMethodInitialized_075473d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBaseExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBreakExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicConditionalBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicContinueExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForBlockAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicReturnExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    Il2CppMethodInitialized_075473d3 = '\x01';
  }
  local_88 = (undefined1  [8])0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  local_78 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
  local_48 = (Il2CppClass *)0x0;
  local_50 = (Il2CppObject *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_60 = (Il2CppObject *)0x0;
  local_a8 = (undefined1  [8])0x0;
  puStack_a0 = (undefined1 *)0x0;
  local_98 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
  local_68 = (Il2CppObject *)0x0;
  *result = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(result);
  if (statements == (System_Collections_Generic_List_CustomLogicBaseAst__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
             (System_Collections_Generic_List_object__o *)statements,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_GetEnumerator
            );
  local_78 = local_b0;
  local_88 = (undefined1  [8])local_c0._0_8_;
  uStack_80 = (undefined1 *)local_c0._8_8_;
  local_40 = (Il2CppClass *)0x0;
  local_38 = (Il2CppClass *)local_88;
  local_d0 = false;
  local_e0 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
  local_70 = __this;
  do {
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_MoveNext);
    expression = local_78;
    if (!bVar6) {
      iVar12 = 0x24;
label_05b8a661:
      bVar6 = false;
label_05b8a6c3:
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicBaseAst_Dispose);
      if (iVar12 == 7) {
        bVar6 = local_d0;
      }
      return bVar6;
    }
    if (local_78 == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields)._currentLineNumber = (local_78->fields).Line;
    pCVar10 = local_78->klass;
    bVar11 = (pCVar10->_2).typeHierarchyDepth;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 <= bVar11) &&
       ((pCVar10->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAssignmentExpressionAst)) {
      CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression
                (__this,classInstance,localVariables,local_78,method_00);
      goto switchD_05b8a576_caseD_1;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicReturnExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 <= bVar11) &&
       ((pCVar10->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicReturnExpressionAst)) {
      pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                         (__this,classInstance,localVariables,(local_78->fields).Left,method_00);
      *result = pIVar7;
      Il2CppCodeGenWriteBarrier(result);
label_05b8a6b8:
      local_d0 = true;
      iVar12 = 7;
      bVar6 = true;
      goto label_05b8a6c3;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
    if (((bVar1 <= bVar11) &&
        ((pCVar10->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
       ((bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
        bVar1 <= bVar11 &&
        ((pCVar10->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
      *result = (Il2CppObject *)local_78;
      Il2CppCodeGenWriteBarrier(result);
      goto label_05b8a6b8;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
    if ((bVar11 < bVar1) ||
       ((pCVar10->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicForBlockAst->_2).typeHierarchyDepth;
      if ((bVar1 <= bVar11) &&
         ((pCVar10->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForBlockAst)) {
        pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                           (__this,classInstance,localVariables,(local_78->fields).Right,method_00);
        if (pIVar7 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar11 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
        if (((pIVar7->klass->_2).typeHierarchyDepth < bVar11) ||
           ((pIVar7->klass->_2).typeHierarchy[(ulong)bVar11 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
        }
        if (pIVar7[3].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
                   (System_Collections_Generic_List_object__o *)pIVar7[3].klass,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
        local_98 = local_b0;
        local_a8 = (undefined1  [8])local_c0._0_8_;
        puStack_a0 = (undefined1 *)local_c0._8_8_;
        local_c0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_c0._8_8_ = local_a8;
        if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
          if (bVar6) {
            if ((expression->fields).Operator != (CustomLogic_CustomLogicToken_o *)0x0) {
              ThrowNullReferenceException();
            }
label_05b8a600:
            ThrowNullReferenceException();
          }
          iVar12 = 5;
        }
        else {
          while( true ) {
            do {
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
              value = local_98;
              iVar12 = 5;
              if (!bVar6) goto label_05b8a442;
              pCVar2 = (expression->fields).Operator;
              if (pCVar2 == (CustomLogic_CustomLogicToken_o *)0x0) goto label_05b8a600;
              pIVar7 = (pCVar2->fields).Value;
              bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                                 pIVar7,(MethodInfo_4AAD6F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey
                                );
              if (bVar6) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,pIVar7,
                           (Il2CppObject *)value,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
              }
              else {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,pIVar7,
                           (Il2CppObject *)value,
                           (MethodInfo_4AAD4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
              }
              __this = local_70;
              method_00 = (MethodInfo *)&local_68;
              bVar6 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                                (local_70,classInstance,localVariables,
                                 (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                                 (expression->fields).Left,(Il2CppObject **)method_00,method);
            } while (!bVar6);
            if (local_68 == (Il2CppObject *)0x0) break;
            pIVar3 = local_68->klass;
            bVar11 = (pIVar3->_2).typeHierarchyDepth;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
            if ((bVar1 <= bVar11) &&
               ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) goto label_05b8a442;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth;
            if ((bVar11 < bVar1) ||
               ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) break;
          }
          *result = local_68;
          Il2CppCodeGenWriteBarrier(result);
          local_d0 = true;
          iVar12 = 7;
        }
label_05b8a442:
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose)
        ;
        if (iVar12 == 5) {
          goto switchD_05b8a576_caseD_1;
        }
        if (iVar12 != 0) goto label_05b8a661;
        pCVar10 = expression->klass;
        bVar11 = (pCVar10->_2).typeHierarchyDepth;
      }
      bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
      if ((bVar1 <= bVar11) &&
         ((pCVar10->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
        CustomLogic_CustomLogicEvaluator__EvaluateExpression
                  (__this,classInstance,localVariables,
                   (CustomLogic_CustomLogicBaseExpressionAst_o *)expression,method_00);
      }
    }
    else {
      pCVar4 = (local_78->fields).Right;
      if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar5 = (*(uint64_t *)((char *)pCVar4 + 0x18));
      if (pCVar5 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
        ThrowNullReferenceException();
      }
      if ((((pCVar5->_1).image)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      piVar8 = il2cpp_vm_Object_Unbox((Il2CppObject *)pCVar5);
      if (*piVar8 == 0x2a) {
        pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                           (__this,classInstance,localVariables,
                            (CustomLogic_CustomLogicBaseExpressionAst_o *)(expression->fields).Operator,
                            method_00);
        if (pIVar7 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pIVar7->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
        }
        pcVar9 = il2cpp_vm_Object_Unbox(pIVar7);
        if (*pcVar9 == '\0') {
          local_e0 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x2;
          goto label_05b8a4df;
        }
        method_00 = (MethodInfo *)&local_48;
        bVar6 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                          (__this,classInstance,localVariables,
                           (System_Collections_Generic_List_CustomLogicBaseAst__o *)(expression->fields).Left,
                           (Il2CppObject **)method_00,method);
        local_e0 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x1;
        if (bVar6) {
          if (local_48 != (Il2CppClass *)0x0) {
            pIVar3 = (local_48->_1).image;
            bVar11 = (pIVar3->_2).typeHierarchyDepth;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
            if (((bVar1 <= bVar11) &&
                ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                 (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
               ((bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
                bVar1 <= bVar11 &&
                ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                 (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
              *result = (Il2CppObject *)local_48;
              Il2CppCodeGenWriteBarrier(result);
              goto label_05b8a6b8;
            }
          }
          *result = (Il2CppObject *)local_48;
          Il2CppCodeGenWriteBarrier(result);
label_05b8a689:
          local_d0 = true;
          iVar12 = 7;
          bVar6 = false;
          goto label_05b8a6c3;
        }
      }
      else {
        pCVar4 = (expression->fields).Right;
        if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar5 = (*(uint64_t *)((char *)pCVar4 + 0x18));
        if (pCVar5 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
          ThrowNullReferenceException();
        }
        if ((((pCVar5->_1).image)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar8 = il2cpp_vm_Object_Unbox((Il2CppObject *)pCVar5);
        if (*piVar8 == 0x2d) {
label_05b8a2b0:
          do {
            pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                               (__this,classInstance,localVariables,
                                (CustomLogic_CustomLogicBaseExpressionAst_o *)(expression->fields).Operator,
                                method_00);
            if (pIVar7 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pIVar7->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
            }
            pcVar9 = il2cpp_vm_Object_Unbox(pIVar7);
            local_e0 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
            if (*pcVar9 == '\0') goto switchD_05b8a576_caseD_1;
            method_00 = (MethodInfo *)&local_50;
            bVar6 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                              (__this,classInstance,localVariables,
                               (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                               (expression->fields).Left,(Il2CppObject **)method_00,method);
          } while (!bVar6);
          if (local_50 != (Il2CppObject *)0x0) {
            pIVar3 = local_50->klass;
            bVar11 = (pIVar3->_2).typeHierarchyDepth;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
            if ((bVar1 <= bVar11) &&
               (method_00 = (MethodInfo *)classInstance,
               (pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
               (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst))
            goto switchD_05b8a576_caseD_1;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth;
            if ((bVar1 <= bVar11) &&
               ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)) goto label_05b8a2b0;
          }
          *result = local_50;
          Il2CppCodeGenWriteBarrier(result);
          goto label_05b8a689;
        }
        pCVar4 = (expression->fields).Right;
        if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar5 = (*(uint64_t *)((char *)pCVar4 + 0x18));
        if (pCVar5 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
          ThrowNullReferenceException();
        }
        if ((((pCVar5->_1).image)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar8 = il2cpp_vm_Object_Unbox((Il2CppObject *)pCVar5);
        iVar12 = (int)local_e0;
        if (*piVar8 == 0x2b) {
          if ((iVar12 == 4) || (iVar12 == 2)) {
            method_00 = (MethodInfo *)&local_58;
            bVar6 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                              (__this,classInstance,localVariables,
                               (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                               (expression->fields).Left,(Il2CppObject **)method_00,method);
            if (bVar6) {
              if (local_58 != (Il2CppObject *)0x0) {
                pIVar3 = local_58->klass;
                bVar11 = (pIVar3->_2).typeHierarchyDepth;
                bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
                if (((bVar1 <= bVar11) &&
                    ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                     (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
                   ((bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
                    bVar1 <= bVar11 &&
                    ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                     (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
                  *result = local_58;
                  Il2CppCodeGenWriteBarrier(result);
                  goto label_05b8a6b8;
                }
              }
              *result = local_58;
              Il2CppCodeGenWriteBarrier(result);
              goto label_05b8a689;
            }
          }
          local_e0 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
label_05b8a4df:
        }
        else {
          pCVar4 = (expression->fields).Right;
          if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar5 = (*(uint64_t *)((char *)pCVar4 + 0x18));
          if (pCVar5 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
            ThrowNullReferenceException();
          }
          if ((((pCVar5->_1).image)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          piVar8 = il2cpp_vm_Object_Unbox((Il2CppObject *)pCVar5);
          if (*piVar8 == 0x2c) {
            switch(iVar12) {
            case 1:
            case 3:
              break;
            case 2:
            case 4:
              pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                                 (__this,classInstance,localVariables,
                                  (CustomLogic_CustomLogicBaseExpressionAst_o *)(expression->fields).Operator,
                                  method_00);
              if (pIVar7 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pIVar7->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
              }
              pcVar9 = il2cpp_vm_Object_Unbox(pIVar7);
              if (*pcVar9 == '\0') goto switchD_05b8a576_default;
              method_00 = (MethodInfo *)&local_60;
              bVar6 = CustomLogic_CustomLogicEvaluator__EvaluateBlock
                                (__this,classInstance,localVariables,
                                 (System_Collections_Generic_List_CustomLogicBaseAst__o *)
                                 (expression->fields).Left,(Il2CppObject **)method_00,method);
              local_e0 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x3;
              if (bVar6) {
                if (local_60 != (Il2CppObject *)0x0) {
                  pIVar3 = local_60->klass;
                  bVar11 = (pIVar3->_2).typeHierarchyDepth;
                  bVar1 = (TypeInfo_CustomLogic_CustomLogicBreakExpressionAst->_2).typeHierarchyDepth;
                  if (((bVar1 <= bVar11) &&
                      ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                       (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBreakExpressionAst)) ||
                     ((bVar1 = (TypeInfo_CustomLogic_CustomLogicContinueExpressionAst->_2).typeHierarchyDepth,
                      bVar1 <= bVar11 &&
                      ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                       (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicContinueExpressionAst)))) {
                    *result = local_60;
                    Il2CppCodeGenWriteBarrier(result);
                    goto label_05b8a6b8;
                  }
                }
                *result = local_60;
                Il2CppCodeGenWriteBarrier(result);
                goto label_05b8a689;
              }
              break;
            default:
switchD_05b8a576_default:
              local_e0 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x4;
              goto label_05b8a4df;
            }
          }
        }
      }
    }
switchD_05b8a576_caseD_1:
    bVar11 = (TypeInfo_CustomLogic_CustomLogicConditionalBlockAst->_2).typeHierarchyDepth;
    if ((expression->klass->_2).typeHierarchyDepth < bVar11) {
      expression = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
    }
    else if ((expression->klass->_2).typeHierarchy[(ulong)bVar11 - 1] !=
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicConditionalBlockAst) {
      expression = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
    }
    if (expression == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) {
      local_e0 = (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0;
    }
  } while( true );
}


// CustomLogic.CustomLogicEvaluator$$EvaluateAssignmentExpression
// il2cpp: void CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, CustomLogic_CustomLogicAssignmentExpressionAst_o* assignment, const MethodInfo* method);
// 0x5b8a9e0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8ab85: jmp 0x5b8aecd
// asm:   0x5b8ad6d: jmp 0x5b8aecd
// asm:   0x5b8ad74: mov rdx, qword ptr [rsp + 8]
// asm:   0x5b8aef0: mov rax, qword ptr [rbx]
// asm:   0x5b8aef3: mov rcx, qword ptr [rax + 0x1a0]
// asm:   0x5b8aefa: mov rdi, rbx
// asm:   0x5b8aefd: mov rsi, r12
// asm:   0x5b8af00: mov rdx, qword ptr [rsp + 8]
// asm:   0x5b8af05: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x5b8af0b: jmp 0x5b8aecd

void CustomLogic_CustomLogicEvaluator__EvaluateAssignmentExpression
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,
               System_Collections_Generic_Dictionary_string__object__o *localVariables,
               CustomLogic_CustomLogicAssignmentExpressionAst_o *assignment,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicToken_o *pCVar4;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar5;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  bool bVar8;
  char cVar9;
  int *piVar10;
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  System_String_array *values;
  System_String_o *message;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  uint *puVar13;
  MethodInfo *method_00;
  System_String_o **metadataPointer;
  uint uVar14;
  MethodInfo *in_R9;
  CustomLogic_CustomLogicClassInstance_o *local_50;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_075473d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFieldExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_075473d4 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  if (((assignment == (CustomLogic_CustomLogicAssignmentExpressionAst_o *)0x0) ||
      (pCVar4 = (assignment->fields).Operator, pCVar4 == (CustomLogic_CustomLogicToken_o *)0x0)) ||
     (pIVar11 = (pCVar4->fields).Value, pIVar11 == (Il2CppObject *)0x0)) goto label_05b8af0d;
  if ((pIVar11->klass->_1).element_class != (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
  iVar3 = *piVar10;
  local_50 = (CustomLogic_CustomLogicClassInstance_o *)
             CustomLogic_CustomLogicEvaluator__EvaluateExpression
                       (__this,classInstance,localVariables,(assignment->fields).Right,method);
  pCVar5 = (assignment->fields).Right;
  if (pCVar5 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
label_05b8ab15:
    if (local_50 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      local_50 = (CustomLogic_CustomLogicClassInstance_o *)0x0;
      goto label_05b8ab8c;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((local_50->klass->_2).typeHierarchyDepth < bVar1) ||
       ((local_50->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_05b8ab8c;
    bVar8 = CustomLogic_CustomLogicClassInstance__HasVariable
                      (local_50,(__this->fields).copy,(MethodInfo *)(ulong)bVar1);
    if (bVar8) {
      local_50 = (CustomLogic_CustomLogicClassInstance_o *)
                 CustomLogic_CustomLogicEvaluator__EvaluateMethod
                           (__this,local_50,(__this->fields).copy,(System_Object_array *)0x0,
                            (__this->fields)._currentLineNumber,in_R9);
      pCVar5 = (assignment->fields).Left;
    }
    else {
      pCVar5 = (assignment->fields).Left;
    }
  }
  else {
    pCVar6 = pCVar5->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst->_2).typeHierarchyDepth;
    if (((pCVar6->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar6->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)) goto label_05b8ab15;
label_05b8ab8c:
    pCVar5 = (assignment->fields).Left;
  }
  if (pCVar5 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
    return;
  }
  uVar14 = iVar3 - 0x19;
  pCVar6 = pCVar5->klass;
  bVar1 = (pCVar6->_2).typeHierarchyDepth;
  bVar2 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)->_2).typeHierarchyDepth;
  if ((bVar2 <= bVar1) &&
     ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
    pCVar6 = (*(uint64_t *)((char *)pCVar5 + 0x18));
    if (uVar14 < 0xfffffffc) {
      if (localVariables != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
label_05b8ace6:
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                   (Il2CppObject *)pCVar6,(Il2CppObject *)local_50,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        return;
      }
    }
    else if (localVariables != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      pIVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                           (Il2CppObject *)pCVar6,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
      switch(iVar3) {
      case 0x15:
        local_50 = (CustomLogic_CustomLogicClassInstance_o *)
                   CustomLogic_CustomLogicEvaluator__AddValues
                             (__this,pIVar11,(Il2CppObject *)local_50,
                              (MethodInfo *)&switchD_05b8ad4e::switchdataD_010a59cc);
        break;
      case 0x16:
        local_50 = (CustomLogic_CustomLogicClassInstance_o *)
                   CustomLogic_CustomLogicEvaluator__SubtractValues
                             (__this,pIVar11,(Il2CppObject *)local_50,
                              (MethodInfo *)&switchD_05b8ad4e::switchdataD_010a59cc);
        break;
      case 0x17:
        local_50 = (CustomLogic_CustomLogicClassInstance_o *)
                   CustomLogic_CustomLogicEvaluator__MultiplyValues
                             (__this,pIVar11,(Il2CppObject *)local_50,
                              (MethodInfo *)&switchD_05b8ad4e::switchdataD_010a59cc);
        break;
      case 0x18:
        local_50 = (CustomLogic_CustomLogicClassInstance_o *)
                   CustomLogic_CustomLogicEvaluator__DivideValues
                             (__this,pIVar11,(Il2CppObject *)local_50,
                              (MethodInfo *)&switchD_05b8ad4e::switchdataD_010a59cc);
        break;
      default:
      }
      goto label_05b8ace6;
    }
    goto label_05b8af0d;
  }
  bVar2 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFieldExpressionAst)->_2).typeHierarchyDepth;
  if (bVar1 < bVar2) {
    return;
  }
  if ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFieldExpressionAst) {
    return;
  }
  pCVar6 = (*(uint64_t *)((char *)pCVar5 + 0x18));
  __this_00 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,(*(uint64_t *)((char *)pCVar5 + 0x20)),(MethodInfo *)(ulong)uVar14);
  if (__this_00 == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto label_05b8af0d;
  bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
  pIVar12 = (Il2CppClass *)(ulong)bVar1;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(long)((long)&pIVar12[-1].vtable[0xfe].method + 7)] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  if (0xfffffffb < uVar14) {
    pIVar11 = CustomLogic_CustomLogicClassInstance__GetVariable(__this_00,(System_String_o *)pCVar6,method_00)
    ;
    if (pIVar11 == (Il2CppObject *)0x0) {
      pIVar11 = (Il2CppObject *)0x0;
    }
    else {
      pIVar12 = pIVar11->klass;
      bVar1 = (TypeInfo_CustomLogic_CLPropertyBinding->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar12->_2).typeHierarchyDepth) &&
         ((pIVar12->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding)) {
        pIVar11 = (Il2CppObject *)(*pIVar12->vtable[5].methodPtr)(pIVar11,__this_00,pIVar12->vtable[5].method)
        ;
      }
    }
    puVar13 = &switchD_05b8ad98::switchdataD_010a59dc;
    switch(iVar3) {
    case 0x15:
      local_50 = (CustomLogic_CustomLogicClassInstance_o *)
                 CustomLogic_CustomLogicEvaluator__AddValues
                           (__this,pIVar11,(Il2CppObject *)local_50,
                            (MethodInfo *)&switchD_05b8ad98::switchdataD_010a59dc);
      break;
    case 0x16:
      local_50 = (CustomLogic_CustomLogicClassInstance_o *)
                 CustomLogic_CustomLogicEvaluator__SubtractValues
                           (__this,pIVar11,(Il2CppObject *)local_50,
                            (MethodInfo *)&switchD_05b8ad98::switchdataD_010a59dc);
      break;
    case 0x17:
      local_50 = (CustomLogic_CustomLogicClassInstance_o *)
                 CustomLogic_CustomLogicEvaluator__MultiplyValues
                           (__this,pIVar11,(Il2CppObject *)local_50,
                            (MethodInfo *)&switchD_05b8ad98::switchdataD_010a59dc);
      break;
    case 0x18:
      local_50 = (CustomLogic_CustomLogicClassInstance_o *)
                 CustomLogic_CustomLogicEvaluator__DivideValues
                           (__this,pIVar11,(Il2CppObject *)local_50,
                            (MethodInfo *)&switchD_05b8ad98::switchdataD_010a59dc);
      break;
    default:
      goto switchD_05b8ad98_default;
    }
    pIVar12 = (Il2CppClass *)puVar13;
  }
switchD_05b8ad98_default:
  bVar8 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                    (__this_00,(System_String_o *)pCVar6,&local_38,(MethodInfo *)pIVar12);
  pIVar11 = local_38;
  if (bVar8) {
    if (local_38 != (Il2CppObject *)0x0) {
      pIVar12 = local_38->klass;
      bVar1 = (pIVar12->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_CustomLogic_CLPropertyBinding->_2).typeHierarchyDepth;
      if ((bVar2 <= bVar1) &&
         ((pIVar12->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding)) {
        cVar9 = (*pIVar12->vtable[4].methodPtr)(local_38,pIVar12->vtable[4].method);
        if (cVar9 == '\0') {
          pIVar12 = pIVar11->klass;
          (*pIVar12->vtable[6].methodPtr)(pIVar11,__this_00,local_50,pIVar12->vtable[6].method);
          return;
        }
        pIVar12 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
        values = (System_String_array *)SZArrayNew(pIVar12,5);
        NullCheck(values);
        metadataPointer = &"Cannot reassign read-only field '";
label_05b8af77:
        pIVar11 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
        il2cpp_codegen_array_set_ref((System_Array_o *)values,0,pIVar11);
        NullCheck(__this_00);
        pIVar11 = (Il2CppObject *)
                  (*(__this_00->klass->vtable)._6_unknown.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._6_unknown.method);
        il2cpp_codegen_array_set_ref((System_Array_o *)values,1,pIVar11);
        pIVar11 = il2cpp_codegen_get_runtime_metadata(&".");
        il2cpp_codegen_array_set_ref((System_Array_o *)values,2,pIVar11);
        il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)pCVar6);
        pIVar11 = il2cpp_codegen_get_runtime_metadata(&"'");
        il2cpp_codegen_array_set_ref((System_Array_o *)values,4,pIVar11);
        message = System_String__Concat_5302910(values,(MethodInfo *)0x0);
        pIVar12 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar12);
        System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateAssignmentExpression);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      bVar2 = (TypeInfo_CustomLogic_CLMethodBinding->_2).typeHierarchyDepth;
      if ((bVar2 <= bVar1) &&
         ((pIVar12->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding
         )) {
        pIVar12 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_string_array);
        values = (System_String_array *)SZArrayNew(pIVar12,5);
        NullCheck(values);
        metadataPointer = &"Cannot reassign built-in method '";
        goto label_05b8af77;
      }
    }
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Variables;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05b8af0d:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar7,(Il2CppObject *)pCVar6,(Il2CppObject *)local_50,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
  }
  else {
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Variables;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b8af0d;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar7,(Il2CppObject *)pCVar6,(Il2CppObject *)local_50,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
  }
  return;
}


// CustomLogic.CustomLogicEvaluator$$HasMethod
// il2cpp: bool CustomLogic_CustomLogicEvaluator__HasMethod (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_String_o* methodName, const MethodInfo* method);
// 0x5b6db20

bool CustomLogic_CustomLogicEvaluator__HasMethod
               (CustomLogic_CustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,System_String_o *methodName,
               MethodInfo *method)

{
  CustomLogic_CustomLogicStartAst_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  Il2CppObject *key;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar4;
  
  if (Il2CppMethodInitialized_075473d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    Il2CppMethodInitialized_075473d5 = '\x01';
  }
  pCVar1 = (__this->fields)._start;
  if ((pCVar1 != (CustomLogic_CustomLogicStartAst_o *)0x0) &&
     (classInstance != (CustomLogic_CustomLogicClassInstance_o *)0x0)) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Classes;
    key = (Il2CppObject *)
          (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                    (classInstance,(classInstance->klass->vtable)._6_unknown.method);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,key,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                         );
      if ((pCVar4 != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar4->fields).Methods,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar2,(Il2CppObject *)methodName,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
                          );
        return bVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateMethod (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_String_o* methodName, System_Object_array* parameterValues, int32_t callerLineNumber, const MethodInfo* method);
// 0x5b6dc80
// fidelity: the machine code has facts this C leaves out:
//   call to CustomLogic_CustomLogicCompiler__FormatLineNumber
// eh: try 0x5b6de5b..0x5b6eaec -> pad 0x5b6eab2 (+68 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x5b6eb12..0x5b6eb1c -> pad 0x5b6edd2 catch (...) [compiler noexcept guard]
// eh: try 0x5b6eb3e..0x5b6edc2 -> pad 0x5b6edc2 (+2 call sites) cleanup
// eh: try 0x5b6edc5..0x5b6edca -> pad 0x5b6edd2 catch (...) [compiler noexcept guard]
// asm: 394 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6e591: lea rdi, [rsp + 0x40]
// asm:   0x5b6e596: xor esi, esi
// asm:   0x5b6e598: call 0x55b73e0  ; System_Int32__ToString()
// asm:   0x5b6e59d: mov rbx, rax
// asm:   0x5b6e5a0: lea rdi, [rip + 0x1706391]  ; TypeInfo_string_array
// asm:   0x5b6e5a7: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6e5ac: mov rdi, rax
// asm:   0x5b6e5af: mov esi, 6
// asm:   0x5b6e5b4: call 0x30d6180  ; SZArrayNew()
// asm:   0x5b6e5b9: test rax, rax
// asm:   0x5b6e5bc: je 0x5b6ed9c
// asm:   0x5b6e5c2: mov rbp, rax
// asm:   0x5b6e5c5: lea rdi, [rip + 0x176a95c]  ; "Custom logic runtime error at method "
// asm:   0x5b6e5cc: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6e5d1: cmp dword ptr [rbp + 0x18], 0
// asm:   0x5b6e5d5: je 0x5b6e82a
// asm:   0x5b6e5db: lea rdi, [rbp + 0x20]
// asm:   0x5b6e5df: mov qword ptr [rbp + 0x20], rax
// asm:   0x5b6e5e3: mov rsi, rax
// asm:   0x5b6e5e6: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e5eb: test dword ptr [rbp + 0x18], 0xfffffffe
// asm:   0x5b6e5f2: je 0x5b6e82a
// asm:   0x5b6e5f8: lea rdi, [rbp + 0x28]
// asm:   0x5b6e5fc: mov rsi, qword ptr [rsp + 0x20]
// asm:   0x5b6e601: mov qword ptr [rbp + 0x28], rsi
// asm:   0x5b6e605: mov qword ptr [rsp + 0x20], rsi
// asm:   0x5b6e60a: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e60f: lea rdi, [rip + 0x17602f2]  ; " in class "
// asm:   0x5b6e616: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6e61b: cmp dword ptr [rbp + 0x18], 2
// asm:   0x5b6e61f: jbe 0x5b6e82a
// asm:   0x5b6e625: lea rdi, [rbp + 0x30]
// asm:   0x5b6e629: mov qword ptr [rbp + 0x30], rax
// asm:   0x5b6e62d: mov rsi, rax
// asm:   0x5b6e630: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e635: test r12, r12
// asm:   0x5b6e638: je 0x5b6ed9c
// asm:   0x5b6e63e: mov rax, qword ptr [r12]
// asm:   0x5b6e642: mov rsi, qword ptr [rax + 0x1a0]
// asm:   0x5b6e649: mov rdi, r12
// asm:   0x5b6e64c: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x5b6e652: test dword ptr [rbp + 0x18], 0xfffffffc
// asm:   0x5b6e659: je 0x5b6e82a
// asm:   0x5b6e65f: lea rdi, [rbp + 0x38]
// asm:   0x5b6e663: mov qword ptr [rbp + 0x38], rax
// asm:   0x5b6e667: mov rsi, rax
// asm:   0x5b6e66a: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e66f: lea rdi, [rip + 0x176390a]  ; ": "
// asm:   0x5b6e676: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6e67b: cmp dword ptr [rbp + 0x18], 4
// asm:   0x5b6e67f: jbe 0x5b6e82a
// asm:   0x5b6e685: lea rdi, [rbp + 0x40]
// asm:   0x5b6e689: mov qword ptr [rbp + 0x40], rax
// asm:   0x5b6e68d: mov rsi, rax
// asm:   0x5b6e690: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e695: test r15, r15
// asm:   0x5b6e698: je 0x5b6ed9c
// asm:   0x5b6e69e: mov rdi, qword ptr [r15 + 0x28]
// asm:   0x5b6e6a2: test rdi, rdi
// asm:   0x5b6e6a5: je 0x5b6e81e
// asm:   0x5b6e6ab: mov rax, qword ptr [rdi]
// asm:   0x5b6e6ae: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b6e6b5: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b6e6bb: mov rsi, rax
// asm:   0x5b6e6be: cmp dword ptr [rbp + 0x18], 5
// asm:   0x5b6e6c2: jbe 0x5b6e82a
// asm:   0x5b6e6c8: mov rdi, rbp
// asm:   0x5b6e6cb: add rdi, 0x48
// asm:   0x5b6e6cf: mov qword ptr [rbp + 0x48], rsi
// asm:   0x5b6e6d3: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e6d8: mov rdi, rbp
// asm:   0x5b6e6db: xor esi, esi
// asm:   0x5b6e6dd: call 0x5402910  ; System_String__Concat()
// asm:   0x5b6e6e2: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x5b6e6e7: cmp byte ptr [rcx + 0xa0], 0
// asm:   0x5b6e6ee: je 0x5b6ed7b
// asm:   0x5b6e6f4: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5b6e6f9: mov r14, qword ptr [rcx + 0xa8]
// asm:   0x5b6e700: mov rdi, qword ptr [r15 + 0x28]
// asm:   0x5b6e704: test rdi, rdi
// asm:   0x5b6e707: je 0x5b6e721
// asm:   0x5b6e709: mov rax, qword ptr [rdi]
// asm:   0x5b6e70c: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b6e713: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b6e719: mov rbp, rax
// asm:   0x5b6e71c: test rax, rax
// asm:   0x5b6e71f: jne 0x5b6e737
// asm:   0x5b6e721: mov rax, qword ptr [r15]
// asm:   0x5b6e724: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b6e72b: mov rdi, r15
// asm:   0x5b6e72e: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b6e734: mov rbp, rax
// asm:   0x5b6e737: mov rax, qword ptr [r12]
// asm:   0x5b6e73b: mov rsi, qword ptr [rax + 0x1a0]
// asm:   0x5b6e742: mov rdi, r12
// asm:   0x5b6e745: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x5b6e74b: mov rcx, r12
// asm:   0x5b6e74e: mov r13, rax
// asm:   0x5b6e751: mov rax, qword ptr [rsp + 0x38]
// asm:   0x5b6e756: mov r12d, dword ptr [rax + 0xb8]
// asm:   0x5b6e75d: mov r15, qword ptr [rcx + 0x24]
// asm:   0x5b6e761: lea rdi, [rip + 0x1708650]  ; TypeInfo_CustomLogic_CustomLogicError
// asm:   0x5b6e768: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6e76d: mov rdi, rax
// asm:   0x5b6e770: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6e775: mov rbx, rax
// asm:   0x5b6e778: mov rdi, rax
// asm:   0x5b6e77b: xor esi, esi
// asm:   0x5b6e77d: call 0x5606160  ; System_Object___ctor()
// asm:   0x5b6e782: lea rdi, [rbx + 0x10]
// asm:   0x5b6e786: mov qword ptr [rbx + 0x10], rbp
// asm:   0x5b6e78a: mov rsi, rbp
// asm:   0x5b6e78d: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e792: lea rdi, [rbx + 0x18]
// asm:   0x5b6e796: mov qword ptr [rbx + 0x18], r13
// asm:   0x5b6e79a: mov rsi, r13
// asm:   0x5b6e79d: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e7a2: lea rdi, [rbx + 0x20]
// asm:   0x5b6e7a6: mov rsi, qword ptr [rsp + 0x20]
// asm:   0x5b6e7ab: mov qword ptr [rbx + 0x20], rsi
// asm:   0x5b6e7af: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e7b4: mov dword ptr [rbx + 0x28], r12d
// asm:   0x5b6e7b8: lea rdi, [rbx + 0x30]
// asm:   0x5b6e7bc: mov rsi, qword ptr [rsp + 0x30]
// asm:   0x5b6e7c1: mov qword ptr [rbx + 0x30], rsi
// asm:   0x5b6e7c5: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e7ca: mov qword ptr [rbx + 0x38], r15
// asm:   0x5b6e7ce: test r14, r14
// asm:   0x5b6e7d1: je 0x5b6ed9c
// asm:   0x5b6e7d7: lea rdi, [rip + 0x1725712]  ; MethodInfo_System_Collections_Generic_List_CustomLogicError_Add
// asm:   0x5b6e7de: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6e7e3: inc dword ptr [r14 + 0x1c]
// asm:   0x5b6e7e7: mov rcx, qword ptr [r14 + 0x10]
// asm:   0x5b6e7eb: test rcx, rcx
// asm:   0x5b6e7ee: je 0x5b6ed9c
// asm:   0x5b6e7f4: movsxd rdx, dword ptr [r14 + 0x18]
// asm:   0x5b6e7f8: cmp edx, dword ptr [rcx + 0x18]
// asm:   0x5b6e7fb: jae 0x5b6e82f
// asm:   0x5b6e7fd: lea eax, [rdx + 1]
// asm:   0x5b6e800: mov dword ptr [r14 + 0x18], eax
// asm:   0x5b6e804: lea rdi, [rcx + rdx*8]
// asm:   0x5b6e808: add rdi, 0x20
// asm:   0x5b6e80c: mov qword ptr [rcx + rdx*8 + 0x20], rbx
// asm:   0x5b6e811: mov rsi, rbx
// asm:   0x5b6e814: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b6e819: jmp 0x5b6ed88
// asm:   0x5b6e81e: xor esi, esi
// asm:   0x5b6e820: cmp dword ptr [rbp + 0x18], 5
// asm:   0x5b6e824: ja 0x5b6e6c8
// asm:   0x5b6e82a: call 0x30d63b0  ; ThrowIndexOutOfRangeException()
// asm:   0x5b6e82f: mov rax, qword ptr [rax + 0x20]
// asm:   0x5b6e833: mov rax, qword ptr [rax + 0xc0]
// asm:   0x5b6e83a: mov rdx, qword ptr [rax + 0x70]
// asm:   0x5b6e83e: mov rdi, r14
// asm:   0x5b6e841: mov rsi, rbx
// asm:   0x5b6e844: call 0x3a5d230  ; System_Collections_Generic_List_object___AddWithResize()
// asm:   0x5b6e849: jmp 0x5b6ed88
// asm:   0x5b6e979: mov rdi, r14
// asm:   0x5b6e97c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6e9ea: jmp 0x5b6eacc
// asm:   0x5b6e9ef: jmp 0x5b6eb24
// asm:   0x5b6e9f4: jmp 0x5b6eb24
// asm:   0x5b6e9f9: jmp 0x5b6eab8
// asm:   0x5b6e9fe: jmp 0x5b6eacc
// asm:   0x5b6ea03: jmp 0x5b6eacc
// asm:   0x5b6ea08: jmp 0x5b6eb24
// asm:   0x5b6ea0d: jmp 0x5b6eb24
// asm:   0x5b6ea12: jmp 0x5b6eb24
// asm:   0x5b6ea17: jmp 0x5b6eb24
// asm:   0x5b6ea1c: jmp 0x5b6eacc
// asm:   0x5b6ea21: jmp 0x5b6eacc
// asm:   0x5b6ea26: jmp 0x5b6eacc
// asm:   0x5b6ea2b: jmp 0x5b6eacc
// asm:   0x5b6ea30: jmp 0x5b6eacc
// asm:   0x5b6ea35: jmp 0x5b6eb24
// asm:   0x5b6ea3a: jmp 0x5b6eb24
// asm:   0x5b6ea3f: jmp 0x5b6eacc
// asm:   0x5b6ea44: jmp 0x5b6eb24
// asm:   0x5b6ea49: jmp 0x5b6eb24
// asm:   0x5b6ea4e: jmp 0x5b6eb24
// asm:   0x5b6ea53: jmp 0x5b6eb24
// asm:   0x5b6ea58: jmp 0x5b6eb24
// asm:   0x5b6ea5d: jmp 0x5b6eab8
// asm:   0x5b6ea5f: jmp 0x5b6eb24
// asm:   0x5b6ea64: jmp 0x5b6eb24
// asm:   0x5b6ea69: mov qword ptr [rsp + 0x20], r15
// asm:   0x5b6ea6e: jmp 0x5b6eb24
// asm:   0x5b6ea73: jmp 0x5b6eb24
// asm:   0x5b6ea78: jmp 0x5b6eab8
// asm:   0x5b6ea7a: jmp 0x5b6eb24
// asm:   0x5b6ea7f: jmp 0x5b6eab8
// asm:   0x5b6ea81: jmp 0x5b6eab8
// asm:   0x5b6ea83: jmp 0x5b6eb24
// asm:   0x5b6ea88: jmp 0x5b6eb24
// asm:   0x5b6ea8d: jmp 0x5b6eb24
// asm:   0x5b6ea92: jmp 0x5b6eb24
// asm:   0x5b6ea97: mov qword ptr [rsp + 0x20], r15
// asm:   0x5b6ea9c: jmp 0x5b6eb24
// asm:   0x5b6eaa1: mov qword ptr [rsp + 0x20], r15
// asm:   0x5b6eaa6: jmp 0x5b6eb24
// asm:   0x5b6eaa8: jmp 0x5b6eab8
// asm:   0x5b6eaaa: jmp 0x5b6eb24
// asm:   0x5b6eaac: jmp 0x5b6eb24
// asm:   0x5b6eaae: jmp 0x5b6eab8
// asm:   0x5b6eab0: jmp 0x5b6eb24
// asm:   0x5b6eab2: jmp 0x5b6eab8
// asm:   0x5b6eab4: jmp 0x5b6eb24
// asm:   0x5b6eab6: jmp 0x5b6eab8
// asm:   0x5b6eab8: mov qword ptr [rsp + 0x28], r13
// asm:   0x5b6eabd: mov qword ptr [rsp + 0x20], r15
// asm:   0x5b6eac2: jmp 0x5b6eb24
// asm:   0x5b6eac4: jmp 0x5b6eb24
// asm:   0x5b6eac6: jmp 0x5b6eacc
// asm:   0x5b6eac8: jmp 0x5b6eacc
// asm:   0x5b6eaca: jmp 0x5b6eacc
// asm:   0x5b6eacc: mov rbx, rdx
// asm:   0x5b6eacf: mov r12, rax
// asm:   0x5b6ead2: cmp ebx, 1
// asm:   0x5b6ead5: jne 0x5b6eb12
// asm:   0x5b6ead7: mov rdi, r12
// asm:   0x5b6eada: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6eadf: mov r14, qword ptr [rax]
// asm:   0x5b6eae2: mov qword ptr [rsp + 0x40], r14
// asm:   0x5b6eae7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6eaec: mov bl, 1
// asm:   0x5b6eaee: xor ebp, ebp
// asm:   0x5b6eaf0: mov r12, qword ptr [rsp + 0x28]
// asm:   0x5b6eaf5: mov rax, qword ptr [rsp + 0x38]
// asm:   0x5b6eafa: cmp byte ptr [rax + 0xa0], 0
// asm:   0x5b6eb01: jne 0x5b6e4b4
// asm:   0x5b6eb07: jmp 0x5b6e4d8
// asm:   0x5b6eb0c: mov rbx, rdx
// asm:   0x5b6eb0f: mov r12, rax
// asm:   0x5b6eb12: lea rdi, [rsp + 0x40]
// asm:   0x5b6eb17: call 0x2fd7e90  ; il2cpp_runtime_helper_02fd7e90()
// asm:   0x5b6eb1c: jmp 0x5b6eb2a
// asm:   0x5b6eb1e: jmp 0x5b6eb24
// asm:   0x5b6eb20: jmp 0x5b6eb24
// asm:   0x5b6eb22: jmp 0x5b6eb24
// asm:   0x5b6eb24: mov rbx, rdx
// asm:   0x5b6eb27: mov r12, rax
// asm:   0x5b6eb2a: cmp ebx, 1
// asm:   0x5b6eb2d: jne 0x5b6edca
// asm:   0x5b6eb33: mov rdi, r12
// asm:   0x5b6eb36: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6eb3b: mov rbx, rax
// asm:   0x5b6eb3e: lea rdi, [rip + 0x170eb53]  ; TypeInfo_System_Reflection_TargetInvocationException
// asm:   0x5b6eb45: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6eb4a: mov rcx, qword ptr [rbx]
// asm:   0x5b6eb4d: mov rsi, qword ptr [rcx]
// asm:   0x5b6eb50: mov rdi, rax
// asm:   0x5b6eb53: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b6eb58: test al, al
// asm:   0x5b6eb5a: je 0x5b6eb6e
// asm:   0x5b6eb5c: mov r15, qword ptr [rbx]
// asm:   0x5b6eb5f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6eb64: mov r12, qword ptr [rsp + 0x28]
// asm:   0x5b6eb69: jmp 0x5b6e4e9
// asm:   0x5b6eb6e: lea rdi, [rip + 0x170954b]  ; TypeInfo_System_Exception
// asm:   0x5b6eb75: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6eb7a: mov rcx, qword ptr [rbx]
// asm:   0x5b6eb7d: mov rsi, qword ptr [rcx]
// asm:   0x5b6eb80: mov rdi, rax
// asm:   0x5b6eb83: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b6eb88: test al, al
// asm:   0x5b6eb8a: je 0x5b6eda1
// asm:   0x5b6eb90: mov rbx, qword ptr [rbx]
// asm:   0x5b6eb93: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6eb98: mov rdi, qword ptr [rsp + 0x38]
// asm:   0x5b6eb9d: mov esi, dword ptr [rdi + 0xb8]
// asm:   0x5b6eba3: call 0x5b86ba0  ; CustomLogic_CustomLogicEvaluator__GetLineNumberString()
// asm:   0x5b6eba8: mov qword ptr [rsp + 0x30], rax
// asm:   0x5b6ebad: lea rdi, [rip + 0x1705d84]  ; TypeInfo_string_array
// asm:   0x5b6ebb4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6ebb9: mov rdi, rax
// asm:   0x5b6ebbc: mov esi, 8
// asm:   0x5b6ebc1: call 0x30d6180  ; SZArrayNew()
// asm:   0x5b6ebc6: test rax, rax
// asm:   0x5b6ebc9: je 0x5b6ed9c
// asm:   0x5b6ebcf: mov rbp, rax
// asm:   0x5b6ebd2: lea rdi, [rip + 0x176a347]  ; "Custom logic runtime error at line "
// asm:   0x5b6ebd9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6ebde: mov rdi, rbp
// asm:   0x5b6ebe1: xor esi, esi
// asm:   0x5b6ebe3: mov rdx, rax
// asm:   0x5b6ebe6: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b6ebeb: mov esi, 1
// asm:   0x5b6ebf0: mov rdi, rbp
// asm:   0x5b6ebf3: mov rdx, qword ptr [rsp + 0x30]
// asm:   0x5b6ebf8: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b6ebfd: lea rdi, [rip + 0x175f864]  ; " at method "
// asm:   0x5b6ec04: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6ec09: mov esi, 2
// asm:   0x5b6ec0e: mov rdi, rbp
// asm:   0x5b6ec11: mov rdx, rax
// asm:   0x5b6ec14: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b6ec19: mov esi, 3
// asm:   0x5b6ec1e: mov rdi, rbp
// asm:   0x5b6ec21: mov rdx, qword ptr [rsp + 0x20]
// asm:   0x5b6ec26: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b6ec2b: lea rdi, [rip + 0x175fcd6]  ; " in class "
// asm:   0x5b6ec32: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6ec37: mov esi, 4
// asm:   0x5b6ec3c: mov rdi, rbp
// asm:   0x5b6ec3f: mov rdx, rax
// asm:   0x5b6ec42: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b6ec47: cmp qword ptr [rsp + 0x28], 0
// asm:   0x5b6ec4d: je 0x5b6ed9c
// asm:   0x5b6ec53: mov rdi, qword ptr [rsp + 0x28]
// asm:   0x5b6ec58: mov rax, qword ptr [rdi]
// asm:   0x5b6ec5b: mov rsi, qword ptr [rax + 0x1a0]
// asm:   0x5b6ec62: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x5b6ec68: mov esi, 5
// asm:   0x5b6ec6d: mov rdi, rbp
// asm:   0x5b6ec70: mov rdx, rax
// asm:   0x5b6ec73: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b6ec78: lea rdi, [rip + 0x1763301]  ; ": "
// asm:   0x5b6ec7f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6ec84: mov esi, 6
// asm:   0x5b6ec89: mov rdi, rbp
// asm:   0x5b6ec8c: mov rdx, rax
// asm:   0x5b6ec8f: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b6ec94: test rbx, rbx
// asm:   0x5b6ec97: je 0x5b6ed9c
// asm:   0x5b6ec9d: mov rax, qword ptr [rbx]
// asm:   0x5b6eca0: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b6eca7: mov rdi, rbx
// asm:   0x5b6ecaa: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b6ecb0: mov esi, 7
// asm:   0x5b6ecb5: mov rdi, rbp
// asm:   0x5b6ecb8: mov rdx, rax
// asm:   0x5b6ecbb: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b6ecc0: mov rdi, rbp
// asm:   0x5b6ecc3: xor esi, esi
// asm:   0x5b6ecc5: call 0x5402910  ; System_String__Concat()
// asm:   0x5b6ecca: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x5b6eccf: cmp byte ptr [rcx + 0xa0], 0
// asm:   0x5b6ecd6: je 0x5b6ed7b
// asm:   0x5b6ecdc: mov r14, qword ptr [rcx + 0xa8]
// asm:   0x5b6ece3: mov rax, qword ptr [rbx]
// asm:   0x5b6ece6: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b6eced: mov rdi, rbx
// asm:   0x5b6ecf0: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b6ecf6: mov r13, rax
// asm:   0x5b6ecf9: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x5b6ecfe: mov rax, qword ptr [rbx]
// asm:   0x5b6ed01: mov rsi, qword ptr [rax + 0x1a0]
// asm:   0x5b6ed08: mov rdi, rbx
// asm:   0x5b6ed0b: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x5b6ed11: mov r15, rax
// asm:   0x5b6ed14: mov rax, qword ptr [rsp + 0x38]
// asm:   0x5b6ed19: mov r12d, dword ptr [rax + 0xb8]
// asm:   0x5b6ed20: mov rbp, qword ptr [rbx + 0x24]
// asm:   0x5b6ed24: lea rdi, [rip + 0x170808d]  ; TypeInfo_CustomLogic_CustomLogicError
// asm:   0x5b6ed2b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6ed30: mov rdi, rax
// asm:   0x5b6ed33: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6ed38: mov rbx, rax
// asm:   0x5b6ed3b: mov qword ptr [rsp], rbp
// asm:   0x5b6ed3f: mov rdi, rax
// asm:   0x5b6ed42: mov rsi, r13
// asm:   0x5b6ed45: mov rdx, r15
// asm:   0x5b6ed48: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x5b6ed4d: mov r8d, r12d
// asm:   0x5b6ed50: mov r9, qword ptr [rsp + 0x30]
// asm:   0x5b6ed55: call 0x5b74470  ; CustomLogic_CustomLogicError___ctor()
// asm:   0x5b6ed5a: test r14, r14
// asm:   0x5b6ed5d: je 0x5b6ed9c
// asm:   0x5b6ed5f: lea rdi, [rip + 0x172518a]  ; MethodInfo_System_Collections_Generic_List_CustomLogicError_Add
// asm:   0x5b6ed66: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b6ed6b: mov rdi, r14
// asm:   0x5b6ed6e: mov rsi, rbx
// asm:   0x5b6ed71: mov rdx, rax
// asm:   0x5b6ed74: call 0x2fd7e40  ; il2cpp_runtime_helper_02fd7e40()
// asm:   0x5b6ed79: jmp 0x5b6ed88
// asm:   0x5b6ed7b: mov rsi, rax
// asm:   0x5b6ed7e: mov edx, 1
// asm:   0x5b6ed83: call 0x5b83160  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x5b6ed88: xor ebp, ebp
// asm:   0x5b6ed9c: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5b6eda1: mov edi, 8
// asm:   0x5b6eda6: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b6edab: mov rcx, qword ptr [rbx]
// asm:   0x5b6edae: mov qword ptr [rax], rcx
// asm:   0x5b6edb1: lea rsi, [rip + 0x12be748]
// asm:   0x5b6edb8: mov rdi, rax
// asm:   0x5b6edbb: xor edx, edx
// asm:   0x5b6edbd: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b6edc2: mov r12, rax
// asm:   0x5b6edc5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6edca: mov rdi, r12
// asm:   0x5b6edcd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6edd2: mov rdi, rax
// asm:   0x5b6edd5: call 0x2ab61e0  ; __clang_call_terminate()

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateMethod
          (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *classInstance,
          System_String_o *methodName,System_Object_array *parameterValues,int32_t callerLineNumber,
          MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  CustomLogic_CustomLogicClassInstance_c *pCVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  CustomLogic_CustomLogicManager_o *__this_00;
  System_Collections_Generic_List_CustomLogicError__o *__this_01;
  System_Nullable_CustomLogicSourceType__Fields SVar7;
  CustomLogic_CustomLogicError_array *pCVar8;
  System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o *pSVar9;
  System_ValueTuple_object__object__Nullable_Int32Enum___o item;
  bool bVar10;
  uint uVar11;
  Il2CppObject *pIVar12;
  CustomLogic_CustomLogicClassDefinitionAst_o *pCVar13;
  CustomLogic_CustomLogicMethodDefinitionAst_o *pCVar14;
  System_Collections_Generic_Dictionary_string__object__o *__this_02;
  System_String_o *pSVar15;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar16;
  MethodInfo *pMVar17;
  System_String_o *pSVar18;
  CustomLogic_CustomLogicError_o *__this_03;
  System_Collections_Generic_Dictionary_object__object__o *pSVar19;
  System_String_o *pSVar20;
  Il2CppClass *pIVar21;
  System_Exception_o *__this_04;
  System_Object_array *method_00;
  ulong uVar22;
  CustomLogic_CustomLogicEvaluator_o *__this_05;
  undefined4 in_register_00000084;
  System_Object_array *local_78;
  CustomLogic_CustomLogicEvaluator_o *local_70;
  undefined8 local_68;
  CustomLogic_CustomLogicEvaluator_o **local_60;
  UnityEngine_Coroutine_o *local_58;
  Il2CppObject *local_50;
  System_ValueTuple_object__object__Nullable_Int32Enum___o local_48;
  
  pMVar17 = (MethodInfo *)CONCAT44(in_register_00000084,callerLineNumber);
  method_00 = parameterValues;
  local_70 = __this;
  if (Il2CppMethodInitialized_075473d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Release
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicError);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicError_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Pop
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Push
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&" not found in class ");
    il2cpp_codegen_initialize_runtime_metadata(&"Method ");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom logic runtime error: ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075473d6 = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  local_58 = (UnityEngine_Coroutine_o *)0x0;
  (__this->fields)._currentLineNumber = callerLineNumber;
  local_78 = parameterValues;
  if (parameterValues == (System_Object_array *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    local_78 = TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs;
  }
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar10 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                     (classInstance,methodName,&local_50,(MethodInfo *)method_00);
  if ((bVar10) && (local_50 != (Il2CppObject *)0x0)) {
    pIVar21 = local_50->klass;
    bVar2 = (TypeInfo_CustomLogic_CLMethodBinding->_2).typeHierarchyDepth;
    if ((bVar2 <= (pIVar21->_2).typeHierarchyDepth) &&
       ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding))
    {
      pIVar12 = (Il2CppObject *)
                (*pIVar21->vtable[4].methodPtr)(local_50,classInstance,local_78,pIVar21->vtable[4].method);
      return pIVar12;
    }
  }
  pCVar4 = classInstance->klass;
  bVar2 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).typeHierarchyDepth;
  if ((bVar2 <= (pCVar4->_2).typeHierarchyDepth) &&
     ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance
     )) {
    pSVar15 = (System_String_o *)
              (*(pCVar4->vtable)._6_unknown.methodPtr)(classInstance,(pCVar4->vtable)._6_unknown.method);
    pSVar20 = il2cpp_codegen_get_runtime_metadata(&"Method ");
    pSVar18 = il2cpp_codegen_get_runtime_metadata(&" not found in class ");
    pSVar15 = System_String__Concat_5302810(pSVar20,methodName,pSVar18,pSVar15,(MethodInfo *)0x0);
    pIVar21 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar21);
    System_Exception___ctor_54fa440(__this_04,pSVar15,(MethodInfo *)0x0);
    pMVar17 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateMethod)
    ;
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar17);
  }
  pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)(classInstance->fields).Variables;
  if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                     (pSVar19,(Il2CppObject *)methodName,
                      (MethodInfo_4AAD6F0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
  if (bVar10) {
    pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)(classInstance->fields).Variables;
    if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar19,(Il2CppObject *)methodName,
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    if (pIVar12 != (Il2CppObject *)0x0) {
      bVar2 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
      if ((bVar2 <= (pIVar12->klass->_2).typeHierarchyDepth) &&
         ((pIVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_UserMethod)) {
        classInstance = (CustomLogic_CustomLogicClassInstance_o *)pIVar12[1].klass;
        pCVar14 = pIVar12[1].monitor;
        goto joined_r0x05b6e03f;
      }
    }
  }
  pCVar5 = (local_70->fields)._start;
  if (pCVar5 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar5->fields).Classes;
  pIVar12 = (Il2CppObject *)
            (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                      (classInstance,(classInstance->klass->vtable)._6_unknown.method);
  if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                      (pSVar19,pIVar12,
                       (MethodInfo_4AAD450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                      );
  if (pCVar13 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar13->fields).Methods;
  if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                     (pSVar19,(Il2CppObject *)methodName,
                      (MethodInfo_4AAD6F0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
                     );
  if (!bVar10) {
    pMVar17 = (MethodInfo *)
              (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                        (classInstance,(classInstance->klass->vtable)._6_unknown.method);
    pSVar15 = System_String__Concat_5302810
                        ("Method ",methodName," not found in class ",(System_String_o *)pMVar17,
                         (MethodInfo *)0x0);
    if ((local_70->fields)._CaptureErrors_k__BackingField == false) {
      __this_05 = (CustomLogic_CustomLogicEvaluator_o *)"Custom logic runtime error: ";
      pSVar15 = System_String__Concat_52f0320("Custom logic runtime error: ",pSVar15,(MethodInfo *)0x0);
      CustomLogic_CustomLogicEvaluator__LogCustomLogicError(__this_05,pSVar15,true,pMVar17);
      return (Il2CppObject *)0x0;
    }
    __this_01 = (local_70->fields)._CapturedErrors_k__BackingField;
    pSVar18 = (System_String_o *)(*(classInstance->klass->vtable)._6_unknown.methodPtr)(classInstance);
    SVar7 = (classInstance->fields)._Namespace_k__BackingField.fields;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicError);
    pSVar20 = "";
    System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
    (__this_03->fields)._Message_k__BackingField = pSVar15;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields)._Message_k__BackingField);
    (__this_03->fields)._ClassName_k__BackingField = pSVar18;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields)._ClassName_k__BackingField);
    (__this_03->fields)._MethodName_k__BackingField = methodName;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields)._MethodName_k__BackingField);
    (__this_03->fields)._LineNumber_k__BackingField = 0;
    (__this_03->fields)._FormattedLineNumber_k__BackingField = pSVar20;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields)._FormattedLineNumber_k__BackingField);
    (__this_03->fields)._Namespace_k__BackingField.fields = SVar7;
    pMVar17 = MethodInfo_System_Collections_Generic_List_CustomLogicError_Add;
    if (__this_01 != (System_Collections_Generic_List_CustomLogicError__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pCVar8 = (__this_01->fields)._items;
      if (pCVar8 != (CustomLogic_CustomLogicError_array *)0x0) {
        uVar11 = (__this_01->fields)._size;
        if (uVar11 < (uint)pCVar8->max_length) {
          (__this_01->fields)._size = uVar11 + 1;
          pCVar8->m_Items[(int)uVar11] = __this_03;
          Il2CppCodeGenWriteBarrier(pCVar8->m_Items + (int)uVar11);
          return (Il2CppObject *)0x0;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_03,
                   (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
        return (Il2CppObject *)0x0;
      }
    }
    ThrowNullReferenceException();
  }
  pCVar5 = (local_70->fields)._start;
  if (pCVar5 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar5->fields).Classes;
  pIVar12 = (Il2CppObject *)
            (*(classInstance->klass->vtable)._6_unknown.methodPtr)
                      (classInstance,(classInstance->klass->vtable)._6_unknown.method);
  if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                      (pSVar19,pIVar12,
                       (MethodInfo_4AAD450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_get_Item
                      );
  if (pCVar13 == (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar13->fields).Methods;
  if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                      (pSVar19,(Il2CppObject *)methodName,
                       (MethodInfo_4AAD450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Item
                      );
joined_r0x05b6e03f:
  if (pCVar14 == (CustomLogic_CustomLogicMethodDefinitionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar14->fields).Coroutine == false) {
    (local_70->fields)._currentLineNumber = (pCVar14->fields).Line;
    if ((local_70->fields)._CaptureErrors_k__BackingField != false) {
      if ((Il2CppClass *)classInstance == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar9 = (local_70->fields)._executionStack;
      pCVar4 = (((Il2CppClass *)classInstance)->_1).image;
      pIVar12 = (Il2CppObject *)
                (*(pCVar4->vtable)._6_unknown.methodPtr)(classInstance,(pCVar4->vtable)._6_unknown.method);
      local_48.fields.Item1 = (Il2CppObject *)0x0;
      local_48.fields.Item2 = (Il2CppObject *)0x0;
      local_48.fields.Item3.fields.hasValue = false;
      local_48.fields.Item3.fields._1_3_ = 0;
      local_48.fields.Item3.fields.value = 0;
      System_ValueTuple_object__object__Nullable_Int32Enum_____ctor
                (&local_48,pIVar12,(Il2CppObject *)methodName,
                 (System_Nullable_Int32Enum__o)
                 ((System_Nullable_CustomLogicSourceType__o *)
                 ((long)&(((Il2CppClass *)classInstance)->_1).byval_arg.data + 4))->fields,
                 (MethodInfo_4553E30 *)
                 MethodInfo_System_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor);
      if (pSVar9 == (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                     *)0x0) {
        ThrowNullReferenceException();
      }
      item.fields.Item2 = local_48.fields.Item2;
      item.fields.Item1 = local_48.fields.Item1;
      item.fields.Item3.fields = local_48.fields.Item3.fields;
      System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Push
                ((System_Collections_Generic_Stack_T__o *)pSVar9,item,
                 (MethodInfo_4101B80 *)
                 MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Push
                );
    }
    local_68 = 0;
    local_60 = &local_70;
    if ((TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)
                 TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object)
      ;
    }
    pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Pool_CollectionPool_object__KeyValuePair_object__object____Get
                        ((MethodInfo_4845750 *)
                         MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Get
                        );
    if (local_78 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pCVar14->fields).ParameterNames;
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (pSVar6->fields)._size;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar11 = System_Math__Min_54baeb0((int32_t)local_78->max_length,iVar3,(MethodInfo *)0x0);
    if (0 < (int)uVar11) {
      if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar6 = (pCVar14->fields).ParameterNames;
        if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar6,0,
                     (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
          if ((int)local_78->max_length != 0) {
            ThrowNullReferenceException();
          }
label_05b6e9db:
          ThrowIndexOutOfRangeException();
        }
label_05b6e994:
        ThrowNullReferenceException();
      }
      uVar22 = 0;
      do {
        pSVar6 = (pCVar14->fields).ParameterNames;
        if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_05b6e994;
        pSVar15 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar6,(int32_t)uVar22,
                             (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
        ;
        if ((uint)local_78->max_length <= uVar22) goto label_05b6e9db;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar19,(Il2CppObject *)pSVar15,local_78->m_Items[uVar22],
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
        uVar22 = uVar22 + 1;
      } while (uVar11 != uVar22);
    }
    CustomLogic_CustomLogicEvaluator__EvaluateBlock
              (local_70,classInstance,(System_Collections_Generic_Dictionary_string__object__o *)pSVar19,
               (pCVar14->fields).Statements,(Il2CppObject **)&local_58,method);
    if ((TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)
                 TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object)
      ;
    }
    UnityEngine_Pool_CollectionPool_object__KeyValuePair_object__object____Release
              ((Il2CppObject *)pSVar19,
               (MethodInfo_48459D0 *)
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Release
              );
    pUVar16 = local_58;
    if ((local_70->fields)._CaptureErrors_k__BackingField == false) {
      return (Il2CppObject *)local_58;
    }
    pSVar9 = (local_70->fields)._executionStack;
    if (pSVar9 == (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                   *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Pop
              (&local_48,(System_Collections_Generic_Stack_T__o *)pSVar9,
               (MethodInfo_4101A00 *)
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Pop
              );
    return (Il2CppObject *)pUVar16;
  }
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if (local_78 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar6 = (pCVar14->fields).ParameterNames;
  if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = (pSVar6->fields)._size;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar11 = System_Math__Min_54baeb0((int32_t)local_78->max_length,iVar3,(MethodInfo *)0x0);
  if (0 < (int)uVar11) {
    if (__this_02 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      pSVar6 = (pCVar14->fields).ParameterNames;
      if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar6,0,
                   (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if ((int)local_78->max_length != 0) {
          ThrowNullReferenceException();
        }
label_05b6e9ba:
        ThrowIndexOutOfRangeException();
      }
label_05b6e96a:
      ThrowNullReferenceException();
    }
    uVar22 = 0;
    do {
      pSVar6 = (pCVar14->fields).ParameterNames;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_05b6e96a;
      pSVar15 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar6,(int32_t)uVar22,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if ((uint)local_78->max_length <= uVar22) goto label_05b6e9ba;
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,(Il2CppObject *)pSVar15,
                 local_78->m_Items[uVar22],
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      uVar22 = uVar22 + 1;
    } while (uVar11 != uVar22);
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  routine = CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine
                      (local_70,classInstance,__this_02,(pCVar14->fields).Statements,pMVar17);
  if (__this_00 == (CustomLogic_CustomLogicManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                      ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
  return (Il2CppObject *)pUVar16;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateMethod (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_UserMethod_o* userMethod, System_Object_array* parameterValues, const MethodInfo* method);
// 0x5b8b7e0
// fidelity: the machine code has facts this C leaves out:
//   call to il2cpp_runtime_helper_030d6370
//   virtual call through vtable slot 6 (2 times)
//   call to Il2CppCodeGenWriteBarrier (11 times)
//   call to System_Int32__ToString
//   call to il2cpp_codegen_get_runtime_metadata (6 times)
//   call to SZArrayNew
//   load of string "Custom logic runtime error at method "
//   virtual call through vtable slot 5 (3 times)
//   call to System_String__Concat
//   call to System_Object___ctor
//   call to ThrowIndexOutOfRangeException
//   call to System_Collections_Generic_List_object___AddWithResize
// eh: try 0x5b8b934..0x5b8c0b7 -> pad 0x5b8c08d (+36 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Reflection_TargetInvocationException, TypeInfo_System_Exception]
// eh: try 0x5b8c0de..0x5b8c0e8 -> pad 0x5b8c3a0 catch (...) [compiler noexcept guard]
// eh: try 0x5b8c10a..0x5b8c390 -> pad 0x5b8c390 (+2 call sites) cleanup
// eh: try 0x5b8c393..0x5b8c398 -> pad 0x5b8c3a0 catch (...) [compiler noexcept guard]
// asm: 219 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8ba19: mov r15, qword ptr [rsp + 0x20]
// asm:   0x5b8ba1e: jmp 0x5b8bc62
// asm:   0x5b8bc1a: test r14, r14
// asm:   0x5b8bc1d: jne 0x5b8bff6
// asm:   0x5b8bc23: test bpl, bpl
// asm:   0x5b8bc26: je 0x5b8c358
// asm:   0x5b8bc2c: mov rax, qword ptr [rsp + 0x18]
// asm:   0x5b8bc31: mov esi, dword ptr [rax + 0xb8]
// asm:   0x5b8bc37: mov dword ptr [rsp + 0x38], esi
// asm:   0x5b8bc3b: mov rdi, qword ptr [rax + 0x98]
// asm:   0x5b8bc42: test rdi, rdi
// asm:   0x5b8bc45: je 0x5b8bd1b
// asm:   0x5b8bc4b: call 0x5b735b0  ; CustomLogic_CustomLogicCompiler__FormatLineNumber()
// asm:   0x5b8bc50: jmp 0x5b8bd27
// asm:   0x5b8bff6: mov rdi, r14
// asm:   0x5b8bff9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b8c05f: jmp 0x5b8c097
// asm:   0x5b8c061: jmp 0x5b8c0f0
// asm:   0x5b8c066: jmp 0x5b8c097
// asm:   0x5b8c068: jmp 0x5b8c097
// asm:   0x5b8c06a: jmp 0x5b8c0f0
// asm:   0x5b8c06f: jmp 0x5b8c0f0
// asm:   0x5b8c071: jmp 0x5b8c0f0
// asm:   0x5b8c073: jmp 0x5b8c0f0
// asm:   0x5b8c075: jmp 0x5b8c097
// asm:   0x5b8c077: jmp 0x5b8c097
// asm:   0x5b8c079: jmp 0x5b8c097
// asm:   0x5b8c07b: jmp 0x5b8c097
// asm:   0x5b8c07d: jmp 0x5b8c097
// asm:   0x5b8c07f: jmp 0x5b8c097
// asm:   0x5b8c081: jmp 0x5b8c0f0
// asm:   0x5b8c083: jmp 0x5b8c0f0
// asm:   0x5b8c085: jmp 0x5b8c0f0
// asm:   0x5b8c087: jmp 0x5b8c0f0
// asm:   0x5b8c089: jmp 0x5b8c0f0
// asm:   0x5b8c08b: jmp 0x5b8c0f0
// asm:   0x5b8c08d: jmp 0x5b8c0f0
// asm:   0x5b8c08f: jmp 0x5b8c0f0
// asm:   0x5b8c091: jmp 0x5b8c097
// asm:   0x5b8c093: jmp 0x5b8c097
// asm:   0x5b8c095: jmp 0x5b8c097
// asm:   0x5b8c097: mov rbx, rdx
// asm:   0x5b8c09a: mov r12, rax
// asm:   0x5b8c09d: cmp ebx, 1
// asm:   0x5b8c0a0: jne 0x5b8c0de
// asm:   0x5b8c0a2: mov rdi, r12
// asm:   0x5b8c0a5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8c0aa: mov r14, qword ptr [rax]
// asm:   0x5b8c0ad: mov qword ptr [rsp + 0x38], r14
// asm:   0x5b8c0b2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8c0b7: mov bpl, 1
// asm:   0x5b8c0ba: xor ebx, ebx
// asm:   0x5b8c0bc: mov r15, qword ptr [rsp + 0x20]
// asm:   0x5b8c0c1: mov rax, qword ptr [rsp + 0x18]
// asm:   0x5b8c0c6: cmp byte ptr [rax + 0xa0], 0
// asm:   0x5b8c0cd: jne 0x5b8bbf6
// asm:   0x5b8c0d3: jmp 0x5b8bc1a
// asm:   0x5b8c0d8: mov rbx, rdx
// asm:   0x5b8c0db: mov r12, rax
// asm:   0x5b8c0de: lea rdi, [rsp + 0x38]
// asm:   0x5b8c0e3: call 0x2fd7ee0  ; il2cpp_runtime_helper_02fd7ee0()
// asm:   0x5b8c0e8: jmp 0x5b8c0f6
// asm:   0x5b8c0ea: jmp 0x5b8c0f0
// asm:   0x5b8c0ec: jmp 0x5b8c0f0
// asm:   0x5b8c0ee: jmp 0x5b8c0f0
// asm:   0x5b8c0f0: mov rbx, rdx
// asm:   0x5b8c0f3: mov r12, rax
// asm:   0x5b8c0f6: cmp ebx, 1
// asm:   0x5b8c0f9: jne 0x5b8c398
// asm:   0x5b8c0ff: mov rdi, r12
// asm:   0x5b8c102: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b8c107: mov rbx, rax
// asm:   0x5b8c10a: lea rdi, [rip + 0x16f1587]  ; TypeInfo_System_Reflection_TargetInvocationException
// asm:   0x5b8c111: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8c116: mov rcx, qword ptr [rbx]
// asm:   0x5b8c119: mov rsi, qword ptr [rcx]
// asm:   0x5b8c11c: mov rdi, rax
// asm:   0x5b8c11f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b8c124: test al, al
// asm:   0x5b8c126: je 0x5b8c13a
// asm:   0x5b8c128: mov r13, qword ptr [rbx]
// asm:   0x5b8c12b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8c130: mov r15, qword ptr [rsp + 0x20]
// asm:   0x5b8c135: jmp 0x5b8bc2c
// asm:   0x5b8c13a: lea rdi, [rip + 0x16ebf7f]  ; TypeInfo_System_Exception
// asm:   0x5b8c141: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8c146: mov rcx, qword ptr [rbx]
// asm:   0x5b8c149: mov rsi, qword ptr [rcx]
// asm:   0x5b8c14c: mov rdi, rax
// asm:   0x5b8c14f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b8c154: test al, al
// asm:   0x5b8c156: je 0x5b8c36f
// asm:   0x5b8c15c: mov r13, qword ptr [rbx]
// asm:   0x5b8c15f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8c164: mov rdi, qword ptr [rsp + 0x18]
// asm:   0x5b8c169: mov esi, dword ptr [rdi + 0xb8]
// asm:   0x5b8c16f: call 0x5b86ba0  ; CustomLogic_CustomLogicEvaluator__GetLineNumberString()
// asm:   0x5b8c174: mov qword ptr [rsp + 0x28], rax
// asm:   0x5b8c179: lea rdi, [rip + 0x16e87b8]  ; TypeInfo_string_array
// asm:   0x5b8c180: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8c185: mov rdi, rax
// asm:   0x5b8c188: mov esi, 8
// asm:   0x5b8c18d: call 0x30d6180  ; SZArrayNew()
// asm:   0x5b8c192: test rax, rax
// asm:   0x5b8c195: je 0x5b8c36a
// asm:   0x5b8c19b: mov rbx, rax
// asm:   0x5b8c19e: lea rdi, [rip + 0x174cd7b]  ; "Custom logic runtime error at line "
// asm:   0x5b8c1a5: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8c1aa: mov rdi, rbx
// asm:   0x5b8c1ad: xor esi, esi
// asm:   0x5b8c1af: mov rdx, rax
// asm:   0x5b8c1b2: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8c1b7: mov esi, 1
// asm:   0x5b8c1bc: mov rdi, rbx
// asm:   0x5b8c1bf: mov rdx, qword ptr [rsp + 0x28]
// asm:   0x5b8c1c4: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8c1c9: lea rdi, [rip + 0x1742298]  ; " at method "
// asm:   0x5b8c1d0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8c1d5: mov esi, 2
// asm:   0x5b8c1da: mov rdi, rbx
// asm:   0x5b8c1dd: mov rdx, rax
// asm:   0x5b8c1e0: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8c1e5: mov esi, 3
// asm:   0x5b8c1ea: mov rdi, rbx
// asm:   0x5b8c1ed: mov rdx, qword ptr [rsp + 0x30]
// asm:   0x5b8c1f2: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8c1f7: lea rdi, [rip + 0x174270a]  ; " in class "
// asm:   0x5b8c1fe: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8c203: mov esi, 4
// asm:   0x5b8c208: mov rdi, rbx
// asm:   0x5b8c20b: mov rdx, rax
// asm:   0x5b8c20e: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8c213: cmp qword ptr [rsp + 0x20], 0
// asm:   0x5b8c219: je 0x5b8c36a
// asm:   0x5b8c21f: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x5b8c224: mov rax, qword ptr [rdi]
// asm:   0x5b8c227: mov rsi, qword ptr [rax + 0x1a0]
// asm:   0x5b8c22e: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x5b8c234: mov esi, 5
// asm:   0x5b8c239: mov rdi, rbx
// asm:   0x5b8c23c: mov rdx, rax
// asm:   0x5b8c23f: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8c244: lea rdi, [rip + 0x1745d35]  ; ": "
// asm:   0x5b8c24b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8c250: mov esi, 6
// asm:   0x5b8c255: mov rdi, rbx
// asm:   0x5b8c258: mov rdx, rax
// asm:   0x5b8c25b: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8c260: test r13, r13
// asm:   0x5b8c263: je 0x5b8c36a
// asm:   0x5b8c269: mov rax, qword ptr [r13]
// asm:   0x5b8c26d: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b8c274: mov rdi, r13
// asm:   0x5b8c277: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b8c27d: mov esi, 7
// asm:   0x5b8c282: mov rdi, rbx
// asm:   0x5b8c285: mov rdx, rax
// asm:   0x5b8c288: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5b8c28d: mov rdi, rbx
// asm:   0x5b8c290: xor esi, esi
// asm:   0x5b8c292: call 0x5402910  ; System_String__Concat()
// asm:   0x5b8c297: mov rcx, qword ptr [rsp + 0x18]
// asm:   0x5b8c29c: cmp byte ptr [rcx + 0xa0], 0
// asm:   0x5b8c2a3: je 0x5b8c349
// asm:   0x5b8c2a9: mov r14, qword ptr [rcx + 0xa8]
// asm:   0x5b8c2b0: mov rax, qword ptr [r13]
// asm:   0x5b8c2b4: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b8c2bb: mov rdi, r13
// asm:   0x5b8c2be: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b8c2c4: mov r13, rax
// asm:   0x5b8c2c7: mov rbx, qword ptr [rsp + 0x20]
// asm:   0x5b8c2cc: mov rax, qword ptr [rbx]
// asm:   0x5b8c2cf: mov rsi, qword ptr [rax + 0x1a0]
// asm:   0x5b8c2d6: mov rdi, rbx
// asm:   0x5b8c2d9: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x5b8c2df: mov r15, rax
// asm:   0x5b8c2e2: mov rax, qword ptr [rsp + 0x18]
// asm:   0x5b8c2e7: mov r12d, dword ptr [rax + 0xb8]
// asm:   0x5b8c2ee: mov rbx, qword ptr [rbx + 0x24]
// asm:   0x5b8c2f2: lea rdi, [rip + 0x16eaabf]  ; TypeInfo_CustomLogic_CustomLogicError
// asm:   0x5b8c2f9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8c2fe: mov rdi, rax
// asm:   0x5b8c301: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b8c306: mov rbp, rax
// asm:   0x5b8c309: mov qword ptr [rsp], rbx
// asm:   0x5b8c30d: mov rdi, rax
// asm:   0x5b8c310: mov rsi, r13
// asm:   0x5b8c313: mov rdx, r15
// asm:   0x5b8c316: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x5b8c31b: mov r8d, r12d
// asm:   0x5b8c31e: mov r9, qword ptr [rsp + 0x28]
// asm:   0x5b8c323: call 0x5b74470  ; CustomLogic_CustomLogicError___ctor()
// asm:   0x5b8c328: test r14, r14
// asm:   0x5b8c32b: je 0x5b8c36a
// asm:   0x5b8c32d: lea rdi, [rip + 0x1707bbc]  ; MethodInfo_System_Collections_Generic_List_CustomLogicError_Add
// asm:   0x5b8c334: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b8c339: mov rdi, r14
// asm:   0x5b8c33c: mov rsi, rbp
// asm:   0x5b8c33f: mov rdx, rax
// asm:   0x5b8c342: call 0x2fd7e40  ; il2cpp_runtime_helper_02fd7e40()
// asm:   0x5b8c347: jmp 0x5b8c356
// asm:   0x5b8c349: mov rsi, rax
// asm:   0x5b8c34c: mov edx, 1
// asm:   0x5b8c351: call 0x5b83160  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x5b8c356: xor ebx, ebx
// asm:   0x5b8c36f: mov edi, 8
// asm:   0x5b8c374: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b8c379: mov rcx, qword ptr [rbx]
// asm:   0x5b8c37c: mov qword ptr [rax], rcx
// asm:   0x5b8c37f: lea rsi, [rip + 0x12a117a]
// asm:   0x5b8c386: mov rdi, rax
// asm:   0x5b8c389: xor edx, edx
// asm:   0x5b8c38b: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b8c390: mov r12, rax
// asm:   0x5b8c393: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b8c398: mov rdi, r12
// asm:   0x5b8c39b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b8c3a0: mov rdi, rax
// asm:   0x5b8c3a3: call 0x2ab61e0  ; __clang_call_terminate()

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
          (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_UserMethod_o *userMethod,
          System_Object_array *parameterValues,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicMethodDefinitionAst_o *pCVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o *pSVar6;
  CustomLogic_CustomLogicManager_o *__this_00;
  System_Collections_Generic_List_CustomLogicBaseAst__o *pSVar7;
  System_ValueTuple_object__object__Nullable_Int32Enum___o item;
  CustomLogic_CustomLogicEvaluator_o *pCVar8;
  uint uVar9;
  System_Collections_Generic_Dictionary_string__object__o *__this_01;
  System_String_o *pSVar10;
  Il2CppObject *item1;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *__this_03;
  UnityEngine_Coroutine_o *pUVar11;
  ulong uVar12;
  MethodInfo *in_R9;
  CustomLogic_CustomLogicEvaluator_o *local_80;
  CustomLogic_CustomLogicClassInstance_o *local_78;
  System_Collections_Generic_Dictionary_string__object__o *local_70;
  System_String_o *local_68;
  undefined8 local_60;
  CustomLogic_CustomLogicEvaluator_o **local_58;
  UnityEngine_Coroutine_o *local_50;
  System_ValueTuple_object__object__Nullable_Int32Enum___o local_48;
  
  local_80 = __this;
  if (Il2CppMethodInitialized_075473d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Release
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Pop
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Push
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor);
    Il2CppMethodInitialized_075473d7 = '\x01';
  }
  local_50 = (UnityEngine_Coroutine_o *)0x0;
  if ((userMethod == (CustomLogic_UserMethod_o *)0x0) ||
     (pCVar3 = (userMethod->fields).Ast, pCVar3 == (CustomLogic_CustomLogicMethodDefinitionAst_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_68 = (pCVar3->fields).Name;
  pCVar4 = (userMethod->fields).Owner;
  if (parameterValues == (System_Object_array *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    parameterValues = TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs;
  }
  bVar1 = (pCVar3->fields).Coroutine;
  (__this->fields)._currentLineNumber = (pCVar3->fields).Line;
  local_78 = pCVar4;
  if (bVar1 != false) {
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    local_70 = __this_01;
    if (parameterValues == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pCVar3->fields).ParameterNames;
    if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar2 = (pSVar5->fields)._size;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar9 = System_Math__Min_54baeb0((int32_t)parameterValues->max_length,iVar2,(MethodInfo *)0x0);
    if (0 < (int)uVar9) {
      if (local_70 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
        pSVar5 = (pCVar3->fields).ParameterNames;
        if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar5,0,
                     (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
          if ((int)parameterValues->max_length != 0) {
            ThrowNullReferenceException();
          }
label_05b8c033:
          ThrowIndexOutOfRangeException();
        }
label_05b8bfe7:
        ThrowNullReferenceException();
      }
      uVar12 = 0;
      do {
        pSVar5 = (pCVar3->fields).ParameterNames;
        if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) goto label_05b8bfe7;
        pSVar10 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar5,(int32_t)uVar12,
                             (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
        ;
        if ((uint)parameterValues->max_length <= uVar12) goto label_05b8c033;
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)local_70,(Il2CppObject *)pSVar10
                   ,parameterValues->m_Items[uVar12],
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
        uVar12 = uVar12 + 1;
      } while (uVar9 != uVar12);
    }
    pCVar4 = local_78;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar8 = local_80;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
    pSVar7 = (pCVar3->fields).Statements;
    if (Il2CppMethodInitialized_075473d2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CustomLogicEvaluator_EvaluateBlockCoroutine_d__87);
      Il2CppMethodInitialized_075473d2 = '\x01';
    }
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_CustomLogic_CustomLogicEvaluator_EvaluateBlockCoroutine_d__87);
    CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87___ctor(__this_03,0,(MethodInfo *)0x0);
    if (__this_03 != (CustomLogic_CustomLogicEvaluator__EvaluateBlockCoroutine_d__87_o *)0x0) {
      (__this_03->fields).__4__this = pCVar8;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).__4__this);
      (__this_03->fields).classInstance = pCVar4;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).classInstance);
      (__this_03->fields).localVariables = local_70;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).localVariables);
      (__this_03->fields).statements = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).statements);
      if (__this_00 != (CustomLogic_CustomLogicManager_o *)0x0) {
        pUVar11 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                            ((UnityEngine_MonoBehaviour_o *)__this_00,
                             (System_Collections_IEnumerator_o *)__this_03,(MethodInfo *)0x0);
        return (Il2CppObject *)pUVar11;
      }
    }
    ThrowNullReferenceException();
  }
  if ((__this->fields)._CaptureErrors_k__BackingField != false) {
    if (pCVar4 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (__this->fields)._executionStack;
    item1 = (Il2CppObject *)
            (*(pCVar4->klass->vtable)._6_unknown.methodPtr)(pCVar4,(pCVar4->klass->vtable)._6_unknown.method);
    local_48.fields.Item1 = (Il2CppObject *)0x0;
    local_48.fields.Item2 = (Il2CppObject *)0x0;
    local_48.fields.Item3.fields.hasValue = false;
    local_48.fields.Item3.fields._1_3_ = 0;
    local_48.fields.Item3.fields.value = 0;
    System_ValueTuple_object__object__Nullable_Int32Enum_____ctor
              (&local_48,item1,(Il2CppObject *)local_68,
               (System_Nullable_Int32Enum__o)(pCVar4->fields)._Namespace_k__BackingField.fields,
               (MethodInfo_4553E30 *)
               MethodInfo_System_ValueTuple_string_string_Nullable_CustomLogicSourceType_ctor);
    if (pSVar6 == (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                   *)0x0) {
      ThrowNullReferenceException();
    }
    item.fields.Item2 = local_48.fields.Item2;
    item.fields.Item1 = local_48.fields.Item1;
    item.fields.Item3.fields = local_48.fields.Item3.fields;
    System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Push
              ((System_Collections_Generic_Stack_T__o *)pSVar6,item,
               (MethodInfo_4101B80 *)
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Push
              );
  }
  local_60 = 0;
  local_58 = &local_80;
  if ((TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)
               TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object);
  }
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Pool_CollectionPool_object__KeyValuePair_object__object____Get
                        ((MethodInfo_4845750 *)
                         MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Get
                        );
  if (parameterValues == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar5 = (pCVar3->fields).ParameterNames;
  if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (pSVar5->fields)._size;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar9 = System_Math__Min_54baeb0((int32_t)parameterValues->max_length,iVar2,(MethodInfo *)0x0);
  if (0 < (int)uVar9) {
    if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar5 = (pCVar3->fields).ParameterNames;
      if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar5,0,
                   (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if ((int)parameterValues->max_length != 0) {
          ThrowNullReferenceException();
        }
label_05b8c050:
        ThrowIndexOutOfRangeException();
      }
label_05b8c011:
      ThrowNullReferenceException();
    }
    uVar12 = 0;
    do {
      pSVar5 = (pCVar3->fields).ParameterNames;
      if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) goto label_05b8c011;
      pSVar10 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar5,(int32_t)uVar12,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if ((uint)parameterValues->max_length <= uVar12) goto label_05b8c050;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_02,(Il2CppObject *)pSVar10,parameterValues->m_Items[uVar12],
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
  }
  CustomLogic_CustomLogicEvaluator__EvaluateBlock
            (local_80,local_78,(System_Collections_Generic_Dictionary_string__object__o *)__this_02,
             (pCVar3->fields).Statements,(Il2CppObject **)&local_50,in_R9);
  if ((TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)
               TypeInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object);
  }
  UnityEngine_Pool_CollectionPool_object__KeyValuePair_object__object____Release
            ((Il2CppObject *)__this_02,
             (MethodInfo_48459D0 *)
             MethodInfo_UnityEngine_Pool_CollectionPool_Dictionary_string_object_KeyValuePair_string_object_Release
            );
  pUVar11 = local_50;
  if ((local_80->fields)._CaptureErrors_k__BackingField != false) {
    pSVar6 = (local_80->fields)._executionStack;
    if (pSVar6 == (System_Collections_Generic_Stack_ValueTuple_string__string__Nullable_CustomLogicSourceType____o
                   *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Pop
              (&local_48,(System_Collections_Generic_Stack_T__o *)pSVar6,
               (MethodInfo_4101A00 *)
               MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Pop
              );
  }
  return (Il2CppObject *)pUVar11;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateExpression
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateExpression (CustomLogic_CustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, System_Collections_Generic_Dictionary_string__object__o* localVariables, CustomLogic_CustomLogicBaseExpressionAst_o* expression, const MethodInfo* method);
// 0x5b88830
// eh: try 0x5b88a2c..0x5b89823 -> pad 0x5b89915 (+110 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b8995a..0x5b89b7a -> pad 0x5b89b7a (+1 call sites) cleanup
// eh: try 0x5b89b7d..0x5b89b82 -> pad 0x5b89b8a catch (...) [compiler noexcept guard]
// asm: 221 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b89823: jmp 0x5b89943
// asm:   0x5b89828: jmp 0x5b89943
// asm:   0x5b8982d: jmp 0x5b89943
// asm:   0x5b89832: jmp 0x5b89943
// asm:   0x5b89837: jmp 0x5b89943
// asm:   0x5b8983c: jmp 0x5b89943
// asm:   0x5b89841: jmp 0x5b89943
// asm:   0x5b89846: jmp 0x5b89943
// asm:   0x5b8984b: jmp 0x5b89943
// asm:   0x5b89850: jmp 0x5b89943
// asm:   0x5b89855: jmp 0x5b89943
// asm:   0x5b8985a: jmp 0x5b89943
// asm:   0x5b8985f: jmp 0x5b89943
// asm:   0x5b89864: jmp 0x5b89943
// asm:   0x5b89869: jmp 0x5b89943
// asm:   0x5b8986e: jmp 0x5b89943
// asm:   0x5b89873: jmp 0x5b89943
// asm:   0x5b89878: jmp 0x5b89943
// asm:   0x5b8987d: jmp 0x5b89943
// asm:   0x5b89882: jmp 0x5b89943
// asm:   0x5b89887: jmp 0x5b89943
// asm:   0x5b8988c: jmp 0x5b89943
// asm:   0x5b89891: jmp 0x5b89943
// asm:   0x5b89896: jmp 0x5b89943
// asm:   0x5b8989b: jmp 0x5b89943
// asm:   0x5b898a0: jmp 0x5b89943
// asm:   0x5b898a5: jmp 0x5b89943
// asm:   0x5b898aa: jmp 0x5b89943
// asm:   0x5b898af: jmp 0x5b89943
// asm:   0x5b898b4: jmp 0x5b89943
// asm:   0x5b898b9: jmp 0x5b89943
// asm:   0x5b898be: jmp 0x5b89943
// asm:   0x5b898c3: jmp 0x5b89943
// asm:   0x5b898c5: jmp 0x5b89943
// asm:   0x5b898c7: jmp 0x5b89943
// asm:   0x5b898c9: jmp 0x5b89943
// asm:   0x5b898cb: jmp 0x5b89943
// asm:   0x5b898cd: jmp 0x5b89943
// asm:   0x5b898cf: jmp 0x5b89943
// asm:   0x5b898d1: jmp 0x5b89943
// asm:   0x5b898d3: jmp 0x5b89943
// asm:   0x5b898d5: jmp 0x5b89943
// asm:   0x5b898d7: jmp 0x5b89943
// asm:   0x5b898d9: jmp 0x5b89943
// asm:   0x5b898db: jmp 0x5b89943
// asm:   0x5b898dd: jmp 0x5b89943
// asm:   0x5b898df: jmp 0x5b89943
// asm:   0x5b898e1: jmp 0x5b89943
// asm:   0x5b898e3: jmp 0x5b89943
// asm:   0x5b898e5: jmp 0x5b89943
// asm:   0x5b898e7: jmp 0x5b89943
// asm:   0x5b898e9: jmp 0x5b89943
// asm:   0x5b898eb: jmp 0x5b89943
// asm:   0x5b898ed: jmp 0x5b89943
// asm:   0x5b898ef: jmp 0x5b89943
// asm:   0x5b898f1: jmp 0x5b89943
// asm:   0x5b898f3: jmp 0x5b89943
// asm:   0x5b898f5: jmp 0x5b89943
// asm:   0x5b898f7: jmp 0x5b89943
// asm:   0x5b898f9: jmp 0x5b89943
// asm:   0x5b898fb: jmp 0x5b89943
// asm:   0x5b898fd: jmp 0x5b89943
// asm:   0x5b898ff: jmp 0x5b89943
// asm:   0x5b89901: jmp 0x5b89943
// asm:   0x5b89903: jmp 0x5b89943
// asm:   0x5b89905: jmp 0x5b89943
// asm:   0x5b89907: jmp 0x5b89943
// asm:   0x5b89909: jmp 0x5b89943
// asm:   0x5b8990b: jmp 0x5b89943
// asm:   0x5b8990d: jmp 0x5b89943
// asm:   0x5b8990f: jmp 0x5b89943
// asm:   0x5b89911: jmp 0x5b89943
// asm:   0x5b89913: jmp 0x5b89943
// asm:   0x5b89915: jmp 0x5b89943
// asm:   0x5b89917: jmp 0x5b89943
// asm:   0x5b89919: jmp 0x5b89943
// asm:   0x5b8991b: jmp 0x5b89943
// asm:   0x5b8991d: jmp 0x5b89943
// asm:   0x5b8991f: jmp 0x5b89943
// asm:   0x5b89921: jmp 0x5b89943
// asm:   0x5b89923: jmp 0x5b89943
// asm:   0x5b89925: jmp 0x5b89943
// asm:   0x5b89927: jmp 0x5b89943
// asm:   0x5b89929: jmp 0x5b89943
// asm:   0x5b8992b: jmp 0x5b89943
// asm:   0x5b8992d: jmp 0x5b89943
// asm:   0x5b8992f: jmp 0x5b89943
// asm:   0x5b89931: jmp 0x5b89943
// asm:   0x5b89933: jmp 0x5b89943
// asm:   0x5b89935: jmp 0x5b89943
// asm:   0x5b89937: jmp 0x5b89943
// asm:   0x5b89939: jmp 0x5b89943
// asm:   0x5b8993b: jmp 0x5b89943
// asm:   0x5b8993d: jmp 0x5b89943
// asm:   0x5b8993f: jmp 0x5b89943
// asm:   0x5b89941: jmp 0x5b89943
// asm:   0x5b89943: mov rbx, rax
// asm:   0x5b89946: cmp edx, 1
// asm:   0x5b89949: jne 0x5b89b82
// asm:   0x5b8994f: mov rdi, rbx
// asm:   0x5b89952: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b89957: mov rbx, rax
// asm:   0x5b8995a: lea rdi, [rip + 0x16ee75f]  ; TypeInfo_System_Exception
// asm:   0x5b89961: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b89966: mov rcx, qword ptr [rbx]
// asm:   0x5b89969: mov rsi, qword ptr [rcx]
// asm:   0x5b8996c: mov rdi, rax
// asm:   0x5b8996f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b89974: test al, al
// asm:   0x5b89976: je 0x5b89b59
// asm:   0x5b8997c: mov r14, qword ptr [rbx]
// asm:   0x5b8997f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b89984: mov rdi, qword ptr [rsp + 0x18]
// asm:   0x5b89989: mov esi, dword ptr [rdi + 0xb8]
// asm:   0x5b8998f: call 0x5b86ba0  ; CustomLogic_CustomLogicEvaluator__GetLineNumberString()
// asm:   0x5b89994: mov qword ptr [rsp + 0x28], rax
// asm:   0x5b89999: test r14, r14
// asm:   0x5b8999c: je 0x5b89b54
// asm:   0x5b899a2: mov rax, qword ptr [r14]
// asm:   0x5b899a5: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b899ac: mov rdi, r14
// asm:   0x5b899af: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b899b5: mov rbx, rax
// asm:   0x5b899b8: lea rdi, [rip + 0x174f561]  ; "Custom logic runtime error at line "
// asm:   0x5b899bf: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b899c4: mov rbp, rax
// asm:   0x5b899c7: lea rdi, [rip + 0x17485b2]  ; ": "
// asm:   0x5b899ce: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b899d3: mov rdi, rbp
// asm:   0x5b899d6: mov rsi, qword ptr [rsp + 0x28]
// asm:   0x5b899db: mov rdx, rax
// asm:   0x5b899de: mov rcx, rbx
// asm:   0x5b899e1: xor r8d, r8d
// asm:   0x5b899e4: call 0x5402810  ; System_String__Concat()
// asm:   0x5b899e9: mov rcx, qword ptr [rsp + 0x18]
// asm:   0x5b899ee: cmp byte ptr [rcx + 0xa0], 0
// asm:   0x5b899f5: je 0x5b89b32
// asm:   0x5b899fb: lea rdi, [rip + 0x1744026]  ; ""
// asm:   0x5b89a02: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b89a07: mov qword ptr [rsp + 0x30], rax
// asm:   0x5b89a0c: cmp qword ptr [rsp + 0x20], 0
// asm:   0x5b89a12: je 0x5b89b54
// asm:   0x5b89a18: mov rax, qword ptr [rsp + 0x18]
// asm:   0x5b89a1d: mov rbx, qword ptr [rax + 0xb0]
// asm:   0x5b89a24: test rbx, rbx
// asm:   0x5b89a27: je 0x5b89b54
// asm:   0x5b89a2d: mov rax, qword ptr [rsp + 0x20]
// asm:   0x5b89a32: mov r13, qword ptr [rax + 0x24]
// asm:   0x5b89a36: lea rdi, [rip + 0x1713863]  ; MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_get_Cou
// asm:   0x5b89a3d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b89a42: cmp dword ptr [rbx + 0x18], 0
// asm:   0x5b89a46: jle 0x5b89a9a
// asm:   0x5b89a48: mov rax, qword ptr [rsp + 0x18]
// asm:   0x5b89a4d: mov rbx, qword ptr [rax + 0xb0]
// asm:   0x5b89a54: test rbx, rbx
// asm:   0x5b89a57: je 0x5b89b54
// asm:   0x5b89a5d: lea rdi, [rip + 0x1713824]  ; MethodInfo_System_Collections_Generic_Stack_ValueTuple_string_string_Nullable_CustomLogicSourceType_Peek
// asm:   0x5b89a64: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b89a69: lea rdi, [rsp + 0x38]
// asm:   0x5b89a6e: mov rsi, rbx
// asm:   0x5b89a71: mov rdx, rax
// asm:   0x5b89a74: call 0x4201970  ; System_Collections_Generic_Stack_ValueTuple_object__object__Nullable_Int32Enum_____Peek()
// asm:   0x5b89a79: mov rax, qword ptr [rsp + 0x40]
// asm:   0x5b89a7e: mov qword ptr [rsp + 0x30], rax
// asm:   0x5b89a83: mov rbx, qword ptr [rsp + 0x48]
// asm:   0x5b89a88: lea rdi, [rip + 0x1711171]  ; MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue
// asm:   0x5b89a8f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b89a94: test bl, bl
// asm:   0x5b89a96: cmovne r13, rbx
// asm:   0x5b89a9a: mov rbp, qword ptr [rsp + 0x18]
// asm:   0x5b89a9f: mov r12, qword ptr [rbp + 0xa8]
// asm:   0x5b89aa6: mov rax, qword ptr [r14]
// asm:   0x5b89aa9: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5b89ab0: mov rdi, r14
// asm:   0x5b89ab3: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5b89ab9: mov r14, rax
// asm:   0x5b89abc: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x5b89ac1: mov rax, qword ptr [rdi]
// asm:   0x5b89ac4: mov rsi, qword ptr [rax + 0x1a0]
// asm:   0x5b89acb: call qword ptr [rax + 0x198]  ; vtable slot 6
// asm:   0x5b89ad1: mov rbx, rax
// asm:   0x5b89ad4: mov r15d, dword ptr [rbp + 0xb8]
// asm:   0x5b89adb: lea rdi, [rip + 0x16ed2d6]  ; TypeInfo_CustomLogic_CustomLogicError
// asm:   0x5b89ae2: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b89ae7: mov rdi, rax
// asm:   0x5b89aea: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b89aef: mov rbp, rax
// asm:   0x5b89af2: mov qword ptr [rsp], r13
// asm:   0x5b89af6: mov rdi, rax
// asm:   0x5b89af9: mov rsi, r14
// asm:   0x5b89afc: mov rdx, rbx
// asm:   0x5b89aff: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x5b89b04: mov r8d, r15d
// asm:   0x5b89b07: mov r9, qword ptr [rsp + 0x28]
// asm:   0x5b89b0c: call 0x5b74470  ; CustomLogic_CustomLogicError___ctor()
// asm:   0x5b89b11: test r12, r12
// asm:   0x5b89b14: je 0x5b89b54
// asm:   0x5b89b16: lea rdi, [rip + 0x170a3d3]  ; MethodInfo_System_Collections_Generic_List_CustomLogicError_Add
// asm:   0x5b89b1d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b89b22: mov rdi, r12
// asm:   0x5b89b25: mov rsi, rbp
// asm:   0x5b89b28: mov rdx, rax
// asm:   0x5b89b2b: call 0x2fd7e40  ; il2cpp_runtime_helper_02fd7e40()
// asm:   0x5b89b30: jmp 0x5b89b3f
// asm:   0x5b89b32: mov rsi, rax
// asm:   0x5b89b35: mov edx, 1
// asm:   0x5b89b3a: call 0x5b83160  ; CustomLogic_CustomLogicEvaluator__LogCustomLogicError()
// asm:   0x5b89b59: mov edi, 8
// asm:   0x5b89b5e: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b89b63: mov rcx, qword ptr [rbx]
// asm:   0x5b89b66: mov qword ptr [rax], rcx
// asm:   0x5b89b69: lea rsi, [rip + 0x12a3990]
// asm:   0x5b89b70: mov rdi, rax
// asm:   0x5b89b73: xor edx, edx
// asm:   0x5b89b75: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b89b7a: mov rbx, rax
// asm:   0x5b89b7d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b89b82: mov rdi, rbx
// asm:   0x5b89b85: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b89b8a: mov rdi, rax
// asm:   0x5b89b8d: call 0x2ab61e0  ; __clang_call_terminate()

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateExpression
          (CustomLogic_CustomLogicEvaluator_o *__this,CustomLogic_CustomLogicClassInstance_o *classInstance,
          System_Collections_Generic_Dictionary_string__object__o *localVariables,
          CustomLogic_CustomLogicBaseExpressionAst_o *expression,MethodInfo *method)

{
  byte bVar1;
  int symbol;
  CustomLogic_CustomLogicBaseExpressionAst_c *pCVar2;
  void *pvVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  bool bVar6;
  int32_t iVar7;
  CustomLogic_CustomLogicBaseAst_o *expression_00;
  Il2CppObject *pIVar8;
  int32_t *piVar9;
  System_Object_array *pSVar10;
  CustomLogic_CLMethodBinding_c *method_00;
  int *piVar11;
  Il2CppObject *pIVar12;
  char *pcVar13;
  undefined1 *puVar14;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *pCVar15;
  CustomLogic_UserMethod_o *userMethod;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *pIVar16;
  Il2CppObject *pIVar17;
  System_String_o *pSVar18;
  System_Exception_o *pSVar19;
  MethodInfo *pMVar20;
  ulong uVar21;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *in_R9;
  long lVar22;
  System_Nullable_CustomLogicSourceType__Fields local_60 [3];
  System_Nullable_Int32Enum__Fields local_48;
  CustomLogic_CustomLogicBaseExpressionAst_c *local_40;
  CustomLogic_CustomLogicBaseExpressionAst_c *local_38;
  
  if (Il2CppMethodInitialized_075473d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Unity_VisualScripting_ArrayPool_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBaseExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBinopExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFieldExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNotExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVariableExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718ada8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&"self");
    Il2CppMethodInitialized_075473d8 = '\x01';
  }
  local_48.hasValue = false;
  local_48._1_3_ = 0;
  local_48.value = 0;
  local_40 = (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0;
  if (expression == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._currentLineNumber = (expression->fields).Line;
  switch((expression->fields).Type) {
  case 4:
    pIVar17 = il2cpp_codegen_is_inst_class
                        ((Il2CppObject *)expression,
                         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodCallExpressionAst);
    if (pIVar17 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,pIVar17[2].monitor,method);
    pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)
              il2cpp_codegen_is_inst_class
                        (pIVar12,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance);
    if (pIVar17[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    iVar7 = *(int32_t *)&((pIVar17[2].klass)->_1).namespaze;
    if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    pSVar10 = Unity_VisualScripting_ArrayPool_object___New
                        (iVar7,(MethodInfo_4CBAE90 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    pIVar16 = pIVar17[2].klass;
    if (pIVar16 != (Il2CppClass *)0x0) {
      if (pSVar10 == (System_Object_array *)0x0) {
        if (0 < *(int *)&(pIVar16->_1).namespaze) {
          expression_00 =
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pIVar16,0,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
          if (expression_00 != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
            if (((expression_00->klass->_2).typeHierarchyDepth < bVar1) ||
               ((expression_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
label_05b8981b:
              il2cpp_codegen_raise_invalid_cast_exception(expression_00);
            }
          }
          CustomLogic_CustomLogicEvaluator__EvaluateExpression
                    (__this,classInstance,localVariables,
                     (CustomLogic_CustomLogicBaseExpressionAst_o *)expression_00,method);
          ThrowNullReferenceException();
        }
label_05b8924c:
        pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                            (__this,pCVar15,pIVar17[1].monitor,pSVar10,(__this->fields)._currentLineNumber,
                             in_R9);
        if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
        }
        Unity_VisualScripting_ArrayPool_object___Free
                  (pSVar10,(MethodInfo_4CBB5B0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
        return pIVar17;
      }
      lVar22 = 0x20;
      uVar21 = 0;
      do {
        if ((long)*(int *)&(pIVar16->_1).namespaze <= (long)uVar21) goto label_05b8924c;
        expression_00 =
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pIVar16,(int32_t)uVar21,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
        if (expression_00 != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
          if (((expression_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((expression_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) goto label_05b8981b;
        }
        pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)expression_00,method);
        if ((pIVar12 != (Il2CppObject *)0x0) &&
           (pIVar8 = il2cpp_vm_Object_IsInst(pIVar12,(((pSVar10->obj).klass)->_1).element_class),
           pIVar8 == (Il2CppObject *)0x0)) {
          pIVar17 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar17,(MethodInfo *)0x0);
        }
        if ((uint)pSVar10->max_length <= uVar21) {
          ThrowIndexOutOfRangeException();
        }
        pSVar10->m_Items[uVar21] = pIVar12;
        Il2CppCodeGenWriteBarrier((void **)((long)pSVar10->m_Items + lVar22 + -0x20));
        uVar21 = uVar21 + 1;
        pIVar16 = pIVar17[2].klass;
        lVar22 = lVar22 + 8;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
    ThrowNullReferenceException();
  case 5:
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst->_2).typeHierarchyDepth;
    method_00 = (CustomLogic_CLMethodBinding_c *)(ulong)bVar1;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(long)((long)&method_00[-1].vtable._4_Call.method + 7)] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    if ((*(uint64_t *)((char *)expression + 0x20)) == (void *)0x0) {
      ThrowNullReferenceException();
    }
    iVar7 = *(int32_t *)((long)(*(uint64_t *)((char *)expression + 0x20)) + 0x18);
    if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    pSVar10 = Unity_VisualScripting_ArrayPool_object___New
                        (iVar7,(MethodInfo_4CBAE90 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    __this_01 = (*(uint64_t *)((char *)expression + 0x20));
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      if (pSVar10 == (System_Object_array *)0x0) {
        if (0 < (__this_01->fields)._size) {
          method_00 = (CustomLogic_CLMethodBinding_c *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_01,0,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
          if (method_00 != (CustomLogic_CLMethodBinding_c *)0x0) {
            pvVar3 = (method_00->_1).image;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
            if ((*(byte *)((long)pvVar3 + 0x130) < bVar1) ||
               (*(CustomLogic_CustomLogicBaseExpressionAst_c **)
                 (*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) !=
                TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) {
label_05b897e5:
              il2cpp_codegen_raise_invalid_cast_exception(method_00);
            }
          }
          CustomLogic_CustomLogicEvaluator__EvaluateExpression
                    (__this,classInstance,localVariables,
                     (CustomLogic_CustomLogicBaseExpressionAst_o *)method_00,method);
          ThrowNullReferenceException();
        }
label_05b89184:
        pCVar2 = (*(uint64_t *)((char *)expression + 0x18));
        if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
        }
        bVar6 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType
                          ((System_String_o *)pCVar2,(MethodInfo *)0x0);
        if (!bVar6) {
          pCVar5 = (__this->fields)._start;
          if (pCVar5 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar5->fields).Classes;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar4,(Il2CppObject *)(*(uint64_t *)((char *)expression + 0x18)),
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                            );
          if (!bVar6) {
            if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                              ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                               (Il2CppObject *)(*(uint64_t *)((char *)expression + 0x18)),
                               (MethodInfo_4AAD6F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
            if ((bVar6) &&
               (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)localVariables
                                     ,(Il2CppObject *)(*(uint64_t *)((char *)expression + 0x18)),
                                     (MethodInfo_4AAD450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item),
               pIVar17 != (Il2CppObject *)0x0)) {
              pIVar16 = pIVar17->klass;
              bVar1 = (TypeInfo_CustomLogic_CLMethodBinding->_2).typeHierarchyDepth;
              method_00 = TypeInfo_CustomLogic_CLMethodBinding;
              if ((bVar1 <= (pIVar16->_2).typeHierarchyDepth) &&
                 ((pIVar16->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding)) {
                pIVar17 = (Il2CppObject *)
                          (*pIVar16->vtable[4].methodPtr)
                                    (pIVar17,classInstance,pSVar10,pIVar16->vtable[4].method);
                if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
                }
                Unity_VisualScripting_ArrayPool_object___Free
                          (pSVar10,(MethodInfo_4CBB5B0 *)
                                   MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
                return pIVar17;
              }
            }
            userMethod = (CustomLogic_UserMethod_o *)
                         System_Collections_Generic_Dictionary_object__object___get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                                    (Il2CppObject *)(*(uint64_t *)((char *)expression + 0x18)),
                                    (MethodInfo_4AAD450 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
            if (userMethod != (CustomLogic_UserMethod_o *)0x0) {
              bVar1 = (TypeInfo_CustomLogic_UserMethod->_2).typeHierarchyDepth;
              if (((userMethod->klass->_2).typeHierarchyDepth < bVar1) ||
                 (method_00 = (CustomLogic_CLMethodBinding_c *)(userMethod->klass->_2).typeHierarchy,
                 *(CustomLogic_UserMethod_c **)((long)method_00 + (ulong)bVar1 * 8 + -8) !=
                 TypeInfo_CustomLogic_UserMethod)) {
                il2cpp_codegen_raise_invalid_cast_exception(userMethod);
              }
            }
            pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                                (__this,userMethod,pSVar10,(MethodInfo *)method_00);
            if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
            }
            Unity_VisualScripting_ArrayPool_object___Free
                      (pSVar10,(MethodInfo_4CBB5B0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
            return pIVar17;
          }
        }
        if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar15 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_5a84880
                            (__this,(System_String_o *)(*(uint64_t *)((char *)expression + 0x18)),pSVar10,true,
                             (System_Nullable_CustomLogicSourceType__o)
                             (classInstance->fields)._Namespace_k__BackingField.fields,in_R9);
        if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
        }
        Unity_VisualScripting_ArrayPool_object___Free
                  (pSVar10,(MethodInfo_4CBB5B0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
        return (Il2CppObject *)pCVar15;
      }
      lVar22 = 0x20;
      uVar21 = 0;
      do {
        if ((long)(__this_01->fields)._size <= (long)uVar21) goto label_05b89184;
        method_00 = (CustomLogic_CLMethodBinding_c *)
                    System_Collections_Generic_List_object___get_Item
                              (__this_01,(int32_t)uVar21,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
        if (method_00 != (CustomLogic_CLMethodBinding_c *)0x0) {
          pvVar3 = (method_00->_1).image;
          bVar1 = (TypeInfo_CustomLogic_CustomLogicBaseExpressionAst->_2).typeHierarchyDepth;
          if ((*(byte *)((long)pvVar3 + 0x130) < bVar1) ||
             (*(CustomLogic_CustomLogicBaseExpressionAst_c **)
               (*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) !=
              TypeInfo_CustomLogic_CustomLogicBaseExpressionAst)) goto label_05b897e5;
        }
        pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)method_00,method);
        if ((pIVar17 != (Il2CppObject *)0x0) &&
           (pIVar12 = il2cpp_vm_Object_IsInst(pIVar17,(((pSVar10->obj).klass)->_1).element_class),
           pIVar12 == (Il2CppObject *)0x0)) {
          pIVar17 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar17,(MethodInfo *)0x0);
        }
        if ((uint)pSVar10->max_length <= uVar21) {
          ThrowIndexOutOfRangeException();
        }
        pSVar10->m_Items[uVar21] = pIVar17;
        Il2CppCodeGenWriteBarrier((void **)((long)pSVar10->m_Items + lVar22 + -0x20));
        uVar21 = uVar21 + 1;
        __this_01 = (*(uint64_t *)((char *)expression + 0x20));
        lVar22 = lVar22 + 8;
      } while (__this_01 != (System_Collections_Generic_List_object__o *)0x0);
    }
    ThrowNullReferenceException();
  case 6:
    bVar1 = (TypeInfo_CustomLogic_CustomLogicFieldExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFieldExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,(*(uint64_t *)((char *)expression + 0x20)),method);
    if (pCVar15 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((pCVar15->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar15->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar15);
    }
    pCVar2 = (*(uint64_t *)((char *)expression + 0x18));
    local_38 = (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0;
    bVar6 = CustomLogic_CustomLogicClassInstance__TryGetVariable
                      (pCVar15,(System_String_o *)pCVar2,(Il2CppObject **)&local_38,(MethodInfo *)(ulong)bVar1
                      );
    if (!bVar6) {
      pSVar18 = (System_String_o *)
                (*(pCVar15->klass->vtable)._6_unknown.methodPtr)
                          (pCVar15,(pCVar15->klass->vtable)._6_unknown.method);
      str0 = il2cpp_codegen_get_runtime_metadata(&"Variable ");
      str2 = il2cpp_codegen_get_runtime_metadata(&" not found in class ");
      pSVar18 = System_String__Concat_5302810(str0,(System_String_o *)pCVar2,str2,pSVar18,(MethodInfo *)0x0);
      pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar19 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar16);
      System_Exception___ctor_54fa440(pSVar19,pSVar18,(MethodInfo *)0x0);
      pMVar20 = il2cpp_codegen_get_runtime_metadata
                          (&MethodInfo_CustomLogic_CustomLogicClassInstance_GetVariable);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar19,pMVar20);
    }
    if (local_38 == (CustomLogic_CustomLogicBaseExpressionAst_c *)0x0) {
      return (Il2CppObject *)0x0;
    }
    pIVar16 = (local_38->_1).image;
    bVar1 = (TypeInfo_CustomLogic_CLPropertyBinding->_2).typeHierarchyDepth;
    if ((pIVar16->_2).typeHierarchyDepth < bVar1) {
      return (Il2CppObject *)local_38;
    }
    if ((pIVar16->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding
       ) {
      return (Il2CppObject *)local_38;
    }
    pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)
              (*pIVar16->vtable[5].methodPtr)(local_38,pCVar15,pIVar16->vtable[5].method);
    break;
  case 7:
    bVar1 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    return (Il2CppObject *)(*(uint64_t *)((char *)expression + 0x18));
  case 8:
    pIVar17 = il2cpp_codegen_is_inst_class
                        ((Il2CppObject *)expression,
                         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    if (pIVar17 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar17 = il2cpp_codegen_is_inst_class
                        ((Il2CppObject *)expression,
                         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    if (pIVar17[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    piVar9 = (int32_t *)
             il2cpp_runtime_helper_02abd3a0(((pIVar17[2].klass)->_1).namespaze,TypeInfo_CustomLogic_CustomLogicSymbol);
    iVar7 = *piVar9;
    pIVar17 = il2cpp_codegen_is_inst_class
                        ((Il2CppObject *)expression,
                         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    if (pIVar17 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar17 = il2cpp_codegen_is_inst_class
                        ((Il2CppObject *)expression,
                         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    pMVar20 = pIVar17[1].monitor;
    pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)pMVar20,method);
    pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)
              CustomLogic_CustomLogicEvaluator__EvaluateUnaryExpression(__this,iVar7,pIVar17,pMVar20);
    break;
  case 9:
    pIVar17 = il2cpp_codegen_is_inst_class
                        ((Il2CppObject *)expression,
                         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBinopExpressionAst);
    if (pIVar17 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (pIVar17[2].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    piVar11 = (int *)il2cpp_runtime_helper_02abd3a0(*(undefined8 *)((long)pIVar17[2].monitor + 0x18),
                                  TypeInfo_CustomLogic_CustomLogicSymbol);
    symbol = *piVar11;
    if (symbol == 0x19) {
      pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,pIVar17[1].monitor,method);
      pcVar13 = (char *)il2cpp_runtime_helper_02abd3a0(pIVar12,g_data_075566f0);
      if (*pcVar13 == '\0') {
        local_60[0] = (System_Nullable_CustomLogicSourceType__Fields)((ulong)local_60[0] & 0xffffffffffffff00)
        ;
        pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_vm_Object_Box(g_data_075566f0,local_60);
      }
      else {
        pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)pIVar17[2].klass,method);
        puVar14 = (undefined1 *)il2cpp_runtime_helper_02abd3a0(pIVar17,g_data_075566f0);
        local_60[0].hasValue = (bool)*puVar14;
        pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_vm_Object_Box(g_data_075566f0,local_60);
      }
    }
    else if (symbol == 0x1a) {
      pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,pIVar17[1].monitor,method);
      pcVar13 = (char *)il2cpp_runtime_helper_02abd3a0(pIVar12,g_data_075566f0);
      if (*pcVar13 == '\0') {
        pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                            (__this,classInstance,localVariables,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)pIVar17[2].klass,method);
        puVar14 = (undefined1 *)il2cpp_runtime_helper_02abd3a0(pIVar17,g_data_075566f0);
        local_60[0].hasValue = (bool)*puVar14;
        pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_vm_Object_Box(g_data_075566f0,local_60);
      }
      else {
        local_60[0].hasValue = true;
        pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_vm_Object_Box(g_data_075566f0,local_60);
      }
    }
    else {
      pIVar12 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,pIVar17[1].monitor,method);
      pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                          (__this,classInstance,localVariables,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)pIVar17[2].klass,method);
      pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)
                CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression
                          (__this,symbol,pIVar12,pIVar17,method);
    }
    break;
  case 10:
    bVar1 = (TypeInfo_CustomLogic_CustomLogicNotExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNotExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    pIVar17 = CustomLogic_CustomLogicEvaluator__EvaluateExpression
                        (__this,classInstance,localVariables,
                         (CustomLogic_CustomLogicBaseExpressionAst_o *)(*(uint64_t *)((char *)expression + 0x18)),method);
    if (pIVar17 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar17->klass->_1).element_class != (g_data_075566f0->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar17);
    }
    puVar14 = il2cpp_vm_Object_Unbox(pIVar17);
    local_60[0] = (System_Nullable_CustomLogicSourceType__Fields)(CONCAT71(local_60[0]._1_7_,*puVar14) ^ 1);
    pCVar15 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_vm_Object_Box(g_data_075566f0,local_60);
    break;
  case 0xb:
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVariableExpressionAst->_2).typeHierarchyDepth;
    if (((expression->klass->_2).typeHierarchyDepth < bVar1) ||
       ((expression->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVariableExpressionAst)) {
      il2cpp_codegen_raise_invalid_cast_exception(expression);
    }
    pCVar2 = (*(uint64_t *)((char *)expression + 0x18));
    bVar6 = System_String__op_Equality((System_String_o *)pCVar2,"self",(MethodInfo *)0x0);
    if (bVar6) {
      return (Il2CppObject *)classInstance;
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)pCVar2,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                      );
    if (!bVar6) {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._namespacedStaticClasses;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar4,(Il2CppObject *)pCVar2,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718ada8
                        );
      if (!bVar6) {
        if (localVariables == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)localVariables,
                             (Il2CppObject *)pCVar2,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
        return pIVar17;
      }
    }
    if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_48 = *(System_Nullable_Int32Enum__Fields *)
                &(classInstance->fields)._Namespace_k__BackingField.fields;
    if (local_48.hasValue != false) {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._namespacedStaticClasses;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar4,(Il2CppObject *)pCVar2,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718ada8
                        );
      if (bVar6) {
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._namespacedStaticClasses;
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar4,(Il2CppObject *)pCVar2,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adb0
                              );
        local_48 = *(System_Nullable_Int32Enum__Fields *)
                    &(classInstance->fields)._Namespace_k__BackingField.fields;
        iVar7 = System_Nullable_Int32Enum___get_Value
                          ((System_Nullable_Int32Enum__o *)&local_48,
                           (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
        if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                          (__this_00,iVar7,(Il2CppObject **)&local_40,
                           (MethodInfo_4A56D80 *)
                           MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_TryGetValue
                          );
        if (bVar6) {
          return (Il2CppObject *)local_40;
        }
      }
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)pCVar2,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_ContainsKey
                      );
    if (!bVar6) {
      local_60[0] = (classInstance->fields)._Namespace_k__BackingField.fields;
      pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Nullable_CustomLogicSourceType);
      pIVar17 = il2cpp_vm_Object_Box(pIVar16,local_60);
      pSVar18 = il2cpp_codegen_get_runtime_metadata(&"Static class {0} not found for namespace {1}");
      pSVar18 = System_String__Format_5302c50(pSVar18,(Il2CppObject *)pCVar2,pIVar17,(MethodInfo *)0x0);
      pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      pSVar19 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar16);
      System_Exception___ctor_54fa440(pSVar19,pSVar18,(MethodInfo *)0x0);
      pMVar20 = il2cpp_codegen_get_runtime_metadata
                          (&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateExpression);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar19,pMVar20);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._staticClasses;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    pCVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar4,(Il2CppObject *)pCVar2,
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_get_Item
                        );
    break;
  default:
    return (Il2CppObject *)0x0;
  }
  return (Il2CppObject *)pCVar15;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateUnaryExpression
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateUnaryExpression (CustomLogic_CustomLogicEvaluator_o* __this, int32_t symbol, Il2CppObject* next, const MethodInfo* method);
// 0x5b8c3b0

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateUnaryExpression
          (CustomLogic_CustomLogicEvaluator_o *__this,int32_t symbol,Il2CppObject *next,MethodInfo *method)

{
  int *piVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  undefined8 local_10;
  
  if (symbol != 0x21) {
    if ((symbol == 0x22) && (next != (Il2CppObject *)0x0)) {
      pIVar5 = next->klass;
      if (pIVar5 == g_data_07556710) {
        piVar1 = il2cpp_vm_Object_Unbox(next);
        local_10 = CONCAT44(local_10._4_4_,-*piVar1);
        pIVar5 = g_data_07556710;
label_05b8c442:
        pIVar4 = il2cpp_vm_Object_Box(pIVar5,&local_10);
        return pIVar4;
      }
      if (pIVar5 == g_data_07556740) {
        puVar2 = il2cpp_vm_Object_Unbox(next);
        local_10 = CONCAT44(local_10._4_4_,*puVar2) ^ 0x80000000;
        pIVar5 = g_data_07556740;
        goto label_05b8c442;
      }
      if (pIVar5 == g_data_07556748) {
        puVar3 = (ulong *)il2cpp_runtime_helper_02abd3a0(next);
        local_10 = *puVar3 ^ 0x8000000000000000;
        pIVar5 = g_data_07556748;
        goto label_05b8c442;
      }
    }
    next = (Il2CppObject *)0x0;
  }
  return next;
}


// CustomLogic.CustomLogicEvaluator$$EvaluateBinopExpression
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression (CustomLogic_CustomLogicEvaluator_o* __this, int32_t symbol, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x5b8c460

Il2CppObject *
CustomLogic_CustomLogicEvaluator__EvaluateBinopExpression
          (CustomLogic_CustomLogicEvaluator_o *__this,int32_t symbol,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined1 *data;
  float fVar3;
  float fVar4;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 local_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (Il2CppMethodInitialized_075473d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_075473d9 = '\x01';
  }
  if (symbol - 0x1bU < 0xb) {
    method_00 = (MethodInfo *)
                ((long)&switchD_05b8c4a8::switchdataD_010a59ec +
                (long)(int)(&switchD_05b8c4a8::switchdataD_010a59ec)[symbol - 0x1bU]);
    switch(symbol) {
    case 0x1b:
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      fVar3 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      fVar4 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
      uStack_23 = fVar3 < fVar4;
      data = &uStack_23;
      break;
    case 0x1c:
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      fVar3 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      fVar4 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
      local_24 = fVar4 < fVar3;
      data = &local_24;
      break;
    case 0x1d:
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      fVar3 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      fVar4 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
      uStack_25 = fVar3 <= fVar4;
      data = &uStack_25;
      break;
    case 0x1e:
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      fVar3 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      fVar4 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
      uStack_26 = fVar4 <= fVar3;
      data = &uStack_26;
      break;
    case 0x1f:
      uStack_21 = CustomLogic_CustomLogicEvaluator__CheckEquals(__this,left,right,method_00);
      data = &uStack_21;
      break;
    case 0x20:
      bVar1 = CustomLogic_CustomLogicEvaluator__CheckEquals(__this,left,right,method_00);
      uStack_22 = !bVar1;
      data = &uStack_22;
      break;
    case 0x21:
      pIVar2 = CustomLogic_CustomLogicEvaluator__AddValues(__this,left,right,method_00);
      return pIVar2;
    case 0x22:
      pIVar2 = CustomLogic_CustomLogicEvaluator__SubtractValues(__this,left,right,method_00);
      return pIVar2;
    case 0x23:
      pIVar2 = CustomLogic_CustomLogicEvaluator__MultiplyValues(__this,left,right,method_00);
      return pIVar2;
    case 0x24:
      pIVar2 = CustomLogic_CustomLogicEvaluator__DivideValues(__this,left,right,method_00);
      return pIVar2;
    case 0x25:
      pIVar2 = CustomLogic_CustomLogicEvaluator__ModuloValues(__this,left,right,method_00);
      return pIVar2;
    }
    pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,data);
  }
  else {
    pIVar2 = (Il2CppObject *)0x0;
  }
  return pIVar2;
}


// CustomLogic.CustomLogicEvaluator$$ClassMathOperation
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ClassMathOperation (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, System_String_o* method, const MethodInfo* method);
// 0x5b8cc80

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ClassMathOperation
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          System_String_o *method,MethodInfo *methodInfo)

{
  byte bVar1;
  bool bVar2;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *in_R9;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  
  pMVar5 = (MethodInfo *)right;
  if (Il2CppMethodInitialized_075473da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Unity_VisualScripting_ArrayPool_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    Il2CppMethodInitialized_075473da = '\x01';
    pMVar5 = extraout_RDX;
  }
  if (left == (Il2CppObject *)0x0) {
label_05b8cd09:
    if (right == (Il2CppObject *)0x0) goto label_05b8ce36;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((right->klass->_2).typeHierarchyDepth < bVar1) ||
       (__this_01 = (CustomLogic_CustomLogicClassInstance_o *)right,
       (right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
      il2cpp_codegen_raise_invalid_cast_exception(right);
    }
  }
  else {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((left->klass->_2).typeHierarchyDepth < bVar1) ||
       (__this_01 = (CustomLogic_CustomLogicClassInstance_o *)left,
       (left->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_05b8cd09;
  }
  bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this_01,method,pMVar5);
  if (!bVar2) {
    NullCheck(__this_01);
    pSVar4 = (System_String_o *)
             (*(__this_01->klass->vtable)._6_unknown.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._6_unknown.method);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" method found in class ");
    pSVar4 = System_String__Concat_5302810(str0,method,str2,pSVar4,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this_00,pSVar4,(MethodInfo *)0x0);
    pMVar5 = il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicEvaluator_ClassMathOperation);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,pMVar5);
  }
  if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
  }
  parameterValues =
       Unity_VisualScripting_ArrayPool_object___New
                 (2,(MethodInfo_4CBAE90 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
  if (parameterValues == (System_Object_array *)0x0) {
label_05b8ce36:
    ThrowNullReferenceException();
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst(left,(((parameterValues->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05b8ce48;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = left;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (right != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(right,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05b8ce48:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((parameterValues->max_length & 0xfffffffe) != 0) {
      parameterValues->m_Items[1] = right;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (__this,__this_01,method,parameterValues,(__this->fields)._currentLineNumber,in_R9);
      Unity_VisualScripting_ArrayPool_object___Free
                (parameterValues,(MethodInfo_4CBB5B0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free)
      ;
      return pIVar3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicEvaluator$$AddValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__AddValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x5b8b050
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8b11d: xor ecx, ecx
// asm:   0x5b8b11f: or cl, al
// asm:   0x5b8b121: cmp cl, 1
// asm:   0x5b8b1fc: jmp 0x5b8b28a
// asm:   0x5b8b28a: mov rsi, rbx
// asm:   0x5b8b28d: jmp 0x5b8b297
// asm:   0x5b8b294: mov rdi, r14

Il2CppObject *
CustomLogic_CustomLogicEvaluator__AddValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  float *data;
  Il2CppClass *klass;
  MethodInfo *in_R8;
  bool bVar7;
  float fVar8;
  float local_30;
  float local_2c;
  
  if (Il2CppMethodInitialized_075473db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_075473db = '\x01';
  }
  if (left == (Il2CppObject *)0x0) {
    bVar7 = false;
  }
  else {
    if (((right != (Il2CppObject *)0x0) && (left->klass == g_data_07556710)) && (right->klass == g_data_07556710)) {
      piVar4 = il2cpp_vm_Object_Unbox(left);
      if ((right->klass->_1).element_class != (g_data_07556710->_1).element_class) goto label_05b8b2aa;
      iVar2 = *piVar4;
      piVar4 = il2cpp_vm_Object_Unbox(right);
      local_2c = (float)(iVar2 + *piVar4);
      data = &local_2c;
      klass = g_data_07556710;
      goto label_05b8b239;
    }
    bVar7 = left->klass == g_data_07556758;
  }
  bVar3 = bVar7;
  if (right != (Il2CppObject *)0x0) {
    bVar3 = (bool)(right->klass == g_data_07556758 | bVar7);
  }
  if (bVar3) {
    if (bVar7) {
      if (right == (Il2CppObject *)0x0) {
        if (left == (Il2CppObject *)0x0) {
          left = (Il2CppObject *)0x0;
        }
        else if (left->klass != g_data_07556758) goto label_05b8b276;
        right = (Il2CppObject *)0x0;
      }
      else {
        if ((left != (Il2CppObject *)0x0) && (left->klass != g_data_07556758)) {
label_05b8b276:
          il2cpp_codegen_raise_invalid_cast_exception(left);
        }
        right = (Il2CppObject *)(*right->klass->vtable[3].methodPtr)(right,right->klass->vtable[3].method);
      }
    }
    else {
      if (left == (Il2CppObject *)0x0) {
        left = (Il2CppObject *)0x0;
      }
      else {
        left = (Il2CppObject *)(*left->klass->vtable[3].methodPtr)(left,left->klass->vtable[3].method);
      }
      if ((right != (Il2CppObject *)0x0) && (right->klass != g_data_07556758)) {
label_05b8b2aa:
        il2cpp_codegen_raise_invalid_cast_exception(right);
      }
    }
    pSVar6 = System_String__Concat_52f0320((System_String_o *)left,(System_String_o *)right,(MethodInfo *)0x0)
    ;
    return (Il2CppObject *)pSVar6;
  }
  if (left != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (left->klass->_2).typeHierarchyDepth) &&
       ((left->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_05b8b24b;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (right->klass->_2).typeHierarchyDepth) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
label_05b8b24b:
      pIVar5 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                         (__this,left,right,(__this->fields).add,in_R8);
      return pIVar5;
    }
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  fVar8 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_30 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_30 = local_30 + fVar8;
  data = &local_30;
  klass = g_data_07556740;
label_05b8b239:
  pIVar5 = il2cpp_vm_Object_Box(klass,data);
  return pIVar5;
}


// CustomLogic.CustomLogicEvaluator$$SubtractValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__SubtractValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x5b8b2c0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8b34e: test r14, r14
// asm:   0x5b8b351: jne 0x5b8b364
// asm:   0x5b8b353: jmp 0x5b8b384
// asm:   0x5b8b355: lea rax, [rip + 0x16eb9b4]  ; TypeInfo_CustomLogic_CustomLogicClassInstance
// asm:   0x5b8b35c: mov rax, qword ptr [rax]
// asm:   0x5b8b35f: test r14, r14

Il2CppObject *
CustomLogic_CustomLogicEvaluator__SubtractValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  float *data;
  Il2CppClass *pIVar5;
  MethodInfo *in_R8;
  float fVar6;
  float local_28;
  float local_24;
  
  if (Il2CppMethodInitialized_075473dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_075473dc = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar5 = left->klass;
    if (((right != (Il2CppObject *)0x0) && (pIVar5 == g_data_07556710)) && (right->klass == g_data_07556710)) {
      piVar4 = il2cpp_vm_Object_Unbox(left);
      if ((right->klass->_1).element_class != (g_data_07556710->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(right);
      }
      iVar2 = *piVar4;
      piVar4 = il2cpp_vm_Object_Unbox(right);
      local_24 = (float)(iVar2 - *piVar4);
      data = &local_24;
      pIVar5 = g_data_07556710;
      goto label_05b8b3d0;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
       ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_05b8b3e1;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (right->klass->_2).typeHierarchyDepth) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
label_05b8b3e1:
      pIVar3 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                         (__this,left,right,(__this->fields).sub,in_R8);
      return pIVar3;
    }
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  fVar6 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_28 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_28 = fVar6 - local_28;
  data = &local_28;
  pIVar5 = g_data_07556740;
label_05b8b3d0:
  pIVar3 = il2cpp_vm_Object_Box(pIVar5,data);
  return pIVar3;
}


// CustomLogic.CustomLogicEvaluator$$MultiplyValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__MultiplyValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x5b8b440
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8b4ce: test r14, r14
// asm:   0x5b8b4d1: jne 0x5b8b4e4
// asm:   0x5b8b4d3: jmp 0x5b8b504
// asm:   0x5b8b4d5: lea rax, [rip + 0x16eb834]  ; TypeInfo_CustomLogic_CustomLogicClassInstance
// asm:   0x5b8b4dc: mov rax, qword ptr [rax]
// asm:   0x5b8b4df: test r14, r14

Il2CppObject *
CustomLogic_CustomLogicEvaluator__MultiplyValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  float *data;
  Il2CppClass *pIVar5;
  MethodInfo *in_R8;
  float fVar6;
  float local_28;
  float local_24;
  
  if (Il2CppMethodInitialized_075473dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_075473dd = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar5 = left->klass;
    if (((right != (Il2CppObject *)0x0) && (pIVar5 == g_data_07556710)) && (right->klass == g_data_07556710)) {
      piVar4 = il2cpp_vm_Object_Unbox(left);
      if ((right->klass->_1).element_class != (g_data_07556710->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(right);
      }
      iVar2 = *piVar4;
      piVar4 = il2cpp_vm_Object_Unbox(right);
      local_24 = (float)(iVar2 * *piVar4);
      data = &local_24;
      pIVar5 = g_data_07556710;
      goto label_05b8b54c;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
       ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_05b8b55d;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (right->klass->_2).typeHierarchyDepth) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
label_05b8b55d:
      pIVar3 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                         (__this,left,right,(__this->fields).mul,in_R8);
      return pIVar3;
    }
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  fVar6 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  local_28 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  local_28 = local_28 * fVar6;
  data = &local_28;
  pIVar5 = g_data_07556740;
label_05b8b54c:
  pIVar3 = il2cpp_vm_Object_Box(pIVar5,data);
  return pIVar3;
}


// CustomLogic.CustomLogicEvaluator$$DivideValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__DivideValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x5b8b5c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8b653: lea rax, [rip + 0x16eb6b6]  ; TypeInfo_CustomLogic_CustomLogicClassInstance
// asm:   0x5b8b65a: mov rax, qword ptr [rax]
// asm:   0x5b8b754: jmp 0x5b8b76d

Il2CppObject *
CustomLogic_CustomLogicEvaluator__DivideValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  System_DivideByZeroException_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *in_R8;
  float fVar7;
  float local_30;
  float local_2c;
  
  if (Il2CppMethodInitialized_075473de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_075473de = '\x01';
  }
  if (left == (Il2CppObject *)0x0) {
label_05b8b65d:
    if (right != (Il2CppObject *)0x0) {
      pIVar6 = right->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar6->_2).typeHierarchyDepth) &&
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_05b8b748;
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    fVar7 = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
    if ((fVar7 != 0.0) || (NAN(fVar7))) {
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      local_30 = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
      local_30 = local_30 / fVar7;
      pfVar4 = &local_30;
      pIVar6 = g_data_07556740;
label_05b8b6f0:
      pIVar5 = il2cpp_vm_Object_Box(pIVar6,pfVar4);
      return pIVar5;
    }
  }
  else {
    if (((left->klass == g_data_07556710) &&
        (piVar3 = il2cpp_vm_Object_Unbox(left), right != (Il2CppObject *)0x0)) &&
       (right->klass == g_data_07556710)) {
      iVar2 = *piVar3;
      piVar3 = il2cpp_vm_Object_Unbox(right);
      if (*piVar3 != 0) {
        local_2c = (float)(iVar2 / *piVar3);
        pfVar4 = &local_2c;
        pIVar6 = g_data_07556710;
        goto label_05b8b6f0;
      }
      goto label_05b8b7a4;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((left->klass->_2).typeHierarchyDepth < bVar1) ||
       ((left->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_05b8b65d;
    if (right == (Il2CppObject *)0x0) goto label_05b8b783;
    pIVar6 = right->klass;
label_05b8b748:
    if (pIVar6 == g_data_07556710) {
      piVar3 = il2cpp_vm_Object_Unbox(right);
      if (*piVar3 == 0) goto label_05b8b7a4;
      if (right->klass != g_data_07556740) goto label_05b8b783;
    }
    else if (pIVar6 != g_data_07556740) goto label_05b8b783;
    pfVar4 = il2cpp_vm_Object_Unbox(right);
    if ((*pfVar4 != 0.0) || (NAN(*pfVar4))) {
label_05b8b783:
      pIVar5 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                         (__this,left,right,(__this->fields).div,in_R8);
      return pIVar5;
    }
  }
label_05b8b7a4:
  pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_DivideByZeroException);
  __this_00 = (System_DivideByZeroException_o *)il2cpp_codegen_object_new(pIVar6);
  System_DivideByZeroException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_DivideValues);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicEvaluator$$ModuloValues
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ModuloValues (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x5b8c6d0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8c75e: test r14, r14
// asm:   0x5b8c761: jne 0x5b8c774
// asm:   0x5b8c763: jmp 0x5b8c794
// asm:   0x5b8c765: lea rax, [rip + 0x16ea5a4]  ; TypeInfo_CustomLogic_CustomLogicClassInstance
// asm:   0x5b8c76c: mov rax, qword ptr [rax]
// asm:   0x5b8c76f: test r14, r14

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ModuloValues
          (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  float *data;
  Il2CppClass *pIVar5;
  MethodInfo *in_R8;
  float x;
  float y;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075473df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_075473df = '\x01';
  }
  if (left != (Il2CppObject *)0x0) {
    pIVar5 = left->klass;
    if (((right != (Il2CppObject *)0x0) && (pIVar5 == g_data_07556710)) && (right->klass == g_data_07556710)) {
      piVar4 = il2cpp_vm_Object_Unbox(left);
      if ((right->klass->_1).element_class != (g_data_07556710->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(right);
      }
      iVar2 = *piVar4;
      piVar4 = il2cpp_vm_Object_Unbox(right);
      fStack_24 = (float)(iVar2 % *piVar4);
      data = &fStack_24;
      pIVar5 = g_data_07556710;
      goto label_05b8c7e4;
    }
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar5->_2).typeHierarchyDepth) &&
       ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) goto label_05b8c7f5;
  }
  if (right != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if ((bVar1 <= (right->klass->_2).typeHierarchyDepth) &&
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
label_05b8c7f5:
      pIVar3 = CustomLogic_CustomLogicEvaluator__ClassMathOperation
                         (__this,left,right,(__this->fields).mod,in_R8);
      return pIVar3;
    }
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  x = MiscExtensions__UnboxToFloat(left,(MethodInfo *)0x0);
  y = MiscExtensions__UnboxToFloat(right,(MethodInfo *)0x0);
  fStack_28 = fmodf(x,y,(MethodInfo *)right);
  data = &fStack_28;
  pIVar5 = g_data_07556740;
label_05b8c7e4:
  pIVar3 = il2cpp_vm_Object_Box(pIVar5,data);
  return pIVar3;
}


// CustomLogic.CustomLogicEvaluator$$CheckEquals
// il2cpp: bool CustomLogic_CustomLogicEvaluator__CheckEquals (CustomLogic_CustomLogicEvaluator_o* __this, Il2CppObject* left, Il2CppObject* right, const MethodInfo* method);
// 0x5b8c860
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8c8e6: test r15, r15
// asm:   0x5b8c8e9: jne 0x5b8c91c
// asm:   0x5b8c8f2: jmp 0x5b8cab6
// asm:   0x5b8c93d: xor ebp, ebp
// asm:   0x5b8c93f: test ebx, ebx
// asm:   0x5b8caac: xor ebp, ebp
// asm:   0x5b8caae: test ebx, ebx
// asm:   0x5b8cab0: jne 0x5b8c947
// asm:   0x5b8cab6: xor eax, eax
// asm:   0x5b8cab8: test r12, r12
// asm:   0x5b8cabb: je 0x5b8ca8f
// asm:   0x5b8cb16: jmp 0x5b8c95a
// asm:   0x5b8cc42: jmp 0x5b8ca8f

bool CustomLogic_CustomLogicEvaluator__CheckEquals
               (CustomLogic_CustomLogicEvaluator_o *__this,Il2CppObject *left,Il2CppObject *right,
               MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Il2CppMethodPointer vtableDispatch;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  char *pcVar8;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075473e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Unity_VisualScripting_ArrayPool_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstance);
    Il2CppMethodInitialized_075473e0 = '\x01';
  }
  if (left == (Il2CppObject *)0x0) {
    bVar3 = false;
    if (right == (Il2CppObject *)0x0) {
      return true;
    }
label_05b8c91c:
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((right->klass->_2).typeHierarchyDepth < bVar1) ||
       ((right->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
      bVar5 = false;
      goto joined_r0x05b8c941;
    }
    bVar5 = CustomLogic_CustomLogicClassInstance__HasVariable
                      ((CustomLogic_CustomLogicClassInstance_o *)right,(__this->fields).eq,
                       (MethodInfo *)(ulong)bVar1);
    if (bVar3 != false) {
      bVar5 = false;
      uVar2 = (TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05b8cb10;
    }
    if (!bVar5) {
      bVar5 = false;
      goto joined_r0x05b8cc3c;
    }
    if ((TypeInfo_Unity_VisualScripting_ArrayPool_object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    pSVar6 = Unity_VisualScripting_ArrayPool_object___New
                       (2,(MethodInfo_4CBAE90 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    if (pSVar6 == (System_Object_array *)0x0) goto label_05b8cc30;
    if ((left != (Il2CppObject *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst(left,(((pSVar6->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) goto label_05b8cc54;
    if ((int)pSVar6->max_length == 0) goto label_05b8cc47;
    pSVar6->m_Items[0] = left;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
    pIVar7 = il2cpp_vm_Object_IsInst(right,(((pSVar6->obj).klass)->_1).element_class);
    if (pIVar7 == (Il2CppObject *)0x0) goto label_05b8cc54;
    if ((pSVar6->max_length & 0xfffffffe) == 0) goto label_05b8cc47;
    pSVar6->m_Items[1] = right;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    if (((right->klass->_2).typeHierarchyDepth < bVar1) ||
       ((right->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
      il2cpp_codegen_raise_invalid_cast_exception(right);
    }
    pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this,(CustomLogic_CustomLogicClassInstance_o *)right,(__this->fields).eq,pSVar6,
                        (__this->fields)._currentLineNumber,in_R9);
    Unity_VisualScripting_ArrayPool_object___Free
              (pSVar6,(MethodInfo_4CBB5B0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
  }
  else {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
    bVar3 = false;
    if ((bVar1 <= (left->klass->_2).typeHierarchyDepth) &&
       ((left->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
      bVar3 = CustomLogic_CustomLogicClassInstance__HasVariable
                        ((CustomLogic_CustomLogicClassInstance_o *)left,(__this->fields).eq,
                         (MethodInfo *)(ulong)bVar1);
    }
    if (right != (Il2CppObject *)0x0) goto label_05b8c91c;
    bVar5 = true;
joined_r0x05b8c941:
    if (bVar3 == false) {
joined_r0x05b8cc3c:
      if (left == (Il2CppObject *)0x0) {
        return false;
      }
      if (!bVar5) {
        vtableDispatch = left->klass->vtable[0].methodPtr;
        uVar4 = (*vtableDispatch)(left,right,left->klass->vtable[0].method,vtableDispatch);
        return (bool)uVar4;
      }
      return false;
    }
    uVar2 = (((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object)->_2).cctor_finished_or_no_cctor;
joined_r0x05b8cb10:
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Unity_VisualScripting_ArrayPool_object);
    }
    pSVar6 = Unity_VisualScripting_ArrayPool_object___New
                       (2,(MethodInfo_4CBAE90 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_New);
    if (pSVar6 == (System_Object_array *)0x0) goto label_05b8cc30;
    if ((left != (Il2CppObject *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst(left,(((pSVar6->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) {
label_05b8cc54:
      pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
    }
    if ((int)pSVar6->max_length == 0) {
label_05b8cc47:
      ThrowIndexOutOfRangeException();
    }
    pSVar6->m_Items[0] = left;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
    if ((!bVar5) &&
       (pIVar7 = il2cpp_vm_Object_IsInst(right,(((pSVar6->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) goto label_05b8cc54;
    if ((pSVar6->max_length & 0xfffffffe) == 0) goto label_05b8cc47;
    pSVar6->m_Items[1] = right;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
    if (left != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicClassInstance->_2).typeHierarchyDepth;
      if (((left->klass->_2).typeHierarchyDepth < bVar1) ||
         ((left->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstance)) {
        il2cpp_codegen_raise_invalid_cast_exception(left);
      }
    }
    pIVar7 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this,(CustomLogic_CustomLogicClassInstance_o *)left,(__this->fields).eq,pSVar6,
                        (__this->fields)._currentLineNumber,in_R9);
    Unity_VisualScripting_ArrayPool_object___Free
              (pSVar6,(MethodInfo_4CBB5B0 *)MethodInfo_Unity_VisualScripting_ArrayPool_object_Free);
  }
  if (pIVar7 != (Il2CppObject *)0x0) {
    if ((pIVar7->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
    }
    pcVar8 = il2cpp_vm_Object_Unbox(pIVar7);
    return *pcVar8 != '\0';
  }
label_05b8cc30:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<bool>
// il2cpp: bool CustomLogic_CustomLogicEvaluator__ConvertTo_bool_ (Il2CppObject* obj, const MethodInfo_34BD860* method);
// 0x35bd860
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35bd9aa: test r15, r15

bool CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(Il2CppObject *obj,MethodInfo_34BD860 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool bVar3;
  MethodInfo_34BD860_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  undefined1 *puVar6;
  Il2CppClass *pIVar7;
  float *data;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_34BD860_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_34BD860_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = &local_2c;
    pIVar7 = g_data_07556710;
  }
  else {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo *)0x0);
    if (!bVar3) {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).bitflags1;
      goto joined_r0x035bd9a8;
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = &local_30;
    pIVar7 = g_data_07556740;
  }
  obj = il2cpp_vm_Object_Box(pIVar7,data);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).bitflags1;
joined_r0x035bd9a8:
  if ((bVar1 & 1) == 0) {
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != (pIVar7->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar7);
  }
  puVar6 = il2cpp_vm_Object_Unbox(obj);
  return (bool)*puVar6;
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<double>
// il2cpp: double CustomLogic_CustomLogicEvaluator__ConvertTo_double_ (Il2CppObject* obj, const MethodInfo_34BDA40* method);
// 0x35bda40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35bdb8a: test r15, r15

double CustomLogic_CustomLogicEvaluator__ConvertTo_double_(Il2CppObject *obj,MethodInfo_34BDA40 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool bVar3;
  MethodInfo_34BDA40_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  double *pdVar6;
  Il2CppClass *pIVar7;
  float *data;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_34BDA40_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_34BDA40_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = &local_2c;
    pIVar7 = g_data_07556710;
  }
  else {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo *)0x0);
    if (!bVar3) {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).bitflags1;
      goto joined_r0x035bdb88;
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = &local_30;
    pIVar7 = g_data_07556740;
  }
  obj = il2cpp_vm_Object_Box(pIVar7,data);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).bitflags1;
joined_r0x035bdb88:
  if ((bVar1 & 1) == 0) {
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != (pIVar7->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar7);
  }
  pdVar6 = il2cpp_vm_Object_Unbox(obj);
  return *pdVar6;
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<int>
// il2cpp: int32_t CustomLogic_CustomLogicEvaluator__ConvertTo_int_ (Il2CppObject* obj, const MethodInfo_34BDC20* method);
// 0x35bdc20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35bdd6a: test r15, r15

int32_t CustomLogic_CustomLogicEvaluator__ConvertTo_int_(Il2CppObject *obj,MethodInfo_34BDC20 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool bVar3;
  MethodInfo_34BDC20_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  int32_t *piVar6;
  Il2CppClass *pIVar7;
  float *data;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_34BDC20_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_34BDC20_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = &local_2c;
    pIVar7 = g_data_07556710;
  }
  else {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo *)0x0);
    if (!bVar3) {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).bitflags1;
      goto joined_r0x035bdd68;
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = &local_30;
    pIVar7 = g_data_07556740;
  }
  obj = il2cpp_vm_Object_Box(pIVar7,data);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).bitflags1;
joined_r0x035bdd68:
  if ((bVar1 & 1) == 0) {
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != (pIVar7->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar7);
  }
  piVar6 = il2cpp_vm_Object_Unbox(obj);
  return *piVar6;
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<object>
// il2cpp: Il2CppObject* CustomLogic_CustomLogicEvaluator__ConvertTo_object_ (Il2CppObject* obj, const MethodInfo_34BDE00* method);
// 0x35bde00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35bdf4a: test r14, r14

Il2CppObject *
CustomLogic_CustomLogicEvaluator__ConvertTo_object_(Il2CppObject *obj,MethodInfo_34BDE00 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool bVar3;
  MethodInfo_34BDE00_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  float *data;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_34BDE00_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_34BDE00_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = &local_2c;
    pIVar7 = g_data_07556710;
  }
  else {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo *)0x0);
    if (!bVar3) {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).bitflags1;
      goto joined_r0x035bdf48;
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = &local_30;
    pIVar7 = g_data_07556740;
  }
  obj = il2cpp_vm_Object_Box(pIVar7,data);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).bitflags1;
joined_r0x035bdf48:
  if ((bVar1 & 1) == 0) {
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  if (obj == (Il2CppObject *)0x0) {
    pIVar6 = (Il2CppObject *)0x0;
  }
  else {
    pIVar6 = il2cpp_vm_Object_IsInst(obj,pIVar7);
    if (pIVar6 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar7);
    }
  }
  return pIVar6;
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<float>
// il2cpp: float CustomLogic_CustomLogicEvaluator__ConvertTo_float_ (Il2CppObject* obj, const MethodInfo_34BDFE0* method);
// 0x35bdfe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35be12a: test r15, r15

float CustomLogic_CustomLogicEvaluator__ConvertTo_float_(Il2CppObject *obj,MethodInfo_34BDFE0 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool bVar3;
  MethodInfo_34BDFE0_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  float *pfVar6;
  Il2CppClass *pIVar7;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_34BDFE0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_34BDFE0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    pfVar6 = &local_2c;
    pIVar7 = g_data_07556710;
  }
  else {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo *)0x0);
    if (!bVar3) {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).bitflags1;
      goto joined_r0x035be128;
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    pfVar6 = &local_30;
    pIVar7 = g_data_07556740;
  }
  obj = il2cpp_vm_Object_Box(pIVar7,pfVar6);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).bitflags1;
joined_r0x035be128:
  if ((bVar1 & 1) == 0) {
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != (pIVar7->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar7);
  }
  pfVar6 = il2cpp_vm_Object_Unbox(obj);
  return *pfVar6;
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<Vector3>
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_ (Il2CppObject* obj, const MethodInfo_34BE1C0* method);
// 0x35be1c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35be30e: test r15, r15

UnityEngine_Vector3_o
CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_(Il2CppObject *obj,MethodInfo_34BE1C0 *method)

{
  byte bVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool bVar3;
  MethodInfo_34BE1C0_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  UnityEngine_Vector3_Fields *pUVar6;
  Il2CppClass *pIVar7;
  float *data;
  float local_30;
  float local_2c;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_34BE1C0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_34BE1C0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar4 = method->rgctx_data;
    }
  }
  SVar2.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  bVar3 = System_Type__op_Equality
                    (pSVar5,TypeInfo_ReflectionExtensions->static_fields->IntType,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_2c = (float)MiscExtensions__UnboxToInt(obj,(MethodInfo *)0x0);
    data = &local_2c;
    pIVar7 = g_data_07556710;
  }
  else {
    SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar5 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    bVar3 = System_Type__op_Equality
                      (pSVar5,TypeInfo_ReflectionExtensions->static_fields->FloatType,(MethodInfo *)0x0);
    if (!bVar3) {
      pIVar7 = method->rgctx_data->_1_T;
      bVar1 = (pIVar7->_2).bitflags1;
      goto joined_r0x035be308;
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_30 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
    data = &local_30;
    pIVar7 = g_data_07556740;
  }
  obj = il2cpp_vm_Object_Box(pIVar7,data);
  pIVar7 = method->rgctx_data->_1_T;
  bVar1 = (pIVar7->_2).bitflags1;
joined_r0x035be308:
  if ((bVar1 & 1) == 0) {
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != (pIVar7->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar7);
  }
  pUVar6 = il2cpp_vm_Object_Unbox(obj);
  return (UnityEngine_Vector3_o)*pUVar6;
}


// CustomLogic.CustomLogicEvaluator$$ConvertTo<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o CustomLogic_CustomLogicEvaluator__ConvertTo___Il2CppFullySharedGenericType_ (Il2CppObject* obj, const MethodInfo_34BE3C0* method);
// 0x35be3c0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
CustomLogic_CustomLogicEvaluator__ConvertTo___Il2CppFullySharedGenericType_
          (Il2CppObject *obj,MethodInfo_34BE3C0 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  System_Type_o *pSVar2;
  long lVar3;
  bool bVar4;
  Il2CppRGCTXData *pIVar5;
  System_Type_o *pSVar6;
  Il2CppObject *pIVar7;
  Il2CppClass *klass;
  void *__src;
  MethodInfo *in_RDX;
  void *extraout_RDX;
  undefined1 *puVar8;
  ulong __n;
  MethodInfo_34BE3C0 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar9;
  undefined8 uStack_60;
  MethodInfo *local_58;
  int32_t local_50;
  float local_4c;
  Il2CppObject *local_48;
  MethodInfo_34BE3C0 *local_40;
  ulong local_38;
  
  pIVar5 = (in_RDX->field7_0x38).rgctx_data;
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
    uStack_60 = 0x35be3ef;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    uStack_60 = 0x35be3fb;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ReflectionExtensions);
    pIVar5 = (in_RDX->field7_0x38).rgctx_data;
    if (pIVar5 == (Il2CppRGCTXData *)0x0) {
      uStack_60 = 0x35be40c;
      il2cpp_codegen_rgctx_method_init(in_RDX);
      pIVar5 = (in_RDX->field7_0x38).rgctx_data;
    }
  }
  local_38 = (ulong)*(uint *)((long)pIVar5[1].klass + 0xfc);
  lVar3 = -(local_38 + 0xf & 0xfffffffffffffff0);
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)pIVar5->rgctxDataDummy;
  puVar8 = (undefined1 *)((long)&local_58 + lVar3);
  local_48 = obj;
  local_40 = method;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((long)&uStack_60 + lVar3) = 0x35be456;
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
    puVar8 = (undefined1 *)((long)&local_58 + lVar3);
  }
  *(undefined8 *)(puVar8 + -8) = 0x35be460;
  pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)(puVar8 + -8) = 0x35be47c;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
  }
  pSVar2 = TypeInfo_ReflectionExtensions->static_fields->IntType;
  *(undefined8 *)(puVar8 + -8) = 0x35be494;
  bVar4 = System_Type__op_Equality(pSVar6,pSVar2,(MethodInfo *)0x0);
  local_58 = in_RDX;
  if (bVar4) {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)(puVar8 + -8) = 0x35be4b4;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pIVar7 = local_48;
    *(undefined8 *)(puVar8 + -8) = 0x35be4bf;
    local_50 = MiscExtensions__UnboxToInt(pIVar7,(MethodInfo *)0x0);
    *(undefined8 *)(puVar8 + -8) = 0x35be4d6;
    pIVar7 = il2cpp_vm_Object_Box(g_data_07556710,&local_50);
    __n = local_38;
    __dest = local_40;
  }
  else {
    SVar1.fields.value = (System_RuntimeTypeHandle_Fields)((in_RDX->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)(puVar8 + -8) = 0x35be509;
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    *(undefined8 *)(puVar8 + -8) = 0x35be513;
    pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if ((TypeInfo_ReflectionExtensions->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)(puVar8 + -8) = 0x35be528;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ReflectionExtensions);
    }
    __n = local_38;
    __dest = local_40;
    pSVar2 = TypeInfo_ReflectionExtensions->static_fields->FloatType;
    *(undefined8 *)(puVar8 + -8) = 0x35be549;
    bVar4 = System_Type__op_Equality(pSVar6,pSVar2,(MethodInfo *)0x0);
    pIVar7 = local_48;
    if (bVar4) {
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        *(undefined8 *)(puVar8 + -8) = 0x35be569;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      *(undefined8 *)(puVar8 + -8) = 0x35be573;
      local_4c = MiscExtensions__UnboxToFloat(pIVar7,(MethodInfo *)0x0);
      *(undefined8 *)(puVar8 + -8) = 0x35be58c;
      pIVar7 = il2cpp_vm_Object_Box(g_data_07556740,&local_4c);
    }
    else {
    }
  }
  klass = (local_58->field7_0x38).rgctx_data[1].klass;
  if (((klass->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)(puVar8 + -8) = 0x35be5b2;
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  *(undefined8 *)(puVar8 + -8) = 0x35be5c0;
  __src = (void *)il2cpp_runtime_helper_030d6290(pIVar7,klass,(undefined1 *)((long)&local_58 + lVar3));
  *(undefined8 *)(puVar8 + -8) = 0x35be5ce;
  UVar9.klass = memcpy(__dest,__src,__n);
  UVar9.monitor = extraout_RDX;
  return UVar9;
}


// CustomLogic.CustomLogicEvaluator$$.cctor
// il2cpp: void CustomLogic_CustomLogicEvaluator___cctor (const MethodInfo* method);
// 0x5b8cef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8cfc9: jmp 0x5b8cf5b

void CustomLogic_CustomLogicEvaluator___cctor(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  MethodInfo *pMVar3;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_075473e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075473e1 = '\x01';
  }
  pMVar3 = MethodInfo_System_Array_Empty_object;
  if ((MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs =
       *(System_Object_array **)pIVar4->static_fields;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicEvaluator->static_fields->EmptyArgs);
  return;
}


