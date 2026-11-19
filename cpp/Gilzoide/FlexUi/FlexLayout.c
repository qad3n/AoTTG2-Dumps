// Type: Gilzoide.FlexUi.FlexLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gilzoide.FlexUi/Gilzoide.FlexUi/FlexLayout.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$MoveNext
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__MoveNext (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this, const MethodInfo* method);
// 0x5315bc0
// eh: try 0x5315c49..0x5315f72 -> pad 0x5315f8d (+21 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5315f7d..0x5315f87 -> pad 0x5316034 catch (...) [compiler noexcept guard]
// eh: try 0x5315fa7..0x5316024 -> pad 0x5316024 (+1 call sites) cleanup
// eh: try 0x5316027..0x531602c -> pad 0x5316034 catch (...) [compiler noexcept guard]
// asm: 84 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5315c36: lea r14, [rip + 0x1f657b3]  ; TypeInfo_UnityEngine_Object
// asm:   0x5315c3d: nop dword ptr [rax]
// asm:   0x5315d86: mov qword ptr [rsp + 0x20], 0
// asm:   0x5315d8f: lea rax, [rsp + 0x1c]
// asm:   0x5315d94: mov qword ptr [rsp + 0x28], rax
// asm:   0x5315d99: lea rax, [rsp + 0x10]
// asm:   0x5315d9e: mov qword ptr [rsp + 0x30], rax
// asm:   0x5315f18: mov rdi, rbx
// asm:   0x5315f1b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5315f34: jmp 0x5315f50
// asm:   0x5315f36: jmp 0x5315f50
// asm:   0x5315f38: jmp 0x5315f50
// asm:   0x5315f3a: jmp 0x5315f50
// asm:   0x5315f3c: jmp 0x5315f50
// asm:   0x5315f3e: jmp 0x5315f50
// asm:   0x5315f40: jmp 0x5315f50
// asm:   0x5315f42: jmp 0x5315f50
// asm:   0x5315f44: jmp 0x5315f50
// asm:   0x5315f46: jmp 0x5315f50
// asm:   0x5315f48: jmp 0x5315f50
// asm:   0x5315f4a: jmp 0x5315f50
// asm:   0x5315f4c: jmp 0x5315f8d
// asm:   0x5315f4e: jmp 0x5315f8d
// asm:   0x5315f50: mov rbx, rdx
// asm:   0x5315f53: mov r14, rax
// asm:   0x5315f56: cmp ebx, 1
// asm:   0x5315f59: jne 0x5315f7d
// asm:   0x5315f5b: mov rdi, r14
// asm:   0x5315f5e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5315f63: mov rbx, qword ptr [rax]
// asm:   0x5315f66: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5315f6b: xor ebp, ebp
// asm:   0x5315f6d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5315f72: jmp 0x5315eab
// asm:   0x5315f77: mov rbx, rdx
// asm:   0x5315f7a: mov r14, rax
// asm:   0x5315f7d: lea rdi, [rsp + 0x20]
// asm:   0x5315f82: call 0x2d47ae0  ; il2cpp_runtime_helper_02d47ae0()
// asm:   0x5315f87: jmp 0x5315f93
// asm:   0x5315f89: jmp 0x5315f8d
// asm:   0x5315f8b: jmp 0x5315f8d
// asm:   0x5315f8d: mov rbx, rdx
// asm:   0x5315f90: mov r14, rax
// asm:   0x5315f93: cmp ebx, 1
// asm:   0x5315f96: jne 0x531602c
// asm:   0x5315f9c: mov rdi, r14
// asm:   0x5315f9f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5315fa4: mov rbx, rax
// asm:   0x5315fa7: lea rdi, [rip + 0x1f62112]  ; TypeInfo_System_Exception
// asm:   0x5315fae: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5315fb3: mov rcx, qword ptr [rbx]
// asm:   0x5315fb6: mov rsi, qword ptr [rcx]
// asm:   0x5315fb9: mov rdi, rax
// asm:   0x5315fbc: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5315fc1: test al, al
// asm:   0x5315fc3: je 0x5316003
// asm:   0x5315fc5: mov rbx, qword ptr [rbx]
// asm:   0x5315fc8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5315fcd: mov rdi, qword ptr [rsp + 0x10]
// asm:   0x5315fd2: mov dword ptr [rdi], 0xfffffffe
// asm:   0x5315fd8: mov qword ptr [rdi + 0x30], 0
// asm:   0x5315fe0: add rdi, 0x30
// asm:   0x5315fe4: xor esi, esi
// asm:   0x5315fe6: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5315feb: mov rdi, qword ptr [rsp + 0x10]
// asm:   0x5315ff0: add rdi, 8
// asm:   0x5315ff4: mov rsi, rbx
// asm:   0x5315ff7: xor edx, edx
// asm:   0x5315ff9: call 0x54c9f30  ; System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetException()
// asm:   0x5315ffe: jmp 0x5315f03
// asm:   0x5316003: mov edi, 8
// asm:   0x5316008: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x531600d: mov rcx, qword ptr [rbx]
// asm:   0x5316010: mov qword ptr [rax], rcx
// asm:   0x5316013: lea rsi, [rip + 0x1b174e6]
// asm:   0x531601a: mov rdi, rax
// asm:   0x531601d: xor edx, edx
// asm:   0x531601f: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5316024: mov r14, rax
// asm:   0x5316027: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x531602c: mov rdi, r14
// asm:   0x531602f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5316034: mov rdi, rax
// asm:   0x5316037: call 0x2ab61e0  ; __clang_call_terminate()

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__MoveNext
               (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  int iVar3;
  MethodInfo *method_00;
  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o local_58 [8];
  System_Runtime_CompilerServices_YieldAwaitable_o local_50 [8];
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *local_48;
  int local_3c [3];
  int *local_30;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o **local_28;
  
  local_48 = __this;
  if (Il2CppMethodInitialized_075425b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_YieldAwaitable_Yie
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter);
    Il2CppMethodInitialized_075425b7 = '\x01';
  }
  local_58[0] = (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o)0x0;
  local_50[0].fields._tail[0] = (System_Runtime_CompilerServices_YieldAwaitable_Fields)(uint8_t  [1])0x0;
  local_3c[0] = (__this->fields).__1__state;
  if (local_3c[0] == 0) {
label_05315da3:
    local_28 = &local_48;
    local_30 = local_3c;
    local_3c[1] = 0;
    local_3c[2] = 0;
    local_58[0] = (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o)(__this->fields)._tail[0];
    (__this->fields)._tail[0] = 0;
    local_3c[0] = -1;
    (__this->fields).__1__state = -1;
label_05315dbc:
    if ((TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter);
    }
    System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__GetResult(local_58,(MethodInfo *)0x0);
    pGVar2 = (local_48->fields)._root_5__2;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar2,(MethodInfo *)0x0);
    iVar3 = 9;
    if (bVar1) {
      pGVar2 = (local_48->fields)._root_5__2;
      if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (*(pGVar2->klass->vtable)._9_IsActive.methodPtr)
                        (pGVar2,(pGVar2->klass->vtable)._9_IsActive.method);
      if (bVar1) {
        pGVar2 = (local_48->fields)._root_5__2;
        if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (Il2CppMethodInitialized_075425a5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_075425a5 = '\x01';
        }
        pGVar2 = (pGVar2->fields)._parentNode;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        method_00 = (MethodInfo *)0x0;
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          pGVar2 = (local_48->fields)._root_5__2;
          if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            ThrowNullReferenceException();
          }
          Gilzoide_FlexUi_FlexLayout__RefreshLayout(pGVar2,method_00);
        }
      }
    }
  }
  else {
    pGVar2 = (__this->fields).__4__this;
    if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    while( true ) {
      if (Il2CppMethodInitialized_075425a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_075425a5 = '\x01';
      }
      x = (pGVar2->fields)._parentNode;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) break;
      pGVar2 = (pGVar2->fields)._parentNode;
      if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    (local_48->fields)._root_5__2 = pGVar2;
    Il2CppCodeGenWriteBarrier(&(local_48->fields)._root_5__2);
    pGVar2 = (local_48->fields)._root_5__2;
    if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pGVar2->fields)._isRefreshScheduled != false) goto label_05315ed5;
    (pGVar2->fields)._isRefreshScheduled = true;
    local_3c[1] = 0;
    local_3c[2] = 0;
    local_30 = local_3c;
    local_28 = &local_48;
    __this = local_48;
    if (local_3c[0] == 0) goto label_05315da3;
    if ((TypeInfo_System_Threading_Tasks_Task->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Threading_Tasks_Task);
    }
    local_50[0] = System_Threading_Tasks_Task__Yield((MethodInfo *)0x0);
    local_58[0] = (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o)
                  System_Runtime_CompilerServices_YieldAwaitable__GetAwaiter(local_50,(MethodInfo *)0x0);
    if ((TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter);
    }
    bVar1 = System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__get_IsCompleted
                      (local_58,(MethodInfo *)0x0);
    if (bVar1) goto label_05315dbc;
    local_3c[0] = 0;
    (local_48->fields).__1__state = 0;
    (local_48->fields)._tail[0] = (uint8_t)local_58[0];
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter__FlexLayout__RefreshRootLayout_d__155_
              (&(local_48->fields).__t__builder,local_58,local_48,
               (MethodInfo_3412CA0 *)
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_YieldAwaitable_Yie
              );
    iVar3 = 7;
  }
  if (local_3c[0] < 0) {
    pGVar2 = (local_48->fields)._root_5__2;
    if (pGVar2 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar2->fields)._isRefreshScheduled = false;
  }
  if ((iVar3 != 0) && (iVar3 != 9)) {
    return;
  }
label_05315ed5:
  (local_48->fields).__1__state = -2;
  (local_48->fields)._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(local_48->fields)._root_5__2);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult
            (&(local_48->fields).__t__builder,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$SetStateMachine
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__SetStateMachine (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5316040

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155__SetStateMachine
               (Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_IsRootLayoutNode
// il2cpp: bool Gilzoide_FlexUi_FlexLayout__get_IsRootLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530eae0

bool Gilzoide_FlexUi_FlexLayout__get_IsRootLayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075425a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425a5 = '\x01';
  }
  x = (__this->fields)._parentNode;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gilzoide.FlexUi.FlexLayout$$get_RootLayoutNode
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gilzoide_FlexUi_FlexLayout__get_RootLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530eb30
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x530eb3a: mov rbx, rdi
// asm:   0x530eb3d: lea r14, [rip + 0x1f6c8ac]  ; TypeInfo_UnityEngine_Object
// asm:   0x530eb44: nop word ptr cs:[rax + rax]

Gilzoide_FlexUi_FlexLayout_o *
Gilzoide_FlexUi_FlexLayout__get_RootLayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  
  if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    do {
      if (Il2CppMethodInitialized_075425a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_075425a5 = '\x01';
      }
      x = (__this->fields)._parentNode;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return __this;
      }
      __this = (__this->fields)._parentNode;
    } while (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$get_ParentLayoutNode
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gilzoide_FlexUi_FlexLayout__get_ParentLayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530ebb0

Gilzoide_FlexUi_FlexLayout_o *
Gilzoide_FlexUi_FlexLayout__get_ParentLayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._parentNode;
}


// Gilzoide.FlexUi.FlexLayout$$get_RectTransform
// il2cpp: UnityEngine_RectTransform_o* Gilzoide_FlexUi_FlexLayout__get_RectTransform (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530ebc0

UnityEngine_RectTransform_o *
Gilzoide_FlexUi_FlexLayout__get_RectTransform(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_RectTransform_c *pUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if (Il2CppMethodInitialized_075425a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_075425a6 = '\x01';
  }
  pUVar3 = (__this->fields)._rectTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._rectTransform;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar1 = TypeInfo_UnityEngine_RectTransform;
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
      *targetAddress = (UnityEngine_RectTransform_o *)0x0;
    }
    else if ((pUVar3->klass != TypeInfo_UnityEngine_RectTransform) ||
            (*targetAddress = pUVar3, pUVar3->klass != pUVar1)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  return *targetAddress;
}


// Gilzoide.FlexUi.FlexLayout$$get_Configuration
// il2cpp: Gilzoide_FlexUi_FlexLayoutConfig_o* Gilzoide_FlexUi_FlexLayout__get_Configuration (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530ec70

Gilzoide_FlexUi_FlexLayoutConfig_o *
Gilzoide_FlexUi_FlexLayout__get_Configuration(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._configuration;
}


// Gilzoide.FlexUi.FlexLayout$$set_Configuration
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Configuration (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayoutConfig_o* value, const MethodInfo* method);
// 0x530ec80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x530ef18: jmp 0x530ee0f

void Gilzoide_FlexUi_FlexLayout__set_Configuration
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayoutConfig_o *value,
               MethodInfo *method)

