// Type: ApplicationManagers.Credits.AottgCreditsService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsService.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsService.UnitKey$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService_UnitKey___cctor (const MethodInfo* method);
// 0x5e24400

void ApplicationManagers_Credits_AottgCreditsService_UnitKey___cctor(MethodInfo *method)

{
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___ctor (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x5e24410

void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___ctor
               (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$<GetCredits>b__0
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___GetCredits_b__0 (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o* __this, ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o* result, const MethodInfo* method);
// 0x5e24420

void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___GetCredits_b__0
               (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *result,MethodInfo *method)

{
  System_Action_AottgCreditsResult__o *pSVar1;
  code *vtableDispatch;
  ApplicationManagers_Credits_AottgCreditsResult_o *pAVar2;
  
  pSVar1 = (__this->fields).onResult;
  pAVar2 = ApplicationManagers_Credits_AottgCreditsService__MapResult(result,(MethodInfo *)0x0);
  if (pSVar1 == (System_Action_AottgCreditsResult__o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$MoveNext
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this, const MethodInfo* method);
// 0x5e24450
// eh: try 0x5e24539..0x5e24925 -> pad 0x5e24943 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e24958..0x5e249bc -> pad 0x5e249bc (+1 call sites) cleanup
// eh: try 0x5e249bf..0x5e249c4 -> pad 0x5e249cc catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e24925: jmp 0x5e24945
// asm:   0x5e24927: jmp 0x5e24945
// asm:   0x5e24929: jmp 0x5e24945
// asm:   0x5e2492b: jmp 0x5e24945
// asm:   0x5e2492d: jmp 0x5e24945
// asm:   0x5e2492f: jmp 0x5e24945
// asm:   0x5e24931: jmp 0x5e24945
// asm:   0x5e24933: jmp 0x5e24945
// asm:   0x5e24935: jmp 0x5e24945
// asm:   0x5e24937: jmp 0x5e24945
// asm:   0x5e24939: jmp 0x5e24945
// asm:   0x5e2493b: jmp 0x5e24945
// asm:   0x5e2493d: jmp 0x5e24945
// asm:   0x5e2493f: jmp 0x5e24945
// asm:   0x5e24941: jmp 0x5e24945
// asm:   0x5e24943: jmp 0x5e24945
// asm:   0x5e24945: mov r14, rax
// asm:   0x5e24948: cmp edx, 1
// asm:   0x5e2494b: jne 0x5e249c4
// asm:   0x5e2494d: mov rdi, r14
// asm:   0x5e24950: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e24955: mov rbx, rax
// asm:   0x5e24958: lea rdi, [rip + 0x1453761]  ; TypeInfo_System_Exception
// asm:   0x5e2495f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e24964: mov rcx, qword ptr [rbx]
// asm:   0x5e24967: mov rsi, qword ptr [rcx]
// asm:   0x5e2496a: mov rdi, rax
// asm:   0x5e2496d: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e24972: test al, al
// asm:   0x5e24974: je 0x5e2499b
// asm:   0x5e24976: mov rbx, qword ptr [rbx]
// asm:   0x5e24979: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2497e: mov dword ptr [r15], 0xfffffffe
// asm:   0x5e24985: add r15, 8
// asm:   0x5e24989: mov rdi, r15
// asm:   0x5e2498c: mov rsi, rbx
// asm:   0x5e2498f: xor edx, edx
// asm:   0x5e24991: call 0x475eec0  ; il2cpp_runtime_helper_0475eec0()
// asm:   0x5e24996: jmp 0x5e2490e
// asm:   0x5e2499b: mov edi, 8
// asm:   0x5e249a0: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e249a5: mov rcx, qword ptr [rbx]
// asm:   0x5e249a8: mov qword ptr [rax], rcx
// asm:   0x5e249ab: lea rsi, [rip + 0x1008b4e]
// asm:   0x5e249b2: mov rdi, rax
// asm:   0x5e249b5: xor edx, edx
// asm:   0x5e249b7: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e249bc: mov r14, rax
// asm:   0x5e249bf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e249c4: mov rdi, r14
// asm:   0x5e249c7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e249cc: mov rdi, rax
// asm:   0x5e249cf: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext
               (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o *__this,
               MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiRequest_Fields *targetAddress;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *pSVar3;
  Il2CppObject *pIVar4;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  Il2CppClass *pIVar9;
  VirtualInvokeData *pVVar10;
  ApplicationManagers_Api_AottgApiResult_o *pAVar11;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar12;
  ulong uVar13;
  long lVar14;
  MethodInfo *in_R8;
  Il2CppObject *local_98;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_90;
  undefined8 local_88;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_78;
  System_String_o *local_58;
  ApplicationManagers_Credits_AottgCreditsResponse_o *local_50;
  Il2CppObject *local_48;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_40;
  int16_t local_38;
  undefined6 uStack_36;
  
  if (Il2CppMethodInitialized_075484e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiClient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26d0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/credits");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgCreditsService: failed to parse /v1/credits response.");
    Il2CppMethodInitialized_075484e1 = '\x01';
  }
  local_50 = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_98 = (Il2CppObject *)0x0;
  pAStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_88 = 0;
  if ((__this->fields).__1__state == 0) {
    pCVar5 = &(__this->fields).__u__1;
    local_88._0_2_ = (pCVar5->fields).task.fields.token;
    local_88._2_6_ = *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12;
    local_98 = (Il2CppObject *)(__this->fields).__u__1.fields.task.fields.source;
    pAStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)(__this->fields).__u__1.fields.task.fields.result
    ;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiClient);
    ApplicationManagers_Api_AottgApiClient___ctor(__this_00,method);
    request = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    if (Il2CppMethodInitialized_07548510 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"GET");
      Il2CppMethodInitialized_07548510 = '\x01';
    }
    targetAddress = &request->fields;
    (request->fields).Method = "GET";
    Il2CppCodeGenWriteBarrier(&targetAddress->Method);
    (request->fields).ReportNetworkError = true;
    System_Object___ctor((Il2CppObject *)request,(MethodInfo *)0x0);
    targetAddress->Method = "GET";
    Il2CppCodeGenWriteBarrier(&targetAddress->Method);
    (request->fields).Path = "/v1/credits";
    Il2CppCodeGenWriteBarrier(&(request->fields).Path);
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ThrowNullReferenceException();
    }
    ApplicationManagers_Api_AottgApiClient__SendAsync
              (&local_78,__this_00,request,(System_Threading_CancellationToken_o)0x0,in_R8);
    local_38 = local_78.fields.token;
    uStack_36 = local_78.fields._18_6_;
    local_48 = (Il2CppObject *)local_78.fields.source;
    pAStack_40 = local_78.fields.result;
    local_78.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_78.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_78.fields.token = 0;
    local_78.fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_78.fields.token = local_38;
    local_78.fields._18_6_ = uStack_36;
    local_78.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_48;
    local_78.fields.result = pAStack_40;
    Il2CppCodeGenWriteBarrier((void **)&local_78);
    local_88._0_2_ = local_78.fields.token;
    local_88._2_6_ = local_78.fields._18_6_;
    local_98 = (Il2CppObject *)local_78.fields.source;
    pAStack_90 = local_78.fields.result;
    cVar7 = il2cpp_runtime_helper_045ee340(&local_98,
                         MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    if (cVar7 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source =
           (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_98;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pAStack_90;
      pCVar5 = &(__this->fields).__u__1;
      (pCVar5->fields).task.fields.token = (int16_t)local_88;
      *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12 = local_88._2_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      il2cpp_runtime_helper_0350ce70(&(__this->fields).__t__builder,&local_98,__this,
                   MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26d0
                  );
      return;
    }
  }
  pIVar4 = local_98;
  if (local_98 == (Il2CppObject *)0x0) {
    pAVar11 = pAStack_90;
  }
  else {
    sVar6 = (int16_t)local_88;
    pIVar9 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult->klass;
    if (((pIVar9->_2).bitflags1 & 1) == 0) {
      pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
    }
    pIVar9 = pIVar9->rgctx_data[5].klass;
    if (((pIVar9->_2).bitflags1 & 1) == 0) {
      pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
    }
    pIVar1 = pIVar4->klass;
    uVar13 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar14) == pIVar9) {
          pVVar10 = (VirtualInvokeData *)&pIVar1->vtable[*(int *)((long)&pIVar2->offset + lVar14)].methodPtr;
          goto label_05e24788;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4,pIVar9,0);
label_05e24788:
    pAVar11 = (ApplicationManagers_Api_AottgApiResult_o *)
              (*pVVar10->methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar10->method);
  }
  if (pAVar11 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pAVar11->fields)._Success_k__BackingField == false) {
    pSVar3 = (__this->fields).onComplete;
    if (pSVar3 != (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)0x0) {
      pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((pAVar11->fields)._Error_k__BackingField,
                           (MethodInfo_4CB4E10 *)
                           MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Fail)
      ;
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
    }
  }
  else {
    bVar8 = ApplicationManagers_Credits_AottgCreditsParser__TryParse
                      ((pAVar11->fields)._ResponseText_k__BackingField,&local_50,&local_58,(MethodInfo *)0x0);
    if (bVar8) {
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                            ((Il2CppObject *)local_50,
                             (MethodInfo_4CB4D60 *)
                             MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Ok)
        ;
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
      }
    }
    else {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)"AottgCreditsService: failed to parse /v1/credits response.",(MethodInfo *)0x0);
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            (local_58,(MethodInfo_4CB4E10 *)
                                      MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Fail
                            );
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
      }
    }
  }
  (__this->fields).__1__state = -2;
  if (Il2CppMethodInitialized_07541078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise);
    Il2CppMethodInitialized_07541078 = '\x01';
  }
  pIVar4 = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar4->klass;
    uVar13 = (ulong)(pIVar9->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar2 = (pIVar9->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)
             ((long)&pIVar2->interfaceType + lVar14) ==
            TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise) {
          pVVar10 = (VirtualInvokeData *)
                    &pIVar9->vtable[*(int *)((long)&pIVar2->offset + lVar14) + 2].methodPtr;
          goto label_05e24905;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar4,(Il2CppClass *)
                                TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,2
                        );
