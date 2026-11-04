// Type: ApplicationManagers.Api.AottgApiClient
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiClient.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$MoveNext
// il2cpp: void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this, const MethodInfo* method);
// 0x1823742e0
// eh: try 0x18237436b..0x1823743a3 -> pad 0x183340c90 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1823743a3..0x1823745da -> pad 0x183340c20 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_OperationCanceledException]
// eh: try 0x182374614..0x18237479a -> pad 0x183340c90 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18237479a..0x1823747aa -> pad 0x183340c20 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_OperationCanceledException]
// eh: try 0x1823747aa..0x1823747b1 -> pad 0x183340c90 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 141 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823743a2: nop 
// asm:   0x1823745fc: mov rax, qword ptr [rip + 0x1fe084d]
// asm:   0x182374603: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x18237460a: mov rdi, qword ptr [rcx]
// asm:   0x18237460d: lea rcx, [rip + 0x1d2cd74]  ; "canceled"
// asm:   0x182374614: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182374619: mov r14, rax
// asm:   0x18237461c: cmp byte ptr [rip + 0x1fd3435], 0
// asm:   0x182374623: jne 0x182374638
// asm:   0x182374625: lea rcx, [rip + 0x1d4bb4c]  ; TypeInfo_ApplicationManagers_Api_AottgApiResult
// asm:   0x18237462c: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x182374631: mov byte ptr [rip + 0x1fd3420], 1
// asm:   0x182374638: mov rcx, qword ptr [rip + 0x1d4bb39]  ; TypeInfo_ApplicationManagers_Api_AottgApiResult
// asm:   0x18237463f: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x182374644: mov rbx, rax
// asm:   0x182374647: xor edx, edx
// asm:   0x182374649: mov rcx, rax
// asm:   0x18237464c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182374651: test rbx, rbx
// asm:   0x182374654: je 0x1823747aa
// asm:   0x18237465a: mov byte ptr [rbx + 0x10], 0
// asm:   0x18237465e: xor esi, esi
// asm:   0x182374660: mov qword ptr [rbx + 0x18], rsi
// asm:   0x182374664: test rdi, rdi
// asm:   0x182374667: jne 0x18237467a
// asm:   0x182374669: mov rax, qword ptr [rip + 0x1fe07e0]
// asm:   0x182374670: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x182374677: mov rdi, qword ptr [rcx]
// asm:   0x18237467a: mov qword ptr [rbx + 0x20], rdi
// asm:   0x18237467e: lea rcx, [rbx + 0x20]
// asm:   0x182374682: mov rdx, rdi
// asm:   0x182374685: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18237468a: mov qword ptr [rbx + 0x30], r14
// asm:   0x18237468e: lea rcx, [rbx + 0x30]
// asm:   0x182374692: mov rdx, r14
// asm:   0x182374695: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18237469a: mov qword ptr [rbx + 0x38], rsi
// asm:   0x18237469e: lea rcx, [rbx + 0x38]
// asm:   0x1823746a2: xor edx, edx
// asm:   0x1823746a4: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823746a9: mov byte ptr [rbx + 0x40], 1
// asm:   0x1823746ad: mov dword ptr [rsp + 0x40], esi
// asm:   0x1823746b1: mov rdi, qword ptr [rsp + 0xe0]
// asm:   0x1823746b9: mov dword ptr [rdi], 0xfffffffe
// asm:   0x1823746bf: mov qword ptr [rdi + 0x38], rsi
// asm:   0x1823746c3: lea rcx, [rdi + 0x38]
// asm:   0x1823746c7: xor edx, edx
// asm:   0x1823746c9: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823746ce: lea rcx, [rdi + 8]
// asm:   0x1823746d2: mov r8, qword ptr [rip + 0x1d827cf]  ; MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetResult
// asm:   0x1823746d9: mov rdx, rbx
// asm:   0x1823746dc: call 0x180dda980  ; Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_object___SetResult()
// asm:   0x1823746e1: lea r11, [rsp + 0xc0]
// asm:   0x1823746e9: mov rbx, qword ptr [r11 + 0x28]
// asm:   0x1823746ed: mov rsi, qword ptr [r11 + 0x30]
// asm:   0x1823746f1: movaps xmm6, xmmword ptr [r11 - 0x10]
// asm:   0x1823746f6: movaps xmm7, xmmword ptr [r11 - 0x20]
// asm:   0x1823746fb: mov rsp, r11
// asm:   0x1823746fe: pop r15
// asm:   0x182374700: pop r14
// asm:   0x182374702: pop rdi
// asm:   0x182374703: ret 
// asm:   0x182374704: mov rbx, qword ptr [rsp + 0xe0]
// asm:   0x18237470c: mov dword ptr [rbx], 0xfffffffe
// asm:   0x182374712: xor esi, esi
// asm:   0x182374714: mov qword ptr [rbx + 0x38], rsi
// asm:   0x182374718: lea rcx, [rbx + 0x38]
// asm:   0x18237471c: xor edx, edx
// asm:   0x18237471e: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x182374723: lea rcx, [rip + 0x1d8269e]  ; MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetException
// asm:   0x18237472a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18237472f: mov r8, rax
// asm:   0x182374732: mov eax, dword ptr [rsp + 0x40]
// asm:   0x182374736: dec eax
// asm:   0x182374738: movsxd rdx, eax
// asm:   0x18237473b: lea rcx, [rbx + 8]
// asm:   0x18237473f: mov rdx, qword ptr [rsp + rdx*8 + 0x30]
// asm:   0x182374744: call 0x180dda900  ; Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_bool___SetException()
// asm:   0x182374749: jmp 0x1823746e1
// asm:   0x1823747aa: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x183340c20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340c25: push rbx
// asm:   0x183340c26: push rbp
// asm:   0x183340c27: push rdi
// asm:   0x183340c28: sub rsp, 0x30
// asm:   0x183340c2c: mov rbp, rdx
// asm:   0x183340c2f: mov rbx, qword ptr [rbp + 0x88]
// asm:   0x183340c36: mov rax, qword ptr [rbx]
// asm:   0x183340c39: mov rdi, qword ptr [rax]
// asm:   0x183340c3c: lea rcx, [rip + 0xd93ae5]  ; TypeInfo_System_OperationCanceledException
// asm:   0x183340c43: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340c48: mov rdx, rdi
// asm:   0x183340c4b: mov rcx, rax
// asm:   0x183340c4e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340c53: test al, al
// asm:   0x183340c55: mov rax, qword ptr [rbx]
// asm:   0x183340c58: je 0x183340c71
// asm:   0x183340c5a: mov qword ptr [rbp + 0x30], rax
// asm:   0x183340c5e: mov dword ptr [rbp + 0x40], 1
// asm:   0x183340c65: movabs rax, 0
// asm:   0x183340c6f: jmp 0x183340c86
// asm:   0x183340c71: mov qword ptr [rbp + 0x78], rax
// asm:   0x183340c75: lea rdx, [rip + 0xc9b30c]
// asm:   0x183340c7c: lea rcx, [rbp + 0x78]
// asm:   0x183340c80: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183340c86: add rsp, 0x30
// asm:   0x183340c8a: pop rdi
// asm:   0x183340c8b: pop rbp
// asm:   0x183340c8c: pop rbx
// asm:   0x183340c8d: ret 
// asm:   0x183340c90: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340c95: push rbx
// asm:   0x183340c96: push rbp
// asm:   0x183340c97: push rdi
// asm:   0x183340c98: sub rsp, 0x30
// asm:   0x183340c9c: mov rbp, rdx
// asm:   0x183340c9f: mov rdi, qword ptr [rbp + 0x90]
// asm:   0x183340ca6: mov rax, qword ptr [rdi]
// asm:   0x183340ca9: mov rbx, qword ptr [rax]
// asm:   0x183340cac: lea rcx, [rip + 0xd382a5]  ; TypeInfo_System_Exception
// asm:   0x183340cb3: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340cb8: mov rcx, rax
// asm:   0x183340cbb: mov rdx, rbx
// asm:   0x183340cbe: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340cc3: test al, al
// asm:   0x183340cc5: mov rax, qword ptr [rdi]
// asm:   0x183340cc8: je 0x183340ce2
// asm:   0x183340cca: movsxd rcx, dword ptr [rbp + 0x40]
// asm:   0x183340cce: mov qword ptr [rbp + rcx*8 + 0x30], rax
// asm:   0x183340cd3: inc dword ptr [rbp + 0x40]
// asm:   0x183340cd6: movabs rax, 0
// asm:   0x183340ce0: jmp 0x183340cfd
// asm:   0x183340ce2: mov qword ptr [rbp + 0x80], rax
// asm:   0x183340ce9: lea rdx, [rip + 0xc9b298]
// asm:   0x183340cf0: lea rcx, [rbp + 0x80]
// asm:   0x183340cf7: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183340cfd: add rsp, 0x30
// asm:   0x183340d01: pop rdi
// asm:   0x183340d02: pop rbp
// asm:   0x183340d03: pop rbx
// asm:   0x183340d04: ret 