{
  bool bVar1;
  code *pcVar2;
  intptr_t iVar3;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  undefined1 auVar5 [16];
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_88;
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_40;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_38;
  
  if (Il2CppMethodInitialized_075425a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425a7 = '\x01';
  }
  (__this->fields)._configuration = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._configuration);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)value,(MethodInfo *)0x0);
  local_40._nodePtr = (intptr_t)Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar4);
  if (bVar1) {
    if (value == (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar4 = (MethodInfo *)(value->fields)._config.fields._configPtr;
    auVar5._8_8_ = extraout_RDX;
    auVar5._0_8_ = pMVar4;
    if (pMVar4 == (MethodInfo *)0x0) {
      if ((value->fields)._isDefaultConfig == false) {
        pcVar2 = g_data_075425c0;
        if (g_data_075425c0 == (code *)0x0) {
          local_88.fields._0_8_ = "flex-ui";
          local_88.fields.__t__builder.fields.m_synchronizationContext =
               (System_Threading_SynchronizationContext_o *)0x7;
          local_88.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
               (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfd10d9;
          local_88.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
               (System_Action_o *)0x10;
          local_88.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
          local_88.fields.__4__this =
               (Gilzoide_FlexUi_FlexLayout_o *)((ulong)local_88.fields.__4__this._5_3_ << 0x28);
          pcVar2 = (code *)il2cpp_runtime_helper_03123230(&local_88);
          g_data_075425c0 = pcVar2;
        }
      }
      else {
        pcVar2 = g_data_075425d0;
        if (g_data_075425d0 == (code *)0x0) {
          local_88.fields._0_8_ = "flex-ui";
          local_88.fields.__t__builder.fields.m_synchronizationContext =
               (System_Threading_SynchronizationContext_o *)0x7;
          local_88.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
               (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfe621e;
          local_88.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
               (System_Action_o *)0x17;
          local_88.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
          local_88.fields.__4__this =
               (Gilzoide_FlexUi_FlexLayout_o *)((ulong)local_88.fields.__4__this._5_3_ << 0x28);
          pcVar2 = (code *)il2cpp_runtime_helper_03123230(&local_88);
          g_data_075425d0 = pcVar2;
        }
      }
      iVar3 = (*pcVar2)();
      (value->fields)._config.fields._configPtr = iVar3;
      Gilzoide_FlexUi_FlexLayoutConfig__RefreshConfig(value,pMVar4);
      Gilzoide_FlexUi_Yoga_YGNode__SetConfig
                ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_40,
                 (Gilzoide_FlexUi_Yoga_YGConfig_o)(value->fields)._config.fields._configPtr,method_00);
      goto joined_r0x0530edfa;
    }
  }
  else {
    if (g_data_075425d0 == (code *)0x0) {
      local_88.fields._0_8_ = "flex-ui";
      local_88.fields.__t__builder.fields.m_synchronizationContext =
           (System_Threading_SynchronizationContext_o *)0x7;
      local_88.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
           (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfe621e;
      local_88.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x17;
      local_88.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
      local_88.fields.__4__this =
           (Gilzoide_FlexUi_FlexLayout_o *)((ulong)local_88.fields.__4__this._5_3_ << 0x28);
      g_data_075425d0 = (code *)il2cpp_runtime_helper_03123230(&local_88);
    }
    auVar5 = (*g_data_075425d0)();
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetConfig
            ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_40,(Gilzoide_FlexUi_Yoga_YGConfig_Fields)auVar5._0_8_,
             auVar5._8_8_);
joined_r0x0530edfa:
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_88.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_88.fields._tail[0] = 0;
  local_88.fields._tail[1] = 0;
  local_88.fields._tail[2] = 0;
  local_88.fields._tail[3] = 0;
  local_88.fields._tail[4] = 0;
  local_88.fields._tail[5] = 0;
  local_88.fields._tail[6] = 0;
  local_88.fields._63_1_ = 0;
  local_88.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_88.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_88.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_88.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_88.fields._0_8_ = (char *)0x0;
  local_88.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_38,(MethodInfo *)0x0);
  local_88.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_38.fields.m_coreState.fields.m_defaultContextAction;
  local_88.fields.__t__builder.fields.m_task = local_38.fields.m_task;
  local_88.fields.__t__builder.fields.m_synchronizationContext = local_38.fields.m_synchronizationContext;
  local_88.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_38.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_88 + 8U));
  local_88.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_88 + 0x28));
  local_88.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_88 + 8U),&local_88,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionType
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_PositionType (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530f390

int32_t Gilzoide_FlexUi_FlexLayout__get_PositionType(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._positionType;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionType
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionType (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x530f3a0

void Gilzoide_FlexUi_FlexLayout__set_PositionType
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_38;
  
  (__this->fields)._positionType = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_075426b0 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xff884c;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_0000001f;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0xc);
    g_data_075426b0 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_075426b0)(GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_38,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_38.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_38.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_38.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_38.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530f540

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x530f550

void Gilzoide_FlexUi_FlexLayout__set_PositionLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._positionLeft.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition(&local_80,0,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530f820

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x530f830

void Gilzoide_FlexUi_FlexLayout__set_PositionTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._positionTop.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition(&local_80,1,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530f900

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x530f910

void Gilzoide_FlexUi_FlexLayout__set_PositionRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._positionRight.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition(&local_80,2,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PositionBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PositionBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530f9e0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PositionBottom(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PositionBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PositionBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x530f9f0

void Gilzoide_FlexUi_FlexLayout__set_PositionBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._positionBottom.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition(&local_80,3,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Direction
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_Direction (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530fac0

int32_t Gilzoide_FlexUi_FlexLayout__get_Direction(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._direction;
}


// Gilzoide.FlexUi.FlexLayout$$set_Direction
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Direction (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x530fad0

void Gilzoide_FlexUi_FlexLayout__set_Direction
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o GStack_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o SStack_38;
  
  (__this->fields)._direction = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_07542680 == (code *)0x0) {
    GStack_78.fields._0_8_ = "flex-ui";
    GStack_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfee953;
    GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_0000001c;
    GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    GStack_78.fields.__4__this =
         (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(GStack_78.fields.__4__this._5_3_,0xc);
    g_data_07542680 = (code *)il2cpp_runtime_helper_03123230(&GStack_78);
  }
  (*g_data_07542680)(GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  GStack_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.fields._tail[0] = 0;
  GStack_78.fields._tail[1] = 0;
  GStack_78.fields._tail[2] = 0;
  GStack_78.fields._tail[3] = 0;
  GStack_78.fields._tail[4] = 0;
  GStack_78.fields._tail[5] = 0;
  GStack_78.fields._tail[6] = 0;
  GStack_78.fields._63_1_ = 0;
  GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  GStack_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  GStack_78.fields._0_8_ = (char *)0x0;
  GStack_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&SStack_38,(MethodInfo *)0x0);
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       SStack_38.fields.m_coreState.fields.m_defaultContextAction;
  GStack_78.fields.__t__builder.fields.m_task = SStack_38.fields.m_task;
  GStack_78.fields.__t__builder.fields.m_synchronizationContext = SStack_38.fields.m_synchronizationContext;
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       SStack_38.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&GStack_78 + 8U));
  GStack_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&GStack_78 + 0x28));
  GStack_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&GStack_78 + 8U),&GStack_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexDirection
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_FlexDirection (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530fc70

int32_t Gilzoide_FlexUi_FlexLayout__get_FlexDirection(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexDirection;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexDirection
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexDirection (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x530fc80

void Gilzoide_FlexUi_FlexLayout__set_FlexDirection
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_38;
  
  (__this->fields)._flexDirection = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_07542688 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfde264;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_00000020;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0xc);
    g_data_07542688 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_07542688)(GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_38,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_38.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_38.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_38.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_38.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexWrap
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_FlexWrap (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530fe20

int32_t Gilzoide_FlexUi_FlexLayout__get_FlexWrap(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexWrap;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexWrap
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexWrap (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x530fe30

void Gilzoide_FlexUi_FlexLayout__set_FlexWrap
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_38;
  
  (__this->fields)._flexWrap = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_075426b8 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfe0b9e;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_0000001b;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0xc);
    g_data_075426b8 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_075426b8)(GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_38,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_38.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_38.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_38.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_38.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexBasis
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_FlexBasis (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530ffd0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_FlexBasis(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._flexBasis.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexBasis
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexBasis (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x530ffe0

void Gilzoide_FlexUi_FlexLayout__set_FlexBasis
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *method_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GStack_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields GStack_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o SStack_30;
  
  (__this->fields)._flexBasis.fields = value.fields;
  GStack_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis(&GStack_80,value,method_00);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  GStack_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78._tail[0] = 0;
  GStack_78._tail[1] = 0;
  GStack_78._tail[2] = 0;
  GStack_78._tail[3] = 0;
  GStack_78._tail[4] = 0;
  GStack_78._tail[5] = 0;
  GStack_78._tail[6] = 0;
  GStack_78._63_1_ = 0;
  GStack_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  GStack_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  GStack_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  GStack_78.__1__state = 0;
  GStack_78._pad_8[0] = 0;
  GStack_78._pad_8[1] = 0;
  GStack_78._pad_8[2] = 0;
  GStack_78._pad_8[3] = 0;
  GStack_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&SStack_30,(MethodInfo *)0x0);
  GStack_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       SStack_30.fields.m_coreState.fields.m_defaultContextAction;
  GStack_78.__t__builder.fields.m_task = SStack_30.fields.m_task;
  GStack_78.__t__builder.fields.m_synchronizationContext = SStack_30.fields.m_synchronizationContext;
  GStack_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       SStack_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&GStack_78.__t__builder);
  GStack_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&GStack_78.__4__this);
  GStack_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&GStack_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&GStack_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexGrow
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_FlexGrow (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53102c0

float Gilzoide_FlexUi_FlexLayout__get_FlexGrow(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexGrow;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexGrow
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexGrow (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x53102d0

void Gilzoide_FlexUi_FlexLayout__set_FlexGrow
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._flexGrow = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  if (g_data_075426c0 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x1000df8;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_0000001b;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0xc);
    g_data_075426c0 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_075426c0)(value,GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_FlexShrink
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_FlexShrink (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5310490

float Gilzoide_FlexUi_FlexLayout__get_FlexShrink(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._flexShrink;
}


// Gilzoide.FlexUi.FlexLayout$$set_FlexShrink
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_FlexShrink (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x53104a0

void Gilzoide_FlexUi_FlexLayout__set_FlexShrink
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._flexShrink = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  if (g_data_075426c8 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xff4e1b;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_0000001d;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0xc);
    g_data_075426c8 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_075426c8)(value,GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_JustifyContent
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_JustifyContent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5310660

int32_t Gilzoide_FlexUi_FlexLayout__get_JustifyContent
                  (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._justifyContent;
}


// Gilzoide.FlexUi.FlexLayout$$set_JustifyContent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_JustifyContent (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x5310670

void Gilzoide_FlexUi_FlexLayout__set_JustifyContent
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_38;
  
  (__this->fields)._justifyContent = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_07542690 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xff2bfd;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_00000021;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0xc);
    g_data_07542690 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_07542690)(GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_38,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_38.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_38.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_38.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_38.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignItems
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignItems (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5310810

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignItems(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignItems;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignItems
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignItems (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x5310820

void Gilzoide_FlexUi_FlexLayout__set_AlignItems
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_38;
  
  (__this->fields)._alignItems = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_075426a0 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfe2765;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_0000001d;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0xc);
    g_data_075426a0 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_075426a0)(GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_38,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_38.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_38.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_38.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_38.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignSelf
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignSelf (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53109c0

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignSelf(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignSelf;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignSelf
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignSelf (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x53109d0

void Gilzoide_FlexUi_FlexLayout__set_AlignSelf
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_38;
  
  (__this->fields)._alignSelf = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_075426a8 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfcf091;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_0000001c;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0xc);
    g_data_075426a8 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_075426a8)(GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_38,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_38.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_38.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_38.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_38.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AlignContent
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__get_AlignContent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5310b70

int32_t Gilzoide_FlexUi_FlexLayout__get_AlignContent(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignContent;
}


// Gilzoide.FlexUi.FlexLayout$$set_AlignContent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AlignContent (Gilzoide_FlexUi_FlexLayout_o* __this, int32_t value, const MethodInfo* method);
// 0x5310b80

void Gilzoide_FlexUi_FlexLayout__set_AlignContent
               (Gilzoide_FlexUi_FlexLayout_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  undefined4 in_register_00000034;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o GStack_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o SStack_38;
  
  (__this->fields)._alignContent = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                    (__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  if (g_data_07542698 == (code *)0x0) {
    GStack_78.fields._0_8_ = "flex-ui";
    GStack_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xff2c1f;
    GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_0000001f;
    GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    GStack_78.fields.__4__this =
         (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(GStack_78.fields.__4__this._5_3_,0xc);
    g_data_07542698 = (code *)il2cpp_runtime_helper_03123230(&GStack_78);
  }
  (*g_data_07542698)(GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  GStack_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.fields._tail[0] = 0;
  GStack_78.fields._tail[1] = 0;
  GStack_78.fields._tail[2] = 0;
  GStack_78.fields._tail[3] = 0;
  GStack_78.fields._tail[4] = 0;
  GStack_78.fields._tail[5] = 0;
  GStack_78.fields._tail[6] = 0;
  GStack_78.fields._63_1_ = 0;
  GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  GStack_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  GStack_78.fields._0_8_ = (char *)0x0;
  GStack_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&SStack_38,(MethodInfo *)0x0);
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       SStack_38.fields.m_coreState.fields.m_defaultContextAction;
  GStack_78.fields.__t__builder.fields.m_task = SStack_38.fields.m_task;
  GStack_78.fields.__t__builder.fields.m_synchronizationContext = SStack_38.fields.m_synchronizationContext;
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       SStack_38.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&GStack_78 + 8U));
  GStack_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&GStack_78 + 0x28));
  GStack_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&GStack_78 + 8U),&GStack_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Width
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_Width (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5310d20

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_Width(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._width.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_Width
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Width (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5310d30

void Gilzoide_FlexUi_FlexLayout__set_Width
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *method_00;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._width.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth(&local_80,value,method_00);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_Height
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_Height (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5311010

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_Height(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._height.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_Height
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_Height (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5311020

void Gilzoide_FlexUi_FlexLayout__set_Height
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *method_00;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._height.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight(&local_80,value,method_00);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MinWidth
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MinWidth (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5311300

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MinWidth(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minWidth.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MinWidth
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MinWidth (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5311310

void Gilzoide_FlexUi_FlexLayout__set_MinWidth
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *method_00;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._minWidth.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth(&local_80,value,method_00);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MinHeight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MinHeight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53115d0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MinHeight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minHeight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MinHeight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MinHeight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53115e0

void Gilzoide_FlexUi_FlexLayout__set_MinHeight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *method_00;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._minHeight.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight(&local_80,value,method_00);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MaxWidth
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MaxWidth (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53118a0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MaxWidth(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxWidth.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MaxWidth
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MaxWidth (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53118b0

void Gilzoide_FlexUi_FlexLayout__set_MaxWidth
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *method_00;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._maxWidth.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth(&local_80,value,method_00);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MaxHeight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MaxHeight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5311b70

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MaxHeight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxHeight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MaxHeight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MaxHeight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5311b80

void Gilzoide_FlexUi_FlexLayout__set_MaxHeight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *method_00;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._maxHeight.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight(&local_80,value,method_00);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_AspectRatio
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_AspectRatio (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5311e40

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_AspectRatio(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._aspectRatio.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_AspectRatio
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_AspectRatio (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5311e50

void Gilzoide_FlexUi_FlexLayout__set_AspectRatio
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o GStack_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o SStack_30;
  
  (__this->fields)._aspectRatio.fields = value.fields;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  if (g_data_07542798 == (code *)0x0) {
    GStack_78.fields._0_8_ = "flex-ui";
    GStack_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x1003050;
    GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)&g_data_0000001e;
    GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    GStack_78.fields.__4__this =
         (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(GStack_78.fields.__4__this._5_3_,0xc);
    g_data_07542798 = (code *)il2cpp_runtime_helper_03123230(&GStack_78);
  }
  (*g_data_07542798)(value.fields.Value,GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  GStack_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.fields._tail[0] = 0;
  GStack_78.fields._tail[1] = 0;
  GStack_78.fields._tail[2] = 0;
  GStack_78.fields._tail[3] = 0;
  GStack_78.fields._tail[4] = 0;
  GStack_78.fields._tail[5] = 0;
  GStack_78.fields._tail[6] = 0;
  GStack_78.fields._63_1_ = 0;
  GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  GStack_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  GStack_78.fields._0_8_ = (char *)0x0;
  GStack_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&SStack_30,(MethodInfo *)0x0);
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       SStack_30.fields.m_coreState.fields.m_defaultContextAction;
  GStack_78.fields.__t__builder.fields.m_task = SStack_30.fields.m_task;
  GStack_78.fields.__t__builder.fields.m_synchronizationContext = SStack_30.fields.m_synchronizationContext;
  GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       SStack_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&GStack_78 + 8U));
  GStack_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&GStack_78 + 0x28));
  GStack_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&GStack_78 + 8U),&GStack_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5312010

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5312020

void Gilzoide_FlexUi_FlexLayout__set_MarginLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._marginLeft.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin(&local_80,0,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5312300

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5312310

void Gilzoide_FlexUi_FlexLayout__set_MarginTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._marginTop.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin(&local_80,1,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53123e0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53123f0

void Gilzoide_FlexUi_FlexLayout__set_MarginRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o GStack_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields GStack_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o SStack_30;
  
  (__this->fields)._marginRight.fields = value.fields;
  GStack_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin(&GStack_80,2,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  GStack_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78._tail[0] = 0;
  GStack_78._tail[1] = 0;
  GStack_78._tail[2] = 0;
  GStack_78._tail[3] = 0;
  GStack_78._tail[4] = 0;
  GStack_78._tail[5] = 0;
  GStack_78._tail[6] = 0;
  GStack_78._63_1_ = 0;
  GStack_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  GStack_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  GStack_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  GStack_78.__1__state = 0;
  GStack_78._pad_8[0] = 0;
  GStack_78._pad_8[1] = 0;
  GStack_78._pad_8[2] = 0;
  GStack_78._pad_8[3] = 0;
  GStack_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&SStack_30,(MethodInfo *)0x0);
  GStack_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       SStack_30.fields.m_coreState.fields.m_defaultContextAction;
  GStack_78.__t__builder.fields.m_task = SStack_30.fields.m_task;
  GStack_78.__t__builder.fields.m_synchronizationContext = SStack_30.fields.m_synchronizationContext;
  GStack_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       SStack_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&GStack_78.__t__builder);
  GStack_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&GStack_78.__4__this);
  GStack_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&GStack_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&GStack_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_MarginBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_MarginBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53124c0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_MarginBottom(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_MarginBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_MarginBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53124d0

void Gilzoide_FlexUi_FlexLayout__set_MarginBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o GStack_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields GStack_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o SStack_30;
  
  (__this->fields)._marginBottom.fields = value.fields;
  GStack_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin(&GStack_80,3,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  GStack_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78._tail[0] = 0;
  GStack_78._tail[1] = 0;
  GStack_78._tail[2] = 0;
  GStack_78._tail[3] = 0;
  GStack_78._tail[4] = 0;
  GStack_78._tail[5] = 0;
  GStack_78._tail[6] = 0;
  GStack_78._63_1_ = 0;
  GStack_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  GStack_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  GStack_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  GStack_78.__1__state = 0;
  GStack_78._pad_8[0] = 0;
  GStack_78._pad_8[1] = 0;
  GStack_78._pad_8[2] = 0;
  GStack_78._pad_8[3] = 0;
  GStack_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&SStack_30,(MethodInfo *)0x0);
  GStack_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       SStack_30.fields.m_coreState.fields.m_defaultContextAction;
  GStack_78.__t__builder.fields.m_task = SStack_30.fields.m_task;
  GStack_78.__t__builder.fields.m_synchronizationContext = SStack_30.fields.m_synchronizationContext;
  GStack_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       SStack_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&GStack_78.__t__builder);
  GStack_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&GStack_78.__4__this);
  GStack_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&GStack_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&GStack_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingLeft
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingLeft (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53125a0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingLeft(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingLeft.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingLeft
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingLeft (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53125b0

void Gilzoide_FlexUi_FlexLayout__set_PaddingLeft
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._paddingLeft.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding(&local_80,0,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingTop
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingTop (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5312880

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingTop(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingTop.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingTop
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingTop (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5312890

void Gilzoide_FlexUi_FlexLayout__set_PaddingTop
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._paddingTop.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding(&local_80,1,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingRight
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingRight (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5312960

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingRight(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingRight.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingRight
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingRight (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5312970

void Gilzoide_FlexUi_FlexLayout__set_PaddingRight
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._paddingRight.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding(&local_80,2,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_PaddingBottom
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_FlexLayout__get_PaddingBottom (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5312a40

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_FlexLayout__get_PaddingBottom(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingBottom.fields;
}


// Gilzoide.FlexUi.FlexLayout$$set_PaddingBottom
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_PaddingBottom (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5312a50

void Gilzoide_FlexUi_FlexLayout__set_PaddingBottom
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_Yoga_YGNode_o local_80;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._paddingBottom.fields = value.fields;
  local_80 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,(MethodInfo *)value.fields);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding(&local_80,3,value,in_RCX);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_GapColumn
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_GapColumn (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5312b20

float Gilzoide_FlexUi_FlexLayout__get_GapColumn(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._gapColumn;
}


// Gilzoide.FlexUi.FlexLayout$$set_GapColumn
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_GapColumn (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x5312b30

void Gilzoide_FlexUi_FlexLayout__set_GapColumn
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._gapColumn = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  if (g_data_07542720 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfe80d5;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x16;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0x10)
    ;
    g_data_07542720 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_07542720)(value,GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_GapRow
// il2cpp: float Gilzoide_FlexUi_FlexLayout__get_GapRow (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5312cf0

float Gilzoide_FlexUi_FlexLayout__get_GapRow(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  return (__this->fields)._gapRow;
}


// Gilzoide.FlexUi.FlexLayout$$set_GapRow
// il2cpp: void Gilzoide_FlexUi_FlexLayout__set_GapRow (Gilzoide_FlexUi_FlexLayout_o* __this, float value, const MethodInfo* method);
// 0x5312d00

void Gilzoide_FlexUi_FlexLayout__set_GapRow
               (Gilzoide_FlexUi_FlexLayout_o *__this,float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  (__this->fields)._gapRow = value;
  GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  if (g_data_07542720 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfe80d5;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x16;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(local_78.fields.__4__this._5_3_,0x10)
    ;
    g_data_07542720 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  (*g_data_07542720)(value,GVar1.fields._nodePtr);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$get_LayoutNode
// il2cpp: Gilzoide_FlexUi_Yoga_YGNode_o Gilzoide_FlexUi_FlexLayout__get_LayoutNode (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530ef30

Gilzoide_FlexUi_Yoga_YGNode_o
Gilzoide_FlexUi_FlexLayout__get_LayoutNode(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_Fields GVar1;
  intptr_t iVar2;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  GVar1._nodePtr = (__this->fields)._layoutNode.fields._nodePtr;
  if (GVar1._nodePtr != 0) {
    return (Gilzoide_FlexUi_Yoga_YGNode_o)(Gilzoide_FlexUi_Yoga_YGNode_Fields)GVar1._nodePtr;
  }
  if (g_data_075425f0 == (code *)0x0) {
    local_78.fields._0_8_ = "flex-ui";
    local_78.fields.__t__builder.fields.m_synchronizationContext =
         (System_Threading_SynchronizationContext_o *)0x7;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfe429b;
    local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0xe;
    local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
    local_78.fields.__4__this =
         (Gilzoide_FlexUi_FlexLayout_o *)((ulong)local_78.fields.__4__this & 0xffffff0000000000);
    g_data_075425f0 = (code *)il2cpp_runtime_helper_03123230(&local_78);
  }
  iVar2 = (*g_data_075425f0)();
  (__this->fields)._layoutNode.fields._nodePtr = iVar2;
  Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure(__this,method);
  Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle(__this,method);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields._tail[0] = 0;
  local_78.fields._tail[1] = 0;
  local_78.fields._tail[2] = 0;
  local_78.fields._tail[3] = 0;
  local_78.fields._tail[4] = 0;
  local_78.fields._tail[5] = 0;
  local_78.fields._tail[6] = 0;
  local_78.fields._63_1_ = 0;
  local_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.fields._0_8_ = (char *)0x0;
  local_78.fields.__t__builder.fields.m_synchronizationContext =
       (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.fields.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.fields.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)((long)&local_78 + 8U));
  local_78.fields.__4__this = __this;
  Il2CppCodeGenWriteBarrier((Gilzoide_FlexUi_FlexLayout_o **)((long)&local_78 + 0x28));
  local_78.fields.__1__state = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            ((System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *)((long)&local_78 + 8U),&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return (Gilzoide_FlexUi_Yoga_YGNode_o)
         (Gilzoide_FlexUi_Yoga_YGNode_Fields)(__this->fields)._layoutNode.fields._nodePtr;
}


// Gilzoide.FlexUi.FlexLayout$$OnEnable
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnEnable (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5313a30

void Gilzoide_FlexUi_FlexLayout__OnEnable(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  UnityEngine_EventSystems_UIBehaviour__OnEnable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__RefreshParent(__this,method_00);
  Gilzoide_FlexUi_FlexLayout__RefreshChildren(__this,method_00);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnDisable
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnDisable (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5313fc0

void Gilzoide_FlexUi_FlexLayout__OnDisable(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  bool bVar2;
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_FlexLayout_o *method_00;
  
  UnityEngine_EventSystems_UIBehaviour__OnDisable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075425ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425ae = '\x01';
  }
  pGVar1 = (__this->fields)._parentNode;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar1,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._parentNode;
    if (pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = __this;
    Gilzoide_FlexUi_FlexLayout__UntrackChild(pGVar1,__this,true,in_RCX);
  }
  Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(__this,(MethodInfo *)method_00);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnDestroy
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnDestroy (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5314360

void Gilzoide_FlexUi_FlexLayout__OnDestroy(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if ((__this->fields)._layoutNode.fields._nodePtr != 0) {
    __this_00 = &(__this->fields)._layoutNode;
    Gilzoide_FlexUi_Yoga_YGNode__Free(__this_00,method_00);
    (__this_00->fields)._nodePtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnTransformParentChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnTransformParentChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53143b0

void Gilzoide_FlexUi_FlexLayout__OnTransformParentChanged
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  UnityEngine_EventSystems_UIBehaviour__OnTransformParentChanged
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  method_00 = (__this->klass->vtable)._9_IsActive.method;
  bVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,method_00);
  if (bVar1) {
    Gilzoide_FlexUi_FlexLayout__RefreshParent(__this,method_00);
    return;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnTransformChildrenChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnTransformChildrenChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53143e0

void Gilzoide_FlexUi_FlexLayout__OnTransformChildrenChanged
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  method_00 = (__this->klass->vtable)._9_IsActive.method;
  bVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,method_00);
  if (bVar1) {
    Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(__this,method_00);
    Gilzoide_FlexUi_FlexLayout__RefreshChildren(__this,method_00);
    return;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$OnRectTransformDimensionsChange
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnRectTransformDimensionsChange (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5314410

void Gilzoide_FlexUi_FlexLayout__OnRectTransformDimensionsChange
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o *__this_00;
  bool bVar1;
  char cVar2;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar3;
  MethodInfo *pMVar4;
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o GStack_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o SStack_30;
  
  UnityEngine_EventSystems_UIBehaviour__OnRectTransformDimensionsChange
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pMVar4 = (__this->klass->vtable)._9_IsActive.method;
  bVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,pMVar4);
  if (bVar1) {
    GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar4);
    if (g_data_07542648 == (code *)0x0) {
      GStack_78.fields._0_8_ = "flex-ui";
      GStack_78.fields.__t__builder.fields.m_synchronizationContext =
           (System_Threading_SynchronizationContext_o *)0x7;
      GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
           (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x1000dc6;
      GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
           (System_Action_o *)&g_data_00000019;
      GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
      GStack_78.fields.__4__this =
           (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(GStack_78.fields.__4__this._5_3_,8);
      g_data_07542648 = (code *)il2cpp_runtime_helper_03123230(&GStack_78);
      cVar2 = (*g_data_07542648)(GVar3.fields._nodePtr);
    }
    else {
      cVar2 = (*g_data_07542648)(GVar3.fields._nodePtr);
    }
    if (cVar2 == '\0') {
      if (Il2CppMethodInitialized_075425a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_075425a5 = '\x01';
      }
      x = (__this->fields)._parentNode;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pMVar4 = (MethodInfo *)0x0;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar1) && ((__this->fields)._isRefreshScheduled == false)) {
        Gilzoide_FlexUi_FlexLayout__RefreshLayout(__this,pMVar4);
        return;
      }
    }
    else {
      GVar3 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar4);
      if (g_data_07542648 == (code *)0x0) {
        GStack_78.fields._0_8_ = "flex-ui";
        GStack_78.fields.__t__builder.fields.m_synchronizationContext =
             (System_Threading_SynchronizationContext_o *)0x7;
        GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x1000dc6;
        GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
             (System_Action_o *)&g_data_00000019;
        GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
        GStack_78.fields.__4__this =
             (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(GStack_78.fields.__4__this._5_3_,8);
        g_data_07542648 = (code *)il2cpp_runtime_helper_03123230(&GStack_78);
      }
      cVar2 = (*g_data_07542648)(GVar3.fields._nodePtr);
      if (cVar2 != '\0') {
        if (g_data_07542650 == (code *)0x0) {
          GStack_78.fields._0_8_ = "flex-ui";
          GStack_78.fields.__t__builder.fields.m_synchronizationContext =
               (System_Threading_SynchronizationContext_o *)0x7;
          GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
               (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0xfc45f4;
          GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
               (System_Action_o *)&g_data_00000013;
          GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x200000000;
          GStack_78.fields.__4__this =
               (Gilzoide_FlexUi_FlexLayout_o *)CONCAT35(GStack_78.fields.__4__this._5_3_,8);
          g_data_07542650 = (code *)il2cpp_runtime_helper_03123230(&GStack_78);
        }
        (*g_data_07542650)(GVar3.fields._nodePtr);
      }
      if (Il2CppMethodInitialized_075425a8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
                  );
        Il2CppMethodInitialized_075425a8 = '\x01';
      }
      GStack_78.fields._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      GStack_78.fields._tail[0] = 0;
      GStack_78.fields._tail[1] = 0;
      GStack_78.fields._tail[2] = 0;
      GStack_78.fields._tail[3] = 0;
      GStack_78.fields._tail[4] = 0;
      GStack_78.fields._tail[5] = 0;
      GStack_78.fields._tail[6] = 0;
      GStack_78.fields._63_1_ = 0;
      GStack_78.fields.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
      GStack_78.fields.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
           (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
      GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
      GStack_78.fields._0_8_ = (char *)0x0;
      GStack_78.fields.__t__builder.fields.m_synchronizationContext =
           (System_Threading_SynchronizationContext_o *)0x0;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&SStack_30,(MethodInfo *)0x0);
      __this_00 = &GStack_78.fields.__t__builder;
      GStack_78.fields.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
           SStack_30.fields.m_coreState.fields.m_defaultContextAction;
      GStack_78.fields.__t__builder.fields.m_task = SStack_30.fields.m_task;
      GStack_78.fields.__t__builder.fields.m_synchronizationContext =
           SStack_30.fields.m_synchronizationContext;
      GStack_78.fields.__t__builder.fields.m_coreState.fields.m_stateMachine =
           SStack_30.fields.m_coreState.fields.m_stateMachine;
      Il2CppCodeGenWriteBarrier((void **)__this_00);
      GStack_78.fields.__4__this = __this;
      Il2CppCodeGenWriteBarrier(&GStack_78.fields.__4__this);
      GStack_78.fields.__1__state = 0xffffffff;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
                (__this_00,&GStack_78,
                 (MethodInfo_3413100 *)
                 MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
                );
    }
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshRootLayout
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x530f2e0

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayout(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields GStack_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o SStack_30;
  
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  GStack_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78._tail[0] = 0;
  GStack_78._tail[1] = 0;
  GStack_78._tail[2] = 0;
  GStack_78._tail[3] = 0;
  GStack_78._tail[4] = 0;
  GStack_78._tail[5] = 0;
  GStack_78._tail[6] = 0;
  GStack_78._63_1_ = 0;
  GStack_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  GStack_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  GStack_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  GStack_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  GStack_78.__1__state = 0;
  GStack_78._pad_8[0] = 0;
  GStack_78._pad_8[1] = 0;
  GStack_78._pad_8[2] = 0;
  GStack_78._pad_8[3] = 0;
  GStack_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&SStack_30,(MethodInfo *)0x0);
  GStack_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       SStack_30.fields.m_coreState.fields.m_defaultContextAction;
  GStack_78.__t__builder.fields.m_task = SStack_30.fields.m_task;
  GStack_78.__t__builder.fields.m_synchronizationContext = SStack_30.fields.m_synchronizationContext;
  GStack_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       SStack_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&GStack_78.__t__builder);
  GStack_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&GStack_78.__4__this);
  GStack_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&GStack_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&GStack_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshRootLayoutImmediate
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5314ad0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5314ada: mov rbx, rdi
// asm:   0x5314add: lea r14, [rip + 0x1f6690c]  ; TypeInfo_UnityEngine_Object
// asm:   0x5314ae4: nop word ptr cs:[rax + rax]

void Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *x;
  bool bVar1;
  MethodInfo *method_00;
  
  if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    do {
      if (Il2CppMethodInitialized_075425a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_075425a5 = '\x01';
      }
      x = (__this->fields)._parentNode;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_00 = (MethodInfo *)0x0;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        Gilzoide_FlexUi_FlexLayout__RefreshLayout(__this,method_00);
        return;
      }
      __this = (__this->fields)._parentNode;
    } while (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$Compare
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayout__Compare (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* x, Gilzoide_FlexUi_FlexLayout_o* y, const MethodInfo* method);
// 0x5314b50

int32_t Gilzoide_FlexUi_FlexLayout__Compare
                  (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *x,
                  Gilzoide_FlexUi_FlexLayout_o *y,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *method_00;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_075425a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425a9 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
  iVar2 = -1;
  if (bVar1) {
    if (x == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05314c20;
    pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(x,method_00);
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05314c20;
    iVar2 = UnityEngine_Transform__GetSiblingIndex((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
  }
  local_1c = iVar2;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  iVar2 = -1;
  if (bVar1) {
    if (y != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(y,(MethodInfo *)&g_data_ffffffff);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        iVar2 = UnityEngine_Transform__GetSiblingIndex((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
        goto label_05314c0a;
      }
    }
label_05314c20:
    ThrowNullReferenceException();
  }
label_05314c0a:
  iVar2 = System_Int32__CompareTo_54b7380(&local_1c,iVar2,(MethodInfo *)0x0);
  return iVar2;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshLayout
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshLayout (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5314830
// eh: try 0x5314a24..0x5314a66 -> pad 0x5314a6f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5314a87..0x5314a8c -> pad 0x5314aad cleanup
// eh: try 0x5314ab0..0x5314aba -> pad 0x5314ac2 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5314a6b: jmp 0x5314a6f
// asm:   0x5314a6d: jmp 0x5314a6f
// asm:   0x5314a6f: mov rbx, rax
// asm:   0x5314a72: cmp edx, 1
// asm:   0x5314a75: jne 0x5314ab0
// asm:   0x5314a77: mov rdi, rbx
// asm:   0x5314a7a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5314a7f: mov rbx, qword ptr [rax]
// asm:   0x5314a82: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5314a87: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5314a8c: lea rax, [rip + 0x1f79255]  ; MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose
// asm:   0x5314a93: mov rsi, qword ptr [rax]
// asm:   0x5314a96: lea rdi, [rsp + 0x10]
// asm:   0x5314a9b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5314aa0: test rbx, rbx
// asm:   0x5314aa3: je 0x5314a55
// asm:   0x5314aa5: mov rdi, rbx
// asm:   0x5314aa8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5314aad: mov rbx, rax
// asm:   0x5314ab0: lea rdi, [rsp + 0x30]
// asm:   0x5314ab5: call 0x2d479b0  ; il2cpp_runtime_helper_02d479b0()
// asm:   0x5314aba: mov rdi, rbx
// asm:   0x5314abd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5314ac2: mov rdi, rax
// asm:   0x5314ac5: call 0x2ab61e0  ; __clang_call_terminate()

void Gilzoide_FlexUi_FlexLayout__RefreshLayout(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Gilzoide_FlexUi_FlexLayout_o *x;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar4;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  undefined4 uVar6;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar7;
  Gilzoide_FlexUi_Yoga_YGNode_o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  char *local_68;
  System_Collections_Generic_List_Enumerator_T__o *local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_075425aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075425aa = '\x01';
  }
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_075425a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425a5 = '\x01';
  }
  x = (__this->fields)._parentNode;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,pMVar5);
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05314a66;
    pMVar5 = (MethodInfo *)0x0;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    local_38._8_4_ = in_XMM1_Dc;
    local_38._0_8_ = UVar7.fields._8_8_;
    local_38._12_4_ = in_XMM1_Dd;
    GVar4 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar5);
    local_90 = GVar4;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    iVar1 = (__this->fields)._direction;
    uVar6 = local_38._4_4_;
    if (g_data_07542600 == (code *)0x0) {
      local_68 = "flex-ui";
      local_60 = (System_Collections_Generic_List_Enumerator_T__o *)0x7;
      local_58 = "FlexUi_NodeCalculateLayout";
      local_50 = 0x1a;
      local_48 = 0x200000000;
      local_40 = 0x14;
      local_3c = 0;
      local_28 = local_38._4_4_;
      uStack_24 = local_38._4_4_;
      uStack_20 = local_38._4_4_;
      uStack_1c = local_38._4_4_;
      g_data_07542600 = (code *)il2cpp_runtime_helper_03123230(&local_68);
      uVar6 = local_28;
    }
    (*g_data_07542600)(local_38._0_4_,uVar6,GVar4.fields._nodePtr,iVar1);
  }
  else {
    local_90 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,pMVar5);
    pUVar3 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,pMVar5);
    Gilzoide_FlexUi_Yoga_YGNode__ApplyTo(&local_90,pUVar3,method_00);
  }
  __this_00 = (__this->fields)._childrenNodes;
  if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    local_68 = (char *)0x0;
    local_60 = &local_88;
    while( true ) {
      pMVar5 = MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_88,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&local_88,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
        return;
      }
      if ((Gilzoide_FlexUi_FlexLayout_o *)local_88.fields._current == (Gilzoide_FlexUi_FlexLayout_o *)0x0)
      break;
      Gilzoide_FlexUi_FlexLayout__RefreshLayout
                ((Gilzoide_FlexUi_FlexLayout_o *)local_88.fields._current,pMVar5);
    }
    ThrowNullReferenceException();
  }
label_05314a66:
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$UpdateNodeStyle
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53130e0

void Gilzoide_FlexUi_FlexLayout__UpdateNodeStyle(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Gilzoide_FlexUi_FlexLayoutConfig_o *pGVar2;
  bool bVar3;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar4;
  intptr_t iVar5;
  MethodInfo *in_RCX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  float fVar6;
  undefined1 auVar7 [16];
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  float local_2c;
  Gilzoide_FlexUi_Yoga_YGNode_o local_28;
  
  if (Il2CppMethodInitialized_075425ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425ab = '\x01';
  }
  GVar4 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method);
  pGVar2 = (__this->fields)._configuration;
  local_28 = GVar4;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar2,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar2 = (__this->fields)._configuration;
    if (pGVar2 == (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_07 = (MethodInfo *)(pGVar2->fields)._config.fields._configPtr;
    auVar7._8_8_ = extraout_RDX;
    auVar7._0_8_ = method_07;
    if (method_07 == (MethodInfo *)0x0) {
      if ((pGVar2->fields)._isDefaultConfig == false) {
        in_RCX = g_data_075425c0;
        if (g_data_075425c0 == (MethodInfo *)0x0) {
          local_60 = "flex-ui";
          local_58 = 7;
          local_50 = "FlexUi_ConfigNew";
          local_48 = 0x10;
          local_40 = 0x200000000;
          local_38 = 0;
          local_34 = 0;
          in_RCX = (MethodInfo *)il2cpp_runtime_helper_03123230(&local_60);
          g_data_075425c0 = in_RCX;
        }
      }
      else {
        in_RCX = g_data_075425d0;
        if (g_data_075425d0 == (MethodInfo *)0x0) {
          local_60 = "flex-ui";
          local_58 = 7;
          local_50 = "FlexUi_ConfigGetDefault";
          local_48 = 0x17;
          local_40 = 0x200000000;
          local_38 = 0;
          local_34 = 0;
          in_RCX = (MethodInfo *)il2cpp_runtime_helper_03123230(&local_60);
          g_data_075425d0 = in_RCX;
        }
      }
      iVar5 = (*(code *)in_RCX)();
      (pGVar2->fields)._config.fields._configPtr = iVar5;
      Gilzoide_FlexUi_FlexLayoutConfig__RefreshConfig(pGVar2,method_07);
      auVar7._8_8_ = extraout_RDX_00;
      auVar7._0_8_ = (pGVar2->fields)._config.fields._configPtr;
    }
  }
  else {
    if (g_data_075425d0 == (MethodInfo *)0x0) {
      local_60 = "flex-ui";
      local_58 = 7;
      local_50 = "FlexUi_ConfigGetDefault";
      local_48 = 0x17;
      local_40 = 0x200000000;
      local_38 = 0;
      local_34 = 0;
      g_data_075425d0 = (MethodInfo *)il2cpp_runtime_helper_03123230(&local_60);
    }
    in_RCX = g_data_075425d0;
    auVar7 = (*(code *)g_data_075425d0)();
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetConfig
            (&local_28,(Gilzoide_FlexUi_Yoga_YGConfig_Fields)auVar7._0_8_,auVar7._8_8_);
  if (g_data_075426b0 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetPositionType";
    local_48 = 0x1f;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    g_data_075426b0 = (code *)il2cpp_runtime_helper_03123230(&local_60);
  }
  (*g_data_075426b0)(GVar4.fields._nodePtr);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            (&local_28,0,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionLeft.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            (&local_28,1,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionTop.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            (&local_28,2,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionRight.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
            (&local_28,3,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._positionBottom.fields,in_RCX);
  iVar1 = (__this->fields)._direction;
  if (g_data_07542680 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetDirection";
    local_48 = 0x1c;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    g_data_07542680 = (code *)il2cpp_runtime_helper_03123230(&local_60);
  }
  (*g_data_07542680)(GVar4.fields._nodePtr,iVar1);
  iVar1 = (__this->fields)._flexDirection;
  if (g_data_07542688 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetFlexDirection";
    local_48 = 0x20;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    g_data_07542688 = (code *)il2cpp_runtime_helper_03123230(&local_60);
  }
  (*g_data_07542688)(GVar4.fields._nodePtr,iVar1);
  iVar1 = (__this->fields)._flexWrap;
  if (g_data_075426b8 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetFlexWrap";
    local_48 = 0x1b;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    g_data_075426b8 = (code *)il2cpp_runtime_helper_03123230(&local_60);
  }
  (*g_data_075426b8)(GVar4.fields._nodePtr,iVar1);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
            (&local_28,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._flexBasis.fields,method_00);
  fVar6 = (__this->fields)._flexGrow;
  if (g_data_075426c0 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetFlexGrow";
    local_48 = 0x1b;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    local_2c = fVar6;
    g_data_075426c0 = (code *)il2cpp_runtime_helper_03123230(&local_60);
    fVar6 = local_2c;
  }
  (*g_data_075426c0)(fVar6,GVar4.fields._nodePtr);
  fVar6 = (__this->fields)._flexShrink;
  if (g_data_075426c8 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetFlexShrink";
    local_48 = 0x1d;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    local_2c = fVar6;
    g_data_075426c8 = (code *)il2cpp_runtime_helper_03123230(&local_60);
    fVar6 = local_2c;
  }
  (*g_data_075426c8)(fVar6,GVar4.fields._nodePtr);
  iVar1 = (__this->fields)._justifyContent;
  if (g_data_07542690 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetJustifyContent";
    local_48 = 0x21;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    g_data_07542690 = (code *)il2cpp_runtime_helper_03123230(&local_60);
  }
  (*g_data_07542690)(GVar4.fields._nodePtr,iVar1);
  iVar1 = (__this->fields)._alignItems;
  if (g_data_075426a0 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetAlignItems";
    local_48 = 0x1d;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    g_data_075426a0 = (code *)il2cpp_runtime_helper_03123230(&local_60);
  }
  (*g_data_075426a0)(GVar4.fields._nodePtr,iVar1);
  iVar1 = (__this->fields)._alignSelf;
  if (g_data_075426a8 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetAlignSelf";
    local_48 = 0x1c;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    g_data_075426a8 = (code *)il2cpp_runtime_helper_03123230(&local_60);
  }
  (*g_data_075426a8)(GVar4.fields._nodePtr,iVar1);
  iVar1 = (__this->fields)._alignContent;
  if (g_data_07542698 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetAlignContent";
    local_48 = 0x1f;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    g_data_07542698 = (code *)il2cpp_runtime_helper_03123230(&local_60);
  }
  (*g_data_07542698)(GVar4.fields._nodePtr,iVar1);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth
            (&local_28,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._width.fields,method_01);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight
            (&local_28,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._height.fields,method_02);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
            (&local_28,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minWidth.fields,method_03);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
            (&local_28,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._minHeight.fields,method_04);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
            (&local_28,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxWidth.fields,method_05);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
            (&local_28,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._maxHeight.fields,method_06);
  fVar6 = (__this->fields)._aspectRatio.fields.Value;
  if (g_data_07542798 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetAspectRatio";
    local_48 = 0x1e;
    local_40 = 0x200000000;
    local_38 = 0xc;
    local_34 = 0;
    local_2c = fVar6;
    g_data_07542798 = (code *)il2cpp_runtime_helper_03123230(&local_60);
    fVar6 = local_2c;
  }
  (*g_data_07542798)(fVar6,GVar4.fields._nodePtr);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            (&local_28,0,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginLeft.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            (&local_28,1,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginTop.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            (&local_28,2,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginRight.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
            (&local_28,3,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._marginBottom.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            (&local_28,0,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingLeft.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            (&local_28,1,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingTop.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            (&local_28,2,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingRight.fields,in_RCX);
  Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
            (&local_28,3,(Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._paddingBottom.fields,in_RCX);
  fVar6 = (__this->fields)._gapColumn;
  if (g_data_07542720 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetGap";
    local_48 = 0x16;
    local_40 = 0x200000000;
    local_38 = 0x10;
    local_34 = 0;
    local_2c = fVar6;
    g_data_07542720 = (code *)il2cpp_runtime_helper_03123230(&local_60);
    fVar6 = local_2c;
  }
  (*g_data_07542720)(fVar6,GVar4.fields._nodePtr,0);
  fVar6 = (__this->fields)._gapRow;
  if (g_data_07542720 == (code *)0x0) {
    local_60 = "flex-ui";
    local_58 = 7;
    local_50 = "FlexUi_NodeStyleSetGap";
    local_48 = 0x16;
    local_40 = 0x200000000;
    local_38 = 0x10;
    local_34 = 0;
    local_2c = fVar6;
    g_data_07542720 = (code *)il2cpp_runtime_helper_03123230(&local_60);
    fVar6 = local_2c;
  }
  (*g_data_07542720)(fVar6,GVar4.fields._nodePtr,1);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$UpdateNodeMeasure
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5312ec0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5313051: mov rdi, rbx
// asm:   0x5313054: mov rsi, r15
// asm:   0x5313057: jmp 0x53130ce

void Gilzoide_FlexUi_FlexLayout__UpdateNodeMeasure(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGNode_o *__this_00;
  bool bVar1;
  int iVar2;
  UnityEngine_RectTransform_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  intptr_t iVar3;
  intptr_t iVar4;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  Il2CppMethodPointer local_20;
  
  if (Il2CppMethodInitialized_075425ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_TryGetComponent_ILayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_SetContext_RectTransform);
    Il2CppMethodInitialized_075425ac = '\x01';
  }
  local_20 = (Il2CppMethodPointer)0x0;
  iVar4 = (__this->fields)._layoutNode.fields._nodePtr;
  if (g_data_07542620 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeGetChildCount";
    local_38 = 0x18;
    local_30 = 0x200000000;
    local_28 = 8;
    local_24 = 0;
    g_data_07542620 = (code *)il2cpp_runtime_helper_03123230(&local_50);
  }
  __this_00 = &(__this->fields)._layoutNode;
  iVar2 = (*g_data_07542620)(iVar4);
  method_00 = extraout_RDX;
  if (iVar2 == 0) {
    method_01 = (MethodInfo *)&local_20;
    bVar1 = UnityEngine_Component__TryGetComponent_object_
                      ((UnityEngine_Component_o *)__this,(Il2CppObject **)method_01,
                       (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_ILayoutElement);
    method_00 = extraout_RDX_00;
    if (bVar1) {
      value = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,method_01);
      Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_
                (__this_00,(Il2CppObject *)value,
                 (MethodInfo_378E870 *)MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_SetContext_RectTransform);
      if ((TypeInfo_Gilzoide_FlexUi_FlexLayout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_FlexLayout);
      }
      iVar3 = TypeInfo_Gilzoide_FlexUi_FlexLayout->static_fields->RectTransformMeasureFuncPtr;
      iVar4 = (__this_00->fields)._nodePtr;
      if (g_data_07542640 == (code *)0x0) {
        local_50 = "flex-ui";
        local_48 = 7;
        local_40 = "FlexUi_NodeSetMeasureFunc";
        local_38 = 0x19;
        local_30 = 0x200000000;
        local_28 = 0x10;
        local_24 = 0;
        g_data_07542640 = (code *)il2cpp_runtime_helper_03123230(&local_50);
      }
      goto label_053130ce;
    }
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this_00,(System_Runtime_InteropServices_GCHandle_o)0x0,method_00);
  iVar4 = (__this_00->fields)._nodePtr;
  if (g_data_07542640 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeSetMeasureFunc";
    local_38 = 0x19;
    local_30 = 0x200000000;
    local_28 = 0x10;
    local_24 = 0;
    g_data_07542640 = (code *)il2cpp_runtime_helper_03123230(&local_50);
  }
  iVar3 = 0;
label_053130ce:
  (*g_data_07542640)(iVar4,iVar3);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshParent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshParent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5313a50

void Gilzoide_FlexUi_FlexLayout__RefreshParent(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o **targetAddress;
  Gilzoide_FlexUi_FlexLayout_o *y;
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *exists;
  MethodInfo *in_RCX;
  Gilzoide_FlexUi_FlexLayout_o *local_28;
  
  if (Il2CppMethodInitialized_075425ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425ad = '\x01';
  }
  local_28 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,method);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_05313c49;
  exists = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (bVar2) {
    if (exists == (UnityEngine_Transform_o *)0x0) goto label_05313c49;
    bVar2 = UnityEngine_Component__TryGetComponent_object_
                      ((UnityEngine_Component_o *)exists,(Il2CppObject **)&local_28,
                       (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
    if (bVar2) {
      if (local_28 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05313c49;
      bVar2 = (*(local_28->klass->vtable)._9_IsActive.methodPtr)
                        (local_28,(local_28->klass->vtable)._9_IsActive.method);
      pGVar1 = local_28;
      if (bVar2) {
        y = (__this->fields)._parentNode;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        if (Il2CppMethodInitialized_075425ae == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_075425ae = '\x01';
        }
        pGVar1 = (__this->fields)._parentNode;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar1,(MethodInfo *)0x0);
        if (bVar2) {
          pGVar1 = (__this->fields)._parentNode;
          if (pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_05313c49;
          Gilzoide_FlexUi_FlexLayout__UntrackChild(pGVar1,__this,true,in_RCX);
        }
        if (local_28 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__TrackChild(local_28,__this,true,in_RCX);
          return;
        }
        goto label_05313c49;
      }
    }
  }
  if (Il2CppMethodInitialized_075425ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425ae = '\x01';
  }
  pGVar1 = (__this->fields)._parentNode;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._parentNode;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if (*targetAddress == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
label_05313c49:
      ThrowNullReferenceException();
    }
    Gilzoide_FlexUi_FlexLayout__UntrackChild(*targetAddress,__this,true,in_RCX);
  }
  *targetAddress = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$ClearParent
// il2cpp: void Gilzoide_FlexUi_FlexLayout__ClearParent (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5314050

void Gilzoide_FlexUi_FlexLayout__ClearParent(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  bool bVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075425ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425ae = '\x01';
  }
  pGVar1 = (__this->fields)._parentNode;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pGVar1,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._parentNode;
    if (pGVar1 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gilzoide_FlexUi_FlexLayout__UntrackChild(pGVar1,__this,true,in_RCX);
    return;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayout$$RefreshChildren
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshChildren (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5313c50
// eh: try 0x5313d5f..0x5313f5e -> pad 0x5313f79 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5313f93..0x5313f98 -> pad 0x5313f9d cleanup
// eh: try 0x5313fa0..0x5313faa -> pad 0x5313fb2 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5313d4e: nop 
// asm:   0x5313f63: mov rdi, r14
// asm:   0x5313f66: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5313f6b: jmp 0x5313f7b
// asm:   0x5313f6d: jmp 0x5313f7b
// asm:   0x5313f6f: jmp 0x5313f7b
// asm:   0x5313f71: jmp 0x5313f7b
// asm:   0x5313f73: jmp 0x5313f7b
// asm:   0x5313f75: jmp 0x5313f7b
// asm:   0x5313f77: jmp 0x5313f7b
// asm:   0x5313f79: jmp 0x5313f7b
// asm:   0x5313f7b: mov rbx, rax
// asm:   0x5313f7e: cmp edx, 1
// asm:   0x5313f81: jne 0x5313fa0
// asm:   0x5313f83: mov rdi, rbx
// asm:   0x5313f86: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5313f8b: mov r14, qword ptr [rax]
// asm:   0x5313f8e: mov qword ptr [rsp + 0x20], r14
// asm:   0x5313f93: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5313f98: jmp 0x5313ea8
// asm:   0x5313f9d: mov rbx, rax
// asm:   0x5313fa0: lea rdi, [rsp + 0x20]
// asm:   0x5313fa5: call 0x2d479e0  ; il2cpp_runtime_helper_02d479e0()
// asm:   0x5313faa: mov rdi, rbx
// asm:   0x5313fad: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5313fb2: mov rdi, rax
// asm:   0x5313fb5: call 0x2ab61e0  ; __clang_call_terminate()

void Gilzoide_FlexUi_FlexLayout__RefreshChildren(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *__this_00;
  VirtualInvokeData *pVVar5;
  UnityEngine_Component_o *__this_01;
  Il2CppObject *pIVar6;
  ulong uVar7;
  MethodInfo *method_00;
  System_IDisposable_c *method_01;
  long lVar8;
  Il2CppObject *pIStack_60;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_58;
  Il2CppObject *pIStack_50;
  undefined8 uStack_48;
  Il2CppObject **ppIStack_40;
  Il2CppObject **ppIStack_38;
  
  if (Il2CppMethodInitialized_075425af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_075425af = '\x01';
  }
  pGStack_58 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pIStack_50 = (Il2CppObject *)0x0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform(__this,method);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIStack_60 = (Il2CppObject *)
               UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  uStack_48 = 0;
  ppIStack_40 = &pIStack_60;
  ppIStack_38 = &pIStack_50;
  if (pIStack_60 != (Il2CppObject *)0x0) {
    do {
      pIVar6 = pIStack_60;
      pIVar2 = pIStack_60->klass;
      uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
            goto label_05313d83;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05313d83:
      bVar4 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
      pIVar6 = pIStack_60;
      if (!bVar4) {
        method_01 = TypeInfo_System_IDisposable;
        pIVar6 = il2cpp_vm_Object_IsInst(pIStack_60,(Il2CppClass *)TypeInfo_System_IDisposable);
        pIStack_50 = pIVar6;
        if (pIVar6 == (Il2CppObject *)0x0) goto label_05313f26;
        pIVar2 = pIVar6->klass;
        uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar7 == 0) goto label_05313eff;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar8 = 0;
        goto label_05313ef0;
      }
      if (pIStack_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIStack_60->klass;
      uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
            goto label_05313e17;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05313e17:
      __this_01 = (UnityEngine_Component_o *)(*pVVar5->methodPtr)(pIVar6,pVVar5->method);
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         (method_00 = (MethodInfo *)(__this_01->klass->_2).typeHierarchy,
         *(UnityEngine_Transform_c **)((long)method_00 + (ulong)bVar1 * 8 + -8) !=
         TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
      bVar4 = UnityEngine_Component__TryGetComponent_object_
                        (__this_01,(Il2CppObject **)&pGStack_58,
                         (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_FlexLayout);
      if (bVar4) {
        if (pGStack_58 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = (*(pGStack_58->klass->vtable)._9_IsActive.methodPtr)
                          (pGStack_58,(pGStack_58->klass->vtable)._9_IsActive.method);
        if (bVar4) {
          Gilzoide_FlexUi_FlexLayout__TrackChild(__this,pGStack_58,false,method_00);
        }
      }
    } while (pIStack_60 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
label_05313ef0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
      goto label_05313f1d;
    }
  }
label_05313eff:
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05313f1d:
  method_01 = (System_IDisposable_c *)pVVar5->method;
  (*pVVar5->methodPtr)(pIVar6,(MethodInfo *)method_01);
label_05313f26:
  Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,(MethodInfo *)method_01);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$TrackChild
// il2cpp: void Gilzoide_FlexUi_FlexLayout__TrackChild (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* child, bool callChildrenChanged, const MethodInfo* method);
// 0x5315130
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53151b0: test r14b, r14b
// asm:   0x53151b3: je 0x5315211

void Gilzoide_FlexUi_FlexLayout__TrackChild
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *child,
               bool callChildrenChanged,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *pSVar1;
  uint uVar2;
  Gilzoide_FlexUi_Yoga_YGNode_o in_RAX;
  Gilzoide_FlexUi_Yoga_YGNode_o child_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gilzoide_FlexUi_Yoga_YGNode_o local_28;
  
  local_28.fields._nodePtr = in_RAX.fields._nodePtr;
  if (Il2CppMethodInitialized_075425b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FlexLayout_BinarySearch);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FlexLayout_Insert);
    Il2CppMethodInitialized_075425b0 = '\x01';
  }
  if (child != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    (child->fields)._parentNode = __this;
    Il2CppCodeGenWriteBarrier(&(child->fields)._parentNode);
    pSVar1 = (__this->fields)._childrenNodes;
    if (pSVar1 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      child_00.fields._nodePtr = (Gilzoide_FlexUi_Yoga_YGNode_Fields)(Gilzoide_FlexUi_Yoga_YGNode_Fields)child
      ;
      uVar2 = System_Collections_Generic_List_object___BinarySearch_395d630
                        ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)child,
                         (System_Collections_Generic_IComparer_T__o *)__this,
                         (MethodInfo_395D630 *)
                         MethodInfo_System_Collections_Generic_List_FlexLayout_BinarySearch);
      if ((int)uVar2 < 0) {
        pSVar1 = (__this->fields)._childrenNodes;
        if (pSVar1 == (System_Collections_Generic_List_FlexLayout__o *)0x0) goto label_0531521c;
        uVar2 = ~uVar2;
        method_01 = (MethodInfo *)(ulong)uVar2;
        method_00 = MethodInfo_System_Collections_Generic_List_FlexLayout_Insert;
        System_Collections_Generic_List_object___Insert
                  ((System_Collections_Generic_List_object__o *)pSVar1,uVar2,(Il2CppObject *)child,
                   (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_FlexLayout_Insert);
        local_28 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method_01);
        child_00 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(child,method_01);
        Gilzoide_FlexUi_Yoga_YGNode__InsertChild(&local_28,child_00,uVar2,method_00);
      }
      if (callChildrenChanged) {
        Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,(MethodInfo *)child_00.fields._nodePtr);
        return;
      }
      return;
    }
  }
label_0531521c:
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$UntrackChild
// il2cpp: void Gilzoide_FlexUi_FlexLayout__UntrackChild (Gilzoide_FlexUi_FlexLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* child, bool callChildrenChanged, const MethodInfo* method);
// 0x5315230

void Gilzoide_FlexUi_FlexLayout__UntrackChild
               (Gilzoide_FlexUi_FlexLayout_o *__this,Gilzoide_FlexUi_FlexLayout_o *child,
               bool callChildrenChanged,MethodInfo *method)

{
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar1;
  Gilzoide_FlexUi_Yoga_YGNode_o GVar2;
  MethodInfo *method_00;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (Il2CppMethodInitialized_075425b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FlexLayout_Remove);
    Il2CppMethodInitialized_075425b1 = '\x01';
  }
  if (child != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    (child->fields)._parentNode = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    method_00 = (MethodInfo *)0x0;
    Il2CppCodeGenWriteBarrier(&(child->fields)._parentNode);
    GVar1 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(__this,method_00);
    GVar2 = Gilzoide_FlexUi_FlexLayout__get_LayoutNode(child,method_00);
    if (g_data_07542610 == (code *)0x0) {
      local_58 = "flex-ui";
      local_50 = 7;
      local_48 = "FlexUi_NodeRemoveChild";
      local_40 = 0x16;
      local_38 = 0x200000000;
      local_30 = 0x10;
      local_2c = 0;
      g_data_07542610 = (code *)il2cpp_runtime_helper_03123230(&local_58);
    }
    (*g_data_07542610)(GVar1.fields._nodePtr,GVar2.fields._nodePtr);
    __this_00 = (__this->fields)._childrenNodes;
    if (__this_00 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)child,
                 (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_FlexLayout_Remove);
      if (callChildrenChanged) {
        Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(__this,(MethodInfo *)child);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$RefreshDrivenRectTransformTracker
// il2cpp: void Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53155e0
// eh: try 0x5315694..0x53156ea -> pad 0x53156f1 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x531570b..0x5315710 -> pad 0x531572f cleanup
// eh: try 0x5315732..0x531573c -> pad 0x5315744 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5315689: nop dword ptr [rax]
// asm:   0x53156ef: jmp 0x53156f3
// asm:   0x53156f1: jmp 0x53156f3
// asm:   0x53156f3: mov rbx, rax
// asm:   0x53156f6: cmp edx, 1
// asm:   0x53156f9: jne 0x5315732
// asm:   0x53156fb: mov rdi, rbx
// asm:   0x53156fe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5315703: mov rbx, qword ptr [rax]
// asm:   0x5315706: mov qword ptr [rsp + 0x18], rbx
// asm:   0x531570b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5315710: lea rax, [rip + 0x1f785d1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose
// asm:   0x5315717: mov rsi, qword ptr [rax]
// asm:   0x531571a: mov rdi, rsp
// asm:   0x531571d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5315722: test rbx, rbx
// asm:   0x5315725: je 0x53156d9
// asm:   0x5315727: mov rdi, rbx
// asm:   0x531572a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x531572f: mov rbx, rax
// asm:   0x5315732: lea rdi, [rsp + 0x18]
// asm:   0x5315737: call 0x2d47a80  ; il2cpp_runtime_helper_02d47a80()
// asm:   0x531573c: mov rdi, rbx
// asm:   0x531573f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5315744: mov rdi, rax
// asm:   0x5315747: call 0x2ab61e0  ; __clang_call_terminate()

void Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker
               (Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  UnityEngine_DrivenRectTransformTracker_o *__this_00;
  System_Collections_Generic_List_FlexLayout__o *__this_01;
  bool bVar1;
  UnityEngine_RectTransform_o *rectTransform;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_075425b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    Il2CppMethodInitialized_075425b2 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = &(__this->fields)._drivenRectTransformTracker;
  UnityEngine_DrivenRectTransformTracker__Clear(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields)._childrenNodes;
  if (__this_01 == (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
  local_30 = 0;
  local_28 = (undefined1 *)&local_48;
  while( true ) {
    method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext;
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
      return;
    }
    if ((Gilzoide_FlexUi_FlexLayout_o *)local_48.fields._current == (Gilzoide_FlexUi_FlexLayout_o *)0x0)
    break;
    rectTransform =
         Gilzoide_FlexUi_FlexLayout__get_RectTransform
                   ((Gilzoide_FlexUi_FlexLayout_o *)local_48.fields._current,method_00);
    UnityEngine_DrivenRectTransformTracker__Add
              (__this_00,(UnityEngine_Object_o *)__this,rectTransform,0x3f06,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$OnChildrenChanged
// il2cpp: void Gilzoide_FlexUi_FlexLayout__OnChildrenChanged (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x5315340

void Gilzoide_FlexUi_FlexLayout__OnChildrenChanged(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_Fields local_78;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder_o local_30;
  
  Gilzoide_FlexUi_FlexLayout__RefreshDrivenRectTransformTracker(__this,method);
  if (Il2CppMethodInitialized_075425a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
              );
    Il2CppMethodInitialized_075425a8 = '\x01';
  }
  local_78._root_5__2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78._tail[0] = 0;
  local_78._tail[1] = 0;
  local_78._tail[2] = 0;
  local_78._tail[3] = 0;
  local_78._tail[4] = 0;
  local_78._tail[5] = 0;
  local_78._tail[6] = 0;
  local_78._63_1_ = 0;
  local_78.__t__builder.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
  local_78.__4__this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction = (System_Action_o *)0x0;
  local_78.__1__state = 0;
  local_78._pad_8[0] = 0;
  local_78._pad_8[1] = 0;
  local_78._pad_8[2] = 0;
  local_78._pad_8[3] = 0;
  local_78.__t__builder.fields.m_synchronizationContext = (System_Threading_SynchronizationContext_o *)0x0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_30,(MethodInfo *)0x0);
  local_78.__t__builder.fields.m_coreState.fields.m_defaultContextAction =
       local_30.fields.m_coreState.fields.m_defaultContextAction;
  local_78.__t__builder.fields.m_task = local_30.fields.m_task;
  local_78.__t__builder.fields.m_synchronizationContext = local_30.fields.m_synchronizationContext;
  local_78.__t__builder.fields.m_coreState.fields.m_stateMachine =
       local_30.fields.m_coreState.fields.m_stateMachine;
  Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_FlexLayout__RefreshRootLayout_d__155_
            (&local_78.__t__builder,(Gilzoide_FlexUi_FlexLayout__RefreshRootLayout_d__155_o *)&local_78,
             (MethodInfo_3413100 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_FlexLayout_RefreshRootLayout_d__155
            );
  return;
}


// Gilzoide.FlexUi.FlexLayout$$ClearTrackedChildren
// il2cpp: void Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53140d0
// eh: try 0x53141a4..0x53142ec -> pad 0x53142fd (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5314314..0x5314319 -> pad 0x531433e cleanup
// eh: try 0x5314341..0x5314349 -> pad 0x5314351 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531419c: nop dword ptr [rax]
// asm:   0x53142f1: jmp 0x53142fd
// asm:   0x53142f3: jmp 0x53142fd
// asm:   0x53142f5: jmp 0x53142fd
// asm:   0x53142f7: jmp 0x53142fd
// asm:   0x53142f9: jmp 0x53142fd
// asm:   0x53142fb: jmp 0x53142fd
// asm:   0x53142fd: mov rbx, rax
// asm:   0x5314300: cmp edx, 1
// asm:   0x5314303: jne 0x5314341
// asm:   0x5314305: mov rdi, rbx
// asm:   0x5314308: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x531430d: mov rbx, qword ptr [rax]
// asm:   0x5314310: mov qword ptr [rsp], rbx
// asm:   0x5314314: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5314319: lea rax, [rip + 0x1f799c8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose
// asm:   0x5314320: mov rsi, qword ptr [rax]
// asm:   0x5314323: lea rdi, [rsp + 0x30]
// asm:   0x5314328: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x531432d: test rbx, rbx
// asm:   0x5314330: je 0x5314239
// asm:   0x5314336: mov rdi, rbx
// asm:   0x5314339: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x531433e: mov rbx, rax
// asm:   0x5314341: mov rdi, rsp
// asm:   0x5314344: call 0x2d47ab0  ; il2cpp_runtime_helper_02d47ab0()
// asm:   0x5314349: mov rdi, rbx
// asm:   0x531434c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5314351: mov rdi, rax
// asm:   0x5314354: call 0x2ab61e0  ; __clang_call_terminate()

void Gilzoide_FlexUi_FlexLayout__ClearTrackedChildren(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_FlexLayout__o *pSVar2;
  UnityEngine_Object_o *x;
  long lVar3;
  UnityEngine_Object_o *exists;
  bool bVar4;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  UnityEngine_Object_o *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_075425b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FlexLayout_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075425b3 = '\x01';
  }
  UnityEngine_DrivenRectTransformTracker__Clear
            (&(__this->fields)._drivenRectTransformTracker,(MethodInfo *)0x0);
  pSVar2 = (__this->fields)._childrenNodes;
  if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
               (System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_FlexLayout_GetEnumerator);
    local_38 = local_68;
    local_48._0_8_ = local_78;
    local_48._8_8_ = pSStack_70;
    local_78 = (undefined1  [8])0x0;
    pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_MoveNext);
      exists = local_38;
      if (!bVar4) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if (bVar4) {
        if (exists == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        x = (UnityEngine_Object_o *)(*(uint64_t *)((char *)exists + 0x100));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        if (bVar4) {
          (*(uint64_t *)((char *)exists + 0x100)) = 0;
          Il2CppCodeGenWriteBarrier((void **)&exists[10].fields);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_FlexLayout_Dispose)
    ;
    pSVar2 = (__this->fields)._childrenNodes;
    if (pSVar2 != (System_Collections_Generic_List_FlexLayout__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      lVar3 = (__this->fields)._layoutNode.fields._nodePtr;
      if (lVar3 != 0) {
        if (g_data_07542618 == (code *)0x0) {
          local_78 = (undefined1  [8])0xfe0b86;
          pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x7;
          local_68 = (UnityEngine_Object_o *)0xfc894f;
          local_60 = 0x1c;
          local_58 = 0x200000000;
          local_50 = 8;
          local_4c = 0;
          g_data_07542618 = (code *)il2cpp_runtime_helper_03123230(local_78);
        }
        (*g_data_07542618)(lVar3);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.FlexLayout$$RectTransformMeasureFunc
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_FlexLayout__RectTransformMeasureFunc (intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, const MethodInfo* method);
// 0x530ea10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x530ea78: cmp r14d, 2
// asm:   0x530ea7c: je 0x530eab3
// asm:   0x530eaa9: movaps xmmword ptr [rsp], xmm1
// asm:   0x530eaad: cmp r14d, 2

UnityEngine_Vector2_o
Gilzoide_FlexUi_FlexLayout__RectTransformMeasureFunc
          (intptr_t nodePtr,float width,int32_t widthMode,float height,int32_t heightMode,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *rect;
  float fVar2;
  Gilzoide_FlexUi_Yoga_YGNode_o local_30;
  float local_28;
  
  local_28 = height;
  if (Il2CppMethodInitialized_075425b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_GetContext_RectTransform);
    Il2CppMethodInitialized_075425b4 = '\x01';
  }
  local_30.fields._nodePtr = (Gilzoide_FlexUi_Yoga_YGNode_Fields)(Gilzoide_FlexUi_Yoga_YGNode_Fields)nodePtr;
  rect = Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_
                   (&local_30,
                    (MethodInfo_378E6D0 *)MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_GetContext_RectTransform);
  if (widthMode == 2) {
    fVar2 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(rect,(MethodInfo *)0x0);
    if (fVar2 <= width) {
      width = fVar2;
    }
  }
  else if (widthMode == 0) {
    width = UnityEngine_UI_LayoutUtility__GetPreferredWidth(rect,(MethodInfo *)0x0);
  }
  if (heightMode == 2) {
    fVar2 = UnityEngine_UI_LayoutUtility__GetPreferredHeight(rect,(MethodInfo *)0x0);
    if (fVar2 <= local_28) {
      local_28 = fVar2;
    }
  }
  else if (heightMode == 0) {
    local_28 = UnityEngine_UI_LayoutUtility__GetPreferredHeight(rect,(MethodInfo *)0x0);
  }
  UVar1.fields.y = local_28;
  UVar1.fields.x = width;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gilzoide.FlexUi.FlexLayout$$.ctor
// il2cpp: void Gilzoide_FlexUi_FlexLayout___ctor (Gilzoide_FlexUi_FlexLayout_o* __this, const MethodInfo* method);
// 0x53157d0

void Gilzoide_FlexUi_FlexLayout___ctor(Gilzoide_FlexUi_FlexLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_c *pGVar1;
  System_Collections_Generic_List_FlexLayout__o *__this_00;
  
  if (Il2CppMethodInitialized_075425b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FlexLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_075425b5 = '\x01';
  }
  (__this->fields)._positionType = 1;
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  pGVar1 = TypeInfo_Gilzoide_FlexUi_Yoga_YGValue;
  (__this->fields)._positionLeft.fields =
       (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  (__this->fields)._positionTop.fields = (pGVar1->static_fields->Undefined).fields;
  (__this->fields)._positionRight.fields = (pGVar1->static_fields->Undefined).fields;
  (__this->fields)._positionBottom.fields = (pGVar1->static_fields->Undefined).fields;
  (__this->fields)._flexDirection = 2;
  (__this->fields)._flexWrap = 1;
  (__this->fields)._flexBasis.fields = (pGVar1->static_fields->Auto).fields;
  (__this->fields)._flexShrink = 1.0;
  (__this->fields)._alignItems = 1;
  (__this->fields)._width.fields = (pGVar1->static_fields->Auto).fields;
  (__this->fields)._height.fields = (pGVar1->static_fields->Auto).fields;
  (__this->fields)._minWidth.fields = (pGVar1->static_fields->Undefined).fields;
  (__this->fields)._minHeight.fields = (pGVar1->static_fields->Undefined).fields;
  (__this->fields)._maxWidth.fields = (pGVar1->static_fields->Undefined).fields;
  (__this->fields)._maxHeight.fields = (pGVar1->static_fields->Undefined).fields;
  (__this->fields)._aspectRatio.fields = (pGVar1->static_fields->Undefined).fields;
  (__this->fields)._marginLeft.fields = (pGVar1->static_fields->Zero).fields;
  (__this->fields)._marginTop.fields = (pGVar1->static_fields->Zero).fields;
  (__this->fields)._marginRight.fields = (pGVar1->static_fields->Zero).fields;
  (__this->fields)._marginBottom.fields = (pGVar1->static_fields->Zero).fields;
  (__this->fields)._paddingLeft.fields = (pGVar1->static_fields->Zero).fields;
  (__this->fields)._paddingTop.fields = (pGVar1->static_fields->Zero).fields;
  (__this->fields)._paddingRight.fields = (pGVar1->static_fields->Zero).fields;
  (__this->fields)._paddingBottom.fields = (pGVar1->static_fields->Zero).fields;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FlexLayout);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_FlexLayout_ctor);
  (__this->fields)._childrenNodes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._childrenNodes);
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayout$$.cctor
// il2cpp: void Gilzoide_FlexUi_FlexLayout___cctor (const MethodInfo* method);
// 0x53159f0

void Gilzoide_FlexUi_FlexLayout___cctor(MethodInfo *method)

{
  uint8_t uVar1;
  MethodInfo *pMVar2;
  char cVar3;
  Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *d;
  undefined1 *puVar4;
  intptr_t iVar5;
  Il2CppObject *ex;
  
  if (Il2CppMethodInitialized_075425b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gilzoide_FlexUi_FlexLayout_RectTransformMeasureFunc);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Runtime_InteropServices_Marshal);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc);
    Il2CppMethodInitialized_075425b6 = '\x01';
  }
  d = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc);
  pMVar2 = MethodInfo_Gilzoide_FlexUi_FlexLayout_RectTransformMeasureFunc;
  (d->fields).method_ptr =
       (intptr_t)MethodInfo_Gilzoide_FlexUi_FlexLayout_RectTransformMeasureFunc->virtualMethodPointer;
  (d->fields).method = (intptr_t)pMVar2;
  (d->fields).m_target = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(d->fields).m_target);
  uVar1 = pMVar2->parameters_count;
  (d->fields).method_code = (intptr_t)d;
  cVar3 = il2cpp_runtime_helper_030d61c0();
  if (cVar3 == '\0') {
    ex = il2cpp_codegen_get_argument_exception
                   ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
    il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
  }
  if (uVar1 == 5) {
    puVar4 = &label_02d49c90;
  }
  else {
    puVar4 = (undefined1 *)(d->fields).method_ptr;
    (d->fields).method_code = (intptr_t)(d->fields).m_target;
  }
  (d->fields).invoke_impl = (intptr_t)puVar4;
  (d->fields).extra_arg = (intptr_t)&label_02d49c00;
  if ((TypeInfo_System_Runtime_InteropServices_Marshal->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Runtime_InteropServices_Marshal);
  }
  iVar5 = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_
                    ((Il2CppObject *)d,
                     (MethodInfo_35842A0 *)
                     MethodInfo_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc
                    );
  TypeInfo_Gilzoide_FlexUi_FlexLayout->static_fields->RectTransformMeasureFuncPtr = iVar5;
  return;
}