label_05e24905:
    (*pVVar10->methodPtr)(pIVar4,pVVar10->method);
  }
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$SetStateMachine
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__SetStateMachine (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5e24c00

void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__SetStateMachine
               (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$Init
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__Init (const MethodInfo* method);
// 0x5e09340

void ApplicationManagers_Credits_AottgCreditsService__Init(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  ApplicationManagers_Credits_AottgCreditsService_o *pAVar1;
  System_Action_T1__T2__o *__this;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__AottgCreditsResponse__o *__this_01;
  
  if (Il2CppMethodInitialized_075484d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Action_AottgCreditsService_UnitKey_Action_AottgQueryFetchResult_AottgCreditsResponse
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Credits_AottgCreditsService_FetchCredits);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AottgCreditsService);
    Il2CppMethodInitialized_075484d1 = '\x01';
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)
                      TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_AottgCreditsService);
  TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance);
  pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance;
  __this = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Action_AottgCreditsService_UnitKey_Action_AottgQueryFetchResult_AottgCreditsResponse
                     );
  System_Action_AottgCreditsService_UnitKey__object____ctor
            (__this,(Il2CppObject *)pAVar1,
             (intptr_t)MethodInfo_ApplicationManagers_Credits_AottgCreditsService_FetchCredits,
             (MethodInfo_4A8AF10 *)0x0);
  if ((TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache);
  }
  successTtl.fields._ticks =
       (System_TimeSpan_Fields)
       (TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->static_fields->DefaultTtl).fields._ticks;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_00,successTtl,(System_Nullable_TimeSpan__o)ZEXT816(0),true,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse
                        );
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_01,
             (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)__this,
             (System_Func_DateTimeOffset__o *)0x0,__this_00,
             (MethodInfo_4CB4150 *)
             MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse_ctor
            );
  if (pAVar1 == (ApplicationManagers_Credits_AottgCreditsService_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pAVar1->fields)._cache = __this_01;
  Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._cache);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$GetCredits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__GetCredits (System_Action_AottgCreditsResult__o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x5e23c70

void ApplicationManagers_Credits_AottgCreditsService__GetCredits
               (System_Action_AottgCreditsResult__o *onResult,bool forceRefresh,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key;
  ApplicationManagers_Credits_AottgCreditsService_o *pAVar1;
  System_Action_AottgCreditsResult__o *pSVar2;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__AottgCreditsResponse__o *__this;
  System_String_o *pSVar3;
  bool bVar4;
  ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *__this_00;
  ApplicationManagers_Credits_AottgCreditsResult_o *__this_01;
  System_Action_AottgQueryResult_AottgCreditsResponse___o *__this_02;
  
  if (Il2CppMethodInitialized_075484d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgQueryResult_AottgCreditsResponse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse_Get
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Credits_AottgCreditsService_c__DisplayClass3_0_GetCredits_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditsService_c__DisplayClass3_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditsService_UnitKey);
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    Il2CppMethodInitialized_075484d2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_Credits_AottgCreditsService_c__DisplayClass3_0);
  ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *)0x0) {
    (__this_00->fields).onResult = onResult;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onResult);
    pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar3 = "not_initialized";
    if (bVar4) {
      pSVar2 = (__this_00->fields).onResult;
      if (pSVar2 == (System_Action_AottgCreditsResult__o *)0x0) {
        return;
      }
      if (Il2CppMethodInitialized_075484c3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
        Il2CppMethodInitialized_075484c3 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields)._State_k__BackingField = 3;
      (__this_01->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0
      ;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Credits_k__BackingField);
      (__this_01->fields)._Error_k__BackingField = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Error_k__BackingField);
      (__this_01->fields)._IsFromCache_k__BackingField = false;
      (__this_01->fields)._IsStale_k__BackingField = false;
      (__this_01->fields)._IsRefreshing_k__BackingField = false;
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,__this_01,(pSVar2->fields).method);
      return;
    }
    pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance;
    if (pAVar1 != (ApplicationManagers_Credits_AottgCreditsService_o *)0x0) {
      __this = (pAVar1->fields)._cache;
      if ((TypeInfo_ApplicationManagers_Credits_AottgCreditsService_UnitKey->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsService_UnitKey);
      }
      key.fields._tail[0] =
           (ApplicationManagers_Credits_AottgCreditsService_UnitKey_Fields)
           (TypeInfo_ApplicationManagers_Credits_AottgCreditsService_UnitKey->static_fields->Value).fields.
           _tail[0];
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_AottgQueryResult_AottgCreditsResponse);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_02,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_Credits_AottgCreditsService_c__DisplayClass3_0_GetCredits_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__AottgCreditsResponse__o
                     *)0x0) {
        ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Get
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,key,
                   (System_Action_AottgQueryResult_TValue___o *)__this_02,forceRefresh,
                   (MethodInfo_4CB44E0 *)
                   MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse_Get
                  );
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsService$$ClearSessionCache
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__ClearSessionCache (const MethodInfo* method);
// 0x5e23eb0

