// Type: ApplicationManagers.Api.AottgApiClient
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.Api/AottgApiClient.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$MoveNext
// il2cpp: void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this, const MethodInfo* method);
// 0x5e2a5d0
// eh: try 0x5e2a66e..0x5e2a688 -> pad 0x5e2ab0a catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e2a6df..0x5e2a8dd -> pad 0x5e2aa55 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_OperationCanceledException, TypeInfo_System_Exception]
// eh: try 0x5e2a9ee..0x5e2aa3a -> pad 0x5e2aa4c (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e2aa3a..0x5e2aa3f -> pad 0x5e2aa45 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_OperationCanceledException, TypeInfo_System_Exception]
// eh: try 0x5e2aa72..0x5e2aaf4 -> pad 0x5e2aafd (+3 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e2ab03..0x5e2ab08 -> pad 0x5e2abbc catch (...) [compiler noexcept guard]
// eh: try 0x5e2ab25..0x5e2abac -> pad 0x5e2abac (+1 call sites) cleanup
// eh: try 0x5e2abaf..0x5e2abb4 -> pad 0x5e2abbc catch (...) [compiler noexcept guard]
// asm: 99 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2a941: jmp 0x5e2a9af
// asm:   0x5e2a99f: nop 
// asm:   0x5e2aa3f: jmp 0x5e2aa57
// asm:   0x5e2aa41: jmp 0x5e2aa57
// asm:   0x5e2aa43: jmp 0x5e2aa57
// asm:   0x5e2aa45: jmp 0x5e2aa57
// asm:   0x5e2aa47: jmp 0x5e2ab0a
// asm:   0x5e2aa4c: jmp 0x5e2ab0a
// asm:   0x5e2aa51: jmp 0x5e2aa57
// asm:   0x5e2aa53: jmp 0x5e2aa57
// asm:   0x5e2aa55: jmp 0x5e2aa57
// asm:   0x5e2aa57: mov r15, rdx
// asm:   0x5e2aa5a: mov r14, rax
// asm:   0x5e2aa5d: cmp r15d, 1
// asm:   0x5e2aa61: jne 0x5e2ab10
// asm:   0x5e2aa67: mov rdi, r14
// asm:   0x5e2aa6a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2aa6f: mov rbx, rax
// asm:   0x5e2aa72: lea rdi, [rip + 0x1450abf]  ; TypeInfo_System_OperationCanceledException
// asm:   0x5e2aa79: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2aa7e: mov rcx, qword ptr [rbx]
// asm:   0x5e2aa81: mov rsi, qword ptr [rcx]
// asm:   0x5e2aa84: mov rdi, rax
// asm:   0x5e2aa87: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e2aa8c: test al, al
// asm:   0x5e2aa8e: je 0x5e2aad3
// asm:   0x5e2aa90: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2aa95: lea rax, [rip + 0x172bc2c]
// asm:   0x5e2aa9c: mov rax, qword ptr [rax + 0x90]
// asm:   0x5e2aaa3: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5e2aaaa: mov rbx, qword ptr [rax]
// asm:   0x5e2aaad: lea rdi, [rip + 0x14c8b3c]  ; "canceled"
// asm:   0x5e2aab4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2aab9: xor edi, edi
// asm:   0x5e2aabb: mov rsi, rbx
// asm:   0x5e2aabe: mov rdx, rax
// asm:   0x5e2aac1: xor ecx, ecx
// asm:   0x5e2aac3: mov r8d, 1
// asm:   0x5e2aac9: call 0x5e2a1f0  ; ApplicationManagers_Api_AottgApiResult__Fail()
// asm:   0x5e2aace: jmp 0x5e2a8dd
// asm:   0x5e2aad3: mov edi, 8
// asm:   0x5e2aad8: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e2aadd: mov rcx, qword ptr [rbx]
// asm:   0x5e2aae0: mov qword ptr [rax], rcx
// asm:   0x5e2aae3: lea rsi, [rip + 0x1002a16]
// asm:   0x5e2aaea: mov rdi, rax
// asm:   0x5e2aaed: xor edx, edx
// asm:   0x5e2aaef: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e2aaf4: jmp 0x5e2abac
// asm:   0x5e2aaf9: jmp 0x5e2ab0a
// asm:   0x5e2aafb: jmp 0x5e2ab0a
// asm:   0x5e2aafd: mov r15, rdx
// asm:   0x5e2ab00: mov r14, rax
// asm:   0x5e2ab03: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2ab08: jmp 0x5e2ab10
// asm:   0x5e2ab0a: mov r15, rdx
// asm:   0x5e2ab0d: mov r14, rax
// asm:   0x5e2ab10: cmp r15d, 1
// asm:   0x5e2ab14: jne 0x5e2abb4
// asm:   0x5e2ab1a: mov rdi, r14
// asm:   0x5e2ab1d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2ab22: mov rbx, rax
// asm:   0x5e2ab25: lea rdi, [rip + 0x144d594]  ; TypeInfo_System_Exception
// asm:   0x5e2ab2c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2ab31: mov rcx, qword ptr [rbx]
// asm:   0x5e2ab34: mov rsi, qword ptr [rcx]
// asm:   0x5e2ab37: mov rdi, rax
// asm:   0x5e2ab3a: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e2ab3f: test al, al
// asm:   0x5e2ab41: je 0x5e2ab8b
// asm:   0x5e2ab43: mov rbx, qword ptr [rbx]
// asm:   0x5e2ab46: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2ab4b: mov dword ptr [r12], 0xfffffffe
// asm:   0x5e2ab53: lea rdi, [r12 + 0x38]
// asm:   0x5e2ab58: mov qword ptr [r12 + 0x38], 0
// asm:   0x5e2ab61: xor esi, esi
// asm:   0x5e2ab63: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5e2ab68: add r12, 8
// asm:   0x5e2ab6c: lea rdi, [rip + 0x145c98d]  ; MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetException
// asm:   0x5e2ab73: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2ab78: mov rdi, r12
// asm:   0x5e2ab7b: mov rsi, rbx
// asm:   0x5e2ab7e: mov rdx, rax
// asm:   0x5e2ab81: call 0x2fe0820  ; il2cpp_runtime_helper_02fe0820()
// asm:   0x5e2ab86: jmp 0x5e2a9e1
// asm:   0x5e2ab8b: mov edi, 8
// asm:   0x5e2ab90: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e2ab95: mov rcx, qword ptr [rbx]
// asm:   0x5e2ab98: mov qword ptr [rax], rcx
// asm:   0x5e2ab9b: lea rsi, [rip + 0x100295e]
// asm:   0x5e2aba2: mov rdi, rax
// asm:   0x5e2aba5: xor edx, edx
// asm:   0x5e2aba7: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e2abac: mov r14, rax
// asm:   0x5e2abaf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2abb4: mov rdi, r14
// asm:   0x5e2abb7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e2abbc: mov rdi, rax
// asm:   0x5e2abbf: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext
               (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  Il2CppObject *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppClass *pIVar5;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse__o *pCVar6;
  short sVar7;
  char cVar8;
  ApplicationManagers_Api_AottgApiTransportRequest_o *pAVar9;
  VirtualInvokeData *pVVar10;
  Il2CppClass *pIVar11;
  ApplicationManagers_Api_AottgApiTransportResponse_o *response;
  ApplicationManagers_Api_AottgApiResult_o *pAVar12;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  System_Threading_CancellationToken_o in_RCX;
  ulong uVar13;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  long lVar14;
  Il2CppObject *local_88;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_80;
  undefined8 local_78;
  Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o local_68;
  Il2CppObject *local_48;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_40;
  int16_t local_38;
  undefined6 uStack_36;
  
  if (Il2CppMethodInitialized_0754850d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_AwaitUnsafeOnC
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetResult
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_IAottgApiTransport);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse_GetAwaiter);
    Il2CppMethodInitialized_0754850d = '\x01';
    in_RDX = extraout_RDX;
  }
  local_88 = (Il2CppObject *)0x0;
  pAStack_80 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
  local_78 = 0;
  if ((__this->fields).__1__state == 0) {
    pCVar6 = &(__this->fields).__u__1;
    local_78._0_2_ = (pCVar6->fields).task.fields.token;
    local_78._2_6_ = *(undefined6 *)&(pCVar6->fields).task.fields.field_0x12;
    local_88 = (Il2CppObject *)(__this->fields).__u__1.fields.task.fields.source;
    pAStack_80 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)
                 (__this->fields).__u__1.fields.task.fields.result;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    request = (__this->fields).request;
    if (request == (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
      pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
      __this_01 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(pIVar11);
      paramName = il2cpp_codegen_get_runtime_metadata(&"request");
      System_ArgumentNullException___ctor_5410f50(__this_01,paramName,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_ApplicationManagers_Api_AottgApiClient_SendAsync_d__4_MoveNext);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    __this_00 = (__this->fields).__4__this;
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ThrowNullReferenceException();
    }
    pAVar9 = ApplicationManagers_Api_AottgApiClient__BuildTransportRequest(__this_00,request,in_RDX);
    (__this->fields)._transportRequest_5__2 = pAVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._transportRequest_5__2);
    pIVar3 = (Il2CppObject *)(__this_00->fields)._transport;
    if (pIVar3 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    in_RCX.fields._source =
         (System_Threading_CancellationToken_Fields)(__this->fields).cancellationToken.fields._source;
    pAVar9 = (__this->fields)._transportRequest_5__2;
    pIVar11 = pIVar3->klass;
    uVar13 = (ulong)(pIVar11->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar4 = (pIVar11->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(ApplicationManagers_Api_IAottgApiTransport_c **)((long)&pIVar4->interfaceType + lVar14) ==
            TypeInfo_ApplicationManagers_Api_IAottgApiTransport) {
          pVVar10 = (VirtualInvokeData *)&pIVar11->vtable[*(int *)((long)&pIVar4->offset + lVar14)].methodPtr;
          goto label_05e2a72d;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar3,(Il2CppClass *)TypeInfo_ApplicationManagers_Api_IAottgApiTransport,0);
label_05e2a72d:
    (*pVVar10->methodPtr)(&local_68,pIVar3,pAVar9,in_RCX,pVVar10->method);
    local_38 = local_68.fields.token;
    uStack_36 = local_68.fields._18_6_;
    local_48 = (Il2CppObject *)local_68.fields.source;
    pAStack_40 = local_68.fields.result;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68.fields.result = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
    local_68.fields.token = 0;
    local_68.fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse_GetAwaiter->klass->_2).
         bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse_GetAwaiter->klass);
    }
    local_68.fields.token = local_38;
    local_68.fields._18_6_ = uStack_36;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_48;
    local_68.fields.result = pAStack_40;
    Il2CppCodeGenWriteBarrier((void **)&local_68);
    local_78._0_2_ = local_68.fields.token;
    local_78._2_6_ = local_68.fields._18_6_;
    local_88 = (Il2CppObject *)local_68.fields.source;
    pAStack_80 = local_68.fields.result;
    cVar8 = il2cpp_runtime_helper_045ee340(&local_88,
                         MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse_get_IsCompleted
                        );
    if (cVar8 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source =
           (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_88;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pAStack_80;
      pCVar6 = &(__this->fields).__u__1;
      (pCVar6->fields).task.fields.token = (int16_t)local_78;
      *(undefined6 *)&(pCVar6->fields).task.fields.field_0x12 = local_78._2_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      il2cpp_runtime_helper_032ecc50(&(__this->fields).__t__builder,&local_88,__this,
                   MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_AwaitUnsafeOnC
                  );
      return;
    }
  }
  pIVar3 = local_88;
  if (local_88 == (Il2CppObject *)0x0) {
    response = pAStack_80;
  }
  else {
    sVar7 = (int16_t)local_78;
    pIVar11 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse_GetResult->klass;
    if (((pIVar11->_2).bitflags1 & 1) == 0) {
      pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
    }
    pIVar11 = pIVar11->rgctx_data[5].klass;
    if (((pIVar11->_2).bitflags1 & 1) == 0) {
      pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
    }
    pIVar5 = pIVar3->klass;
    uVar13 = (ulong)(pIVar5->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar4 = (pIVar5->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar14) == pIVar11) {
          in_RCX.fields._source =
               (System_Threading_CancellationToken_Fields)
               &pIVar5->vtable[*(int *)((long)&pIVar4->offset + lVar14)].methodPtr;
          goto label_05e2a8bf;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    in_RCX.fields._source =
         (System_Threading_CancellationToken_Fields)GetInterfaceInvokeDataFromVTableSlowPath(pIVar3,pIVar11,0)
    ;
label_05e2a8bf:
    response = (ApplicationManagers_Api_AottgApiTransportResponse_o *)
               (**(code **)in_RCX.fields._source)
                         (pIVar3,(int)sVar7,*(undefined8 *)((long)in_RCX.fields._source + 8));
  }
  pAVar12 = ApplicationManagers_Api_AottgApiClient__HandleResponse
                      ((__this->fields).request,(__this->fields)._transportRequest_5__2,response,
                       (MethodInfo *)in_RCX.fields._source);
  (__this->fields).__1__state = -2;
  (__this->fields)._transportRequest_5__2 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transportRequest_5__2);
  pIVar3 = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
  if (pIVar3 == (Il2CppObject *)0x0) {
    (__this->fields).__t__builder.fields.result = pAVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__t__builder.fields.result);
    return;
  }
  pIVar11 = MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetResult
            ->klass;
  if (((pIVar11->_2).bitflags1 & 1) == 0) {
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
    pIVar11 = pIVar11->rgctx_data[1].klass;
    bVar1 = (pIVar11->_2).bitflags1;
  }
  else {
    pIVar11 = pIVar11->rgctx_data[1].klass;
    bVar1 = (pIVar11->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
    pIVar5 = pIVar3->klass;
    uVar2 = (pIVar5->_2).interface_offsets_count;
  }
  else {
    pIVar5 = pIVar3->klass;
    uVar2 = (pIVar5->_2).interface_offsets_count;
  }
  if ((ulong)uVar2 != 0) {
    pIVar4 = (pIVar5->_1).interfaceOffsets;
    lVar14 = 0;
    do {
      if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar14) == pIVar11) {
        pVVar10 = (VirtualInvokeData *)&pIVar5->vtable[*(int *)((long)&pIVar4->offset + lVar14) + 2].methodPtr
        ;
        goto label_05e2a9d5;
      }
      lVar14 = lVar14 + 0x10;
    } while ((ulong)uVar2 * 0x10 != lVar14);
  }
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3,pIVar11,2);
label_05e2a9d5:
  (*pVVar10->methodPtr)(pIVar3,pAVar12,pVVar10->method);
  return;
}


// ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$SetStateMachine
// il2cpp: void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__SetStateMachine (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5e2abd0

void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__SetStateMachine
               (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754850e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetStateMachin
              );
    Il2CppMethodInitialized_0754850e = '\x01';
  }
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_object___SetStateMachine
            ((Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_T__o *)
             &(__this->fields).__t__builder,stateMachine,
             (MethodInfo_41D2380 *)
             MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetStateMachin
            );
  return;
}


// ApplicationManagers.Api.AottgApiClient$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiClient___ctor (ApplicationManagers_Api_AottgApiClient_o* __this, const MethodInfo* method);
// 0x5e249e0

void ApplicationManagers_Api_AottgApiClient___ctor
               (ApplicationManagers_Api_AottgApiClient_o *__this,MethodInfo *method)

{
  System_Func_string__o *__this_00;
  Il2CppObject *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548503 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_07548503 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  method_00 = (MethodInfo *)0x0;
  System_Func_object____ctor
            ((System_Func_object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl,
             (MethodInfo_4F0C6A0 *)0x0);
  __this_01 = (Il2CppObject *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  ApplicationManagers_Api_AottgApiClient___ctor_5d29280
            (__this,__this_00,(ApplicationManagers_Api_IAottgApiTransport_o *)__this_01,method_00);
  return;
}


// ApplicationManagers.Api.AottgApiClient$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiClient___ctor (ApplicationManagers_Api_AottgApiClient_o* __this, System_Func_string__o* baseUrlProvider, ApplicationManagers_Api_IAottgApiTransport_o* transport, const MethodInfo* method);
// 0x5e29280

void ApplicationManagers_Api_AottgApiClient___ctor_5d29280
               (ApplicationManagers_Api_AottgApiClient_o *__this,System_Func_string__o *baseUrlProvider,
               ApplicationManagers_Api_IAottgApiTransport_o *transport,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548504 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_07548504 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (baseUrlProvider == (System_Func_string__o *)0x0) {
    baseUrlProvider = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
    System_Func_object____ctor
              ((System_Func_object__o *)baseUrlProvider,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl,
               (MethodInfo_4F0C6A0 *)0x0);
  }
  if (__this == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._baseUrlProvider = baseUrlProvider;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._baseUrlProvider);
  if (transport == (ApplicationManagers_Api_IAottgApiTransport_o *)0x0) {
    transport = (ApplicationManagers_Api_IAottgApiTransport_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
    System_Object___ctor((Il2CppObject *)transport,(MethodInfo *)0x0);
  }
  (__this->fields)._transport = transport;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transport);
  return;
}


// ApplicationManagers.Api.AottgApiClient$$SendAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_Api_AottgApiClient__SendAsync (ApplicationManagers_Api_AottgApiClient_o* __this, ApplicationManagers_Api_AottgApiRequest_o* request, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
// 0x5e24ad0

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_Api_AottgApiClient__SendAsync
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__,
          ApplicationManagers_Api_AottgApiClient_o *__this,ApplicationManagers_Api_AottgApiRequest_o *request,
          System_Threading_CancellationToken_o cancellationToken,MethodInfo *method)

{
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_Fields local_a8;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_48;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07548505 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_Create
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_Start_AottgApi
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_get_Task
              );
    Il2CppMethodInitialized_07548505 = '\x01';
  }
  local_a8.__1__state = 0;
  local_a8._4_4_ = 0;
  local_a8.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_a8.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_a8.cancellationToken.fields._source =
       (System_Threading_CancellationToken_Fields)(System_Threading_CancellationTokenSource_o *)0x0;
  local_a8._transportRequest_5__2 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
  local_a8.request = (ApplicationManagers_Api_AottgApiRequest_o *)0x0;
  local_a8.__4__this = (ApplicationManagers_Api_AottgApiClient_o *)0x0;
  local_a8.__u__1.fields.task.fields.token = 0;
  local_a8.__u__1.fields.task.fields._18_6_ = 0;
  local_a8.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o *)0x0;
  local_a8.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_a8.__t__builder.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_a8.__t__builder);
  local_a8.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_a8.__4__this);
  local_a8.request = request;
  Il2CppCodeGenWriteBarrier(&local_a8.request);
  method_00 = (MethodInfo *)0x0;
  local_a8.cancellationToken =
       (System_Threading_CancellationToken_o)
       (System_Threading_CancellationToken_o)cancellationToken.fields._source;
  Il2CppCodeGenWriteBarrier((void **)&local_a8.cancellationToken);
  local_a8.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_Start_AottgApi
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_Start_AottgApi
              );
  }
  ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext
            ((ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o *)&local_a8,method_00);
  il2cpp_runtime_helper_042dddd0(&local_48,&local_a8.__t__builder,
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_get_Task
              );
  *(undefined8 *)&(__return_storage_ptr__->fields).token = local_38;
  (__return_storage_ptr__->fields).source = local_48;
  (__return_storage_ptr__->fields).result = pAStack_40;
  return __return_storage_ptr__;
}