void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext
               (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  Il2CppObject *pIVar4;
  System_Threading_CancellationToken_o cancellationToken;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar6;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse__o *pCVar7;
  bool bVar8;
  ApplicationManagers_Api_AottgApiTransportRequest_o *pAVar9;
  VirtualInvokeData *pVVar10;
  Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o *pCVar11;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAVar12;
  ApplicationManagers_Api_AottgApiResult_o *result;
  Il2CppClass *pIVar13;
  void *pvVar14;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *pMVar15;
  ushort uVar16;
  Cysharp_Threading_Tasks_UniTask_Awaiter_T__o local_90;
  Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o local_78 [4];
  
  if (Il2CppMethodInitialized_184347a53 == '\0') {
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
    Il2CppMethodInitialized_184347a53 = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar3 != 0) {
    if ((__this->fields).request == (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
      pIVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
      __this_01 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(pIVar13);
      paramName = il2cpp_codegen_get_runtime_metadata(&"request");
      System_ArgumentNullException___ctor_1a77f20(__this_01,paramName,(MethodInfo *)0x0);
      pMVar15 = il2cpp_codegen_get_runtime_metadata
                          (&MethodInfo_ApplicationManagers_Api_AottgApiClient_SendAsync_d__4_MoveNext);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar15);
    }
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ThrowNullReferenceException();
    }
    pAVar9 = ApplicationManagers_Api_AottgApiClient__BuildTransportRequest
                       (__this_00,(__this->fields).request,(MethodInfo *)0x0);
    (__this->fields)._transportRequest_5__2 = pAVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._transportRequest_5__2,pAVar9);
  }
  if (iVar3 == 0) {
    local_90.fields.task.fields.source = (__this->fields).__u__1.fields.task.fields.source;
    local_90.fields.task.fields.result = (__this->fields).__u__1.fields.task.fields.result;
    pCVar7 = &(__this->fields).__u__1;
    local_90.fields.task.fields.token = (pCVar7->fields).task.fields.token;
    local_90.fields.task.fields._18_6_ = *(undefined6 *)&(pCVar7->fields).task.fields.field_0x12;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = (Il2CppObject *)(__this_00->fields)._transport;
    if (pIVar4 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pAVar9 = (__this->fields)._transportRequest_5__2;
    cancellationToken.fields._source =
         (System_Threading_CancellationToken_Fields)(__this->fields).cancellationToken.fields._source;
    pIVar13 = pIVar4->klass;
    uVar2 = (pIVar13->_2).interface_offsets_count;
    uVar16 = 0;
    if (uVar2 != 0) {
      pIVar5 = (pIVar13->_1).interfaceOffsets;
      do {
        if (pIVar5[uVar16].interfaceType == (Il2CppClass *)TypeInfo_ApplicationManagers_Api_IAottgApiTransport
           ) {
          pVVar10 = pIVar13->vtable + pIVar5[uVar16].offset;
          goto label_182374446;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar2);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar4,(Il2CppClass *)TypeInfo_ApplicationManagers_Api_IAottgApiTransport,0);
label_182374446:
    pCVar11 = (*pVVar10->methodPtr)(local_78,pIVar4,pAVar9,cancellationToken,pVVar10->method);
    pCVar6 = (pCVar11->fields).source;
    pAVar12 = (pCVar11->fields).result;
    uVar1._0_2_ = (pCVar11->fields).token;
    uVar1._2_6_ = *(undefined6 *)&(pCVar11->fields).field_0x12;
    local_78[0].fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_78[0].fields.result = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
    local_78[0].fields.token = 0;
    local_78[0].fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse_GetAwaiter->klass->_2).
         bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse_GetAwaiter->klass);
    }
    local_78[0].fields.source = pCVar6;
    local_78[0].fields.result = pAVar12;
    local_78[0].fields._16_8_ = uVar1;
    Il2CppCodeGenWriteBarrier((void **)local_78,(void *)0x0);
    local_90.fields.task.fields.source = local_78[0].fields.source;
    local_90.fields.task.fields.result = (Il2CppObject *)local_78[0].fields.result;
    local_90.fields.task.fields.token = local_78[0].fields.token;
    local_90.fields.task.fields._18_6_ = local_78[0].fields._18_6_;
    bVar8 = Cysharp_Threading_Tasks_UniTask_Awaiter_Vector2___get_IsCompleted
                      (&local_90,
                       (MethodInfo_EE1910 *)
                       MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse_get_IsCompleted
                      );
    if (!bVar8) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source = local_90.fields.task.fields.source;
      (__this->fields).__u__1.fields.task.fields.result = local_90.fields.task.fields.result;
      pCVar7 = &(__this->fields).__u__1;
      (pCVar7->fields).task.fields.token = local_90.fields.task.fields.token;
      *(undefined6 *)&(pCVar7->fields).task.fields.field_0x12 = local_90.fields.task.fields._18_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      pMVar15 = 
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_AwaitUnsafeOnC
      ;
      if ((
          MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_AwaitUnsafeOnC
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        il2cpp_codegen_rgctx_method_init
                  (
                  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_AwaitUnsafeOnC
                  );
      }
      if ((__this->fields).__t__builder.fields.runnerPromise ==
          (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o *)0x0) {
        pIVar13 = (pMVar15->field7_0x38).rgctx_data[2].klass;
        if (((pIVar13->_2).bitflags1 & 1) == 0) {
          pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
        }
        if ((pIVar13->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(pIVar13);
        }
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask_AottgApiClient__SendAsync_d__4__object___SetStateMachine
                  (__this,(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o **)
                          &(__this->fields).__t__builder,
                   (MethodInfo_DFEE50 *)(pMVar15->field7_0x38).rgctx_data[1].method);
      }
      pIVar4 = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar13 = pMVar15->klass;
        if (((pIVar13->_2).bitflags1 & 1) == 0) {
          pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
        }
        pIVar13 = pIVar13->rgctx_data[1].klass;
        if (((pIVar13->_2).bitflags1 & 1) == 0) {
          pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
        }
        pvVar14 = InterfaceInvoker0_Invoke(0,pIVar13,pIVar4);
        il2cpp_runtime_helper_1800142b0(&local_90,pvVar14,(pMVar15->field7_0x38).rgctx_data[5].rgctxDataDummy);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  pAVar12 = Cysharp_Threading_Tasks_UniTask_Awaiter_object___GetResult
                      ((Cysharp_Threading_Tasks_UniTask_Awaiter_object__o *)&local_90,
                       (MethodInfo_EE11A0 *)
                       MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse_GetResult)
  ;
  result = ApplicationManagers_Api_AottgApiClient__HandleResponse
                     ((__this->fields).request,(__this->fields)._transportRequest_5__2,pAVar12,
                      (MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  (__this->fields)._transportRequest_5__2 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transportRequest_5__2,(void *)0x0);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_object___SetResult
            ((Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_T__o *)
             &(__this->fields).__t__builder,(Il2CppObject *)result,
             (MethodInfo_DDA980 *)
             MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetResult
            );
  return;
}


// ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$SetStateMachine
// il2cpp: void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__SetStateMachine (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x1823747c0

void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__SetStateMachine
               (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetStateMachin
              );
    Il2CppMethodInitialized_184347a54 = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__t__builder,
             (MethodInfo *)stateMachine);
  return;
}