void ApplicationManagers_Credits_AottgCreditsService__ClearSessionCache(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__AottgCreditsResponse__o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075484d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse_Clear
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075484d3 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance;
    if (pAVar1 == (ApplicationManagers_Credits_AottgCreditsService_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this = (pAVar1->fields)._cache;
    if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__AottgCreditsResponse__o
                   *)0x0) {
      ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Clear
                ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
                 (MethodInfo_4CB4480 *)
                 MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse_Clear
                );
      return;
    }
  }
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$FetchCredits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCredits (ApplicationManagers_Credits_AottgCreditsService_o* __this, ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key, System_Action_AottgQueryFetchResult_AottgCreditsResponse___o* onComplete, const MethodInfo* method);
// 0x5e23f70

void ApplicationManagers_Credits_AottgCreditsService__FetchCredits
               (ApplicationManagers_Credits_AottgCreditsService_o *__this,
               ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key,
               System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *onComplete,MethodInfo *method)

{
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  Cysharp_Threading_Tasks_UniTask_o task;
  
  CVar1 = ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync
                    (__this,onComplete,(MethodInfo *)onComplete);
  task.fields._12_4_ = 0;
  task.fields.source = CVar1.fields.source;
  task.fields.token = CVar1.fields.token;
  task.fields._10_2_ = CVar1.fields._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$FetchCreditsAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync (ApplicationManagers_Credits_AottgCreditsService_o* __this, System_Action_AottgQueryFetchResult_AottgCreditsResponse___o* onComplete, const MethodInfo* method);
// 0x5e23f90

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync
          (ApplicationManagers_Credits_AottgCreditsService_o *__this,
          System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *onComplete,MethodInfo *method)

{
  MethodInfo *pMVar1;
  Il2CppRGCTXData *pIVar2;
  Cysharp_Threading_Tasks_UniTask_o CVar3;
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_Fields local_48;
  
  if (Il2CppMethodInitialized_075484d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet
              );
    Il2CppMethodInitialized_075484d4 = '\x01';
  }
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)0x0;
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder);
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete);
  pMVar1 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet;
  local_48.__1__state = -1;
  pIVar2 = (
           MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet
           ->field7_0x38).rgctx_data;
  if (pIVar2 == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet
              );
    pIVar2 = (pMVar1->field7_0x38).rgctx_data;
  }
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext
            ((ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o *)&local_48,
             pIVar2[2].method);
  CVar3.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0386e920(&local_48.__t__builder,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar3.fields;
}