// ApplicationManagers.Api.AottgApiClient$$DefaultBaseUrl
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__DefaultBaseUrl (const MethodInfo* method);
// 0x5e29350

System_String_o * ApplicationManagers_Api_AottgApiClient__DefaultBaseUrl(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548506 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548506 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x60);
}


// ApplicationManagers.Api.AottgApiClient$$BuildTransportRequest
// il2cpp: ApplicationManagers_Api_AottgApiTransportRequest_o* ApplicationManagers_Api_AottgApiClient__BuildTransportRequest (ApplicationManagers_Api_AottgApiClient_o* __this, ApplicationManagers_Api_AottgApiRequest_o* request, const MethodInfo* method);
// 0x5e293c0

ApplicationManagers_Api_AottgApiTransportRequest_o *
ApplicationManagers_Api_AottgApiClient__BuildTransportRequest
          (ApplicationManagers_Api_AottgApiClient_o *__this,ApplicationManagers_Api_AottgApiRequest_o *request
          ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o **targetAddress;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  ApplicationManagers_Api_AottgApiTransportRequest_o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548507 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiTransportRequest);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Accept");
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"Content-Type");
    il2cpp_codegen_initialize_runtime_metadata(&"application/json");
    il2cpp_codegen_initialize_runtime_metadata(&"Authorization");
    il2cpp_codegen_initialize_runtime_metadata(&"Bearer ");
    Il2CppMethodInitialized_07548507 = '\x01';
  }
  if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((request->fields).Method,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar3 = "GET";
    }
    else {
      pSVar3 = (request->fields).Method;
      if (pSVar3 == (System_String_o *)0x0) goto label_05e295f8;
      pSVar3 = System_String__ToUpperInvariant(pSVar3,(MethodInfo *)0x0);
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiTransportRequest);
    if (Il2CppMethodInitialized_07548513 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_Dictionary_string_string);
      Il2CppMethodInitialized_07548513 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    targetAddress = &(__this_00->fields).Headers;
    (__this_00->fields).Headers = __this_01;
    Il2CppCodeGenWriteBarrier(targetAddress);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).Method = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Method);
    pSVar3 = ApplicationManagers_Api_AottgApiClient__BuildUrl(__this,(request->fields).Path,method_00);
    (__this_00->fields).Url = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Url);
    (__this_00->fields).JsonBody = (request->fields).JsonBody;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).JsonBody);
    (__this_00->fields).TimeoutSeconds.fields = (request->fields).TimeoutSeconds.fields;
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Headers;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)"Accept",(Il2CppObject *)"application/json",
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      bVar2 = System_String__IsNullOrEmpty((request->fields).JsonBody,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((System_Collections_Generic_Dictionary_object__object__o *)*targetAddress ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05e295f8;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)*targetAddress,
                   (Il2CppObject *)"Content-Type",(Il2CppObject *)"application/json",
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      }
      bVar2 = System_String__IsNullOrEmpty((request->fields).BearerToken,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)*targetAddress;
        pSVar3 = System_String__Concat_52f0320
                           ("Bearer ",(request->fields).BearerToken,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05e295f8;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)"Authorization",(Il2CppObject *)pSVar3,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      }
      return __this_00;
    }
  }
