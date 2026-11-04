// Type: ApplicationManagers.Credits.AottgCreditsService
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsService.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsService.UnitKey$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService_UnitKey___cctor (const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_Credits_AottgCreditsService_UnitKey___cctor(MethodInfo* method)

{
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___ctor (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___ctor(ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$<GetCredits>b__0
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___GetCredits_b__0 (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o* __this, ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o* result, const MethodInfo* method);
// 0x182375130

void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___GetCredits_b__0
               (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *result,MethodInfo *method)

{
  int iVar1;
  System_Action_AottgCreditsResult__o *pSVar2;
  ApplicationManagers_Credits_AottgCreditsResult_o *pAVar3;
  
  pSVar2 = (__this->fields).onResult;
  if (Il2CppMethodInitialized_184347a26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_Error);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_IsFromCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_State);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_Value);
    Il2CppMethodInitialized_184347a26 = '\x01';
  }
  if (result != (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *)0x0) {
    iVar1 = (result->fields)._State_k__BackingField;
    if (iVar1 == 0) {
      pAVar3 = ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache((MethodInfo *)0x0);
    }
    else if (iVar1 == 1) {
      pAVar3 = ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh
                         ((result->fields)._Value_k__BackingField,
                          (result->fields)._IsFromCache_k__BackingField,(MethodInfo *)0x0);
    }
    else if (iVar1 == 2) {
      pAVar3 = ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing
                         ((result->fields)._Value_k__BackingField,(MethodInfo *)0x0);
    }
    else if ((iVar1 == 3) || (iVar1 != 4)) {
      pAVar3 = ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache
                         ((result->fields)._Error_k__BackingField,(MethodInfo *)0x0);
    }
    else {
      pAVar3 = ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale
                         ((result->fields)._Value_k__BackingField,(result->fields)._Error_k__BackingField,
                          (MethodInfo *)0x0);
    }
    if (pSVar2 != (System_Action_AottgCreditsResult__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar3,(pSVar2->fields).method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$MoveNext
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this, const MethodInfo* method);
// 0x182372160
// eh: try 0x18237223a..0x1823725f2 -> pad 0x1833157d0 (+4 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237241c: nop 
// asm:   0x18237241d: jmp 0x182372498
// asm:   0x18237246d: nop 
// asm:   0x18237246e: jmp 0x182372498
// asm:   0x182372497: nop 
// asm:   0x182372590: xor ecx, ecx
// asm:   0x182372592: mov rdx, qword ptr [rip + 0x1d3242f]  ; TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise
// asm:   0x182372599: call 0x180014640  ; InterfaceInvoker0_Invoke()
// asm:   0x18237259e: mov r8, qword ptr [rdi + 0x38]
// asm:   0x1823725a2: mov r8, qword ptr [r8 + 0x28]
// asm:   0x1823725a6: mov rdx, rax
// asm:   0x1823725a9: lea rcx, [rsp + 0x40]
// asm:   0x1823725ae: call 0x1800142b0  ; il2cpp_runtime_helper_1800142b0()
// asm:   0x1823725b3: nop 
// asm:   0x1823725b4: jmp 0x1823724d6
// asm:   0x1823725b9: mov rcx, qword ptr [rsp + 0xb0]
// asm:   0x1823725c1: mov dword ptr [rcx], 0xfffffffe
// asm:   0x1823725c7: add rcx, 8
// asm:   0x1823725cb: xor r8d, r8d
// asm:   0x1823725ce: mov rdx, qword ptr [rsp + 0x40]
// asm:   0x1823725d3: call 0x181150b30  ; il2cpp_runtime_helper_181150b30()
// asm:   0x1823725d8: jmp 0x1823724d6
// asm:   0x1833157d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833157d5: push rbx
// asm:   0x1833157d6: push rbp
// asm:   0x1833157d7: push rdi
// asm:   0x1833157d8: sub rsp, 0x30
// asm:   0x1833157dc: mov rbp, rdx
// asm:   0x1833157df: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x1833157e3: mov rax, qword ptr [rdi]
// asm:   0x1833157e6: mov rbx, qword ptr [rax]
// asm:   0x1833157e9: lea rcx, [rip + 0xd63768]  ; TypeInfo_System_Exception
// asm:   0x1833157f0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833157f5: mov rcx, rax
// asm:   0x1833157f8: mov rdx, rbx
// asm:   0x1833157fb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315800: test al, al
// asm:   0x183315802: mov rax, qword ptr [rdi]
// asm:   0x183315805: je 0x183315817
// asm:   0x183315807: mov qword ptr [rbp + 0x40], rax
// asm:   0x18331580b: movabs rax, 0
// asm:   0x183315815: jmp 0x18331582c
// asm:   0x183315817: mov qword ptr [rbp + 0x30], rax
// asm:   0x18331581b: lea rdx, [rip + 0xcc6766]
// asm:   0x183315822: lea rcx, [rbp + 0x30]
// asm:   0x183315826: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331582c: add rsp, 0x30
// asm:   0x183315830: pop rdi
// asm:   0x183315831: pop rbp
// asm:   0x183315832: pop rbx
// asm:   0x183315833: ret 

void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext
               (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *pSVar2;
  Il2CppObject *obj;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar3;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar4;
  MethodInfo *method_00;
  bool bVar5;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar6;
  ApplicationManagers_Api_AottgApiResult_o *pAVar7;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar8;
  Il2CppClass *klass;
  void *pvVar9;
  ApplicationManagers_Credits_AottgCreditsResponse_o *local_res18;
  System_String_o *local_res20;
  Cysharp_Threading_Tasks_UniTask_Awaiter_T__o local_68;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_50 [2];
  
  if (Il2CppMethodInitialized_184347a27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiClient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9bf8
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
    Il2CppMethodInitialized_184347a27 = '\x01';
  }
  local_res18 = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  if ((__this->fields).__1__state == 0) {
    local_68.fields.task.fields.source = (__this->fields).__u__1.fields.task.fields.source;
    local_68.fields.task.fields.result = (__this->fields).__u__1.fields.task.fields.result;
    pCVar4 = &(__this->fields).__u__1;
    local_68.fields.task.fields.token = (pCVar4->fields).task.fields.token;
    local_68.fields.task.fields._18_6_ = *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiClient);
    ApplicationManagers_Api_AottgApiClient___ctor(__this_00,(MethodInfo *)0x0);
    request = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    if (Il2CppMethodInitialized_184347a56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"GET");
      Il2CppMethodInitialized_184347a56 = '\x01';
    }
    (request->fields).Method = "GET";
    Il2CppCodeGenWriteBarrier(&(request->fields).Method,"GET");
    (request->fields).ReportNetworkError = true;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)request,(MethodInfo *)0x0);
    if (request == (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    (request->fields).Method = "GET";
    Il2CppCodeGenWriteBarrier(&(request->fields).Method,"GET");
    (request->fields).Path = "/v1/credits";
    Il2CppCodeGenWriteBarrier(&(request->fields).Path,"/v1/credits");
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ThrowNullReferenceException();
    }
    pCVar6 = ApplicationManagers_Api_AottgApiClient__SendAsync
                       (local_50,__this_00,request,(System_Threading_CancellationToken_o)0x0,(MethodInfo *)0x0
                       );
    pCVar3 = (pCVar6->fields).source;
    pAVar7 = (pCVar6->fields).result;
    uVar1._0_2_ = (pCVar6->fields).token;
    uVar1._2_6_ = *(undefined6 *)&(pCVar6->fields).field_0x12;
    local_50[0].fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_50[0].fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_50[0].fields.token = 0;
    local_50[0].fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_50[0].fields.source = pCVar3;
    local_50[0].fields.result = pAVar7;
    local_50[0].fields._16_8_ = uVar1;
    Il2CppCodeGenWriteBarrier((void **)local_50,(void *)0x0);
    local_68.fields.task.fields.source = local_50[0].fields.source;
    local_68.fields.task.fields.result = (Il2CppObject *)local_50[0].fields.result;
    local_68.fields.task.fields.token = local_50[0].fields.token;
    local_68.fields.task.fields._18_6_ = local_50[0].fields._18_6_;
    bVar5 = Cysharp_Threading_Tasks_UniTask_Awaiter_Vector2___get_IsCompleted
                      (&local_68,
                       (MethodInfo_EE1910 *)
                       MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    if (!bVar5) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source = local_68.fields.task.fields.source;
      (__this->fields).__u__1.fields.task.fields.result = local_68.fields.task.fields.result;
      pCVar4 = &(__this->fields).__u__1;
      (pCVar4->fields).task.fields.token = local_68.fields.task.fields.token;
      *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12 = local_68.fields.task.fields._18_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      method_00 = 
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9bf8
      ;
      if (((
           MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9bf8
           ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) &&
         (il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise),
         (method_00->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0)) {
        il2cpp_codegen_rgctx_method_init(method_00);
      }
      if ((__this->fields).__t__builder.fields.runnerPromise ==
          (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0) {
        klass = (method_00->field7_0x38).rgctx_data[2].klass;
        if (((klass->_2).bitflags1 & 1) == 0) {
          klass = il2cpp_codegen_class_init_checked(klass);
        }
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
        }
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask_AottgCreditsService__FetchCreditsAsync_d__6___SetStateMachine
                  (__this,(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o **)
                          &(__this->fields).__t__builder,
                   (MethodInfo_DF5BA0 *)(method_00->field7_0x38).rgctx_data[1].method);
      }
      obj = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
      if (obj != (Il2CppObject *)0x0) {
        pvVar9 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)
                              TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,obj
                           );
        il2cpp_runtime_helper_1800142b0(&local_68,pvVar9,(method_00->field7_0x38).rgctx_data[5].rgctxDataDummy);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  pAVar7 = Cysharp_Threading_Tasks_UniTask_Awaiter_object___GetResult
                     ((Cysharp_Threading_Tasks_UniTask_Awaiter_object__o *)&local_68,
                      (MethodInfo_EE11A0 *)
                      MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
  if (pAVar7 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    if ((pAVar7->fields)._Success_k__BackingField == false) {
      pSVar2 = (__this->fields).onComplete;
      if (pSVar2 != (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)0x0) {
        pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                           ((pAVar7->fields)._Error_k__BackingField,
                            (MethodInfo_1578330 *)
                            MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Fail
                           );
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method);
      }
    }
    else {
      bVar5 = ApplicationManagers_Credits_AottgCreditsParser__TryParse
                        ((pAVar7->fields)._ResponseText_k__BackingField,&local_res18,&local_res20,
                         (MethodInfo *)0x0);
      if (bVar5) {
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)0x0) {
          pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                             ((Il2CppObject *)local_res18,
                              (MethodInfo_1578650 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Ok
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method)
          ;
        }
      }
      else {
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"AottgCreditsService: failed to parse /v1/credits response.",(MethodInfo *)0x0);
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)0x0) {
          pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             (local_res20,
                              (MethodInfo_1578330 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgCreditsResponse_Fail
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method)
          ;
        }
      }
    }
    (__this->fields).__1__state = -2;
    if (Il2CppMethodInitialized_184340822 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise);
      Il2CppMethodInitialized_184340822 = '\x01';
    }
    if ((__this->fields).__t__builder.fields.runnerPromise !=
        (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0) {
      InterfaceInvoker0_Invoke
                (2,(Il2CppClass *)TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise
                 ,(Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise);
    }
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$SetStateMachine
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__SetStateMachine (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x1808e6930

void
ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__SetStateMachine(ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__t__builder,
             (MethodInfo *)stateMachine);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$Init
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__Init (const MethodInfo* method);
// 0x182365ef0

void ApplicationManagers_Credits_AottgCreditsService__Init(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  ApplicationManagers_Credits_AottgCreditsService_o *pAVar1;
  System_Action_T1__T2__o *__this;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__AottgCreditsResponse__o *__this_01;
  System_Nullable_TimeSpan__Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184347a22 == '\0') {
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
    Il2CppMethodInitialized_184347a22 = '\x01';
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)
                      TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance,
                      (MethodInfo_798ED0 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_AottgCreditsService);
  TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance,pAVar1);
  pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance;
  __this = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Action_AottgCreditsService_UnitKey_Action_AottgQueryFetchResult_AottgCreditsResponse
                     );
  System_Action_AottgCreditsService_UnitKey__object____ctor
            (__this,(Il2CppObject *)pAVar1,
             (intptr_t)MethodInfo_ApplicationManagers_Credits_AottgCreditsService_FetchCredits,
             (MethodInfo_1467890 *)0x0);
  if ((TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache);
  }
  successTtl.fields._ticks =
       (System_TimeSpan_Fields)
       (TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->static_fields->DefaultTtl).fields._ticks;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
  local_48[0].hasValue = false;
  local_48[0]._1_7_ = 0;
  local_48[0].value.fields._ticks = (System_TimeSpan_Fields)0;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_00,successTtl,(System_Nullable_TimeSpan__o *)local_48,true,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse
                        );
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_01,
             (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)__this,
             (System_Func_DateTimeOffset__o *)0x0,__this_00,
             (MethodInfo_1577440 *)
             MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse_ctor
            );
  if (pAVar1 != (ApplicationManagers_Credits_AottgCreditsService_o *)0x0) {
    (pAVar1->fields)._cache = __this_01;
    Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._cache,__this_01);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsService$$GetCredits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__GetCredits (System_Action_AottgCreditsResult__o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x182365d10

void ApplicationManagers_Credits_AottgCreditsService__GetCredits
               (System_Action_AottgCreditsResult__o *onResult,bool forceRefresh,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key;
  ApplicationManagers_Credits_AottgCreditsService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__AottgCreditsResponse__o *__this;
  System_Action_AottgCreditsResult__o *pSVar2;
  bool bVar3;
  ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  ApplicationManagers_Credits_AottgCreditsResult_o *pAVar4;
  
  if (Il2CppMethodInitialized_184347a23 == '\0') {
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
    Il2CppMethodInitialized_184347a23 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Credits_AottgCreditsService_c__DisplayClass3_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *)0x0) {
    (object->fields).onResult = onResult;
    Il2CppCodeGenWriteBarrier(&(object->fields).onResult,onResult);
    pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsService->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar2 = (object->fields).onResult;
      if (pSVar2 != (System_Action_AottgCreditsResult__o *)0x0) {
        pAVar4 = ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache
                           ("not_initialized",(MethodInfo *)0x0);
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar4,(pSVar2->fields).method);
      }
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
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_AottgQueryResult_AottgCreditsResponse);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_Credits_AottgCreditsService_c__DisplayClass3_0_GetCredits_b__0
                 ,(MethodInfo *)0x0);
      if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__AottgCreditsResponse__o
                     *)0x0) {
        ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Get
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,key,
                   (System_Action_AottgQueryResult_TValue___o *)__this_00,forceRefresh,
                   (MethodInfo_1575080 *)
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
// 0x182365ad0

void ApplicationManagers_Credits_AottgCreditsService__ClearSessionCache(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsService_o *pAVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse_Clear
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347a24 = '\x01';
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
    if ((pAVar1->fields)._cache !=
        (ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__AottgCreditsResponse__o *)0x0) {
      ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Clear
                ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)(pAVar1->fields)._cache,
                 (MethodInfo_1573870 *)
                 MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey_AottgCreditsResponse_Clear
                );
      return;
    }
  }
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$FetchCredits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCredits (ApplicationManagers_Credits_AottgCreditsService_o* __this, ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key, System_Action_AottgQueryFetchResult_AottgCreditsResponse___o* onComplete, const MethodInfo* method);
// 0x182365c50

