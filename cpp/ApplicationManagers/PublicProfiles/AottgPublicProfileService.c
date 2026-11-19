// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileService.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x5e20e60

void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$<GetProfile>b__0
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___GetProfile_b__0 (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o* __this, ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o* result, const MethodInfo* method);
// 0x5e21210

void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___GetProfile_b__0
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *result,MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__InvokeProfileResult
            (result,(__this->fields).onResult,method);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<FetchProfileAsync>d__7$$MoveNext
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__MoveNext (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this, const MethodInfo* method);
// 0x5e21220
// eh: try 0x5e21315..0x5e2170a -> pad 0x5e2172e (+19 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e21741..0x5e217a5 -> pad 0x5e217a5 (+1 call sites) cleanup
// eh: try 0x5e217a8..0x5e217ad -> pad 0x5e217b5 catch (...) [compiler noexcept guard]
// asm: 56 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2152c: nop dword ptr [rax]
// asm:   0x5e2170a: jmp 0x5e2172e
// asm:   0x5e2170c: jmp 0x5e2172e
// asm:   0x5e2170e: jmp 0x5e2172e
// asm:   0x5e21710: jmp 0x5e2172e
// asm:   0x5e21712: jmp 0x5e2172e
// asm:   0x5e21714: jmp 0x5e2172e
// asm:   0x5e21716: jmp 0x5e2172e
// asm:   0x5e21718: jmp 0x5e2172e
// asm:   0x5e2171a: jmp 0x5e2172e
// asm:   0x5e2171c: jmp 0x5e2172e
// asm:   0x5e2171e: jmp 0x5e2172e
// asm:   0x5e21720: jmp 0x5e2172e
// asm:   0x5e21722: jmp 0x5e2172e
// asm:   0x5e21724: jmp 0x5e2172e
// asm:   0x5e21726: jmp 0x5e2172e
// asm:   0x5e21728: jmp 0x5e2172e
// asm:   0x5e2172a: jmp 0x5e2172e
// asm:   0x5e2172c: jmp 0x5e2172e
// asm:   0x5e2172e: mov r14, rax
// asm:   0x5e21731: cmp edx, 1
// asm:   0x5e21734: jne 0x5e217ad
// asm:   0x5e21736: mov rdi, r14
// asm:   0x5e21739: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2173e: mov rbx, rax
// asm:   0x5e21741: lea rdi, [rip + 0x1456978]  ; TypeInfo_System_Exception
// asm:   0x5e21748: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e2174d: mov rcx, qword ptr [rbx]
// asm:   0x5e21750: mov rsi, qword ptr [rcx]
// asm:   0x5e21753: mov rdi, rax
// asm:   0x5e21756: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e2175b: test al, al
// asm:   0x5e2175d: je 0x5e21784
// asm:   0x5e2175f: mov rbx, qword ptr [rbx]
// asm:   0x5e21762: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e21767: mov dword ptr [r15], 0xfffffffe
// asm:   0x5e2176e: add r15, 8
// asm:   0x5e21772: mov rdi, r15
// asm:   0x5e21775: mov rsi, rbx
// asm:   0x5e21778: xor edx, edx
// asm:   0x5e2177a: call 0x475eec0  ; il2cpp_runtime_helper_0475eec0()
// asm:   0x5e2177f: jmp 0x5e216ee
// asm:   0x5e21784: mov edi, 8
// asm:   0x5e21789: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e2178e: mov rcx, qword ptr [rbx]
// asm:   0x5e21791: mov qword ptr [rax], rcx
// asm:   0x5e21794: lea rsi, [rip + 0x100bd65]
// asm:   0x5e2179b: mov rdi, rax
// asm:   0x5e2179e: xor edx, edx
// asm:   0x5e217a0: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e217a5: mov r14, rax
// asm:   0x5e217a8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e217ad: mov rdi, r14
// asm:   0x5e217b0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e217b5: mov rdi, rax
// asm:   0x5e217b8: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__MoveNext
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o *__this
               ,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Action_AottgQueryFetchResult_AottgPublicProfile___o *pSVar3;
  Il2CppObject *pIVar4;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_AottgApiRequest_o *__this_01;
  System_String_o *pSVar9;
  Il2CppClass *pIVar10;
  VirtualInvokeData *pVVar11;
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar12;
  ulong uVar13;
  long lVar14;
  Il2CppObject *local_98;
  MethodInfo *pMStack_90;
  undefined8 local_88;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_78;
  System_String_o *local_58;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *local_50;
  Il2CppObject *local_48;
  MethodInfo *pMStack_40;
  int16_t local_38;
  undefined6 uStack_36;
  
  if (Il2CppMethodInitialized_075484b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiClient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26d8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgPublicProfileService: failed to parse /v1/profiles response.");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/profiles/");
    Il2CppMethodInitialized_075484b4 = '\x01';
  }
  local_50 = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_98 = (Il2CppObject *)0x0;
  pMStack_90 = (MethodInfo *)0x0;
  local_88 = 0;
  if ((__this->fields).__1__state == 0) {
    pCVar5 = &(__this->fields).__u__1;
    local_88._0_2_ = (pCVar5->fields).task.fields.token;
    local_88._2_6_ = *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12;
    local_98 = (Il2CppObject *)(__this->fields).__u__1.fields.task.fields.source;
    pMStack_90 = (MethodInfo *)(__this->fields).__u__1.fields.task.fields.result;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiClient);
    ApplicationManagers_Api_AottgApiClient___ctor(__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    ApplicationManagers_Api_AottgApiRequest___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_01->fields).Method = "GET";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).Method);
    pSVar9 = (__this->fields).accountId;
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    pSVar9 = System_Uri__EscapeDataString(pSVar9,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_52f0320("/v1/profiles/",pSVar9,(MethodInfo *)0x0);
    (__this_01->fields).Path = pSVar9;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).Path);
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ThrowNullReferenceException();
    }
    ApplicationManagers_Api_AottgApiClient__SendAsync
              (&local_78,__this_00,__this_01,(System_Threading_CancellationToken_o)0x0,(MethodInfo *)0x0);
    local_38 = local_78.fields.token;
    uStack_36 = local_78.fields._18_6_;
    local_48 = (Il2CppObject *)local_78.fields.source;
    pMStack_40 = (MethodInfo *)local_78.fields.result;
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
    local_78.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)pMStack_40;
    Il2CppCodeGenWriteBarrier((void **)&local_78);
    local_88._0_2_ = local_78.fields.token;
    local_88._2_6_ = local_78.fields._18_6_;
    local_98 = (Il2CppObject *)local_78.fields.source;
    pMStack_90 = (MethodInfo *)local_78.fields.result;
    cVar7 = il2cpp_runtime_helper_045ee340(&local_98,
                         MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    if (cVar7 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source =
           (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_98;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pMStack_90;
      pCVar5 = &(__this->fields).__u__1;
      (pCVar5->fields).task.fields.token = (int16_t)local_88;
      *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12 = local_88._2_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      il2cpp_runtime_helper_0350cfa0(&(__this->fields).__t__builder,&local_98,__this,
                   MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26d8
                  );
      return;
    }
  }
  pIVar4 = local_98;
  if (local_98 == (Il2CppObject *)0x0) {
    method_00 = pMStack_90;
  }
  else {
    sVar6 = (int16_t)local_88;
    pIVar10 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult->klass;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    pIVar10 = pIVar10->rgctx_data[5].klass;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    pIVar1 = pIVar4->klass;
    uVar13 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar14) == pIVar10) {
          pVVar11 = (VirtualInvokeData *)&pIVar1->vtable[*(int *)((long)&pIVar2->offset + lVar14)].methodPtr;
          goto label_05e21568;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4,pIVar10,0);
