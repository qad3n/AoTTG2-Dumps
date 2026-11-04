// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileService
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileService.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___ctor(ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$<GetProfile>b__0
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___GetProfile_b__0 (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o* __this, ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o* result, const MethodInfo* method);
// 0x182375220

void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___GetProfile_b__0
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *result,MethodInfo *method)

{
  System_Action_AottgPublicProfileFetchResponse__o *pSVar1;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *value;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar2;
  
  pSVar1 = (__this->fields).onResult;
  if (Il2CppMethodInitialized_184347a04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile_get_Error);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile_get_State);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile_get_Value);
    Il2CppMethodInitialized_184347a04 = '\x01';
  }
  if (result != (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *)0x0) {
    if ((result->fields)._State_k__BackingField == 1) {
      if (pSVar1 != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
        value = (result->fields)._Value_k__BackingField;
        if (Il2CppMethodInitialized_1843479f7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
          Il2CppMethodInitialized_1843479f7 = '\x01';
        }
        pAVar2 = il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar2,(MethodInfo *)0x0);
        (pAVar2->fields)._Success_k__BackingField = true;
        (pAVar2->fields)._Profile_k__BackingField = value;
        Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._Profile_k__BackingField,value);
        (pAVar2->fields)._Error_k__BackingField = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._Error_k__BackingField,(void *)0x0);
        (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method);
        return;
      }
    }
    else if ((((result->fields)._State_k__BackingField == 3) || ((result->fields)._State_k__BackingField == 4)
             ) && (pSVar1 != (System_Action_AottgPublicProfileFetchResponse__o *)0x0)) {
      pAVar2 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                         ((result->fields)._Error_k__BackingField,(MethodInfo *)0x0);
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<FetchProfileAsync>d__7$$MoveNext
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__MoveNext (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this, const MethodInfo* method);
// 0x182373330
// eh: try 0x182373418..0x1823737f5 -> pad 0x1833157d0 (+4 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182373624: nop 
// asm:   0x182373625: jmp 0x1823736a0
// asm:   0x182373675: nop 
// asm:   0x182373676: jmp 0x1823736a0
// asm:   0x18237369f: nop 
// asm:   0x182373793: xor ecx, ecx
// asm:   0x182373795: mov rdx, qword ptr [rip + 0x1d3122c]  ; TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise
// asm:   0x18237379c: call 0x180014640  ; InterfaceInvoker0_Invoke()
// asm:   0x1823737a1: mov r8, qword ptr [rdi + 0x38]
// asm:   0x1823737a5: mov r8, qword ptr [r8 + 0x28]
// asm:   0x1823737a9: mov rdx, rax
// asm:   0x1823737ac: lea rcx, [rsp + 0x40]
// asm:   0x1823737b1: call 0x1800142b0  ; il2cpp_runtime_helper_1800142b0()
// asm:   0x1823737b6: nop 
// asm:   0x1823737b7: jmp 0x1823736de
// asm:   0x1823737bc: mov rcx, qword ptr [rsp + 0xc0]
// asm:   0x1823737c4: mov dword ptr [rcx], 0xfffffffe
// asm:   0x1823737ca: add rcx, 8
// asm:   0x1823737ce: xor r8d, r8d
// asm:   0x1823737d1: mov rdx, qword ptr [rsp + 0x40]
// asm:   0x1823737d6: call 0x181150b30  ; il2cpp_runtime_helper_181150b30()
// asm:   0x1823737db: jmp 0x1823736de
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

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__MoveNext
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o *__this
               ,MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_AottgQueryFetchResult_AottgPublicProfile___o *pSVar2;
  Il2CppObject *obj;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar3;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar4;
  MethodInfo *method_00;
  bool bVar5;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  System_String_o *pSVar6;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar7;
  ApplicationManagers_Api_AottgApiResult_o *pAVar8;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar9;
  Il2CppClass *klass;
  void *pvVar10;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *local_res18;
  System_String_o *local_res20;
  Cysharp_Threading_Tasks_UniTask_Awaiter_T__o local_78;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_60 [2];
  
  if (Il2CppMethodInitialized_184347a05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiClient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9cd8
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
    Il2CppMethodInitialized_184347a05 = '\x01';
  }
  local_res18 = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  if ((__this->fields).__1__state == 0) {
    local_78.fields.task.fields.source = (__this->fields).__u__1.fields.task.fields.source;
    local_78.fields.task.fields.result = (__this->fields).__u__1.fields.task.fields.result;
    pCVar4 = &(__this->fields).__u__1;
    local_78.fields.task.fields.token = (pCVar4->fields).task.fields.token;
    local_78.fields.task.fields._18_6_ = *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12;
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
    pSVar6 = (__this->fields).accountId;
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    pSVar6 = System_Uri__EscapeDataString(pSVar6,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_1969e50("/v1/profiles/",pSVar6,(MethodInfo *)0x0);
    (request->fields).Path = pSVar6;
    Il2CppCodeGenWriteBarrier(&(request->fields).Path,pSVar6);
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ThrowNullReferenceException();
    }
    pCVar7 = ApplicationManagers_Api_AottgApiClient__SendAsync
                       (local_60,__this_00,request,(System_Threading_CancellationToken_o)0x0,(MethodInfo *)0x0
                       );
    pCVar3 = (pCVar7->fields).source;
    pAVar8 = (pCVar7->fields).result;
    uVar1._0_2_ = (pCVar7->fields).token;
    uVar1._2_6_ = *(undefined6 *)&(pCVar7->fields).field_0x12;
    local_60[0].fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_60[0].fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_60[0].fields.token = 0;
    local_60[0].fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_60[0].fields.source = pCVar3;
    local_60[0].fields.result = pAVar8;
    local_60[0].fields._16_8_ = uVar1;
    Il2CppCodeGenWriteBarrier((void **)local_60,(void *)0x0);
    local_78.fields.task.fields.source = local_60[0].fields.source;
    local_78.fields.task.fields.result = (Il2CppObject *)local_60[0].fields.result;
    local_78.fields.task.fields.token = local_60[0].fields.token;
    local_78.fields.task.fields._18_6_ = local_60[0].fields._18_6_;
    bVar5 = Cysharp_Threading_Tasks_UniTask_Awaiter_Vector2___get_IsCompleted
                      (&local_78,
                       (MethodInfo_EE1910 *)
                       MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    if (!bVar5) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source = local_78.fields.task.fields.source;
      (__this->fields).__u__1.fields.task.fields.result = local_78.fields.task.fields.result;
      pCVar4 = &(__this->fields).__u__1;
      (pCVar4->fields).task.fields.token = local_78.fields.task.fields.token;
      *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12 = local_78.fields.task.fields._18_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      method_00 = 
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9cd8
      ;
      if (((
           MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9cd8
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
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask_AottgPublicProfileService__FetchProfileAsync_d__7___SetStateMachine
                  (__this,(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o **)
                          &(__this->fields).__t__builder,
                   (MethodInfo_DF7530 *)(method_00->field7_0x38).rgctx_data[1].method);
      }
      obj = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
      if (obj != (Il2CppObject *)0x0) {
        pvVar10 = InterfaceInvoker0_Invoke
                            (0,(Il2CppClass *)
                               TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,
                             obj);
        il2cpp_runtime_helper_1800142b0(&local_78,pvVar10,(method_00->field7_0x38).rgctx_data[5].rgctxDataDummy);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  pAVar8 = Cysharp_Threading_Tasks_UniTask_Awaiter_object___GetResult
                     ((Cysharp_Threading_Tasks_UniTask_Awaiter_object__o *)&local_78,
                      (MethodInfo_EE11A0 *)
                      MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
  if (pAVar8 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    if ((pAVar8->fields)._Success_k__BackingField == false) {
      pSVar2 = (__this->fields).onComplete;
      if (pSVar2 != (System_Action_AottgQueryFetchResult_AottgPublicProfile___o *)0x0) {
        pAVar9 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                           ((pAVar8->fields)._Error_k__BackingField,
                            (MethodInfo_1578330 *)
                            MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Fail);
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar9,(pSVar2->fields).method);
      }
    }
    else {
      bVar5 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
                        ((pAVar8->fields)._ResponseText_k__BackingField,&local_res18,&local_res20,
                         (MethodInfo *)0x0);
      if (bVar5) {
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_AottgPublicProfile___o *)0x0) {
          pAVar9 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                             ((Il2CppObject *)local_res18,
                              (MethodInfo_1578650 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Ok);
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar9,(pSVar2->fields).method)
          ;
        }
      }
      else {
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"AottgPublicProfileService: failed to parse /v1/profiles response.",(MethodInfo *)0x0);
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_AottgPublicProfile___o *)0x0) {
          pAVar9 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             (local_res20,
                              (MethodInfo_1578330 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_AottgPublicProfile_Fail
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar9,(pSVar2->fields).method)
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


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<FetchProfileAsync>d__7$$SetStateMachine
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__SetStateMachine (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x1808e6930

void
ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__SetStateMachine(ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__t__builder,
             (MethodInfo *)stateMachine);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$Init
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init (const MethodInfo* method);
// 0x182367c20

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *pAVar1;
  System_Action_string__Action_AottgQueryFetchResult_AottgPublicProfile____o *__this;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *__this_01;
  MethodInfo *method_00;
  System_Data_SqlTypes_SqlMoney_Fields local_48;
  System_Data_SqlTypes_SqlMoney_Fields local_38;
  
  if (Il2CppMethodInitialized_1843479ff == '\0') {
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
    Il2CppMethodInitialized_1843479ff = '\x01';
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)
                      TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->
                      _instance,
                      (MethodInfo_798ED0 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_AottgPublicProfileService);
  TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance,
             pAVar1);
  pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Action_string_Action_AottgQueryFetchResult_AottgPublicProfile);
  method_00 = (MethodInfo *)0x0;
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this,
             (Il2CppObject *)pAVar1,
             (intptr_t)MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_FetchProfile,
             (MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
  }
  successTtl.fields._ticks =
       (System_TimeSpan_Fields)
       (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->SuccessTtl).fields
       ._ticks;
  local_48._fNotNull = false;
  local_48._1_7_ = 0;
  local_48._value = 0;
  System_Data_SqlTypes_SqlMoney___ctor_ae2650
            ((System_Data_SqlTypes_SqlMoney_o *)&local_48,
             (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->FailureTtl).
             fields._ticks,(int32_t)MethodInfo_System_Nullable_TimeSpan_ctor,method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
  local_38._fNotNull = local_48._fNotNull;
  local_38._1_7_ = local_48._1_7_;
  local_38._value = local_48._value;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_00,successTtl,(System_Nullable_TimeSpan__o *)&local_38,false,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile);
  ApplicationManagers_Api_AottgQueryCache_object__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_01,
             (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)__this,
             (System_Func_DateTimeOffset__o *)0x0,__this_00,
             (MethodInfo_15779A0 *)
             MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_ctor);
  if (pAVar1 != (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)0x0) {
    (pAVar1->fields)._cache = __this_01;
    Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._cache,__this_01);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$GetProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile (System_String_o* accountId, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x182367a60
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182367be7: mov rcx, qword ptr [rip + 0x1d2b122]  ; "bad_account_id"
// asm:   0x182367bee: jmp 0x182367c00
// asm:   0x182367bf9: mov rcx, qword ptr [rip + 0x1d3d0a8]  ; "not_initialized"

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile
               (System_String_o *accountId,System_Action_AottgPublicProfileFetchResponse__o *onResult,
               MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *__this;
  System_Action_AottgPublicProfileFetchResponse__o *pSVar2;
  System_String_o *error;
  bool bVar3;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar4;
  
  if (Il2CppMethodInitialized_184347a00 == '\0') {
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
    Il2CppMethodInitialized_184347a00 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_c__DisplayClass3_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o *)0x0) {
    (object->fields).onResult = onResult;
    Il2CppCodeGenWriteBarrier(&(object->fields).onResult,onResult);
    pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar2 = (object->fields).onResult;
      error = "not_initialized";
    }
    else {
      bVar3 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
      if (!bVar3) {
        pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->
                 _instance;
        if (pAVar1 != (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)0x0) {
          __this = (pAVar1->fields)._cache;
          __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_AottgQueryResult_AottgPublicProfile);
          System_Action_object____ctor
                    (__this_00,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_c__DisplayClass3_0_GetProfile_b__0
                     ,(MethodInfo *)0x0);
          if (__this != (ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *)0x0) {
            ApplicationManagers_Api_AottgQueryCache_object__object___Get
                      ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
                       (Il2CppObject *)accountId,(System_Action_AottgQueryResult_TValue___o *)__this_00,false,
                       (MethodInfo_1575F70 *)
                       MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Get);
            return;
          }
        }
        goto label_182367c17;
      }
      pSVar2 = (object->fields).onResult;
      error = "bad_account_id";
    }
    if (pSVar2 != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
      pAVar4 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                         (error,(MethodInfo *)0x0);
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar4,(pSVar2->fields).method);
    }
    return;
  }
label_182367c17:
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearSessionCache
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearSessionCache (const MethodInfo* method);
// 0x1823677d0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearSessionCache(MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *pAVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347a01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347a01 = '\x01';
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
    if ((pAVar1->fields)._cache !=
        (ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *)0x0) {
      ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Clear
                ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)(pAVar1->fields)._cache,
                 (MethodInfo_1573870 *)
                 MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Clear);
      return;
    }
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile (System_String_o* accountId, const MethodInfo* method);
// 0x1823676e0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile
               (System_String_o *accountId,MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347a02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Clear_40e00c0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347a02 = '\x01';
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
label_1823677bc:
      ThrowNullReferenceException();
    }
    if ((pAVar1->fields)._cache !=
        (ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *)0x0) {
      bVar2 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
      if (!bVar2) {
        pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService->static_fields->
                 _instance;
        if ((pAVar1 == (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)0x0) ||
           (__this = (pAVar1->fields)._cache,
           __this == (ApplicationManagers_Api_AottgQueryCache_string__AottgPublicProfile__o *)0x0))
        goto label_1823677bc;
        ApplicationManagers_Api_AottgQueryCache_object__object___Clear_1573a20
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,(Il2CppObject *)accountId
                   ,(MethodInfo_1573A20 *)
                    MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_AottgPublicProfile_Clear_40e00c0
                  );
      }
    }
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$FetchProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfile (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, System_String_o* accountId, System_Action_AottgQueryFetchResult_AottgPublicProfile___o* onComplete, const MethodInfo* method);
// 0x182367970

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfile
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,
               System_String_o *accountId,
               System_Action_AottgQueryFetchResult_AottgPublicProfile___o *onComplete,MethodInfo *method)