// ApplicationManagers.Api.AottgApiClient$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiClient___ctor (ApplicationManagers_Api_AottgApiClient_o* __this, const MethodInfo* method);
// 0x1823606a0

void ApplicationManagers_Api_AottgApiClient___ctor
               (ApplicationManagers_Api_AottgApiClient_o *__this,MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_Vector2__o *__this_00;
  ApplicationManagers_Api_IAottgApiTransport_o *__this_01;
  
  if (Il2CppMethodInitialized_184347a49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_184347a49 = '\x01';
  }
  __this_00 = (DG_Tweening_Core_DOGetter_Vector2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  System_Func_object____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl,
             (MethodInfo_1387740 *)0x0);
  __this_01 = (ApplicationManagers_Api_IAottgApiTransport_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347a4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_184347a4a = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (DG_Tweening_Core_DOGetter_Vector2__o *)0x0) {
    __this_00 = (DG_Tweening_Core_DOGetter_Vector2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
    System_Func_object____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl,
               (MethodInfo_1387740 *)0x0);
  }
  if (__this != (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
    (__this->fields)._baseUrlProvider = (System_Func_string__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._baseUrlProvider,__this_00);
    if (__this_01 == (ApplicationManagers_Api_IAottgApiTransport_o *)0x0) {
      __this_01 = (ApplicationManagers_Api_IAottgApiTransport_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
    }
    (__this->fields)._transport = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._transport,__this_01);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiClient___ctor (ApplicationManagers_Api_AottgApiClient_o* __this, System_Func_string__o* baseUrlProvider, ApplicationManagers_Api_IAottgApiTransport_o* transport, const MethodInfo* method);
// 0x1823605c0

void ApplicationManagers_Api_AottgApiClient___ctor_23605c0
               (ApplicationManagers_Api_AottgApiClient_o *__this,System_Func_string__o *baseUrlProvider,
               ApplicationManagers_Api_IAottgApiTransport_o *transport,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_184347a4a = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (baseUrlProvider == (System_Func_string__o *)0x0) {
    baseUrlProvider = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
    System_Func_object____ctor
              ((DG_Tweening_Core_DOGetter_Vector2__o *)baseUrlProvider,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl,
               (MethodInfo_1387740 *)0x0);
  }
  if (__this != (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
    (__this->fields)._baseUrlProvider = baseUrlProvider;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._baseUrlProvider,baseUrlProvider);
    if (transport == (ApplicationManagers_Api_IAottgApiTransport_o *)0x0) {
      transport = (ApplicationManagers_Api_IAottgApiTransport_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgUnityWebRequestTransport);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)transport,(MethodInfo *)0x0);
    }
    (__this->fields)._transport = transport;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._transport,transport);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$SendAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_Api_AottgApiClient__SendAsync (ApplicationManagers_Api_AottgApiClient_o* __this, ApplicationManagers_Api_AottgApiRequest_o* request, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
// 0x182360490

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_Api_AottgApiClient__SendAsync
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__,
          ApplicationManagers_Api_AottgApiClient_o *__this,ApplicationManagers_Api_AottgApiRequest_o *request,
          System_Threading_CancellationToken_o cancellationToken,MethodInfo *method)

{
  MethodInfo *pMVar1;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_a8;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_a0;
  undefined8 local_98;
  ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_Fields local_88;
  
  if (Il2CppMethodInitialized_184347a4b == '\0') {
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
    Il2CppMethodInitialized_184347a4b = '\x01';
  }
  local_88.__t__builder.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_88.__1__state = 0;
  local_88._4_4_ = 0;
  local_88.__u__1.fields.task.fields.token = 0;
  local_88.__u__1.fields.task.fields._18_6_ = 0;
  local_88.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o *)0x0;
  local_88.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_88.request = (ApplicationManagers_Api_AottgApiRequest_o *)0x0;
  local_88.__4__this = (ApplicationManagers_Api_AottgApiClient_o *)0x0;
  local_88.cancellationToken.fields._source =
       (System_Threading_CancellationToken_Fields)(System_Threading_CancellationTokenSource_o *)0x0;
  local_88._transportRequest_5__2 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
  local_88.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_88.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_88.__t__builder,(void *)0x0);
  local_88.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_88.__4__this,__this);
  local_88.request = request;
  Il2CppCodeGenWriteBarrier(&local_88.request,request);
  local_88.cancellationToken.fields._source = cancellationToken.fields._source;
  Il2CppCodeGenWriteBarrier((void **)&local_88.cancellationToken,(void *)0x0);
  pMVar1 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_Start_AottgApi;
  local_88.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_Start_AottgApi
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_Start_AottgApi
              );
  }
  ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext
            ((ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o *)&local_88,
             (pMVar1->field7_0x38).rgctx_data[2].method);
  il2cpp_runtime_helper_180ddb120(&local_a8,&local_88.__t__builder,
                MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_get_Task
               );
  (__return_storage_ptr__->fields).source = local_a8;
  (__return_storage_ptr__->fields).result = pAStack_a0;
  *(undefined8 *)&(__return_storage_ptr__->fields).token = local_98;
  return __return_storage_ptr__;
}