label_05e21568:
    method_00 = (MethodInfo *)(*pVVar11->methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar11->method);
  }
  if (method_00 == (MethodInfo *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(char *)&method_00->invoker_method == '\0') {
    pSVar3 = (__this->fields).onComplete;
    if (pSVar3 != (System_Action_AottgQueryFetchResult_AottgPublicProfile___o *)0x0) {
      pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)method_00->parameters,
                           (MethodInfo_4CB4E10 *)
                           MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Fail);
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
    }
  }
  else {
    bVar8 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
                      ((System_String_o *)method_00->klass,&local_50,&local_58,method_00);
    if (bVar8) {
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_AottgPublicProfile___o *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                            ((Il2CppObject *)local_50,
                             (MethodInfo_4CB4D60 *)
                             MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Ok);
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
      }
    }
    else {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)"AottgPublicProfileService: failed to parse /v1/profiles response.",(MethodInfo *)0x0);
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_AottgPublicProfile___o *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            (local_58,(MethodInfo_4CB4E10 *)
                                      MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Fail
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
    pIVar10 = pIVar4->klass;
    uVar13 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)
             ((long)&pIVar2->interfaceType + lVar14) ==
            TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise) {
          pVVar11 = (VirtualInvokeData *)
                    &pIVar10->vtable[*(int *)((long)&pIVar2->offset + lVar14) + 2].methodPtr;
          goto label_05e216e5;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar4,(Il2CppClass *)
                                TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,2
                        );