label_05e295f8:
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$BuildUrl
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__BuildUrl (ApplicationManagers_Api_AottgApiClient_o* __this, System_String_o* path, const MethodInfo* method);
// 0x5e29680

System_String_o *
ApplicationManagers_Api_AottgApiClient__BuildUrl
          (ApplicationManagers_Api_AottgApiClient_o *__this,System_String_o *path,MethodInfo *method)

{
  System_Func_string__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_07548508 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"http://");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"https://");
    Il2CppMethodInitialized_07548508 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = (__this->fields)._baseUrlProvider;
    if (pSVar1 != (System_Func_string__o *)0x0) {
      pSVar3 = (System_String_o *)
               (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      if ((pSVar3 != (System_String_o *)0x0) ||
         (pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar3 != (System_String_o *)0x0)) {
        pSVar3 = System_String__TrimEnd_53071b0(pSVar3,0x2f,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
  else if (path != (System_String_o *)0x0) {
    bVar2 = System_String__StartsWith_53002b0(path,"http://",5,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__StartsWith_53002b0(path,"https://",5,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (__this->fields)._baseUrlProvider;
        if (pSVar1 != (System_Func_string__o *)0x0) {
          pSVar3 = (System_String_o *)
                   (*(code *)(pSVar1->fields).invoke_impl)
                             ((pSVar1->fields).method_code,(pSVar1->fields).method);
          if ((pSVar3 != (System_String_o *)0x0) ||
             (pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar3 != (System_String_o *)0x0))
          {
            pSVar3 = System_String__TrimEnd_53071b0(pSVar3,0x2f,(MethodInfo *)0x0);
            str2 = System_String__TrimStart_5307150(path,0x2f,(MethodInfo *)0x0);
            pSVar3 = System_String__Concat_5301f10(pSVar3,"/",str2,(MethodInfo *)0x0);
            return pSVar3;
          }
        }
        goto label_05e297e3;
      }
    }
    return path;
  }
label_05e297e3:
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$HandleResponse
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiClient__HandleResponse (ApplicationManagers_Api_AottgApiRequest_o* request, ApplicationManagers_Api_AottgApiTransportRequest_o* transportRequest, ApplicationManagers_Api_AottgApiTransportResponse_o* response, const MethodInfo* method);
// 0x5e297f0
// eh: try 0x5e298c0..0x5e298ca -> pad 0x5e29980 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e29997..0x5e29b0d -> pad 0x5e29b0d (+1 call sites) cleanup
// eh: try 0x5e29b10..0x5e29b15 -> pad 0x5e29b1d catch (...) [compiler noexcept guard]
// asm: 99 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2997b: jmp 0x5e298ed
// asm:   0x5e29980: mov r12, rax
// asm:   0x5e29983: cmp edx, 1
// asm:   0x5e29986: jne 0x5e29b15
// asm:   0x5e2998c: mov rdi, r12
// asm:   0x5e2998f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e29994: mov r12, rax
// asm:   0x5e29997: lea rdi, [rip + 0x144e722]  ; TypeInfo_System_Exception
// asm:   0x5e2999e: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e299a3: mov rcx, qword ptr [r12]
// asm:   0x5e299a7: mov rsi, qword ptr [rcx]
// asm:   0x5e299aa: mov rdi, rax
// asm:   0x5e299ad: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e299b2: test al, al
// asm:   0x5e299b4: je 0x5e29aeb
// asm:   0x5e299ba: mov r12, qword ptr [r12]
// asm:   0x5e299be: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e299c3: lea rdi, [rip + 0x144af6e]  ; TypeInfo_string_array
// asm:   0x5e299ca: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e299cf: mov rdi, rax
// asm:   0x5e299d2: mov esi, 6
// asm:   0x5e299d7: call 0x30d6180  ; SZArrayNew()
// asm:   0x5e299dc: test rax, rax
// asm:   0x5e299df: je 0x5e29ae6
// asm:   0x5e299e5: mov r13, rax
// asm:   0x5e299e8: lea rdi, [rip + 0x14aa8a1]  ; "AottgApiClient: failed to parse "
// asm:   0x5e299ef: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e299f4: mov rdi, r13
// asm:   0x5e299f7: xor esi, esi
// asm:   0x5e299f9: mov rdx, rax
// asm:   0x5e299fc: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e29a01: test r15, r15
// asm:   0x5e29a04: je 0x5e29ae6
// asm:   0x5e29a0a: mov rdx, qword ptr [r15 + 0x10]
// asm:   0x5e29a0e: mov esi, 1
// asm:   0x5e29a13: mov rdi, r13
// asm:   0x5e29a16: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e29a1b: lea rdi, [rip + 0x14a431e]  ; " "
// asm:   0x5e29a22: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e29a27: mov esi, 2
// asm:   0x5e29a2c: mov rdi, r13
// asm:   0x5e29a2f: mov rdx, rax
// asm:   0x5e29a32: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e29a37: mov rdx, qword ptr [r15 + 0x18]
// asm:   0x5e29a3b: mov esi, 3
// asm:   0x5e29a40: mov rdi, r13
// asm:   0x5e29a43: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e29a48: lea rdi, [rip + 0x14a5279]  ; " response: "
// asm:   0x5e29a4f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e29a54: mov esi, 4
// asm:   0x5e29a59: mov rdi, r13
// asm:   0x5e29a5c: mov rdx, rax
// asm:   0x5e29a5f: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e29a64: test r12, r12
// asm:   0x5e29a67: je 0x5e29ae6
// asm:   0x5e29a69: mov rax, qword ptr [r12]
// asm:   0x5e29a6d: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e29a74: mov rdi, r12
// asm:   0x5e29a77: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e29a7d: mov esi, 5
// asm:   0x5e29a82: mov rdi, r13
// asm:   0x5e29a85: mov rdx, rax
// asm:   0x5e29a88: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e29a8d: mov rdi, r13
// asm:   0x5e29a90: xor esi, esi
// asm:   0x5e29a92: call 0x5402910  ; System_String__Concat()
// asm:   0x5e29a97: mov r15, rax
// asm:   0x5e29a9a: lea rdi, [rip + 0x144dba7]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e29aa1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e29aa6: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e29aad: jne 0x5e29ab7
// asm:   0x5e29aaf: mov rdi, rax
// asm:   0x5e29ab2: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e29ab7: mov rdi, r15
// asm:   0x5e29aba: xor esi, esi
// asm:   0x5e29abc: call 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x5e29ac1: mov r15, qword ptr [rbx + 0x18]
// asm:   0x5e29ac5: mov rbx, qword ptr [rbx + 0x28]
// asm:   0x5e29ac9: lea rdi, [rip + 0x14c92f8]  ; "bad_response"
// asm:   0x5e29ad0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e29ad5: mov rdi, r15
// asm:   0x5e29ad8: mov rsi, r14
// asm:   0x5e29adb: mov rdx, rax
// asm:   0x5e29ade: mov rcx, rbx
// asm:   0x5e29ae1: jmp 0x5e2988b
// asm:   0x5e29aeb: mov edi, 8
// asm:   0x5e29af0: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e29af5: mov rcx, qword ptr [r12]
// asm:   0x5e29af9: mov qword ptr [rax], rcx
// asm:   0x5e29afc: lea rsi, [rip + 0x10039fd]
// asm:   0x5e29b03: mov rdi, rax
// asm:   0x5e29b06: xor edx, edx
// asm:   0x5e29b08: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e29b0d: mov r12, rax
// asm:   0x5e29b10: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e29b15: mov rdi, r12
// asm:   0x5e29b18: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e29b1d: mov rdi, rax
// asm:   0x5e29b20: call 0x2ab61e0  ; __clang_call_terminate()

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiClient__HandleResponse
          (ApplicationManagers_Api_AottgApiRequest_o *request,
          ApplicationManagers_Api_AottgApiTransportRequest_o *transportRequest,
          ApplicationManagers_Api_AottgApiTransportResponse_o *response,MethodInfo *method)

{
  uint uVar1;
  long responseCode;
  int64_t iVar2;
  bool bVar3;
  ApplicationManagers_Api_AottgApiResult_o *pAVar4;
  System_String_o *error;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  MethodInfo *in_R9;
  System_String_o *value;
  
  if (response != (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) {
    value = (response->fields).Text;
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      uVar1 = (response->fields).Result;
    }
    else {
      uVar1 = (response->fields).Result;
    }
    if ((uVar1 & 0xfffffffd) == 1) {
      pAVar4 = ApplicationManagers_Api_AottgApiClient__NetworkFailure
                         (request,transportRequest,response,method);
      return pAVar4;
    }
    responseCode = (response->fields).StatusCode;
    if (responseCode - 300U < 0xffffffffffffff9c) {
      error = ApplicationManagers_Api_AottgApiClient__ParseError(value,responseCode,(MethodInfo *)response);
      ApplicationManagers_Api_AottgApiClient__LogHttpFailure(transportRequest,response,value,method);
      pAVar4 = ApplicationManagers_Api_AottgApiResult__Fail
                         ((response->fields).StatusCode,value,error,(response->fields).Error,false,in_R9);
      return pAVar4;
    }
    if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
      if ((request->fields).ParseJson == false) {
        pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
        iVar2 = (response->fields).StatusCode;
      }
      else {
        pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
        bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar3) {
          pSVar5 = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
        }
        iVar2 = (response->fields).StatusCode;
      }
      if (Il2CppMethodInitialized_07548511 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiResult);
        Il2CppMethodInitialized_07548511 = '\x01';
      }
      pAVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiResult);
      System_Object___ctor((Il2CppObject *)pAVar4,(MethodInfo *)0x0);
      if (pAVar4 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
        (pAVar4->fields)._Success_k__BackingField = true;
        (pAVar4->fields)._StatusCode_k__BackingField = iVar2;
        if (value == (System_String_o *)0x0) {
          value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        (pAVar4->fields)._ResponseText_k__BackingField = value;
        Il2CppCodeGenWriteBarrier(&(pAVar4->fields)._ResponseText_k__BackingField);
        (pAVar4->fields)._Json_k__BackingField = pSVar5;
        Il2CppCodeGenWriteBarrier(&(pAVar4->fields)._Json_k__BackingField);
        return pAVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$NetworkFailure
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiClient__NetworkFailure (ApplicationManagers_Api_AottgApiRequest_o* request, ApplicationManagers_Api_AottgApiTransportRequest_o* transportRequest, ApplicationManagers_Api_AottgApiTransportResponse_o* response, const MethodInfo* method);
// 0x5e29b40

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiClient__NetworkFailure
          (ApplicationManagers_Api_AottgApiRequest_o *request,
          ApplicationManagers_Api_AottgApiTransportRequest_o *transportRequest,
          ApplicationManagers_Api_AottgApiTransportResponse_o *response,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  MethodInfo *in_R9;
  System_Enum_o SStack_38;
  int32_t iStack_28;
  
  if (Il2CppMethodInitialized_07548509 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiTransportResult);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&" responseCode=");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgApiClient: network error ");
    il2cpp_codegen_initialize_runtime_metadata(&"network_error");
    il2cpp_codegen_initialize_runtime_metadata(&" error=");
    il2cpp_codegen_initialize_runtime_metadata(&" result=");
    Il2CppMethodInitialized_07548509 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
  if (values == (System_String_array *)0x0) {
label_05e29de9:
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "AottgApiClient: network error ";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if (transportRequest == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) goto label_05e29de9;
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = (transportRequest->fields).Method;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = " ";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = (transportRequest->fields).Url;
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = " result=";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) goto label_05e29de9;
            SStack_38.klass = (System_Enum_c *)TypeInfo_ApplicationManagers_Api_AottgApiTransportResult;
            SStack_38.monitor = (void *)0xffffffffffffffff;
            iStack_28 = (response->fields).Result;
            pSVar1 = System_Enum__ToString(&SStack_38,(MethodInfo *)0x0);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = pSVar1;
              Il2CppCodeGenWriteBarrier(values->m_Items + 5);
              if (6 < (uint)values->max_length) {
                values->m_Items[6] = " responseCode=";
                Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                pSVar1 = System_Int64__ToString(&(response->fields).StatusCode,(MethodInfo *)0x0);
                if ((values->max_length & 0xfffffff8) != 0) {
                  values->m_Items[7] = pSVar1;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 7);
                  if (8 < (uint)values->max_length) {
                    values->m_Items[8] = " error=";
                    Il2CppCodeGenWriteBarrier(values->m_Items + 8);
                    if (9 < (uint)values->max_length) {
                      values->m_Items[9] = (response->fields).Error;
                      Il2CppCodeGenWriteBarrier(values->m_Items + 9);
                      pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                      }
                      UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                      if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
                        if ((request->fields).ReportNetworkError != false) {
                          ApplicationManagers_AottgNetworkNotifications__TryReport
                                    ("network_error",(MethodInfo *)0x0);
                        }
                        pAVar2 = ApplicationManagers_Api_AottgApiResult__Fail
                                           ((response->fields).StatusCode,(response->fields).Text,
                                            "network_error",(response->fields).Error,false,in_R9);
                        return pAVar2;
                      }
                      goto label_05e29de9;
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
  ThrowIndexOutOfRangeException();
}


// ApplicationManagers.Api.AottgApiClient$$IsNetworkError
// il2cpp: bool ApplicationManagers_Api_AottgApiClient__IsNetworkError (int32_t result, const MethodInfo* method);
// 0x5e29b30

bool ApplicationManagers_Api_AottgApiClient__IsNetworkError(int32_t result,MethodInfo *method)

{
  return (result & 0xfffffffdU) == 1;
}


// ApplicationManagers.Api.AottgApiClient$$ParseError
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__ParseError (System_String_o* responseText, int64_t responseCode, const MethodInfo* method);
// 0x5e29df0
// eh: try 0x5e29e33..0x5e29ef9 -> pad 0x5e29f1c (+7 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e29f40..0x5e29f74 -> pad 0x5e29f74 (+1 call sites) cleanup
// eh: try 0x5e29f77..0x5e29f7c -> pad 0x5e29f84 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e29f0e: jmp 0x5e29f1c
// asm:   0x5e29f10: jmp 0x5e29f1c
// asm:   0x5e29f12: jmp 0x5e29f1c
// asm:   0x5e29f14: jmp 0x5e29f1c
// asm:   0x5e29f16: jmp 0x5e29f1c
// asm:   0x5e29f18: jmp 0x5e29f1c
// asm:   0x5e29f1a: jmp 0x5e29f1c
// asm:   0x5e29f1c: mov r14, rax
// asm:   0x5e29f1f: cmp edx, 1
// asm:   0x5e29f22: jne 0x5e29f7c
// asm:   0x5e29f24: mov rdi, r14
// asm:   0x5e29f27: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e29f2c: mov rbx, rax
// asm:   0x5e29f2f: lea rax, [rip + 0x172c792]
// asm:   0x5e29f36: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e29f3a: mov rax, qword ptr [rbx]
// asm:   0x5e29f3d: mov rsi, qword ptr [rax]
// asm:   0x5e29f40: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e29f45: test al, al
// asm:   0x5e29f47: je 0x5e29f53
// asm:   0x5e29f49: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e29f4e: jmp 0x5e29e41
// asm:   0x5e29f53: mov edi, 8
// asm:   0x5e29f58: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e29f5d: mov rcx, qword ptr [rbx]
// asm:   0x5e29f60: mov qword ptr [rax], rcx
// asm:   0x5e29f63: lea rsi, [rip + 0x1003596]
// asm:   0x5e29f6a: mov rdi, rax
// asm:   0x5e29f6d: xor edx, edx
// asm:   0x5e29f6f: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e29f74: mov r14, rax
// asm:   0x5e29f77: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e29f7c: mov rdi, r14
// asm:   0x5e29f7f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e29f84: mov rdi, rax
// asm:   0x5e29f87: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
ApplicationManagers_Api_AottgApiClient__ParseError
          (System_String_o *responseText,int64_t responseCode,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int64_t local_20;
  
  if (Il2CppMethodInitialized_0754850a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"message");
    il2cpp_codegen_initialize_runtime_metadata(&"error");
    Il2CppMethodInitialized_0754850a = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(responseText,(MethodInfo *)0x0);
  if (!bVar1) {
    node = SimpleJSONFixed_JSON__Parse(responseText,(MethodInfo *)0x0);
    pSVar2 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"error",method_00);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      return pSVar2;
    }
    pSVar2 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"message",method_01);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      return pSVar2;
    }
    pSVar2 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"code",method_02);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      return pSVar2;
    }
  }
  local_20 = responseCode;
  if (Il2CppMethodInitialized_0754850f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"http_");
    Il2CppMethodInitialized_0754850f = '\x01';
  }
  pSVar2 = System_Int64__ToString(&local_20,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320("http_",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ApplicationManagers.Api.AottgApiClient$$FieldValue
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__FieldValue (SimpleJSONFixed_JSONNode_o* node, System_String_o* name, const MethodInfo* method);
// 0x5e2a370

System_String_o *
ApplicationManagers_Api_AottgApiClient__FieldValue
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint16_t c;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  uint16_t local_2a;
  
  if (Il2CppMethodInitialized_0754850b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_0754850b = '\x01';
  }
  local_2a = 0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0), bVar1)) {
    return (System_String_o *)0x0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,name,(node->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e2a579;
      pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        return pSVar3;
      }
    }
    if (name != (System_String_o *)0x0) {
      c = System_String__get_Chars(name,0,(MethodInfo *)0x0);
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      local_2a = System_Char__ToUpperInvariant(c,(MethodInfo *)0x0);
      pSVar3 = System_Char__ToString(&local_2a,(MethodInfo *)0x0);
      str1 = System_String__Substring(name,1,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320(pSVar3,str1,(MethodInfo *)0x0);
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,pSVar3,(node->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return (System_String_o *)0x0;
      }
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        if (bVar1) {
          return (System_String_o *)0x0;
        }
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        return pSVar3;
      }
    }
  }