// ApplicationManagers.Api.AottgApiClient$$DefaultBaseUrl
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__DefaultBaseUrl (const MethodInfo* method);
// 0x18235f840

System_String_o * ApplicationManagers_Api_AottgApiClient__DefaultBaseUrl(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347a4c = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl;
}


// ApplicationManagers.Api.AottgApiClient$$BuildTransportRequest
// il2cpp: ApplicationManagers_Api_AottgApiTransportRequest_o* ApplicationManagers_Api_AottgApiClient__BuildTransportRequest (ApplicationManagers_Api_AottgApiClient_o* __this, ApplicationManagers_Api_AottgApiRequest_o* request, const MethodInfo* method);
// 0x18235f340
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235f3e8: mov rbp, qword ptr [rip + 0x1d98c59]  ; "GET"
// asm:   0x18235f3ef: jmp 0x18235f408
// asm:   0x18235f5d2: mov rbp, rax

ApplicationManagers_Api_AottgApiTransportRequest_o *
ApplicationManagers_Api_AottgApiClient__BuildTransportRequest
          (ApplicationManagers_Api_AottgApiClient_o *__this,ApplicationManagers_Api_AottgApiRequest_o *request
          ,MethodInfo *method)

{
  System_Func_string__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  ApplicationManagers_Api_AottgApiTransportRequest_o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_184347a4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiTransportRequest);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Accept");
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"Content-Type");
    il2cpp_codegen_initialize_runtime_metadata(&"application/json");
    il2cpp_codegen_initialize_runtime_metadata(&"Authorization");
    il2cpp_codegen_initialize_runtime_metadata(&"Bearer ");
    Il2CppMethodInitialized_184347a4d = '\x01';
  }
  if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((request->fields).Method,(MethodInfo *)0x0);
    pSVar5 = "GET";
    if (!bVar3) {
      pSVar5 = (request->fields).Method;
      if (pSVar5 == (System_String_o *)0x0) goto label_18235f6b9;
      pSVar5 = System_String__ToUpperInvariant(pSVar5,(MethodInfo *)0x0);
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiTransportRequest);
    if (Il2CppMethodInitialized_184347a59 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_Dictionary_string_string);
      Il2CppMethodInitialized_184347a59 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    (__this_00->fields).Headers = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Headers,__this_01);
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).Method = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Method,pSVar5);
    pSVar5 = (request->fields).Path;
    if (Il2CppMethodInitialized_184347a4e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"http://");
      il2cpp_codegen_initialize_runtime_metadata(&"/");
      il2cpp_codegen_initialize_runtime_metadata(&"https://");
      Il2CppMethodInitialized_184347a4e = '\x01';
    }
    bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar1 = (__this->fields)._baseUrlProvider;
      if ((pSVar1 == (System_Func_string__o *)0x0) ||
         ((pSVar5 = (System_String_o *)
                    (*(code *)(pSVar1->fields).invoke_impl)
                              ((pSVar1->fields).method_code,(pSVar1->fields).method),
          pSVar5 == (System_String_o *)0x0 &&
          (pSVar5 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), pSVar5 == (System_String_o *)0x0
          )))) goto label_18235f6b9;
      pSVar5 = System_String__TrimEnd_19734b0(pSVar5,0x2f,(MethodInfo *)0x0);
    }
    else {
      if (pSVar5 == (System_String_o *)0x0) goto label_18235f6b9;
      bVar3 = System_String__StartsWith_19722c0(pSVar5,"http://",5,(MethodInfo *)0x0);
      if ((!bVar3) &&
         (bVar3 = System_String__StartsWith_19722c0(pSVar5,"https://",5,(MethodInfo *)0x0), !bVar3)
         ) {
        pSVar1 = (__this->fields)._baseUrlProvider;
        if ((pSVar1 == (System_Func_string__o *)0x0) ||
           ((pSVar4 = (System_String_o *)
                      (*(code *)(pSVar1->fields).invoke_impl)
                                ((pSVar1->fields).method_code,(pSVar1->fields).method),
            pSVar4 == (System_String_o *)0x0 &&
            (pSVar4 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
            pSVar4 == (System_String_o *)0x0)))) goto label_18235f6b9;
        pSVar4 = System_String__TrimEnd_19734b0(pSVar4,0x2f,(MethodInfo *)0x0);
        pSVar5 = System_String__TrimStart_19736a0(pSVar5,0x2f,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_1969b70(pSVar4,"/",pSVar5,(MethodInfo *)0x0);
      }
    }
    (__this_00->fields).Url = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Url,pSVar5);
    pSVar5 = (request->fields).JsonBody;
    (__this_00->fields).JsonBody = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).JsonBody,pSVar5);
    (__this_00->fields).TimeoutSeconds.fields = (request->fields).TimeoutSeconds.fields;
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Headers;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)"Accept",(Il2CppObject *)"application/json",
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      bVar3 = System_String__IsNullOrEmpty((request->fields).JsonBody,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Headers;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18235f6b9;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar2,(Il2CppObject *)"Content-Type",(Il2CppObject *)"application/json",
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      }
      bVar3 = System_String__IsNullOrEmpty((request->fields).BearerToken,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Headers;
        pSVar5 = System_String__Concat_1969e50
                           ("Bearer ",(request->fields).BearerToken,(MethodInfo *)0x0);
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18235f6b9;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar2,(Il2CppObject *)"Authorization",(Il2CppObject *)pSVar5,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      }
      return __this_00;
    }
  }