label_05e216e5:
    (*pVVar11->methodPtr)(pIVar4,pVVar11->method);
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<FetchProfileAsync>d__7$$SetStateMachine
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__SetStateMachine (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5e217c0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__SetStateMachine
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o *__this
               ,System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$Init
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init (const MethodInfo* method);
// 0x5e094e0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *pAVar1;
  System_Action_string__Action_AottgQueryFetchResult_AottgPublicProfile____o *__this;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *__this_01;
  System_Nullable_TimeSpan__o failureTtl;
  System_Nullable_TimeSpan__o local_38;
  
  if (Il2CppMethodInitialized_075484ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_string_Action_AottgQueryFetchResult_AottgPublicProfile);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_FetchProfile);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_TimeSpan_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AottgPublicProfileService);
    Il2CppMethodInitialized_075484ae = '\x01';
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)
                      TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->
                      _instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_AottgPublicProfileService);
  TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance)
  ;
  pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Action_string_Action_AottgQueryFetchResult_AottgPublicProfile);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this,(Il2CppObject *)pAVar1,
             (intptr_t)MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_FetchProfile,
             (MethodInfo_4A89FC0 *)0x0);
  if ((TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
  }
  successTtl.fields._ticks =
       (System_TimeSpan_Fields)
       (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->SuccessTtl).fields
       ._ticks;
  local_38.fields._0_8_ = 0;
  local_38.fields.value.fields._ticks = (System_TimeSpan_Fields)0;
  System_Nullable_TimeSpan____ctor
            (&local_38,
             (System_TimeSpan_o)
             (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->FailureTtl).
             fields._ticks,(MethodInfo_3CDB020 *)MethodInfo_System_Nullable_TimeSpan_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
  failureTtl.fields._0_8_ = local_38.fields._0_8_ & 0xffffffff;
  failureTtl.fields.value.fields._ticks = local_38.fields.value.fields._ticks;
  ApplicationManagers_Api_AottgQueryPolicy___ctor(__this_00,successTtl,failureTtl,false,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile);
  ApplicationManagers_Api_AottgQueryCache_object__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_01,
             (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)__this,
             (System_Func_DateTimeOffset__o *)0x0,__this_00,
             (MethodInfo_4CB0740 *)
             MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_ctor);
  if (pAVar1 == (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pAVar1->fields)._cache = __this_01;
  Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._cache);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$GetProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile (System_String_o* accountId, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x5e20ca0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile
               (System_String_o *accountId,System_Action_AottgPublicProfileFetchResponse__o *onResult,
               MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *pAVar1;
  code *vtableDispatch;
  ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *__this;
  bool bVar2;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o *__this_00;
  System_String_o **ppSVar3;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar4;
  System_Action_AottgQueryResult_AottgPublicProfile___o *__this_01;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_Fields *targetAddress;
  System_Action_AottgPublicProfileFetchResponse__o *pSVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075484af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgQueryResult_AottgPublicProfile);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Get);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_c__DisplayClass3_0_GetProfile_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_c__DisplayClass3_0);
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_account_id");
    Il2CppMethodInitialized_075484af = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_c__DisplayClass3_0
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o *)0x0)
  {
label_05e20e5a:
    ThrowNullReferenceException();
  }
  targetAddress = &__this_00->fields;
  (__this_00->fields).onResult = onResult;
  Il2CppCodeGenWriteBarrier(&targetAddress->onResult);
  pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar5 = targetAddress->onResult;
    if (pSVar5 == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
      return;
    }
    ppSVar3 = &"not_initialized";
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
    if (!bVar2) {
      pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance
      ;
      if (pAVar1 != (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)0x0) {
        __this = (pAVar1->fields)._cache;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_AottgQueryResult_AottgPublicProfile);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_c__DisplayClass3_0_GetProfile_b__0
                   ,(MethodInfo_4A81BE0 *)0x0);
        if (__this != (ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *)0x0) {
          ApplicationManagers_Api_AottgQueryCache_object__object___Get
                    ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
                     (Il2CppObject *)accountId,(System_Action_AottgQueryResult_TValue___o *)__this_01,false,
                     (MethodInfo_4CB0AD0 *)
                     MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Get);
          return;
        }
      }
      goto label_05e20e5a;
    }
    pSVar5 = targetAddress->onResult;
    if (pSVar5 == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
      return;
    }
    ppSVar3 = &"bad_account_id";
  }
  pAVar4 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail(*ppSVar3,method_00);
  vtableDispatch = (code *)(pSVar5->fields).invoke_impl;
  (*vtableDispatch)((pSVar5->fields).method_code,pAVar4,(pSVar5->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearSessionCache
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearSessionCache (const MethodInfo* method);
// 0x5e20e70

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearSessionCache(MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075484b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075484b0 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance;
    if (pAVar1 == (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this = (pAVar1->fields)._cache;
    if (__this != (ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *)0x0) {
      ApplicationManagers_Api_AottgQueryCache_object__object___Clear
                ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
                 (MethodInfo_4CB0A70 *)
                 MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Clear);
      return;
    }
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile (System_String_o* accountId, const MethodInfo* method);
// 0x5e20f30

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile
               (System_String_o *accountId,MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075484b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Clear_71867a8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075484b1 = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance;
    if (pAVar1 == (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)0x0) {
label_05e21007:
      ThrowNullReferenceException();
    }
    if ((pAVar1->fields)._cache !=
        (ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *)0x0) {
      bVar2 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
      if (!bVar2) {
        pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->
                 _instance;
        if ((pAVar1 != (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)0x0) &&
           (__this = (pAVar1->fields)._cache,
           __this != (ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *)0x0)) {
          ApplicationManagers_Api_AottgQueryCache_object__object___Clear_4cb0aa0
                    ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
                     (Il2CppObject *)accountId,
                     (MethodInfo_4CB0AA0 *)
                     MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Clear_71867a8
                    );
          return;
        }
        goto label_05e21007;
      }
    }
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$FetchProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfile (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, System_String_o* accountId, System_Action_AottgQueryFetchResult_AottgPublicProfile___o* onComplete, const MethodInfo* method);
// 0x5e21010

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfile
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,
               System_String_o *accountId,
               System_Action_AottgQueryFetchResult_AottgPublicProfile___o *onComplete,MethodInfo *method)

{
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  Cysharp_Threading_Tasks_UniTask_o task;
  
  CVar1 = ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync
                    (__this,accountId,onComplete,method);
  task.fields._12_4_ = 0;
  task.fields.source = CVar1.fields.source;
  task.fields.token = CVar1.fields.token;
  task.fields._10_2_ = CVar1.fields._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$FetchProfileAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, System_String_o* accountId, System_Action_AottgQueryFetchResult_AottgPublicProfile___o* onComplete, const MethodInfo* method);
// 0x5e21030

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync
          (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,System_String_o *accountId,
          System_Action_AottgQueryFetchResult_AottgPublicProfile___o *onComplete,MethodInfo *method)

{
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_Fields local_68;
  
  if (Il2CppMethodInitialized_075484b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgPublicProfileServi
              );
    Il2CppMethodInitialized_075484b2 = '\x01';
  }
  local_68.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_68.__u__1.fields.task.fields.token = 0;
  local_68.__u__1.fields.task.fields._18_6_ = 0;
  local_68.onComplete = (System_Action_AottgQueryFetchResult_AottgPublicProfile___o *)0x0;
  local_68.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_68.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_68.accountId = (System_String_o *)0x0;
  local_68.__1__state = 0;
  local_68._4_4_ = 0;
  local_68.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_68.__t__builder);
  local_68.accountId = accountId;
  Il2CppCodeGenWriteBarrier(&local_68.accountId);
  local_68.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_68.onComplete);
  local_68.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgPublicProfileServi
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgPublicProfileServi
              );
  }
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__MoveNext
            ((ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o *)
             &local_68,(MethodInfo *)onComplete);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0386e920(&local_68.__t__builder,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$InvokeProfileResult
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__InvokeProfileResult (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o* result, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x5e210f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e211bb: jmp 0x5e211e9

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__InvokeProfileResult
               (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *result,
               System_Action_AottgPublicProfileFetchResponse__o *onResult,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *pAVar2;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this;
  System_Action_AottgPublicProfileFetchResponse__o *method_00;
  
  method_00 = onResult;
  if (Il2CppMethodInitialized_075484b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile_get_Error);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile_get_State);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile_get_Value);
    Il2CppMethodInitialized_075484b3 = '\x01';
  }
  if (result == (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (result->fields)._State_k__BackingField;
  if (iVar1 == 3) {
    if (onResult == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      if (onResult == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
        return;
      }
      pAVar2 = (result->fields)._Value_k__BackingField;
      if (Il2CppMethodInitialized_075484a6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
        Il2CppMethodInitialized_075484a6 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      (__this->fields)._Success_k__BackingField = true;
      (__this->fields)._Profile_k__BackingField = pAVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Profile_k__BackingField);
      (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
      goto label_05e211d3;
    }
    if ((onResult == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) || (iVar1 != 4)) {
      return;
    }
  }
  __this = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                     ((result->fields)._Error_k__BackingField,(MethodInfo *)method_00);
label_05e211d3:
  (*(code *)(onResult->fields).invoke_impl)((onResult->fields).method_code,__this,(onResult->fields).method);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, const MethodInfo* method);
// 0x5e21200

void ApplicationManagers_PublicProfiles_AottgPublicProfileService___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