void ApplicationManagers_Credits_AottgCreditsService__FetchCredits
               (ApplicationManagers_Credits_AottgCreditsService_o *__this,
               ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key,
               System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *onComplete,MethodInfo *method)

{
  MethodInfo *pMVar1;
  undefined8 *puVar2;
  Cysharp_Threading_Tasks_UniTask_o local_58;
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet
              );
    Il2CppMethodInitialized_184347a25 = '\x01';
  }
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)0x0;
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete,onComplete);
  pMVar1 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet;
  local_48.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet
              );
  }
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext
            ((ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o *)&local_48,
             (pMVar1->field7_0x38).rgctx_data[2].method);
  puVar2 = (undefined8 *)il2cpp_runtime_helper_180814c10(&local_58,&local_48.__t__builder,0);
  local_58.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar2;
  local_58.fields._8_8_ = puVar2[1];
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(&local_58,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$FetchCreditsAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync (ApplicationManagers_Credits_AottgCreditsService_o* __this, System_Action_AottgQueryFetchResult_AottgCreditsResponse___o* onComplete, const MethodInfo* method);
// 0x182365b80

Cysharp_Threading_Tasks_UniTask_o *
ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync
          (Cysharp_Threading_Tasks_UniTask_o *__return_storage_ptr__,
          ApplicationManagers_Credits_AottgCreditsService_o *__this,
          System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *onComplete,MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *pMVar2;
  undefined8 *puVar3;
  undefined1 local_58 [16];
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet
              );
    Il2CppMethodInitialized_184347a25 = '\x01';
  }
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)0x0;
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete,onComplete);
  pMVar2 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet;
  local_48.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet
              );
  }
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext
            ((ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o *)&local_48,
             (pMVar2->field7_0x38).rgctx_data[2].method);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_180814c10(local_58,&local_48.__t__builder,0);
  uVar1 = puVar3[1];
  (__return_storage_ptr__->fields).source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar3;
  *(undefined8 *)&(__return_storage_ptr__->fields).token = uVar1;
  return __return_storage_ptr__;
}


