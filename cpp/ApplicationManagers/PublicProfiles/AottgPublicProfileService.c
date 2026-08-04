// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileService.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x44c4430

void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$<GetProfile>b__0
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___GetProfile_b__0 (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o* __this, ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o* result, const MethodInfo* method);
// 0x44c47e0

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
// 0x44c47f0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__MoveNext
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this,
               MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiRequest_Fields *pAVar1;
  void *pvVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppType *pIVar6;
  undefined2 uVar7;
  char cVar8;
  bool_conflict bVar9;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  System_String_o *pSVar10;
  long lVar11;
  undefined8 *puVar12;
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  MethodInfo *in_RSI;
  long lVar16;
  MethodInfo *in_R8;
  undefined1 auVar17 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  _union_13 local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  System_String_o *local_58;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *local_50;
  Il2CppType *local_48;
  MethodInfo *pMStack_40;
  _union_13 local_38;
  
  if (g_data_057aeac5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiClient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiRequest);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_PublicProfil);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_PublicProfil);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"GET");
    il2cpp_runtime_helper_023445d0(&"AottgPublicProfileService: failed to parse /v1/profiles response.");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeac5 = '\x01';
  }
  local_50 = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_98 = (Il2CppType *)0x0;
  uStack_90 = (MethodInfo *)0x0;
  local_88.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_48 = (Il2CppType *)0x0;
  pMStack_40 = (MethodInfo *)0x0;
  local_38.rgctx_data = (Il2CppRGCTXData *)0x0;
  if (*(int *)&method->methodPointer == 0) {
    local_88 = method->field7_0x38;
    local_98 = method->return_type;
    uStack_90 = (MethodInfo *)method->parameters;
    method->return_type = (Il2CppType *)0x0;
    method->parameters = (Il2CppType **)0x0;
    (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    __this_00 = (ApplicationManagers_Api_AottgApiClient_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiClient);
    ApplicationManagers_Api_AottgApiClient___ctor(__this_00,in_RSI);
    request = (ApplicationManagers_Api_AottgApiRequest_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiRequest);
    if (g_data_057aeb16 == '\0') {
      il2cpp_runtime_helper_023445d0(&"GET");
      g_data_057aeb16 = '\x01';
    }
    pAVar1 = &request->fields;
    (request->fields).Method = "GET";
    il2cpp_runtime_helper_022b4080(pAVar1);
    *(undefined1 *)((long)&(request->fields).ParseJson + 1) = 1;
    System_Object___ctor((Il2CppObject *)request,(MethodInfo *)0x0);
    pAVar1->Method = "GET";
    il2cpp_runtime_helper_022b4080(pAVar1);
    pSVar10 = (System_String_o *)method->name;
    if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = System_Uri__EscapeDataString(pSVar10,(MethodInfo *)0x0);
    pSVar10 = System_String__Concat_3ae5ba0("/v1/profiles/",pSVar10,(MethodInfo *)0x0);
    (request->fields).Path = pSVar10;
    il2cpp_runtime_helper_022b4080(&(request->fields).Path,pSVar10);
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) goto label_044c4d10;
    ApplicationManagers_Api_AottgApiClient__SendAsync
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)local_78,__this_00,request,
               (System_Threading_CancellationToken_o)0x0,in_R8);
    local_38 = local_68;
    local_48 = (Il2CppType *)local_78._0_8_;
    pMStack_40 = (MethodInfo *)local_78._8_8_;
    local_78._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_78._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_68._0_2_ = 0;
    local_68._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    local_68 = local_38;
    local_78._0_8_ = local_48;
    local_78._8_8_ = pMStack_40;
    il2cpp_runtime_helper_022b4080(local_78,0);
    local_88 = local_68;
    local_98 = (Il2CppType *)local_78._0_8_;
    uStack_90 = (MethodInfo *)local_78._8_8_;
    cVar8 = il2cpp_runtime_helper_02235800(&local_98,MethodInfo_Boolean_get_IsCompleted);
    if (cVar8 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      *(undefined4 *)&method->return_type = (undefined4)local_98;
      *(undefined4 *)((long)&method->return_type + 4) = local_98._4_4_;
      *(undefined4 *)&method->parameters = (undefined4)uStack_90;
      *(undefined4 *)((long)&method->parameters + 4) = uStack_90._4_4_;
      method->field7_0x38 = local_88;
      il2cpp_runtime_helper_022b4080(&method->return_type,0);
      il2cpp_runtime_helper_025bd900(&method->virtualMethodPointer,&local_98,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pIVar6 = local_98;
  method_00 = uStack_90;
  if (local_98 != (Il2CppType *)0x0) {
    uVar7 = local_88._0_2_;
    lVar11 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    pvVar2 = pIVar6->data;
    if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar16) == lVar11) {
          puVar12 = (undefined8 *)
                    ((long)pvVar2 + (long)*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar16) * 0x10 + 0x138
                    );
          goto label_044c4b80;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar16);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar6,lVar11,0);
label_044c4b80:
    method_00 = (MethodInfo *)(*(code *)*puVar12)(pIVar6,(int)(short)uVar7,puVar12[1]);
  }
  if (method_00 != (MethodInfo *)0x0) {
    if (*(char *)&method_00->invoker_method == '\0') {
      pIVar3 = method->klass;
      if (pIVar3 != (Il2CppClass *)0x0) {
        pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((System_String_o *)method_00->parameters,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_PublicProfil);
        (*(code *)(pIVar3->_1).namespaze)
                  ((pIVar3->_1).element_class,pAVar13,*(undefined8 *)&(pIVar3->_1).byval_arg.bits);
      }
    }
    else {
      bVar9 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
                        ((System_String_o *)method_00->klass,&local_50,&local_58,method_00);
      if ((char)bVar9 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("AottgPublicProfileService: failed to parse /v1/profiles response.",(MethodInfo *)0x0);
        pIVar3 = method->klass;
        if (pIVar3 != (Il2CppClass *)0x0) {
          pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(local_58,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_PublicProfil);
          (*(code *)(pIVar3->_1).namespaze)
                    ((pIVar3->_1).element_class,pAVar13,*(undefined8 *)&(pIVar3->_1).byval_arg.bits);
        }
      }
      else {
        pIVar3 = method->klass;
        if (pIVar3 != (Il2CppClass *)0x0) {
          pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                              ((Il2CppObject *)local_50,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_PublicProfil);
          (*(code *)(pIVar3->_1).namespaze)
                    ((pIVar3->_1).element_class,pAVar13,*(undefined8 *)&(pIVar3->_1).byval_arg.bits);
        }
      }
    }
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (g_data_057a6b79 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b79 = '\x01';
    }
    pIVar4 = method->virtualMethodPointer;
    if (pIVar4 == (Il2CppMethodPointer)0x0) {
      return;
    }
    lVar11 = *(long *)pIVar4;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar16) == TypeInfo_IStateMachineRunnerPromise) {
          puVar12 = (undefined8 *)
                    (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar16) + 2) * 0x10 + 0x138);
          goto label_044c4cf5;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar16);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar4,TypeInfo_IStateMachineRunnerPromise,2);
label_044c4cf5:
    (*(code *)*puVar12)(pIVar4,puVar12[1]);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_044c4d10:
  auVar17 = il2cpp_runtime_helper_022b2c90();
  if (auVar17._8_4_ != 1) {
    _Unwind_Resume(auVar17._0_8_);
  }
  puVar12 = (undefined8 *)__cxa_begin_catch(auVar17._0_8_);
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar8 = il2cpp_runtime_helper_0233e000(uVar14,*(undefined8 *)*puVar12);
  if (cVar8 == '\0') {
    puVar15 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar15 = *puVar12;
    __cxa_throw(puVar15,&PTR_PTR_05215060,0);
  }
  pIVar5 = (InvokerMethod)*puVar12;
  __cxa_end_catch();
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (g_data_057a6b78 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6b78 = '\x01';
  }
  pIVar4 = method->virtualMethodPointer;
  if (pIVar4 == (Il2CppMethodPointer)0x0) {
    method->invoker_method = pIVar5;
    il2cpp_runtime_helper_022b4080(&method->invoker_method,pIVar5);
  }
  else {
    lVar11 = *(long *)pIVar4;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar16) == TypeInfo_IStateMachineRunnerPromise) {
          puVar12 = (undefined8 *)
                    (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar16) + 3) * 0x10 + 0x138);
          goto label_044c4f03;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar16);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar4,TypeInfo_IStateMachineRunnerPromise,3);
label_044c4f03:
    (*(code *)*puVar12)(pIVar4,pIVar5,puVar12[1]);
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<FetchProfileAsync>d__7$$SetStateMachine
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__SetStateMachine (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x44c5170

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__SetStateMachine
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$Init
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init (const MethodInfo* method);
// 0x44c3f30

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init(MethodInfo *method)

{
  long lVar1;
  System_TimeSpan_Fields successTtl;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_TimeSpan_Fields t1;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_00;
  System_TimeSpan_o t1_00;
  undefined8 uVar4;
  System_ArgumentOutOfRangeException_o *__this_01;
  System_String_o *pSVar5;
  System_ArgumentOutOfRangeException_o *pSVar6;
  undefined8 *puVar7;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar8;
  MethodInfo_37EC960 *method_00;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar9;
  char extraout_DL;
  MethodInfo_37EC980 *method_01;
  System_ArgumentOutOfRangeException_Fields *pSVar10;
  MethodInfo *method_02;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar11;
  undefined *puVar12;
  System_ArgumentOutOfRangeException_o *__this_02;
  undefined1 uVar13;
  MethodInfo *in_R9;
  System_Nullable_TimeSpan__o __this_03;
  System_Nullable_TimeSpan__o __this_04;
  System_Nullable_TimeSpan__o failureTtl;
  char acStack_78 [8];
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_70;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_68;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_60;
  ulong local_38;
  System_TimeSpan_o SStack_30;
  MethodInfo_3316260 *pMVar14;
  
  if (g_data_057aeabf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string_Action_AottgQueryFetchResult_AottgPublicPr);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchProfile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_System_String_ApplicationManagers_Publ);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_string_AottgPublicProfile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_TimeSpan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPublicProfileService_CreateSingleton_AottgPublicPro);
    g_data_057aeabf = '\x01';
  }
  pIVar3 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8),MethodInfo_AottgPublicProfileService_CreateSingleton_AottgPublicPro);
  **(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8) = pIVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgPublicProfileService + 0xb8),pIVar3);
  lVar1 = **(long **)(TypeInfo_AottgPublicProfileService + 0xb8);
  t1._ticks = il2cpp_runtime_helper_023052d0(TypeInfo_Action_string_Action_AottgQueryFetchResult_AottgPublicPr);
  method_00 = (MethodInfo_37EC960 *)0x0;
  System_Action_object__object____ctor();
  if (*(int *)(TypeInfo_AottgPublicProfileCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  successTtl._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgPublicProfileCache + 0xb8))->_ticks;
  local_38 = 0;
  SStack_30.fields._ticks = (System_TimeSpan_Fields)0;
  __this_03.fields.value.fields._ticks =
       (System_TimeSpan_Fields)
       (System_TimeSpan_Fields)(*(System_TimeSpan_Fields **)(TypeInfo_AottgPublicProfileCache + 0xb8))[1]._ticks;
  __this_03.fields._0_8_ = &local_38;
  System_Nullable_TimeSpan____ctor(__this_03,(System_TimeSpan_o)MethodInfo_Nullable_1_TimeSpan._ticks,method_00);
  __this = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  failureTtl.fields._0_8_ = local_38 & 0xffffffff;
  failureTtl.fields.value.fields._ticks = SStack_30.fields._ticks;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this,(System_TimeSpan_o)successTtl._ticks,failureTtl,0,in_R9);
  __this_00 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_string_AottgPublicProfile);
  pAVar9 = __this;
  pAVar11 = __this_00;
  pMVar14 = MethodInfo_AottgQueryCache_2_System_String_ApplicationManagers_Publ;
  ApplicationManagers_Api_AottgQueryCache_object__object____ctor
            (__this_00,(System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)t1._ticks,
             (System_Func_DateTimeOffset__o *)0x0,__this,MethodInfo_AottgQueryCache_2_System_String_ApplicationManagers_Publ);
  uVar13 = SUB81(pMVar14,0);
  if (lVar1 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar1 + 0x20) = __this_00;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,__this_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  acStack_78[0] = extraout_DL;
  pAStack_70 = pAVar9;
  pAStack_68 = __this_00;
  pAStack_60 = __this;
  if (g_data_057aeb1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeb1a = '\x01';
  }
  System_Object___ctor((Il2CppObject *)pAVar11,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_TimeSpan__op_LessThan
                    ((System_TimeSpan_o)t1._ticks,
                     (System_TimeSpan_o)(*(System_TimeSpan_Fields **)(TypeInfo_TimeSpan + 0xb8))->_ticks,
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (extraout_DL == '\0') {
      acStack_78[0] = '\0';
      pAStack_70 = pAVar9;
label_044c41e0:
      (pAVar11->fields)._fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)t1._ticks;
      *(char *)&(pAVar11->fields)._now = acStack_78[0];
      (pAVar11->fields)._policy = pAStack_70;
      *(undefined1 *)&(pAVar11->fields)._entries = uVar13;
      return;
    }
    __this_04.fields.value.fields._ticks = (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks
    ;
    __this_04.fields._0_8_ = acStack_78;
    t1_00 = System_Nullable_TimeSpan___get_Value(__this_04,method_01);
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_TimeSpan__op_LessThan
                      (t1_00,(System_TimeSpan_o)(*(System_TimeSpan_Fields **)(TypeInfo_TimeSpan + 0xb8))->_ticks,
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_044c41e0;
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    puVar12 = &"failureTtl";
  }
  else {
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    puVar12 = &"successTtl";
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar12);
  System_ArgumentOutOfRangeException___ctor_3c13a50(__this_01,pSVar5,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryPolicy);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aeac0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgPublicProfile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetProfile_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    il2cpp_runtime_helper_023445d0(&"bad_account_id");
    g_data_057aeac0 = '\x01';
  }
  pSVar6 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  __this_02 = pSVar6;
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  if (pSVar6 != (System_ArgumentOutOfRangeException_o *)0x0) {
    pSVar10 = &pSVar6->fields;
    (pSVar6->fields)._className = pSVar5;
    il2cpp_runtime_helper_022b4080(pSVar10);
    x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_02 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      method_02 = (MethodInfo *)0x0;
      __this_02 = __this_01;
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)__this_01,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) != 0) {
          pAVar11 = *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)
                     (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20);
          pSVar6 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgPublicProfile);
          __this_02 = pSVar6;
          System_Action_object____ctor();
          if (pAVar11 != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
            ApplicationManagers_Api_AottgQueryCache_object__object___Get
                      (pAVar11,(Il2CppObject *)__this_01,(System_Action_AottgQueryResult_TValue___o *)pSVar6,0
                       ,MethodInfo_Void_Get);
            return;
          }
        }
        goto label_044c442a;
      }
      pSVar5 = pSVar10->_className;
      if (pSVar5 == (System_String_o *)0x0) {
        return;
      }
      puVar7 = &"bad_account_id";
    }
    else {
      pSVar5 = pSVar10->_className;
      if (pSVar5 == (System_String_o *)0x0) {
        return;
      }
      puVar7 = &"not_initialized";
    }
    pAVar8 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                       ((System_String_o *)*puVar7,method_02);
    (*(code *)pSVar5[1].klass)(pSVar5[2].fields,pAVar8,pSVar5[1].fields,pSVar5[1].klass);
    return;
  }
label_044c442a:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$GetProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile (System_String_o* accountId, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x44c4270

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile
               (System_String_o *accountId,System_Action_AottgPublicProfileFetchResponse__o *onResult,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this;
  bool_conflict bVar1;
  System_Action_AottgQueryResult_TValue___o *pSVar2;
  undefined8 *puVar3;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar4;
  System_Action_AottgQueryResult_TValue___Fields *pSVar5;
  long lVar6;
  MethodInfo *method_00;
  System_Action_AottgQueryResult_TValue___o *__this_00;
  
  if (g_data_057aeac0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgPublicProfile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetProfile_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    il2cpp_runtime_helper_023445d0(&"bad_account_id");
    g_data_057aeac0 = '\x01';
  }
  pSVar2 = (System_Action_AottgQueryResult_TValue___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  __this_00 = pSVar2;
  System_Object___ctor((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  if (pSVar2 == (System_Action_AottgQueryResult_TValue___o *)0x0) {
label_044c442a:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    return;
  }
  pSVar5 = &pSVar2->fields;
  (pSVar2->fields).method_ptr = (intptr_t)onResult;
  il2cpp_runtime_helper_022b4080(pSVar5);
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    method_00 = (MethodInfo *)0x0;
    __this_00 = (System_Action_AottgQueryResult_TValue___o *)accountId;
    bVar1 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) != 0) {
        __this = *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)
                  (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20);
        pSVar2 = (System_Action_AottgQueryResult_TValue___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgPublicProfile);
        __this_00 = pSVar2;
        System_Action_object____ctor();
        if (__this != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
          ApplicationManagers_Api_AottgQueryCache_object__object___Get
                    (__this,(Il2CppObject *)accountId,pSVar2,0,MethodInfo_Void_Get);
          return;
        }
      }
      goto label_044c442a;
    }
    lVar6 = pSVar5->method_ptr;
    if (lVar6 == 0) {
      return;
    }
    puVar3 = &"bad_account_id";
  }
  else {
    lVar6 = pSVar5->method_ptr;
    if (lVar6 == 0) {
      return;
    }
    puVar3 = &"not_initialized";
  }
  pAVar4 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                     ((System_String_o *)*puVar3,method_00);
  (**(code **)(lVar6 + 0x18))
            (*(undefined8 *)(lVar6 + 0x40),pAVar4,*(undefined8 *)(lVar6 + 0x28),*(code **)(lVar6 + 0x18));
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearSessionCache
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearSessionCache (const MethodInfo* method);
// 0x44c4440

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearSessionCache(MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int32_t iVar5;
  MethodInfo_315B430 *method_00;
  MethodInfo_3104DF0 *method_01;
  code *pcVar6;
  Il2CppObject *pIVar7;
  MethodInfo_331B450 *pMVar8;
  Il2CppArrayBounds *pIVar9;
  MethodInfo_331B380 *pMVar10;
  long lVar11;
  undefined8 uVar12;
  size_t sVar13;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *pAVar14;
  System_TimeSpan_Fields t2;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *pAVar15;
  MethodInfo_315A040 *method_02;
  MethodInfo_315ACA0 *method_03;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *pAVar16;
  MethodInfo_315DA50 *method_04;
  MethodInfo_3161460 *method_05;
  MethodInfo_331B2F0 *pMVar17;
  MethodInfo_362C220 *pMVar18;
  il2cpp_array_size_t iVar19;
  MethodInfo_331AB10 *method_06;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo_362E340 *method_07;
  System_Array_o *array;
  Il2CppClass *pIVar20;
  MethodInfo_331B660 *pMVar21;
  MethodInfo_331B520 *pMVar22;
  undefined1 auVar23 [12];
  unkuint10 Var24;
  int iVar25;
  char cVar26;
  bool_conflict bVar27;
  long lVar28;
  Il2CppRGCTXData IVar29;
  Il2CppRGCTXData IVar30;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar31;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar32;
  Il2CppType *pIVar33;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  Il2CppRGCTXData IVar38;
  char *pcVar39;
  void *pvVar40;
  undefined1 *puVar41;
  long lVar42;
  unkuint10 *pVar43;
  System_TimeSpan_Fields t1;
  void *pvVar44;
  Il2CppRGCTXData *pIVar45;
  Il2CppRGCTXData *pIVar46;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar47;
  Il2CppRGCTXData IVar48;
  System_String_o *pSVar49;
  Il2CppRGCTXData IVar50;
  Il2CppRGCTXData t1_00;
  System_TimeSpan_o t1_01;
  System_Object_array *pSVar51;
  undefined4 uVar52;
  int iVar53;
  ulong uVar54;
  Il2CppRuntimeInterfaceOffsetPair *pIVar55;
  MethodInfo *pMVar56;
  Il2CppRGCTXData in_RCX;
  Il2CppRGCTXData onResult;
  Il2CppRGCTXData extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  ulong uVar57;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  Il2CppRGCTXData *extraout_RDX_06;
  Il2CppRGCTXData extraout_RDX_07;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_08;
  Il2CppRGCTXData extraout_RDX_09;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_10;
  Il2CppRGCTXData extraout_RDX_11;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_12;
  System_Action_AottgQueryFetchResult_AottgPublicProfile___o *onComplete;
  undefined8 *puVar58;
  undefined8 *puVar59;
  undefined8 *puVar60;
  MethodInfo_3316900 *pMVar61;
  Il2CppRGCTXData unaff_RBX;
  undefined1 *puVar62;
  undefined8 unaff_RBP;
  Il2CppRGCTXData IVar63;
  undefined8 *puVar64;
  InvokerMethod pIVar65;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *pAVar66;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long *plVar67;
  Il2CppMethodPointer pIVar68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar69;
  Il2CppRGCTXData in_R8;
  MethodInfo_331A460 *method_13;
  MethodInfo_3316900 *in_R9;
  Il2CppRGCTXData *pIVar70;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar71;
  Il2CppRGCTXData onResult_00;
  undefined8 unaff_R12;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *pSVar72;
  MethodInfo_3316900 *__dest;
  MethodInfo_3316900 *pMVar73;
  Il2CppClass **ppIVar74;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **unaff_R13;
  long *unaff_R14;
  Il2CppRGCTXData IVar75;
  undefined8 unaff_R15;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  Cysharp_Threading_Tasks_UniTask_o CVar78;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_01;
  System_DateTimeOffset_o left_01;
  System_DateTimeOffset_o left_02;
  System_Nullable_TimeSpan__o __this_02;
  System_DateTimeOffset_o left_03;
  System_DateTimeOffset_o left_04;
  System_Nullable_TimeSpan__o __this_03;
  System_DateTimeOffset_o left_05;
  System_DateTimeOffset_o left_06;
  System_Nullable_TimeSpan__o __this_04;
  System_DateTimeOffset_o left_07;
  System_DateTimeOffset_o left_08;
  System_Nullable_TimeSpan__o __this_05;
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o right_01;
  System_DateTimeOffset_o right_02;
  System_DateTimeOffset_o now_00;
  System_DateTimeOffset_o right_03;
  System_DateTimeOffset_o right_04;
  System_DateTimeOffset_o now_01;
  System_DateTimeOffset_o right_05;
  System_DateTimeOffset_o right_06;
  System_DateTimeOffset_o now_02;
  System_DateTimeOffset_o right_07;
  System_DateTimeOffset_o right_08;
  unkbyte10 Var79;
  undefined1 auStack_18 [8];
  MethodInfo_37EC980 *method_08;
  MethodInfo_37EC980 *method_09;
  MethodInfo_37EC980 *method_10;
  MethodInfo_37EC980 *method_11;
  MethodInfo_37EC980 *method_12;
  
  now.fields._8_8_ = in_RCX;
  if (g_data_057aeac1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aeac1 = '\x01';
    now.fields._8_8_ = in_RCX;
  }
  IVar38 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgPublicProfileService + 0xb8))->method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  now_00.fields._8_8_ = IVar38;
  bVar27 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)IVar38.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar27 == '\0') {
    return;
  }
  if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeac2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileService);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aeac2 = '\x01';
    }
    IVar63 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgPublicProfileService + 0xb8))->method;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar49 = (System_String_o *)0x0;
    bVar27 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)IVar63.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar27 == '\0') {
      return;
    }
    if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) == 0) {
label_044c45d7:
      il2cpp_runtime_helper_022b2c90();
      CVar78 = ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync
                         ((ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)IVar63.method,
                          pSVar49,onComplete,now.fields._8_8_);
      auVar23 = CVar78.fields._0_12_;
      CVar78.fields._12_4_ = 0;
      CVar78.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar23._0_8_;
      CVar78.fields.token = auVar23._8_2_;
      CVar78.fields._10_2_ = auVar23._10_2_;
      Cysharp_Threading_Tasks_UniTaskExtensions__Forget(CVar78,(MethodInfo *)0x0);
      return;
    }
    if (*(long *)(**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20) == 0) {
      return;
    }
    pSVar49 = (System_String_o *)0x0;
    IVar63 = now_00.fields._8_8_;
    bVar27 = System_String__IsNullOrEmpty((System_String_o *)now_00.fields._8_8_,(MethodInfo *)0x0);
    if ((char)bVar27 != '\0') {
      return;
    }
    if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) == 0) goto label_044c45d7;
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20);
    IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044c45d7;
    auVar76._8_8_ = MethodInfo_Void_Clear;
    auVar76._0_8_ = &MethodInfo_Void_Clear;
    unaff_R14 = &TypeInfo_AottgPublicProfileService;
    puVar62 = auStack_18;
  }
  else {
    lVar28 = *(long *)(**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20);
    if (lVar28 == 0) {
      return;
    }
    puVar62 = &stack0xfffffffffffffff8;
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar28 + 0x28);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (__this_00,(MethodInfo_3104FC0 *)(MethodInfo_Void_Clear.method)->klass->rgctx_data[0xc].method);
      return;
    }
    now_00.fields._8_8_ = MethodInfo_Void_Clear;
    auVar76 = il2cpp_runtime_helper_022b2c90();
    IVar38 = unaff_RBX;
  }
  *(long *)(puVar62 + -8) = auVar76._0_8_;
  IVar63 = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(__this_00->fields)._freeCount;
  if (IVar63.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              ((System_Collections_Generic_Dictionary_object__object__o *)IVar63.method,
               (Il2CppObject *)now_00.fields._8_8_,
               *(MethodInfo_3106630 **)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  *(undefined8 *)(puVar62 + -0x10) = 0x34165e4;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar62 + -0x10) = unaff_RBP;
  *(undefined8 *)(puVar62 + -0x18) = unaff_R15;
  *(long **)(puVar62 + -0x20) = unaff_R14;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array ***)(puVar62 + -0x28) = unaff_R13;
  *(undefined8 *)(puVar62 + -0x30) = unaff_R12;
  *(Il2CppRGCTXData *)(puVar62 + -0x38) = IVar38;
  *(int *)(puVar62 + -0x3c) = now.fields._8_4_;
  *(undefined8 *)(puVar62 + -0x48) = 0;
  lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(in_R8.method)->klass)->fields + 0xc0) + 0x70);
  IVar38 = in_R8;
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    *(undefined8 *)(puVar62 + -0x58) = 0x3416634;
    lVar28 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)(puVar62 + -0x58) = 0x341663c;
  IVar29.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar28);
  IVar30 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(in_R8.method)->klass)->fields + 0xc0) + 0x78))->method;
  *(undefined8 *)(puVar62 + -0x58) = 0x3416656;
  IVar75.rgctxDataDummy = IVar29.rgctxDataDummy;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_object__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)IVar29.method,
             (MethodInfo_27BB8C0 *)IVar30.method);
  now_01.fields._8_8_ = onResult;
  if (IVar29.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    ((System_Collections_Generic_Dictionary_object__object__Fields *)&(IVar29.method)->invoker_method)->
    _buckets = (System_Int32_array *)IVar63;
    *(undefined8 *)(puVar62 + -0x58) = 0x341666f;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                       &(IVar29.method)->invoker_method,IVar63.rgctxDataDummy);
    unaff_R13 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(IVar29.method)->name;
    (IVar29.method)->name = (char *)now_00.fields._8_8_;
    *(undefined8 *)(puVar62 + -0x58) = 0x3416685;
    IVar30 = now_00.fields._8_8_;
    il2cpp_runtime_helper_022b4080(unaff_R13);
    if (onResult.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar75 = (Il2CppRGCTXData)(IVar63.method)->return_type;
    if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      IVar30.method = (MethodInfo *)*unaff_R13;
      now.fields._8_8_ =
           (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(in_R8.method)->klass)->fields + 0xc0) + 0x48))->method;
      *(undefined8 *)(puVar62 + -0x58) = 0x34166b8;
      bVar27 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                         ((System_Collections_Generic_Dictionary_object__object__o *)IVar75.method,
                          (Il2CppObject *)IVar30.method,(Il2CppObject **)(puVar62 + -0x48),
                          (MethodInfo_3106990 *)now.fields._8_8_);
      if ((char)bVar27 == '\0') {
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(in_R8.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          *(undefined8 *)(puVar62 + -0x58) = 0x34166d9;
          lVar28 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)(puVar62 + -0x58) = 0x34166e1;
        now_00.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar28);
        IVar30 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(in_R8.method)->klass)->fields + 0xc0) + 0x88))->method;
        *(undefined8 *)(puVar62 + -0x58) = 0x34166fe;
        ApplicationManagers_Api_AottgQueryCache_Entry_object__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)now_00.fields._8_8_,
                   (MethodInfo_31EF570 *)IVar30.method);
        ((Il2CppRGCTXData *)(puVar62 + -0x48))->method = (MethodInfo *)now_00.fields._8_8_;
        IVar75 = (Il2CppRGCTXData)(IVar63.method)->return_type;
        if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_034168f2;
        IVar30.method = (MethodInfo *)*unaff_R13;
        method_01 = *(MethodInfo_3104DF0 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(in_R8.method)->klass)->fields + 0xc0) + 0x90);
        *(undefined8 *)(puVar62 + -0x58) = 0x341672e;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)IVar75.method,
                   (Il2CppObject *)IVar30.method,(Il2CppObject *)now_00.fields._8_8_,method_01);
      }
      now.fields._8_8_ = (Il2CppRGCTXData)(IVar63.method)->name;
      if (now.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar30 = (Il2CppRGCTXData)(now.fields._8_8_)->return_type;
        IVar75 = (Il2CppRGCTXData)((now.fields._8_8_)->field8_0x40).genericMethod;
        pcVar6 = (code *)(now.fields._8_8_)->name;
        *(undefined8 *)(puVar62 + -0x58) = 0x3416746;
        auVar76 = (*pcVar6)();
        if (puVar62[-0x3c] == '\0') {
          now.fields._8_8_ = (void *)(auVar76._8_8_ & 0xffffffff);
          IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar62 + -0x48))->method;
          in_R9 = *(MethodInfo_3316900 **)
                   (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                        &(in_R8.method)->klass)->fields + 0xc0) + 0x98);
          *(undefined8 *)(puVar62 + -0x58) = 0x3416774;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar76._0_8_;
          IVar75 = IVar63;
          IVar38 = onResult;
          bVar27 = ApplicationManagers_Api_AottgQueryCache_object__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)IVar63.method,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar30.method,
                              now,(System_Action_AottgQueryResult_TValue___o *)onResult.method,in_R9);
          if ((char)bVar27 != '\0') {
            return;
          }
        }
        lVar28 = *(long *)(puVar62 + -0x48);
        if (lVar28 != 0) {
          if (*(char *)(lVar28 + 0x38) == '\0') {
            pMVar17 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(in_R8.method)->klass)->fields + 0xc0) + 200);
            *(undefined8 *)(puVar62 + -0x58) = 0x34167c4;
            IVar30.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar17);
          }
          else {
            pIVar7 = *(Il2CppObject **)(lVar28 + 0x18);
            pMVar8 = *(MethodInfo_331B450 **)
                      (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                           &(in_R8.method)->klass)->fields + 0xc0) + 0xa8);
            *(undefined8 *)(puVar62 + -0x58) = 0x34167ab;
            IVar30.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar7,pMVar8);
          }
          pIVar33 = (onResult.method)->return_type;
          IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(onResult.klass)->_1)[8].method;
          pcVar6 = (code *)(onResult.method)->name;
          *(undefined8 *)(puVar62 + -0x58) = 0x34167d6;
          (*pcVar6)(IVar75.rgctxDataDummy,IVar30.rgctxDataDummy,pIVar33);
          if ((*(long *)(puVar62 + -0x48) != 0) &&
             (IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(puVar62 + -0x48) + 0x10))->method,
             IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(in_R8.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar75.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar9 = (Il2CppArrayBounds *)(IVar75.method)->invoker_method;
            if (pIVar9 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar75.method)->name;
              IVar30 = onResult;
              if (uVar4 < (uint)pIVar9[1].lower_bound) {
                now.fields._8_4_ = uVar4 + 1;
                now.fields._12_4_ = 0;
                *(uint *)&(IVar75.method)->name = now.fields._8_4_;
                IVar75.rgctxDataDummy = &pIVar9[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar9[2].length + (int)uVar4))->klass = (Il2CppClass *)onResult;
                *(undefined8 *)(puVar62 + -0x58) = 0x3416838;
                il2cpp_runtime_helper_022b4080();
                lVar28 = *(long *)(puVar62 + -0x48);
              }
              else {
                pMVar18 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                *(undefined8 *)(puVar62 + -0x58) = 0x341685e;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar75.method,
                           (Il2CppObject *)onResult.method,pMVar18);
                lVar28 = *(long *)(puVar62 + -0x48);
              }
              if (lVar28 != 0) {
                if (*(char *)(lVar28 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)(lVar28 + 0x3a) = 1;
                pIVar9 = (Il2CppArrayBounds *)(IVar63.method)->invoker_method;
                IVar63.method = (MethodInfo *)*unaff_R13;
                lVar28 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(in_R8.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
                  *(undefined8 *)(puVar62 + -0x58) = 0x341689e;
                  lVar28 = il2cpp_runtime_helper_023009c0();
                }
                *(undefined8 *)(puVar62 + -0x58) = 0x34168a6;
                now_01.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar28);
                now.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(in_R8.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                *(undefined8 *)(puVar62 + -0x58) = 0x34168cd;
                IVar30.rgctxDataDummy = IVar29.rgctxDataDummy;
                IVar75.rgctxDataDummy = now_01.fields._8_8_;
                System_Action_object____ctor();
                now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
                if (pIVar9 != (Il2CppArrayBounds *)0x0) {
                  uVar36 = *(undefined8 *)&pIVar9[2].lower_bound;
                  iVar19 = pIVar9[4].length;
                  pcVar6 = *(code **)&pIVar9[1].lower_bound;
                  *(undefined8 *)(puVar62 + -0x58) = 0x34168e3;
                  (*pcVar6)(iVar19,IVar63.rgctxDataDummy,now_01.fields._8_8_,uVar36);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_034168f2:
  *(undefined8 *)(puVar62 + -0x58) = 0x34168f7;
  il2cpp_runtime_helper_022b2c90();
  ((Il2CppRGCTXData *)(puVar62 + -0x58))->method = (MethodInfo *)now_00.fields._8_8_;
  ((Il2CppRGCTXData *)(puVar62 + -0x60))->method = (MethodInfo *)IVar63;
  ((Il2CppRGCTXData *)(puVar62 + -0x68))->method = (MethodInfo *)in_R8;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array ***)(puVar62 + -0x70) = unaff_R13;
  ((Il2CppRGCTXData *)(puVar62 + -0x78))->klass = (Il2CppClass *)now_01.fields._8_8_;
  ((Il2CppRGCTXData *)(puVar62 + -0x80))->method = (MethodInfo *)IVar29;
  *(MethodInfo_3316900 **)(puVar62 + -0x90) = in_R9;
  *(Il2CppRGCTXData *)(puVar62 + -0x88) = IVar38;
  now_01.fields._8_8_ = now.fields._8_8_ & 0xffffffff;
  IVar63 = IVar30;
  plVar67 = (long *)IVar75;
  if (g_data_057a8ce4 == '\0') {
    *(undefined8 *)(puVar62 + -0xb0) = 0x3416939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    *(undefined8 *)(puVar62 + -0xb0) = 0x3416945;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    *(undefined8 *)(puVar62 + -0xb0) = 0x3416951;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar67 = &TypeInfo_TimeSpan;
    *(undefined8 *)(puVar62 + -0xb0) = 0x341695d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ce4 = '\x01';
  }
  *(undefined8 *)(puVar62 + -0xa8) = 0;
  *(undefined8 *)(puVar62 + -0xa0) = 0;
  IVar29.rgctxDataDummy = now_01.fields._8_8_;
  if (IVar30.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar30.method)->field7_0x38 == '\0') {
label_03416a29:
      if (*(char *)((long)&(IVar30.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar75.method)->klass)->fields;
      if (lVar28 != 0) {
        cVar26 = *(char *)(lVar28 + 0x18);
        uVar36 = *(undefined8 *)(lVar28 + 0x20);
        puVar62[-0xa8] = cVar26;
        *(undefined8 *)(puVar62 + -0xa0) = uVar36;
        if (cVar26 == '\0') {
          return;
        }
        now_00.fields._8_8_ = (Il2CppRGCTXData)(IVar30.method)->return_type;
        Var24 = *(unkuint10 *)&(IVar30.method)->return_type;
        in_R8._2_6_ = 0;
        in_R8._0_2_ = *(ushort *)&(IVar30.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          *(undefined8 *)(puVar62 + -0xb0) = 0x3416a79;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar38.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        *(undefined8 *)(puVar62 + -0xb0) = 0x3416a8d;
        left_00.fields._8_8_ = now_01.fields._8_8_;
        left_00.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX.rgctxDataDummy;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var24;
        now.fields._8_8_ = in_R8;
        plVar67 = (long *)extraout_RDX;
        IVar29 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar75.method)->klass)->fields;
        IVar63 = now_01.fields._8_8_;
        if (lVar28 != 0) {
          uVar36 = *(undefined8 *)(lVar28 + 0x20);
          puVar62[-0xa8] = *(undefined1 *)(lVar28 + 0x18);
          *(undefined8 *)(puVar62 + -0xa0) = uVar36;
          *(undefined8 *)(puVar62 + -0xb0) = 0x3416abf;
          __this_01.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_01.fields._0_8_ = puVar62 + -0xa8;
          in_R8 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_01,method_08);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            *(undefined8 *)(puVar62 + -0xb0) = 0x3416ada;
            il2cpp_runtime_helper_02337ed0();
          }
          now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          *(undefined8 *)(puVar62 + -0xb0) = 0x3416ae9;
          bVar27 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)IVar29,(System_TimeSpan_o)in_R8,(MethodInfo *)0x0);
          if ((char)bVar27 == '\0') {
            return;
          }
          plVar67 = (long *)(IVar30.method)->klass;
          pMVar22 = *(MethodInfo_331B520 **)
                     (*(long *)(*(long *)(*(long *)(puVar62 + -0x90) + 0x20) + 0xc0) + 0x108);
          IVar63 = (Il2CppRGCTXData)0x1;
          *(undefined8 *)(puVar62 + -0xb0) = 0x3416b12;
          pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar67,1,pMVar22);
          lVar28 = *(long *)(puVar62 + -0x88);
          now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (lVar28 != 0) {
label_03416b1c:
            uVar36 = *(undefined8 *)(lVar28 + 0x28);
            uVar12 = *(undefined8 *)(lVar28 + 0x40);
            pcVar6 = *(code **)(lVar28 + 0x18);
            *(undefined8 *)(puVar62 + -0xb0) = 0x3416b2a;
            (*pcVar6)(uVar12,pAVar31,uVar36);
            return;
          }
        }
      }
    }
    else {
      now_00.fields._8_8_ = (Il2CppRGCTXData)(IVar30.method)->return_type;
      Var24 = *(unkuint10 *)&(IVar30.method)->return_type;
      now.fields._10_6_ = 0;
      now.fields._offsetMinutes = *(ushort *)&(IVar30.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        *(undefined8 *)(puVar62 + -0xb0) = 0x341699f;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar38.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      *(undefined8 *)(puVar62 + -0xb0) = 0x34169b3;
      left.fields._8_8_ = now_01.fields._8_8_;
      left.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX.rgctxDataDummy;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var24;
      IVar63.rgctxDataDummy = now_01.fields._8_8_;
      plVar67 = (long *)extraout_RDX;
      in_R8 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar75.method)->klass)->fields;
      if (lVar28 != 0) {
        now_00.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x10))->method;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          *(undefined8 *)(puVar62 + -0xb0) = 0x34169e0;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar62 + -0xb0) = 0x34169ed;
        IVar63 = now_00.fields._8_8_;
        plVar67 = (long *)in_R8;
        bVar27 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)in_R8,(System_TimeSpan_o)now_00.fields._8_8_,(MethodInfo *)0x0)
        ;
        if ((char)bVar27 == '\0') goto label_03416a29;
        plVar67 = (long *)(IVar30.method)->name;
        pMVar10 = *(MethodInfo_331B380 **)
                   (*(long *)(*(long *)(*(long *)(puVar62 + -0x90) + 0x20) + 0xc0) + 0x100);
        IVar63 = (Il2CppRGCTXData)0x1;
        *(undefined8 *)(puVar62 + -0xb0) = 0x3416a16;
        pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar67,1,pMVar10);
        lVar28 = *(long *)(puVar62 + -0x88);
        if (lVar28 != 0) goto label_03416b1c;
        now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  *(undefined8 *)(puVar62 + -0xb0) = 0x3416b47;
  il2cpp_runtime_helper_022b2c90();
  ((Il2CppRGCTXData *)(puVar62 + -0xb0))->method = (MethodInfo *)extraout_RDX;
  ((Il2CppRGCTXData *)(puVar62 + -0xb8))->method = (MethodInfo *)in_R8;
  ((Il2CppRGCTXData *)(puVar62 + -0xc0))->method = (MethodInfo *)IVar75;
  ((Il2CppRGCTXData *)(puVar62 + -200))->method = (MethodInfo *)IVar30;
  IVar30 = now.fields._8_8_;
  IVar75 = IVar63;
  if (g_data_057a8ce5 == '\0') {
    *(undefined8 *)(puVar62 + -0xe8) = 0x3416b7c;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ce5 = '\x01';
  }
  *(undefined8 *)(puVar62 + -0xd8) = 0;
  now_01.fields._8_8_ = (Il2CppRGCTXData)((MethodInfo *)plVar67)->return_type;
  pAVar32 = extraout_RDX_00;
  if (now_01.fields._8_8_ == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_03416ea6:
    *(undefined8 *)(puVar62 + -0xe8) = 0x3416eab;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    IVar30 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now.fields._8_8_)->klass)->fields + 0xc0) + 0x48))->method;
    *(undefined8 *)(puVar62 + -0xe8) = 0x3416bb5;
    IVar75 = IVar63;
    bVar27 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_object__object__o *)now_01.fields._8_8_,
                        (Il2CppObject *)IVar63.method,(Il2CppObject **)(puVar62 + -0xd8),
                        (MethodInfo_3106990 *)IVar30.method);
    if ((char)bVar27 == '\0') {
      return;
    }
    if (*(long *)(puVar62 + -0xd8) == 0) goto label_03416ea6;
    *(undefined1 *)(*(long *)(puVar62 + -0xd8) + 0x3a) = 0;
    if (extraout_RDX_00 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      IVar75 = (Il2CppRGCTXData)
               ((Il2CppRGCTXData *)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now.fields._8_8_)->klass)->fields + 0xc0) + 0x118))->method;
      *(undefined8 *)(puVar62 + -0xe8) = 0x3416bf5;
      now_01.fields._8_8_ = "unknown_error";
      pAVar32 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error".method,(MethodInfo_331AB10 *)IVar75.method);
      if (pAVar32 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_03416ea6;
    }
    now_01.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar62 + -0xd8))->method;
    if (now_01.fields._8_8_ == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto label_03416ea6;
    if ((char)(pAVar32->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)&(now_01.fields._8_8_)->field7_0x38 = 1;
      IVar75 = (Il2CppRGCTXData)(pAVar32->fields)._Value_k__BackingField;
      (now_01.fields._8_8_)->name = (char *)IVar75;
      *(undefined8 *)(puVar62 + -0xe8) = 0x3416c33;
      il2cpp_runtime_helper_022b4080(&(now_01.fields._8_8_)->name);
      lVar28 = *(long *)(puVar62 + -0xd8);
      now_01.fields._8_8_ = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (lVar28 != 0) {
        *(undefined8 *)(lVar28 + 0x20) = 0;
        now_01.fields._8_8_ = (void *)(lVar28 + 0x20);
        IVar75.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        *(undefined8 *)(puVar62 + -0xe8) = 0x3416c54;
        il2cpp_runtime_helper_022b4080();
        IVar30 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
        if (IVar30.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          IVar63 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar62 + -0xd8))->method;
          IVar75 = (Il2CppRGCTXData)(IVar30.method)->return_type;
          now_01.fields._8_8_ = *(Il2CppRGCTXData *)&(IVar30.method)->field8_0x40;
          pcVar6 = (code *)(IVar30.method)->name;
          *(undefined8 *)(puVar62 + -0xe8) = 0x3416c71;
          Var79 = (*pcVar6)();
          if (IVar63.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
            *(unkbyte10 *)&(IVar63.method)->return_type = Var79;
            *(undefined2 *)((long)&(IVar63.method)->parameters + 6) = *(undefined2 *)(puVar62 + -0xca);
            *(undefined4 *)((long)&(IVar63.method)->parameters + 2) = *(undefined4 *)(puVar62 + -0xce);
            if (*(long *)(puVar62 + -0xd8) != 0) {
              now_01.fields._8_8_ =
                   (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(puVar62 + -0xd8) + 0x18))->method;
              pMVar10 = *(MethodInfo_331B380 **)
                         (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                              &(now.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
              IVar75.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
              *(undefined8 *)(puVar62 + -0xe8) = 0x3416cbd;
              plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                          ((Il2CppObject *)now_01.fields._8_8_,0,pMVar10);
              lVar28 = *(long *)(puVar62 + -0xd8);
              goto joined_r0x03416cc8;
            }
          }
        }
      }
      goto label_03416ea6;
    }
    if (*(char *)&(now_01.fields._8_8_)->field7_0x38 != '\0') {
      if (((MethodInfo *)plVar67)->klass != (Il2CppClass *)0x0) {
        if ((char)(((MethodInfo *)plVar67)->klass->_1).byval_arg.bits == '\0') goto label_03416e21;
        IVar75 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
        (now_01.fields._8_8_)->klass = (Il2CppClass *)IVar75;
        now_01.fields._8_8_ = &(now_01.fields._8_8_)->klass;
        *(undefined8 *)(puVar62 + -0xe8) = 0x3416ddd;
        il2cpp_runtime_helper_022b4080();
        if (*(long *)(puVar62 + -0xd8) != 0) {
          now_01.fields._8_8_ =
               (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(puVar62 + -0xd8) + 0x18))->method;
          IVar75 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
          pMVar21 = *(MethodInfo_331B660 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
          *(undefined8 *)(puVar62 + -0xe8) = 0x3416e0b;
          plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                      ((Il2CppObject *)now_01.fields._8_8_,(System_String_o *)IVar75.method,
                                       pMVar21);
          lVar28 = *(long *)(puVar62 + -0xd8);
joined_r0x03416cc8:
          if (lVar28 != 0) goto label_03416cce;
        }
      }
      goto label_03416ea6;
    }
label_03416e21:
    *(undefined2 *)&(now_01.fields._8_8_)->field7_0x38 = 0x100;
    (now_01.fields._8_8_)->name = (char *)0x0;
    IVar75 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
    (now_01.fields._8_8_)->klass = (Il2CppClass *)IVar75;
    now_01.fields._8_8_ = &(now_01.fields._8_8_)->klass;
    *(undefined8 *)(puVar62 + -0xe8) = 0x3416e41;
    il2cpp_runtime_helper_022b4080();
    IVar30 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
    if (IVar30.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    IVar63 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar62 + -0xd8))->method;
    IVar75 = (Il2CppRGCTXData)(IVar30.method)->return_type;
    now_01.fields._8_8_ = *(Il2CppRGCTXData *)&(IVar30.method)->field8_0x40;
    pcVar6 = (code *)(IVar30.method)->name;
    *(undefined8 *)(puVar62 + -0xe8) = 0x3416e5a;
    Var79 = (*pcVar6)();
    if (IVar63.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    *(unkbyte10 *)&(IVar63.method)->return_type = Var79;
    *(undefined4 *)((long)&(IVar63.method)->parameters + 2) = *(undefined4 *)(puVar62 + -0xce);
    *(undefined2 *)((long)&(IVar63.method)->parameters + 6) = *(undefined2 *)(puVar62 + -0xca);
    now_01.fields._8_8_ = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
    pMVar22 = *(MethodInfo_331B520 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
    IVar75.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    *(undefined8 *)(puVar62 + -0xe8) = 0x3416e95;
    plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((System_String_o *)now_01.fields._8_8_,0,pMVar22);
    lVar28 = *(long *)(puVar62 + -0xd8);
    if (lVar28 == 0) goto label_03416ea6;
label_03416cce:
    now_01.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x10))->method;
    if (now_01.fields._8_8_ == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto label_03416ea6;
    IVar75 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now.fields._8_8_)->klass)->fields + 0xc0) + 0x148))->method;
    *(undefined8 *)(puVar62 + -0xe8) = 0x3416cf2;
    now.fields._8_8_ =
         (MethodInfo *)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)now_01.fields._8_8_,
                    (MethodInfo_362E340 *)IVar75.method);
    if ((*(long *)(puVar62 + -0xd8) == 0) ||
       (lVar28 = *(long *)(*(long *)(puVar62 + -0xd8) + 0x10), lVar28 == 0)) goto label_03416ea6;
    *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
    iVar5 = *(int32_t *)(lVar28 + 0x18);
    *(undefined4 *)(lVar28 + 0x18) = 0;
    if (0 < iVar5) {
      now_01.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x10))->method;
      IVar75.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      *(undefined8 *)(puVar62 + -0xe8) = 0x3416d2f;
      System_Array__Clear((System_Array_o *)now_01.fields._8_8_,0,iVar5,(MethodInfo *)0x0);
    }
    if (now.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    if ((int)(now.fields._8_8_)->name < 1) {
      return;
    }
    pAVar32 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0;
    IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pAVar71 = pAVar32;
    if (((ulong)(now.fields._8_8_)->name & 0xffffffff) != 0) {
      do {
        pAVar32 = *(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o **)
                   ((long)now.fields._8_8_ + (long)IVar63.rgctxDataDummy * 8 + 0x20);
        if (pAVar32 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
          if (pAVar32 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_03416ea6;
          pAVar16 = pAVar32[1].klass;
          now_01.fields._8_8_ = (Il2CppRGCTXData)pAVar32[1].fields._Value_k__BackingField;
          pIVar7 = (pAVar32->fields)._Value_k__BackingField;
          *(undefined8 *)(puVar62 + -0xe8) = 0x3416da4;
          IVar75 = (Il2CppRGCTXData)plVar67;
          (*(code *)pIVar7)(now_01.fields._8_8_,plVar67,pAVar16);
          pAVar71 = pAVar32;
        }
        pAVar32 = pAVar71;
        IVar63.rgctxDataDummy = (void *)((long)&(IVar63.method)->methodPointer + 1);
        IVar30 = (Il2CppRGCTXData)(long)(int)*(uint *)&(now.fields._8_8_)->name;
        if ((long)IVar30.rgctxDataDummy <= (long)IVar63.rgctxDataDummy) {
          return;
        }
        pAVar71 = pAVar32;
      } while (IVar63.rgctxDataDummy < (Il2CppRGCTXData *)(ulong)*(uint *)&(now.fields._8_8_)->name);
    }
  }
  *(code **)(puVar62 + -0xe8) =
       ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
  ;
  auVar76 = il2cpp_runtime_helper_022b2ca0();
  pSVar34 = auVar76._8_8_;
  ((Il2CppRGCTXData *)(puVar62 + -0xe8))->method = (MethodInfo *)now_00.fields._8_8_;
  ((Il2CppRGCTXData *)(puVar62 + -0xf0))->method = (MethodInfo *)plVar67;
  ((Il2CppRGCTXData *)(puVar62 + -0xf8))->method = (MethodInfo *)now.fields._8_8_;
  ((Il2CppRGCTXData *)(puVar62 + -0x100))->method = (MethodInfo *)IVar29;
  *(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o **)(puVar62 + -0x108) = pAVar32;
  ((Il2CppRGCTXData *)(puVar62 + -0x110))->method = (MethodInfo *)IVar63;
  *(long *)(puVar62 + -0x118) = auVar76._0_8_;
  now.fields._8_8_ = IVar38;
  if (g_data_057a8ce6 == '\0') {
    *(undefined8 *)(puVar62 + -0x120) = 0x3416edf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    *(undefined8 *)(puVar62 + -0x120) = 0x3416eeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8ce6 = '\x01';
  }
  lVar28 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar38.method)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    *(undefined8 *)(puVar62 + -0x120) = 0x3416f0e;
    lVar28 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)(puVar62 + -0x120) = 0x3416f16;
  pIVar33 = (Il2CppType *)il2cpp_runtime_helper_023052d0(lVar28);
  pcVar6 = (code *)**(undefined8 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar38.method)->klass)->fields + 0xc0) + 8);
  *(undefined8 *)(puVar62 + -0x120) = 0x3416f2d;
  (*pcVar6)(pIVar33);
  (now_01.fields._8_8_)->return_type = pIVar33;
  *(undefined8 *)(puVar62 + -0x120) = 0x3416f3d;
  il2cpp_runtime_helper_022b4080(&(now_01.fields._8_8_)->return_type);
  now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
  *(undefined8 *)(puVar62 + -0x120) = 0x3416f47;
  System_Object___ctor((Il2CppObject *)now_01.fields._8_8_,(MethodInfo *)0x0);
  if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
    *(undefined8 *)(puVar62 + -0x120) = 0x3417126;
    uVar36 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    *(undefined8 *)(puVar62 + -0x120) = 0x341712e;
    IVar75.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(uVar36);
    *(undefined8 *)(puVar62 + -0x120) = 0x341713d;
    pSVar49 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    *(undefined8 *)(puVar62 + -0x120) = 0x341714a;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)IVar75.method,pSVar49,(MethodInfo *)0x0);
    *(undefined8 *)(puVar62 + -0x120) = 0x3417155;
    now_00.fields._8_8_ = IVar38;
    IVar63.rgctxDataDummy = IVar75.rgctxDataDummy;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (now_01.fields._8_8_ != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ((System_Collections_Generic_Dictionary_object__object__Fields *)&(now_01.fields._8_8_)->invoker_method)
      ->_buckets = (System_Int32_array *)IVar75;
      *(undefined8 *)(puVar62 + -0x120) = 0x3416f70;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                         &(now_01.fields._8_8_)->invoker_method,IVar75.rgctxDataDummy);
      if (pSVar34 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar38.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          *(undefined8 *)(puVar62 + -0x120) = 0x3416f96;
          lVar28 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar28 + 0xe4) == 0) {
          *(undefined8 *)(puVar62 + -0x120) = 0x3416fa7;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar38.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          *(undefined8 *)(puVar62 + -0x120) = 0x3416fc7;
          lVar28 = il2cpp_runtime_helper_023009c0(lVar28);
        }
        pSVar34 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   (*(long *)(lVar28 + 0xb8) + 8);
        if (pSVar34 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar38.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            *(undefined8 *)(puVar62 + -0x120) = 0x3416ff8;
            lVar28 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar28 + 0xe4) == 0) {
            *(undefined8 *)(puVar62 + -0x120) = 0x3417009;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar38.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            *(undefined8 *)(puVar62 + -0x120) = 0x3417029;
            il2cpp_runtime_helper_023009c0(lVar28);
          }
          *(undefined8 *)(puVar62 + -0x120) = 0x3417042;
          pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          *(undefined8 *)(puVar62 + -0x120) = 0x3417061;
          System_Func_DateTimeOffset____ctor();
          lVar28 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar38.method)->klass)->fields + 0xc0);
          lVar35 = *(long *)(lVar28 + 0x28);
          if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
            *(undefined8 *)(puVar62 + -0x120) = 0x3417081;
            lVar35 = il2cpp_runtime_helper_023009c0(lVar35);
            lVar28 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar38.method)->klass)->fields + 0xc0);
          }
          *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(*(long *)(lVar35 + 0xb8) + 8)
               = pSVar34;
          lVar28 = *(long *)(lVar28 + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            *(undefined8 *)(puVar62 + -0x120) = 0x34170ac;
            lVar28 = il2cpp_runtime_helper_023009c0(lVar28);
          }
          lVar28 = *(long *)(lVar28 + 0xb8);
          *(undefined8 *)(puVar62 + -0x120) = 0x34170bf;
          il2cpp_runtime_helper_022b4080(lVar28 + 8,pSVar34);
        }
      }
      (now_01.fields._8_8_)->name = (char *)pSVar34;
      *(undefined8 *)(puVar62 + -0x120) = 0x34170cf;
      il2cpp_runtime_helper_022b4080(&(now_01.fields._8_8_)->name,pSVar34);
      if (IVar30.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          *(undefined8 *)(puVar62 + -0x120) = 0x34170ec;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar30 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      (now_01.fields._8_8_)->klass = (Il2CppClass *)IVar30;
      il2cpp_runtime_helper_022b4080(&(now_01.fields._8_8_)->klass,IVar30.rgctxDataDummy);
      return;
    }
  }
  *(undefined8 *)(puVar62 + -0x120) = 0x341715a;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppType **)(puVar62 + -0x120) = pIVar33;
  ((Il2CppRGCTXData *)(puVar62 + -0x128))->method = (MethodInfo *)IVar38;
  ((Il2CppRGCTXData *)(puVar62 + -0x130))->rgctxDataDummy = (void *)IVar30;
  ((Il2CppRGCTXData *)(puVar62 + -0x138))->rgctxDataDummy = (void *)IVar75;
  ((Il2CppRGCTXData *)(puVar62 + -0x148))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  lVar28 = *(long *)(extraout_RDX_01 + 0x20);
  lVar35 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x38);
  uVar54 = (ulong)*(uint *)(lVar35 + 0xfc);
  puVar58 = (undefined8 *)(puVar62 + (-0x150 - (uVar54 + 0xf & 0xfffffffffffffff0)));
  pIVar33 = (IVar63.method)->return_type;
  if (-1 < *(int *)(lVar35 + 0x28)) {
    now_00.fields._8_8_ = puVar62 + -0x148;
  }
  puVar58[-1] = 0x34171af;
  puVar64 = puVar58;
  memcpy(puVar58,now_00.fields._8_8_,uVar54);
  if (pIVar33 != (Il2CppType *)0x0) {
    puVar64 = *(undefined8 **)(*(long *)(lVar28 + 0xc0) + 0x40);
    uVar36 = *puVar64;
    puVar59 = puVar58;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar28 + 0xc0) + 0x38) + 0x28)) {
      puVar59 = (undefined8 *)*puVar58;
    }
    *(undefined8 **)(puVar62 + -0x150) = puVar59;
    pcVar6 = (code *)puVar64[2];
    puVar58[-1] = 0x34171e1;
    (*pcVar6)(uVar36,puVar64,pIVar33,puVar62 + -0x150,puVar62 + -0x139);
    return;
  }
  puVar58[-1] = 0x34171f4;
  il2cpp_runtime_helper_022b2c90();
  puVar58[-1] = puVar62 + -0x120;
  puVar58[-2] = lVar28;
  puVar58[-3] = 0;
  puVar58[-4] = pSVar34;
  puVar58[-5] = puVar58;
  ((Il2CppRGCTXData *)(puVar58 + -8))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  lVar28 = *(long *)(extraout_RDX_02 + 0x20);
  lVar35 = *(long *)(lVar28 + 0xc0);
  uVar54 = (ulong)*(uint *)(*(long *)(lVar35 + 0x38) + 0xfc);
  puVar59 = (undefined8 *)((long)puVar58 + (-0x58 - (uVar54 + 0xf & 0xfffffffffffffff0)));
  puVar58[-7] = 0;
  lVar42 = puVar64[5];
  if (-1 < *(int *)(*(long *)(lVar35 + 0x38) + 0x28)) {
    now_00.fields._8_8_ = puVar58 + -8;
  }
  puVar59[-1] = 0x3417261;
  puVar64 = puVar59;
  memcpy(puVar59,now_00.fields._8_8_,uVar54);
  if (lVar42 != 0) {
    puVar64 = *(undefined8 **)(*(long *)(lVar28 + 0xc0) + 0x48);
    uVar36 = *puVar64;
    puVar60 = puVar59;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar28 + 0xc0) + 0x38) + 0x28)) {
      puVar60 = (undefined8 *)*puVar59;
    }
    puVar58[-0xb] = puVar60;
    puVar58[-10] = puVar58 + -7;
    pcVar6 = (code *)puVar64[2];
    puVar59[-1] = 0x341729c;
    (*pcVar6)(uVar36,puVar64,lVar42,puVar58 + -0xb,(long)puVar58 + -0x29);
    if (*(char *)((long)puVar58 + -0x29) != '\0') {
      uVar36 = puVar58[-7];
      lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(extraout_RDX_02 + 0x20) + 0xc0) + 0x58) + 0x80);
      puVar59[-1] = 0x34172c6;
      il2cpp_runtime_helper_02338550(uVar36,lVar28 + 0xc0);
    }
    return;
  }
  puVar59[-1] = 0x34172e2;
  uVar36 = il2cpp_runtime_helper_022b2c90();
  puVar59[-1] = uVar36;
  lVar35 = puVar64[5];
  if (lVar35 != 0) {
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                     &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x60))();
    return;
  }
  puVar59[-2] = 0x3417314;
  il2cpp_runtime_helper_022b2c90();
  puVar59[-2] = puVar58 + -1;
  puVar59[-3] = 0;
  puVar59[-4] = extraout_RDX_02;
  puVar59[-5] = puVar59;
  ((Il2CppRGCTXData *)(puVar59 + -7))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  lVar42 = *(long *)(extraout_RDX_03 + 0x20);
  lVar11 = *(long *)(*(long *)(lVar42 + 0xc0) + 0x38);
  uVar57 = (ulong)*(uint *)(lVar11 + 0xfc);
  uVar54 = uVar57 + 0xf & 0xfffffffffffffff0;
  puVar58 = (undefined8 *)((long)puVar59 + (-0x40 - uVar54));
  lVar35 = *(long *)(lVar35 + 0x28);
  if (-1 < *(int *)(lVar11 + 0x28)) {
    now_00.fields._8_8_ = puVar59 + -7;
  }
  puVar58[-1] = 0x341736f;
  puVar64 = puVar58;
  memcpy(puVar58,now_00.fields._8_8_,uVar57);
  uVar52 = (undefined4)uVar54;
  if (lVar35 != 0) {
    puVar64 = *(undefined8 **)(*(long *)(lVar42 + 0xc0) + 0x68);
    uVar36 = *puVar64;
    puVar60 = puVar58;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar42 + 0xc0) + 0x38) + 0x28)) {
      puVar60 = (undefined8 *)*puVar58;
    }
    puVar59[-8] = puVar60;
    pcVar6 = (code *)puVar64[2];
    puVar58[-1] = 0x34173a1;
    (*pcVar6)(uVar36,puVar64,lVar35,puVar59 + -8,(long)puVar59 + -0x29);
    return;
  }
  puVar58[-1] = 0x34173b1;
  il2cpp_runtime_helper_022b2c90();
  puVar58[-1] = puVar59 + -2;
  puVar58[-2] = lVar42;
  puVar58[-3] = 0;
  ((Il2CppRGCTXData *)(puVar58 + -4))->method = (MethodInfo *)now_01.fields._8_8_;
  puVar58[-5] = lVar28;
  puVar58[-6] = puVar58;
  *(undefined4 *)((long)puVar58 + -100) = uVar52;
  puVar58[-9] = puVar64;
  ((Il2CppRGCTXData *)(puVar58 + -0x12))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  pSVar72 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(now.fields._8_8_)->klass;
  lVar28 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(now.fields._8_8_)->klass)->fields + 0xc0);
  uVar54 = (ulong)*(uint *)(*(long *)(lVar28 + 0x38) + 0xfc);
  uVar57 = (ulong)*(uint *)(*(long *)(lVar28 + 0xa0) + 0xfc);
  puVar58[-0xe] = uVar54;
  puVar64 = (undefined8 *)((long)puVar58 + (-0x98 - (uVar54 + 0xf & 0xfffffffffffffff0)));
  puVar58[-0xf] = uVar57;
  uVar54 = uVar57 + 0xf & 0xfffffffffffffff0;
  lVar35 = (long)puVar64 - uVar54;
  puVar58[-0x10] = lVar35;
  puVar58[-7] = 0;
  lVar28 = *(long *)(lVar28 + 0x70);
  bVar2 = *(byte *)(lVar28 + 0x135);
  puVar58[-0x11] = extraout_RDX_04;
  if ((bVar2 & 1) == 0) {
    *(undefined8 *)(lVar35 + -8) = 0x341745a;
    lVar28 = il2cpp_runtime_helper_023009c0();
  }
  iVar53 = (int)uVar54;
  *(undefined8 *)(lVar35 + -8) = 0x3417462;
  puVar37 = (undefined8 *)il2cpp_runtime_helper_023052d0(lVar28);
  IVar38 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x78))->method;
  IVar63 = *(Il2CppRGCTXData *)&(IVar38.method)->methodPointer;
  *(undefined8 *)(lVar35 + -8) = 0x3417479;
  puVar60 = puVar37;
  (*(code *)IVar63)();
  IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  puVar59 = puVar58;
  if (puVar37 != (undefined8 *)0x0) {
    lVar28 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
    *(undefined8 *)(lVar35 + -8) = 0x34174a5;
    il2cpp_runtime_helper_022b2950(lVar28,8);
    *(undefined8 *)(lVar35 + -8) = 0x34174b0;
    puVar59 = (undefined8 *)il2cpp_runtime_helper_02338550(puVar37,lVar28);
    *puVar59 = puVar58[-9];
    uVar36 = *(undefined8 *)(lVar28 + 8);
    *(undefined8 *)(lVar35 + -8) = 0x34174c5;
    il2cpp_runtime_helper_022b2880(uVar36,puVar59,0);
    lVar28 = *(long *)&pSVar72->fields;
    IVar38.rgctxDataDummy = puVar58 + -0x12;
    if (*(int *)(*(long *)(*(long *)(lVar28 + 0xc0) + 0x38) + 0x28) < 0) {
      IVar38 = now_00.fields._8_8_;
    }
    now_00.fields._8_8_ = *(Il2CppRGCTXData *)(puVar58 + -0xe);
    *(undefined8 *)(lVar35 + -8) = 0x34174f2;
    memcpy(puVar64,IVar38.rgctxDataDummy,(size_t)now_00.fields._8_8_);
    lVar28 = *(long *)(*(long *)(*(long *)(lVar28 + 0xc0) + 0x70) + 0x80);
    puVar58[-0xc] = puVar37;
    iVar53 = now_00.fields._8_4_;
    *(undefined8 *)(lVar35 + -8) = 0x341751a;
    il2cpp_runtime_helper_022b2970(puVar37,lVar28 + 0x20,puVar64);
    IVar63 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar58 + -0x11))->rgctxDataDummy;
    if (IVar63.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    puVar59 = *(undefined8 **)(puVar58[-9] + 0x28);
    lVar28 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
    uVar36 = puVar58[-0xc];
    *(undefined8 *)(lVar35 + -8) = 0x3417552;
    IVar38.rgctxDataDummy = (void *)il2cpp_runtime_helper_02338550(uVar36,lVar28 + 0x20);
    *(undefined8 *)(lVar35 + -8) = 0x3417560;
    puVar60 = puVar64;
    memcpy(puVar64,IVar38.rgctxDataDummy,(size_t)now_00.fields._8_8_);
    if (puVar59 != (undefined8 *)0x0) {
      lVar28 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
      IVar38 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x48))->method;
      puVar60 = ((Il2CppRGCTXData *)&(IVar38.method)->methodPointer)->rgctxDataDummy;
      puVar37 = puVar64;
      if (-1 < *(int *)(*(long *)(lVar28 + 0x38) + 0x28)) {
        puVar37 = (undefined8 *)*puVar64;
      }
      puVar58[-0xb] = puVar37;
      puVar58[-10] = puVar58 + -7;
      iVar25 = (int)puVar58;
      iVar53 = iVar25 + -0x58;
      now.fields._8_8_ = puVar58 + -8;
      pIVar9 = (Il2CppArrayBounds *)(IVar38.method)->invoker_method;
      *(undefined8 *)(lVar35 + -8) = 0x34175a5;
      (*(code *)pIVar9)(puVar60,IVar38.rgctxDataDummy,puVar59);
      if (*(char *)(puVar58 + -8) == '\0') {
        lVar28 = *(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          *(undefined8 *)(lVar35 + -8) = 0x34175cc;
          lVar28 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)(lVar35 + -8) = 0x34175d4;
        uVar36 = il2cpp_runtime_helper_023052d0(lVar28);
        pcVar6 = (code *)**(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x88);
        *(undefined8 *)(lVar35 + -8) = 0x34175ee;
        (*pcVar6)(uVar36);
        puVar58[-7] = uVar36;
        puVar59 = *(undefined8 **)(puVar58[-9] + 0x28);
        lVar28 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
        uVar36 = puVar58[-0xc];
        *(undefined8 *)(lVar35 + -8) = 0x341761d;
        IVar38.rgctxDataDummy = (void *)il2cpp_runtime_helper_02338550(uVar36,lVar28 + 0x20);
        *(undefined8 *)(lVar35 + -8) = 0x341762b;
        puVar60 = puVar64;
        memcpy(puVar64,IVar38.rgctxDataDummy,(size_t)now_00.fields._8_8_);
        if (puVar59 == (undefined8 *)0x0) goto label_0341795f;
        now.fields._8_8_ = *(Il2CppRGCTXData *)(puVar58 + -7);
        lVar28 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
        IVar38 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x90))->method;
        puVar60 = ((Il2CppRGCTXData *)&(IVar38.method)->methodPointer)->rgctxDataDummy;
        puVar37 = puVar64;
        if (-1 < *(int *)(*(long *)(lVar28 + 0x38) + 0x28)) {
          puVar37 = (undefined8 *)*puVar64;
        }
        puVar58[-0xb] = puVar37;
        *(Il2CppRGCTXData *)(puVar58 + -10) = now.fields._8_8_;
        pIVar9 = (Il2CppArrayBounds *)(IVar38.method)->invoker_method;
        *(undefined8 *)(lVar35 + -8) = 0x341766f;
        (*(code *)pIVar9)(puVar60,IVar38.rgctxDataDummy,puVar59,puVar58 + -0xb);
      }
      lVar28 = *(long *)(puVar58[-9] + 0x18);
      iVar53 = 0;
      if (lVar28 != 0) {
        uVar36 = *(undefined8 *)(lVar28 + 0x28);
        uVar12 = *(undefined8 *)(lVar28 + 0x40);
        pcVar6 = *(code **)(lVar28 + 0x18);
        *(undefined8 *)(lVar35 + -8) = 0x341768b;
        auVar76 = (*pcVar6)(uVar12,uVar36);
        if (*(char *)((long)puVar58 + -100) == '\0') {
          uVar36 = puVar58[-7];
          in_R9 = *(MethodInfo_3316900 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x98);
          uVar12 = puVar58[-9];
          pIVar68 = in_R9->methodPointer;
          *(undefined8 *)(lVar35 + -8) = 0x34176b6;
          cVar26 = (*pIVar68)(uVar12,uVar36,auVar76._0_8_,auVar76._8_8_ & 0xffffffff,IVar63.rgctxDataDummy);
          if (cVar26 != '\0') {
            return;
          }
        }
        uVar36 = puVar58[-7];
        lVar28 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80);
        *(undefined8 *)(lVar35 + -8) = 0x34176e1;
        pcVar39 = (char *)il2cpp_runtime_helper_02338550(uVar36,lVar28 + 0x80);
        if (*pcVar39 == '\0') {
          pcVar6 = (code *)**(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 200);
          *(undefined8 *)(lVar35 + -8) = 0x3417792;
          now.fields._8_8_ = (void *)(*pcVar6)();
          puVar60 = *(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xc0);
          uVar36 = *puVar60;
          ((Il2CppRGCTXData *)(puVar58 + -8))->rgctxDataDummy = (void *)now.fields._8_8_;
        }
        else {
          uVar36 = puVar58[-7];
          lVar28 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80);
          *(undefined8 *)(lVar35 + -8) = 0x341770d;
          pvVar40 = (void *)il2cpp_runtime_helper_02338550(uVar36,lVar28 + 0x20);
          puVar59 = (undefined8 *)puVar58[-0x10];
          sVar13 = puVar58[-0xf];
          *(undefined8 *)(lVar35 + -8) = 0x3417720;
          memcpy(puVar59,pvVar40,sVar13);
          lVar28 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
          puVar60 = *(undefined8 **)(lVar28 + 0xa8);
          uVar36 = *puVar60;
          if (-1 < *(int *)(*(long *)(lVar28 + 0xa0) + 0x28)) {
            puVar59 = (undefined8 *)*puVar59;
          }
          now_00.fields._8_8_ = puVar58 + -8;
          puVar58[-8] = puVar59;
          pcVar6 = (code *)puVar60[2];
          *(undefined8 *)(lVar35 + -8) = 0x3417759;
          (*pcVar6)(uVar36,puVar60,0,now_00.fields._8_8_,puVar58 + -0xb);
          now.fields._8_8_ = *(Il2CppRGCTXData *)(puVar58 + -0xb);
          puVar60 = *(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xc0);
          uVar36 = *puVar60;
          *(Il2CppRGCTXData *)(puVar58 + -8) = now.fields._8_8_;
        }
        iVar53 = iVar25 + -0x40;
        pcVar6 = (code *)puVar60[2];
        *(undefined8 *)(lVar35 + -8) = 0x34177b8;
        (*pcVar6)(uVar36,puVar60,IVar63.rgctxDataDummy);
        puVar60 = (undefined8 *)puVar58[-7];
        IVar38 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80))->
                 rgctxDataDummy;
        *(undefined8 *)(lVar35 + -8) = 0x34177d7;
        plVar67 = (long *)il2cpp_runtime_helper_02338550();
        if (*plVar67 != 0) {
          puVar60 = *(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xd8);
          uVar36 = *puVar60;
          ((Il2CppRGCTXData *)(puVar58 + -8))->rgctxDataDummy = (void *)IVar63;
          iVar53 = iVar25 + -0x40;
          pcVar6 = (code *)puVar60[2];
          *(undefined8 *)(lVar35 + -8) = 0x3417806;
          now.fields._8_8_ = IVar63;
          (*pcVar6)(uVar36);
          puVar60 = (undefined8 *)puVar58[-7];
          IVar38.rgctxDataDummy =
               (void *)(*(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80) + 0xc0
                       );
          *(undefined8 *)(lVar35 + -8) = 0x341782a;
          pcVar39 = (char *)il2cpp_runtime_helper_02338550();
          if (*pcVar39 != '\0') {
            return;
          }
          lVar28 = puVar58[-7];
          now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (lVar28 != 0) {
            lVar11 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80);
            lVar42 = lVar11 + 0xc0;
            *(undefined8 *)(lVar35 + -8) = 0x341786b;
            il2cpp_runtime_helper_022b2950(lVar42,1);
            *(undefined8 *)(lVar35 + -8) = 0x3417876;
            puVar41 = (undefined1 *)il2cpp_runtime_helper_02338550(lVar28,lVar42);
            *puVar41 = 1;
            uVar36 = *(undefined8 *)(lVar11 + 200);
            *(undefined8 *)(lVar35 + -8) = 0x341788b;
            il2cpp_runtime_helper_022b2880(uVar36,puVar41,0);
            lVar28 = *(long *)(puVar58[-9] + 0x10);
            lVar42 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
            IVar63 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar58 + -0xc))->rgctxDataDummy;
            *(undefined8 *)(lVar35 + -8) = 0x34178b9;
            pvVar40 = (void *)il2cpp_runtime_helper_02338550(IVar63.rgctxDataDummy,lVar42 + 0x20);
            sVar13 = puVar58[-0xe];
            *(undefined8 *)(lVar35 + -8) = 0x34178c8;
            memcpy(puVar64,pvVar40,sVar13);
            lVar42 = *(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xe8);
            if ((*(byte *)(lVar42 + 0x135) & 1) == 0) {
              *(undefined8 *)(lVar35 + -8) = 0x34178e8;
              lVar42 = il2cpp_runtime_helper_023009c0();
            }
            *(undefined8 *)(lVar35 + -8) = 0x34178f0;
            puVar59 = (undefined8 *)il2cpp_runtime_helper_023052d0(lVar42);
            lVar42 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
            uVar36 = *(undefined8 *)(lVar42 + 0xe0);
            puVar37 = *(undefined8 **)(lVar42 + 0xf0);
            pcVar6 = (code *)*puVar37;
            *(undefined8 *)(lVar35 + -8) = 0x3417914;
            IVar38 = IVar63;
            puVar60 = puVar59;
            (*pcVar6)(puVar59,IVar63.rgctxDataDummy,uVar36);
            iVar53 = (int)puVar37;
            now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
            if (lVar28 != 0) {
              lVar42 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
              puVar60 = *(undefined8 **)(lVar42 + 0xf8);
              uVar36 = *puVar60;
              if (-1 < *(int *)(*(long *)(lVar42 + 0x38) + 0x28)) {
                puVar64 = (undefined8 *)*puVar64;
              }
              puVar58[-0xb] = puVar64;
              puVar58[-10] = puVar59;
              pcVar6 = (code *)puVar60[2];
              *(undefined8 *)(lVar35 + -8) = 0x3417950;
              (*pcVar6)(uVar36,puVar60,lVar28,puVar58 + -0xb,puVar59);
              return;
            }
          }
        }
      }
    }
  }
label_0341795f:
  *(undefined8 *)(lVar35 + -8) = 0x3417964;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 **)(lVar35 + -8) = puVar58 + -1;
  ((Il2CppRGCTXData *)(lVar35 + -0x10))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  *(undefined8 **)(lVar35 + -0x18) = puVar64;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__o **)(lVar35 + -0x20) = pSVar72;
  ((Il2CppRGCTXData *)(lVar35 + -0x28))->rgctxDataDummy = (void *)IVar63;
  *(undefined8 **)(lVar35 + -0x30) = puVar59;
  *(Il2CppRGCTXData *)(lVar35 + -0x40) = now.fields._8_8_;
  *(int *)(lVar35 + -0x38) = iVar53;
  *(undefined8 *)(lVar35 + -0x70) = extraout_RDX_05;
  *(undefined8 **)(lVar35 + -0x48) = puVar60;
  method_13 = (MethodInfo_331A460 *)in_R9;
  if (g_data_057a8ce7 == '\0') {
    *(undefined8 *)(lVar35 + -0x90) = 0x34179ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    *(undefined8 *)(lVar35 + -0x90) = 0x34179b7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    *(undefined8 *)(lVar35 + -0x90) = 0x34179c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    *(undefined8 *)(lVar35 + -0x90) = 0x34179cf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057a8ce7 = '\x01';
  }
  pAVar14 = in_R9->klass->rgctx_data;
  t1._ticks = (int64_t)(pAVar14->_20_TValue->_2).actualSize;
  IVar63.rgctxDataDummy = (void *)(t1._ticks + 0xfU & 0xfffffffffffffff0);
  __dest = (MethodInfo_3316900 *)((lVar35 + -0x88) - (long)IVar63);
  *(undefined8 *)(lVar35 + -0x68) = 0;
  *(undefined8 *)(lVar35 + -0x60) = 0;
  pvVar40 = (pAVar14->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
  __dest[-1].slot = 0x7a1e;
  __dest[-1].parameters_count = 'A';
  __dest[-1].bitflags = '\x03';
  *(undefined4 *)&__dest[-1].field_0x54 = 0;
  pcVar39 = (char *)il2cpp_runtime_helper_02338550(IVar38.rgctxDataDummy,(long)pvVar40 + 0x80);
  pMVar73 = __dest;
  if (*pcVar39 == '\0') {
label_03417b74:
    pIVar70 = (Il2CppRGCTXData *)
              ((long)(in_R9->klass->rgctx_data->
                      _11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields + 0xa0);
    __dest[-1].slot = 0x7b97;
    __dest[-1].parameters_count = 'A';
    __dest[-1].bitflags = '\x03';
    *(undefined4 *)&__dest[-1].field_0x54 = 0;
    IVar30 = IVar38;
    pcVar39 = (char *)il2cpp_runtime_helper_02338550();
    if (*pcVar39 == '\0') {
      return;
    }
    lVar28 = *(long *)(*(long *)(lVar35 + -0x48) + 0x20);
    pMVar61 = in_R9;
    if (lVar28 != 0) {
      cVar26 = *(char *)(lVar28 + 0x18);
      uVar36 = *(undefined8 *)(lVar28 + 0x20);
      *(char *)(lVar35 + -0x68) = cVar26;
      *(undefined8 *)(lVar35 + -0x60) = uVar36;
      if (cVar26 == '\0') {
        return;
      }
      pvVar40 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1
                ).fields;
      __dest[-1].slot = 0x7be9;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      pIVar70 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar38.rgctxDataDummy,(long)pvVar40 + 0x60);
      now_00.fields._8_8_ = *pIVar70;
      Var24 = *(unkuint10 *)pIVar70;
      IVar63._2_6_ = 0;
      IVar63._0_2_ = *(ushort *)(pIVar70 + 1);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        __dest[-1].slot = 0x7c09;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar35 + -0x70))->method;
      uVar4 = *(uint *)(lVar35 + -0x38);
      now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      __dest[-1].slot = 0x7c21;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      left_02.fields._8_4_ = uVar4;
      left_02.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)IVar30.rgctxDataDummy;
      left_02.fields._12_4_ = 0;
      pIVar70 = (Il2CppRGCTXData *)(ulong)uVar4;
      right_02.fields._10_6_ = 0;
      right_02.fields._0_10_ = Var24;
      t1._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left_02,right_02,(MethodInfo *)0x0);
      lVar28 = *(long *)(*(long *)(lVar35 + -0x48) + 0x20);
      pMVar73 = in_R9;
      if (lVar28 != 0) {
        IVar63._0_1_ = *(undefined1 *)(lVar28 + 0x18);
        uVar36 = *(undefined8 *)(lVar28 + 0x20);
        *(undefined1 *)(lVar35 + -0x68) = *(undefined1 *)(lVar28 + 0x18);
        *(undefined8 *)(lVar35 + -0x60) = uVar36;
        __dest[-1].slot = 0x7c56;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        __this_02.fields.value.fields._ticks =
             (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
        __this_02.fields._0_8_ = lVar35 + -0x68;
        now_00.fields._8_8_ = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_02,method_09);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          __dest[-1].slot = 0x7c71;
          __dest[-1].parameters_count = 'A';
          __dest[-1].bitflags = '\x03';
          *(undefined4 *)&__dest[-1].field_0x54 = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar61 = (MethodInfo_3316900 *)0x0;
        __dest[-1].slot = 0x7c80;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        bVar27 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)t1._ticks,(System_TimeSpan_o)now_00.fields._8_8_,
                            (MethodInfo *)0x0);
        if ((char)bVar27 == '\0') {
          return;
        }
        pvVar40 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->
                  _1).fields;
        __dest[-1].slot = 0x7ca6;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        pIVar70 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar38.rgctxDataDummy,(long)pvVar40 + 0x40);
        IVar30 = (Il2CppRGCTXData)pIVar70->method;
        pIVar70 = (Il2CppRGCTXData *)0x1;
        pIVar68 = in_R9->klass->rgctx_data->_33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache
                  ->methodPointer;
        __dest[-1].slot = 0x7cc2;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        pvVar44 = (void *)(*pIVar68)();
        pvVar40 = *(void **)(lVar35 + -0x40);
        if (pvVar40 != (void *)0x0) {
          pMVar56 = in_R9->klass->rgctx_data->_24_System_Action_AottgQueryResult_TValue___Invoke;
          pIVar68 = pMVar56->methodPointer;
          *(void **)(lVar35 + -0x58) = pvVar44;
label_03417ceb:
          pIVar65 = pMVar56->invoker_method;
          __dest[-1].slot = 0x7cee;
          __dest[-1].parameters_count = 'A';
          __dest[-1].bitflags = '\x03';
          *(undefined4 *)&__dest[-1].field_0x54 = 0;
          (*pIVar65)(pIVar68,pMVar56,pvVar40,(void **)(lVar35 + -0x58),pvVar44);
          return;
        }
      }
    }
  }
  else {
    *(MethodInfo_3316900 **)(lVar35 + -0x78) = in_R9;
    pvVar40 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).
              fields;
    __dest[-1].slot = 0x7a4d;
    __dest[-1].parameters_count = 'A';
    __dest[-1].bitflags = '\x03';
    *(undefined4 *)&__dest[-1].field_0x54 = 0;
    pVar43 = (unkuint10 *)il2cpp_runtime_helper_02338550(IVar38.rgctxDataDummy,(long)pvVar40 + 0x60);
    pMVar61 = *(MethodInfo_3316900 **)pVar43;
    Var24 = *pVar43;
    IVar63._2_6_ = 0;
    IVar63._0_2_ = *(ushort *)((long)pVar43 + 8);
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      __dest[-1].slot = 0x7a6d;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar35 + -0x70))->method;
    uVar4 = *(uint *)(lVar35 + -0x38);
    now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
    __dest[-1].slot = 0x7a82;
    __dest[-1].parameters_count = 'A';
    __dest[-1].bitflags = '\x03';
    *(undefined4 *)&__dest[-1].field_0x54 = 0;
    left_01.fields._8_4_ = uVar4;
    left_01.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)IVar30.rgctxDataDummy;
    left_01.fields._12_4_ = 0;
    pIVar70 = (Il2CppRGCTXData *)(ulong)uVar4;
    right_01.fields._10_6_ = 0;
    right_01.fields._0_10_ = Var24;
    now_00.fields._8_8_ =
         (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_01,right_01,(MethodInfo *)0x0);
    lVar28 = *(long *)(*(long *)(lVar35 + -0x48) + 0x20);
    if (lVar28 != 0) {
      t2._ticks = ((System_TimeSpan_Fields *)(lVar28 + 0x10))->_ticks;
      if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
        __dest[-1].slot = 0x7ab2;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      __dest[-1].slot = 0x7abf;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      bVar27 = System_TimeSpan__op_LessThan
                         ((System_TimeSpan_o)now_00.fields._8_8_,(System_TimeSpan_o)t2._ticks,
                          (MethodInfo *)0x0);
      in_R9 = *(MethodInfo_3316900 **)(lVar35 + -0x78);
      if ((char)bVar27 == '\0') goto label_03417b74;
      pvVar40 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1
                ).fields;
      __dest[-1].slot = 0x7aed;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      pvVar40 = (void *)il2cpp_runtime_helper_02338550(IVar38.rgctxDataDummy,(long)pvVar40 + 0x20);
      __dest[-1].slot = 0x7afb;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      memcpy(__dest,pvVar40,t1._ticks);
      pAVar14 = in_R9->klass->rgctx_data;
      pIVar70 = (Il2CppRGCTXData *)pAVar14->_32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh;
      IVar30 = (Il2CppRGCTXData)pIVar70->method;
      if (-1 < (int)(pAVar14->_20_TValue->_1).byval_arg.bits) {
        pMVar73 = (MethodInfo_3316900 *)__dest->methodPointer;
      }
      pvVar40 = *(void **)(lVar35 + -0x40);
      *(undefined1 *)(lVar35 + -0x31) = 1;
      *(MethodInfo_3316900 **)(lVar35 + -0x58) = pMVar73;
      *(long *)(lVar35 + -0x50) = lVar35 + -0x31;
      IVar63.rgctxDataDummy = (void *)(lVar35 + -0x58);
      now.fields._8_8_ = (void *)(lVar35 + -0x80);
      IVar75 = pIVar70[2];
      __dest[-1].slot = 0x7b42;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      (*(code *)IVar75)(IVar30.rgctxDataDummy,pIVar70,0);
      t1._ticks = 0;
      pMVar61 = in_R9;
      if (pvVar40 != (void *)0x0) {
        pvVar44 = *(void **)(lVar35 + -0x80);
        pMVar56 = in_R9->klass->rgctx_data->_24_System_Action_AottgQueryResult_TValue___Invoke;
        pIVar68 = pMVar56->methodPointer;
        *(void **)(lVar35 + -0x58) = pvVar44;
        goto label_03417ceb;
      }
    }
  }
  __dest[-1].slot = 0x7d0a;
  __dest[-1].parameters_count = 'A';
  __dest[-1].bitflags = '\x03';
  *(undefined4 *)&__dest[-1].field_0x54 = 0;
  il2cpp_runtime_helper_022b2c90();
  *(long *)&__dest[-1].slot = lVar35 + -8;
  *(Il2CppRGCTXData *)&__dest[-1].token = now_00.fields._8_8_;
  __dest[-1].field8_0x40.genericMethod = (void *)t1._ticks;
  __dest[-1].rgctx_data = (Il2CppRGCTXData *)pMVar73;
  __dest[-1].parameters = (Il2CppType **)IVar38;
  __dest[-1].return_type = (Il2CppType *)pMVar61;
  __dest[-2].rgctx_data = extraout_RDX_06;
  __dest[-2].name = (char *)pIVar70;
  if (g_data_057a8ce8 == '\0') {
    __dest[-2].invoker_method = (InvokerMethod)0x3417d4a;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ce8 = '\x01';
  }
  __dest[-1].virtualMethodPointer = (Il2CppMethodPointer)IVar63;
  now_01.fields._8_8_ =
       (Il2CppRGCTXData)
       *(Il2CppRGCTXData *)
        &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar63.method)->klass)->fields;
  pIVar45 = (now_01.fields._8_8_)->rgctx_data;
  uVar54 = (ulong)((pIVar45[7].klass)->_2).actualSize;
  pIVar65 = (InvokerMethod)(ulong)((pIVar45[0x14].klass)->_2).actualSize;
  IVar75.rgctxDataDummy = (void *)((long)__dest + (-0x98 - (uVar54 + 0xf & 0xfffffffffffffff0)));
  __dest[-1].invoker_method = pIVar65;
  IVar38.rgctxDataDummy = (void *)((ulong)(pIVar65 + 0xf) & 0xfffffffffffffff0);
  __dest[-2].return_type = (Il2CppType *)((long)IVar75.rgctxDataDummy - (long)IVar38);
  pAVar66 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *)
            (((long)IVar75.rgctxDataDummy - (long)IVar38) - (long)IVar38);
  __dest[-2].klass = pAVar66;
  __dest[-1].klass = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *)0x0;
  iVar53 = *(int *)&(pIVar45[7].method)->return_type;
  __dest[-2].parameters = (Il2CppType **)IVar30;
  now_00.fields._8_8_ = (Il2CppRGCTXData)(IVar30.method)->return_type;
  pIVar45 = (Il2CppRGCTXData *)&__dest[-2].name;
  if (iVar53 < 0) {
    pIVar45 = pIVar70;
  }
  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417ddc;
  IVar30.rgctxDataDummy = IVar75.rgctxDataDummy;
  memcpy(IVar75.rgctxDataDummy,pIVar45,uVar54);
  if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
label_03418583:
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418588;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar45 = (Il2CppRGCTXData *)(now_01.fields._8_8_)->rgctx_data[9].method;
    IVar30 = (Il2CppRGCTXData)pIVar45->rgctxDataDummy;
    if (*(int *)&((now_01.fields._8_8_)->rgctx_data[7].method)->return_type < 0) {
      pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
    }
    else {
      pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
      IVar75 = *(Il2CppRGCTXData *)&(IVar75.method)->methodPointer;
    }
    *(Il2CppRGCTXData *)&__dest[-2].token = IVar75;
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c ***)&__dest[-2].slot = &__dest[-1].klass;
    IVar38.rgctxDataDummy = &__dest[-2].token;
    now.fields._8_8_ = &__dest[-2].field8_0x40;
    IVar75 = pIVar45[2];
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e24;
    (*(code *)IVar75)(IVar30.rgctxDataDummy,pIVar45,now_00.fields._8_8_);
    if (*(char *)&__dest[-2].field8_0x40 == '\0') {
      return;
    }
    IVar75 = (Il2CppRGCTXData)__dest[-1].klass;
    if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    pIVar70 = pIVar70 + 4;
    now_01.fields._8_8_ = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    IVar63.rgctxDataDummy = &(now_01.fields._8_8_)->rgctx_data;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e69;
    il2cpp_runtime_helper_022b2950(IVar63.rgctxDataDummy,1);
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e74;
    puVar41 = (undefined1 *)il2cpp_runtime_helper_02338550(IVar75.rgctxDataDummy,IVar63.rgctxDataDummy);
    *puVar41 = 0;
    ppIVar74 = ((now_01.fields._8_8_)->_2).typeHierarchy;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e88;
    il2cpp_runtime_helper_022b2880(ppIVar74,puVar41,0);
    now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-2].rgctx_data;
    if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
      pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x23].method;
      now_00.fields._8_8_ = *pIVar45;
      pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417eaf;
      IVar30 = "unknown_error";
      now_00.fields._8_8_ = (void *)(*now_00.fields._8_8_)();
      if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03418583;
    }
    pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x25].method;
    IVar63 = *pIVar45;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417ed2;
    IVar30 = now_00.fields._8_8_;
    cVar26 = (*(code *)IVar63)();
    IVar63 = (Il2CppRGCTXData)__dest[-1].klass;
    __dest[-1].virtualMethodPointer = (Il2CppMethodPointer)pIVar70;
    if (cVar26 != '\0') {
      if (IVar63.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
        now_01.fields._8_8_ = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f15;
        il2cpp_runtime_helper_022b2950((Il2CppRGCTXData *)&(now_01.fields._8_8_)->_1 + 0x10,1);
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f20;
        pIVar45 = (Il2CppRGCTXData *)
                  il2cpp_runtime_helper_02338550(IVar63.rgctxDataDummy,
                                     (Il2CppRGCTXData *)&(now_01.fields._8_8_)->_1 + 0x10);
        *(undefined1 *)pIVar45 = 1;
        IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(now_01.fields._8_8_)->_1)[0x11].rgctxDataDummy;
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f34;
        il2cpp_runtime_helper_022b2880(IVar30.rgctxDataDummy,pIVar45,0);
        IVar75 = (Il2CppRGCTXData)__dest[-1].klass;
        if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
          lVar28 = (long)pvVar40 + 0xa0;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f6b;
          il2cpp_runtime_helper_022b2950(lVar28,1);
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f76;
          puVar41 = (undefined1 *)il2cpp_runtime_helper_02338550(IVar75.rgctxDataDummy,lVar28);
          *puVar41 = 0;
          uVar36 = *(undefined8 *)((long)pvVar40 + 0xa8);
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f8a;
          il2cpp_runtime_helper_022b2880(uVar36,puVar41,0);
          IVar29 = (Il2CppRGCTXData)__dest[-1].klass;
          pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x26].method;
          IVar30 = (Il2CppRGCTXData)pIVar45->rgctxDataDummy;
          IVar63 = (Il2CppRGCTXData)__dest[-2].return_type;
          *(Il2CppRGCTXData *)&__dest[-2].token = (void *)IVar63;
          IVar38.rgctxDataDummy = &__dest[-2].token;
          now_01.fields._8_8_ = pIVar45[2];
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417fb8;
          now.fields._8_8_ = IVar63;
          (*(code *)now_01.fields._8_8_)(IVar30.rgctxDataDummy,pIVar45,now_00.fields._8_8_);
          now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (IVar29.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
            pIVar45 = (Il2CppRGCTXData *)((long)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields + 0x20);
            IVar38 = (Il2CppRGCTXData)__dest[-1].invoker_method;
            pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417fea;
            il2cpp_runtime_helper_022b2970(IVar29.rgctxDataDummy,pIVar45,IVar63.rgctxDataDummy);
            now_01.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
            now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-2].parameters;
            IVar30 = IVar29;
            if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
              IVar75 = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
              IVar63.rgctxDataDummy = &(IVar75.method)->field8_0x40;
              pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418022;
              il2cpp_runtime_helper_022b2950(IVar63.rgctxDataDummy,8);
              pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341802d;
              pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(now_01.fields._8_8_,IVar63.rgctxDataDummy);
              pIVar45->rgctxDataDummy = (void *)0x0;
              IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar75.klass)->_1)[9].rgctxDataDummy;
              pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418042;
              il2cpp_runtime_helper_022b2880(IVar30.rgctxDataDummy,pIVar45,0);
              IVar38 = (Il2CppRGCTXData)(now_00.fields._8_8_)->name;
              if (IVar38.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
                now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
                pIVar45 = (Il2CppRGCTXData *)(IVar38.method)->return_type;
                IVar30 = *(Il2CppRGCTXData *)&(IVar38.method)->field8_0x40;
                pcVar6 = (code *)(IVar38.method)->name;
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341805e;
                auVar76 = (*pcVar6)();
                if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
                  IVar29.rgctxDataDummy = (void *)(auVar76._8_8_ & 0xffffffff);
                  pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
                  lVar28 = (long)pvVar40 + 0x60;
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418095;
                  il2cpp_runtime_helper_022b2950(lVar28,0x10);
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34180a0;
                  puVar58 = (undefined8 *)il2cpp_runtime_helper_02338550(now_00.fields._8_8_,lVar28);
                  *puVar58 = auVar76._0_8_;
                  *(short *)(puVar58 + 1) = IVar29._0_2_;
                  uVar36 = *(undefined8 *)((long)pvVar40 + 0x68);
                  pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34180bb;
                  il2cpp_runtime_helper_022b2880(uVar36,puVar58,0);
                  pAVar15 = __dest[-1].klass;
                  pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34180de;
                  pvVar40 = (void *)il2cpp_runtime_helper_02338550(pAVar15,(long)pvVar40 + 0x20);
                  IVar63 = (Il2CppRGCTXData)__dest[-2].klass;
                  pIVar65 = __dest[-1].invoker_method;
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34180f4;
                  memcpy(IVar63.rgctxDataDummy,pvVar40,(size_t)pIVar65);
                  pMVar56 = pIVar70->klass->rgctx_data[0x20].method;
                  pIVar68 = pMVar56->methodPointer;
                  if (-1 < *(int *)&(pIVar70->klass->rgctx_data[0x14].method)->return_type) {
                    IVar63 = *(Il2CppRGCTXData *)&(IVar63.method)->methodPointer;
                  }
                  *(undefined1 *)((long)&__dest[-1].name + 7) = 0;
                  *(Il2CppRGCTXData *)&__dest[-2].token = (void *)IVar63;
                  puVar41 = (undefined1 *)((long)&__dest[-1].name + 7);
                  goto label_03418255;
                }
              }
            }
          }
        }
      }
      goto label_03418583;
    }
    pIVar45 = (Il2CppRGCTXData *)((long)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields + 0x80);
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341814c;
    IVar30 = IVar63;
    pcVar39 = (char *)il2cpp_runtime_helper_02338550();
    cVar26 = *pcVar39;
    __dest[-2].rgctx_data = (Il2CppRGCTXData *)now_00.fields._8_8_;
    if (cVar26 == '\0') {
label_0341826f:
      pAVar15 = __dest[-1].klass;
      now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      if (pAVar15 != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *)0x0) {
        IVar75 = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
        IVar63.rgctxDataDummy = (Il2CppRGCTXData *)&(IVar75.klass)->_1 + 0x10;
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34182a6;
        il2cpp_runtime_helper_022b2950(IVar63.rgctxDataDummy,1);
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34182b1;
        pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(pAVar15,IVar63.rgctxDataDummy);
        *(undefined1 *)pIVar45 = 0;
        IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar75.klass)->_1)[0x11].rgctxDataDummy;
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34182c5;
        il2cpp_runtime_helper_022b2880(IVar30.rgctxDataDummy,pIVar45,0);
        now_01.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
        if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
          pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
          IVar63.rgctxDataDummy = pvVar40 + 0xa0;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34182fc;
          il2cpp_runtime_helper_022b2950(IVar63.rgctxDataDummy,1);
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418307;
          puVar41 = (undefined1 *)il2cpp_runtime_helper_02338550(now_01.fields._8_8_,IVar63.rgctxDataDummy);
          *puVar41 = 1;
          uVar36 = *(undefined8 *)((long)pvVar40 + 0xa8);
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341831b;
          il2cpp_runtime_helper_022b2880(uVar36,puVar41,0);
          pAVar15 = __dest[-1].klass;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341833e;
          pvVar40 = (void *)il2cpp_runtime_helper_02338550(pAVar15);
          pIVar65 = __dest[-1].invoker_method;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341834c;
          memset(pvVar40,0,(size_t)pIVar65);
          IVar75 = (Il2CppRGCTXData)__dest[-1].klass;
          pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x27].method;
          IVar29 = *pIVar45;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418367;
          IVar30 = now_00.fields._8_8_;
          IVar29.rgctxDataDummy = (void *)(*IVar29.rgctxDataDummy)();
          if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
            pIVar70 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
            IVar63.rgctxDataDummy = pIVar70 + 8;
            pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341839b;
            il2cpp_runtime_helper_022b2950(IVar63.rgctxDataDummy,8);
            pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34183a6;
            pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar75.rgctxDataDummy,IVar63.rgctxDataDummy);
            pIVar45->rgctxDataDummy = (void *)IVar29;
            IVar30 = (Il2CppRGCTXData)pIVar70[9].rgctxDataDummy;
            pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34183b8;
            il2cpp_runtime_helper_022b2880(IVar30.rgctxDataDummy,pIVar45,0);
            IVar38 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(__dest[-2].parameters + 3))->method;
            now_01.fields._8_8_ = IVar29.rgctxDataDummy;
            if (IVar38.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
              now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
              pIVar45 = (Il2CppRGCTXData *)(IVar38.method)->return_type;
              IVar30 = *(Il2CppRGCTXData *)&(IVar38.method)->field8_0x40;
              pcVar6 = (code *)(IVar38.method)->name;
              pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34183d8;
              auVar76 = (*pcVar6)();
              __dest[-1].invoker_method = auVar76._0_8_;
              if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
                IVar29.rgctxDataDummy = (void *)(auVar76._8_8_ & 0xffffffff);
                pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
                pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
                IVar63.rgctxDataDummy = pvVar40 + 0x60;
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418413;
                il2cpp_runtime_helper_022b2950(IVar63.rgctxDataDummy,0x10);
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341841e;
                puVar58 = (undefined8 *)il2cpp_runtime_helper_02338550(now_00.fields._8_8_,IVar63.rgctxDataDummy);
                *puVar58 = __dest[-1].invoker_method;
                *(short *)(puVar58 + 1) = IVar29._0_2_;
                uVar36 = *(undefined8 *)((long)pvVar40 + 0x68);
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341843c;
                il2cpp_runtime_helper_022b2880(uVar36,puVar58,0);
                pIVar45 = __dest[-2].rgctx_data;
                pIVar68 = (pIVar70->klass->rgctx_data[0x27].method)->methodPointer;
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418453;
                uVar36 = (*pIVar68)(pIVar45);
                IVar38 = (Il2CppRGCTXData)pIVar70->klass->rgctx_data;
                pcVar6 = (code *)**(undefined8 **)&((IVar38.klass)->_2).static_fields_size;
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341846b;
                now_01.fields._8_8_ = (void *)(*pcVar6)(uVar36,0);
                goto label_0341846e;
              }
            }
          }
        }
      }
      goto label_03418583;
    }
    if (__dest[-2].parameters[4] == (Il2CppType *)0x0) goto label_03418583;
    if ((char)__dest[-2].parameters[4][2].bits == '\0') goto label_0341826f;
    IVar48 = (Il2CppRGCTXData)__dest[-1].klass;
    pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x27].method;
    IVar30 = *pIVar45;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341818f;
    IVar29.rgctxDataDummy = (void *)(*IVar30.rgctxDataDummy)();
    IVar30 = now_00.fields._8_8_;
    now_00.fields._8_8_ = IVar48;
    if (IVar48.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    lVar28 = (long)pvVar40 + 0x40;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34181c2;
    il2cpp_runtime_helper_022b2950(lVar28,8);
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34181cd;
    pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar48.rgctxDataDummy,lVar28);
    pIVar45->rgctxDataDummy = (void *)IVar29;
    uVar36 = *(undefined8 *)((long)pvVar40 + 0x48);
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34181de;
    il2cpp_runtime_helper_022b2880(uVar36,pIVar45,0);
    pAVar15 = __dest[-1].klass;
    pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418201;
    pvVar40 = (void *)il2cpp_runtime_helper_02338550(pAVar15,(long)pvVar40 + 0x20);
    IVar63 = (Il2CppRGCTXData)__dest[-2].return_type;
    pIVar65 = __dest[-1].invoker_method;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418214;
    memcpy(IVar63.rgctxDataDummy,pvVar40,(size_t)pIVar65);
    pIVar45 = __dest[-2].rgctx_data;
    pIVar68 = (pIVar70->klass->rgctx_data[0x27].method)->methodPointer;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341822c;
    puVar41 = (undefined1 *)(*pIVar68)(pIVar45);
    pMVar56 = pIVar70->klass->rgctx_data[0x28].method;
    pIVar68 = pMVar56->methodPointer;
    if (-1 < *(int *)&(pIVar70->klass->rgctx_data[0x14].method)->return_type) {
      IVar63 = *(Il2CppRGCTXData *)&(IVar63.method)->methodPointer;
    }
    *(Il2CppRGCTXData *)&__dest[-2].token = (void *)IVar63;
label_03418255:
    *(undefined1 **)&__dest[-2].slot = puVar41;
    IVar38.rgctxDataDummy = &__dest[-2].token;
    now.fields._8_8_ = &__dest[-2].field8_0x40;
    pIVar65 = pMVar56->invoker_method;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418266;
    (*pIVar65)(pIVar68,pMVar56,(void *)0x0,IVar38.rgctxDataDummy,now.fields._8_8_);
    now_01.fields._8_8_ = *(Il2CppRGCTXData *)&__dest[-2].field8_0x40;
label_0341846e:
    pAVar15 = __dest[-1].klass;
    pIVar45 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341848d;
    plVar67 = (long *)il2cpp_runtime_helper_02338550(pAVar15);
    IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    IVar75 = IVar29;
    if (*plVar67 == 0) goto label_03418583;
    pIVar68 = (pIVar70->klass->rgctx_data[0x29].method)->methodPointer;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34184ad;
    IVar75.rgctxDataDummy = (void *)(*pIVar68)();
    pAVar15 = __dest[-1].klass;
    pIVar45 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34184cf;
    pIVar46 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(pAVar15);
    IVar30 = (Il2CppRGCTXData)pIVar46->method;
    if (IVar30.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x2b].method;
    IVar29 = *pIVar45;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34184ef;
    (*(code *)IVar29)();
    if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    if ((int)(IVar75.method)->name < 1) {
      return;
    }
    IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    now_00.fields._8_8_ = &__dest[-2].token;
    pIVar70 = (Il2CppRGCTXData *)0x0;
    IVar29.rgctxDataDummy = IVar63.rgctxDataDummy;
    if (((ulong)(IVar75.method)->name & 0xffffffff) != 0) {
      do {
        IVar63 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)((long)IVar75.rgctxDataDummy + (long)pIVar70 * 8 + 0x20))->rgctxDataDummy
        ;
        if (IVar63.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          if (IVar63.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
          pIVar45 = *(Il2CppRGCTXData **)(*(long *)(*(long *)__dest[-1].virtualMethodPointer + 0xc0) + 0xc0);
          IVar30 = (Il2CppRGCTXData)pIVar45->method;
          *(Il2CppRGCTXData *)&__dest[-2].token = (MethodInfo *)now_01.fields._8_8_;
          IVar38 = pIVar45[2];
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418572;
          now.fields._8_8_ = now_01.fields._8_8_;
          (*(code *)IVar38)(IVar30.rgctxDataDummy,pIVar45,IVar63.rgctxDataDummy,now_00.fields._8_8_);
          IVar29 = IVar63;
        }
        IVar63 = IVar29;
        pIVar70 = (Il2CppRGCTXData *)((long)pIVar70 + 1);
        IVar38 = (Il2CppRGCTXData)(long)(int)*(uint *)&(IVar75.method)->name;
        if ((long)IVar38.rgctxDataDummy <= (long)pIVar70) {
          return;
        }
        IVar29 = IVar63;
      } while (pIVar70 < (Il2CppRGCTXData *)(ulong)*(uint *)&(IVar75.method)->name);
    }
  }
  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341858d;
  auVar76 = il2cpp_runtime_helper_022b2ca0();
  pcVar39 = auVar76._8_8_;
  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)&__dest[-1].slot;
  pAVar66[-1].vtable._3_ToString.methodPtr = (Il2CppMethodPointer)IVar75;
  pAVar66[-1].vtable._2_GetHashCode.method = (MethodInfo *)now_01.fields._8_8_;
  pAVar66[-1].vtable._2_GetHashCode.methodPtr = (Il2CppMethodPointer)now_00.fields._8_8_;
  pAVar66[-1].vtable._1_Finalize.method = (MethodInfo *)pIVar70;
  pAVar66[-1].vtable._1_Finalize.methodPtr = (Il2CppMethodPointer)IVar63;
  pAVar66[-1].vtable._0_Equals.method = (MethodInfo *)auVar76._0_8_;
  now_00.fields._8_8_ = IVar38;
  IVar75 = now.fields._8_8_;
  if (g_data_057a8ce9 == '\0') {
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8ce9 = '\x01';
  }
  lVar28 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(now.fields._8_8_)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185ee;
    lVar28 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185f6;
  pSVar47 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar28);
  method_02 = *(MethodInfo_315A040 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now.fields._8_8_)->klass)->fields + 0xc0) + 8);
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418610;
  System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object____ctor(pSVar47,method_02);
  (IVar30.method)->return_type = (Il2CppType *)pSVar47;
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418620;
  il2cpp_runtime_helper_022b4080(&(IVar30.method)->return_type);
  IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341862a;
  System_Object___ctor((Il2CppObject *)IVar30.method,(MethodInfo *)0x0);
  if (pIVar45 == (Il2CppRGCTXData *)0x0) {
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418809;
    uVar36 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418811;
    pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(uVar36);
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418820;
    pSVar49 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341882d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)pIVar45,pSVar49,(MethodInfo *)0x0);
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418838;
    IVar63 = now.fields._8_8_;
    pIVar70 = pIVar45;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pIVar70 = (Il2CppRGCTXData *)0x0;
    if (IVar30.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      (IVar30.method)->invoker_method = (InvokerMethod)pIVar45;
      pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418653;
      il2cpp_runtime_helper_022b4080(&(IVar30.method)->invoker_method,pIVar45);
      if (pcVar39 == (char *)0x0) {
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418679;
          lVar28 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar28 + 0xe4) == 0) {
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341868a;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34186aa;
          lVar28 = il2cpp_runtime_helper_023009c0(lVar28);
        }
        pcVar39 = *(char **)(*(long *)(lVar28 + 0xb8) + 8);
        if (pcVar39 == (char *)0x0) {
          lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34186db;
            lVar28 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar28 + 0xe4) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34186ec;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341870c;
            il2cpp_runtime_helper_023009c0(lVar28);
          }
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418725;
          pcVar39 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418744;
          System_Func_DateTimeOffset____ctor();
          lVar28 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(now.fields._8_8_)->klass)->fields + 0xc0);
          lVar35 = *(long *)(lVar28 + 0x28);
          if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418764;
            lVar35 = il2cpp_runtime_helper_023009c0(lVar35);
            lVar28 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(now.fields._8_8_)->klass)->fields + 0xc0);
          }
          *(char **)(*(long *)(lVar35 + 0xb8) + 8) = pcVar39;
          lVar28 = *(long *)(lVar28 + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341878f;
            lVar28 = il2cpp_runtime_helper_023009c0(lVar28);
          }
          lVar28 = *(long *)(lVar28 + 0xb8);
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34187a2;
          il2cpp_runtime_helper_022b4080(lVar28 + 8,pcVar39);
        }
      }
      (IVar30.method)->name = pcVar39;
      pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34187b2;
      il2cpp_runtime_helper_022b4080(&(IVar30.method)->name,pcVar39);
      if (IVar38.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34187cf;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar38 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      *(Il2CppRGCTXData *)
       &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar30.method)->klass)->fields =
           (void *)IVar38;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar30.method)->klass,IVar38.rgctxDataDummy);
      return;
    }
  }
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341883d;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1].vtable._0_Equals.methodPtr = auVar76._0_8_;
  pMVar56 = pIVar70[5].method;
  if (pMVar56 != (MethodInfo *)0x0) {
    lVar28 = *(long *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x40);
    pAVar66[-1].vtable._0_Equals.methodPtr = pAVar66[-1].vtable._0_Equals.methodPtr;
    method_00 = *(MethodInfo_315B430 **)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x108);
    pAVar66[-1]._2.naturalAligment = 0xe8;
    pAVar66[-1]._2.packingSize = 0xae;
    pAVar66[-1]._2.bitflags1 = '%';
    pAVar66[-1]._2.bitflags2 = '\x03';
    *(undefined4 *)&pAVar66[-1]._2.field_0x6c = 0;
    System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___FindEntry
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar56,
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar63,method_00);
    return;
  }
  pAVar66[-1]._2.naturalAligment = 'd';
  pAVar66[-1]._2.packingSize = 0x88;
  pAVar66[-1]._2.bitflags1 = 'A';
  pAVar66[-1]._2.bitflags2 = '\x03';
  *(undefined4 *)&pAVar66[-1]._2.field_0x6c = 0;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  uVar36 = auVar76._0_8_;
  pAVar66[-1]._2.naturalAligment = (char)uVar36;
  pAVar66[-1]._2.packingSize = (char)((ulong)uVar36 >> 8);
  pAVar66[-1]._2.bitflags1 = (char)((ulong)uVar36 >> 0x10);
  pAVar66[-1]._2.bitflags2 = (char)((ulong)uVar36 >> 0x18);
  *(int *)&pAVar66[-1]._2.field_0x6c = (int)((ulong)uVar36 >> 0x20);
  pAVar66[-1]._2.naturalAligment = '\0';
  pAVar66[-1]._2.packingSize = '\0';
  pAVar66[-1]._2.bitflags1 = '\0';
  pAVar66[-1]._2.bitflags2 = '\0';
  *(undefined4 *)&pAVar66[-1]._2.field_0x6c = 0;
  pSVar69 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar56->return_type;
  if (pSVar69 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    now_00.fields._8_8_ =
         (Il2CppRGCTXData)
         ((Il2CppRGCTXData *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x48))->method;
    pAVar66[-1]._2.interfaces_count = 0x8899;
    pAVar66[-1]._2.interface_offsets_count = 0x341;
    pAVar66[-1]._2.typeHierarchyDepth = '\0';
    pAVar66[-1]._2.genericRecursionDepth = '\0';
    pAVar66[-1]._2.rank = '\0';
    pAVar66[-1]._2.minimumAlignment = '\0';
    bVar27 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                       (pSVar69,(ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar63,
                        (Il2CppObject **)&pAVar66[-1]._2.naturalAligment,
                        (MethodInfo_315C740 *)now_00.fields._8_8_);
    if ((char)bVar27 == '\0') {
      return;
    }
    lVar28._0_1_ = pAVar66[-1]._2.naturalAligment;
    lVar28._1_1_ = pAVar66[-1]._2.packingSize;
    lVar28._2_1_ = pAVar66[-1]._2.bitflags1;
    lVar28._3_1_ = pAVar66[-1]._2.bitflags2;
    lVar28._4_4_ = *(undefined4 *)&pAVar66[-1]._2.field_0x6c;
    if (lVar28 != 0) {
      return;
    }
  }
  pAVar66[-1]._2.interfaces_count = 35000;
  pAVar66[-1]._2.interface_offsets_count = 0x341;
  pAVar66[-1]._2.typeHierarchyDepth = '\0';
  pAVar66[-1]._2.genericRecursionDepth = '\0';
  pAVar66[-1]._2.rank = '\0';
  pAVar66[-1]._2.minimumAlignment = '\0';
  uVar36 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._2.interfaces_count = (short)uVar36;
  pAVar66[-1]._2.interface_offsets_count = (short)((ulong)uVar36 >> 0x10);
  pAVar66[-1]._2.typeHierarchyDepth = (char)((ulong)uVar36 >> 0x20);
  pAVar66[-1]._2.genericRecursionDepth = (char)((ulong)uVar36 >> 0x28);
  pAVar66[-1]._2.rank = (char)((ulong)uVar36 >> 0x30);
  pAVar66[-1]._2.minimumAlignment = (char)((ulong)uVar36 >> 0x38);
  pSVar69 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(pSVar69->fields)._freeCount;
  if (pSVar69 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___Clear
              (pSVar69,(MethodInfo_315AE70 *)(IVar63.method)->klass->rgctx_data[0xc].method);
    return;
  }
  pAVar66[-1]._2.field_count = 0x88e4;
  pAVar66[-1]._2.event_count = 0x341;
  pAVar66[-1]._2.nested_type_count = 0;
  pAVar66[-1]._2.vtable_count = 0;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  uVar36 = auVar76._0_8_;
  pAVar66[-1]._2.field_count = (short)uVar36;
  pAVar66[-1]._2.event_count = (short)((ulong)uVar36 >> 0x10);
  pAVar66[-1]._2.nested_type_count = (short)((ulong)uVar36 >> 0x20);
  pAVar66[-1]._2.vtable_count = (short)((ulong)uVar36 >> 0x30);
  now_01.fields._8_8_ = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(pSVar69->fields)._freeCount;
  if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)now_01.fields._8_8_,
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar63,
               *(MethodInfo_315C3E0 **)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pAVar66[-1]._2.token = 0x3418914;
  pAVar66[-1]._2.method_count = 0;
  pAVar66[-1]._2.property_count = 0;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  IVar29 = auVar76._8_8_;
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pAVar66[-1]._2.token = pSVar47;
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.thread_static_fields_offset = (MethodInfo *)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.static_fields_size = (void *)IVar38;
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.element_size = (MethodInfo *)IVar30;
  *(char **)&pAVar66[-1]._2.instance_size = pcVar39;
  pAVar66[-1]._2.genericContainerHandle = pIVar45;
  pAVar66[-1]._2.cctor_thread = auVar76._0_8_;
  ppIVar74 = (Il2CppClass **)((ulong)now_00.fields._8_8_ & 0xffffffff);
  pAVar66[-1]._2.cctor_thread = 0;
  lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar75.method)->klass)->fields + 0xc0) + 0x70);
  now.fields._8_8_ = IVar75;
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x341895f;
    lVar28 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418967;
  IVar48.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar28);
  IVar38 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(IVar75.method)->klass)->fields + 0xc0) + 0x78))->method;
  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418981;
  IVar30.rgctxDataDummy = IVar48.rgctxDataDummy;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_ListKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)IVar48.method,
             (MethodInfo_27BBA00 *)IVar38.method);
  if (IVar48.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    (IVar48.method)->invoker_method = (InvokerMethod)now_01.fields._8_8_;
    *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x341899d;
    IVar38 = now_01.fields._8_8_;
    il2cpp_runtime_helper_022b4080(&(IVar48.method)->invoker_method);
    (IVar48.method)->name = (char *)IVar63;
    if (IVar29.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar30 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
    if (IVar30.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      now_00.fields._8_8_ =
           (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(IVar75.method)->klass)->fields + 0xc0) + 0x48))->method;
      *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x34189d1;
      IVar38 = IVar63;
      bVar27 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)IVar30.method,
                          (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar63,
                          (Il2CppObject **)&pAVar66[-1]._2.cctor_thread,
                          (MethodInfo_315C740 *)now_00.fields._8_8_);
      if ((char)bVar27 == '\0') {
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar75.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x34189f2;
          lVar28 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x34189fa;
        IVar63.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar28);
        IVar38 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar75.method)->klass)->fields + 0xc0) + 0x88))->method;
        *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418a17;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_ListKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar63.method,
                   (MethodInfo_31EFA30 *)IVar38.method);
        pAVar66[-1]._2.cctor_thread = (size_t)IVar63;
        IVar30 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
        if (IVar30.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418c03;
        IVar38 = (Il2CppRGCTXData)(IVar48.method)->name;
        method_03 = *(MethodInfo_315ACA0 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar75.method)->klass)->fields + 0xc0) + 0x90);
        *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418a46;
        System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)IVar30.method,
                   (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar38,
                   (Il2CppObject *)IVar63.method,method_03);
      }
      now_00.fields._8_8_ = (Il2CppRGCTXData)(now_01.fields._8_8_)->name;
      if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar38 = (Il2CppRGCTXData)(now_00.fields._8_8_)->return_type;
        IVar30 = (Il2CppRGCTXData)((now_00.fields._8_8_)->field8_0x40).genericMethod;
        pcVar6 = (code *)(now_00.fields._8_8_)->name;
        *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418a5e;
        auVar76 = (*pcVar6)();
        if ((char)ppIVar74 == '\0') {
          now_00.fields._8_8_ = (void *)(auVar76._8_8_ & 0xffffffff);
          IVar38 = (Il2CppRGCTXData)pAVar66[-1]._2.cctor_thread;
          method_13 = *(MethodInfo_331A460 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar75.method)->klass)->fields + 0xc0) + 0x98);
          *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418a89;
          now_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar76._0_8_;
          IVar30 = now_01.fields._8_8_;
          now.fields._8_8_ = IVar29;
          bVar27 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)now_01.fields._8_8_,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar38.method,
                              now_00,(System_Action_AottgQueryResult_TValue___o *)IVar29.method,
                              (MethodInfo_3318C10 *)method_13);
          if ((char)bVar27 != '\0') {
            return;
          }
        }
        lVar28 = pAVar66[-1]._2.cctor_thread;
        if (lVar28 != 0) {
          if (*(char *)(lVar28 + 0x38) == '\0') {
            pMVar17 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar75.method)->klass)->fields + 0xc0) + 200);
            *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418ad8;
            IVar38.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar17);
          }
          else {
            pIVar7 = *(Il2CppObject **)(lVar28 + 0x18);
            pMVar8 = *(MethodInfo_331B450 **)
                      (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                           &(IVar75.method)->klass)->fields + 0xc0) + 0xa8);
            *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418abf;
            IVar38.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar7,pMVar8);
          }
          pIVar33 = (IVar29.method)->return_type;
          IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar29.klass)->_1)[8].method;
          pcVar6 = (code *)(IVar29.method)->name;
          *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418aea;
          (*pcVar6)(IVar30.rgctxDataDummy,IVar38.rgctxDataDummy,pIVar33);
          lVar28 = pAVar66[-1]._2.cctor_thread;
          if ((lVar28 != 0) &&
             (IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x10))->method,
             IVar30.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now_00.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar75.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar30.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar9 = (Il2CppArrayBounds *)(IVar30.method)->invoker_method;
            if (pIVar9 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar30.method)->name;
              IVar38 = IVar29;
              if (uVar4 < (uint)pIVar9[1].lower_bound) {
                now_00.fields._8_4_ = uVar4 + 1;
                now_00.fields._12_4_ = 0;
                *(uint *)&(IVar30.method)->name = now_00.fields._8_4_;
                IVar30.rgctxDataDummy = &pIVar9[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar9[2].length + (int)uVar4))->klass = (Il2CppClass *)IVar29;
                *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418b4b;
                il2cpp_runtime_helper_022b4080();
                lVar28 = pAVar66[-1]._2.cctor_thread;
              }
              else {
                pMVar18 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418b70;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar30.method,
                           (Il2CppObject *)IVar29.method,pMVar18);
                lVar28 = pAVar66[-1]._2.cctor_thread;
              }
              if (lVar28 != 0) {
                if (*(char *)(lVar28 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)(lVar28 + 0x3a) = 1;
                pIVar9 = (Il2CppArrayBounds *)(now_01.fields._8_8_)->invoker_method;
                now_01.fields._8_8_ = (Il2CppRGCTXData)(IVar48.method)->name;
                lVar28 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(IVar75.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
                  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418baf;
                  lVar28 = il2cpp_runtime_helper_023009c0();
                }
                *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418bb7;
                IVar29.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar28);
                now_00.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar75.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418bde;
                IVar38.rgctxDataDummy = IVar48.rgctxDataDummy;
                IVar30.rgctxDataDummy = IVar29.rgctxDataDummy;
                System_Action_object____ctor();
                IVar63.rgctxDataDummy = (Il2CppObject *)0x0;
                if (pIVar9 != (Il2CppArrayBounds *)0x0) {
                  uVar36 = *(undefined8 *)&pIVar9[2].lower_bound;
                  iVar19 = pIVar9[4].length;
                  pcVar6 = *(code **)&pIVar9[1].lower_bound;
                  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418bf4;
                  (*pcVar6)(iVar19,now_01.fields._8_8_,IVar29.rgctxDataDummy,uVar36);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_03418c03:
  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418c08;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.cctor_finished = (MethodInfo *)IVar63;
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.initializationExceptionGCHandle = (MethodInfo *)now_01.fields._8_8_;
  pAVar66[-1]._2.unity_user_data = (void *)IVar75;
  pAVar66[-1]._2.typeHierarchy = ppIVar74;
  pAVar66[-1].rgctx_data = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *)IVar29;
  pAVar66[-1].static_fields = (void *)IVar48;
  pAVar66[-1]._1.implementedInterfaces = (Il2CppClass **)method_13;
  pAVar66[-1]._1.interfaceOffsets = (Il2CppRuntimeInterfaceOffsetPair *)now.fields._8_8_;
  IVar29.rgctxDataDummy = now_00.fields._8_8_ & 0xffffffff;
  now_01.fields._8_8_ = IVar38;
  plVar67 = (long *)IVar30;
  if (g_data_057a8cea == '\0') {
    pAVar66[-1]._1.events = (void *)0x3418c49;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAVar66[-1]._1.events = (void *)0x3418c55;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAVar66[-1]._1.events = (void *)0x3418c61;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar67 = &TypeInfo_TimeSpan;
    pAVar66[-1]._1.events = (void *)0x3418c6d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cea = '\x01';
  }
  pAVar66[-1]._1.properties = (void *)0x0;
  pAVar66[-1]._1.methods = (void *)0x0;
  IVar48.rgctxDataDummy = IVar29.rgctxDataDummy;
  if (IVar38.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar38.method)->field7_0x38 == '\0') {
label_03418d39:
      if (*(char *)((long)&(IVar38.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar30.method)->klass)->fields;
      if (lVar28 != 0) {
        cVar26 = *(char *)(lVar28 + 0x18);
        pvVar40 = *(void **)(lVar28 + 0x20);
        *(char *)&pAVar66[-1]._1.properties = cVar26;
        pAVar66[-1]._1.methods = pvVar40;
        if (cVar26 == '\0') {
          return;
        }
        IVar63 = (Il2CppRGCTXData)(IVar38.method)->return_type;
        Var24 = *(unkuint10 *)&(IVar38.method)->return_type;
        IVar75._2_6_ = 0;
        IVar75._0_2_ = *(ushort *)&(IVar38.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAVar66[-1]._1.events = (void *)0x3418d89;
          il2cpp_runtime_helper_02337ed0();
        }
        now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
        pAVar66[-1]._1.events = (void *)0x3418d9d;
        left_04.fields._8_8_ = IVar29.rgctxDataDummy;
        left_04.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_07.rgctxDataDummy;
        right_04.fields._10_6_ = 0;
        right_04.fields._0_10_ = Var24;
        now_00.fields._8_8_ = IVar75;
        plVar67 = (long *)extraout_RDX_07;
        IVar48 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_04,right_04,(MethodInfo *)0x0);
        lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar30.method)->klass)->fields;
        now_01.fields._8_8_ = IVar29;
        if (lVar28 != 0) {
          pvVar40 = *(void **)(lVar28 + 0x20);
          *(undefined1 *)&pAVar66[-1]._1.properties = *(undefined1 *)(lVar28 + 0x18);
          pAVar66[-1]._1.methods = pvVar40;
          pAVar66[-1]._1.events = (void *)0x3418dcf;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &pAVar66[-1]._1.properties;
          IVar75 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_03,method_10);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAVar66[-1]._1.events = (void *)0x3418dea;
            il2cpp_runtime_helper_02337ed0();
          }
          IVar63.rgctxDataDummy = (Il2CppObject *)0x0;
          pAVar66[-1]._1.events = (void *)0x3418df9;
          bVar27 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)IVar48,(System_TimeSpan_o)IVar75,(MethodInfo *)0x0);
          if ((char)bVar27 == '\0') {
            return;
          }
          plVar67 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar38.method)->klass)->fields;
          pMVar56 = pAVar66[-1]._1.implementedInterfaces[4]->rgctx_data[0x21].method;
          now_01.fields._8_8_ = (Il2CppRGCTXData)0x1;
          pAVar66[-1]._1.events = (void *)0x3418e22;
          pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar67,1,(MethodInfo_331B520 *)pMVar56);
          pIVar55 = pAVar66[-1]._1.interfaceOffsets;
          now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (pIVar55 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) {
label_03418e2c:
            uVar36 = *(undefined8 *)&pIVar55[2].offset;
            pIVar20 = pIVar55[4].interfaceType;
            pcVar6 = *(code **)&pIVar55[1].offset;
            pAVar66[-1]._1.events = (void *)0x3418e3a;
            (*pcVar6)(pIVar20,pAVar31,uVar36);
            return;
          }
        }
      }
    }
    else {
      IVar63 = (Il2CppRGCTXData)(IVar38.method)->return_type;
      Var24 = *(unkuint10 *)&(IVar38.method)->return_type;
      now_00.fields._10_6_ = 0;
      now_00.fields._offsetMinutes = *(ushort *)&(IVar38.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAVar66[-1]._1.events = (void *)0x3418caf;
        il2cpp_runtime_helper_02337ed0();
      }
      now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      pAVar66[-1]._1.events = (void *)0x3418cc3;
      left_03.fields._8_8_ = IVar29.rgctxDataDummy;
      left_03.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_07.rgctxDataDummy;
      right_03.fields._10_6_ = 0;
      right_03.fields._0_10_ = Var24;
      now_01.fields._8_8_ = IVar29.rgctxDataDummy;
      plVar67 = (long *)extraout_RDX_07;
      IVar75 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_03,right_03,(MethodInfo *)0x0);
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar30.method)->klass)->fields;
      if (lVar28 != 0) {
        IVar63 = *(Il2CppRGCTXData *)(lVar28 + 0x10);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAVar66[-1]._1.events = (void *)0x3418cf0;
          il2cpp_runtime_helper_02337ed0();
        }
        pAVar66[-1]._1.events = (void *)0x3418cfd;
        now_01.fields._8_8_ = IVar63;
        plVar67 = (long *)IVar75;
        bVar27 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)IVar75,(System_TimeSpan_o)IVar63,(MethodInfo *)0x0);
        if ((char)bVar27 == '\0') goto label_03418d39;
        plVar67 = (long *)(IVar38.method)->name;
        pMVar56 = pAVar66[-1]._1.implementedInterfaces[4]->rgctx_data[0x20].method;
        now_01.fields._8_8_ = (Il2CppRGCTXData)0x1;
        pAVar66[-1]._1.events = (void *)0x3418d26;
        pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar67,1,(MethodInfo_331B380 *)pMVar56);
        pIVar55 = pAVar66[-1]._1.interfaceOffsets;
        if (pIVar55 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_03418e2c;
        now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  pAVar66[-1]._1.events = (void *)0x3418e57;
  il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.events = (void *)extraout_RDX_07;
  pAVar66[-1]._1.fields = (void *)IVar75;
  pAVar66[-1]._1.klass = (Il2CppClass *)IVar30;
  pAVar66[-1]._1.interopData = (void *)IVar38;
  IVar38 = now_00.fields._8_8_;
  IVar30 = now_01.fields._8_8_;
  if (g_data_057a8ceb == '\0') {
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418e8c;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ceb = '\x01';
  }
  pAVar66[-1]._1.generic_class = (void *)0x0;
  IVar75 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->return_type;
  pAVar32 = extraout_RDX_08;
  if (IVar75.rgctxDataDummy == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
label_034191b6:
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x34191bb;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    IVar38 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x48))->method;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418ec5;
    IVar30 = now_01.fields._8_8_;
    bVar27 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)IVar75.method,
                        (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)now_01.fields._8_8_,
                        &pAVar66[-1]._1.generic_class,(MethodInfo_315C740 *)IVar38.method);
    if ((char)bVar27 == '\0') {
      return;
    }
    pvVar40 = pAVar66[-1]._1.generic_class;
    if (pvVar40 == (void *)0x0) goto label_034191b6;
    *(undefined1 *)((long)pvVar40 + 0x3a) = 0;
    if (extraout_RDX_08 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      IVar30 = (Il2CppRGCTXData)
               ((Il2CppRGCTXData *)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x118))->method;
      pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418f05;
      IVar75 = "unknown_error";
      pAVar32 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error".method,(MethodInfo_331AB10 *)IVar30.method);
      if (pAVar32 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_034191b6;
    }
    IVar75 = (Il2CppRGCTXData)pAVar66[-1]._1.generic_class;
    if (IVar75.rgctxDataDummy == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
    goto label_034191b6;
    if ((char)(pAVar32->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)&(IVar75.method)->field7_0x38 = 1;
      IVar30 = (Il2CppRGCTXData)(pAVar32->fields)._Value_k__BackingField;
      (IVar75.method)->name = (char *)IVar30;
      pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418f43;
      il2cpp_runtime_helper_022b4080(&(IVar75.method)->name);
      pvVar40 = pAVar66[-1]._1.generic_class;
      IVar75.rgctxDataDummy = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      if (pvVar40 != (void *)0x0) {
        *(undefined8 *)((long)pvVar40 + 0x20) = 0;
        IVar75.rgctxDataDummy = pvVar40 + 0x20;
        IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418f64;
        il2cpp_runtime_helper_022b4080();
        IVar38 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
        if (IVar38.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          now_01.fields._8_8_ = (Il2CppRGCTXData)pAVar66[-1]._1.generic_class;
          IVar30 = (Il2CppRGCTXData)(IVar38.method)->return_type;
          IVar75 = *(Il2CppRGCTXData *)&(IVar38.method)->field8_0x40;
          pcVar6 = (code *)(IVar38.method)->name;
          pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418f81;
          Var79 = (*pcVar6)();
          if (now_01.fields._8_8_ != (void *)0x0) {
            *(unkbyte10 *)&(now_01.fields._8_8_)->return_type = Var79;
            *(undefined2 *)((long)&(now_01.fields._8_8_)->parameters + 6) =
                 *(undefined2 *)((long)&pAVar66[-1]._1.typeMetadataHandle + 6);
            *(undefined4 *)((long)&(now_01.fields._8_8_)->parameters + 2) =
                 *(undefined4 *)((long)&pAVar66[-1]._1.typeMetadataHandle + 2);
            pvVar40 = pAVar66[-1]._1.generic_class;
            if (pvVar40 != (void *)0x0) {
              IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar40 + 0x18))->method;
              pMVar10 = *(MethodInfo_331B380 **)
                         (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                              &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
              IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
              pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418fcd;
              plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                          ((Il2CppObject *)IVar75.method,0,pMVar10);
              pvVar40 = pAVar66[-1]._1.generic_class;
              goto joined_r0x03418fd8;
            }
          }
        }
      }
      goto label_034191b6;
    }
    if (*(char *)&(IVar75.method)->field7_0x38 != '\0') {
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &((MethodInfo *)plVar67)->klass)->fields;
      if (lVar28 != 0) {
        if (*(char *)(lVar28 + 0x28) == '\0') goto label_03419131;
        IVar30 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
        (IVar75.method)->klass = (Il2CppClass *)IVar30;
        IVar75.rgctxDataDummy = &(IVar75.method)->klass;
        pAVar66[-1]._1.declaringType = (Il2CppClass *)0x34190ed;
        il2cpp_runtime_helper_022b4080();
        pvVar40 = pAVar66[-1]._1.generic_class;
        if (pvVar40 != (void *)0x0) {
          IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar40 + 0x18))->method;
          IVar30 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
          pMVar21 = *(MethodInfo_331B660 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
          pAVar66[-1]._1.declaringType = (Il2CppClass *)0x341911b;
          plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                      ((Il2CppObject *)IVar75.method,(System_String_o *)IVar30.method,pMVar21)
          ;
          pvVar40 = pAVar66[-1]._1.generic_class;
joined_r0x03418fd8:
          if (pvVar40 != (void *)0x0) goto label_03418fde;
        }
      }
      goto label_034191b6;
    }
label_03419131:
    *(undefined2 *)&(IVar75.method)->field7_0x38 = 0x100;
    (IVar75.method)->name = (char *)0x0;
    IVar30 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
    (IVar75.method)->klass = (Il2CppClass *)IVar30;
    IVar75.rgctxDataDummy = &(IVar75.method)->klass;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3419151;
    il2cpp_runtime_helper_022b4080();
    IVar38 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
    if (IVar38.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_034191b6;
    now_01.fields._8_8_ = (Il2CppRGCTXData)pAVar66[-1]._1.generic_class;
    IVar30 = (Il2CppRGCTXData)(IVar38.method)->return_type;
    IVar75 = *(Il2CppRGCTXData *)&(IVar38.method)->field8_0x40;
    pcVar6 = (code *)(IVar38.method)->name;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x341916a;
    Var79 = (*pcVar6)();
    if (now_01.fields._8_8_ == (void *)0x0) goto label_034191b6;
    *(unkbyte10 *)&(now_01.fields._8_8_)->return_type = Var79;
    *(undefined4 *)((long)&(now_01.fields._8_8_)->parameters + 2) =
         *(undefined4 *)((long)&pAVar66[-1]._1.typeMetadataHandle + 2);
    *(undefined2 *)((long)&(now_01.fields._8_8_)->parameters + 6) =
         *(undefined2 *)((long)&pAVar66[-1]._1.typeMetadataHandle + 6);
    IVar75 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
    pMVar22 = *(MethodInfo_331B520 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
    IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x34191a5;
    plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((System_String_o *)IVar75.method,0,pMVar22);
    pvVar40 = pAVar66[-1]._1.generic_class;
    if (pvVar40 == (void *)0x0) goto label_034191b6;
label_03418fde:
    IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar40 + 0x10))->method;
    if (IVar75.rgctxDataDummy == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
    goto label_034191b6;
    IVar30 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x148))->method;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3419002;
    now_00.fields._8_8_ =
         (MethodInfo *)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)IVar75.method,
                    (MethodInfo_362E340 *)IVar30.method);
    pvVar40 = pAVar66[-1]._1.generic_class;
    if ((pvVar40 == (void *)0x0) || (lVar28 = *(long *)((long)pvVar40 + 0x10), lVar28 == 0))
    goto label_034191b6;
    *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
    iVar5 = *(int32_t *)(lVar28 + 0x18);
    *(undefined4 *)(lVar28 + 0x18) = 0;
    if (0 < iVar5) {
      IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x10))->method;
      IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      IVar38.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      pAVar66[-1]._1.declaringType = (Il2CppClass *)0x341903f;
      System_Array__Clear((System_Array_o *)IVar75.method,0,iVar5,(MethodInfo *)0x0);
    }
    if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_034191b6;
    if ((int)(now_00.fields._8_8_)->name < 1) {
      return;
    }
    pAVar32 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0;
    now_01.fields._8_8_ = (void *)0x0;
    pAVar71 = pAVar32;
    if (((ulong)(now_00.fields._8_8_)->name & 0xffffffff) != 0) {
      do {
        pAVar32 = *(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o **)
                   ((long)now_00.fields._8_8_ + (long)now_01.fields._8_8_ * 8 + 0x20);
        if (pAVar32 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
          if (pAVar32 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_034191b6;
          pAVar16 = pAVar32[1].klass;
          IVar75 = (Il2CppRGCTXData)pAVar32[1].fields._Value_k__BackingField;
          pIVar7 = (pAVar32->fields)._Value_k__BackingField;
          pAVar66[-1]._1.declaringType = (Il2CppClass *)0x34190b4;
          IVar30 = (Il2CppRGCTXData)plVar67;
          (*(code *)pIVar7)(IVar75.rgctxDataDummy,plVar67,pAVar16);
          pAVar71 = pAVar32;
        }
        pAVar32 = pAVar71;
        now_01.fields._8_8_ = (void *)((long)&(now_01.fields._8_8_)->methodPointer + 1);
        IVar38 = (Il2CppRGCTXData)(long)(int)*(uint *)&(now_00.fields._8_8_)->name;
        if ((long)IVar38.rgctxDataDummy <= (long)now_01.fields._8_8_) {
          return;
        }
        pAVar71 = pAVar32;
      } while (now_01.fields._8_8_ < (void *)(ulong)*(uint *)&(now_00.fields._8_8_)->name);
    }
  }
  pAVar66[-1]._1.declaringType =
       (Il2CppClass *)ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor;
  auVar76 = il2cpp_runtime_helper_022b2ca0();
  pSVar34 = auVar76._8_8_;
  pAVar66[-1]._1.declaringType = (Il2CppClass *)IVar63;
  pAVar66[-1]._1.castClass = (Il2CppClass *)plVar67;
  pAVar66[-1]._1.element_class = (Il2CppClass *)now_00.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-1]._1.this_arg.bits = (void *)IVar48;
  pAVar66[-1]._1.this_arg.data = pAVar32;
  *(Il2CppRGCTXData *)&pAVar66[-1]._1.byval_arg.bits = (MethodInfo *)now_01.fields._8_8_;
  pAVar66[-1]._1.byval_arg.data = auVar76._0_8_;
  now_01.fields._8_8_ = IVar38;
  IVar29 = now.fields._8_8_;
  if (g_data_057a8cec == '\0') {
    pAVar66[-1]._1.namespaze = (char *)0x34191ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pAVar66[-1]._1.namespaze = (char *)0x34191fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cec = '\x01';
  }
  lVar28 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(now.fields._8_8_)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    pAVar66[-1]._1.namespaze = (char *)0x341921e;
    lVar28 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-1]._1.namespaze = (char *)0x3419226;
  pSVar47 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar28);
  method_04 = *(MethodInfo_315DA50 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now.fields._8_8_)->klass)->fields + 0xc0) + 8);
  pAVar66[-1]._1.namespaze = (char *)0x3419240;
  System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object____ctor(pSVar47,method_04);
  (IVar75.method)->return_type = (Il2CppType *)pSVar47;
  pAVar66[-1]._1.namespaze = (char *)0x3419250;
  il2cpp_runtime_helper_022b4080(&(IVar75.method)->return_type);
  now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
  pAVar66[-1]._1.namespaze = (char *)0x341925a;
  System_Object___ctor((Il2CppObject *)IVar75.method,(MethodInfo *)0x0);
  if (IVar30.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
    pAVar66[-1]._1.namespaze = (char *)0x3419439;
    uVar36 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pAVar66[-1]._1.namespaze = (char *)0x3419441;
    IVar30.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(uVar36);
    pAVar66[-1]._1.namespaze = (char *)0x3419450;
    pSVar49 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pAVar66[-1]._1.namespaze = (char *)0x341945d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)IVar30.method,pSVar49,(MethodInfo *)0x0);
    pAVar66[-1]._1.namespaze = (char *)0x3419468;
    now_00.fields._8_8_ = now.fields._8_8_;
    IVar63.rgctxDataDummy = IVar30.rgctxDataDummy;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (IVar75.rgctxDataDummy != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&(IVar75.method)->invoker_method)->
      _buckets = (System_Int32_array *)IVar30;
      pAVar66[-1]._1.namespaze = (char *)0x3419283;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)
                         &(IVar75.method)->invoker_method,IVar30.rgctxDataDummy);
      if (pSVar34 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          pAVar66[-1]._1.namespaze = (char *)0x34192a9;
          lVar28 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar28 + 0xe4) == 0) {
          pAVar66[-1]._1.namespaze = (char *)0x34192ba;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          pAVar66[-1]._1.namespaze = (char *)0x34192da;
          lVar28 = il2cpp_runtime_helper_023009c0(lVar28);
        }
        pSVar34 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   (*(long *)(lVar28 + 0xb8) + 8);
        if (pSVar34 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x341930b;
            lVar28 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar28 + 0xe4) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x341931c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x341933c;
            il2cpp_runtime_helper_023009c0(lVar28);
          }
          pAVar66[-1]._1.namespaze = (char *)0x3419355;
          pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pAVar66[-1]._1.namespaze = (char *)0x3419374;
          System_Func_DateTimeOffset____ctor();
          lVar28 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(now.fields._8_8_)->klass)->fields + 0xc0);
          lVar35 = *(long *)(lVar28 + 0x28);
          if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x3419394;
            lVar35 = il2cpp_runtime_helper_023009c0(lVar35);
            lVar28 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(now.fields._8_8_)->klass)->fields + 0xc0);
          }
          *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(*(long *)(lVar35 + 0xb8) + 8)
               = pSVar34;
          lVar28 = *(long *)(lVar28 + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x34193bf;
            lVar28 = il2cpp_runtime_helper_023009c0(lVar28);
          }
          lVar28 = *(long *)(lVar28 + 0xb8);
          pAVar66[-1]._1.namespaze = (char *)0x34193d2;
          il2cpp_runtime_helper_022b4080(lVar28 + 8,pSVar34);
        }
      }
      (IVar75.method)->name = (char *)pSVar34;
      pAVar66[-1]._1.namespaze = (char *)0x34193e2;
      il2cpp_runtime_helper_022b4080(&(IVar75.method)->name,pSVar34);
      if (IVar38.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pAVar66[-1]._1.namespaze = (char *)0x34193ff;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar38 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      (IVar75.method)->klass = (Il2CppClass *)IVar38;
      il2cpp_runtime_helper_022b4080(&(IVar75.method)->klass,IVar38.rgctxDataDummy);
      return;
    }
  }
  pAVar66[-1]._1.namespaze = "\x0f\x1f";
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.namespaze = (char *)auVar76._0_8_;
  pIVar33 = (IVar63.method)->return_type;
  if (pIVar33 != (Il2CppType *)0x0) {
    lVar28 = *(long *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x40);
    pAVar66[-1]._1.namespaze = pAVar66[-1]._1.namespaze;
    uVar36 = *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x108);
    pAVar66[-1]._1.name = (char *)0x325e8f8;
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___FindEntry
              (pIVar33,(ulong)now_00.fields._8_8_ & 0xff,uVar36);
    return;
  }
  pAVar66[-1]._1.name = (char *)0x3419498;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.name = (char *)auVar76._0_8_;
  pAVar66[-1]._1.name = (char *)0x0;
  pvVar40 = *(void **)&pIVar33[2].bits;
  if (pvVar40 != (void *)0x0) {
    now_01.fields._8_8_ = *(Il2CppRGCTXData *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x48);
    now_00.fields._8_8_ = now_00.fields._8_8_ & 0xff;
    pAVar66[-1]._1.gc_desc = (void *)0x34194cd;
    bVar27 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                       (pvVar40,now_00.fields._8_8_,&pAVar66[-1]._1.name);
    if ((char)bVar27 == '\0') {
      return;
    }
    if (pAVar66[-1]._1.name != (char *)0x0) {
      return;
    }
  }
  pAVar66[-1]._1.gc_desc = (void *)0x34194ec;
  uVar36 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.gc_desc = (void *)uVar36;
  pSVar69 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)pvVar40 + 0x28);
  if (pSVar69 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___Clear
              (pSVar69,*(MethodInfo_315E880 **)
                        (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                             &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x60));
    return;
  }
  pAVar66[-1]._1.image = (void *)0x3419514;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.image = auVar76._0_8_;
  IVar63 = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(pSVar69->fields)._freeCount;
  if (IVar63.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___Remove
              (IVar63.rgctxDataDummy,(ulong)now_00.fields._8_8_ & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pAVar66[-2].vtable._3_ToString.method = (MethodInfo *)0x3419548;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  IVar48 = auVar76._8_8_;
  pAVar66[-2].vtable._3_ToString.method = (MethodInfo *)pSVar47;
  pAVar66[-2].vtable._3_ToString.methodPtr = (Il2CppMethodPointer)now.fields._8_8_;
  pAVar66[-2].vtable._2_GetHashCode.method = (MethodInfo *)IVar38;
  pAVar66[-2].vtable._2_GetHashCode.methodPtr = (Il2CppMethodPointer)IVar75;
  pAVar66[-2].vtable._1_Finalize.method = (MethodInfo *)pSVar34;
  pAVar66[-2].vtable._1_Finalize.methodPtr = (Il2CppMethodPointer)IVar30;
  pAVar66[-2].vtable._0_Equals.method = (MethodInfo *)auVar76._0_8_;
  uVar54 = (ulong)now_01.fields._8_8_ & 0xffffffff;
  now.fields._8_8_ = now_00.fields._8_8_ & 0xffffffff;
  pAVar66[-2].vtable._0_Equals.method = (MethodInfo *)0x0;
  lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar29.method)->klass)->fields + 0xc0) + 0x70);
  IVar38 = IVar29;
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341958e;
    lVar28 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419596;
  now_02.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar28);
  IVar30 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(IVar29.method)->klass)->fields + 0xc0) + 0x78))->method;
  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34195b0;
  IVar75.rgctxDataDummy = now_02.fields._8_8_;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)
             now_02.fields._8_8_,(MethodInfo_27BBA50 *)IVar30.method);
  if (now_02.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    (now_02.fields._8_8_)->invoker_method = (InvokerMethod)IVar63;
    pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34195cc;
    IVar30 = IVar63;
    il2cpp_runtime_helper_022b4080(&(now_02.fields._8_8_)->invoker_method);
    *(char *)&(now_02.fields._8_8_)->name = (char)now.fields._offsetMinutes;
    if (IVar48.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar75 = (Il2CppRGCTXData)(IVar63.method)->return_type;
    if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      now_01.fields._8_8_ =
           *(Il2CppRGCTXData *)
            (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar29.method)->klass)->fields + 0xc0) + 0x48);
      IVar30.rgctxDataDummy = now_00.fields._8_8_ & 0xff;
      pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419601;
      bVar27 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                         (IVar75.rgctxDataDummy,IVar30.rgctxDataDummy,&pAVar66[-2].vtable._0_Equals.method);
      if ((char)bVar27 == '\0') {
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar29.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419622;
          lVar28 = il2cpp_runtime_helper_023009c0();
        }
        pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341962a;
        now.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar28);
        IVar30 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar29.method)->klass)->fields + 0xc0) + 0x88))->method;
        pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419647;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)now.fields._8_8_,
                   (MethodInfo_31EFAA0 *)IVar30.method);
        pAVar66[-2].vtable._0_Equals.method = (MethodInfo *)now.fields._8_8_;
        IVar75 = (Il2CppRGCTXData)(IVar63.method)->return_type;
        if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03419833;
        uVar36 = *(undefined8 *)
                  (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar29.method)->klass)->fields + 0xc0) + 0x90);
        IVar30._4_4_ = 0;
        IVar30._0_4_ = *(uint *)&(now_02.fields._8_8_)->name;
        pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419675;
        System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___set_Item
                  (IVar75.rgctxDataDummy,IVar30.rgctxDataDummy,now.fields._8_8_,uVar36);
      }
      now_01.fields._8_8_ = (Il2CppRGCTXData)(IVar63.method)->name;
      if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar30 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
        IVar75 = (Il2CppRGCTXData)((now_01.fields._8_8_)->field8_0x40).genericMethod;
        pcVar6 = (code *)(now_01.fields._8_8_)->name;
        pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341968d;
        auVar77 = (*pcVar6)();
        if ((char)uVar54 == '\0') {
          now_01.fields._8_8_ = (void *)(auVar77._8_8_ & 0xffffffff);
          IVar30 = (Il2CppRGCTXData)pAVar66[-2].vtable._0_Equals.method;
          method_13 = *(MethodInfo_331A460 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar29.method)->klass)->fields + 0xc0) + 0x98);
          pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34196b8;
          now_01.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar77._0_8_;
          IVar75 = IVar63;
          IVar38 = IVar48;
          bVar27 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)IVar63.method,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar30.method,
                              now_01,(System_Action_AottgQueryResult_TValue___o *)IVar48.method,
                              (MethodInfo_3319840 *)method_13);
          if ((char)bVar27 != '\0') {
            return;
          }
        }
        lVar28 = (long)pAVar66[-2].vtable._0_Equals.method;
        if (lVar28 != 0) {
          if (*(char *)(lVar28 + 0x38) == '\0') {
            pMVar17 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar29.method)->klass)->fields + 0xc0) + 200);
            pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419707;
            IVar30.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar17);
          }
          else {
            pIVar7 = *(Il2CppObject **)(lVar28 + 0x18);
            pMVar8 = *(MethodInfo_331B450 **)
                      (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                           &(IVar29.method)->klass)->fields + 0xc0) + 0xa8);
            pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34196ee;
            IVar30.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar7,pMVar8);
          }
          pIVar33 = (IVar48.method)->return_type;
          IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar48.klass)->_1)[8].method;
          pcVar6 = (code *)(IVar48.method)->name;
          pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419719;
          (*pcVar6)(IVar75.rgctxDataDummy,IVar30.rgctxDataDummy,pIVar33);
          lVar28 = (long)pAVar66[-2].vtable._0_Equals.method;
          if ((lVar28 != 0) &&
             (IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x10))->method,
             IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now_01.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar29.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar75.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar9 = (Il2CppArrayBounds *)(IVar75.method)->invoker_method;
            if (pIVar9 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar75.method)->name;
              IVar30 = IVar48;
              if (uVar4 < (uint)pIVar9[1].lower_bound) {
                now_01.fields._8_4_ = uVar4 + 1;
                now_01.fields._12_4_ = 0;
                *(uint *)&(IVar75.method)->name = now_01.fields._8_4_;
                IVar75.rgctxDataDummy = &pIVar9[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar9[2].length + (int)uVar4))->klass = (Il2CppClass *)IVar48;
                pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341977a;
                il2cpp_runtime_helper_022b4080();
                lVar28 = (long)pAVar66[-2].vtable._0_Equals.method;
              }
              else {
                pMVar18 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341979f;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar75.method,
                           (Il2CppObject *)IVar48.method,pMVar18);
                lVar28 = (long)pAVar66[-2].vtable._0_Equals.method;
              }
              if (lVar28 != 0) {
                if (*(char *)(lVar28 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)(lVar28 + 0x3a) = 1;
                pIVar9 = (Il2CppArrayBounds *)(IVar63.method)->invoker_method;
                uVar3 = *(undefined1 *)&(now_02.fields._8_8_)->name;
                IVar48._1_7_ = auVar76._9_7_;
                IVar48._0_1_ = uVar3;
                lVar28 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(IVar29.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
                  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34197de;
                  lVar28 = il2cpp_runtime_helper_023009c0();
                }
                pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34197e6;
                IVar63.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar28);
                now_01.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar29.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341980d;
                IVar30.rgctxDataDummy = now_02.fields._8_8_;
                IVar75.rgctxDataDummy = IVar63.rgctxDataDummy;
                System_Action_object____ctor();
                now.fields._8_8_ = (Il2CppObject *)0x0;
                if (pIVar9 != (Il2CppArrayBounds *)0x0) {
                  uVar36 = *(undefined8 *)&pIVar9[2].lower_bound;
                  iVar19 = pIVar9[4].length;
                  pcVar6 = *(code **)&pIVar9[1].lower_bound;
                  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419824;
                  (*pcVar6)(iVar19,uVar3,IVar63.rgctxDataDummy,uVar36);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_03419833:
  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419838;
  il2cpp_runtime_helper_022b2c90();
  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.naturalAligment = (MethodInfo *)IVar63;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.interfaces_count = (MethodInfo *)IVar29;
  pAVar66[-2]._2.field_count = (short)uVar54;
  pAVar66[-2]._2.event_count = (short)(uVar54 >> 0x10);
  pAVar66[-2]._2.nested_type_count = (short)(uVar54 >> 0x20);
  pAVar66[-2]._2.vtable_count = (short)(uVar54 >> 0x30);
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.token = (Il2CppClass *)IVar48;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.thread_static_fields_offset = (MethodInfo *)now_02.fields._8_8_;
  *(MethodInfo_331A460 **)&pAVar66[-2]._2.element_size = method_13;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.static_fields_size = IVar38;
  IVar63.rgctxDataDummy = now_01.fields._8_8_ & 0xffffffff;
  now_00.fields._8_8_ = IVar30;
  plVar67 = (long *)IVar75;
  if (g_data_057a8ced == '\0') {
    *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419879;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419885;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419891;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar67 = &TypeInfo_TimeSpan;
    *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x341989d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ced = '\x01';
  }
  pAVar66[-2]._2.cctor_thread = 0;
  pAVar66[-2]._2.genericContainerHandle = (void *)0x0;
  IVar48.rgctxDataDummy = IVar63.rgctxDataDummy;
  if (IVar30.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar30.method)->field7_0x38 == '\0') {
label_03419969:
      if (*(char *)((long)&(IVar30.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar75.method)->klass)->fields;
      if (lVar28 != 0) {
        cVar26 = *(char *)(lVar28 + 0x18);
        pvVar40 = *(void **)(lVar28 + 0x20);
        *(char *)&pAVar66[-2]._2.cctor_thread = cVar26;
        pAVar66[-2]._2.genericContainerHandle = pvVar40;
        if (cVar26 == '\0') {
          return;
        }
        now.fields._8_8_ = (Il2CppRGCTXData)(IVar30.method)->return_type;
        Var24 = *(unkuint10 *)&(IVar30.method)->return_type;
        IVar29._2_6_ = 0;
        IVar29._0_2_ = *(ushort *)&(IVar30.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34199b9;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar38.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34199cd;
        left_06.fields._8_8_ = IVar63.rgctxDataDummy;
        left_06.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_09.rgctxDataDummy;
        right_06.fields._10_6_ = 0;
        right_06.fields._0_10_ = Var24;
        now_01.fields._8_8_ = IVar29;
        plVar67 = (long *)extraout_RDX_09;
        IVar48 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_06,right_06,(MethodInfo *)0x0);
        lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar75.method)->klass)->fields;
        now_00.fields._8_8_ = IVar63;
        if (lVar28 != 0) {
          pvVar40 = *(void **)(lVar28 + 0x20);
          *(undefined1 *)&pAVar66[-2]._2.cctor_thread = *(undefined1 *)(lVar28 + 0x18);
          pAVar66[-2]._2.genericContainerHandle = pvVar40;
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34199ff;
          __this_04.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_04.fields._0_8_ = &pAVar66[-2]._2.cctor_thread;
          IVar29 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_04,method_11);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a1a;
            il2cpp_runtime_helper_02337ed0();
          }
          now.fields._8_8_ = (Il2CppObject *)0x0;
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a29;
          bVar27 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)IVar48,(System_TimeSpan_o)IVar29,(MethodInfo *)0x0);
          if ((char)bVar27 == '\0') {
            return;
          }
          plVar67 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar30.method)->klass)->fields;
          pMVar22 = *(MethodInfo_331B520 **)
                     (*(long *)(*(long *)(*(long *)&pAVar66[-2]._2.element_size + 0x20) + 0xc0) + 0x108);
          now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a52;
          pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar67,1,pMVar22);
          lVar35._0_4_ = pAVar66[-2]._2.static_fields_size;
          lVar35._4_4_ = pAVar66[-2]._2.thread_static_fields_size;
          now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (lVar35 != 0) {
label_03419a5c:
            uVar36 = *(undefined8 *)(lVar35 + 0x28);
            uVar12 = *(undefined8 *)(lVar35 + 0x40);
            pcVar6 = *(code **)(lVar35 + 0x18);
            *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a6a;
            (*pcVar6)(uVar12,pAVar31,uVar36);
            return;
          }
        }
      }
    }
    else {
      now.fields._8_8_ = (Il2CppRGCTXData)(IVar30.method)->return_type;
      Var24 = *(unkuint10 *)&(IVar30.method)->return_type;
      now_01.fields._10_6_ = 0;
      now_01.fields._offsetMinutes = *(ushort *)&(IVar30.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34198df;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar38.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34198f3;
      left_05.fields._8_8_ = IVar63.rgctxDataDummy;
      left_05.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_09.rgctxDataDummy;
      right_05.fields._10_6_ = 0;
      right_05.fields._0_10_ = Var24;
      now_00.fields._8_8_ = IVar63.rgctxDataDummy;
      plVar67 = (long *)extraout_RDX_09;
      IVar29 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_05,right_05,(MethodInfo *)0x0);
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar75.method)->klass)->fields;
      if (lVar28 != 0) {
        now.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x10))->rgctxDataDummy;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419920;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x341992d;
        now_00.fields._8_8_ = now.fields._8_8_;
        plVar67 = (long *)IVar29;
        bVar27 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)IVar29,(System_TimeSpan_o)now.fields._8_8_,(MethodInfo *)0x0);
        if ((char)bVar27 == '\0') goto label_03419969;
        plVar67 = (long *)(IVar30.method)->name;
        pMVar10 = *(MethodInfo_331B380 **)
                   (*(long *)(*(long *)(*(long *)&pAVar66[-2]._2.element_size + 0x20) + 0xc0) + 0x100);
        now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
        *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419956;
        pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar67,1,pMVar10);
        lVar35._0_4_ = pAVar66[-2]._2.static_fields_size;
        lVar35._4_4_ = pAVar66[-2]._2.thread_static_fields_size;
        if (lVar35 != 0) goto label_03419a5c;
        now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a87;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.cctor_finished = (void *)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.initializationExceptionGCHandle = (MethodInfo *)extraout_RDX_09;
  pAVar66[-2]._2.unity_user_data = (void *)IVar29;
  pAVar66[-2]._2.typeHierarchy = (Il2CppClass **)IVar30;
  pvVar40 = now_00.fields._8_8_ & 0xffffffff;
  now.fields._8_8_ = now_01.fields._8_8_;
  IVar63 = now_00.fields._8_8_;
  if (g_data_057a8cee == '\0') {
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419aba;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cee = '\x01';
  }
  pAVar66[-2].static_fields = (void *)0x0;
  IVar30 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->return_type;
  pAVar32 = extraout_RDX_10;
  if (IVar30.rgctxDataDummy == (System_Collections_Generic_List_object__o *)0x0) {
label_03419dcd:
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419dd2;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    now.fields._8_8_ =
         *(Il2CppRGCTXData *)
          (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x48);
    IVar63.rgctxDataDummy = now_00.fields._8_8_ & 0xff;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419af4;
    bVar27 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                       (IVar30.rgctxDataDummy,IVar63.rgctxDataDummy,&pAVar66[-2].static_fields);
    if ((char)bVar27 == '\0') {
      return;
    }
    if (pAVar66[-2].static_fields == (void *)0x0) goto label_03419dcd;
    *(undefined1 *)((long)pAVar66[-2].static_fields + 0x3a) = 0;
    if (extraout_RDX_10 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      IVar63 = (Il2CppRGCTXData)
               ((Il2CppRGCTXData *)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x118))->method;
      pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419b34;
      IVar30 = "unknown_error";
      pAVar32 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error".method,(MethodInfo_331AB10 *)IVar63.method);
      if (pAVar32 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_03419dcd;
    }
    IVar30 = (Il2CppRGCTXData)pAVar66[-2].static_fields;
    if (IVar30.rgctxDataDummy == (System_Collections_Generic_List_object__o *)0x0) goto label_03419dcd;
    if ((char)(pAVar32->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)&(IVar30.method)->field7_0x38 = 1;
      IVar63 = (Il2CppRGCTXData)(pAVar32->fields)._Value_k__BackingField;
      (IVar30.method)->name = (char *)IVar63;
      pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419b6f;
      il2cpp_runtime_helper_022b4080(&(IVar30.method)->name);
      pvVar44 = pAVar66[-2].static_fields;
      IVar30.rgctxDataDummy = (System_Collections_Generic_List_object__o *)0x0;
      if (pvVar44 != (void *)0x0) {
        *(undefined8 *)((long)pvVar44 + 0x20) = 0;
        IVar30.rgctxDataDummy = pvVar44 + 0x20;
        IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419b90;
        il2cpp_runtime_helper_022b4080();
        now.fields._8_8_ = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
        if (now.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
          pAVar32 = pAVar66[-2].static_fields;
          IVar63 = (Il2CppRGCTXData)(now.fields._8_8_)->return_type;
          IVar30 = *(Il2CppRGCTXData *)&(now.fields._8_8_)->field8_0x40;
          pcVar6 = (code *)(now.fields._8_8_)->name;
          pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419bad;
          Var79 = (*pcVar6)();
          if (pAVar32 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
            *(unkbyte10 *)(pAVar32 + 1) = Var79;
            *(undefined2 *)((long)&pAVar32[1].monitor + 6) =
                 *(undefined2 *)((long)&pAVar66[-2].rgctx_data + 6);
            *(undefined4 *)((long)&pAVar32[1].monitor + 2) =
                 *(undefined4 *)((long)&pAVar66[-2].rgctx_data + 2);
            if (pAVar66[-2].static_fields != (void *)0x0) {
              IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pAVar66[-2].static_fields + 0x18))->method;
              pMVar10 = *(MethodInfo_331B380 **)
                         (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                              &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
              IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
              pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419bf9;
              plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                          ((Il2CppObject *)IVar30.method,0,pMVar10);
              pvVar44 = pAVar66[-2].static_fields;
              goto joined_r0x03419c04;
            }
          }
        }
      }
      goto label_03419dcd;
    }
    if (*(char *)&(IVar30.method)->field7_0x38 != '\0') {
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &((MethodInfo *)plVar67)->klass)->fields;
      if (lVar28 != 0) {
        if (*(char *)(lVar28 + 0x28) == '\0') goto label_03419d4a;
        IVar63 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
        (IVar30.method)->klass = (Il2CppClass *)IVar63;
        IVar30.rgctxDataDummy = &(IVar30.method)->klass;
        pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d07;
        il2cpp_runtime_helper_022b4080();
        if (pAVar66[-2].static_fields != (void *)0x0) {
          IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pAVar66[-2].static_fields + 0x18))->method;
          IVar63 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
          pMVar21 = *(MethodInfo_331B660 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
          pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d34;
          plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                      ((Il2CppObject *)IVar30.method,(System_String_o *)IVar63.method,pMVar21)
          ;
          pvVar44 = pAVar66[-2].static_fields;
joined_r0x03419c04:
          if (pvVar44 != (void *)0x0) goto label_03419c0a;
        }
      }
      goto label_03419dcd;
    }
label_03419d4a:
    *(undefined2 *)&(IVar30.method)->field7_0x38 = 0x100;
    (IVar30.method)->name = (char *)0x0;
    IVar63 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
    (IVar30.method)->klass = (Il2CppClass *)IVar63;
    IVar30.rgctxDataDummy = &(IVar30.method)->klass;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d69;
    il2cpp_runtime_helper_022b4080();
    now.fields._8_8_ = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
    if (now.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03419dcd;
    pvVar40 = pAVar66[-2].static_fields;
    IVar63 = (Il2CppRGCTXData)(now.fields._8_8_)->return_type;
    IVar30 = *(Il2CppRGCTXData *)&(now.fields._8_8_)->field8_0x40;
    pcVar6 = (code *)(now.fields._8_8_)->name;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d82;
    Var79 = (*pcVar6)();
    if (pvVar40 == (void *)0x0) goto label_03419dcd;
    *(unkbyte10 *)((long)pvVar40 + 0x28) = Var79;
    *(undefined4 *)((long)pvVar40 + 0x32) = *(undefined4 *)((long)&pAVar66[-2].rgctx_data + 2);
    *(undefined2 *)((long)pvVar40 + 0x36) = *(undefined2 *)((long)&pAVar66[-2].rgctx_data + 6);
    IVar30 = (Il2CppRGCTXData)(pAVar32->fields)._Error_k__BackingField;
    pMVar22 = *(MethodInfo_331B520 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
    IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419dbc;
    plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((System_String_o *)IVar30.method,0,pMVar22);
    pvVar44 = pAVar66[-2].static_fields;
    if (pvVar44 == (void *)0x0) goto label_03419dcd;
label_03419c0a:
    IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar44 + 0x10))->method;
    if (IVar30.rgctxDataDummy == (System_Collections_Generic_List_object__o *)0x0) goto label_03419dcd;
    IVar63 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x148))->method;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419c2e;
    now_01.fields._8_8_ =
         (MethodInfo *)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)IVar30.method,
                    (MethodInfo_362E340 *)IVar63.method);
    if ((pAVar66[-2].static_fields == (void *)0x0) ||
       (lVar28 = *(long *)((long)pAVar66[-2].static_fields + 0x10), lVar28 == 0)) goto label_03419dcd;
    *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
    iVar5 = *(int32_t *)(lVar28 + 0x18);
    *(undefined4 *)(lVar28 + 0x18) = 0;
    if (0 < iVar5) {
      IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x10))->method;
      IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419c6b;
      System_Array__Clear((System_Array_o *)IVar30.method,0,iVar5,(MethodInfo *)0x0);
    }
    if (now_01.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03419dcd;
    if ((int)(now_01.fields._8_8_)->name < 1) {
      return;
    }
    pvVar40 = (void *)0x0;
    pAVar32 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0;
    pvVar44 = pvVar40;
    if (((ulong)(now_01.fields._8_8_)->name & 0xffffffff) != 0) {
      do {
        pvVar40 = *(void **)((long)now_01.fields._8_8_ + (long)pAVar32 * 8 + 0x20);
        if (pvVar40 != (void *)0x0) {
          if (pvVar40 == (void *)0x0) goto label_03419dcd;
          uVar36 = *(undefined8 *)((long)pvVar40 + 0x28);
          IVar30 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar40 + 0x40))->method;
          pcVar6 = *(code **)((long)pvVar40 + 0x18);
          pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419cd0;
          IVar63 = (Il2CppRGCTXData)plVar67;
          (*pcVar6)(IVar30.rgctxDataDummy,plVar67,uVar36);
          pvVar44 = pvVar40;
        }
        pvVar40 = pvVar44;
        pAVar32 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)((long)&pAVar32->klass + 1);
        now.fields._8_8_ = (Il2CppRGCTXData)(long)(int)*(uint *)&(now_01.fields._8_8_)->name;
        if ((long)now.fields._8_8_ <= (long)pAVar32) {
          return;
        }
        pvVar44 = pvVar40;
      } while (pAVar32 < (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)
                         (ulong)*(uint *)&(now_01.fields._8_8_)->name);
    }
  }
  pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419dd7;
  auVar76 = il2cpp_runtime_helper_022b2ca0();
  pcVar39 = auVar76._8_8_;
  pAVar66[-2]._1.implementedInterfaces = pvVar40;
  pAVar66[-2]._1.nestedTypes = (Il2CppClass **)plVar67;
  pAVar66[-2]._1.methods = (void *)now_01.fields._8_8_;
  pAVar66[-2]._1.properties = (void *)IVar48;
  pAVar66[-2]._1.events = (void *)IVar75;
  pAVar66[-2]._1.fields = pAVar32;
  pAVar66[-2]._1.klass = (Il2CppClass *)auVar76._0_8_;
  now_02.fields._8_8_ = now.fields._8_8_;
  t1_00 = IVar38;
  if (g_data_057a8cef == '\0') {
    pAVar66[-2]._1.interopData = (void *)0x3419e0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pAVar66[-2]._1.interopData = (void *)0x3419e1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cef = '\x01';
  }
  lVar28 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar38.method)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    pAVar66[-2]._1.interopData = (void *)0x3419e3e;
    lVar28 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-2]._1.interopData = (void *)0x3419e46;
  pSVar47 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar28);
  method_05 = *(MethodInfo_3161460 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(IVar38.method)->klass)->fields + 0xc0) + 8);
  pAVar66[-2]._1.interopData = (void *)0x3419e60;
  System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object____ctor(pSVar47,method_05);
  (IVar30.method)->return_type = (Il2CppType *)pSVar47;
  pAVar66[-2]._1.interopData = (void *)0x3419e70;
  il2cpp_runtime_helper_022b4080(&(IVar30.method)->return_type);
  now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
  pAVar66[-2]._1.interopData = (void *)0x3419e7a;
  System_Object___ctor((Il2CppObject *)IVar30.method,(MethodInfo *)0x0);
  if (IVar63.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
    pAVar66[-2]._1.interopData = (void *)0x341a059;
    uVar36 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pAVar66[-2]._1.interopData = (void *)0x341a061;
    IVar63.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(uVar36);
    pAVar66[-2]._1.interopData = (void *)0x341a070;
    pSVar49 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pAVar66[-2]._1.interopData = (void *)0x341a07d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)IVar63.method,pSVar49,(MethodInfo *)0x0);
    pAVar66[-2]._1.interopData = (void *)0x341a088;
    now_00.fields._8_8_ = IVar38;
    IVar75.rgctxDataDummy = IVar63.rgctxDataDummy;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    IVar75.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (IVar30.rgctxDataDummy != (System_Collections_Generic_List_object__o *)0x0) {
      ((System_Collections_Generic_List_object__Fields *)&(IVar30.method)->invoker_method)->_items =
           (System_Object_array *)IVar63;
      pAVar66[-2]._1.interopData = (void *)0x3419ea3;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_List_object__Fields *)&(IVar30.method)->invoker_method,
                         IVar63.rgctxDataDummy);
      if (pcVar39 == (char *)0x0) {
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar38.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          pAVar66[-2]._1.interopData = (void *)0x3419ec9;
          lVar28 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar28 + 0xe4) == 0) {
          pAVar66[-2]._1.interopData = (void *)0x3419eda;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar38.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          pAVar66[-2]._1.interopData = (void *)0x3419efa;
          lVar28 = il2cpp_runtime_helper_023009c0(lVar28);
        }
        pcVar39 = *(char **)(*(long *)(lVar28 + 0xb8) + 8);
        if (pcVar39 == (char *)0x0) {
          lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar38.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419f2b;
            lVar28 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar28 + 0xe4) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419f3c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar38.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419f5c;
            il2cpp_runtime_helper_023009c0(lVar28);
          }
          pAVar66[-2]._1.interopData = (void *)0x3419f75;
          pcVar39 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pAVar66[-2]._1.interopData = (void *)0x3419f94;
          System_Func_DateTimeOffset____ctor();
          lVar28 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar38.method)->klass)->fields + 0xc0);
          lVar35 = *(long *)(lVar28 + 0x28);
          if ((*(byte *)(lVar35 + 0x135) & 1) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419fb4;
            lVar35 = il2cpp_runtime_helper_023009c0(lVar35);
            lVar28 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar38.method)->klass)->fields + 0xc0);
          }
          *(char **)(*(long *)(lVar35 + 0xb8) + 8) = pcVar39;
          lVar28 = *(long *)(lVar28 + 0x28);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419fdf;
            lVar28 = il2cpp_runtime_helper_023009c0(lVar28);
          }
          lVar28 = *(long *)(lVar28 + 0xb8);
          pAVar66[-2]._1.interopData = (void *)0x3419ff2;
          il2cpp_runtime_helper_022b4080(lVar28 + 8,pcVar39);
        }
      }
      (IVar30.method)->name = pcVar39;
      pAVar66[-2]._1.interopData = (void *)0x341a002;
      il2cpp_runtime_helper_022b4080(&(IVar30.method)->name,pcVar39);
      if (now.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pAVar66[-2]._1.interopData = (void *)0x341a01f;
          il2cpp_runtime_helper_02337ed0();
        }
        now.fields._8_8_ = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      (IVar30.method)->klass = (Il2CppClass *)now.fields._8_8_;
      il2cpp_runtime_helper_022b4080(&(IVar30.method)->klass,now.fields._8_8_);
      return;
    }
  }
  pAVar66[-2]._1.interopData = (void *)0x341a08d;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.interopData = (void *)auVar76._0_8_;
  pIVar33 = (IVar75.method)->return_type;
  if (pIVar33 != (Il2CppType *)0x0) {
    lVar28 = *(long *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x40);
    pAVar66[-2]._1.interopData = pAVar66[-2]._1.interopData;
    uVar36 = *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x108);
    pAVar66[-2]._1.typeMetadataHandle = (void *)0x3262308;
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___FindEntry
              (pIVar33,(ulong)now_00.fields._8_8_ & 0xff,uVar36);
    return;
  }
  pAVar66[-2]._1.typeMetadataHandle = (void *)0x341a0b8;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.typeMetadataHandle = (void *)auVar76._0_8_;
  pAVar66[-2]._1.typeMetadataHandle = (void *)0x0;
  pvVar40 = *(void **)&pIVar33[2].bits;
  if (pvVar40 != (void *)0x0) {
    now_02.fields._8_8_ = *(Il2CppRGCTXData *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x48);
    now_00.fields._8_8_ = now_00.fields._8_8_ & 0xff;
    pAVar66[-2]._1.generic_class = (void *)0x341a0ed;
    bVar27 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pvVar40,now_00.fields._8_8_,&pAVar66[-2]._1.typeMetadataHandle);
    if ((char)bVar27 == '\0') {
      return;
    }
    if (pAVar66[-2]._1.typeMetadataHandle != (void *)0x0) {
      return;
    }
  }
  pAVar66[-2]._1.generic_class = (void *)0x341a10c;
  uVar36 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.generic_class = (void *)uVar36;
  pSVar69 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)pvVar40 + 0x28);
  if (pSVar69 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Clear
              (pSVar69,*(MethodInfo_3162290 **)
                        (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                             &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x60));
    return;
  }
  pAVar66[-2]._1.parent = (Il2CppClass *)0x341a134;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.parent = (Il2CppClass *)auVar76._0_8_;
  IVar75 = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(pSVar69->fields)._freeCount;
  if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Remove
              (IVar75.rgctxDataDummy,(ulong)now_00.fields._8_8_ & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pAVar66[-2]._1.declaringType = (Il2CppClass *)0x341a168;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  onResult_00 = auVar76._8_8_;
  pAVar66[-2]._1.declaringType = (Il2CppClass *)pSVar47;
  pAVar66[-2]._1.castClass = (Il2CppClass *)IVar38;
  pAVar66[-2]._1.element_class = (Il2CppClass *)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-2]._1.this_arg.bits = (MethodInfo *)IVar30;
  pAVar66[-2]._1.this_arg.data = pcVar39;
  *(Il2CppRGCTXData *)&pAVar66[-2]._1.byval_arg.bits = (void *)IVar63;
  pAVar66[-2]._1.byval_arg.data = auVar76._0_8_;
  pvVar40 = now_02.fields._8_8_ & 0xffffffff;
  now.fields._8_8_ = now_00.fields._8_8_ & 0xffffffff;
  pAVar66[-2]._1.byval_arg.data = (void *)0x0;
  lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(t1_00.method)->klass)->fields + 0xc0) + 0x70);
  IVar38 = t1_00;
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    pAVar66[-2]._1.namespaze = (char *)0x341a1ae;
    lVar28 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-2]._1.namespaze = (char *)0x341a1b6;
  IVar30.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar28);
  IVar50 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(t1_00.method)->klass)->fields + 0xc0) + 0x78))->method;
  pAVar66[-2]._1.namespaze = (char *)0x341a1d0;
  IVar63.rgctxDataDummy = IVar30.rgctxDataDummy;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)IVar30.method,
             (MethodInfo_27BBA90 *)IVar50.method);
  if (IVar30.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    (IVar30.method)->invoker_method = (InvokerMethod)IVar75;
    pAVar66[-2]._1.namespaze = (char *)0x341a1ec;
    IVar50 = IVar75;
    il2cpp_runtime_helper_022b4080(&(IVar30.method)->invoker_method);
    *(char *)&(IVar30.method)->name = (char)now.fields._offsetMinutes;
    if (onResult_00.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar63 = (Il2CppRGCTXData)(IVar75.method)->return_type;
    if (IVar63.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      now_02.fields._8_8_ =
           *(Il2CppRGCTXData *)
            (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(t1_00.method)->klass)->fields + 0xc0) + 0x48);
      IVar50.rgctxDataDummy = now_00.fields._8_8_ & 0xff;
      pAVar66[-2]._1.namespaze = (char *)0x341a221;
      bVar27 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (IVar63.rgctxDataDummy,IVar50.rgctxDataDummy,&pAVar66[-2]._1.byval_arg);
      if ((char)bVar27 == '\0') {
        lVar28 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(t1_00.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          pAVar66[-2]._1.namespaze = (char *)0x341a242;
          lVar28 = il2cpp_runtime_helper_023009c0();
        }
        pAVar66[-2]._1.namespaze = (char *)0x341a24a;
        now.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar28);
        IVar50 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(t1_00.method)->klass)->fields + 0xc0) + 0x88))->method;
        pAVar66[-2]._1.namespaze = (char *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)now.fields._8_8_,
                   (MethodInfo_31EFB10 *)IVar50.method);
        pAVar66[-2]._1.byval_arg.data = (void *)now.fields._8_8_;
        IVar63 = (Il2CppRGCTXData)(IVar75.method)->return_type;
        if (IVar63.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_0341a453;
        uVar36 = *(undefined8 *)
                  (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(t1_00.method)->klass)->fields + 0xc0) + 0x90);
        IVar50._4_4_ = 0;
        IVar50._0_4_ = *(uint *)&(IVar30.method)->name;
        pAVar66[-2]._1.namespaze = (char *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (IVar63.rgctxDataDummy,IVar50.rgctxDataDummy,now.fields._8_8_,uVar36);
      }
      now_02.fields._8_8_ = (Il2CppRGCTXData)(IVar75.method)->name;
      if (now_02.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar50 = (Il2CppRGCTXData)(now_02.fields._8_8_)->return_type;
        IVar63 = (Il2CppRGCTXData)((now_02.fields._8_8_)->field8_0x40).genericMethod;
        pcVar6 = (code *)(now_02.fields._8_8_)->name;
        pAVar66[-2]._1.namespaze = (char *)0x341a2ad;
        auVar77 = (*pcVar6)();
        if ((char)pvVar40 == '\0') {
          now_02.fields._8_8_ = (void *)(auVar77._8_8_ & 0xffffffff);
          IVar50 = (Il2CppRGCTXData)pAVar66[-2]._1.byval_arg.data;
          method_13 = *(MethodInfo_331A460 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(t1_00.method)->klass)->fields + 0xc0) + 0x98);
          pAVar66[-2]._1.namespaze = (char *)0x341a2d8;
          now_02.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar77._0_8_;
          IVar63 = IVar75;
          IVar38 = onResult_00;
          bVar27 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)IVar75.method,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar50.method,
                              now_02,(System_Action_AottgQueryResult_TValue___o *)onResult_00.method,method_13
                             );
          if ((char)bVar27 != '\0') {
            return;
          }
        }
        pvVar44 = pAVar66[-2]._1.byval_arg.data;
        if (pvVar44 != (void *)0x0) {
          if (*(char *)((long)pvVar44 + 0x38) == '\0') {
            pMVar17 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(t1_00.method)->klass)->fields + 0xc0) + 200);
            pAVar66[-2]._1.namespaze = (char *)0x341a327;
            IVar50.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar17);
          }
          else {
            pIVar7 = *(Il2CppObject **)((long)pvVar44 + 0x18);
            pMVar8 = *(MethodInfo_331B450 **)
                      (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                           &(t1_00.method)->klass)->fields + 0xc0) + 0xa8);
            pAVar66[-2]._1.namespaze = (char *)0x341a30e;
            IVar50.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar7,pMVar8);
          }
          pIVar33 = (onResult_00.method)->return_type;
          IVar63 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(onResult_00.klass)->_1)[8].method;
          pcVar6 = (code *)(onResult_00.method)->name;
          pAVar66[-2]._1.namespaze = (char *)0x341a339;
          (*pcVar6)(IVar63.rgctxDataDummy,IVar50.rgctxDataDummy,pIVar33);
          pvVar44 = pAVar66[-2]._1.byval_arg.data;
          if ((pvVar44 != (void *)0x0) &&
             (IVar63 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar44 + 0x10))->method,
             IVar63.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now_02.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(t1_00.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar63.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar9 = (Il2CppArrayBounds *)(IVar63.method)->invoker_method;
            if (pIVar9 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar63.method)->name;
              IVar50 = onResult_00;
              if (uVar4 < (uint)pIVar9[1].lower_bound) {
                now_02.fields._8_4_ = uVar4 + 1;
                now_02.fields._12_4_ = 0;
                *(uint *)&(IVar63.method)->name = now_02.fields._8_4_;
                IVar63.rgctxDataDummy = &pIVar9[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar9[2].length + (int)uVar4))->klass = (Il2CppClass *)onResult_00;
                pAVar66[-2]._1.namespaze = (char *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pvVar44 = pAVar66[-2]._1.byval_arg.data;
              }
              else {
                pMVar18 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                pAVar66[-2]._1.namespaze = (char *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar63.method,
                           (Il2CppObject *)onResult_00.method,pMVar18);
                pvVar44 = pAVar66[-2]._1.byval_arg.data;
              }
              if (pvVar44 != (void *)0x0) {
                if (*(char *)((long)pvVar44 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)((long)pvVar44 + 0x3a) = 1;
                pIVar9 = (Il2CppArrayBounds *)(IVar75.method)->invoker_method;
                uVar3 = *(undefined1 *)&(IVar30.method)->name;
                onResult_00._1_7_ = auVar76._9_7_;
                onResult_00._0_1_ = uVar3;
                lVar28 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(t1_00.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
                  pAVar66[-2]._1.namespaze = (char *)0x341a3fe;
                  lVar28 = il2cpp_runtime_helper_023009c0();
                }
                pAVar66[-2]._1.namespaze = (char *)0x341a406;
                IVar75.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar28);
                now_02.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(t1_00.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                pAVar66[-2]._1.namespaze = (char *)0x341a42d;
                IVar50.rgctxDataDummy = IVar30.rgctxDataDummy;
                IVar63.rgctxDataDummy = IVar75.rgctxDataDummy;
                System_Action_object____ctor();
                now.fields._8_8_ = (Il2CppObject *)0x0;
                if (pIVar9 != (Il2CppArrayBounds *)0x0) {
                  uVar36 = *(undefined8 *)&pIVar9[2].lower_bound;
                  iVar19 = pIVar9[4].length;
                  pcVar6 = *(code **)&pIVar9[1].lower_bound;
                  pAVar66[-2]._1.namespaze = (char *)0x341a444;
                  (*pcVar6)(iVar19,uVar3,IVar75.rgctxDataDummy,uVar36);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pAVar66[-2]._1.namespaze = (char *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.namespaze = (char *)now.fields._8_8_;
  pAVar66[-2]._1.name = (char *)IVar75;
  pAVar66[-2]._1.gc_desc = (void *)t1_00;
  pAVar66[-2]._1.image = pvVar40;
  pAVar66[-3].vtable._3_ToString.method = (MethodInfo *)onResult_00;
  pAVar66[-3].vtable._3_ToString.methodPtr = (Il2CppMethodPointer)IVar30;
  pAVar66[-3].vtable._2_GetHashCode.methodPtr = (Il2CppMethodPointer)method_13;
  pAVar66[-3].vtable._2_GetHashCode.method = (MethodInfo *)IVar38;
  now_00.fields._8_8_ = now_02.fields._8_8_ & 0xffffffff;
  IVar38 = IVar50;
  plVar67 = (long *)IVar63;
  if (g_data_057a8cf0 == '\0') {
    pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar67 = &TypeInfo_TimeSpan;
    pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  pAVar66[-3].vtable._0_Equals.method = (MethodInfo *)0x0;
  pAVar66[-3].vtable._1_Finalize.methodPtr = (Il2CppMethodPointer)0x0;
  if (IVar50.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar50.method)->field7_0x38 == '\0') {
label_0341a589:
      if (*(char *)((long)&(IVar50.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar63.method)->klass)->fields;
      if (lVar28 != 0) {
        cVar26 = *(char *)(lVar28 + 0x18);
        pIVar68 = *(Il2CppMethodPointer *)(lVar28 + 0x20);
        *(char *)&pAVar66[-3].vtable._0_Equals.method = cVar26;
        pAVar66[-3].vtable._1_Finalize.methodPtr = pIVar68;
        if (cVar26 == '\0') {
          return;
        }
        now.fields._8_8_ = (Il2CppRGCTXData)(IVar50.method)->return_type;
        Var24 = *(unkuint10 *)&(IVar50.method)->return_type;
        t1_00._2_6_ = 0;
        t1_00._0_2_ = *(ushort *)&(IVar50.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a5ed;
        left_08.fields._8_8_ = now_00.fields._8_8_;
        left_08.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_11.rgctxDataDummy;
        right_08.fields._10_6_ = 0;
        right_08.fields._0_10_ = Var24;
        now_02.fields._8_8_ = t1_00;
        plVar67 = (long *)extraout_RDX_11;
        t1_01 = System_DateTimeOffset__op_Subtraction(left_08,right_08,(MethodInfo *)0x0);
        lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar63.method)->klass)->fields;
        IVar38 = now_00.fields._8_8_;
        if (lVar28 != 0) {
          pIVar68 = *(Il2CppMethodPointer *)(lVar28 + 0x20);
          *(undefined1 *)&pAVar66[-3].vtable._0_Equals.method = *(undefined1 *)(lVar28 + 0x18);
          pAVar66[-3].vtable._1_Finalize.methodPtr = pIVar68;
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a61f;
          __this_05.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_05.fields._0_8_ = &pAVar66[-3].vtable._0_Equals.method;
          t1_00 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_05,method_12);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          now.fields._8_8_ = (Il2CppObject *)0x0;
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a649;
          bVar27 = System_TimeSpan__op_LessThan(t1_01,(System_TimeSpan_o)t1_00,(MethodInfo *)0x0);
          if ((char)bVar27 == '\0') {
            return;
          }
          plVar67 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar50.method)->klass)->fields;
          pMVar22 = *(MethodInfo_331B520 **)
                     (*(long *)(*(long *)(pAVar66[-3].vtable._2_GetHashCode.methodPtr + 0x20) + 0xc0) + 0x108)
          ;
          IVar38 = (Il2CppRGCTXData)0x1;
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a672;
          pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar67,1,pMVar22);
          pMVar56 = pAVar66[-3].vtable._2_GetHashCode.method;
          now_02.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (pMVar56 != (MethodInfo *)0x0) {
label_0341a67c:
            pIVar33 = pMVar56->return_type;
            pvVar40 = (pMVar56->field8_0x40).genericMethod;
            pcVar6 = (code *)pMVar56->name;
            pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a68a;
            (*pcVar6)(pvVar40,pAVar31,pIVar33);
            return;
          }
        }
      }
    }
    else {
      now.fields._8_8_ = (Il2CppRGCTXData)(IVar50.method)->return_type;
      Var24 = *(unkuint10 *)&(IVar50.method)->return_type;
      now_02.fields._10_6_ = 0;
      now_02.fields._offsetMinutes = *(ushort *)&(IVar50.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a513;
      left_07.fields._8_8_ = now_00.fields._8_8_;
      left_07.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_11.rgctxDataDummy;
      right_07.fields._10_6_ = 0;
      right_07.fields._0_10_ = Var24;
      IVar38.rgctxDataDummy = now_00.fields._8_8_;
      plVar67 = (long *)extraout_RDX_11;
      t1_00 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_07,right_07,(MethodInfo *)0x0);
      lVar28 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar63.method)->klass)->fields;
      if (lVar28 != 0) {
        now.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar28 + 0x10))->rgctxDataDummy;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a54d;
        IVar38 = now.fields._8_8_;
        plVar67 = (long *)t1_00;
        bVar27 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)t1_00,(System_TimeSpan_o)now.fields._8_8_,(MethodInfo *)0x0);
        if ((char)bVar27 == '\0') goto label_0341a589;
        plVar67 = (long *)(IVar50.method)->name;
        pMVar10 = *(MethodInfo_331B380 **)
                   (*(long *)(*(long *)(pAVar66[-3].vtable._2_GetHashCode.methodPtr + 0x20) + 0xc0) + 0x100);
        IVar38 = (Il2CppRGCTXData)0x1;
        pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a576;
        pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar67,1,pMVar10);
        pMVar56 = pAVar66[-3].vtable._2_GetHashCode.method;
        if (pMVar56 != (MethodInfo *)0x0) goto label_0341a67c;
        now_02.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-3]._2.naturalAligment = (MethodInfo *)extraout_RDX_11;
  *(Il2CppRGCTXData *)&pAVar66[-3]._2.interfaces_count = (MethodInfo *)t1_00;
  *(Il2CppRGCTXData *)&pAVar66[-3]._2.field_count = (MethodInfo *)IVar50;
  if (g_data_057a8cf1 == '\0') {
    pAVar66[-3]._2.element_size = 0x341a6da;
    pAVar66[-3]._2.native_size = 0;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pAVar66[-3]._2.thread_static_fields_offset = 0;
  pAVar66[-3]._2.flags = 0;
  pIVar33 = ((MethodInfo *)plVar67)->return_type;
  if (pIVar33 != (Il2CppType *)0x0) {
    pAVar66[-3]._2.element_size = 0x341a714;
    pAVar66[-3]._2.native_size = 0;
    bVar27 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pIVar33,(ulong)IVar38.rgctxDataDummy & 0xff,
                        &pAVar66[-3]._2.thread_static_fields_offset);
    if ((char)bVar27 == '\0') {
      return;
    }
    lVar28 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
    if (lVar28 != 0) {
      *(undefined1 *)(lVar28 + 0x3a) = 0;
      pAVar32 = extraout_RDX_12;
      if (extraout_RDX_12 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
        method_06 = *(MethodInfo_331AB10 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x118);
        pAVar66[-3]._2.element_size = 0x341a754;
        pAVar66[-3]._2.native_size = 0;
        pAVar32 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((System_String_o *)"unknown_error".method,method_06);
        if (pAVar32 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_0341a9ed;
      }
      lVar28 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
      if (lVar28 != 0) {
        if ((char)(pAVar32->fields)._Success_k__BackingField == '\0') {
          if (*(char *)(lVar28 + 0x38) == '\0') {
label_0341a96a:
            *(undefined2 *)(lVar28 + 0x38) = 0x100;
            *(undefined8 *)(lVar28 + 0x18) = 0;
            *(System_String_o **)(lVar28 + 0x20) = (pAVar32->fields)._Error_k__BackingField;
            pAVar66[-3]._2.element_size = 0x341a989;
            pAVar66[-3]._2.native_size = 0;
            il2cpp_runtime_helper_022b4080();
            if (((MethodInfo *)plVar67)->name != (char *)0x0) {
              lVar28 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
              pcVar6 = *(code **)(((MethodInfo *)plVar67)->name + 0x18);
              pAVar66[-3]._2.element_size = 0x341a9a2;
              pAVar66[-3]._2.native_size = 0;
              Var79 = (*pcVar6)();
              if (lVar28 != 0) {
                *(unkbyte10 *)(lVar28 + 0x28) = Var79;
                *(undefined4 *)(lVar28 + 0x32) = *(undefined4 *)((long)&pAVar66[-3]._2.token + 2);
                *(uint16_t *)(lVar28 + 0x36) = pAVar66[-3]._2.property_count;
                pSVar49 = (pAVar32->fields)._Error_k__BackingField;
                pMVar22 = *(MethodInfo_331B520 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
                pAVar66[-3]._2.element_size = 0x341a9dc;
                pAVar66[-3]._2.native_size = 0;
                pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache(pSVar49,0,pMVar22);
                lVar42._0_4_ = pAVar66[-3]._2.thread_static_fields_offset;
                lVar42._4_4_ = pAVar66[-3]._2.flags;
joined_r0x0341a95f:
                if ((lVar42 != 0) &&
                   (__this = *(System_Collections_Generic_List_object__o **)(lVar42 + 0x10),
                   __this != (System_Collections_Generic_List_object__o *)0x0)) {
                  method_07 = *(MethodInfo_362E340 **)
                               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                      *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x148
                               );
                  pAVar66[-3]._2.element_size = 0x341a84e;
                  pAVar66[-3]._2.native_size = 0;
                  pSVar51 = System_Collections_Generic_List_object___ToArray(__this,method_07);
                  lVar28 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
                  if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x10), lVar28 != 0)) {
                    *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
                    iVar5 = *(int32_t *)(lVar28 + 0x18);
                    *(undefined4 *)(lVar28 + 0x18) = 0;
                    if (0 < iVar5) {
                      array = *(System_Array_o **)(lVar28 + 0x10);
                      pAVar66[-3]._2.element_size = 0x341a88b;
                      pAVar66[-3]._2.native_size = 0;
                      System_Array__Clear(array,0,iVar5,(MethodInfo *)0x0);
                    }
                    if (pSVar51 != (System_Object_array *)0x0) {
                      if ((int)pSVar51->max_length < 1) {
                        return;
                      }
                      uVar54 = 0;
                      if ((pSVar51->max_length & 0xffffffff) != 0) {
                        do {
                          pIVar7 = pSVar51->m_Items[uVar54];
                          if (pIVar7 != (Il2CppObject *)0x0) {
                            if (pIVar7 == (Il2CppObject *)0x0) goto label_0341a9ed;
                            pvVar40 = pIVar7[2].monitor;
                            pIVar20 = pIVar7[4].klass;
                            pcVar6 = pIVar7[1].monitor;
                            pAVar66[-3]._2.element_size = 0x341a8f0;
                            pAVar66[-3]._2.native_size = 0;
                            (*pcVar6)(pIVar20,pAVar31,pvVar40);
                          }
                          uVar54 = uVar54 + 1;
                          uVar4 = (uint)pSVar51->max_length;
                          if ((long)(int)uVar4 <= (long)uVar54) {
                            return;
                          }
                        } while (uVar54 < uVar4);
                      }
                      goto label_0341a9f2;
                    }
                  }
                }
              }
            }
          }
          else {
            lVar35 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &((MethodInfo *)plVar67)->klass)->fields;
            if (lVar35 != 0) {
              if (*(char *)(lVar35 + 0x28) == '\0') goto label_0341a96a;
              *(System_String_o **)(lVar28 + 0x20) = (pAVar32->fields)._Error_k__BackingField;
              pAVar66[-3]._2.element_size = 0x341a927;
              pAVar66[-3]._2.native_size = 0;
              il2cpp_runtime_helper_022b4080();
              lVar28 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
              if (lVar28 != 0) {
                pIVar7 = *(Il2CppObject **)(lVar28 + 0x18);
                pSVar49 = (pAVar32->fields)._Error_k__BackingField;
                pMVar21 = *(MethodInfo_331B660 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
                pAVar66[-3]._2.element_size = 0x341a954;
                pAVar66[-3]._2.native_size = 0;
                pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                    (pIVar7,pSVar49,pMVar21);
                lVar42._0_4_ = pAVar66[-3]._2.thread_static_fields_offset;
                lVar42._4_4_ = pAVar66[-3]._2.flags;
                goto joined_r0x0341a95f;
              }
            }
          }
        }
        else {
          *(undefined2 *)(lVar28 + 0x38) = 1;
          *(Il2CppObject **)(lVar28 + 0x18) = (pAVar32->fields)._Value_k__BackingField;
          pAVar66[-3]._2.element_size = 0x341a78f;
          pAVar66[-3]._2.native_size = 0;
          il2cpp_runtime_helper_022b4080(lVar28 + 0x18);
          lVar28 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
          if (lVar28 != 0) {
            *(undefined8 *)(lVar28 + 0x20) = 0;
            pAVar66[-3]._2.element_size = 0x341a7b0;
            pAVar66[-3]._2.native_size = 0;
            il2cpp_runtime_helper_022b4080(lVar28 + 0x20,0);
            if (((MethodInfo *)plVar67)->name != (char *)0x0) {
              lVar28 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
              pcVar6 = *(code **)(((MethodInfo *)plVar67)->name + 0x18);
              pAVar66[-3]._2.element_size = 0x341a7cd;
              pAVar66[-3]._2.native_size = 0;
              Var79 = (*pcVar6)();
              if (lVar28 != 0) {
                *(unkbyte10 *)(lVar28 + 0x28) = Var79;
                *(uint16_t *)(lVar28 + 0x36) = pAVar66[-3]._2.property_count;
                *(undefined4 *)(lVar28 + 0x32) = *(undefined4 *)((long)&pAVar66[-3]._2.token + 2);
                lVar28 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
                if (lVar28 != 0) {
                  pIVar7 = *(Il2CppObject **)(lVar28 + 0x18);
                  pMVar10 = *(MethodInfo_331B380 **)
                             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                    *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
                  pAVar66[-3]._2.element_size = 0x341a819;
                  pAVar66[-3]._2.native_size = 0;
                  pAVar31 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh(pIVar7,0,pMVar10);
                  lVar42._0_4_ = pAVar66[-3]._2.thread_static_fields_offset;
                  lVar42._4_4_ = pAVar66[-3]._2.flags;
                  goto joined_r0x0341a95f;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  pAVar66[-3]._2.element_size = 0x341a9f2;
  pAVar66[-3]._2.native_size = 0;
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  pAVar66[-3]._2.element_size = 0x341a9f7;
  pAVar66[-3]._2.native_size = 0;
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile (System_String_o* accountId, const MethodInfo* method);
// 0x44c4500

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile
               (System_String_o *accountId,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int32_t iVar5;
  MethodInfo_315B430 *method_00;
  Il2CppArrayBounds *pIVar6;
  System_Int32_array *pSVar7;
  Il2CppType *pIVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  size_t sVar12;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *pAVar13;
  System_TimeSpan_Fields t2;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *pAVar14;
  MethodInfo_315A040 *method_01;
  MethodInfo_315ACA0 *method_02;
  Il2CppObject *pIVar15;
  MethodInfo_331B450 *pMVar16;
  MethodInfo_331B380 *pMVar17;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *pAVar18;
  MethodInfo_315DA50 *method_03;
  MethodInfo_3161460 *method_04;
  MethodInfo_331B2F0 *pMVar19;
  MethodInfo_362C220 *pMVar20;
  il2cpp_array_size_t iVar21;
  MethodInfo_331AB10 *method_05;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo_362E340 *method_06;
  System_Array_o *array;
  Il2CppClass *pIVar22;
  MethodInfo_331B660 *pMVar23;
  MethodInfo_331B520 *pMVar24;
  undefined1 auVar25 [12];
  unkuint10 Var26;
  int iVar27;
  char cVar28;
  bool_conflict bVar29;
  long lVar30;
  Il2CppRGCTXData IVar31;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar32;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar33;
  Il2CppType *pIVar34;
  char *pcVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  void *pvVar40;
  undefined1 *puVar41;
  long lVar42;
  unkuint10 *pVar43;
  System_TimeSpan_Fields t1;
  void *pvVar44;
  Il2CppRGCTXData *pIVar45;
  Il2CppRGCTXData *pIVar46;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar47;
  Il2CppRGCTXData IVar48;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar49;
  Il2CppRGCTXData IVar50;
  System_String_o *pSVar51;
  Il2CppRGCTXData t1_00;
  System_TimeSpan_o t1_01;
  System_Object_array *pSVar52;
  undefined4 uVar53;
  int iVar54;
  ulong uVar55;
  Il2CppRGCTXData IVar56;
  Il2CppRuntimeInterfaceOffsetPair *pIVar57;
  MethodInfo *pMVar58;
  Il2CppRGCTXData in_RCX;
  Il2CppRGCTXData onResult;
  Il2CppRGCTXData extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  ulong uVar59;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  Il2CppRGCTXData *extraout_RDX_06;
  Il2CppRGCTXData extraout_RDX_07;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_08;
  Il2CppRGCTXData extraout_RDX_09;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_10;
  Il2CppRGCTXData extraout_RDX_11;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_12;
  System_Action_AottgQueryFetchResult_AottgPublicProfile___o *onComplete;
  undefined8 *puVar60;
  undefined8 *puVar61;
  MethodInfo_3316900 *pMVar62;
  Il2CppRGCTXData IVar63;
  undefined8 *puVar64;
  InvokerMethod pIVar65;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *pAVar66;
  long *plVar67;
  Il2CppMethodPointer pIVar68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar69;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this_00;
  Il2CppRGCTXData in_R8;
  MethodInfo_331A460 *method_12;
  MethodInfo_3316900 *in_R9;
  Il2CppRGCTXData *pIVar70;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar71;
  Il2CppRGCTXData onResult_00;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *pSVar72;
  MethodInfo_3316900 *__dest;
  MethodInfo_3316900 *pMVar73;
  Il2CppClass **ppIVar74;
  char **unaff_R13;
  Il2CppRGCTXData IVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  Cysharp_Threading_Tasks_UniTask_o CVar78;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_01;
  System_DateTimeOffset_o left_01;
  System_DateTimeOffset_o left_02;
  System_Nullable_TimeSpan__o __this_02;
  System_DateTimeOffset_o left_03;
  System_DateTimeOffset_o left_04;
  System_Nullable_TimeSpan__o __this_03;
  System_DateTimeOffset_o left_05;
  System_DateTimeOffset_o left_06;
  System_Nullable_TimeSpan__o __this_04;
  System_DateTimeOffset_o left_07;
  System_DateTimeOffset_o left_08;
  System_Nullable_TimeSpan__o __this_05;
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o right_01;
  System_DateTimeOffset_o right_02;
  System_DateTimeOffset_o now_00;
  System_DateTimeOffset_o right_03;
  System_DateTimeOffset_o right_04;
  System_DateTimeOffset_o now_01;
  System_DateTimeOffset_o right_05;
  System_DateTimeOffset_o right_06;
  System_DateTimeOffset_o now_02;
  System_DateTimeOffset_o right_07;
  System_DateTimeOffset_o right_08;
  unkbyte10 Var79;
  uint32_t auStack_708 [4];
  int32_t aiStack_6f8 [2];
  undefined4 uStack_6ee;
  uint16_t auStack_6ea [5];
  uint16_t auStack_6e0 [4];
  uint8_t auStack_6d8 [8];
  Il2CppMethodPointer pIStack_6d0;
  MethodInfo *pMStack_6c8;
  Il2CppMethodPointer apIStack_6c0 [3];
  MethodInfo *pMStack_6a8;
  Il2CppMethodPointer pIStack_6a0;
  MethodInfo *pMStack_698;
  void *apvStack_690 [2];
  char *apcStack_680 [2];
  Il2CppType IStack_670;
  void *pvStack_660;
  uint auStack_658 [2];
  Il2CppClass *apIStack_650 [4];
  void *apvStack_630 [3];
  Il2CppClass *pIStack_618;
  void *apvStack_610 [4];
  Il2CppClass **appIStack_5f0 [3];
  void *pvStack_5d8;
  undefined4 uStack_5ce;
  undefined2 uStack_5ca;
  Il2CppClass **ppIStack_5c8;
  void *pvStack_5c0;
  uint32_t auStack_5b8 [4];
  size_t sStack_5a8;
  void *apvStack_5a0 [2];
  uint32_t auStack_590 [8];
  uint16_t auStack_570 [4];
  uint16_t auStack_568 [4];
  uint8_t auStack_560 [8];
  Il2CppMethodPointer pIStack_558;
  MethodInfo *pMStack_550;
  Il2CppMethodPointer pIStack_548;
  MethodInfo *pMStack_540;
  Il2CppMethodPointer pIStack_538;
  MethodInfo *pMStack_530;
  Il2CppMethodPointer pIStack_528;
  MethodInfo *pMStack_520;
  void *apvStack_518 [2];
  char *apcStack_508 [2];
  void *pvStack_4f8;
  uint auStack_4f0 [2];
  void *pvStack_4e8;
  uint auStack_4e0 [2];
  Il2CppClass *apIStack_4d8 [4];
  void *pvStack_4b8;
  undefined4 uStack_4ae;
  undefined2 uStack_4aa;
  void *pvStack_4a8;
  Il2CppClass *pIStack_4a0;
  void *apvStack_498 [5];
  Il2CppClass **ppIStack_470;
  Il2CppRuntimeInterfaceOffsetPair *pIStack_468;
  void *pvStack_460;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *pAStack_458;
  Il2CppClass **ppIStack_450;
  void *pvStack_448;
  uint32_t auStack_440 [4];
  size_t sStack_430;
  void *pvStack_428;
  uint32_t auStack_420 [10];
  uint16_t auStack_3f8 [4];
  uint16_t auStack_3f0 [4];
  uint8_t auStack_3e8 [8];
  Il2CppMethodPointer pIStack_3e0;
  MethodInfo *pMStack_3d8;
  Il2CppMethodPointer pIStack_3d0;
  MethodInfo *pMStack_3c8;
  Il2CppMethodPointer pIStack_3c0;
  MethodInfo *pMStack_3b8;
  Il2CppMethodPointer pIStack_3b0;
  MethodInfo *pMStack_3a8;
  Il2CppRGCTXData IStack_3a0;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *pAStack_398;
  Il2CppType *pIStack_390;
  Il2CppType **ppIStack_388;
  Il2CppRGCTXData *pIStack_380;
  _union_148677 _Stack_378;
  uint32_t auStack_370 [2];
  uint16_t auStack_368 [8];
  Il2CppMethodPointer pIStack_358;
  InvokerMethod pIStack_350;
  undefined1 uStack_341;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *pAStack_340;
  Il2CppType *pIStack_338;
  Il2CppType **ppIStack_330;
  Il2CppRGCTXData *pIStack_328;
  _union_148677 _Stack_320;
  uint32_t auStack_318 [2];
  uint16_t auStack_310 [4];
  undefined1 auStack_308 [80];
  uint uStack_2b8;
  undefined1 uStack_2b1;
  Il2CppRGCTXData aIStack_2b0 [5];
  undefined8 uStack_288;
  undefined8 uStack_280;
  Il2CppRGCTXData aIStack_278 [2];
  long alStack_268 [2];
  Il2CppRGCTXData IStack_258;
  char acStack_24c [4];
  Il2CppRGCTXData aIStack_248 [3];
  long lStack_230;
  Il2CppRGCTXData aIStack_228 [3];
  long lStack_210;
  Il2CppRGCTXData aIStack_208 [2];
  long alStack_1f8 [3];
  Il2CppRGCTXData IStack_1e0;
  undefined1 uStack_1d1;
  long alStack_1d0 [5];
  long alStack_1a8 [3];
  Il2CppRGCTXData IStack_190;
  undefined8 uStack_188;
  char acStack_179 [9];
  il2cpp_array_size_t aiStack_170 [3];
  undefined8 *apuStack_158 [2];
  Il2CppRGCTXData IStack_148;
  undefined1 uStack_139;
  Il2CppRGCTXData IStack_138;
  Il2CppRGCTXData IStack_130;
  Il2CppRGCTXData IStack_128;
  Il2CppType *pIStack_120;
  undefined8 uStack_118;
  Il2CppRGCTXData IStack_110;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAStack_108;
  Il2CppRGCTXData IStack_100;
  Il2CppRGCTXData IStack_f8;
  Il2CppRGCTXData IStack_f0;
  Il2CppRGCTXData IStack_e8;
  Il2CppRGCTXData IStack_d8;
  undefined4 uStack_ce;
  undefined2 uStack_ca;
  Il2CppRGCTXData IStack_c8;
  Il2CppRGCTXData IStack_c0;
  Il2CppRGCTXData IStack_b8;
  Il2CppRGCTXData IStack_b0;
  char cStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  MethodInfo_3316900 *pMStack_90;
  Il2CppRGCTXData IStack_88;
  Il2CppRGCTXData IStack_80;
  Il2CppRGCTXData IStack_78;
  char **ppcStack_70;
  Il2CppRGCTXData IStack_60;
  Il2CppRGCTXData IStack_58;
  Il2CppRGCTXData IStack_48;
  undefined4 uStack_3c;
  MethodInfo_37EC980 *method_07;
  MethodInfo_37EC980 *method_08;
  MethodInfo_37EC980 *method_09;
  MethodInfo_37EC980 *method_10;
  MethodInfo_37EC980 *method_11;
  
  now.fields._8_8_ = in_RCX;
  if (g_data_057aeac2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aeac2 = '\x01';
    now.fields._8_8_ = in_RCX;
  }
  __this_00 = (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)
              **(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar51 = (System_String_o *)0x0;
  bVar29 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar29 == '\0') {
    return;
  }
  if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) == 0) {
label_044c45d7:
    il2cpp_runtime_helper_022b2c90();
    CVar78 = ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync
                       (__this_00,pSVar51,onComplete,now.fields._8_8_);
    auVar25 = CVar78.fields._0_12_;
    CVar78.fields._12_4_ = 0;
    CVar78.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar25._0_8_;
    CVar78.fields.token = auVar25._8_2_;
    CVar78.fields._10_2_ = auVar25._10_2_;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(CVar78,(MethodInfo *)0x0);
    return;
  }
  if (*(long *)(**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20) == 0) {
    return;
  }
  pSVar51 = (System_String_o *)0x0;
  __this_00 = (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)accountId;
  bVar29 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
  if ((char)bVar29 != '\0') {
    return;
  }
  if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) == 0) goto label_044c45d7;
  lVar30 = *(long *)(**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20);
  __this_00 = (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *)0x0;
  if (lVar30 == 0) goto label_044c45d7;
  now_00.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar30 + 0x28))->method;
  if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              ((System_Collections_Generic_Dictionary_object__object__o *)now_00.fields._8_8_,
               (Il2CppObject *)accountId,
               *(MethodInfo_3106630 **)(*(long *)(*(long *)(MethodInfo_Void_Clear + 0x20) + 0xc0) + 0x68));
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_3c = now.fields._8_4_;
  IStack_48.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(in_R8.method)->klass)->fields + 0xc0) + 0x70);
  IVar56 = in_R8;
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    IStack_58 = (Il2CppRGCTXData)0x3416634;
    lVar30 = il2cpp_runtime_helper_023009c0();
  }
  IStack_58 = (Il2CppRGCTXData)0x341663c;
  now_01.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar30);
  IVar31 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(in_R8.method)->klass)->fields + 0xc0) + 0x78))->method;
  IStack_58 = (Il2CppRGCTXData)0x3416656;
  IVar50.rgctxDataDummy = now_01.fields._8_8_;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_object__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)
             now_01.fields._8_8_,(MethodInfo_27BB8C0 *)IVar31.method);
  IVar75 = onResult;
  if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    (now_01.fields._8_8_)->invoker_method = (InvokerMethod)now_00.fields._8_8_;
    IStack_58 = (Il2CppRGCTXData)0x341666f;
    il2cpp_runtime_helper_022b4080(&(now_01.fields._8_8_)->invoker_method,now_00.fields._8_8_);
    unaff_R13 = &(now_01.fields._8_8_)->name;
    (now_01.fields._8_8_)->name = (char *)accountId;
    IStack_58 = (Il2CppRGCTXData)0x3416685;
    IVar31 = (Il2CppRGCTXData)accountId;
    il2cpp_runtime_helper_022b4080(unaff_R13);
    if (onResult.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar50 = (Il2CppRGCTXData)(now_00.fields._8_8_)->return_type;
    if (IVar50.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      IVar31.method = (MethodInfo *)*unaff_R13;
      now.fields._8_8_ =
           (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(in_R8.method)->klass)->fields + 0xc0) + 0x48))->method;
      IStack_58 = (Il2CppRGCTXData)0x34166b8;
      bVar29 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                         ((System_Collections_Generic_Dictionary_object__object__o *)IVar50.method,
                          (Il2CppObject *)IVar31.method,(Il2CppObject **)&IStack_48.method,
                          (MethodInfo_3106990 *)now.fields._8_8_);
      if ((char)bVar29 == '\0') {
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(in_R8.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          IStack_58 = (Il2CppRGCTXData)0x34166d9;
          lVar30 = il2cpp_runtime_helper_023009c0();
        }
        IStack_58 = (Il2CppRGCTXData)0x34166e1;
        accountId = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar30);
        IVar31 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(in_R8.method)->klass)->fields + 0xc0) + 0x88))->method;
        IStack_58 = (Il2CppRGCTXData)0x34166fe;
        ApplicationManagers_Api_AottgQueryCache_Entry_object__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)accountId,
                   (MethodInfo_31EF570 *)IVar31.method);
        IVar50 = (Il2CppRGCTXData)(now_00.fields._8_8_)->return_type;
        IStack_48.rgctxDataDummy = accountId;
        if (IVar50.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_034168f2;
        IVar31.method = (MethodInfo *)*unaff_R13;
        IStack_58 = (Il2CppRGCTXData)0x341672e;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)IVar50.method,
                   (Il2CppObject *)IVar31.method,(Il2CppObject *)accountId,
                   *(MethodInfo_3104DF0 **)
                    (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(in_R8.method)->klass)->fields + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppRGCTXData)(now_00.fields._8_8_)->name;
      if (now.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar31 = (Il2CppRGCTXData)(now.fields._8_8_)->return_type;
        IVar50 = (Il2CppRGCTXData)((now.fields._8_8_)->field8_0x40).genericMethod;
        IStack_58 = (Il2CppRGCTXData)0x3416746;
        auVar76 = (*(code *)(now.fields._8_8_)->name)();
        if ((char)uStack_3c == '\0') {
          now.fields._8_8_ = (void *)(auVar76._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_3316900 **)
                   (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                        &(in_R8.method)->klass)->fields + 0xc0) + 0x98);
          IStack_58 = (Il2CppRGCTXData)0x3416774;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar76._0_8_;
          IVar31 = IStack_48;
          IVar50 = now_00.fields._8_8_;
          IVar56 = onResult;
          bVar29 = ApplicationManagers_Api_AottgQueryCache_object__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)now_00.fields._8_8_,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)
                              IStack_48.method,now,
                              (System_Action_AottgQueryResult_TValue___o *)onResult.method,in_R9);
          if ((char)bVar29 != '\0') {
            return;
          }
        }
        if (IStack_48.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          if (*(char *)&(IStack_48.method)->field7_0x38 == '\0') {
            IStack_58 = (Il2CppRGCTXData)0x34167c4;
            IVar31.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                           (*(MethodInfo_331B2F0 **)
                             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                    *)&(in_R8.method)->klass)->fields + 0xc0) + 200));
          }
          else {
            IStack_58 = (Il2CppRGCTXData)0x34167ab;
            IVar31.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                           ((Il2CppObject *)(IStack_48.method)->name,
                            *(MethodInfo_331B450 **)
                             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                    *)&(in_R8.method)->klass)->fields + 0xc0) + 0xa8));
          }
          IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(onResult.klass)->_1)[8].method;
          IStack_58 = (Il2CppRGCTXData)0x34167d6;
          (*(code *)(onResult.method)->name)
                    (IVar50.rgctxDataDummy,IVar31.rgctxDataDummy,(onResult.method)->return_type);
          if ((IStack_48.rgctxDataDummy != (Il2CppRGCTXData *)0x0) &&
             (IVar50 = (Il2CppRGCTXData)(IStack_48.method)->invoker_method,
             IVar50.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(in_R8.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar50.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = (Il2CppArrayBounds *)(IVar50.method)->invoker_method;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar50.method)->name;
              IVar31 = onResult;
              if (uVar4 < (uint)pIVar6[1].lower_bound) {
                now.fields._8_4_ = uVar4 + 1;
                now.fields._12_4_ = 0;
                *(uint *)&(IVar50.method)->name = now.fields._8_4_;
                IVar50.rgctxDataDummy = &pIVar6[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar6[2].length + (int)uVar4))->klass = (Il2CppClass *)onResult;
                IStack_58 = (Il2CppRGCTXData)0x3416838;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                IStack_58 = (Il2CppRGCTXData)0x341685e;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar50.method,
                           (Il2CppObject *)onResult.method,
                           *(MethodInfo_362C220 **)
                            (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x70));
              }
              if (IStack_48.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
                if (*(char *)((long)&(IStack_48.method)->field7_0x38 + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&(IStack_48.method)->field7_0x38 + 2) = 1;
                pIVar6 = (Il2CppArrayBounds *)(now_00.fields._8_8_)->invoker_method;
                now_00.fields._8_8_ = (MethodInfo *)*unaff_R13;
                lVar30 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(in_R8.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
                  IStack_58 = (Il2CppRGCTXData)0x341689e;
                  lVar30 = il2cpp_runtime_helper_023009c0();
                }
                IStack_58 = (Il2CppRGCTXData)0x34168a6;
                IVar75.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar30);
                now.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(in_R8.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                IStack_58 = (Il2CppRGCTXData)0x34168cd;
                IVar31.rgctxDataDummy = now_01.fields._8_8_;
                IVar50.rgctxDataDummy = IVar75.rgctxDataDummy;
                System_Action_object____ctor();
                accountId = (System_String_o *)0x0;
                if (pIVar6 != (Il2CppArrayBounds *)0x0) {
                  IStack_58 = (Il2CppRGCTXData)0x34168e3;
                  (**(code **)&pIVar6[1].lower_bound)
                            (pIVar6[4].length,now_00.fields._8_8_,IVar75.rgctxDataDummy,
                             *(undefined8 *)&pIVar6[2].lower_bound);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_034168f2:
  IStack_58 = (Il2CppRGCTXData)0x34168f7;
  il2cpp_runtime_helper_022b2c90();
  IVar48.rgctxDataDummy = now.fields._8_8_ & 0xffffffff;
  IVar63 = IVar31;
  plVar67 = (long *)IVar50;
  pMStack_90 = in_R9;
  IStack_88 = IVar56;
  IStack_80.rgctxDataDummy = now_01.fields._8_8_;
  IStack_78 = IVar75;
  ppcStack_70 = unaff_R13;
  IStack_60 = now_00.fields._8_8_;
  IStack_58 = (Il2CppRGCTXData)accountId;
  if (g_data_057a8ce4 == '\0') {
    IStack_b0 = (Il2CppRGCTXData)0x3416939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    IStack_b0 = (Il2CppRGCTXData)0x3416945;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    IStack_b0 = (Il2CppRGCTXData)0x3416951;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar67 = &TypeInfo_TimeSpan;
    IStack_b0 = (Il2CppRGCTXData)0x341695d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ce4 = '\x01';
  }
  cStack_a8 = '\0';
  uStack_a7 = 0;
  uStack_a0 = 0;
  now_00.fields._8_8_ = IVar48.rgctxDataDummy;
  if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar31.method)->field7_0x38 == '\0') {
label_03416a29:
      if (*(char *)((long)&(IVar31.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar50.method)->klass)->fields;
      if (lVar30 != 0) {
        cStack_a8 = *(char *)(lVar30 + 0x18);
        uStack_a0 = *(undefined8 *)(lVar30 + 0x20);
        if (cStack_a8 == '\0') {
          return;
        }
        accountId = (System_String_o *)(IVar31.method)->return_type;
        Var26 = *(unkuint10 *)&(IVar31.method)->return_type;
        in_R8._2_6_ = 0;
        in_R8._0_2_ = *(ushort *)&(IVar31.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          IStack_b0 = (Il2CppRGCTXData)0x3416a79;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        IStack_b0 = (Il2CppRGCTXData)0x3416a8d;
        left_00.fields._8_8_ = IVar48.rgctxDataDummy;
        left_00.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX.rgctxDataDummy;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var26;
        now.fields._8_8_ = in_R8;
        plVar67 = (long *)extraout_RDX;
        now_00.fields._8_8_ =
             (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar50.method)->klass)->fields;
        IVar63 = IVar48;
        if (lVar30 != 0) {
          cStack_a8 = *(char *)(lVar30 + 0x18);
          uStack_a0 = *(undefined8 *)(lVar30 + 0x20);
          IStack_b0 = (Il2CppRGCTXData)0x3416abf;
          __this_01.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_01.fields._0_8_ = &cStack_a8;
          in_R8 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_01,method_07);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            IStack_b0 = (Il2CppRGCTXData)0x3416ada;
            il2cpp_runtime_helper_02337ed0();
          }
          accountId = (System_String_o *)0x0;
          IStack_b0 = (Il2CppRGCTXData)0x3416ae9;
          bVar29 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)now_00.fields._8_8_,(System_TimeSpan_o)in_R8,
                              (MethodInfo *)0x0);
          if ((char)bVar29 == '\0') {
            return;
          }
          plVar67 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar31.method)->klass)->fields;
          IVar63 = (Il2CppRGCTXData)0x1;
          IStack_b0 = (Il2CppRGCTXData)0x3416b12;
          pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar67,1,
                               (MethodInfo_331B520 *)
                               pMStack_90->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (IStack_88.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
label_03416b1c:
            IStack_b0 = (Il2CppRGCTXData)0x3416b2a;
            (*(code *)(IStack_88.method)->name)
                      (((Il2CppRGCTXData *)&(IStack_88.klass)->_1)[8].rgctxDataDummy,pAVar32,
                       (IStack_88.method)->return_type);
            return;
          }
        }
      }
    }
    else {
      accountId = (System_String_o *)(IVar31.method)->return_type;
      Var26 = *(unkuint10 *)&(IVar31.method)->return_type;
      now.fields._10_6_ = 0;
      now.fields._offsetMinutes = *(ushort *)&(IVar31.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        IStack_b0 = (Il2CppRGCTXData)0x341699f;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      IStack_b0 = (Il2CppRGCTXData)0x34169b3;
      left.fields._8_8_ = IVar48.rgctxDataDummy;
      left.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX.rgctxDataDummy;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var26;
      IVar63.rgctxDataDummy = IVar48.rgctxDataDummy;
      plVar67 = (long *)extraout_RDX;
      in_R8 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar50.method)->klass)->fields;
      if (lVar30 != 0) {
        accountId = *(System_String_o **)(lVar30 + 0x10);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          IStack_b0 = (Il2CppRGCTXData)0x34169e0;
          il2cpp_runtime_helper_02337ed0();
        }
        IStack_b0 = (Il2CppRGCTXData)0x34169ed;
        IVar63 = (Il2CppRGCTXData)accountId;
        plVar67 = (long *)in_R8;
        bVar29 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)in_R8,(System_TimeSpan_o)accountId,(MethodInfo *)0x0);
        if ((char)bVar29 == '\0') goto label_03416a29;
        plVar67 = (long *)(IVar31.method)->name;
        IVar63 = (Il2CppRGCTXData)0x1;
        IStack_b0 = (Il2CppRGCTXData)0x3416a16;
        pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar67,1,
                             (MethodInfo_331B380 *)
                             pMStack_90->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (IStack_88.rgctxDataDummy != (Il2CppRGCTXData *)0x0) goto label_03416b1c;
        now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  IStack_b0 = (Il2CppRGCTXData)0x3416b47;
  il2cpp_runtime_helper_022b2c90();
  IVar75 = now.fields._8_8_;
  now_01.fields._8_8_ = IVar63;
  IStack_c8 = IVar31;
  IStack_c0 = IVar50;
  IStack_b8 = in_R8;
  IStack_b0 = extraout_RDX;
  if (g_data_057a8ce5 == '\0') {
    IStack_e8 = (Il2CppRGCTXData)0x3416b7c;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ce5 = '\x01';
  }
  IStack_d8.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  IVar31 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->return_type;
  pAVar33 = extraout_RDX_00;
  if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
label_03416ea6:
    IStack_e8 = (Il2CppRGCTXData)0x3416eab;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    IVar75 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now.fields._8_8_)->klass)->fields + 0xc0) + 0x48))->method;
    IStack_e8 = (Il2CppRGCTXData)0x3416bb5;
    now_01.fields._8_8_ = IVar63;
    bVar29 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_object__object__o *)IVar31.method,
                        (Il2CppObject *)IVar63.method,(Il2CppObject **)&IStack_d8.method,
                        (MethodInfo_3106990 *)IVar75.method);
    if ((char)bVar29 == '\0') {
      return;
    }
    if (IStack_d8.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    *(undefined1 *)((long)&(IStack_d8.method)->field7_0x38 + 2) = 0;
    if (extraout_RDX_00 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      now_01.fields._8_8_ =
           (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(now.fields._8_8_)->klass)->fields + 0xc0) + 0x118))->method;
      IStack_e8 = (Il2CppRGCTXData)0x3416bf5;
      IVar31 = "unknown_error";
      pAVar33 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error".method,(MethodInfo_331AB10 *)now_01.fields._8_8_);
      if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_03416ea6;
    }
    IVar31 = IStack_d8;
    if (IStack_d8.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    if ((char)(pAVar33->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)&(IStack_d8.method)->field7_0x38 = 1;
      now_01.fields._8_8_ = (Il2CppRGCTXData)(pAVar33->fields)._Value_k__BackingField;
      (IStack_d8.method)->name = (char *)now_01.fields._8_8_;
      IStack_e8 = (Il2CppRGCTXData)0x3416c33;
      il2cpp_runtime_helper_022b4080(&(IStack_d8.method)->name);
      IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      if (IStack_d8.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
        *(int32_t *)&(IStack_d8.method)->klass = 0;
        *(int32_t *)((long)&(IStack_d8.method)->klass + 4) = 0;
        IVar31.rgctxDataDummy = &(IStack_d8.method)->klass;
        now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
        IStack_e8 = (Il2CppRGCTXData)0x3416c54;
        il2cpp_runtime_helper_022b4080();
        IVar50 = IStack_d8;
        IVar75 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
        if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          now_01.fields._8_8_ = (Il2CppRGCTXData)(IVar75.method)->return_type;
          IVar31 = *(Il2CppRGCTXData *)&(IVar75.method)->field8_0x40;
          IStack_e8 = (Il2CppRGCTXData)0x3416c71;
          Var79 = (*(code *)(IVar75.method)->name)();
          IVar63 = IVar50;
          if (IVar50.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
            *(unkbyte10 *)&(IVar50.method)->return_type = Var79;
            *(undefined2 *)((long)&(IVar50.method)->parameters + 6) = uStack_ca;
            *(undefined4 *)((long)&(IVar50.method)->parameters + 2) = uStack_ce;
            if (IStack_d8.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
              IVar31 = (Il2CppRGCTXData)(IStack_d8.method)->name;
              now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
              IStack_e8 = (Il2CppRGCTXData)0x3416cbd;
              plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                          ((Il2CppObject *)IVar31.method,0,
                                           *(MethodInfo_331B380 **)
                                            (*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x100))
              ;
              goto joined_r0x03416cc8;
            }
          }
        }
      }
      goto label_03416ea6;
    }
    if (*(char *)&(IStack_d8.method)->field7_0x38 != '\0') {
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &((MethodInfo *)plVar67)->klass)->fields;
      if (lVar30 != 0) {
        if (*(char *)(lVar30 + 0x28) == '\0') goto label_03416e21;
        now_01.fields._8_8_ = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
        *(Il2CppRGCTXData *)
         &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IStack_d8.method)->klass)->fields
             = now_01.fields._8_8_;
        IVar31.rgctxDataDummy = &(IStack_d8.method)->klass;
        IStack_e8 = (Il2CppRGCTXData)0x3416ddd;
        il2cpp_runtime_helper_022b4080();
        if (IStack_d8.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          IVar31 = (Il2CppRGCTXData)(IStack_d8.method)->name;
          now_01.fields._8_8_ = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
          IStack_e8 = (Il2CppRGCTXData)0x3416e0b;
          plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                      ((Il2CppObject *)IVar31.method,(System_String_o *)now_01.fields._8_8_,
                                       *(MethodInfo_331B660 **)
                                        (*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x140))
          ;
          IVar50 = IVar63;
joined_r0x03416cc8:
          IVar63 = IVar50;
          if (IStack_d8.rgctxDataDummy != (Il2CppRGCTXData *)0x0) goto label_03416cce;
        }
      }
      goto label_03416ea6;
    }
label_03416e21:
    *(undefined2 *)&(IStack_d8.method)->field7_0x38 = 0x100;
    (IStack_d8.method)->name = (char *)0x0;
    now_01.fields._8_8_ = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    *(Il2CppRGCTXData *)
     &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IStack_d8.method)->klass)->fields =
         now_01.fields._8_8_;
    IVar31.rgctxDataDummy = &(IStack_d8.method)->klass;
    IStack_e8 = (Il2CppRGCTXData)0x3416e41;
    il2cpp_runtime_helper_022b4080();
    IVar50 = IStack_d8;
    IVar75 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
    if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    now_01.fields._8_8_ = (Il2CppRGCTXData)(IVar75.method)->return_type;
    IVar31 = *(Il2CppRGCTXData *)&(IVar75.method)->field8_0x40;
    IStack_e8 = (Il2CppRGCTXData)0x3416e5a;
    Var79 = (*(code *)(IVar75.method)->name)();
    IVar63 = IVar50;
    if (IVar50.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    *(unkbyte10 *)&(IVar50.method)->return_type = Var79;
    *(undefined4 *)((long)&(IVar50.method)->parameters + 2) = uStack_ce;
    *(undefined2 *)((long)&(IVar50.method)->parameters + 6) = uStack_ca;
    IVar31 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
    IStack_e8 = (Il2CppRGCTXData)0x3416e95;
    plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((System_String_o *)IVar31.method,0,
                                 *(MethodInfo_331B520 **)
                                  (*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x108))
    ;
    if (IStack_d8.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
label_03416cce:
    IVar31 = (Il2CppRGCTXData)
             ((System_Collections_Generic_Dictionary_object__object__Fields *)
             &(IStack_d8.method)->invoker_method)->_buckets;
    IVar63 = IVar50;
    if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    now_01.fields._8_8_ =
         (Il2CppRGCTXData)
         ((Il2CppRGCTXData *)
         (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                              &(now.fields._8_8_)->klass)->fields + 0xc0) + 0x148))->method;
    IStack_e8 = (Il2CppRGCTXData)0x3416cf2;
    now.fields._8_8_ =
         (MethodInfo *)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)IVar31.method,
                    (MethodInfo_362E340 *)now_01.fields._8_8_);
    if ((IStack_d8.rgctxDataDummy == (Il2CppRGCTXData *)0x0) ||
       (pSVar7 = ((System_Collections_Generic_Dictionary_object__object__Fields *)
                 &(IStack_d8.method)->invoker_method)->_buckets, pSVar7 == (System_Int32_array *)0x0))
    goto label_03416ea6;
    piVar1 = (int *)((long)&pSVar7->max_length + 4);
    *piVar1 = *piVar1 + 1;
    iVar5 = (int32_t)pSVar7->max_length;
    *(undefined4 *)&pSVar7->max_length = 0;
    if (0 < iVar5) {
      IVar31 = (Il2CppRGCTXData)pSVar7->bounds;
      now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      IVar75.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      IStack_e8 = (Il2CppRGCTXData)0x3416d2f;
      System_Array__Clear((System_Array_o *)IVar31.method,0,iVar5,(MethodInfo *)0x0);
    }
    if (now.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    if ((int)(now.fields._8_8_)->name < 1) {
      return;
    }
    pAVar33 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0;
    IVar63.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pAVar71 = pAVar33;
    if (((ulong)(now.fields._8_8_)->name & 0xffffffff) != 0) {
      do {
        pAVar33 = *(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o **)
                   ((long)now.fields._8_8_ + (long)IVar63.rgctxDataDummy * 8 + 0x20);
        if (pAVar33 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
          if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_03416ea6;
          IVar31 = (Il2CppRGCTXData)pAVar33[1].fields._Value_k__BackingField;
          IStack_e8 = (Il2CppRGCTXData)0x3416da4;
          now_01.fields._8_8_ = (Il2CppRGCTXData)plVar67;
          (*(code *)(pAVar33->fields)._Value_k__BackingField)(IVar31.rgctxDataDummy,plVar67,pAVar33[1].klass);
          pAVar71 = pAVar33;
        }
        pAVar33 = pAVar71;
        IVar63.rgctxDataDummy = (void *)((long)&(IVar63.method)->methodPointer + 1);
        IVar75 = (Il2CppRGCTXData)(long)(int)*(uint *)&(now.fields._8_8_)->name;
        if ((long)IVar75.rgctxDataDummy <= (long)IVar63.rgctxDataDummy) {
          return;
        }
        pAVar71 = pAVar33;
      } while (IVar63.rgctxDataDummy < (Il2CppRGCTXData *)(ulong)*(uint *)&(now.fields._8_8_)->name);
    }
  }
  IStack_e8.rgctxDataDummy =
       ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
  ;
  auVar76 = il2cpp_runtime_helper_022b2ca0();
  pcVar35 = auVar76._8_8_;
  uStack_118 = auVar76._0_8_;
  IVar50 = IVar56;
  IStack_110 = IVar63;
  pAStack_108 = pAVar33;
  IStack_100 = now_00.fields._8_8_;
  IStack_f8 = now.fields._8_8_;
  IStack_f0 = (Il2CppRGCTXData)plVar67;
  IStack_e8 = (Il2CppRGCTXData)accountId;
  if (g_data_057a8ce6 == '\0') {
    pIStack_120 = (Il2CppType *)0x3416edf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pIStack_120 = (Il2CppType *)0x3416eeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8ce6 = '\x01';
  }
  lVar30 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar56.method)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    pIStack_120 = (Il2CppType *)0x3416f0e;
    lVar30 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_120 = (Il2CppType *)0x3416f16;
  pIVar34 = (Il2CppType *)il2cpp_runtime_helper_023052d0(lVar30);
  pIStack_120 = (Il2CppType *)0x3416f2d;
  (*(code *)**(undefined8 **)
              (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                   &(IVar56.method)->klass)->fields + 0xc0) + 8))(pIVar34);
  (IVar31.method)->return_type = pIVar34;
  pIStack_120 = (Il2CppType *)0x3416f3d;
  il2cpp_runtime_helper_022b4080(&(IVar31.method)->return_type);
  now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
  pIStack_120 = (Il2CppType *)0x3416f47;
  System_Object___ctor((Il2CppObject *)IVar31.method,(MethodInfo *)0x0);
  if (now_01.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
    pIStack_120 = (Il2CppType *)0x3417126;
    uVar37 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pIStack_120 = (Il2CppType *)0x341712e;
    now_01.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(uVar37);
    pIStack_120 = (Il2CppType *)0x341713d;
    pSVar51 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pIStack_120 = (Il2CppType *)0x341714a;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)now_01.fields._8_8_,pSVar51,(MethodInfo *)0x0);
    pIStack_120 = (Il2CppType *)0x3417155;
    now.fields._8_8_ = IVar56;
    now_00.fields._8_8_ = now_01.fields._8_8_;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
    if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      (IVar31.method)->invoker_method = (InvokerMethod)now_01.fields._8_8_;
      pIStack_120 = (Il2CppType *)0x3416f70;
      il2cpp_runtime_helper_022b4080(&(IVar31.method)->invoker_method,now_01.fields._8_8_);
      if (pcVar35 == (char *)0x0) {
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar56.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pIStack_120 = (Il2CppType *)0x3416f96;
          lVar30 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar30 + 0xe4) == 0) {
          pIStack_120 = (Il2CppType *)0x3416fa7;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar56.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pIStack_120 = (Il2CppType *)0x3416fc7;
          lVar30 = il2cpp_runtime_helper_023009c0(lVar30);
        }
        pcVar35 = *(char **)(*(long *)(lVar30 + 0xb8) + 8);
        if (pcVar35 == (char *)0x0) {
          lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar56.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pIStack_120 = (Il2CppType *)0x3416ff8;
            lVar30 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar30 + 0xe4) == 0) {
            pIStack_120 = (Il2CppType *)0x3417009;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar56.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pIStack_120 = (Il2CppType *)0x3417029;
            il2cpp_runtime_helper_023009c0(lVar30);
          }
          pIStack_120 = (Il2CppType *)0x3417042;
          pcVar35 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pIStack_120 = (Il2CppType *)0x3417061;
          System_Func_DateTimeOffset____ctor();
          lVar30 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar56.method)->klass)->fields + 0xc0);
          lVar36 = *(long *)(lVar30 + 0x28);
          if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
            pIStack_120 = (Il2CppType *)0x3417081;
            lVar36 = il2cpp_runtime_helper_023009c0(lVar36);
            lVar30 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar56.method)->klass)->fields + 0xc0);
          }
          *(char **)(*(long *)(lVar36 + 0xb8) + 8) = pcVar35;
          lVar30 = *(long *)(lVar30 + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pIStack_120 = (Il2CppType *)0x34170ac;
            lVar30 = il2cpp_runtime_helper_023009c0(lVar30);
          }
          pIStack_120 = (Il2CppType *)0x34170bf;
          il2cpp_runtime_helper_022b4080(*(long *)(lVar30 + 0xb8) + 8,pcVar35);
        }
      }
      (IVar31.method)->name = pcVar35;
      pIStack_120 = (Il2CppType *)0x34170cf;
      il2cpp_runtime_helper_022b4080(&(IVar31.method)->name,pcVar35);
      if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pIStack_120 = (Il2CppType *)0x34170ec;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar75 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      *(Il2CppRGCTXData *)
       &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar31.method)->klass)->fields =
           (void *)IVar75;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar31.method)->klass,IVar75.rgctxDataDummy);
      return;
    }
  }
  pIStack_120 = (Il2CppType *)0x341715a;
  il2cpp_runtime_helper_022b2c90();
  lVar30 = *(long *)(extraout_RDX_01 + 0x20);
  lVar36 = *(long *)(*(long *)(lVar30 + 0xc0) + 0x38);
  uVar55 = (ulong)*(uint *)(lVar36 + 0xfc);
  lVar42 = -(uVar55 + 0xf & 0xfffffffffffffff0);
  apuStack_158[1] = (undefined8 *)((long)apuStack_158 + lVar42 + 8U);
  pIVar8 = (now_00.fields._8_8_)->return_type;
  now_00.fields._8_8_ = now.fields._8_8_;
  if (-1 < *(int *)(lVar36 + 0x28)) {
    now_00.fields._8_8_ = &IStack_148;
  }
  IStack_148 = now.fields._8_8_;
  IStack_138 = now_01.fields._8_8_;
  IStack_130 = IVar75;
  IStack_128 = IVar56;
  pIStack_120 = pIVar34;
  *(undefined8 *)((long)apuStack_158 + lVar42) = 0x34171af;
  puVar60 = apuStack_158[1];
  memcpy(apuStack_158[1],now_00.fields._8_8_,uVar55);
  if (pIVar8 != (Il2CppType *)0x0) {
    puVar60 = *(undefined8 **)(*(long *)(lVar30 + 0xc0) + 0x40);
    uVar37 = *puVar60;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar30 + 0xc0) + 0x38) + 0x28)) {
      apuStack_158[1] = (undefined8 *)*apuStack_158[1];
    }
    pcVar9 = (code *)puVar60[2];
    *(undefined8 *)((long)apuStack_158 + lVar42) = 0x34171e1;
    (*pcVar9)(uVar37,puVar60,pIVar8,apuStack_158 + 1,&uStack_139);
    return;
  }
  *(undefined8 *)((long)apuStack_158 + lVar42) = 0x34171f4;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppType ***)((long)apuStack_158 + lVar42) = &pIStack_120;
  *(long *)((long)aiStack_170 + lVar42 + 0x10) = lVar30;
  *(undefined8 *)((long)aiStack_170 + lVar42 + 8) = 0;
  *(char **)((long)aiStack_170 + lVar42) = pcVar35;
  *(undefined8 **)(acStack_179 + lVar42 + 1) = apuStack_158[1];
  ((Il2CppRGCTXData *)((long)&IStack_190 + lVar42))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  lVar30 = *(long *)(extraout_RDX_02 + 0x20);
  lVar36 = *(long *)(lVar30 + 0xc0);
  uVar55 = (ulong)*(uint *)(*(long *)(lVar36 + 0x38) + 0xfc);
  puVar64 = (undefined8 *)((long)alStack_1a8 + (lVar42 - (uVar55 + 0xf & 0xfffffffffffffff0)));
  *(undefined8 *)((long)&uStack_188 + lVar42) = 0;
  lVar10 = puVar60[5];
  if (-1 < *(int *)(*(long *)(lVar36 + 0x38) + 0x28)) {
    now_00.fields._8_8_ = (void *)((long)&IStack_190 + lVar42);
  }
  puVar64[-1] = 0x3417261;
  puVar60 = puVar64;
  memcpy(puVar64,now_00.fields._8_8_,uVar55);
  if (lVar10 != 0) {
    puVar60 = *(undefined8 **)(*(long *)(lVar30 + 0xc0) + 0x48);
    uVar37 = *puVar60;
    puVar39 = puVar64;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar30 + 0xc0) + 0x38) + 0x28)) {
      puVar39 = (undefined8 *)*puVar64;
    }
    *(undefined8 **)((long)alStack_1a8 + lVar42) = puVar39;
    *(long *)((long)alStack_1a8 + lVar42 + 8) = (long)&uStack_188 + lVar42;
    pcVar9 = (code *)puVar60[2];
    puVar64[-1] = 0x341729c;
    (*pcVar9)(uVar37,puVar60,lVar10,(long)alStack_1a8 + lVar42,acStack_179 + lVar42);
    if (acStack_179[lVar42] != '\0') {
      uVar37 = *(undefined8 *)((long)&uStack_188 + lVar42);
      lVar30 = *(long *)(*(long *)(*(long *)(*(long *)(extraout_RDX_02 + 0x20) + 0xc0) + 0x58) + 0x80);
      puVar64[-1] = 0x34172c6;
      il2cpp_runtime_helper_02338550(uVar37,lVar30 + 0xc0);
    }
    return;
  }
  puVar64[-1] = 0x34172e2;
  uVar37 = il2cpp_runtime_helper_022b2c90();
  puVar64[-1] = uVar37;
  lVar36 = puVar60[5];
  if (lVar36 != 0) {
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                     &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x60))();
    return;
  }
  puVar64[-2] = 0x3417314;
  il2cpp_runtime_helper_022b2c90();
  puVar64[-2] = (long)apuStack_158 + lVar42;
  puVar64[-3] = 0;
  puVar64[-4] = extraout_RDX_02;
  puVar64[-5] = puVar64;
  ((Il2CppRGCTXData *)(puVar64 + -7))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  lVar42 = *(long *)(extraout_RDX_03 + 0x20);
  lVar10 = *(long *)(*(long *)(lVar42 + 0xc0) + 0x38);
  uVar59 = (ulong)*(uint *)(lVar10 + 0xfc);
  uVar55 = uVar59 + 0xf & 0xfffffffffffffff0;
  puVar60 = (undefined8 *)((long)puVar64 + (-0x40 - uVar55));
  lVar36 = *(long *)(lVar36 + 0x28);
  if (-1 < *(int *)(lVar10 + 0x28)) {
    now_00.fields._8_8_ = puVar64 + -7;
  }
  puVar60[-1] = 0x341736f;
  puVar39 = puVar60;
  memcpy(puVar60,now_00.fields._8_8_,uVar59);
  uVar53 = (undefined4)uVar55;
  if (lVar36 != 0) {
    puVar39 = *(undefined8 **)(*(long *)(lVar42 + 0xc0) + 0x68);
    uVar37 = *puVar39;
    puVar61 = puVar60;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar42 + 0xc0) + 0x38) + 0x28)) {
      puVar61 = (undefined8 *)*puVar60;
    }
    puVar64[-8] = puVar61;
    pcVar9 = (code *)puVar39[2];
    puVar60[-1] = 0x34173a1;
    (*pcVar9)(uVar37,puVar39,lVar36,puVar64 + -8,(long)puVar64 + -0x29);
    return;
  }
  puVar60[-1] = 0x34173b1;
  il2cpp_runtime_helper_022b2c90();
  puVar60[-1] = puVar64 + -2;
  puVar60[-2] = lVar42;
  puVar60[-3] = 0;
  ((Il2CppRGCTXData *)(puVar60 + -4))->method = (MethodInfo *)IVar31;
  puVar60[-5] = lVar30;
  puVar60[-6] = puVar60;
  *(undefined4 *)((long)puVar60 + -100) = uVar53;
  puVar60[-9] = puVar39;
  ((Il2CppRGCTXData *)(puVar60 + -0x12))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  pSVar72 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar50.method)->klass;
  lVar30 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar50.method)->klass)->fields + 0xc0);
  uVar55 = (ulong)*(uint *)(*(long *)(lVar30 + 0x38) + 0xfc);
  uVar59 = (ulong)*(uint *)(*(long *)(lVar30 + 0xa0) + 0xfc);
  puVar60[-0xe] = uVar55;
  puVar64 = (undefined8 *)((long)puVar60 + (-0x98 - (uVar55 + 0xf & 0xfffffffffffffff0)));
  puVar60[-0xf] = uVar59;
  uVar55 = uVar59 + 0xf & 0xfffffffffffffff0;
  lVar36 = (long)puVar64 - uVar55;
  puVar60[-0x10] = lVar36;
  puVar60[-7] = 0;
  lVar30 = *(long *)(lVar30 + 0x70);
  bVar2 = *(byte *)(lVar30 + 0x135);
  puVar60[-0x11] = extraout_RDX_04;
  if ((bVar2 & 1) == 0) {
    *(undefined8 *)(lVar36 + -8) = 0x341745a;
    lVar30 = il2cpp_runtime_helper_023009c0();
  }
  iVar54 = (int)uVar55;
  *(undefined8 *)(lVar36 + -8) = 0x3417462;
  puVar38 = (undefined8 *)il2cpp_runtime_helper_023052d0(lVar30);
  now.fields._8_8_ =
       (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x78))->method;
  IVar56 = *(Il2CppRGCTXData *)&(now.fields._8_8_)->methodPointer;
  *(undefined8 *)(lVar36 + -8) = 0x3417479;
  puVar61 = puVar38;
  (*(code *)IVar56)();
  IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  puVar39 = puVar60;
  if (puVar38 != (undefined8 *)0x0) {
    lVar30 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
    *(undefined8 *)(lVar36 + -8) = 0x34174a5;
    il2cpp_runtime_helper_022b2950(lVar30,8);
    *(undefined8 *)(lVar36 + -8) = 0x34174b0;
    puVar39 = (undefined8 *)il2cpp_runtime_helper_02338550(puVar38,lVar30);
    *puVar39 = puVar60[-9];
    uVar37 = *(undefined8 *)(lVar30 + 8);
    *(undefined8 *)(lVar36 + -8) = 0x34174c5;
    il2cpp_runtime_helper_022b2880(uVar37,puVar39,0);
    lVar30 = *(long *)&pSVar72->fields;
    now.fields._8_8_ = puVar60 + -0x12;
    if (*(int *)(*(long *)(*(long *)(lVar30 + 0xc0) + 0x38) + 0x28) < 0) {
      now.fields._8_8_ = now_00.fields._8_8_;
    }
    now_00.fields._8_8_ = *(Il2CppRGCTXData *)(puVar60 + -0xe);
    *(undefined8 *)(lVar36 + -8) = 0x34174f2;
    memcpy(puVar64,now.fields._8_8_,(size_t)now_00.fields._8_8_);
    lVar30 = *(long *)(*(long *)(*(long *)(lVar30 + 0xc0) + 0x70) + 0x80);
    puVar60[-0xc] = puVar38;
    iVar54 = now_00.fields._8_4_;
    *(undefined8 *)(lVar36 + -8) = 0x341751a;
    il2cpp_runtime_helper_022b2970(puVar38,lVar30 + 0x20,puVar64);
    IVar56 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar60 + -0x11))->rgctxDataDummy;
    if (IVar56.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    puVar39 = *(undefined8 **)(puVar60[-9] + 0x28);
    lVar30 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
    uVar37 = puVar60[-0xc];
    *(undefined8 *)(lVar36 + -8) = 0x3417552;
    now.fields._8_8_ = (void *)il2cpp_runtime_helper_02338550(uVar37,lVar30 + 0x20);
    *(undefined8 *)(lVar36 + -8) = 0x3417560;
    puVar61 = puVar64;
    memcpy(puVar64,now.fields._8_8_,(size_t)now_00.fields._8_8_);
    if (puVar39 != (undefined8 *)0x0) {
      lVar30 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
      now.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar30 + 0x48))->method;
      puVar61 = ((Il2CppRGCTXData *)&(now.fields._8_8_)->methodPointer)->rgctxDataDummy;
      puVar38 = puVar64;
      if (-1 < *(int *)(*(long *)(lVar30 + 0x38) + 0x28)) {
        puVar38 = (undefined8 *)*puVar64;
      }
      puVar60[-0xb] = puVar38;
      puVar60[-10] = puVar60 + -7;
      iVar27 = (int)puVar60;
      iVar54 = iVar27 + -0x58;
      IVar50.rgctxDataDummy = puVar60 + -8;
      pIVar6 = (Il2CppArrayBounds *)(now.fields._8_8_)->invoker_method;
      *(undefined8 *)(lVar36 + -8) = 0x34175a5;
      (*(code *)pIVar6)(puVar61,now.fields._8_8_,puVar39);
      if (*(char *)(puVar60 + -8) == '\0') {
        lVar30 = *(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          *(undefined8 *)(lVar36 + -8) = 0x34175cc;
          lVar30 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)(lVar36 + -8) = 0x34175d4;
        uVar37 = il2cpp_runtime_helper_023052d0(lVar30);
        pcVar9 = (code *)**(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x88);
        *(undefined8 *)(lVar36 + -8) = 0x34175ee;
        (*pcVar9)(uVar37);
        puVar60[-7] = uVar37;
        puVar39 = *(undefined8 **)(puVar60[-9] + 0x28);
        lVar30 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
        uVar37 = puVar60[-0xc];
        *(undefined8 *)(lVar36 + -8) = 0x341761d;
        now.fields._8_8_ = (void *)il2cpp_runtime_helper_02338550(uVar37,lVar30 + 0x20);
        *(undefined8 *)(lVar36 + -8) = 0x341762b;
        puVar61 = puVar64;
        memcpy(puVar64,now.fields._8_8_,(size_t)now_00.fields._8_8_);
        if (puVar39 == (undefined8 *)0x0) goto label_0341795f;
        IVar50 = *(Il2CppRGCTXData *)(puVar60 + -7);
        lVar30 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
        now.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar30 + 0x90))->method;
        puVar61 = ((Il2CppRGCTXData *)&(now.fields._8_8_)->methodPointer)->rgctxDataDummy;
        puVar38 = puVar64;
        if (-1 < *(int *)(*(long *)(lVar30 + 0x38) + 0x28)) {
          puVar38 = (undefined8 *)*puVar64;
        }
        puVar60[-0xb] = puVar38;
        *(Il2CppRGCTXData *)(puVar60 + -10) = IVar50;
        pIVar6 = (Il2CppArrayBounds *)(now.fields._8_8_)->invoker_method;
        *(undefined8 *)(lVar36 + -8) = 0x341766f;
        (*(code *)pIVar6)(puVar61,now.fields._8_8_,puVar39,puVar60 + -0xb);
      }
      lVar30 = *(long *)(puVar60[-9] + 0x18);
      iVar54 = 0;
      if (lVar30 != 0) {
        uVar37 = *(undefined8 *)(lVar30 + 0x28);
        uVar11 = *(undefined8 *)(lVar30 + 0x40);
        pcVar9 = *(code **)(lVar30 + 0x18);
        *(undefined8 *)(lVar36 + -8) = 0x341768b;
        auVar76 = (*pcVar9)(uVar11,uVar37);
        if (*(char *)((long)puVar60 + -100) == '\0') {
          uVar37 = puVar60[-7];
          in_R9 = *(MethodInfo_3316900 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x98);
          uVar11 = puVar60[-9];
          pIVar68 = in_R9->methodPointer;
          *(undefined8 *)(lVar36 + -8) = 0x34176b6;
          cVar28 = (*pIVar68)(uVar11,uVar37,auVar76._0_8_,auVar76._8_8_ & 0xffffffff,IVar56.rgctxDataDummy);
          if (cVar28 != '\0') {
            return;
          }
        }
        uVar37 = puVar60[-7];
        lVar30 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80);
        *(undefined8 *)(lVar36 + -8) = 0x34176e1;
        pcVar35 = (char *)il2cpp_runtime_helper_02338550(uVar37,lVar30 + 0x80);
        if (*pcVar35 == '\0') {
          pcVar9 = (code *)**(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 200);
          *(undefined8 *)(lVar36 + -8) = 0x3417792;
          IVar50.rgctxDataDummy = (void *)(*pcVar9)();
          puVar61 = *(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xc0);
          uVar37 = *puVar61;
          ((Il2CppRGCTXData *)(puVar60 + -8))->rgctxDataDummy = (void *)IVar50;
        }
        else {
          uVar37 = puVar60[-7];
          lVar30 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80);
          *(undefined8 *)(lVar36 + -8) = 0x341770d;
          pvVar40 = (void *)il2cpp_runtime_helper_02338550(uVar37,lVar30 + 0x20);
          puVar39 = (undefined8 *)puVar60[-0x10];
          sVar12 = puVar60[-0xf];
          *(undefined8 *)(lVar36 + -8) = 0x3417720;
          memcpy(puVar39,pvVar40,sVar12);
          lVar30 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
          puVar61 = *(undefined8 **)(lVar30 + 0xa8);
          uVar37 = *puVar61;
          if (-1 < *(int *)(*(long *)(lVar30 + 0xa0) + 0x28)) {
            puVar39 = (undefined8 *)*puVar39;
          }
          now_00.fields._8_8_ = puVar60 + -8;
          puVar60[-8] = puVar39;
          pcVar9 = (code *)puVar61[2];
          *(undefined8 *)(lVar36 + -8) = 0x3417759;
          (*pcVar9)(uVar37,puVar61,0,now_00.fields._8_8_,puVar60 + -0xb);
          IVar50 = *(Il2CppRGCTXData *)(puVar60 + -0xb);
          puVar61 = *(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xc0);
          uVar37 = *puVar61;
          *(Il2CppRGCTXData *)(puVar60 + -8) = IVar50;
        }
        iVar54 = iVar27 + -0x40;
        pcVar9 = (code *)puVar61[2];
        *(undefined8 *)(lVar36 + -8) = 0x34177b8;
        (*pcVar9)(uVar37,puVar61,IVar56.rgctxDataDummy);
        puVar61 = (undefined8 *)puVar60[-7];
        now.fields._8_8_ =
             (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80))->
             rgctxDataDummy;
        *(undefined8 *)(lVar36 + -8) = 0x34177d7;
        plVar67 = (long *)il2cpp_runtime_helper_02338550();
        if (*plVar67 != 0) {
          puVar61 = *(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xd8);
          uVar37 = *puVar61;
          ((Il2CppRGCTXData *)(puVar60 + -8))->rgctxDataDummy = (void *)IVar56;
          iVar54 = iVar27 + -0x40;
          pcVar9 = (code *)puVar61[2];
          *(undefined8 *)(lVar36 + -8) = 0x3417806;
          IVar50 = IVar56;
          (*pcVar9)(uVar37);
          puVar61 = (undefined8 *)puVar60[-7];
          now.fields._8_8_ =
               (void *)(*(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80) + 0xc0
                       );
          *(undefined8 *)(lVar36 + -8) = 0x341782a;
          pcVar35 = (char *)il2cpp_runtime_helper_02338550();
          if (*pcVar35 != '\0') {
            return;
          }
          lVar30 = puVar60[-7];
          now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (lVar30 != 0) {
            lVar10 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80);
            lVar42 = lVar10 + 0xc0;
            *(undefined8 *)(lVar36 + -8) = 0x341786b;
            il2cpp_runtime_helper_022b2950(lVar42,1);
            *(undefined8 *)(lVar36 + -8) = 0x3417876;
            puVar41 = (undefined1 *)il2cpp_runtime_helper_02338550(lVar30,lVar42);
            *puVar41 = 1;
            uVar37 = *(undefined8 *)(lVar10 + 200);
            *(undefined8 *)(lVar36 + -8) = 0x341788b;
            il2cpp_runtime_helper_022b2880(uVar37,puVar41,0);
            lVar30 = *(long *)(puVar60[-9] + 0x10);
            lVar42 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
            IVar56 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar60 + -0xc))->rgctxDataDummy;
            *(undefined8 *)(lVar36 + -8) = 0x34178b9;
            pvVar40 = (void *)il2cpp_runtime_helper_02338550(IVar56.rgctxDataDummy,lVar42 + 0x20);
            sVar12 = puVar60[-0xe];
            *(undefined8 *)(lVar36 + -8) = 0x34178c8;
            memcpy(puVar64,pvVar40,sVar12);
            lVar42 = *(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xe8);
            if ((*(byte *)(lVar42 + 0x135) & 1) == 0) {
              *(undefined8 *)(lVar36 + -8) = 0x34178e8;
              lVar42 = il2cpp_runtime_helper_023009c0();
            }
            *(undefined8 *)(lVar36 + -8) = 0x34178f0;
            puVar39 = (undefined8 *)il2cpp_runtime_helper_023052d0(lVar42);
            lVar42 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
            uVar37 = *(undefined8 *)(lVar42 + 0xe0);
            puVar38 = *(undefined8 **)(lVar42 + 0xf0);
            pcVar9 = (code *)*puVar38;
            *(undefined8 *)(lVar36 + -8) = 0x3417914;
            now.fields._8_8_ = IVar56;
            puVar61 = puVar39;
            (*pcVar9)(puVar39,IVar56.rgctxDataDummy,uVar37);
            iVar54 = (int)puVar38;
            now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
            if (lVar30 != 0) {
              lVar42 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
              puVar61 = *(undefined8 **)(lVar42 + 0xf8);
              uVar37 = *puVar61;
              if (-1 < *(int *)(*(long *)(lVar42 + 0x38) + 0x28)) {
                puVar64 = (undefined8 *)*puVar64;
              }
              puVar60[-0xb] = puVar64;
              puVar60[-10] = puVar39;
              pcVar9 = (code *)puVar61[2];
              *(undefined8 *)(lVar36 + -8) = 0x3417950;
              (*pcVar9)(uVar37,puVar61,lVar30,puVar60 + -0xb,puVar39);
              return;
            }
          }
        }
      }
    }
  }
label_0341795f:
  *(undefined8 *)(lVar36 + -8) = 0x3417964;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 **)(lVar36 + -8) = puVar60 + -1;
  ((Il2CppRGCTXData *)(lVar36 + -0x10))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  *(undefined8 **)(lVar36 + -0x18) = puVar64;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__o **)(lVar36 + -0x20) = pSVar72;
  ((Il2CppRGCTXData *)(lVar36 + -0x28))->rgctxDataDummy = (void *)IVar56;
  *(undefined8 **)(lVar36 + -0x30) = puVar39;
  *(Il2CppRGCTXData *)(lVar36 + -0x40) = IVar50;
  *(int *)(lVar36 + -0x38) = iVar54;
  *(undefined8 *)(lVar36 + -0x70) = extraout_RDX_05;
  *(undefined8 **)(lVar36 + -0x48) = puVar61;
  method_12 = (MethodInfo_331A460 *)in_R9;
  if (g_data_057a8ce7 == '\0') {
    *(undefined8 *)(lVar36 + -0x90) = 0x34179ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    *(undefined8 *)(lVar36 + -0x90) = 0x34179b7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    *(undefined8 *)(lVar36 + -0x90) = 0x34179c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    *(undefined8 *)(lVar36 + -0x90) = 0x34179cf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057a8ce7 = '\x01';
  }
  pAVar13 = in_R9->klass->rgctx_data;
  t1._ticks = (int64_t)(pAVar13->_20_TValue->_2).actualSize;
  IVar56.rgctxDataDummy = (void *)(t1._ticks + 0xfU & 0xfffffffffffffff0);
  __dest = (MethodInfo_3316900 *)((lVar36 + -0x88) - (long)IVar56);
  *(undefined8 *)(lVar36 + -0x68) = 0;
  *(undefined8 *)(lVar36 + -0x60) = 0;
  pvVar40 = (pAVar13->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
  __dest[-1].slot = 0x7a1e;
  __dest[-1].parameters_count = 'A';
  __dest[-1].bitflags = '\x03';
  *(undefined4 *)&__dest[-1].field_0x54 = 0;
  pcVar35 = (char *)il2cpp_runtime_helper_02338550(now.fields._8_8_,(long)pvVar40 + 0x80);
  pMVar73 = __dest;
  if (*pcVar35 == '\0') {
label_03417b74:
    pIVar70 = (Il2CppRGCTXData *)
              ((long)(in_R9->klass->rgctx_data->
                      _11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields + 0xa0);
    __dest[-1].slot = 0x7b97;
    __dest[-1].parameters_count = 'A';
    __dest[-1].bitflags = '\x03';
    *(undefined4 *)&__dest[-1].field_0x54 = 0;
    IVar31 = now.fields._8_8_;
    pcVar35 = (char *)il2cpp_runtime_helper_02338550();
    if (*pcVar35 == '\0') {
      return;
    }
    lVar30 = *(long *)(*(long *)(lVar36 + -0x48) + 0x20);
    pMVar62 = in_R9;
    if (lVar30 != 0) {
      cVar28 = *(char *)(lVar30 + 0x18);
      uVar37 = *(undefined8 *)(lVar30 + 0x20);
      *(char *)(lVar36 + -0x68) = cVar28;
      *(undefined8 *)(lVar36 + -0x60) = uVar37;
      if (cVar28 == '\0') {
        return;
      }
      pvVar40 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1
                ).fields;
      __dest[-1].slot = 0x7be9;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      pIVar70 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(now.fields._8_8_,(long)pvVar40 + 0x60);
      now_00.fields._8_8_ = *pIVar70;
      Var26 = *(unkuint10 *)pIVar70;
      IVar56._2_6_ = 0;
      IVar56._0_2_ = *(ushort *)(pIVar70 + 1);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        __dest[-1].slot = 0x7c09;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar31 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar36 + -0x70))->method;
      uVar4 = *(uint *)(lVar36 + -0x38);
      IVar50.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      __dest[-1].slot = 0x7c21;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      left_02.fields._8_4_ = uVar4;
      left_02.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)IVar31.rgctxDataDummy;
      left_02.fields._12_4_ = 0;
      pIVar70 = (Il2CppRGCTXData *)(ulong)uVar4;
      right_02.fields._10_6_ = 0;
      right_02.fields._0_10_ = Var26;
      t1._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left_02,right_02,(MethodInfo *)0x0);
      lVar30 = *(long *)(*(long *)(lVar36 + -0x48) + 0x20);
      pMVar73 = in_R9;
      if (lVar30 != 0) {
        IVar56._0_1_ = *(undefined1 *)(lVar30 + 0x18);
        uVar37 = *(undefined8 *)(lVar30 + 0x20);
        *(undefined1 *)(lVar36 + -0x68) = *(undefined1 *)(lVar30 + 0x18);
        *(undefined8 *)(lVar36 + -0x60) = uVar37;
        __dest[-1].slot = 0x7c56;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        __this_02.fields.value.fields._ticks =
             (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
        __this_02.fields._0_8_ = lVar36 + -0x68;
        now_00.fields._8_8_ = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_02,method_08);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          __dest[-1].slot = 0x7c71;
          __dest[-1].parameters_count = 'A';
          __dest[-1].bitflags = '\x03';
          *(undefined4 *)&__dest[-1].field_0x54 = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar62 = (MethodInfo_3316900 *)0x0;
        __dest[-1].slot = 0x7c80;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        bVar29 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)t1._ticks,(System_TimeSpan_o)now_00.fields._8_8_,
                            (MethodInfo *)0x0);
        if ((char)bVar29 == '\0') {
          return;
        }
        pvVar40 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->
                  _1).fields;
        __dest[-1].slot = 0x7ca6;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        pIVar70 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(now.fields._8_8_,(long)pvVar40 + 0x40);
        IVar31 = (Il2CppRGCTXData)pIVar70->method;
        pIVar70 = (Il2CppRGCTXData *)0x1;
        pIVar68 = in_R9->klass->rgctx_data->_33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache
                  ->methodPointer;
        __dest[-1].slot = 0x7cc2;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        pvVar44 = (void *)(*pIVar68)();
        pvVar40 = *(void **)(lVar36 + -0x40);
        if (pvVar40 != (void *)0x0) {
          pMVar58 = in_R9->klass->rgctx_data->_24_System_Action_AottgQueryResult_TValue___Invoke;
          pIVar68 = pMVar58->methodPointer;
          *(void **)(lVar36 + -0x58) = pvVar44;
label_03417ceb:
          pIVar65 = pMVar58->invoker_method;
          __dest[-1].slot = 0x7cee;
          __dest[-1].parameters_count = 'A';
          __dest[-1].bitflags = '\x03';
          *(undefined4 *)&__dest[-1].field_0x54 = 0;
          (*pIVar65)(pIVar68,pMVar58,pvVar40,(void **)(lVar36 + -0x58),pvVar44);
          return;
        }
      }
    }
  }
  else {
    *(MethodInfo_3316900 **)(lVar36 + -0x78) = in_R9;
    pvVar40 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).
              fields;
    __dest[-1].slot = 0x7a4d;
    __dest[-1].parameters_count = 'A';
    __dest[-1].bitflags = '\x03';
    *(undefined4 *)&__dest[-1].field_0x54 = 0;
    pVar43 = (unkuint10 *)il2cpp_runtime_helper_02338550(now.fields._8_8_,(long)pvVar40 + 0x60);
    pMVar62 = *(MethodInfo_3316900 **)pVar43;
    Var26 = *pVar43;
    IVar56._2_6_ = 0;
    IVar56._0_2_ = *(ushort *)((long)pVar43 + 8);
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      __dest[-1].slot = 0x7a6d;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    IVar31 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar36 + -0x70))->method;
    uVar4 = *(uint *)(lVar36 + -0x38);
    IVar50.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    __dest[-1].slot = 0x7a82;
    __dest[-1].parameters_count = 'A';
    __dest[-1].bitflags = '\x03';
    *(undefined4 *)&__dest[-1].field_0x54 = 0;
    left_01.fields._8_4_ = uVar4;
    left_01.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)IVar31.rgctxDataDummy;
    left_01.fields._12_4_ = 0;
    pIVar70 = (Il2CppRGCTXData *)(ulong)uVar4;
    right_01.fields._10_6_ = 0;
    right_01.fields._0_10_ = Var26;
    now_00.fields._8_8_ =
         (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_01,right_01,(MethodInfo *)0x0);
    lVar30 = *(long *)(*(long *)(lVar36 + -0x48) + 0x20);
    if (lVar30 != 0) {
      t2._ticks = ((System_TimeSpan_Fields *)(lVar30 + 0x10))->_ticks;
      if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
        __dest[-1].slot = 0x7ab2;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      __dest[-1].slot = 0x7abf;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      bVar29 = System_TimeSpan__op_LessThan
                         ((System_TimeSpan_o)now_00.fields._8_8_,(System_TimeSpan_o)t2._ticks,
                          (MethodInfo *)0x0);
      in_R9 = *(MethodInfo_3316900 **)(lVar36 + -0x78);
      if ((char)bVar29 == '\0') goto label_03417b74;
      pvVar40 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1
                ).fields;
      __dest[-1].slot = 0x7aed;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      pvVar40 = (void *)il2cpp_runtime_helper_02338550(now.fields._8_8_,(long)pvVar40 + 0x20);
      __dest[-1].slot = 0x7afb;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      memcpy(__dest,pvVar40,t1._ticks);
      pAVar13 = in_R9->klass->rgctx_data;
      pIVar70 = (Il2CppRGCTXData *)pAVar13->_32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh;
      IVar31 = (Il2CppRGCTXData)pIVar70->method;
      if (-1 < (int)(pAVar13->_20_TValue->_1).byval_arg.bits) {
        pMVar73 = (MethodInfo_3316900 *)__dest->methodPointer;
      }
      pvVar40 = *(void **)(lVar36 + -0x40);
      *(undefined1 *)(lVar36 + -0x31) = 1;
      *(MethodInfo_3316900 **)(lVar36 + -0x58) = pMVar73;
      *(long *)(lVar36 + -0x50) = lVar36 + -0x31;
      IVar56.rgctxDataDummy = (void *)(lVar36 + -0x58);
      IVar50.rgctxDataDummy = (void *)(lVar36 + -0x80);
      IVar75 = pIVar70[2];
      __dest[-1].slot = 0x7b42;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      (*(code *)IVar75)(IVar31.rgctxDataDummy,pIVar70,0);
      t1._ticks = 0;
      pMVar62 = in_R9;
      if (pvVar40 != (void *)0x0) {
        pvVar44 = *(void **)(lVar36 + -0x80);
        pMVar58 = in_R9->klass->rgctx_data->_24_System_Action_AottgQueryResult_TValue___Invoke;
        pIVar68 = pMVar58->methodPointer;
        *(void **)(lVar36 + -0x58) = pvVar44;
        goto label_03417ceb;
      }
    }
  }
  __dest[-1].slot = 0x7d0a;
  __dest[-1].parameters_count = 'A';
  __dest[-1].bitflags = '\x03';
  *(undefined4 *)&__dest[-1].field_0x54 = 0;
  il2cpp_runtime_helper_022b2c90();
  *(long *)&__dest[-1].slot = lVar36 + -8;
  *(Il2CppRGCTXData *)&__dest[-1].token = now_00.fields._8_8_;
  __dest[-1].field8_0x40.genericMethod = (void *)t1._ticks;
  __dest[-1].rgctx_data = (Il2CppRGCTXData *)pMVar73;
  __dest[-1].parameters = (Il2CppType **)now.fields._8_8_;
  __dest[-1].return_type = (Il2CppType *)pMVar62;
  __dest[-2].rgctx_data = extraout_RDX_06;
  __dest[-2].name = (char *)pIVar70;
  if (g_data_057a8ce8 == '\0') {
    __dest[-2].invoker_method = (InvokerMethod)0x3417d4a;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ce8 = '\x01';
  }
  __dest[-1].virtualMethodPointer = (Il2CppMethodPointer)IVar56;
  now_01.fields._8_8_ =
       (Il2CppRGCTXData)
       *(Il2CppRGCTXData *)
        &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar56.method)->klass)->fields;
  pIVar45 = (now_01.fields._8_8_)->rgctx_data;
  uVar55 = (ulong)((pIVar45[7].klass)->_2).actualSize;
  pIVar65 = (InvokerMethod)(ulong)((pIVar45[0x14].klass)->_2).actualSize;
  IVar75.rgctxDataDummy = (void *)((long)__dest + (-0x98 - (uVar55 + 0xf & 0xfffffffffffffff0)));
  __dest[-1].invoker_method = pIVar65;
  now.fields._8_8_ = (void *)((ulong)(pIVar65 + 0xf) & 0xfffffffffffffff0);
  __dest[-2].return_type = (Il2CppType *)((long)IVar75.rgctxDataDummy - (long)now.fields._8_8_);
  pAVar66 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *)
            (((long)IVar75.rgctxDataDummy - (long)now.fields._8_8_) - (long)now.fields._8_8_);
  __dest[-2].klass = pAVar66;
  __dest[-1].klass = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *)0x0;
  iVar54 = *(int *)&(pIVar45[7].method)->return_type;
  __dest[-2].parameters = (Il2CppType **)IVar31;
  now_00.fields._8_8_ = (Il2CppRGCTXData)(IVar31.method)->return_type;
  pIVar45 = (Il2CppRGCTXData *)&__dest[-2].name;
  if (iVar54 < 0) {
    pIVar45 = pIVar70;
  }
  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417ddc;
  IVar31.rgctxDataDummy = IVar75.rgctxDataDummy;
  memcpy(IVar75.rgctxDataDummy,pIVar45,uVar55);
  if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
label_03418583:
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418588;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar45 = (Il2CppRGCTXData *)(now_01.fields._8_8_)->rgctx_data[9].method;
    IVar31 = (Il2CppRGCTXData)pIVar45->rgctxDataDummy;
    if (*(int *)&((now_01.fields._8_8_)->rgctx_data[7].method)->return_type < 0) {
      pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
    }
    else {
      pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
      IVar75 = *(Il2CppRGCTXData *)&(IVar75.method)->methodPointer;
    }
    *(Il2CppRGCTXData *)&__dest[-2].token = IVar75;
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c ***)&__dest[-2].slot = &__dest[-1].klass;
    now.fields._8_8_ = &__dest[-2].token;
    IVar50.rgctxDataDummy = &__dest[-2].field8_0x40;
    IVar75 = pIVar45[2];
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e24;
    (*(code *)IVar75)(IVar31.rgctxDataDummy,pIVar45,now_00.fields._8_8_);
    if (*(char *)&__dest[-2].field8_0x40 == '\0') {
      return;
    }
    IVar75 = (Il2CppRGCTXData)__dest[-1].klass;
    if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    pIVar70 = pIVar70 + 4;
    now_01.fields._8_8_ = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    IVar56.rgctxDataDummy = &(now_01.fields._8_8_)->rgctx_data;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e69;
    il2cpp_runtime_helper_022b2950(IVar56.rgctxDataDummy,1);
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e74;
    puVar41 = (undefined1 *)il2cpp_runtime_helper_02338550(IVar75.rgctxDataDummy,IVar56.rgctxDataDummy);
    *puVar41 = 0;
    ppIVar74 = ((now_01.fields._8_8_)->_2).typeHierarchy;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e88;
    il2cpp_runtime_helper_022b2880(ppIVar74,puVar41,0);
    now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-2].rgctx_data;
    if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
      pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x23].method;
      now_00.fields._8_8_ = *pIVar45;
      pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417eaf;
      IVar31 = "unknown_error";
      now_00.fields._8_8_ = (void *)(*now_00.fields._8_8_)();
      if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03418583;
    }
    pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x25].method;
    IVar56 = *pIVar45;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417ed2;
    IVar31 = now_00.fields._8_8_;
    cVar28 = (*(code *)IVar56)();
    IVar56 = (Il2CppRGCTXData)__dest[-1].klass;
    __dest[-1].virtualMethodPointer = (Il2CppMethodPointer)pIVar70;
    if (cVar28 != '\0') {
      if (IVar56.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
        now_01.fields._8_8_ = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f15;
        il2cpp_runtime_helper_022b2950((Il2CppRGCTXData *)&(now_01.fields._8_8_)->_1 + 0x10,1);
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f20;
        pIVar45 = (Il2CppRGCTXData *)
                  il2cpp_runtime_helper_02338550(IVar56.rgctxDataDummy,
                                     (Il2CppRGCTXData *)&(now_01.fields._8_8_)->_1 + 0x10);
        *(undefined1 *)pIVar45 = 1;
        IVar31 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(now_01.fields._8_8_)->_1)[0x11].rgctxDataDummy;
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f34;
        il2cpp_runtime_helper_022b2880(IVar31.rgctxDataDummy,pIVar45,0);
        IVar75 = (Il2CppRGCTXData)__dest[-1].klass;
        if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
          lVar30 = (long)pvVar40 + 0xa0;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f6b;
          il2cpp_runtime_helper_022b2950(lVar30,1);
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f76;
          puVar41 = (undefined1 *)il2cpp_runtime_helper_02338550(IVar75.rgctxDataDummy,lVar30);
          *puVar41 = 0;
          uVar37 = *(undefined8 *)((long)pvVar40 + 0xa8);
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f8a;
          il2cpp_runtime_helper_022b2880(uVar37,puVar41,0);
          IVar63 = (Il2CppRGCTXData)__dest[-1].klass;
          pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x26].method;
          IVar31 = (Il2CppRGCTXData)pIVar45->rgctxDataDummy;
          IVar56 = (Il2CppRGCTXData)__dest[-2].return_type;
          *(Il2CppRGCTXData *)&__dest[-2].token = (void *)IVar56;
          now.fields._8_8_ = &__dest[-2].token;
          now_01.fields._8_8_ = pIVar45[2];
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417fb8;
          IVar50 = IVar56;
          (*(code *)now_01.fields._8_8_)(IVar31.rgctxDataDummy,pIVar45,now_00.fields._8_8_);
          now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (IVar63.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
            pIVar45 = (Il2CppRGCTXData *)((long)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields + 0x20);
            now.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].invoker_method;
            pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3417fea;
            il2cpp_runtime_helper_022b2970(IVar63.rgctxDataDummy,pIVar45,IVar56.rgctxDataDummy);
            now_01.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
            now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-2].parameters;
            IVar31 = IVar63;
            if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
              IVar75 = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
              IVar56.rgctxDataDummy = &(IVar75.method)->field8_0x40;
              pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418022;
              il2cpp_runtime_helper_022b2950(IVar56.rgctxDataDummy,8);
              pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341802d;
              pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(now_01.fields._8_8_,IVar56.rgctxDataDummy);
              pIVar45->rgctxDataDummy = (void *)0x0;
              IVar31 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar75.klass)->_1)[9].rgctxDataDummy;
              pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418042;
              il2cpp_runtime_helper_022b2880(IVar31.rgctxDataDummy,pIVar45,0);
              now.fields._8_8_ = (Il2CppRGCTXData)(now_00.fields._8_8_)->name;
              if (now.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
                now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
                pIVar45 = (Il2CppRGCTXData *)(now.fields._8_8_)->return_type;
                IVar31 = *(Il2CppRGCTXData *)&(now.fields._8_8_)->field8_0x40;
                pcVar9 = (code *)(now.fields._8_8_)->name;
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341805e;
                auVar76 = (*pcVar9)();
                if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
                  IVar63.rgctxDataDummy = (void *)(auVar76._8_8_ & 0xffffffff);
                  pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
                  lVar30 = (long)pvVar40 + 0x60;
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418095;
                  il2cpp_runtime_helper_022b2950(lVar30,0x10);
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34180a0;
                  puVar60 = (undefined8 *)il2cpp_runtime_helper_02338550(now_00.fields._8_8_,lVar30);
                  *puVar60 = auVar76._0_8_;
                  *(short *)(puVar60 + 1) = IVar63._0_2_;
                  uVar37 = *(undefined8 *)((long)pvVar40 + 0x68);
                  pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34180bb;
                  il2cpp_runtime_helper_022b2880(uVar37,puVar60,0);
                  pAVar14 = __dest[-1].klass;
                  pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34180de;
                  pvVar40 = (void *)il2cpp_runtime_helper_02338550(pAVar14,(long)pvVar40 + 0x20);
                  IVar56 = (Il2CppRGCTXData)__dest[-2].klass;
                  pIVar65 = __dest[-1].invoker_method;
                  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34180f4;
                  memcpy(IVar56.rgctxDataDummy,pvVar40,(size_t)pIVar65);
                  pMVar58 = pIVar70->klass->rgctx_data[0x20].method;
                  pIVar68 = pMVar58->methodPointer;
                  if (-1 < *(int *)&(pIVar70->klass->rgctx_data[0x14].method)->return_type) {
                    IVar56 = *(Il2CppRGCTXData *)&(IVar56.method)->methodPointer;
                  }
                  *(undefined1 *)((long)&__dest[-1].name + 7) = 0;
                  *(Il2CppRGCTXData *)&__dest[-2].token = (void *)IVar56;
                  puVar41 = (undefined1 *)((long)&__dest[-1].name + 7);
                  goto label_03418255;
                }
              }
            }
          }
        }
      }
      goto label_03418583;
    }
    pIVar45 = (Il2CppRGCTXData *)((long)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields + 0x80);
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341814c;
    IVar31 = IVar56;
    pcVar35 = (char *)il2cpp_runtime_helper_02338550();
    cVar28 = *pcVar35;
    __dest[-2].rgctx_data = (Il2CppRGCTXData *)now_00.fields._8_8_;
    if (cVar28 == '\0') {
label_0341826f:
      pAVar14 = __dest[-1].klass;
      now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      if (pAVar14 != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *)0x0) {
        IVar75 = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
        IVar56.rgctxDataDummy = (Il2CppRGCTXData *)&(IVar75.klass)->_1 + 0x10;
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34182a6;
        il2cpp_runtime_helper_022b2950(IVar56.rgctxDataDummy,1);
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34182b1;
        pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(pAVar14,IVar56.rgctxDataDummy);
        *(undefined1 *)pIVar45 = 0;
        IVar31 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar75.klass)->_1)[0x11].rgctxDataDummy;
        pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34182c5;
        il2cpp_runtime_helper_022b2880(IVar31.rgctxDataDummy,pIVar45,0);
        now_01.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
        if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
          pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
          IVar56.rgctxDataDummy = pvVar40 + 0xa0;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34182fc;
          il2cpp_runtime_helper_022b2950(IVar56.rgctxDataDummy,1);
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418307;
          puVar41 = (undefined1 *)il2cpp_runtime_helper_02338550(now_01.fields._8_8_,IVar56.rgctxDataDummy);
          *puVar41 = 1;
          uVar37 = *(undefined8 *)((long)pvVar40 + 0xa8);
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341831b;
          il2cpp_runtime_helper_022b2880(uVar37,puVar41,0);
          pAVar14 = __dest[-1].klass;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341833e;
          pvVar40 = (void *)il2cpp_runtime_helper_02338550(pAVar14);
          pIVar65 = __dest[-1].invoker_method;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341834c;
          memset(pvVar40,0,(size_t)pIVar65);
          IVar75 = (Il2CppRGCTXData)__dest[-1].klass;
          pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x27].method;
          IVar63 = *pIVar45;
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418367;
          IVar31 = now_00.fields._8_8_;
          IVar63.rgctxDataDummy = (void *)(*IVar63.rgctxDataDummy)();
          if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
            pIVar70 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
            IVar56.rgctxDataDummy = pIVar70 + 8;
            pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341839b;
            il2cpp_runtime_helper_022b2950(IVar56.rgctxDataDummy,8);
            pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34183a6;
            pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar75.rgctxDataDummy,IVar56.rgctxDataDummy);
            pIVar45->rgctxDataDummy = (void *)IVar63;
            IVar31 = (Il2CppRGCTXData)pIVar70[9].rgctxDataDummy;
            pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34183b8;
            il2cpp_runtime_helper_022b2880(IVar31.rgctxDataDummy,pIVar45,0);
            now.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(__dest[-2].parameters + 3))->method;
            now_01.fields._8_8_ = IVar63.rgctxDataDummy;
            if (now.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
              now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
              pIVar45 = (Il2CppRGCTXData *)(now.fields._8_8_)->return_type;
              IVar31 = *(Il2CppRGCTXData *)&(now.fields._8_8_)->field8_0x40;
              pcVar9 = (code *)(now.fields._8_8_)->name;
              pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34183d8;
              auVar76 = (*pcVar9)();
              __dest[-1].invoker_method = auVar76._0_8_;
              if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
                IVar63.rgctxDataDummy = (void *)(auVar76._8_8_ & 0xffffffff);
                pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
                pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
                IVar56.rgctxDataDummy = pvVar40 + 0x60;
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418413;
                il2cpp_runtime_helper_022b2950(IVar56.rgctxDataDummy,0x10);
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341841e;
                puVar60 = (undefined8 *)il2cpp_runtime_helper_02338550(now_00.fields._8_8_,IVar56.rgctxDataDummy);
                *puVar60 = __dest[-1].invoker_method;
                *(short *)(puVar60 + 1) = IVar63._0_2_;
                uVar37 = *(undefined8 *)((long)pvVar40 + 0x68);
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341843c;
                il2cpp_runtime_helper_022b2880(uVar37,puVar60,0);
                pIVar45 = __dest[-2].rgctx_data;
                pIVar68 = (pIVar70->klass->rgctx_data[0x27].method)->methodPointer;
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418453;
                uVar37 = (*pIVar68)(pIVar45);
                now.fields._8_8_ = (Il2CppRGCTXData)pIVar70->klass->rgctx_data;
                pcVar9 = (code *)**(undefined8 **)&((now.fields._8_8_)->_2).static_fields_size;
                pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341846b;
                now_01.fields._8_8_ = (void *)(*pcVar9)(uVar37,0);
                goto label_0341846e;
              }
            }
          }
        }
      }
      goto label_03418583;
    }
    if (__dest[-2].parameters[4] == (Il2CppType *)0x0) goto label_03418583;
    if ((char)__dest[-2].parameters[4][2].bits == '\0') goto label_0341826f;
    IVar48 = (Il2CppRGCTXData)__dest[-1].klass;
    pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x27].method;
    IVar31 = *pIVar45;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341818f;
    IVar63.rgctxDataDummy = (void *)(*IVar31.rgctxDataDummy)();
    IVar31 = now_00.fields._8_8_;
    now_00.fields._8_8_ = IVar48;
    if (IVar48.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    lVar30 = (long)pvVar40 + 0x40;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34181c2;
    il2cpp_runtime_helper_022b2950(lVar30,8);
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34181cd;
    pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar48.rgctxDataDummy,lVar30);
    pIVar45->rgctxDataDummy = (void *)IVar63;
    uVar37 = *(undefined8 *)((long)pvVar40 + 0x48);
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34181de;
    il2cpp_runtime_helper_022b2880(uVar37,pIVar45,0);
    pAVar14 = __dest[-1].klass;
    pvVar40 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418201;
    pvVar40 = (void *)il2cpp_runtime_helper_02338550(pAVar14,(long)pvVar40 + 0x20);
    IVar56 = (Il2CppRGCTXData)__dest[-2].return_type;
    pIVar65 = __dest[-1].invoker_method;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418214;
    memcpy(IVar56.rgctxDataDummy,pvVar40,(size_t)pIVar65);
    pIVar45 = __dest[-2].rgctx_data;
    pIVar68 = (pIVar70->klass->rgctx_data[0x27].method)->methodPointer;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341822c;
    puVar41 = (undefined1 *)(*pIVar68)(pIVar45);
    pMVar58 = pIVar70->klass->rgctx_data[0x28].method;
    pIVar68 = pMVar58->methodPointer;
    if (-1 < *(int *)&(pIVar70->klass->rgctx_data[0x14].method)->return_type) {
      IVar56 = *(Il2CppRGCTXData *)&(IVar56.method)->methodPointer;
    }
    *(Il2CppRGCTXData *)&__dest[-2].token = (void *)IVar56;
label_03418255:
    *(undefined1 **)&__dest[-2].slot = puVar41;
    now.fields._8_8_ = &__dest[-2].token;
    IVar50.rgctxDataDummy = &__dest[-2].field8_0x40;
    pIVar65 = pMVar58->invoker_method;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418266;
    (*pIVar65)(pIVar68,pMVar58,(void *)0x0,now.fields._8_8_,IVar50.rgctxDataDummy);
    now_01.fields._8_8_ = *(Il2CppRGCTXData *)&__dest[-2].field8_0x40;
label_0341846e:
    pAVar14 = __dest[-1].klass;
    pIVar45 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341848d;
    plVar67 = (long *)il2cpp_runtime_helper_02338550(pAVar14);
    IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    IVar75 = IVar63;
    if (*plVar67 == 0) goto label_03418583;
    pIVar68 = (pIVar70->klass->rgctx_data[0x29].method)->methodPointer;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34184ad;
    IVar75.rgctxDataDummy = (void *)(*pIVar68)();
    pAVar14 = __dest[-1].klass;
    pIVar45 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34184cf;
    pIVar46 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(pAVar14);
    IVar31 = (Il2CppRGCTXData)pIVar46->method;
    if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    pIVar45 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x2b].method;
    IVar63 = *pIVar45;
    pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x34184ef;
    (*(code *)IVar63)();
    if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    if ((int)(IVar75.method)->name < 1) {
      return;
    }
    IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    now_00.fields._8_8_ = &__dest[-2].token;
    pIVar70 = (Il2CppRGCTXData *)0x0;
    IVar63.rgctxDataDummy = IVar56.rgctxDataDummy;
    if (((ulong)(IVar75.method)->name & 0xffffffff) != 0) {
      do {
        IVar56 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)((long)IVar75.rgctxDataDummy + (long)pIVar70 * 8 + 0x20))->rgctxDataDummy
        ;
        if (IVar56.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          if (IVar56.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
          pIVar45 = *(Il2CppRGCTXData **)(*(long *)(*(long *)__dest[-1].virtualMethodPointer + 0xc0) + 0xc0);
          IVar31 = (Il2CppRGCTXData)pIVar45->method;
          *(Il2CppRGCTXData *)&__dest[-2].token = (MethodInfo *)now_01.fields._8_8_;
          now.fields._8_8_ = pIVar45[2];
          pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x3418572;
          IVar50 = now_01.fields._8_8_;
          (*(code *)now.fields._8_8_)(IVar31.rgctxDataDummy,pIVar45,IVar56.rgctxDataDummy,now_00.fields._8_8_)
          ;
          IVar63 = IVar56;
        }
        IVar56 = IVar63;
        pIVar70 = (Il2CppRGCTXData *)((long)pIVar70 + 1);
        now.fields._8_8_ = (Il2CppRGCTXData)(long)(int)*(uint *)&(IVar75.method)->name;
        if ((long)now.fields._8_8_ <= (long)pIVar70) {
          return;
        }
        IVar63 = IVar56;
      } while (pIVar70 < (Il2CppRGCTXData *)(ulong)*(uint *)&(IVar75.method)->name);
    }
  }
  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)0x341858d;
  auVar76 = il2cpp_runtime_helper_022b2ca0();
  pcVar35 = auVar76._8_8_;
  pAVar66[-1].vtable._3_ToString.method = (MethodInfo *)&__dest[-1].slot;
  pAVar66[-1].vtable._3_ToString.methodPtr = (Il2CppMethodPointer)IVar75;
  pAVar66[-1].vtable._2_GetHashCode.method = (MethodInfo *)now_01.fields._8_8_;
  pAVar66[-1].vtable._2_GetHashCode.methodPtr = (Il2CppMethodPointer)now_00.fields._8_8_;
  pAVar66[-1].vtable._1_Finalize.method = (MethodInfo *)pIVar70;
  pAVar66[-1].vtable._1_Finalize.methodPtr = (Il2CppMethodPointer)IVar56;
  pAVar66[-1].vtable._0_Equals.method = (MethodInfo *)auVar76._0_8_;
  now_00.fields._8_8_ = now.fields._8_8_;
  IVar75 = IVar50;
  if (g_data_057a8ce9 == '\0') {
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8ce9 = '\x01';
  }
  lVar30 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar50.method)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185ee;
    lVar30 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185f6;
  pSVar47 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar30);
  method_01 = *(MethodInfo_315A040 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(IVar50.method)->klass)->fields + 0xc0) + 8);
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418610;
  System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object____ctor(pSVar47,method_01);
  (IVar31.method)->return_type = (Il2CppType *)pSVar47;
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418620;
  il2cpp_runtime_helper_022b4080(&(IVar31.method)->return_type);
  IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341862a;
  System_Object___ctor((Il2CppObject *)IVar31.method,(MethodInfo *)0x0);
  if (pIVar45 == (Il2CppRGCTXData *)0x0) {
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418809;
    uVar37 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418811;
    pIVar45 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(uVar37);
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418820;
    pSVar51 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341882d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)pIVar45,pSVar51,(MethodInfo *)0x0);
    pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418838;
    IVar56 = IVar50;
    pIVar70 = pIVar45;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pIVar70 = (Il2CppRGCTXData *)0x0;
    if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      (IVar31.method)->invoker_method = (InvokerMethod)pIVar45;
      pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418653;
      il2cpp_runtime_helper_022b4080(&(IVar31.method)->invoker_method,pIVar45);
      if (pcVar35 == (char *)0x0) {
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar50.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418679;
          lVar30 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar30 + 0xe4) == 0) {
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341868a;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar50.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34186aa;
          lVar30 = il2cpp_runtime_helper_023009c0(lVar30);
        }
        pcVar35 = *(char **)(*(long *)(lVar30 + 0xb8) + 8);
        if (pcVar35 == (char *)0x0) {
          lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar50.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34186db;
            lVar30 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar30 + 0xe4) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34186ec;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar50.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341870c;
            il2cpp_runtime_helper_023009c0(lVar30);
          }
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418725;
          pcVar35 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418744;
          System_Func_DateTimeOffset____ctor();
          lVar30 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar50.method)->klass)->fields + 0xc0);
          lVar36 = *(long *)(lVar30 + 0x28);
          if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418764;
            lVar36 = il2cpp_runtime_helper_023009c0(lVar36);
            lVar30 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar50.method)->klass)->fields + 0xc0);
          }
          *(char **)(*(long *)(lVar36 + 0xb8) + 8) = pcVar35;
          lVar30 = *(long *)(lVar30 + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341878f;
            lVar30 = il2cpp_runtime_helper_023009c0(lVar30);
          }
          lVar30 = *(long *)(lVar30 + 0xb8);
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34187a2;
          il2cpp_runtime_helper_022b4080(lVar30 + 8,pcVar35);
        }
      }
      (IVar31.method)->name = pcVar35;
      pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34187b2;
      il2cpp_runtime_helper_022b4080(&(IVar31.method)->name,pcVar35);
      if (now.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34187cf;
          il2cpp_runtime_helper_02337ed0();
        }
        now.fields._8_8_ = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      *(Il2CppRGCTXData *)
       &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar31.method)->klass)->fields =
           (void *)now.fields._8_8_;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar31.method)->klass,now.fields._8_8_);
      return;
    }
  }
  pAVar66[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341883d;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1].vtable._0_Equals.methodPtr = auVar76._0_8_;
  pMVar58 = pIVar70[5].method;
  if (pMVar58 != (MethodInfo *)0x0) {
    lVar30 = *(long *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x40);
    pAVar66[-1].vtable._0_Equals.methodPtr = pAVar66[-1].vtable._0_Equals.methodPtr;
    method_00 = *(MethodInfo_315B430 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x108);
    pAVar66[-1]._2.naturalAligment = 0xe8;
    pAVar66[-1]._2.packingSize = 0xae;
    pAVar66[-1]._2.bitflags1 = '%';
    pAVar66[-1]._2.bitflags2 = '\x03';
    *(undefined4 *)&pAVar66[-1]._2.field_0x6c = 0;
    System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___FindEntry
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar58,
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar56,method_00);
    return;
  }
  pAVar66[-1]._2.naturalAligment = 'd';
  pAVar66[-1]._2.packingSize = 0x88;
  pAVar66[-1]._2.bitflags1 = 'A';
  pAVar66[-1]._2.bitflags2 = '\x03';
  *(undefined4 *)&pAVar66[-1]._2.field_0x6c = 0;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  uVar37 = auVar76._0_8_;
  pAVar66[-1]._2.naturalAligment = (char)uVar37;
  pAVar66[-1]._2.packingSize = (char)((ulong)uVar37 >> 8);
  pAVar66[-1]._2.bitflags1 = (char)((ulong)uVar37 >> 0x10);
  pAVar66[-1]._2.bitflags2 = (char)((ulong)uVar37 >> 0x18);
  *(int *)&pAVar66[-1]._2.field_0x6c = (int)((ulong)uVar37 >> 0x20);
  pAVar66[-1]._2.naturalAligment = '\0';
  pAVar66[-1]._2.packingSize = '\0';
  pAVar66[-1]._2.bitflags1 = '\0';
  pAVar66[-1]._2.bitflags2 = '\0';
  *(undefined4 *)&pAVar66[-1]._2.field_0x6c = 0;
  pSVar69 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar58->return_type;
  if (pSVar69 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    now_00.fields._8_8_ =
         (Il2CppRGCTXData)
         ((Il2CppRGCTXData *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x48))->method;
    pAVar66[-1]._2.interfaces_count = 0x8899;
    pAVar66[-1]._2.interface_offsets_count = 0x341;
    pAVar66[-1]._2.typeHierarchyDepth = '\0';
    pAVar66[-1]._2.genericRecursionDepth = '\0';
    pAVar66[-1]._2.rank = '\0';
    pAVar66[-1]._2.minimumAlignment = '\0';
    bVar29 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                       (pSVar69,(ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar56,
                        (Il2CppObject **)&pAVar66[-1]._2.naturalAligment,
                        (MethodInfo_315C740 *)now_00.fields._8_8_);
    if ((char)bVar29 == '\0') {
      return;
    }
    lVar30._0_1_ = pAVar66[-1]._2.naturalAligment;
    lVar30._1_1_ = pAVar66[-1]._2.packingSize;
    lVar30._2_1_ = pAVar66[-1]._2.bitflags1;
    lVar30._3_1_ = pAVar66[-1]._2.bitflags2;
    lVar30._4_4_ = *(undefined4 *)&pAVar66[-1]._2.field_0x6c;
    if (lVar30 != 0) {
      return;
    }
  }
  pAVar66[-1]._2.interfaces_count = 35000;
  pAVar66[-1]._2.interface_offsets_count = 0x341;
  pAVar66[-1]._2.typeHierarchyDepth = '\0';
  pAVar66[-1]._2.genericRecursionDepth = '\0';
  pAVar66[-1]._2.rank = '\0';
  pAVar66[-1]._2.minimumAlignment = '\0';
  uVar37 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._2.interfaces_count = (short)uVar37;
  pAVar66[-1]._2.interface_offsets_count = (short)((ulong)uVar37 >> 0x10);
  pAVar66[-1]._2.typeHierarchyDepth = (char)((ulong)uVar37 >> 0x20);
  pAVar66[-1]._2.genericRecursionDepth = (char)((ulong)uVar37 >> 0x28);
  pAVar66[-1]._2.rank = (char)((ulong)uVar37 >> 0x30);
  pAVar66[-1]._2.minimumAlignment = (char)((ulong)uVar37 >> 0x38);
  pSVar69 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(pSVar69->fields)._freeCount;
  if (pSVar69 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___Clear
              (pSVar69,(MethodInfo_315AE70 *)(IVar56.method)->klass->rgctx_data[0xc].method);
    return;
  }
  pAVar66[-1]._2.field_count = 0x88e4;
  pAVar66[-1]._2.event_count = 0x341;
  pAVar66[-1]._2.nested_type_count = 0;
  pAVar66[-1]._2.vtable_count = 0;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  uVar37 = auVar76._0_8_;
  pAVar66[-1]._2.field_count = (short)uVar37;
  pAVar66[-1]._2.event_count = (short)((ulong)uVar37 >> 0x10);
  pAVar66[-1]._2.nested_type_count = (short)((ulong)uVar37 >> 0x20);
  pAVar66[-1]._2.vtable_count = (short)((ulong)uVar37 >> 0x30);
  now_01.fields._8_8_ = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(pSVar69->fields)._freeCount;
  if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)now_01.fields._8_8_,
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar56,
               *(MethodInfo_315C3E0 **)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pAVar66[-1]._2.token = 0x3418914;
  pAVar66[-1]._2.method_count = 0;
  pAVar66[-1]._2.property_count = 0;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  IVar63 = auVar76._8_8_;
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pAVar66[-1]._2.token = pSVar47;
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.thread_static_fields_offset = (MethodInfo *)IVar50;
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.static_fields_size = (void *)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.element_size = (MethodInfo *)IVar31;
  *(char **)&pAVar66[-1]._2.instance_size = pcVar35;
  pAVar66[-1]._2.genericContainerHandle = pIVar45;
  pAVar66[-1]._2.cctor_thread = auVar76._0_8_;
  ppIVar74 = (Il2CppClass **)((ulong)now_00.fields._8_8_ & 0xffffffff);
  pAVar66[-1]._2.cctor_thread = 0;
  lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar75.method)->klass)->fields + 0xc0) + 0x70);
  now.fields._8_8_ = IVar75;
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x341895f;
    lVar30 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418967;
  IVar48.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar30);
  IVar31 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(IVar75.method)->klass)->fields + 0xc0) + 0x78))->method;
  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418981;
  IVar50.rgctxDataDummy = IVar48.rgctxDataDummy;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_ListKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)IVar48.method,
             (MethodInfo_27BBA00 *)IVar31.method);
  if (IVar48.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    (IVar48.method)->invoker_method = (InvokerMethod)now_01.fields._8_8_;
    *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x341899d;
    IVar31 = now_01.fields._8_8_;
    il2cpp_runtime_helper_022b4080(&(IVar48.method)->invoker_method);
    (IVar48.method)->name = (char *)IVar56;
    if (IVar63.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar50 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
    if (IVar50.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      now_00.fields._8_8_ =
           (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(IVar75.method)->klass)->fields + 0xc0) + 0x48))->method;
      *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x34189d1;
      IVar31 = IVar56;
      bVar29 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)IVar50.method,
                          (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar56,
                          (Il2CppObject **)&pAVar66[-1]._2.cctor_thread,
                          (MethodInfo_315C740 *)now_00.fields._8_8_);
      if ((char)bVar29 == '\0') {
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar75.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x34189f2;
          lVar30 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x34189fa;
        IVar56.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar30);
        IVar31 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar75.method)->klass)->fields + 0xc0) + 0x88))->method;
        *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418a17;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_ListKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar56.method,
                   (MethodInfo_31EFA30 *)IVar31.method);
        pAVar66[-1]._2.cctor_thread = (size_t)IVar56;
        IVar50 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
        if (IVar50.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418c03;
        IVar31 = (Il2CppRGCTXData)(IVar48.method)->name;
        method_02 = *(MethodInfo_315ACA0 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar75.method)->klass)->fields + 0xc0) + 0x90);
        *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418a46;
        System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)IVar50.method,
                   (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar31,
                   (Il2CppObject *)IVar56.method,method_02);
      }
      now_00.fields._8_8_ = (Il2CppRGCTXData)(now_01.fields._8_8_)->name;
      if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar31 = (Il2CppRGCTXData)(now_00.fields._8_8_)->return_type;
        IVar50 = (Il2CppRGCTXData)((now_00.fields._8_8_)->field8_0x40).genericMethod;
        pcVar9 = (code *)(now_00.fields._8_8_)->name;
        *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418a5e;
        auVar76 = (*pcVar9)();
        if ((char)ppIVar74 == '\0') {
          now_00.fields._8_8_ = (void *)(auVar76._8_8_ & 0xffffffff);
          IVar31 = (Il2CppRGCTXData)pAVar66[-1]._2.cctor_thread;
          method_12 = *(MethodInfo_331A460 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar75.method)->klass)->fields + 0xc0) + 0x98);
          *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418a89;
          now_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar76._0_8_;
          IVar50 = now_01.fields._8_8_;
          now.fields._8_8_ = IVar63;
          bVar29 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)now_01.fields._8_8_,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar31.method,
                              now_00,(System_Action_AottgQueryResult_TValue___o *)IVar63.method,
                              (MethodInfo_3318C10 *)method_12);
          if ((char)bVar29 != '\0') {
            return;
          }
        }
        lVar30 = pAVar66[-1]._2.cctor_thread;
        if (lVar30 != 0) {
          if (*(char *)(lVar30 + 0x38) == '\0') {
            pMVar19 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar75.method)->klass)->fields + 0xc0) + 200);
            *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418ad8;
            IVar31.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar19);
          }
          else {
            pIVar15 = *(Il2CppObject **)(lVar30 + 0x18);
            pMVar16 = *(MethodInfo_331B450 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar75.method)->klass)->fields + 0xc0) + 0xa8);
            *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418abf;
            IVar31.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar15,pMVar16);
          }
          pIVar34 = (IVar63.method)->return_type;
          IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar63.klass)->_1)[8].method;
          pcVar9 = (code *)(IVar63.method)->name;
          *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418aea;
          (*pcVar9)(IVar50.rgctxDataDummy,IVar31.rgctxDataDummy,pIVar34);
          lVar30 = pAVar66[-1]._2.cctor_thread;
          if ((lVar30 != 0) &&
             (IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar30 + 0x10))->method,
             IVar50.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now_00.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar75.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar50.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = (Il2CppArrayBounds *)(IVar50.method)->invoker_method;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar50.method)->name;
              IVar31 = IVar63;
              if (uVar4 < (uint)pIVar6[1].lower_bound) {
                now_00.fields._8_4_ = uVar4 + 1;
                now_00.fields._12_4_ = 0;
                *(uint *)&(IVar50.method)->name = now_00.fields._8_4_;
                IVar50.rgctxDataDummy = &pIVar6[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar6[2].length + (int)uVar4))->klass = (Il2CppClass *)IVar63;
                *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418b4b;
                il2cpp_runtime_helper_022b4080();
                lVar30 = pAVar66[-1]._2.cctor_thread;
              }
              else {
                pMVar20 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418b70;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar50.method,
                           (Il2CppObject *)IVar63.method,pMVar20);
                lVar30 = pAVar66[-1]._2.cctor_thread;
              }
              if (lVar30 != 0) {
                if (*(char *)(lVar30 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)(lVar30 + 0x3a) = 1;
                pIVar6 = (Il2CppArrayBounds *)(now_01.fields._8_8_)->invoker_method;
                now_01.fields._8_8_ = (Il2CppRGCTXData)(IVar48.method)->name;
                lVar30 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(IVar75.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
                  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418baf;
                  lVar30 = il2cpp_runtime_helper_023009c0();
                }
                *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418bb7;
                IVar63.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar30);
                now_00.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar75.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418bde;
                IVar31.rgctxDataDummy = IVar48.rgctxDataDummy;
                IVar50.rgctxDataDummy = IVar63.rgctxDataDummy;
                System_Action_object____ctor();
                IVar56.rgctxDataDummy = (Il2CppObject *)0x0;
                if (pIVar6 != (Il2CppArrayBounds *)0x0) {
                  uVar37 = *(undefined8 *)&pIVar6[2].lower_bound;
                  iVar21 = pIVar6[4].length;
                  pcVar9 = *(code **)&pIVar6[1].lower_bound;
                  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418bf4;
                  (*pcVar9)(iVar21,now_01.fields._8_8_,IVar63.rgctxDataDummy,uVar37);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_03418c03:
  *(undefined8 *)&pAVar66[-1]._2.cctor_finished = 0x3418c08;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.cctor_finished = (MethodInfo *)IVar56;
  *(Il2CppRGCTXData *)&pAVar66[-1]._2.initializationExceptionGCHandle = (MethodInfo *)now_01.fields._8_8_;
  pAVar66[-1]._2.unity_user_data = (void *)IVar75;
  pAVar66[-1]._2.typeHierarchy = ppIVar74;
  pAVar66[-1].rgctx_data = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *)IVar63;
  pAVar66[-1].static_fields = (void *)IVar48;
  pAVar66[-1]._1.implementedInterfaces = (Il2CppClass **)method_12;
  pAVar66[-1]._1.interfaceOffsets = (Il2CppRuntimeInterfaceOffsetPair *)now.fields._8_8_;
  IVar63.rgctxDataDummy = now_00.fields._8_8_ & 0xffffffff;
  now_01.fields._8_8_ = IVar31;
  plVar67 = (long *)IVar50;
  if (g_data_057a8cea == '\0') {
    pAVar66[-1]._1.events = (void *)0x3418c49;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAVar66[-1]._1.events = (void *)0x3418c55;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAVar66[-1]._1.events = (void *)0x3418c61;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar67 = &TypeInfo_TimeSpan;
    pAVar66[-1]._1.events = (void *)0x3418c6d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cea = '\x01';
  }
  pAVar66[-1]._1.properties = (void *)0x0;
  pAVar66[-1]._1.methods = (void *)0x0;
  IVar48.rgctxDataDummy = IVar63.rgctxDataDummy;
  if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar31.method)->field7_0x38 == '\0') {
label_03418d39:
      if (*(char *)((long)&(IVar31.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar50.method)->klass)->fields;
      if (lVar30 != 0) {
        cVar28 = *(char *)(lVar30 + 0x18);
        pvVar40 = *(void **)(lVar30 + 0x20);
        *(char *)&pAVar66[-1]._1.properties = cVar28;
        pAVar66[-1]._1.methods = pvVar40;
        if (cVar28 == '\0') {
          return;
        }
        IVar56 = (Il2CppRGCTXData)(IVar31.method)->return_type;
        Var26 = *(unkuint10 *)&(IVar31.method)->return_type;
        IVar75._2_6_ = 0;
        IVar75._0_2_ = *(ushort *)&(IVar31.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAVar66[-1]._1.events = (void *)0x3418d89;
          il2cpp_runtime_helper_02337ed0();
        }
        now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
        pAVar66[-1]._1.events = (void *)0x3418d9d;
        left_04.fields._8_8_ = IVar63.rgctxDataDummy;
        left_04.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_07.rgctxDataDummy;
        right_04.fields._10_6_ = 0;
        right_04.fields._0_10_ = Var26;
        now_00.fields._8_8_ = IVar75;
        plVar67 = (long *)extraout_RDX_07;
        IVar48 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_04,right_04,(MethodInfo *)0x0);
        lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar50.method)->klass)->fields;
        now_01.fields._8_8_ = IVar63;
        if (lVar30 != 0) {
          pvVar40 = *(void **)(lVar30 + 0x20);
          *(undefined1 *)&pAVar66[-1]._1.properties = *(undefined1 *)(lVar30 + 0x18);
          pAVar66[-1]._1.methods = pvVar40;
          pAVar66[-1]._1.events = (void *)0x3418dcf;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &pAVar66[-1]._1.properties;
          IVar75 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_03,method_09);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAVar66[-1]._1.events = (void *)0x3418dea;
            il2cpp_runtime_helper_02337ed0();
          }
          IVar56.rgctxDataDummy = (Il2CppObject *)0x0;
          pAVar66[-1]._1.events = (void *)0x3418df9;
          bVar29 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)IVar48,(System_TimeSpan_o)IVar75,(MethodInfo *)0x0);
          if ((char)bVar29 == '\0') {
            return;
          }
          plVar67 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar31.method)->klass)->fields;
          pMVar58 = pAVar66[-1]._1.implementedInterfaces[4]->rgctx_data[0x21].method;
          now_01.fields._8_8_ = (Il2CppRGCTXData)0x1;
          pAVar66[-1]._1.events = (void *)0x3418e22;
          pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar67,1,(MethodInfo_331B520 *)pMVar58);
          pIVar57 = pAVar66[-1]._1.interfaceOffsets;
          now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (pIVar57 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) {
label_03418e2c:
            uVar37 = *(undefined8 *)&pIVar57[2].offset;
            pIVar22 = pIVar57[4].interfaceType;
            pcVar9 = *(code **)&pIVar57[1].offset;
            pAVar66[-1]._1.events = (void *)0x3418e3a;
            (*pcVar9)(pIVar22,pAVar32,uVar37);
            return;
          }
        }
      }
    }
    else {
      IVar56 = (Il2CppRGCTXData)(IVar31.method)->return_type;
      Var26 = *(unkuint10 *)&(IVar31.method)->return_type;
      now_00.fields._10_6_ = 0;
      now_00.fields._offsetMinutes = *(ushort *)&(IVar31.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAVar66[-1]._1.events = (void *)0x3418caf;
        il2cpp_runtime_helper_02337ed0();
      }
      now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      pAVar66[-1]._1.events = (void *)0x3418cc3;
      left_03.fields._8_8_ = IVar63.rgctxDataDummy;
      left_03.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_07.rgctxDataDummy;
      right_03.fields._10_6_ = 0;
      right_03.fields._0_10_ = Var26;
      now_01.fields._8_8_ = IVar63.rgctxDataDummy;
      plVar67 = (long *)extraout_RDX_07;
      IVar75 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_03,right_03,(MethodInfo *)0x0);
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar50.method)->klass)->fields;
      if (lVar30 != 0) {
        IVar56 = *(Il2CppRGCTXData *)(lVar30 + 0x10);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAVar66[-1]._1.events = (void *)0x3418cf0;
          il2cpp_runtime_helper_02337ed0();
        }
        pAVar66[-1]._1.events = (void *)0x3418cfd;
        now_01.fields._8_8_ = IVar56;
        plVar67 = (long *)IVar75;
        bVar29 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)IVar75,(System_TimeSpan_o)IVar56,(MethodInfo *)0x0);
        if ((char)bVar29 == '\0') goto label_03418d39;
        plVar67 = (long *)(IVar31.method)->name;
        pMVar58 = pAVar66[-1]._1.implementedInterfaces[4]->rgctx_data[0x20].method;
        now_01.fields._8_8_ = (Il2CppRGCTXData)0x1;
        pAVar66[-1]._1.events = (void *)0x3418d26;
        pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar67,1,(MethodInfo_331B380 *)pMVar58);
        pIVar57 = pAVar66[-1]._1.interfaceOffsets;
        if (pIVar57 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_03418e2c;
        now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  pAVar66[-1]._1.events = (void *)0x3418e57;
  il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.events = (void *)extraout_RDX_07;
  pAVar66[-1]._1.fields = (void *)IVar75;
  pAVar66[-1]._1.klass = (Il2CppClass *)IVar50;
  pAVar66[-1]._1.interopData = (void *)IVar31;
  IVar31 = now_00.fields._8_8_;
  IVar50 = now_01.fields._8_8_;
  if (g_data_057a8ceb == '\0') {
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418e8c;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ceb = '\x01';
  }
  pAVar66[-1]._1.generic_class = (void *)0x0;
  IVar75 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->return_type;
  pAVar33 = extraout_RDX_08;
  if (IVar75.rgctxDataDummy == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
label_034191b6:
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x34191bb;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    IVar31 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x48))->method;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418ec5;
    IVar50 = now_01.fields._8_8_;
    bVar29 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)IVar75.method,
                        (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)now_01.fields._8_8_,
                        &pAVar66[-1]._1.generic_class,(MethodInfo_315C740 *)IVar31.method);
    if ((char)bVar29 == '\0') {
      return;
    }
    pvVar40 = pAVar66[-1]._1.generic_class;
    if (pvVar40 == (void *)0x0) goto label_034191b6;
    *(undefined1 *)((long)pvVar40 + 0x3a) = 0;
    if (extraout_RDX_08 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      IVar50 = (Il2CppRGCTXData)
               ((Il2CppRGCTXData *)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x118))->method;
      pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418f05;
      IVar75 = "unknown_error";
      pAVar33 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error".method,(MethodInfo_331AB10 *)IVar50.method);
      if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_034191b6;
    }
    IVar75 = (Il2CppRGCTXData)pAVar66[-1]._1.generic_class;
    if (IVar75.rgctxDataDummy == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
    goto label_034191b6;
    if ((char)(pAVar33->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)&(IVar75.method)->field7_0x38 = 1;
      IVar50 = (Il2CppRGCTXData)(pAVar33->fields)._Value_k__BackingField;
      (IVar75.method)->name = (char *)IVar50;
      pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418f43;
      il2cpp_runtime_helper_022b4080(&(IVar75.method)->name);
      pvVar40 = pAVar66[-1]._1.generic_class;
      IVar75.rgctxDataDummy = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      if (pvVar40 != (void *)0x0) {
        *(undefined8 *)((long)pvVar40 + 0x20) = 0;
        IVar75.rgctxDataDummy = pvVar40 + 0x20;
        IVar50.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418f64;
        il2cpp_runtime_helper_022b4080();
        IVar31 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
        if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          now_01.fields._8_8_ = (Il2CppRGCTXData)pAVar66[-1]._1.generic_class;
          IVar50 = (Il2CppRGCTXData)(IVar31.method)->return_type;
          IVar75 = *(Il2CppRGCTXData *)&(IVar31.method)->field8_0x40;
          pcVar9 = (code *)(IVar31.method)->name;
          pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418f81;
          Var79 = (*pcVar9)();
          if (now_01.fields._8_8_ != (void *)0x0) {
            *(unkbyte10 *)&(now_01.fields._8_8_)->return_type = Var79;
            *(undefined2 *)((long)&(now_01.fields._8_8_)->parameters + 6) =
                 *(undefined2 *)((long)&pAVar66[-1]._1.typeMetadataHandle + 6);
            *(undefined4 *)((long)&(now_01.fields._8_8_)->parameters + 2) =
                 *(undefined4 *)((long)&pAVar66[-1]._1.typeMetadataHandle + 2);
            pvVar40 = pAVar66[-1]._1.generic_class;
            if (pvVar40 != (void *)0x0) {
              IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar40 + 0x18))->method;
              pMVar17 = *(MethodInfo_331B380 **)
                         (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                              &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
              IVar50.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
              pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3418fcd;
              plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                          ((Il2CppObject *)IVar75.method,0,pMVar17);
              pvVar40 = pAVar66[-1]._1.generic_class;
              goto joined_r0x03418fd8;
            }
          }
        }
      }
      goto label_034191b6;
    }
    if (*(char *)&(IVar75.method)->field7_0x38 != '\0') {
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &((MethodInfo *)plVar67)->klass)->fields;
      if (lVar30 != 0) {
        if (*(char *)(lVar30 + 0x28) == '\0') goto label_03419131;
        IVar50 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
        (IVar75.method)->klass = (Il2CppClass *)IVar50;
        IVar75.rgctxDataDummy = &(IVar75.method)->klass;
        pAVar66[-1]._1.declaringType = (Il2CppClass *)0x34190ed;
        il2cpp_runtime_helper_022b4080();
        pvVar40 = pAVar66[-1]._1.generic_class;
        if (pvVar40 != (void *)0x0) {
          IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar40 + 0x18))->method;
          IVar50 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
          pMVar23 = *(MethodInfo_331B660 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
          pAVar66[-1]._1.declaringType = (Il2CppClass *)0x341911b;
          plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                      ((Il2CppObject *)IVar75.method,(System_String_o *)IVar50.method,pMVar23)
          ;
          pvVar40 = pAVar66[-1]._1.generic_class;
joined_r0x03418fd8:
          if (pvVar40 != (void *)0x0) goto label_03418fde;
        }
      }
      goto label_034191b6;
    }
label_03419131:
    *(undefined2 *)&(IVar75.method)->field7_0x38 = 0x100;
    (IVar75.method)->name = (char *)0x0;
    IVar50 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    (IVar75.method)->klass = (Il2CppClass *)IVar50;
    IVar75.rgctxDataDummy = &(IVar75.method)->klass;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3419151;
    il2cpp_runtime_helper_022b4080();
    IVar31 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
    if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_034191b6;
    now_01.fields._8_8_ = (Il2CppRGCTXData)pAVar66[-1]._1.generic_class;
    IVar50 = (Il2CppRGCTXData)(IVar31.method)->return_type;
    IVar75 = *(Il2CppRGCTXData *)&(IVar31.method)->field8_0x40;
    pcVar9 = (code *)(IVar31.method)->name;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x341916a;
    Var79 = (*pcVar9)();
    if (now_01.fields._8_8_ == (void *)0x0) goto label_034191b6;
    *(unkbyte10 *)&(now_01.fields._8_8_)->return_type = Var79;
    *(undefined4 *)((long)&(now_01.fields._8_8_)->parameters + 2) =
         *(undefined4 *)((long)&pAVar66[-1]._1.typeMetadataHandle + 2);
    *(undefined2 *)((long)&(now_01.fields._8_8_)->parameters + 6) =
         *(undefined2 *)((long)&pAVar66[-1]._1.typeMetadataHandle + 6);
    IVar75 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    pMVar24 = *(MethodInfo_331B520 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
    IVar50.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x34191a5;
    plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((System_String_o *)IVar75.method,0,pMVar24);
    pvVar40 = pAVar66[-1]._1.generic_class;
    if (pvVar40 == (void *)0x0) goto label_034191b6;
label_03418fde:
    IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar40 + 0x10))->method;
    if (IVar75.rgctxDataDummy == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
    goto label_034191b6;
    IVar50 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x148))->method;
    pAVar66[-1]._1.declaringType = (Il2CppClass *)0x3419002;
    now_00.fields._8_8_ =
         (MethodInfo *)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)IVar75.method,
                    (MethodInfo_362E340 *)IVar50.method);
    pvVar40 = pAVar66[-1]._1.generic_class;
    if ((pvVar40 == (void *)0x0) || (lVar30 = *(long *)((long)pvVar40 + 0x10), lVar30 == 0))
    goto label_034191b6;
    *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
    iVar5 = *(int32_t *)(lVar30 + 0x18);
    *(undefined4 *)(lVar30 + 0x18) = 0;
    if (0 < iVar5) {
      IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar30 + 0x10))->method;
      IVar50.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      pAVar66[-1]._1.declaringType = (Il2CppClass *)0x341903f;
      System_Array__Clear((System_Array_o *)IVar75.method,0,iVar5,(MethodInfo *)0x0);
    }
    if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_034191b6;
    if ((int)(now_00.fields._8_8_)->name < 1) {
      return;
    }
    pAVar33 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0;
    now_01.fields._8_8_ = (void *)0x0;
    pAVar71 = pAVar33;
    if (((ulong)(now_00.fields._8_8_)->name & 0xffffffff) != 0) {
      do {
        pAVar33 = *(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o **)
                   ((long)now_00.fields._8_8_ + (long)now_01.fields._8_8_ * 8 + 0x20);
        if (pAVar33 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
          if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_034191b6;
          pAVar18 = pAVar33[1].klass;
          IVar75 = (Il2CppRGCTXData)pAVar33[1].fields._Value_k__BackingField;
          pIVar15 = (pAVar33->fields)._Value_k__BackingField;
          pAVar66[-1]._1.declaringType = (Il2CppClass *)0x34190b4;
          IVar50 = (Il2CppRGCTXData)plVar67;
          (*(code *)pIVar15)(IVar75.rgctxDataDummy,plVar67,pAVar18);
          pAVar71 = pAVar33;
        }
        pAVar33 = pAVar71;
        now_01.fields._8_8_ = (void *)((long)&(now_01.fields._8_8_)->methodPointer + 1);
        IVar31 = (Il2CppRGCTXData)(long)(int)*(uint *)&(now_00.fields._8_8_)->name;
        if ((long)IVar31.rgctxDataDummy <= (long)now_01.fields._8_8_) {
          return;
        }
        pAVar71 = pAVar33;
      } while (now_01.fields._8_8_ < (void *)(ulong)*(uint *)&(now_00.fields._8_8_)->name);
    }
  }
  pAVar66[-1]._1.declaringType =
       (Il2CppClass *)ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor;
  auVar76 = il2cpp_runtime_helper_022b2ca0();
  pSVar49 = auVar76._8_8_;
  pAVar66[-1]._1.declaringType = (Il2CppClass *)IVar56;
  pAVar66[-1]._1.castClass = (Il2CppClass *)plVar67;
  pAVar66[-1]._1.element_class = (Il2CppClass *)now_00.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-1]._1.this_arg.bits = (void *)IVar48;
  pAVar66[-1]._1.this_arg.data = pAVar33;
  *(Il2CppRGCTXData *)&pAVar66[-1]._1.byval_arg.bits = (MethodInfo *)now_01.fields._8_8_;
  pAVar66[-1]._1.byval_arg.data = auVar76._0_8_;
  now_01.fields._8_8_ = IVar31;
  IVar63 = now.fields._8_8_;
  if (g_data_057a8cec == '\0') {
    pAVar66[-1]._1.namespaze = (char *)0x34191ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pAVar66[-1]._1.namespaze = (char *)0x34191fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cec = '\x01';
  }
  lVar30 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(now.fields._8_8_)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    pAVar66[-1]._1.namespaze = (char *)0x341921e;
    lVar30 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-1]._1.namespaze = (char *)0x3419226;
  pSVar47 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar30);
  method_03 = *(MethodInfo_315DA50 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now.fields._8_8_)->klass)->fields + 0xc0) + 8);
  pAVar66[-1]._1.namespaze = (char *)0x3419240;
  System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object____ctor(pSVar47,method_03);
  (IVar75.method)->return_type = (Il2CppType *)pSVar47;
  pAVar66[-1]._1.namespaze = (char *)0x3419250;
  il2cpp_runtime_helper_022b4080(&(IVar75.method)->return_type);
  now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
  pAVar66[-1]._1.namespaze = (char *)0x341925a;
  System_Object___ctor((Il2CppObject *)IVar75.method,(MethodInfo *)0x0);
  if (IVar50.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
    pAVar66[-1]._1.namespaze = (char *)0x3419439;
    uVar37 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pAVar66[-1]._1.namespaze = (char *)0x3419441;
    IVar50.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(uVar37);
    pAVar66[-1]._1.namespaze = (char *)0x3419450;
    pSVar51 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pAVar66[-1]._1.namespaze = (char *)0x341945d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)IVar50.method,pSVar51,(MethodInfo *)0x0);
    pAVar66[-1]._1.namespaze = (char *)0x3419468;
    now_00.fields._8_8_ = now.fields._8_8_;
    IVar56.rgctxDataDummy = IVar50.rgctxDataDummy;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (IVar75.rgctxDataDummy != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&(IVar75.method)->invoker_method)->
      _buckets = (System_Int32_array *)IVar50;
      pAVar66[-1]._1.namespaze = (char *)0x3419283;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)
                         &(IVar75.method)->invoker_method,IVar50.rgctxDataDummy);
      if (pSVar49 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pAVar66[-1]._1.namespaze = (char *)0x34192a9;
          lVar30 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar30 + 0xe4) == 0) {
          pAVar66[-1]._1.namespaze = (char *)0x34192ba;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pAVar66[-1]._1.namespaze = (char *)0x34192da;
          lVar30 = il2cpp_runtime_helper_023009c0(lVar30);
        }
        pSVar49 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   (*(long *)(lVar30 + 0xb8) + 8);
        if (pSVar49 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x341930b;
            lVar30 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar30 + 0xe4) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x341931c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(now.fields._8_8_)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x341933c;
            il2cpp_runtime_helper_023009c0(lVar30);
          }
          pAVar66[-1]._1.namespaze = (char *)0x3419355;
          pSVar49 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pAVar66[-1]._1.namespaze = (char *)0x3419374;
          System_Func_DateTimeOffset____ctor();
          lVar30 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(now.fields._8_8_)->klass)->fields + 0xc0);
          lVar36 = *(long *)(lVar30 + 0x28);
          if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x3419394;
            lVar36 = il2cpp_runtime_helper_023009c0(lVar36);
            lVar30 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(now.fields._8_8_)->klass)->fields + 0xc0);
          }
          *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(*(long *)(lVar36 + 0xb8) + 8)
               = pSVar49;
          lVar30 = *(long *)(lVar30 + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pAVar66[-1]._1.namespaze = (char *)0x34193bf;
            lVar30 = il2cpp_runtime_helper_023009c0(lVar30);
          }
          lVar30 = *(long *)(lVar30 + 0xb8);
          pAVar66[-1]._1.namespaze = (char *)0x34193d2;
          il2cpp_runtime_helper_022b4080(lVar30 + 8,pSVar49);
        }
      }
      (IVar75.method)->name = (char *)pSVar49;
      pAVar66[-1]._1.namespaze = (char *)0x34193e2;
      il2cpp_runtime_helper_022b4080(&(IVar75.method)->name,pSVar49);
      if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pAVar66[-1]._1.namespaze = (char *)0x34193ff;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar31 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      (IVar75.method)->klass = (Il2CppClass *)IVar31;
      il2cpp_runtime_helper_022b4080(&(IVar75.method)->klass,IVar31.rgctxDataDummy);
      return;
    }
  }
  pAVar66[-1]._1.namespaze = "\x0f\x1f";
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.namespaze = (char *)auVar76._0_8_;
  pIVar34 = (IVar56.method)->return_type;
  if (pIVar34 != (Il2CppType *)0x0) {
    lVar30 = *(long *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x40);
    pAVar66[-1]._1.namespaze = pAVar66[-1]._1.namespaze;
    uVar37 = *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x108);
    pAVar66[-1]._1.name = (char *)0x325e8f8;
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___FindEntry
              (pIVar34,(ulong)now_00.fields._8_8_ & 0xff,uVar37);
    return;
  }
  pAVar66[-1]._1.name = (char *)0x3419498;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.name = (char *)auVar76._0_8_;
  pAVar66[-1]._1.name = (char *)0x0;
  pvVar40 = *(void **)&pIVar34[2].bits;
  if (pvVar40 != (void *)0x0) {
    now_01.fields._8_8_ = *(Il2CppRGCTXData *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x48);
    now_00.fields._8_8_ = now_00.fields._8_8_ & 0xff;
    pAVar66[-1]._1.gc_desc = (void *)0x34194cd;
    bVar29 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                       (pvVar40,now_00.fields._8_8_,&pAVar66[-1]._1.name);
    if ((char)bVar29 == '\0') {
      return;
    }
    if (pAVar66[-1]._1.name != (char *)0x0) {
      return;
    }
  }
  pAVar66[-1]._1.gc_desc = (void *)0x34194ec;
  uVar37 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.gc_desc = (void *)uVar37;
  pSVar69 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)pvVar40 + 0x28);
  if (pSVar69 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___Clear
              (pSVar69,*(MethodInfo_315E880 **)
                        (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                             &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x60));
    return;
  }
  pAVar66[-1]._1.image = (void *)0x3419514;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-1]._1.image = auVar76._0_8_;
  IVar56 = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(pSVar69->fields)._freeCount;
  if (IVar56.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___Remove
              (IVar56.rgctxDataDummy,(ulong)now_00.fields._8_8_ & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pAVar66[-2].vtable._3_ToString.method = (MethodInfo *)0x3419548;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  IVar48 = auVar76._8_8_;
  pAVar66[-2].vtable._3_ToString.method = (MethodInfo *)pSVar47;
  pAVar66[-2].vtable._3_ToString.methodPtr = (Il2CppMethodPointer)now.fields._8_8_;
  pAVar66[-2].vtable._2_GetHashCode.method = (MethodInfo *)IVar31;
  pAVar66[-2].vtable._2_GetHashCode.methodPtr = (Il2CppMethodPointer)IVar75;
  pAVar66[-2].vtable._1_Finalize.method = (MethodInfo *)pSVar49;
  pAVar66[-2].vtable._1_Finalize.methodPtr = (Il2CppMethodPointer)IVar50;
  pAVar66[-2].vtable._0_Equals.method = (MethodInfo *)auVar76._0_8_;
  uVar55 = (ulong)now_01.fields._8_8_ & 0xffffffff;
  now.fields._8_8_ = now_00.fields._8_8_ & 0xffffffff;
  pAVar66[-2].vtable._0_Equals.method = (MethodInfo *)0x0;
  lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar63.method)->klass)->fields + 0xc0) + 0x70);
  IVar31 = IVar63;
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341958e;
    lVar30 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419596;
  now_02.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar30);
  IVar50 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(IVar63.method)->klass)->fields + 0xc0) + 0x78))->method;
  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34195b0;
  IVar75.rgctxDataDummy = now_02.fields._8_8_;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)
             now_02.fields._8_8_,(MethodInfo_27BBA50 *)IVar50.method);
  if (now_02.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    (now_02.fields._8_8_)->invoker_method = (InvokerMethod)IVar56;
    pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34195cc;
    IVar50 = IVar56;
    il2cpp_runtime_helper_022b4080(&(now_02.fields._8_8_)->invoker_method);
    *(char *)&(now_02.fields._8_8_)->name = (char)now.fields._offsetMinutes;
    if (IVar48.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar75 = (Il2CppRGCTXData)(IVar56.method)->return_type;
    if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      now_01.fields._8_8_ =
           *(Il2CppRGCTXData *)
            (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar63.method)->klass)->fields + 0xc0) + 0x48);
      IVar50.rgctxDataDummy = now_00.fields._8_8_ & 0xff;
      pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419601;
      bVar29 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                         (IVar75.rgctxDataDummy,IVar50.rgctxDataDummy,&pAVar66[-2].vtable._0_Equals.method);
      if ((char)bVar29 == '\0') {
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar63.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419622;
          lVar30 = il2cpp_runtime_helper_023009c0();
        }
        pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341962a;
        now.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar30);
        IVar50 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar63.method)->klass)->fields + 0xc0) + 0x88))->method;
        pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419647;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)now.fields._8_8_,
                   (MethodInfo_31EFAA0 *)IVar50.method);
        pAVar66[-2].vtable._0_Equals.method = (MethodInfo *)now.fields._8_8_;
        IVar75 = (Il2CppRGCTXData)(IVar56.method)->return_type;
        if (IVar75.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03419833;
        uVar37 = *(undefined8 *)
                  (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar63.method)->klass)->fields + 0xc0) + 0x90);
        IVar50._4_4_ = 0;
        IVar50._0_4_ = *(uint *)&(now_02.fields._8_8_)->name;
        pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419675;
        System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___set_Item
                  (IVar75.rgctxDataDummy,IVar50.rgctxDataDummy,now.fields._8_8_,uVar37);
      }
      now_01.fields._8_8_ = (Il2CppRGCTXData)(IVar56.method)->name;
      if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar50 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
        IVar75 = (Il2CppRGCTXData)((now_01.fields._8_8_)->field8_0x40).genericMethod;
        pcVar9 = (code *)(now_01.fields._8_8_)->name;
        pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341968d;
        auVar77 = (*pcVar9)();
        if ((char)uVar55 == '\0') {
          now_01.fields._8_8_ = (void *)(auVar77._8_8_ & 0xffffffff);
          IVar50 = (Il2CppRGCTXData)pAVar66[-2].vtable._0_Equals.method;
          method_12 = *(MethodInfo_331A460 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar63.method)->klass)->fields + 0xc0) + 0x98);
          pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34196b8;
          now_01.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar77._0_8_;
          IVar75 = IVar56;
          IVar31 = IVar48;
          bVar29 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)IVar56.method,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar50.method,
                              now_01,(System_Action_AottgQueryResult_TValue___o *)IVar48.method,
                              (MethodInfo_3319840 *)method_12);
          if ((char)bVar29 != '\0') {
            return;
          }
        }
        lVar30 = (long)pAVar66[-2].vtable._0_Equals.method;
        if (lVar30 != 0) {
          if (*(char *)(lVar30 + 0x38) == '\0') {
            pMVar19 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar63.method)->klass)->fields + 0xc0) + 200);
            pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419707;
            IVar50.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar19);
          }
          else {
            pIVar15 = *(Il2CppObject **)(lVar30 + 0x18);
            pMVar16 = *(MethodInfo_331B450 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar63.method)->klass)->fields + 0xc0) + 0xa8);
            pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34196ee;
            IVar50.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar15,pMVar16);
          }
          pIVar34 = (IVar48.method)->return_type;
          IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar48.klass)->_1)[8].method;
          pcVar9 = (code *)(IVar48.method)->name;
          pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419719;
          (*pcVar9)(IVar75.rgctxDataDummy,IVar50.rgctxDataDummy,pIVar34);
          lVar30 = (long)pAVar66[-2].vtable._0_Equals.method;
          if ((lVar30 != 0) &&
             (IVar75 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar30 + 0x10))->method,
             IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now_01.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar63.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar75.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = (Il2CppArrayBounds *)(IVar75.method)->invoker_method;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar75.method)->name;
              IVar50 = IVar48;
              if (uVar4 < (uint)pIVar6[1].lower_bound) {
                now_01.fields._8_4_ = uVar4 + 1;
                now_01.fields._12_4_ = 0;
                *(uint *)&(IVar75.method)->name = now_01.fields._8_4_;
                IVar75.rgctxDataDummy = &pIVar6[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar6[2].length + (int)uVar4))->klass = (Il2CppClass *)IVar48;
                pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341977a;
                il2cpp_runtime_helper_022b4080();
                lVar30 = (long)pAVar66[-2].vtable._0_Equals.method;
              }
              else {
                pMVar20 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341979f;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar75.method,
                           (Il2CppObject *)IVar48.method,pMVar20);
                lVar30 = (long)pAVar66[-2].vtable._0_Equals.method;
              }
              if (lVar30 != 0) {
                if (*(char *)(lVar30 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)(lVar30 + 0x3a) = 1;
                pIVar6 = (Il2CppArrayBounds *)(IVar56.method)->invoker_method;
                uVar3 = *(undefined1 *)&(now_02.fields._8_8_)->name;
                IVar48._1_7_ = auVar76._9_7_;
                IVar48._0_1_ = uVar3;
                lVar30 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(IVar63.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
                  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34197de;
                  lVar30 = il2cpp_runtime_helper_023009c0();
                }
                pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34197e6;
                IVar56.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar30);
                now_01.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar63.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341980d;
                IVar50.rgctxDataDummy = now_02.fields._8_8_;
                IVar75.rgctxDataDummy = IVar56.rgctxDataDummy;
                System_Action_object____ctor();
                now.fields._8_8_ = (Il2CppObject *)0x0;
                if (pIVar6 != (Il2CppArrayBounds *)0x0) {
                  uVar37 = *(undefined8 *)&pIVar6[2].lower_bound;
                  iVar21 = pIVar6[4].length;
                  pcVar9 = *(code **)&pIVar6[1].lower_bound;
                  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419824;
                  (*pcVar9)(iVar21,uVar3,IVar56.rgctxDataDummy,uVar37);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_03419833:
  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419838;
  il2cpp_runtime_helper_022b2c90();
  pAVar66[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.naturalAligment = (MethodInfo *)IVar56;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.interfaces_count = (MethodInfo *)IVar63;
  pAVar66[-2]._2.field_count = (short)uVar55;
  pAVar66[-2]._2.event_count = (short)(uVar55 >> 0x10);
  pAVar66[-2]._2.nested_type_count = (short)(uVar55 >> 0x20);
  pAVar66[-2]._2.vtable_count = (short)(uVar55 >> 0x30);
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.token = (Il2CppClass *)IVar48;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.thread_static_fields_offset = (MethodInfo *)now_02.fields._8_8_;
  *(MethodInfo_331A460 **)&pAVar66[-2]._2.element_size = method_12;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.static_fields_size = IVar31;
  IVar56.rgctxDataDummy = now_01.fields._8_8_ & 0xffffffff;
  now_00.fields._8_8_ = IVar50;
  plVar67 = (long *)IVar75;
  if (g_data_057a8ced == '\0') {
    *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419879;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419885;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419891;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar67 = &TypeInfo_TimeSpan;
    *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x341989d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ced = '\x01';
  }
  pAVar66[-2]._2.cctor_thread = 0;
  pAVar66[-2]._2.genericContainerHandle = (void *)0x0;
  IVar48.rgctxDataDummy = IVar56.rgctxDataDummy;
  if (IVar50.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar50.method)->field7_0x38 == '\0') {
label_03419969:
      if (*(char *)((long)&(IVar50.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar75.method)->klass)->fields;
      if (lVar30 != 0) {
        cVar28 = *(char *)(lVar30 + 0x18);
        pvVar40 = *(void **)(lVar30 + 0x20);
        *(char *)&pAVar66[-2]._2.cctor_thread = cVar28;
        pAVar66[-2]._2.genericContainerHandle = pvVar40;
        if (cVar28 == '\0') {
          return;
        }
        now.fields._8_8_ = (Il2CppRGCTXData)(IVar50.method)->return_type;
        Var26 = *(unkuint10 *)&(IVar50.method)->return_type;
        IVar63._2_6_ = 0;
        IVar63._0_2_ = *(ushort *)&(IVar50.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34199b9;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34199cd;
        left_06.fields._8_8_ = IVar56.rgctxDataDummy;
        left_06.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_09.rgctxDataDummy;
        right_06.fields._10_6_ = 0;
        right_06.fields._0_10_ = Var26;
        now_01.fields._8_8_ = IVar63;
        plVar67 = (long *)extraout_RDX_09;
        IVar48 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_06,right_06,(MethodInfo *)0x0);
        lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar75.method)->klass)->fields;
        now_00.fields._8_8_ = IVar56;
        if (lVar30 != 0) {
          pvVar40 = *(void **)(lVar30 + 0x20);
          *(undefined1 *)&pAVar66[-2]._2.cctor_thread = *(undefined1 *)(lVar30 + 0x18);
          pAVar66[-2]._2.genericContainerHandle = pvVar40;
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34199ff;
          __this_04.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_04.fields._0_8_ = &pAVar66[-2]._2.cctor_thread;
          IVar63 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_04,method_10);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a1a;
            il2cpp_runtime_helper_02337ed0();
          }
          now.fields._8_8_ = (Il2CppObject *)0x0;
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a29;
          bVar29 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)IVar48,(System_TimeSpan_o)IVar63,(MethodInfo *)0x0);
          if ((char)bVar29 == '\0') {
            return;
          }
          plVar67 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar50.method)->klass)->fields;
          pMVar24 = *(MethodInfo_331B520 **)
                     (*(long *)(*(long *)(*(long *)&pAVar66[-2]._2.element_size + 0x20) + 0xc0) + 0x108);
          now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a52;
          pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar67,1,pMVar24);
          lVar36._0_4_ = pAVar66[-2]._2.static_fields_size;
          lVar36._4_4_ = pAVar66[-2]._2.thread_static_fields_size;
          now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (lVar36 != 0) {
label_03419a5c:
            uVar37 = *(undefined8 *)(lVar36 + 0x28);
            uVar11 = *(undefined8 *)(lVar36 + 0x40);
            pcVar9 = *(code **)(lVar36 + 0x18);
            *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a6a;
            (*pcVar9)(uVar11,pAVar32,uVar37);
            return;
          }
        }
      }
    }
    else {
      now.fields._8_8_ = (Il2CppRGCTXData)(IVar50.method)->return_type;
      Var26 = *(unkuint10 *)&(IVar50.method)->return_type;
      now_01.fields._10_6_ = 0;
      now_01.fields._offsetMinutes = *(ushort *)&(IVar50.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34198df;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x34198f3;
      left_05.fields._8_8_ = IVar56.rgctxDataDummy;
      left_05.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_09.rgctxDataDummy;
      right_05.fields._10_6_ = 0;
      right_05.fields._0_10_ = Var26;
      now_00.fields._8_8_ = IVar56.rgctxDataDummy;
      plVar67 = (long *)extraout_RDX_09;
      IVar63 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_05,right_05,(MethodInfo *)0x0);
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar75.method)->klass)->fields;
      if (lVar30 != 0) {
        now.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar30 + 0x10))->rgctxDataDummy;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419920;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x341992d;
        now_00.fields._8_8_ = now.fields._8_8_;
        plVar67 = (long *)IVar63;
        bVar29 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)IVar63,(System_TimeSpan_o)now.fields._8_8_,(MethodInfo *)0x0);
        if ((char)bVar29 == '\0') goto label_03419969;
        plVar67 = (long *)(IVar50.method)->name;
        pMVar17 = *(MethodInfo_331B380 **)
                   (*(long *)(*(long *)(*(long *)&pAVar66[-2]._2.element_size + 0x20) + 0xc0) + 0x100);
        now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
        *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419956;
        pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar67,1,pMVar17);
        lVar36._0_4_ = pAVar66[-2]._2.static_fields_size;
        lVar36._4_4_ = pAVar66[-2]._2.thread_static_fields_size;
        if (lVar36 != 0) goto label_03419a5c;
        now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  *(undefined8 *)&pAVar66[-2]._2.cctor_finished = 0x3419a87;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.cctor_finished = (void *)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-2]._2.initializationExceptionGCHandle = (MethodInfo *)extraout_RDX_09;
  pAVar66[-2]._2.unity_user_data = (void *)IVar63;
  pAVar66[-2]._2.typeHierarchy = (Il2CppClass **)IVar50;
  pvVar40 = now_00.fields._8_8_ & 0xffffffff;
  now.fields._8_8_ = now_01.fields._8_8_;
  IVar56 = now_00.fields._8_8_;
  if (g_data_057a8cee == '\0') {
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419aba;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cee = '\x01';
  }
  pAVar66[-2].static_fields = (void *)0x0;
  IVar50 = (Il2CppRGCTXData)((MethodInfo *)plVar67)->return_type;
  pAVar33 = extraout_RDX_10;
  if (IVar50.rgctxDataDummy == (System_Collections_Generic_List_object__o *)0x0) {
label_03419dcd:
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419dd2;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    now.fields._8_8_ =
         *(Il2CppRGCTXData *)
          (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x48);
    IVar56.rgctxDataDummy = now_00.fields._8_8_ & 0xff;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419af4;
    bVar29 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                       (IVar50.rgctxDataDummy,IVar56.rgctxDataDummy,&pAVar66[-2].static_fields);
    if ((char)bVar29 == '\0') {
      return;
    }
    if (pAVar66[-2].static_fields == (void *)0x0) goto label_03419dcd;
    *(undefined1 *)((long)pAVar66[-2].static_fields + 0x3a) = 0;
    if (extraout_RDX_10 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      IVar56 = (Il2CppRGCTXData)
               ((Il2CppRGCTXData *)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x118))->method;
      pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419b34;
      IVar50 = "unknown_error";
      pAVar33 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error".method,(MethodInfo_331AB10 *)IVar56.method);
      if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_03419dcd;
    }
    IVar50 = (Il2CppRGCTXData)pAVar66[-2].static_fields;
    if (IVar50.rgctxDataDummy == (System_Collections_Generic_List_object__o *)0x0) goto label_03419dcd;
    if ((char)(pAVar33->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)&(IVar50.method)->field7_0x38 = 1;
      IVar56 = (Il2CppRGCTXData)(pAVar33->fields)._Value_k__BackingField;
      (IVar50.method)->name = (char *)IVar56;
      pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419b6f;
      il2cpp_runtime_helper_022b4080(&(IVar50.method)->name);
      pvVar44 = pAVar66[-2].static_fields;
      IVar50.rgctxDataDummy = (System_Collections_Generic_List_object__o *)0x0;
      if (pvVar44 != (void *)0x0) {
        *(undefined8 *)((long)pvVar44 + 0x20) = 0;
        IVar50.rgctxDataDummy = pvVar44 + 0x20;
        IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419b90;
        il2cpp_runtime_helper_022b4080();
        now.fields._8_8_ = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
        if (now.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
          pAVar33 = pAVar66[-2].static_fields;
          IVar56 = (Il2CppRGCTXData)(now.fields._8_8_)->return_type;
          IVar50 = *(Il2CppRGCTXData *)&(now.fields._8_8_)->field8_0x40;
          pcVar9 = (code *)(now.fields._8_8_)->name;
          pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419bad;
          Var79 = (*pcVar9)();
          if (pAVar33 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
            *(unkbyte10 *)(pAVar33 + 1) = Var79;
            *(undefined2 *)((long)&pAVar33[1].monitor + 6) =
                 *(undefined2 *)((long)&pAVar66[-2].rgctx_data + 6);
            *(undefined4 *)((long)&pAVar33[1].monitor + 2) =
                 *(undefined4 *)((long)&pAVar66[-2].rgctx_data + 2);
            if (pAVar66[-2].static_fields != (void *)0x0) {
              IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pAVar66[-2].static_fields + 0x18))->method;
              pMVar17 = *(MethodInfo_331B380 **)
                         (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                              &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
              IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
              pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419bf9;
              plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                          ((Il2CppObject *)IVar50.method,0,pMVar17);
              pvVar44 = pAVar66[-2].static_fields;
              goto joined_r0x03419c04;
            }
          }
        }
      }
      goto label_03419dcd;
    }
    if (*(char *)&(IVar50.method)->field7_0x38 != '\0') {
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &((MethodInfo *)plVar67)->klass)->fields;
      if (lVar30 != 0) {
        if (*(char *)(lVar30 + 0x28) == '\0') goto label_03419d4a;
        IVar56 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
        (IVar50.method)->klass = (Il2CppClass *)IVar56;
        IVar50.rgctxDataDummy = &(IVar50.method)->klass;
        pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d07;
        il2cpp_runtime_helper_022b4080();
        if (pAVar66[-2].static_fields != (void *)0x0) {
          IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pAVar66[-2].static_fields + 0x18))->method;
          IVar56 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
          pMVar23 = *(MethodInfo_331B660 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
          pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d34;
          plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                      ((Il2CppObject *)IVar50.method,(System_String_o *)IVar56.method,pMVar23)
          ;
          pvVar44 = pAVar66[-2].static_fields;
joined_r0x03419c04:
          if (pvVar44 != (void *)0x0) goto label_03419c0a;
        }
      }
      goto label_03419dcd;
    }
label_03419d4a:
    *(undefined2 *)&(IVar50.method)->field7_0x38 = 0x100;
    (IVar50.method)->name = (char *)0x0;
    IVar56 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    (IVar50.method)->klass = (Il2CppClass *)IVar56;
    IVar50.rgctxDataDummy = &(IVar50.method)->klass;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d69;
    il2cpp_runtime_helper_022b4080();
    now.fields._8_8_ = (Il2CppRGCTXData)((MethodInfo *)plVar67)->name;
    if (now.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03419dcd;
    pvVar40 = pAVar66[-2].static_fields;
    IVar56 = (Il2CppRGCTXData)(now.fields._8_8_)->return_type;
    IVar50 = *(Il2CppRGCTXData *)&(now.fields._8_8_)->field8_0x40;
    pcVar9 = (code *)(now.fields._8_8_)->name;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d82;
    Var79 = (*pcVar9)();
    if (pvVar40 == (void *)0x0) goto label_03419dcd;
    *(unkbyte10 *)((long)pvVar40 + 0x28) = Var79;
    *(undefined4 *)((long)pvVar40 + 0x32) = *(undefined4 *)((long)&pAVar66[-2].rgctx_data + 2);
    *(undefined2 *)((long)pvVar40 + 0x36) = *(undefined2 *)((long)&pAVar66[-2].rgctx_data + 6);
    IVar50 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    pMVar24 = *(MethodInfo_331B520 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
    IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419dbc;
    plVar67 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((System_String_o *)IVar50.method,0,pMVar24);
    pvVar44 = pAVar66[-2].static_fields;
    if (pvVar44 == (void *)0x0) goto label_03419dcd;
label_03419c0a:
    IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar44 + 0x10))->method;
    if (IVar50.rgctxDataDummy == (System_Collections_Generic_List_object__o *)0x0) goto label_03419dcd;
    IVar56 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x148))->method;
    pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419c2e;
    now_01.fields._8_8_ =
         (MethodInfo *)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)IVar50.method,
                    (MethodInfo_362E340 *)IVar56.method);
    if ((pAVar66[-2].static_fields == (void *)0x0) ||
       (lVar30 = *(long *)((long)pAVar66[-2].static_fields + 0x10), lVar30 == 0)) goto label_03419dcd;
    *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
    iVar5 = *(int32_t *)(lVar30 + 0x18);
    *(undefined4 *)(lVar30 + 0x18) = 0;
    if (0 < iVar5) {
      IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar30 + 0x10))->method;
      IVar56.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      now.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419c6b;
      System_Array__Clear((System_Array_o *)IVar50.method,0,iVar5,(MethodInfo *)0x0);
    }
    if (now_01.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03419dcd;
    if ((int)(now_01.fields._8_8_)->name < 1) {
      return;
    }
    pvVar40 = (void *)0x0;
    pAVar33 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0;
    pvVar44 = pvVar40;
    if (((ulong)(now_01.fields._8_8_)->name & 0xffffffff) != 0) {
      do {
        pvVar40 = *(void **)((long)now_01.fields._8_8_ + (long)pAVar33 * 8 + 0x20);
        if (pvVar40 != (void *)0x0) {
          if (pvVar40 == (void *)0x0) goto label_03419dcd;
          uVar37 = *(undefined8 *)((long)pvVar40 + 0x28);
          IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar40 + 0x40))->method;
          pcVar9 = *(code **)((long)pvVar40 + 0x18);
          pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419cd0;
          IVar56 = (Il2CppRGCTXData)plVar67;
          (*pcVar9)(IVar50.rgctxDataDummy,plVar67,uVar37);
          pvVar44 = pvVar40;
        }
        pvVar40 = pvVar44;
        pAVar33 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)((long)&pAVar33->klass + 1);
        now.fields._8_8_ = (Il2CppRGCTXData)(long)(int)*(uint *)&(now_01.fields._8_8_)->name;
        if ((long)now.fields._8_8_ <= (long)pAVar33) {
          return;
        }
        pvVar44 = pvVar40;
      } while (pAVar33 < (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)
                         (ulong)*(uint *)&(now_01.fields._8_8_)->name);
    }
  }
  pAVar66[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419dd7;
  auVar76 = il2cpp_runtime_helper_022b2ca0();
  pcVar35 = auVar76._8_8_;
  pAVar66[-2]._1.implementedInterfaces = pvVar40;
  pAVar66[-2]._1.nestedTypes = (Il2CppClass **)plVar67;
  pAVar66[-2]._1.methods = (void *)now_01.fields._8_8_;
  pAVar66[-2]._1.properties = (void *)IVar48;
  pAVar66[-2]._1.events = (void *)IVar75;
  pAVar66[-2]._1.fields = pAVar33;
  pAVar66[-2]._1.klass = (Il2CppClass *)auVar76._0_8_;
  now_02.fields._8_8_ = now.fields._8_8_;
  t1_00 = IVar31;
  if (g_data_057a8cef == '\0') {
    pAVar66[-2]._1.interopData = (void *)0x3419e0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pAVar66[-2]._1.interopData = (void *)0x3419e1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cef = '\x01';
  }
  lVar30 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar31.method)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    pAVar66[-2]._1.interopData = (void *)0x3419e3e;
    lVar30 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-2]._1.interopData = (void *)0x3419e46;
  pSVar47 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar30);
  method_04 = *(MethodInfo_3161460 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(IVar31.method)->klass)->fields + 0xc0) + 8);
  pAVar66[-2]._1.interopData = (void *)0x3419e60;
  System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object____ctor(pSVar47,method_04);
  (IVar50.method)->return_type = (Il2CppType *)pSVar47;
  pAVar66[-2]._1.interopData = (void *)0x3419e70;
  il2cpp_runtime_helper_022b4080(&(IVar50.method)->return_type);
  now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
  pAVar66[-2]._1.interopData = (void *)0x3419e7a;
  System_Object___ctor((Il2CppObject *)IVar50.method,(MethodInfo *)0x0);
  if (IVar56.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
    pAVar66[-2]._1.interopData = (void *)0x341a059;
    uVar37 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pAVar66[-2]._1.interopData = (void *)0x341a061;
    IVar56.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(uVar37);
    pAVar66[-2]._1.interopData = (void *)0x341a070;
    pSVar51 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pAVar66[-2]._1.interopData = (void *)0x341a07d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)IVar56.method,pSVar51,(MethodInfo *)0x0);
    pAVar66[-2]._1.interopData = (void *)0x341a088;
    now_00.fields._8_8_ = IVar31;
    IVar75.rgctxDataDummy = IVar56.rgctxDataDummy;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    IVar75.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (IVar50.rgctxDataDummy != (System_Collections_Generic_List_object__o *)0x0) {
      ((System_Collections_Generic_List_object__Fields *)&(IVar50.method)->invoker_method)->_items =
           (System_Object_array *)IVar56;
      pAVar66[-2]._1.interopData = (void *)0x3419ea3;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_List_object__Fields *)&(IVar50.method)->invoker_method,
                         IVar56.rgctxDataDummy);
      if (pcVar35 == (char *)0x0) {
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar31.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pAVar66[-2]._1.interopData = (void *)0x3419ec9;
          lVar30 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar30 + 0xe4) == 0) {
          pAVar66[-2]._1.interopData = (void *)0x3419eda;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar31.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pAVar66[-2]._1.interopData = (void *)0x3419efa;
          lVar30 = il2cpp_runtime_helper_023009c0(lVar30);
        }
        pcVar35 = *(char **)(*(long *)(lVar30 + 0xb8) + 8);
        if (pcVar35 == (char *)0x0) {
          lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar31.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419f2b;
            lVar30 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar30 + 0xe4) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419f3c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar31.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419f5c;
            il2cpp_runtime_helper_023009c0(lVar30);
          }
          pAVar66[-2]._1.interopData = (void *)0x3419f75;
          pcVar35 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pAVar66[-2]._1.interopData = (void *)0x3419f94;
          System_Func_DateTimeOffset____ctor();
          lVar30 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar31.method)->klass)->fields + 0xc0);
          lVar36 = *(long *)(lVar30 + 0x28);
          if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419fb4;
            lVar36 = il2cpp_runtime_helper_023009c0(lVar36);
            lVar30 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar31.method)->klass)->fields + 0xc0);
          }
          *(char **)(*(long *)(lVar36 + 0xb8) + 8) = pcVar35;
          lVar30 = *(long *)(lVar30 + 0x28);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
            pAVar66[-2]._1.interopData = (void *)0x3419fdf;
            lVar30 = il2cpp_runtime_helper_023009c0(lVar30);
          }
          lVar30 = *(long *)(lVar30 + 0xb8);
          pAVar66[-2]._1.interopData = (void *)0x3419ff2;
          il2cpp_runtime_helper_022b4080(lVar30 + 8,pcVar35);
        }
      }
      (IVar50.method)->name = pcVar35;
      pAVar66[-2]._1.interopData = (void *)0x341a002;
      il2cpp_runtime_helper_022b4080(&(IVar50.method)->name,pcVar35);
      if (now.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pAVar66[-2]._1.interopData = (void *)0x341a01f;
          il2cpp_runtime_helper_02337ed0();
        }
        now.fields._8_8_ = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      (IVar50.method)->klass = (Il2CppClass *)now.fields._8_8_;
      il2cpp_runtime_helper_022b4080(&(IVar50.method)->klass,now.fields._8_8_);
      return;
    }
  }
  pAVar66[-2]._1.interopData = (void *)0x341a08d;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.interopData = (void *)auVar76._0_8_;
  pIVar34 = (IVar75.method)->return_type;
  if (pIVar34 != (Il2CppType *)0x0) {
    lVar30 = *(long *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x40);
    pAVar66[-2]._1.interopData = pAVar66[-2]._1.interopData;
    uVar37 = *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x108);
    pAVar66[-2]._1.typeMetadataHandle = (void *)0x3262308;
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___FindEntry
              (pIVar34,(ulong)now_00.fields._8_8_ & 0xff,uVar37);
    return;
  }
  pAVar66[-2]._1.typeMetadataHandle = (void *)0x341a0b8;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.typeMetadataHandle = (void *)auVar76._0_8_;
  pAVar66[-2]._1.typeMetadataHandle = (void *)0x0;
  pvVar40 = *(void **)&pIVar34[2].bits;
  if (pvVar40 != (void *)0x0) {
    now_02.fields._8_8_ = *(Il2CppRGCTXData *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x48);
    now_00.fields._8_8_ = now_00.fields._8_8_ & 0xff;
    pAVar66[-2]._1.generic_class = (void *)0x341a0ed;
    bVar29 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pvVar40,now_00.fields._8_8_,&pAVar66[-2]._1.typeMetadataHandle);
    if ((char)bVar29 == '\0') {
      return;
    }
    if (pAVar66[-2]._1.typeMetadataHandle != (void *)0x0) {
      return;
    }
  }
  pAVar66[-2]._1.generic_class = (void *)0x341a10c;
  uVar37 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.generic_class = (void *)uVar37;
  pSVar69 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)pvVar40 + 0x28);
  if (pSVar69 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Clear
              (pSVar69,*(MethodInfo_3162290 **)
                        (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                             &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x60));
    return;
  }
  pAVar66[-2]._1.parent = (Il2CppClass *)0x341a134;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.parent = (Il2CppClass *)auVar76._0_8_;
  IVar75 = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(pSVar69->fields)._freeCount;
  if (IVar75.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Remove
              (IVar75.rgctxDataDummy,(ulong)now_00.fields._8_8_ & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar76._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pAVar66[-2]._1.declaringType = (Il2CppClass *)0x341a168;
  auVar76 = il2cpp_runtime_helper_022b2c90();
  onResult_00 = auVar76._8_8_;
  pAVar66[-2]._1.declaringType = (Il2CppClass *)pSVar47;
  pAVar66[-2]._1.castClass = (Il2CppClass *)IVar31;
  pAVar66[-2]._1.element_class = (Il2CppClass *)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-2]._1.this_arg.bits = (MethodInfo *)IVar50;
  pAVar66[-2]._1.this_arg.data = pcVar35;
  *(Il2CppRGCTXData *)&pAVar66[-2]._1.byval_arg.bits = (void *)IVar56;
  pAVar66[-2]._1.byval_arg.data = auVar76._0_8_;
  pvVar40 = now_02.fields._8_8_ & 0xffffffff;
  now.fields._8_8_ = now_00.fields._8_8_ & 0xffffffff;
  pAVar66[-2]._1.byval_arg.data = (void *)0x0;
  lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(t1_00.method)->klass)->fields + 0xc0) + 0x70);
  IVar56 = t1_00;
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    pAVar66[-2]._1.namespaze = (char *)0x341a1ae;
    lVar30 = il2cpp_runtime_helper_023009c0();
  }
  pAVar66[-2]._1.namespaze = (char *)0x341a1b6;
  now_01.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar30);
  IVar31 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(t1_00.method)->klass)->fields + 0xc0) + 0x78))->method;
  pAVar66[-2]._1.namespaze = (char *)0x341a1d0;
  IVar50.rgctxDataDummy = now_01.fields._8_8_;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)
             now_01.fields._8_8_,(MethodInfo_27BBA90 *)IVar31.method);
  if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    (now_01.fields._8_8_)->invoker_method = (InvokerMethod)IVar75;
    pAVar66[-2]._1.namespaze = (char *)0x341a1ec;
    IVar31 = IVar75;
    il2cpp_runtime_helper_022b4080(&(now_01.fields._8_8_)->invoker_method);
    *(char *)&(now_01.fields._8_8_)->name = (char)now.fields._offsetMinutes;
    if (onResult_00.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar50 = (Il2CppRGCTXData)(IVar75.method)->return_type;
    if (IVar50.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      now_02.fields._8_8_ =
           *(Il2CppRGCTXData *)
            (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(t1_00.method)->klass)->fields + 0xc0) + 0x48);
      IVar31.rgctxDataDummy = now_00.fields._8_8_ & 0xff;
      pAVar66[-2]._1.namespaze = (char *)0x341a221;
      bVar29 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (IVar50.rgctxDataDummy,IVar31.rgctxDataDummy,&pAVar66[-2]._1.byval_arg);
      if ((char)bVar29 == '\0') {
        lVar30 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(t1_00.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
          pAVar66[-2]._1.namespaze = (char *)0x341a242;
          lVar30 = il2cpp_runtime_helper_023009c0();
        }
        pAVar66[-2]._1.namespaze = (char *)0x341a24a;
        now.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar30);
        IVar31 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(t1_00.method)->klass)->fields + 0xc0) + 0x88))->method;
        pAVar66[-2]._1.namespaze = (char *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)now.fields._8_8_,
                   (MethodInfo_31EFB10 *)IVar31.method);
        pAVar66[-2]._1.byval_arg.data = (void *)now.fields._8_8_;
        IVar50 = (Il2CppRGCTXData)(IVar75.method)->return_type;
        if (IVar50.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_0341a453;
        uVar37 = *(undefined8 *)
                  (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(t1_00.method)->klass)->fields + 0xc0) + 0x90);
        IVar31._4_4_ = 0;
        IVar31._0_4_ = *(uint *)&(now_01.fields._8_8_)->name;
        pAVar66[-2]._1.namespaze = (char *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (IVar50.rgctxDataDummy,IVar31.rgctxDataDummy,now.fields._8_8_,uVar37);
      }
      now_02.fields._8_8_ = (Il2CppRGCTXData)(IVar75.method)->name;
      if (now_02.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar31 = (Il2CppRGCTXData)(now_02.fields._8_8_)->return_type;
        IVar50 = (Il2CppRGCTXData)((now_02.fields._8_8_)->field8_0x40).genericMethod;
        pcVar9 = (code *)(now_02.fields._8_8_)->name;
        pAVar66[-2]._1.namespaze = (char *)0x341a2ad;
        auVar77 = (*pcVar9)();
        if ((char)pvVar40 == '\0') {
          now_02.fields._8_8_ = (void *)(auVar77._8_8_ & 0xffffffff);
          IVar31 = (Il2CppRGCTXData)pAVar66[-2]._1.byval_arg.data;
          method_12 = *(MethodInfo_331A460 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(t1_00.method)->klass)->fields + 0xc0) + 0x98);
          pAVar66[-2]._1.namespaze = (char *)0x341a2d8;
          now_02.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar77._0_8_;
          IVar50 = IVar75;
          IVar56 = onResult_00;
          bVar29 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)IVar75.method,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar31.method,
                              now_02,(System_Action_AottgQueryResult_TValue___o *)onResult_00.method,method_12
                             );
          if ((char)bVar29 != '\0') {
            return;
          }
        }
        pvVar44 = pAVar66[-2]._1.byval_arg.data;
        if (pvVar44 != (void *)0x0) {
          if (*(char *)((long)pvVar44 + 0x38) == '\0') {
            pMVar19 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(t1_00.method)->klass)->fields + 0xc0) + 200);
            pAVar66[-2]._1.namespaze = (char *)0x341a327;
            IVar31.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar19);
          }
          else {
            pIVar15 = *(Il2CppObject **)((long)pvVar44 + 0x18);
            pMVar16 = *(MethodInfo_331B450 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(t1_00.method)->klass)->fields + 0xc0) + 0xa8);
            pAVar66[-2]._1.namespaze = (char *)0x341a30e;
            IVar31.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar15,pMVar16);
          }
          pIVar34 = (onResult_00.method)->return_type;
          IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(onResult_00.klass)->_1)[8].method;
          pcVar9 = (code *)(onResult_00.method)->name;
          pAVar66[-2]._1.namespaze = (char *)0x341a339;
          (*pcVar9)(IVar50.rgctxDataDummy,IVar31.rgctxDataDummy,pIVar34);
          pvVar44 = pAVar66[-2]._1.byval_arg.data;
          if ((pvVar44 != (void *)0x0) &&
             (IVar50 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar44 + 0x10))->method,
             IVar50.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now_02.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(t1_00.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar50.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = (Il2CppArrayBounds *)(IVar50.method)->invoker_method;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar50.method)->name;
              IVar31 = onResult_00;
              if (uVar4 < (uint)pIVar6[1].lower_bound) {
                now_02.fields._8_4_ = uVar4 + 1;
                now_02.fields._12_4_ = 0;
                *(uint *)&(IVar50.method)->name = now_02.fields._8_4_;
                IVar50.rgctxDataDummy = &pIVar6[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar6[2].length + (int)uVar4))->klass = (Il2CppClass *)onResult_00;
                pAVar66[-2]._1.namespaze = (char *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pvVar44 = pAVar66[-2]._1.byval_arg.data;
              }
              else {
                pMVar20 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                pAVar66[-2]._1.namespaze = (char *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar50.method,
                           (Il2CppObject *)onResult_00.method,pMVar20);
                pvVar44 = pAVar66[-2]._1.byval_arg.data;
              }
              if (pvVar44 != (void *)0x0) {
                if (*(char *)((long)pvVar44 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)((long)pvVar44 + 0x3a) = 1;
                pIVar6 = (Il2CppArrayBounds *)(IVar75.method)->invoker_method;
                uVar3 = *(undefined1 *)&(now_01.fields._8_8_)->name;
                onResult_00._1_7_ = auVar76._9_7_;
                onResult_00._0_1_ = uVar3;
                lVar30 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(t1_00.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
                  pAVar66[-2]._1.namespaze = (char *)0x341a3fe;
                  lVar30 = il2cpp_runtime_helper_023009c0();
                }
                pAVar66[-2]._1.namespaze = (char *)0x341a406;
                IVar75.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar30);
                now_02.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(t1_00.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                pAVar66[-2]._1.namespaze = (char *)0x341a42d;
                IVar31.rgctxDataDummy = now_01.fields._8_8_;
                IVar50.rgctxDataDummy = IVar75.rgctxDataDummy;
                System_Action_object____ctor();
                now.fields._8_8_ = (Il2CppObject *)0x0;
                if (pIVar6 != (Il2CppArrayBounds *)0x0) {
                  uVar37 = *(undefined8 *)&pIVar6[2].lower_bound;
                  iVar21 = pIVar6[4].length;
                  pcVar9 = *(code **)&pIVar6[1].lower_bound;
                  pAVar66[-2]._1.namespaze = (char *)0x341a444;
                  (*pcVar9)(iVar21,uVar3,IVar75.rgctxDataDummy,uVar37);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pAVar66[-2]._1.namespaze = (char *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pAVar66[-2]._1.namespaze = (char *)now.fields._8_8_;
  pAVar66[-2]._1.name = (char *)IVar75;
  pAVar66[-2]._1.gc_desc = (void *)t1_00;
  pAVar66[-2]._1.image = pvVar40;
  pAVar66[-3].vtable._3_ToString.method = (MethodInfo *)onResult_00;
  pAVar66[-3].vtable._3_ToString.methodPtr = (Il2CppMethodPointer)now_01.fields._8_8_;
  pAVar66[-3].vtable._2_GetHashCode.methodPtr = (Il2CppMethodPointer)method_12;
  pAVar66[-3].vtable._2_GetHashCode.method = (MethodInfo *)IVar56;
  IVar56.rgctxDataDummy = now_02.fields._8_8_ & 0xffffffff;
  now_00.fields._8_8_ = IVar31;
  plVar67 = (long *)IVar50;
  if (g_data_057a8cf0 == '\0') {
    pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar67 = &TypeInfo_TimeSpan;
    pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  pAVar66[-3].vtable._0_Equals.method = (MethodInfo *)0x0;
  pAVar66[-3].vtable._1_Finalize.methodPtr = (Il2CppMethodPointer)0x0;
  if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar31.method)->field7_0x38 == '\0') {
label_0341a589:
      if (*(char *)((long)&(IVar31.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar50.method)->klass)->fields;
      if (lVar30 != 0) {
        cVar28 = *(char *)(lVar30 + 0x18);
        pIVar68 = *(Il2CppMethodPointer *)(lVar30 + 0x20);
        *(char *)&pAVar66[-3].vtable._0_Equals.method = cVar28;
        pAVar66[-3].vtable._1_Finalize.methodPtr = pIVar68;
        if (cVar28 == '\0') {
          return;
        }
        now.fields._8_8_ = (Il2CppRGCTXData)(IVar31.method)->return_type;
        Var26 = *(unkuint10 *)&(IVar31.method)->return_type;
        t1_00._2_6_ = 0;
        t1_00._0_2_ = *(ushort *)&(IVar31.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a5ed;
        left_08.fields._8_8_ = IVar56.rgctxDataDummy;
        left_08.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_11.rgctxDataDummy;
        right_08.fields._10_6_ = 0;
        right_08.fields._0_10_ = Var26;
        now_02.fields._8_8_ = t1_00;
        plVar67 = (long *)extraout_RDX_11;
        t1_01 = System_DateTimeOffset__op_Subtraction(left_08,right_08,(MethodInfo *)0x0);
        lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar50.method)->klass)->fields;
        now_00.fields._8_8_ = IVar56;
        if (lVar30 != 0) {
          pIVar68 = *(Il2CppMethodPointer *)(lVar30 + 0x20);
          *(undefined1 *)&pAVar66[-3].vtable._0_Equals.method = *(undefined1 *)(lVar30 + 0x18);
          pAVar66[-3].vtable._1_Finalize.methodPtr = pIVar68;
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a61f;
          __this_05.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_05.fields._0_8_ = &pAVar66[-3].vtable._0_Equals.method;
          t1_00 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_05,method_11);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          now.fields._8_8_ = (Il2CppObject *)0x0;
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a649;
          bVar29 = System_TimeSpan__op_LessThan(t1_01,(System_TimeSpan_o)t1_00,(MethodInfo *)0x0);
          if ((char)bVar29 == '\0') {
            return;
          }
          plVar67 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar31.method)->klass)->fields;
          pMVar24 = *(MethodInfo_331B520 **)
                     (*(long *)(*(long *)(pAVar66[-3].vtable._2_GetHashCode.methodPtr + 0x20) + 0xc0) + 0x108)
          ;
          now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a672;
          pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar67,1,pMVar24);
          pMVar58 = pAVar66[-3].vtable._2_GetHashCode.method;
          now_02.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (pMVar58 != (MethodInfo *)0x0) {
label_0341a67c:
            pIVar34 = pMVar58->return_type;
            pvVar40 = (pMVar58->field8_0x40).genericMethod;
            pcVar9 = (code *)pMVar58->name;
            pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a68a;
            (*pcVar9)(pvVar40,pAVar32,pIVar34);
            return;
          }
        }
      }
    }
    else {
      now.fields._8_8_ = (Il2CppRGCTXData)(IVar31.method)->return_type;
      Var26 = *(unkuint10 *)&(IVar31.method)->return_type;
      now_02.fields._10_6_ = 0;
      now_02.fields._offsetMinutes = *(ushort *)&(IVar31.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a513;
      left_07.fields._8_8_ = IVar56.rgctxDataDummy;
      left_07.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_11.rgctxDataDummy;
      right_07.fields._10_6_ = 0;
      right_07.fields._0_10_ = Var26;
      now_00.fields._8_8_ = IVar56.rgctxDataDummy;
      plVar67 = (long *)extraout_RDX_11;
      t1_00 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_07,right_07,(MethodInfo *)0x0);
      lVar30 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar50.method)->klass)->fields;
      if (lVar30 != 0) {
        now.fields._8_8_ = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar30 + 0x10))->rgctxDataDummy;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a54d;
        now_00.fields._8_8_ = now.fields._8_8_;
        plVar67 = (long *)t1_00;
        bVar29 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)t1_00,(System_TimeSpan_o)now.fields._8_8_,(MethodInfo *)0x0);
        if ((char)bVar29 == '\0') goto label_0341a589;
        plVar67 = (long *)(IVar31.method)->name;
        pMVar17 = *(MethodInfo_331B380 **)
                   (*(long *)(*(long *)(pAVar66[-3].vtable._2_GetHashCode.methodPtr + 0x20) + 0xc0) + 0x100);
        now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
        pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a576;
        pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar67,1,pMVar17);
        pMVar58 = pAVar66[-3].vtable._2_GetHashCode.method;
        if (pMVar58 != (MethodInfo *)0x0) goto label_0341a67c;
        now_02.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pAVar66[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)now.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar66[-3]._2.naturalAligment = (MethodInfo *)extraout_RDX_11;
  *(Il2CppRGCTXData *)&pAVar66[-3]._2.interfaces_count = (MethodInfo *)t1_00;
  *(Il2CppRGCTXData *)&pAVar66[-3]._2.field_count = (MethodInfo *)IVar31;
  if (g_data_057a8cf1 == '\0') {
    pAVar66[-3]._2.element_size = 0x341a6da;
    pAVar66[-3]._2.native_size = 0;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pAVar66[-3]._2.thread_static_fields_offset = 0;
  pAVar66[-3]._2.flags = 0;
  pIVar34 = ((MethodInfo *)plVar67)->return_type;
  if (pIVar34 != (Il2CppType *)0x0) {
    pAVar66[-3]._2.element_size = 0x341a714;
    pAVar66[-3]._2.native_size = 0;
    bVar29 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pIVar34,(ulong)now_00.fields._8_8_ & 0xff,&pAVar66[-3]._2.thread_static_fields_offset)
    ;
    if ((char)bVar29 == '\0') {
      return;
    }
    lVar30 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
    if (lVar30 != 0) {
      *(undefined1 *)(lVar30 + 0x3a) = 0;
      pAVar33 = extraout_RDX_12;
      if (extraout_RDX_12 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
        method_05 = *(MethodInfo_331AB10 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x118);
        pAVar66[-3]._2.element_size = 0x341a754;
        pAVar66[-3]._2.native_size = 0;
        pAVar33 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((System_String_o *)"unknown_error".method,method_05);
        if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_0341a9ed;
      }
      lVar30 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
      if (lVar30 != 0) {
        if ((char)(pAVar33->fields)._Success_k__BackingField == '\0') {
          if (*(char *)(lVar30 + 0x38) == '\0') {
label_0341a96a:
            *(undefined2 *)(lVar30 + 0x38) = 0x100;
            *(undefined8 *)(lVar30 + 0x18) = 0;
            *(System_String_o **)(lVar30 + 0x20) = (pAVar33->fields)._Error_k__BackingField;
            pAVar66[-3]._2.element_size = 0x341a989;
            pAVar66[-3]._2.native_size = 0;
            il2cpp_runtime_helper_022b4080();
            if (((MethodInfo *)plVar67)->name != (char *)0x0) {
              lVar30 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
              pcVar9 = *(code **)(((MethodInfo *)plVar67)->name + 0x18);
              pAVar66[-3]._2.element_size = 0x341a9a2;
              pAVar66[-3]._2.native_size = 0;
              Var79 = (*pcVar9)();
              if (lVar30 != 0) {
                *(unkbyte10 *)(lVar30 + 0x28) = Var79;
                *(undefined4 *)(lVar30 + 0x32) = *(undefined4 *)((long)&pAVar66[-3]._2.token + 2);
                *(uint16_t *)(lVar30 + 0x36) = pAVar66[-3]._2.property_count;
                pSVar51 = (pAVar33->fields)._Error_k__BackingField;
                pMVar24 = *(MethodInfo_331B520 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
                pAVar66[-3]._2.element_size = 0x341a9dc;
                pAVar66[-3]._2.native_size = 0;
                pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache(pSVar51,0,pMVar24);
                lVar42._0_4_ = pAVar66[-3]._2.thread_static_fields_offset;
                lVar42._4_4_ = pAVar66[-3]._2.flags;
joined_r0x0341a95f:
                if ((lVar42 != 0) &&
                   (__this = *(System_Collections_Generic_List_object__o **)(lVar42 + 0x10),
                   __this != (System_Collections_Generic_List_object__o *)0x0)) {
                  method_06 = *(MethodInfo_362E340 **)
                               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                      *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x148
                               );
                  pAVar66[-3]._2.element_size = 0x341a84e;
                  pAVar66[-3]._2.native_size = 0;
                  pSVar52 = System_Collections_Generic_List_object___ToArray(__this,method_06);
                  lVar30 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
                  if ((lVar30 != 0) && (lVar30 = *(long *)(lVar30 + 0x10), lVar30 != 0)) {
                    *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
                    iVar5 = *(int32_t *)(lVar30 + 0x18);
                    *(undefined4 *)(lVar30 + 0x18) = 0;
                    if (0 < iVar5) {
                      array = *(System_Array_o **)(lVar30 + 0x10);
                      pAVar66[-3]._2.element_size = 0x341a88b;
                      pAVar66[-3]._2.native_size = 0;
                      System_Array__Clear(array,0,iVar5,(MethodInfo *)0x0);
                    }
                    if (pSVar52 != (System_Object_array *)0x0) {
                      if ((int)pSVar52->max_length < 1) {
                        return;
                      }
                      uVar55 = 0;
                      if ((pSVar52->max_length & 0xffffffff) != 0) {
                        do {
                          pIVar15 = pSVar52->m_Items[uVar55];
                          if (pIVar15 != (Il2CppObject *)0x0) {
                            if (pIVar15 == (Il2CppObject *)0x0) goto label_0341a9ed;
                            pvVar40 = pIVar15[2].monitor;
                            pIVar22 = pIVar15[4].klass;
                            pcVar9 = pIVar15[1].monitor;
                            pAVar66[-3]._2.element_size = 0x341a8f0;
                            pAVar66[-3]._2.native_size = 0;
                            (*pcVar9)(pIVar22,pAVar32,pvVar40);
                          }
                          uVar55 = uVar55 + 1;
                          uVar4 = (uint)pSVar52->max_length;
                          if ((long)(int)uVar4 <= (long)uVar55) {
                            return;
                          }
                        } while (uVar55 < uVar4);
                      }
                      goto label_0341a9f2;
                    }
                  }
                }
              }
            }
          }
          else {
            lVar36 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &((MethodInfo *)plVar67)->klass)->fields;
            if (lVar36 != 0) {
              if (*(char *)(lVar36 + 0x28) == '\0') goto label_0341a96a;
              *(System_String_o **)(lVar30 + 0x20) = (pAVar33->fields)._Error_k__BackingField;
              pAVar66[-3]._2.element_size = 0x341a927;
              pAVar66[-3]._2.native_size = 0;
              il2cpp_runtime_helper_022b4080();
              lVar30 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
              if (lVar30 != 0) {
                pIVar15 = *(Il2CppObject **)(lVar30 + 0x18);
                pSVar51 = (pAVar33->fields)._Error_k__BackingField;
                pMVar23 = *(MethodInfo_331B660 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
                pAVar66[-3]._2.element_size = 0x341a954;
                pAVar66[-3]._2.native_size = 0;
                pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                    (pIVar15,pSVar51,pMVar23);
                lVar42._0_4_ = pAVar66[-3]._2.thread_static_fields_offset;
                lVar42._4_4_ = pAVar66[-3]._2.flags;
                goto joined_r0x0341a95f;
              }
            }
          }
        }
        else {
          *(undefined2 *)(lVar30 + 0x38) = 1;
          *(Il2CppObject **)(lVar30 + 0x18) = (pAVar33->fields)._Value_k__BackingField;
          pAVar66[-3]._2.element_size = 0x341a78f;
          pAVar66[-3]._2.native_size = 0;
          il2cpp_runtime_helper_022b4080(lVar30 + 0x18);
          lVar30 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
          if (lVar30 != 0) {
            *(undefined8 *)(lVar30 + 0x20) = 0;
            pAVar66[-3]._2.element_size = 0x341a7b0;
            pAVar66[-3]._2.native_size = 0;
            il2cpp_runtime_helper_022b4080(lVar30 + 0x20,0);
            if (((MethodInfo *)plVar67)->name != (char *)0x0) {
              lVar30 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
              pcVar9 = *(code **)(((MethodInfo *)plVar67)->name + 0x18);
              pAVar66[-3]._2.element_size = 0x341a7cd;
              pAVar66[-3]._2.native_size = 0;
              Var79 = (*pcVar9)();
              if (lVar30 != 0) {
                *(unkbyte10 *)(lVar30 + 0x28) = Var79;
                *(uint16_t *)(lVar30 + 0x36) = pAVar66[-3]._2.property_count;
                *(undefined4 *)(lVar30 + 0x32) = *(undefined4 *)((long)&pAVar66[-3]._2.token + 2);
                lVar30 = *(long *)&pAVar66[-3]._2.thread_static_fields_offset;
                if (lVar30 != 0) {
                  pIVar15 = *(Il2CppObject **)(lVar30 + 0x18);
                  pMVar17 = *(MethodInfo_331B380 **)
                             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                    *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
                  pAVar66[-3]._2.element_size = 0x341a819;
                  pAVar66[-3]._2.native_size = 0;
                  pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh(pIVar15,0,pMVar17);
                  lVar42._0_4_ = pAVar66[-3]._2.thread_static_fields_offset;
                  lVar42._4_4_ = pAVar66[-3]._2.flags;
                  goto joined_r0x0341a95f;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  pAVar66[-3]._2.element_size = 0x341a9f2;
  pAVar66[-3]._2.native_size = 0;
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  pAVar66[-3]._2.element_size = 0x341a9f7;
  pAVar66[-3]._2.native_size = 0;
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$FetchProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfile (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, System_String_o* accountId, System_Action_AottgQueryFetchResult_AottgPublicProfile___o* onComplete, const MethodInfo* method);
// 0x44c45e0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfile
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,
               System_String_o *accountId,
               System_Action_AottgQueryFetchResult_AottgPublicProfile___o *onComplete,MethodInfo *method)

{
  undefined1 auVar1 [12];
  Cysharp_Threading_Tasks_UniTask_o CVar2;
  
  CVar2 = ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync
                    (__this,accountId,onComplete,method);
  auVar1 = CVar2.fields._0_12_;
  CVar2.fields._12_4_ = 0;
  CVar2.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar1._0_8_;
  CVar2.fields.token = auVar1._8_2_;
  CVar2.fields._10_2_ = auVar1._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(CVar2,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$FetchProfileAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, System_String_o* accountId, System_Action_AottgQueryFetchResult_AottgPublicProfile___o* onComplete, const MethodInfo* method);
// 0x44c4600

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync
          (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,System_String_o *accountId,
          System_Action_AottgQueryFetchResult_AottgPublicProfile___o *onComplete,MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this_00;
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppType *pIVar6;
  Il2CppType **ppIVar7;
  _union_13 _Var8;
  
  if (g_data_057aeac3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgPublicProfileService_FetchProfileAsync_d);
    g_data_057aeac3 = '\x01';
  }
  ppIVar7 = (Il2CppType **)0x0;
  _Var8.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffa0,0);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb0,accountId);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb8,onComplete);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgPublicProfileService_FetchProfileAsync_d + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this_00.fields._4_4_ = uVar3;
  __this_00.fields.__1__state = uVar2;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this_00.fields.accountId = accountId;
  __this_00.fields.onComplete = onComplete;
  __this_00.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this_00.fields.__u__1.fields.task.fields.result = (Il2CppObject *)ppIVar7;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = _Var8.rgctx_data;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffa0,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$InvokeProfileResult
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__InvokeProfileResult (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o* result, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x44c46c0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__InvokeProfileResult
               (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *result,
               System_Action_AottgPublicProfileFetchResponse__o *onResult,MethodInfo *method)

{
  int iVar1;
  code *vtableDispatch;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *pAVar2;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar3;
  Il2CppObject *__this;
  System_Action_AottgPublicProfileFetchResponse__o *method_00;
  ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *__this_00;
  
  method_00 = onResult;
  __this_00 = result;
  if (g_data_057aeac4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Error);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryResultState_get_State);
    __this_00 = (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *)&MethodInfo_AottgPublicProfile_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeac4 = '\x01';
  }
  if (result != (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *)0x0) {
    iVar1 = (result->fields)._State_k__BackingField;
    if (iVar1 - 3U < 2) {
      if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
        pAVar3 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                           ((result->fields)._Error_k__BackingField,(MethodInfo *)method_00);
        vtableDispatch = (code *)(onResult->fields).invoke_impl;
        (*vtableDispatch)
                  ((onResult->fields).method_code,pAVar3,(onResult->fields).method,vtableDispatch);
        return;
      }
    }
    else if ((iVar1 == 1) && (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0)) {
      pAVar2 = (result->fields)._Value_k__BackingField;
      if (g_data_057aeab7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileFetchResponse);
        g_data_057aeab7 = '\x01';
      }
      __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgPublicProfileFetchResponse);
      System_Object___ctor(__this,(MethodInfo *)0x0);
      *(undefined1 *)&__this[1].klass = 1;
      __this[1].monitor = pAVar2;
      il2cpp_runtime_helper_022b4080(&__this[1].monitor,pAVar2);
      __this[2].klass = (Il2CppClass *)0x0;
      il2cpp_runtime_helper_022b4080(__this + 2,0);
      (*(code *)(onResult->fields).invoke_impl)
                ((onResult->fields).method_code,__this,(onResult->fields).method);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, const MethodInfo* method);
// 0x44c47d0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