label_05e2a579:
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$LogHttpFailure
// il2cpp: void ApplicationManagers_Api_AottgApiClient__LogHttpFailure (ApplicationManagers_Api_AottgApiTransportRequest_o* request, ApplicationManagers_Api_AottgApiTransportResponse_o* response, System_String_o* text, const MethodInfo* method);
// 0x5e29f90

void ApplicationManagers_Api_AottgApiClient__LogHttpFailure
               (ApplicationManagers_Api_AottgApiTransportRequest_o *request,
               ApplicationManagers_Api_AottgApiTransportResponse_o *response,System_String_o *text,
               MethodInfo *method)

{
  int64_t *__this;
  uint32_t uVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754850c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AottgApiClient: HTTP ");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&" body=");
    il2cpp_codegen_initialize_runtime_metadata(&" error=");
    Il2CppMethodInitialized_0754850c = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
  if (values == (System_String_array *)0x0) {
label_05e2a1e2:
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "AottgApiClient: HTTP ";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) goto label_05e2a1e2;
    __this = &(response->fields).StatusCode;
    pSVar2 = System_Int64__ToString(__this,(MethodInfo *)0x0);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = " ";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if (request == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) goto label_05e2a1e2;
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = (request->fields).Method;
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = " ";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = (request->fields).Url;
              Il2CppCodeGenWriteBarrier(values->m_Items + 5);
              if (6 < (uint)values->max_length) {
                values->m_Items[6] = " error=";
                Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                if ((values->max_length & 0xfffffff8) != 0) {
                  values->m_Items[7] = (response->fields).Error;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 7);
                  if (8 < (uint)values->max_length) {
                    values->m_Items[8] = " body=";
                    Il2CppCodeGenWriteBarrier(values->m_Items + 8);
                    if (9 < (uint)values->max_length) {
                      values->m_Items[9] = text;
                      Il2CppCodeGenWriteBarrier(values->m_Items + 9);
                      pSVar2 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                      uVar1 = (TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor;
                      if (*__this - 500U < 0xffffffffffffff9c) {
                        if (uVar1 == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                        }
                        UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
                        return;
                      }
                      if (uVar1 == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                      }
                      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
                      return;
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
  ThrowIndexOutOfRangeException();
}