// ApplicationManagers.Credits.AottgCreditsService$$MapResult
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsService__MapResult (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o* result, const MethodInfo* method);
// 0x1823660a0

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsService__MapResult
          (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *result,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_Credits_AottgCreditsResult_o *pAVar2;
  
  if (Il2CppMethodInitialized_184347a26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_Error);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_IsFromCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_State);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse_get_Value);
    Il2CppMethodInitialized_184347a26 = '\x01';
  }
  if (result == (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (result->fields)._State_k__BackingField;
  if (iVar1 == 0) {
    pAVar2 = ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache((MethodInfo *)0x0);
    return pAVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      pAVar2 = ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing
                         ((result->fields)._Value_k__BackingField,(MethodInfo *)0x0);
      return pAVar2;
    }
    if ((iVar1 != 3) && (iVar1 == 4)) {
      pAVar2 = ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale
                         ((result->fields)._Value_k__BackingField,(result->fields)._Error_k__BackingField,
                          (MethodInfo *)0x0);
      return pAVar2;
    }
    pAVar2 = ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache
                       ((result->fields)._Error_k__BackingField,(MethodInfo *)0x0);
    return pAVar2;
  }
  pAVar2 = ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh
                     ((result->fields)._Value_k__BackingField,(result->fields)._IsFromCache_k__BackingField,
                      (MethodInfo *)0x0);
  return pAVar2;
}


// ApplicationManagers.Credits.AottgCreditsService$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___ctor (ApplicationManagers_Credits_AottgCreditsService_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_Credits_AottgCreditsService___ctor(ApplicationManagers_Credits_AottgCreditsService_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