// ApplicationManagers.Credits.AottgCreditsService$$MapResult
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsService__MapResult (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o* result, const MethodInfo* method);
// 0x5e24040

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsService__MapResult
          (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *result,MethodInfo *method)

{
  System_String_o *pSVar1;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar2;
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if (Il2CppMethodInitialized_075484d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_Error);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_IsFromCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_State);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_Value);
    Il2CppMethodInitialized_075484d5 = '\x01';
  }
  if (result == (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *)0x0) {
    ThrowNullReferenceException();
  }
  switch((result->fields)._State_k__BackingField) {
  case 0:
    if (Il2CppMethodInitialized_075484c0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c0 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult)
    ;
    uVar5 = false;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 0;
    (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
    (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
    bVar3 = true;
    bVar4 = false;
    break;
  case 1:
    pAVar2 = (result->fields)._Value_k__BackingField;
    uVar5 = (result->fields)._IsFromCache_k__BackingField;
    if (Il2CppMethodInitialized_075484c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c1 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult)
    ;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 1;
    (__this->fields)._Credits_k__BackingField = pAVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
    (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
    goto label_05e24284;
  case 2:
    pAVar2 = (result->fields)._Value_k__BackingField;
    if (Il2CppMethodInitialized_075484c2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c2 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult)
    ;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 2;
    (__this->fields)._Credits_k__BackingField = pAVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
    (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
    uVar5 = true;
    bVar4 = true;
    bVar3 = true;
    break;
  default:
    pSVar1 = (result->fields)._Error_k__BackingField;
    if (Il2CppMethodInitialized_075484c3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c3 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult)
    ;
    uVar5 = 0;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 3;
    (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
    (__this->fields)._Error_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
label_05e24284:
    bVar4 = false;
    bVar3 = false;
    break;
  case 4:
    pAVar2 = (result->fields)._Value_k__BackingField;
    pSVar1 = (result->fields)._Error_k__BackingField;
    if (Il2CppMethodInitialized_075484c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c4 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult)
    ;
    bVar3 = false;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 4;
    (__this->fields)._Credits_k__BackingField = pAVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
    (__this->fields)._Error_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
    uVar5 = true;
    bVar4 = true;
  }
  (__this->fields)._IsFromCache_k__BackingField = (bool)uVar5;
  (__this->fields)._IsStale_k__BackingField = bVar4;
  (__this->fields)._IsRefreshing_k__BackingField = bVar3;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsService$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___ctor (ApplicationManagers_Credits_AottgCreditsService_o* __this, const MethodInfo* method);
// 0x5e24320

void ApplicationManagers_Credits_AottgCreditsService___ctor
               (ApplicationManagers_Credits_AottgCreditsService_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