label_18235f6b9:
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$BuildUrl
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__BuildUrl (ApplicationManagers_Api_AottgApiClient_o* __this, System_String_o* path, const MethodInfo* method);
// 0x18235f6c0

System_String_o *
ApplicationManagers_Api_AottgApiClient__BuildUrl
          (ApplicationManagers_Api_AottgApiClient_o *__this,System_String_o *path,MethodInfo *method)

{
  System_Func_string__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_184347a4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"http://");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"https://");
    Il2CppMethodInitialized_184347a4e = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = (__this->fields)._baseUrlProvider;
    if (pSVar1 != (System_Func_string__o *)0x0) {
      pSVar3 = (System_String_o *)
               (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      if ((pSVar3 != (System_String_o *)0x0) ||
         (pSVar3 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), pSVar3 != (System_String_o *)0x0)
         ) {
        pSVar3 = System_String__TrimEnd_19734b0(pSVar3,0x2f,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
  else if (path != (System_String_o *)0x0) {
    bVar2 = System_String__StartsWith_19722c0(path,"http://",5,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__StartsWith_19722c0(path,"https://",5,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (__this->fields)._baseUrlProvider;
        if (pSVar1 != (System_Func_string__o *)0x0) {
          pSVar3 = (System_String_o *)
                   (*(code *)(pSVar1->fields).invoke_impl)
                             ((pSVar1->fields).method_code,(pSVar1->fields).method);
          if ((pSVar3 != (System_String_o *)0x0) ||
             (pSVar3 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
             pSVar3 != (System_String_o *)0x0)) {
            pSVar3 = System_String__TrimEnd_19734b0(pSVar3,0x2f,(MethodInfo *)0x0);
            str2 = System_String__TrimStart_19736a0(path,0x2f,(MethodInfo *)0x0);
            pSVar3 = System_String__Concat_1969b70(pSVar3,"/",str2,(MethodInfo *)0x0);
            return pSVar3;
          }
        }
        goto label_18235f82b;
      }
    }
    return path;
  }
label_18235f82b:
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$HandleResponse
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiClient__HandleResponse (ApplicationManagers_Api_AottgApiRequest_o* request, ApplicationManagers_Api_AottgApiTransportRequest_o* transportRequest, ApplicationManagers_Api_AottgApiTransportResponse_o* response, const MethodInfo* method);
// 0x18235fa90
// eh: try 0x18235fb30..0x18235fb44 -> pad 0x183339ce0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 132 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235fb3d: lea rcx, [rip + 0x1d4e49c]  ; TypeInfo_string_array
// asm:   0x18235fb44: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235fb49: mov rcx, rax
// asm:   0x18235fb4c: mov edx, 6
// asm:   0x18235fb51: call 0x180416200  ; SZArrayNew()
// asm:   0x18235fb56: mov rbx, rax
// asm:   0x18235fb59: test rax, rax
// asm:   0x18235fb5c: je 0x18235fdc3
// asm:   0x18235fb62: lea rcx, [rip + 0x1d4298f]  ; "AottgApiClient: failed to parse "
// asm:   0x18235fb69: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235fb6e: cmp dword ptr [rbx + 0x18], 0
// asm:   0x18235fb72: jbe 0x18235fdc9
// asm:   0x18235fb78: mov qword ptr [rbx + 0x20], rax
// asm:   0x18235fb7c: lea rcx, [rbx + 0x20]
// asm:   0x18235fb80: mov rdx, rax
// asm:   0x18235fb83: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235fb88: mov rdi, qword ptr [rsp + 0x88]
// asm:   0x18235fb90: test rdi, rdi
// asm:   0x18235fb93: je 0x18235fdc3
// asm:   0x18235fb99: cmp dword ptr [rbx + 0x18], 1
// asm:   0x18235fb9d: jbe 0x18235fdc9
// asm:   0x18235fba3: mov rdx, qword ptr [rdi + 0x10]
// asm:   0x18235fba7: mov qword ptr [rbx + 0x28], rdx
// asm:   0x18235fbab: lea rcx, [rbx + 0x28]
// asm:   0x18235fbaf: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235fbb4: lea rcx, [rip + 0x1d24bcd]  ; " "
// asm:   0x18235fbbb: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235fbc0: cmp dword ptr [rbx + 0x18], 2
// asm:   0x18235fbc4: jbe 0x18235fdc9
// asm:   0x18235fbca: mov qword ptr [rbx + 0x30], rax
// asm:   0x18235fbce: lea rcx, [rbx + 0x30]
// asm:   0x18235fbd2: mov rdx, rax
// asm:   0x18235fbd5: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235fbda: cmp dword ptr [rbx + 0x18], 3
// asm:   0x18235fbde: jbe 0x18235fdc9
// asm:   0x18235fbe4: mov rdx, qword ptr [rdi + 0x18]
// asm:   0x18235fbe8: mov qword ptr [rbx + 0x38], rdx
// asm:   0x18235fbec: lea rcx, [rbx + 0x38]
// asm:   0x18235fbf0: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235fbf5: lea rcx, [rip + 0x1d403ec]  ; " response: "
// asm:   0x18235fbfc: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235fc01: cmp dword ptr [rbx + 0x18], 4
// asm:   0x18235fc05: jbe 0x18235fdc9
// asm:   0x18235fc0b: mov qword ptr [rbx + 0x40], rax
// asm:   0x18235fc0f: lea rcx, [rbx + 0x40]
// asm:   0x18235fc13: mov rdx, rax
// asm:   0x18235fc16: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235fc1b: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18235fc20: test rcx, rcx
// asm:   0x18235fc23: je 0x18235fdc3
// asm:   0x18235fc29: mov rax, qword ptr [rcx]
// asm:   0x18235fc2c: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18235fc33: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18235fc39: cmp dword ptr [rbx + 0x18], 5
// asm:   0x18235fc3d: jbe 0x18235fdc9
// asm:   0x18235fc43: mov qword ptr [rbx + 0x48], rax
// asm:   0x18235fc47: lea rcx, [rbx + 0x48]
// asm:   0x18235fc4b: mov rdx, rax
// asm:   0x18235fc4e: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235fc53: xor edx, edx
// asm:   0x18235fc55: mov rcx, rbx
// asm:   0x18235fc58: call 0x181969830  ; System_String__Concat()
// asm:   0x18235fc5d: mov rbx, rax
// asm:   0x18235fc60: lea rcx, [rip + 0x1d9b7d1]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18235fc67: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235fc6c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18235fc73: jne 0x18235fc7d
// asm:   0x18235fc75: mov rcx, rax
// asm:   0x18235fc78: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18235fc7d: xor edx, edx
// asm:   0x18235fc7f: mov rcx, rbx
// asm:   0x18235fc82: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x18235fc87: mov rax, qword ptr [rsp + 0x90]
// asm:   0x18235fc8f: mov rdi, qword ptr [rax + 0x18]
// asm:   0x18235fc93: mov rbx, qword ptr [rax + 0x28]
// asm:   0x18235fc97: lea rcx, [rip + 0x1d3358a]  ; "bad_response"
// asm:   0x18235fc9e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235fca3: mov r8, rax
// asm:   0x18235fca6: xor r14d, r14d
// asm:   0x18235fca9: mov qword ptr [rsp + 0x28], r14
// asm:   0x18235fcae: mov byte ptr [rsp + 0x20], r14b
// asm:   0x18235fcb3: mov r9, rbx
// asm:   0x18235fcb6: mov rdx, qword ptr [rsp + 0x30]
// asm:   0x18235fcbb: mov rcx, rdi
// asm:   0x18235fd68: xor r8d, r8d
// asm:   0x18235fd6b: mov rdx, qword ptr [rdi + 0x18]
// asm:   0x18235fd6f: mov rcx, rsi
// asm:   0x18235fd72: call 0x182360340  ; ApplicationManagers_Api_AottgApiClient__ParseError()
// asm:   0x18235fd77: mov rbx, rax
// asm:   0x18235fd7a: xor r9d, r9d
// asm:   0x18235fd7d: mov r8, rsi
// asm:   0x18235fd80: mov rdx, rdi
// asm:   0x18235fd83: mov rcx, r14
// asm:   0x18235fd86: call 0x18235fde0  ; ApplicationManagers_Api_AottgApiClient__LogHttpFailure()
// asm:   0x18235fd8b: xor r14d, r14d
// asm:   0x18235fd8e: mov qword ptr [rsp + 0x28], r14
// asm:   0x18235fd93: mov byte ptr [rsp + 0x20], r14b
// asm:   0x18235fd98: mov r9, qword ptr [rdi + 0x28]
// asm:   0x18235fd9c: mov r8, rbx
// asm:   0x18235fd9f: mov rdx, rsi
// asm:   0x18235fda2: mov rcx, qword ptr [rdi + 0x18]
// asm:   0x18235fda6: jmp 0x18235fcbe
// asm:   0x18235fdc9: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x183339ce0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183339ce5: push rbx
// asm:   0x183339ce6: push rbp
// asm:   0x183339ce7: push rdi
// asm:   0x183339ce8: sub rsp, 0x30
// asm:   0x183339cec: mov rbp, rdx
// asm:   0x183339cef: mov rdi, qword ptr [rbp + 0x40]
// asm:   0x183339cf3: mov rax, qword ptr [rdi]
// asm:   0x183339cf6: mov rbx, qword ptr [rax]
// asm:   0x183339cf9: lea rcx, [rip + 0xd3f258]  ; TypeInfo_System_Exception
// asm:   0x183339d00: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183339d05: mov rcx, rax
// asm:   0x183339d08: mov rdx, rbx
// asm:   0x183339d0b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183339d10: test al, al
// asm:   0x183339d12: mov rax, qword ptr [rdi]
// asm:   0x183339d15: je 0x183339d27
// asm:   0x183339d17: mov qword ptr [rbp + 0x48], rax
// asm:   0x183339d1b: movabs rax, 0
// asm:   0x183339d25: jmp 0x183339d3c
// asm:   0x183339d27: mov qword ptr [rbp + 0x38], rax
// asm:   0x183339d2b: lea rdx, [rip + 0xca2256]
// asm:   0x183339d32: lea rcx, [rbp + 0x38]
// asm:   0x183339d36: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183339d3c: add rsp, 0x30
// asm:   0x183339d40: pop rdi
// asm:   0x183339d41: pop rbp
// asm:   0x183339d42: pop rbx
// asm:   0x183339d43: ret 

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiClient__HandleResponse
          (ApplicationManagers_Api_AottgApiRequest_o *request,
          ApplicationManagers_Api_AottgApiTransportRequest_o *transportRequest,
          ApplicationManagers_Api_AottgApiTransportResponse_o *response,MethodInfo *method)

{
  int64_t iVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *value;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  System_String_o *error;
  System_String_o **ppSVar4;
  System_String_o *responseText;
  
  if (response != (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) {
    ppSVar4 = &(response->fields).Text;
    if (*ppSVar4 == (System_String_o *)0x0) {
      ppSVar4 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    if (((response->fields).Result - 1U & 0xfffffffd) == 0) {
      pAVar3 = ApplicationManagers_Api_AottgApiClient__NetworkFailure
                         (request,transportRequest,response,(MethodInfo *)0x0);
      return pAVar3;
    }
    responseText = *ppSVar4;
    if (((response->fields).StatusCode < 200) || (299 < (ulonglong)(response->fields).StatusCode)) {
      error = ApplicationManagers_Api_AottgApiClient__ParseError
                        (responseText,(response->fields).StatusCode,(MethodInfo *)0x0);
      ApplicationManagers_Api_AottgApiClient__LogHttpFailure
                (transportRequest,response,responseText,(MethodInfo *)0x0);
      pAVar3 = ApplicationManagers_Api_AottgApiResult__Fail
                         ((response->fields).StatusCode,responseText,error,(response->fields).Error,false,
                          (MethodInfo *)0x0);
      return pAVar3;
    }
    if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
      value = (SimpleJSONFixed_JSONNode_o *)0x0;
      if ((request->fields).ParseJson != false) {
        bVar2 = System_String__IsNullOrEmpty(responseText,(MethodInfo *)0x0);
        if (!bVar2) {
          value = SimpleJSONFixed_JSON__Parse(responseText,(MethodInfo *)0x0);
        }
      }
      iVar1 = (response->fields).StatusCode;
      if (Il2CppMethodInitialized_184347a57 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiResult);
        Il2CppMethodInitialized_184347a57 = '\x01';
      }
      pAVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiResult);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar3,(MethodInfo *)0x0);
      if (pAVar3 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
        (pAVar3->fields)._Success_k__BackingField = true;
        (pAVar3->fields)._StatusCode_k__BackingField = iVar1;
        if (responseText == (System_String_o *)0x0) {
          responseText = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        (pAVar3->fields)._ResponseText_k__BackingField = responseText;
        Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._ResponseText_k__BackingField,responseText);
        (pAVar3->fields)._Json_k__BackingField = value;
        Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._Json_k__BackingField,value);
        return pAVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$NetworkFailure
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiClient__NetworkFailure (ApplicationManagers_Api_AottgApiRequest_o* request, ApplicationManagers_Api_AottgApiTransportRequest_o* transportRequest, ApplicationManagers_Api_AottgApiTransportResponse_o* response, const MethodInfo* method);
// 0x182360020

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiClient__NetworkFailure
          (ApplicationManagers_Api_AottgApiRequest_o *request,
          ApplicationManagers_Api_AottgApiTransportRequest_o *transportRequest,
          ApplicationManagers_Api_AottgApiTransportResponse_o *response,MethodInfo *method)

{
  int64_t iVar1;
  System_String_o *value;
  System_String_o *value_00;
  System_String_array *values;
  System_String_o *pSVar2;
  ApplicationManagers_Api_AottgApiResult_o *__this;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_184347a4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiTransportResult);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&" responseCode=");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgApiClient: network error ");
    il2cpp_codegen_initialize_runtime_metadata(&"network_error");
    il2cpp_codegen_initialize_runtime_metadata(&" error=");
    il2cpp_codegen_initialize_runtime_metadata(&" result=");
    Il2CppMethodInitialized_184347a4f = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
  pSVar2 = "AottgApiClient: network error ";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "AottgApiClient: network error ";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar2);
      if (transportRequest == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) goto label_182360329;
      if (1 < (uint)values->max_length) {
        pSVar2 = (transportRequest->fields).Method;
        values->m_Items[1] = pSVar2;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar2);
        pSVar2 = " ";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = " ";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar2);
          if (3 < (uint)values->max_length) {
            pSVar2 = (transportRequest->fields).Url;
            values->m_Items[3] = pSVar2;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar2);
            pSVar2 = " result=";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = " result=";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar2);
              if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) goto label_182360329;
              local_48.klass = (System_Enum_c *)TypeInfo_ApplicationManagers_Api_AottgApiTransportResult;
              local_38 = (response->fields).Result;
              local_48.monitor = &g_data_ffffffffffffffff;
              pSVar2 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar2;
                Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar2);
                pSVar2 = " responseCode=";
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = " responseCode=";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar2);
                  pSVar2 = System_Int64__ToString(&(response->fields).StatusCode,(MethodInfo *)0x0);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar2;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 7,pSVar2);
                    pSVar2 = " error=";
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = " error=";
                      Il2CppCodeGenWriteBarrier(values->m_Items + 8,pSVar2);
                      if (9 < (uint)values->max_length) {
                        pSVar2 = (response->fields).Error;
                        values->m_Items[9] = pSVar2;
                        Il2CppCodeGenWriteBarrier(values->m_Items + 9,pSVar2);
                        pSVar2 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                        }
                        UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
                        if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
                          if ((request->fields).ReportNetworkError != false) {
                            ApplicationManagers_AottgNetworkNotifications__TryReport
                                      ("network_error",(MethodInfo *)0x0);
                          }
                          value_00 = "network_error";
                          iVar1 = (response->fields).StatusCode;
                          pSVar2 = (response->fields).Text;
                          value = (response->fields).Error;
                          if (Il2CppMethodInitialized_184347a58 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&TypeInfo_ApplicationManagers_Api_AottgApiResult);
                            Il2CppMethodInitialized_184347a58 = '\x01';
                          }
                          __this = il2cpp_codegen_object_new
                                             ((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiResult);
                          System_Object___ctor
                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,
                                     (MethodInfo *)0x0);
                          if (__this != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
                            (__this->fields)._Success_k__BackingField = false;
                            (__this->fields)._StatusCode_k__BackingField = iVar1;
                            if (pSVar2 == (System_String_o *)0x0) {
                              pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                            }
                            (__this->fields)._ResponseText_k__BackingField = pSVar2;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._ResponseText_k__BackingField,pSVar2);
                            (__this->fields)._Error_k__BackingField = value_00;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,value_00);
                            (__this->fields)._RawError_k__BackingField = value;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._RawError_k__BackingField,value);
                            (__this->fields)._IsCanceled_k__BackingField = false;
                            return __this;
                          }
                          ThrowNullReferenceException();
                        }
                        goto label_182360329;
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
label_182360329:
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$IsNetworkError
// il2cpp: bool ApplicationManagers_Api_AottgApiClient__IsNetworkError (int32_t result, const MethodInfo* method);
// 0x18235fdd0