{
  MethodInfo *pMVar1;
  undefined8 *puVar2;
  Cysharp_Threading_Tasks_UniTask_o local_58;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgPublicProfileServi
              );
    Il2CppMethodInitialized_184347a03 = '\x01';
  }
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.accountId = (System_String_o *)0x0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_AottgPublicProfile___o *)0x0;
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.accountId = accountId;
  Il2CppCodeGenWriteBarrier(&local_48.accountId,accountId);
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete,onComplete);
  pMVar1 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgPublicProfileServi;
  local_48.__1__state = -1;
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
             &local_48,(pMVar1->field7_0x38).rgctx_data[2].method);
  puVar2 = (undefined8 *)il2cpp_runtime_helper_180814c10(&local_58,&local_48.__t__builder,0);
  local_58.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar2;
  local_58.fields._8_8_ = puVar2[1];
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(&local_58,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$FetchProfileAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, System_String_o* accountId, System_Action_AottgQueryFetchResult_AottgPublicProfile___o* onComplete, const MethodInfo* method);
// 0x182367880

Cysharp_Threading_Tasks_UniTask_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync
          (Cysharp_Threading_Tasks_UniTask_o *__return_storage_ptr__,
          ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,System_String_o *accountId,
          System_Action_AottgQueryFetchResult_AottgPublicProfile___o *onComplete,MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *pMVar2;
  undefined8 *puVar3;
  undefined1 local_58 [16];
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgPublicProfileServi
              );
    Il2CppMethodInitialized_184347a03 = '\x01';
  }
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.accountId = (System_String_o *)0x0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_AottgPublicProfile___o *)0x0;
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.accountId = accountId;
  Il2CppCodeGenWriteBarrier(&local_48.accountId,accountId);
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete,onComplete);
  pMVar2 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgPublicProfileServi;
  local_48.__1__state = -1;
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
             &local_48,(pMVar2->field7_0x38).rgctx_data[2].method);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_180814c10(local_58,&local_48.__t__builder,0);
  uVar1 = puVar3[1];
  (__return_storage_ptr__->fields).source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar3;
  *(undefined8 *)&(__return_storage_ptr__->fields).token = uVar1;
  return __return_storage_ptr__;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$InvokeProfileResult
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__InvokeProfileResult (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o* result, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x182367e00

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__InvokeProfileResult
               (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *result,
               System_Action_AottgPublicProfileFetchResponse__o *onResult,MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *value;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar1;
  
  if (Il2CppMethodInitialized_184347a04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile_get_Error);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile_get_State);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile_get_Value);
    Il2CppMethodInitialized_184347a04 = '\x01';
  }
  if (result != (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *)0x0) {
    if ((result->fields)._State_k__BackingField == 1) {
      if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
        value = (result->fields)._Value_k__BackingField;
        if (Il2CppMethodInitialized_1843479f7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
          Il2CppMethodInitialized_1843479f7 = '\x01';
        }
        pAVar1 = il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar1,(MethodInfo *)0x0);
        (pAVar1->fields)._Success_k__BackingField = true;
        (pAVar1->fields)._Profile_k__BackingField = value;
        Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._Profile_k__BackingField,value);
        (pAVar1->fields)._Error_k__BackingField = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._Error_k__BackingField,(void *)0x0);
        (*(code *)(onResult->fields).invoke_impl)
                  ((onResult->fields).method_code,pAVar1,(onResult->fields).method);
        return;
      }
    }
    else if ((((result->fields)._State_k__BackingField == 3) || ((result->fields)._State_k__BackingField == 4)
             ) && (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0)) {
      pAVar1 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                         ((result->fields)._Error_k__BackingField,(MethodInfo *)0x0);
      (*(code *)(onResult->fields).invoke_impl)
                ((onResult->fields).method_code,pAVar1,(onResult->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_PublicProfiles_AottgPublicProfileService___ctor(ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