bool ApplicationManagers_Api_AottgApiClient__IsNetworkError(int32_t result,MethodInfo *method)

{
  if (result == 1) {
    return true;
  }
  return result == 3;
}


// ApplicationManagers.Api.AottgApiClient$$ParseError
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__ParseError (System_String_o* responseText, int64_t responseCode, const MethodInfo* method);
// 0x182360340
// eh: try 0x18236038e..0x182360416 -> pad 0x183315840 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182360416: jmp 0x18236041a
// asm:   0x182360418: jmp 0x18236041a
// asm:   0x18236042f: mov rdi, qword ptr [rsp + 0x48]
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

System_String_o *
ApplicationManagers_Api_AottgApiClient__ParseError
          (System_String_o *responseText,int64_t responseCode,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *node;
  System_String_o *pSVar2;
  int64_t local_res8;
  int64_t local_res10;
  
  local_res10 = responseCode;
  if (Il2CppMethodInitialized_184347a50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"message");
    il2cpp_codegen_initialize_runtime_metadata(&"error");
    Il2CppMethodInitialized_184347a50 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(responseText,(MethodInfo *)0x0);
  if (bVar1) {
label_18236042d:
    local_res8 = responseCode;
    if (Il2CppMethodInitialized_184347a55 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"http_");
      Il2CppMethodInitialized_184347a55 = '\x01';
    }
    pSVar2 = System_Int64__ToString(&local_res8,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("http_",pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  node = SimpleJSONFixed_JSON__Parse(responseText,(MethodInfo *)0x0);
  pSVar2 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"error",(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"message",(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = ApplicationManagers_Api_AottgApiClient__FieldValue
                         (node,"code",(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if (bVar1) goto label_18236042d;
    }
  }
  return pSVar2;
}


// ApplicationManagers.Api.AottgApiClient$$FieldValue
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__FieldValue (SimpleJSONFixed_JSONNode_o* node, System_String_o* name, const MethodInfo* method);
// 0x18235f890

System_String_o *
ApplicationManagers_Api_AottgApiClient__FieldValue
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint16_t c;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *pSVar2;
  System_String_o *str1;
  MethodInfo *pMVar3;
  uint16_t local_res8 [4];
  
  if (Il2CppMethodInitialized_184347a51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a51 = '\x01';
  }
  local_res8[0] = 0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)name);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (a == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18235fa7e;
      pSVar2 = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if (!bVar1) goto label_18235fa49;
    }
    if (name != (System_String_o *)0x0) {
      pMVar3 = (MethodInfo *)0x0;
      c = System_String__get_Chars(name,0,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      local_res8[0] = System_Char__ToUpperInvariant(c,(MethodInfo *)0x0);
      pSVar2 = System_Char__ToString(local_res8,(System_IFormatProvider_o *)0x0,pMVar3);
      str1 = System_String__Substring(name,1,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo *)System_String__Concat_1969e50(pSVar2,str1,(MethodInfo *)0x0);
      a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,pMVar3);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (a == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18235fa7e;
        pSVar2 = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
        bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
        if (!bVar1) {
label_18235fa49:
          pSVar2 = (*(a->klass->vtable)._9_SetUnhandledAttributes.methodPtr)
                             (a,(a->klass->vtable)._9_SetUnhandledAttributes.method);
          return pSVar2;
        }
      }
      return (System_String_o *)0x0;
    }
  }
label_18235fa7e:
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgApiClient$$LogHttpFailure
// il2cpp: void ApplicationManagers_Api_AottgApiClient__LogHttpFailure (ApplicationManagers_Api_AottgApiTransportRequest_o* request, ApplicationManagers_Api_AottgApiTransportResponse_o* response, System_String_o* text, const MethodInfo* method);
// 0x18235fde0

void ApplicationManagers_Api_AottgApiClient__LogHttpFailure
               (ApplicationManagers_Api_AottgApiTransportRequest_o *request,
               ApplicationManagers_Api_AottgApiTransportResponse_o *response,System_String_o *text,
               MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347a52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AottgApiClient: HTTP ");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&" body=");
    il2cpp_codegen_initialize_runtime_metadata(&" error=");
    Il2CppMethodInitialized_184347a52 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
  pSVar1 = "AottgApiClient: HTTP ";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "AottgApiClient: HTTP ";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) goto label_18236000e;
      pSVar1 = System_Int64__ToString(&(response->fields).StatusCode,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar1);
        pSVar1 = " ";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = " ";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          if (request == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) goto label_18236000e;
          if (3 < (uint)values->max_length) {
            pSVar1 = (request->fields).Method;
            values->m_Items[3] = pSVar1;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar1);
            pSVar1 = " ";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = " ";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              if (5 < (uint)values->max_length) {
                pSVar1 = (request->fields).Url;
                values->m_Items[5] = pSVar1;
                Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar1);
                pSVar1 = " error=";
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = " error=";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar1);
                  if (7 < (uint)values->max_length) {
                    pSVar1 = (response->fields).Error;
                    values->m_Items[7] = pSVar1;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 7,pSVar1);
                    pSVar1 = " body=";
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = " body=";
                      Il2CppCodeGenWriteBarrier(values->m_Items + 8,pSVar1);
                      if (9 < (uint)values->max_length) {
                        values->m_Items[9] = text;
                        Il2CppCodeGenWriteBarrier(values->m_Items + 9,text);
                        pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                        if ((399 < (response->fields).StatusCode) &&
                           ((ulonglong)(response->fields).StatusCode < 500)) {
                          if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                          }
                          UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                          return;
                        }
                        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                        }
                        UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
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
label_18236000e:
  ThrowNullReferenceException();
}


