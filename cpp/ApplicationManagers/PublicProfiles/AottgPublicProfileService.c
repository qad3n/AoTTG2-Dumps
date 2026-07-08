// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileService.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x41ab430

void ApplicationManagers_PublicProfiles_AottgPublicProfileService_<>c__DisplayClass3_0___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$<GetProfile>b__0
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0___GetProfile_b__0 (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o* __this, ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o* result, const MethodInfo* method);
// 0x41ab7e0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService_<>c__DisplayClass3_0__<GetProfile>b__0
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService___c__DisplayClass3_0_o
                *__this,ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *result,
               MethodInfo *method)

{
  int iVar1;
  code *vtable_dispatch;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *pAVar2;
  System_Action_AottgPublicProfileFetchResponse__o *pSVar3;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar4;
  Il2CppObject *__this_00;
  System_Action_AottgPublicProfileFetchResponse__o *method_00;
  
  pSVar3 = (__this->fields).onResult;
  method_00 = pSVar3;
  if (DAT_05704cf6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Error);
    il2cpp_init_method_metadata(&MethodInfo_AottgQueryResultState_get_State);
    il2cpp_init_method_metadata(&MethodInfo_AottgPublicProfile_get_Value);
    DAT_05704cf6 = '\x01';
  }
  if (result != (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *)0x0) {
    iVar1 = (result->fields)._State_k__BackingField;
    if (iVar1 - 3U < 2) {
      if (pSVar3 != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
        pAVar4 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                           ((result->fields)._Error_k__BackingField,(MethodInfo *)method_00);
        vtable_dispatch = (code *)(pSVar3->fields).invoke_impl;
        (*vtable_dispatch)
                  (((_union_14 *)&(pSVar3->fields).method_code)->genericMethod,pAVar4,
                   (Il2CppType *)(pSVar3->fields).method,vtable_dispatch);
        return;
      }
    }
    else if ((iVar1 == 1) && (pSVar3 != (System_Action_AottgPublicProfileFetchResponse__o *)0x0)) {
      pAVar2 = (result->fields)._Value_k__BackingField;
      if (DAT_05704ce9 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileFetchResponse);
        DAT_05704ce9 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgPublicProfileFetchResponse);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined1 *)&__this_00[1].klass = 1;
      __this_00[1].monitor = pAVar2;
      il2cpp_runtime_glue(&__this_00[1].monitor,pAVar2);
      __this_00[2].klass = (Il2CppClass *)0x0;
      il2cpp_runtime_glue(__this_00 + 2,0);
      (*(code *)(pSVar3->fields).invoke_impl)
                (((_union_14 *)&(pSVar3->fields).method_code)->genericMethod,__this_00,
                 (Il2CppType *)(pSVar3->fields).method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<FetchProfileAsync>d__7$$MoveNext
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__MoveNext (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this, const MethodInfo* method);
// 0x41ab7f0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService_<FetchProfileAsync>d__7__MoveNext
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o
                __this,MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiRequest_Fields *pAVar1;
  void *pvVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppType *pIVar5;
  undefined2 uVar6;
  int iVar7;
  bool_conflict bVar8;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  System_String_o *pSVar9;
  long lVar10;
  undefined8 *puVar11;
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar12;
  MethodInfo *in_RSI;
  long lVar13;
  MethodInfo *in_R8;
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
  
  if (DAT_05704cf7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgApiClient);
    il2cpp_init_method_metadata(&TypeInfo_AottgApiRequest);
    il2cpp_init_method_metadata(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Publ);
    il2cpp_init_method_metadata(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Publ);
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
    il2cpp_init_method_metadata(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_UniTask_1_T__Awaiter_ApplicationManagers_Api_Aot);
    il2cpp_init_method_metadata(&TypeInfo_Uri);
    il2cpp_init_method_metadata(&"GET");
    il2cpp_init_method_metadata(&"AottgPublicProfileService: failed to parse /v1/profiles response.");
    il2cpp_init_method_metadata();
    DAT_05704cf7 = '\x01';
  }
  local_50 = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_98 = (Il2CppType *)0x0;
  uStack_90 = (MethodInfo *)0x0;
  local_88 = (_union_13)0x0;
  local_48 = (Il2CppType *)0x0;
  pMStack_40 = (MethodInfo *)0x0;
  local_38.rgctx_data = (Il2CppRGCTXData *)0x0;
  if (*(int *)&method->methodPointer == 0) {
    local_88 = method->field7_0x38;
    pIVar5 = method->return_type;
    uStack_90 = (MethodInfo *)method->parameters;
    method->return_type = (Il2CppType *)0x0;
    method->parameters = (Il2CppType **)0x0;
    (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    __this_00 = (ApplicationManagers_Api_AottgApiClient_o *)il2cpp_runtime_glue(TypeInfo_AottgApiClient);
    ApplicationManagers_Api_AottgApiClient___ctor(__this_00,in_RSI);
    request = (ApplicationManagers_Api_AottgApiRequest_o *)il2cpp_runtime_glue(TypeInfo_AottgApiRequest);
    if (DAT_05704d27 == '\0') {
      il2cpp_init_method_metadata(&"GET");
      DAT_05704d27 = '\x01';
    }
    pAVar1 = &request->fields;
    (request->fields).Method = "GET";
    il2cpp_runtime_glue(pAVar1);
    *(undefined1 *)((long)&(request->fields).ParseJson + 1) = 1;
    System_Object___ctor((Il2CppObject *)request,(MethodInfo *)0x0);
    pAVar1->Method = "GET";
    il2cpp_runtime_glue(pAVar1);
    pSVar9 = (System_String_o *)method->name;
    if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar9 = System_Uri__EscapeDataString(pSVar9,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat("/v1/profiles/",pSVar9,(MethodInfo *)0x0);
    (request->fields).Path = pSVar9;
    il2cpp_runtime_glue(&(request->fields).Path,pSVar9);
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
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
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T__Awaiter_ApplicationManagers_Api_Aot + 0x20) + 0x135) & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    local_68 = local_38;
    local_78._0_8_ = local_48;
    local_78._8_8_ = pMStack_40;
    il2cpp_runtime_glue(local_78,0);
    local_88 = local_68;
    local_98 = (Il2CppType *)local_78._0_8_;
    uStack_90 = (MethodInfo *)local_78._8_8_;
    lVar10 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_glue_022c28b0();
    }
    pIVar5 = local_98;
    if (local_98 != (Il2CppType *)0x0) {
      uVar6 = local_88._0_2_;
      lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x18) + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = il2cpp_glue_022c28b0();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = il2cpp_glue_022c28b0();
      }
      pvVar2 = pIVar5->data;
      if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar13) == lVar10) {
            puVar11 = (undefined8 *)
                      ((long)pvVar2 +
                      (long)(*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar13) + 1) * 0x10 +
                      0x138);
            goto LAB_041abb4d;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar13);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_glue(pIVar5,lVar10,1);
LAB_041abb4d:
      iVar7 = (*(code *)*puVar11)(pIVar5,(int)(short)uVar6,puVar11[1]);
      pIVar5 = local_98;
      if (iVar7 == 0) {
        *(undefined4 *)&method->methodPointer = 0;
        *(undefined4 *)&method->return_type = (undefined4)local_98;
        *(undefined4 *)((long)&method->return_type + 4) = local_98._4_4_;
        *(undefined4 *)&method->parameters = (undefined4)uStack_90;
        *(undefined4 *)((long)&method->parameters + 4) = uStack_90._4_4_;
        method->field7_0x38 = local_88;
        il2cpp_runtime_glue(&method->return_type,0);
        il2cpp_glue_02581fc0(&method->virtualMethodPointer,&local_98,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
        return;
      }
    }
  }
  method_00 = uStack_90;
  local_98 = pIVar5;
  if (pIVar5 != (Il2CppType *)0x0) {
    uVar6 = local_88._0_2_;
    lVar10 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_glue_022c28b0();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_glue_022c28b0();
    }
    pvVar2 = pIVar5->data;
    if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
      lVar13 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar13) == lVar10) {
          puVar11 = (undefined8 *)
                    ((long)pvVar2 +
                    (long)*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
          goto LAB_041abc10;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar13);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(pIVar5,lVar10,0);
LAB_041abc10:
    method_00 = (MethodInfo *)(*(code *)*puVar11)(pIVar5,(int)(short)uVar6,puVar11[1]);
  }
  if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)&method_00->invoker_method == '\0') {
    pIVar3 = method->klass;
    if (pIVar3 != (Il2CppClass *)0x0) {
      pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult<object>__Fail
                          ((System_String_o *)method_00->parameters,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Publ);
      (*(code *)(pIVar3->_1).namespaze)
                ((pIVar3->_1).element_class,pAVar12,*(undefined8 *)&(pIVar3->_1).byval_arg.bits);
    }
  }
  else {
    bVar8 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
                      ((System_String_o *)method_00->klass,&local_50,&local_58,method_00);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogError("AottgPublicProfileService: failed to parse /v1/profiles response.",(MethodInfo *)0x0);
      pIVar3 = method->klass;
      if (pIVar3 != (Il2CppClass *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult<object>__Fail(local_58,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Publ)
        ;
        (*(code *)(pIVar3->_1).namespaze)
                  ((pIVar3->_1).element_class,pAVar12,*(undefined8 *)&(pIVar3->_1).byval_arg.bits);
      }
    }
    else {
      pIVar3 = method->klass;
      if (pIVar3 != (Il2CppClass *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult<object>__Ok
                            ((Il2CppObject *)local_50,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Publ);
        (*(code *)(pIVar3->_1).namespaze)
                  ((pIVar3->_1).element_class,pAVar12,*(undefined8 *)&(pIVar3->_1).byval_arg.bits);
      }
    }
  }
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (DAT_056fe2bb == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fe2bb = '\x01';
  }
  pIVar4 = method->virtualMethodPointer;
  if (pIVar4 != (Il2CppMethodPointer)0x0) {
    lVar10 = *(long *)pIVar4;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar13 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar13) == TypeInfo_IStateMachineRunnerPromise) {
          puVar11 = (undefined8 *)
                    (lVar10 + (long)(*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar13) + 2) * 0x10 +
                    0x138);
          goto LAB_041abd85;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar13);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(pIVar4,TypeInfo_IStateMachineRunnerPromise,2);
LAB_041abd85:
    (*(code *)*puVar11)(pIVar4,puVar11[1]);
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<FetchProfileAsync>d__7$$SetStateMachine
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7__SetStateMachine (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x41ac240

void ApplicationManagers_PublicProfiles_AottgPublicProfileService_<FetchProfileAsync>d__7__SetStateMachine
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync_d__7_o
                __this,System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$Init
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init (const MethodInfo* method);
// 0x41aaf30

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init(MethodInfo *method)

{
  long lVar1;
  System_TimeSpan_Fields successTtl;
  Il2CppObject *pIVar2;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_00;
  MethodInfo_375F1B0 *method_00;
  MethodInfo *in_R9;
  System_Nullable_TimeSpan__o __this_01;
  System_Nullable_TimeSpan__o failureTtl;
  ulong local_38;
  System_TimeSpan_o SStack_30;
  
  if (DAT_05704cf1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string__Action_AottgQueryFetchResult_Aott);
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileCache);
    il2cpp_init_method_metadata(&MethodInfo_Void_FetchProfile);
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileService);
    il2cpp_init_method_metadata(&MethodInfo_AottgQueryCache_2_System_String_ApplicationManag);
    il2cpp_init_method_metadata(&TypeInfo_AottgQueryCache_string__AottgPublicProfile);
    il2cpp_init_method_metadata(&TypeInfo_AottgQueryPolicy);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_TimeSpan);
    il2cpp_init_method_metadata(&MethodInfo_AottgPublicProfileService_CreateSingleton_AottgP);
    DAT_05704cf1 = '\x01';
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8),MethodInfo_AottgPublicProfileService_CreateSingleton_AottgP);
  **(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8) = pIVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgPublicProfileService + 0xb8),pIVar2);
  lVar1 = **(long **)(TypeInfo_AottgPublicProfileService + 0xb8);
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)
          il2cpp_runtime_glue(TypeInfo_Action_string__Action_AottgQueryFetchResult_Aott);
  method_00 = (MethodInfo_375F1B0 *)0x0;
  System_Action<object__object>___ctor();
  if (*(int *)(TypeInfo_AottgPublicProfileCache + 0xe4) == 0) {
    il2cpp_init_class();
  }
  successTtl._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgPublicProfileCache + 0xb8))->_ticks;
  local_38 = 0;
  SStack_30.fields._ticks = (System_TimeSpan_Fields)0;
  __this_01.fields.value.fields._ticks =
       (System_TimeSpan_Fields)
       (System_TimeSpan_Fields)(*(System_TimeSpan_Fields **)(TypeInfo_AottgPublicProfileCache + 0xb8))[1]._ticks;
  __this_01.fields._0_8_ = &local_38;
  System_Nullable<TimeSpan>___ctor(__this_01,(System_TimeSpan_o)MethodInfo_Nullable_1_TimeSpan._ticks,method_00);
  __this = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_glue(TypeInfo_AottgQueryPolicy);
  failureTtl.fields._0_8_ = local_38 & 0xffffffff;
  failureTtl.fields.value.fields._ticks = SStack_30.fields._ticks;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this,(System_TimeSpan_o)successTtl._ticks,failureTtl,0,in_R9);
  __this_00 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)
              il2cpp_runtime_glue(TypeInfo_AottgQueryCache_string__AottgPublicProfile);
  ApplicationManagers_Api_AottgQueryCache<object__object>___ctor
            (__this_00,fetch,(System_Func_DateTimeOffset__o *)0x0,__this,MethodInfo_AottgQueryCache_2_System_String_ApplicationManag);
  if (lVar1 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar1 + 0x20) = __this_00;
    il2cpp_runtime_glue(lVar1 + 0x20,__this_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$GetProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile (System_String_o* accountId, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x41ab270

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__GetProfile
               (System_String_o *accountId,
               System_Action_AottgPublicProfileFetchResponse__o *onResult,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  code *vtable_dispatch;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  undefined8 *puVar2;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar3;
  System_Action_AottgQueryResult_TValue___o *onResult_00;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  MethodInfo *method_00;
  
  if (DAT_05704cf2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgQueryResult_AottgPublicProfile);
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileService);
    il2cpp_init_method_metadata(&MethodInfo_Void_Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void__GetProfile_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    il2cpp_init_method_metadata(&"not_initialized");
    il2cpp_init_method_metadata(&"bad_account_id");
    DAT_05704cf2 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
LAB_041ab42a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar4 = __this_00 + 1;
  __this_00[1].klass = (Il2CppClass *)onResult;
  il2cpp_runtime_glue(pIVar4);
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) != 0) {
        __this = *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)
                  (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20);
        onResult_00 = (System_Action_AottgQueryResult_TValue___o *)il2cpp_runtime_glue(TypeInfo_Action_AottgQueryResult_AottgPublicProfile);
        System_Action<object>___ctor();
        if (__this != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
          ApplicationManagers_Api_AottgQueryCache<object__object>__Get
                    (__this,(Il2CppObject *)accountId,onResult_00,0,MethodInfo_Void_Get);
          return;
        }
      }
      goto LAB_041ab42a;
    }
    pIVar5 = pIVar4->klass;
    if (pIVar5 == (Il2CppClass *)0x0) {
      return;
    }
    puVar2 = &"bad_account_id";
  }
  else {
    pIVar5 = pIVar4->klass;
    if (pIVar5 == (Il2CppClass *)0x0) {
      return;
    }
    puVar2 = &"not_initialized";
  }
  pAVar3 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                     ((System_String_o *)*puVar2,method_00);
  vtable_dispatch = (code *)(pIVar5->_1).namespaze;
  (*vtable_dispatch)
            ((pIVar5->_1).element_class,pAVar3,*(undefined8 *)&(pIVar5->_1).byval_arg.bits,
             vtable_dispatch);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearSessionCache
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearSessionCache (const MethodInfo* method);
// 0x41ab440

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearSessionCache
               (MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *x;
  long lVar1;
  bool_conflict bVar2;
  
  if (DAT_05704cf3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileService);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704cf3 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar1 = *(long *)(**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20);
    if (lVar1 != 0) {
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x28);
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Clear
                  (__this,*(MethodInfo_308CA10 **)
                           (*(long *)(*(long *)(MethodInfo_Void_Clear + 0x20) + 0xc0) + 0x60));
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile (System_String_o* accountId, const MethodInfo* method);
// 0x41ab500

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile
               (System_String_o *accountId,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this;
  bool_conflict bVar1;
  
  if (DAT_05704cf4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileService);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704cf4 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) == 0) {
LAB_041ab5d7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(long *)(**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20) != 0) {
      bVar1 = System_String__IsNullOrEmpty(accountId,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if ((**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) != 0) &&
           (__this = *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)
                      (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20),
           __this != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0)) {
          ApplicationManagers_Api_AottgQueryCache<object__object>__Clear
                    (__this,(Il2CppObject *)accountId,MethodInfo_Void_Clear);
          return;
        }
        goto LAB_041ab5d7;
      }
    }
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$FetchProfile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfile (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, System_String_o* accountId, System_Action_AottgQueryFetchResult_AottgPublicProfile___o* onComplete, const MethodInfo* method);
// 0x41ab5e0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfile
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,
               System_String_o *accountId,
               System_Action_AottgQueryFetchResult_AottgPublicProfile___o *onComplete,
               MethodInfo *method)

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
// 0x41ab600

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_PublicProfiles_AottgPublicProfileService__FetchProfileAsync
          (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,
          System_String_o *accountId,
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
  
  if (DAT_05704cf5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_AottgPublicProfileService__FetchProfi);
    DAT_05704cf5 = '\x01';
  }
  ppIVar7 = (Il2CppType **)0x0;
  _Var8.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  il2cpp_runtime_glue(&stack0xffffffffffffffa0,0);
  il2cpp_runtime_glue(&stack0xffffffffffffffb0,accountId);
  il2cpp_runtime_glue(&stack0xffffffffffffffb8,onComplete);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgPublicProfileService__FetchProfi + 0x38) == 0) {
    il2cpp_glue_022c2910();
  }
  __this_00.fields._4_4_ = uVar3;
  __this_00.fields.__1__state = uVar2;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this_00.fields.accountId = accountId;
  __this_00.fields.onComplete = onComplete;
  __this_00.fields.__u__1.fields.task.fields.source =
       (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this_00.fields.__u__1.fields.task.fields.result = (Il2CppObject *)ppIVar7;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = _Var8.rgctx_data;
  ApplicationManagers_PublicProfiles_AottgPublicProfileService_<FetchProfileAsync>d__7__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_glue_02711ab0(&stack0xffffffffffffffa0,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$InvokeProfileResult
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService__InvokeProfileResult (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o* result, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x41ab6c0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService__InvokeProfileResult
               (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *result,
               System_Action_AottgPublicProfileFetchResponse__o *onResult,MethodInfo *method)

{
  int iVar1;
  code *vtable_dispatch;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *pAVar2;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar3;
  Il2CppObject *__this;
  System_Action_AottgPublicProfileFetchResponse__o *method_00;
  
  method_00 = onResult;
  if (DAT_05704cf6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Error);
    il2cpp_init_method_metadata(&MethodInfo_AottgQueryResultState_get_State);
    il2cpp_init_method_metadata(&MethodInfo_AottgPublicProfile_get_Value);
    DAT_05704cf6 = '\x01';
  }
  if (result != (ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o *)0x0) {
    iVar1 = (result->fields)._State_k__BackingField;
    if (iVar1 - 3U < 2) {
      if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
        pAVar3 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                           ((result->fields)._Error_k__BackingField,(MethodInfo *)method_00);
        vtable_dispatch = (code *)(onResult->fields).invoke_impl;
        (*vtable_dispatch)
                  ((onResult->fields).method_code,pAVar3,(onResult->fields).method,
                   vtable_dispatch);
        return;
      }
    }
    else if ((iVar1 == 1) && (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0))
    {
      pAVar2 = (result->fields)._Value_k__BackingField;
      if (DAT_05704ce9 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileFetchResponse);
        DAT_05704ce9 = '\x01';
      }
      __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgPublicProfileFetchResponse);
      System_Object___ctor(__this,(MethodInfo *)0x0);
      *(undefined1 *)&__this[1].klass = 1;
      __this[1].monitor = pAVar2;
      il2cpp_runtime_glue(&__this[1].monitor,pAVar2);
      __this[2].klass = (Il2CppClass *)0x0;
      il2cpp_runtime_glue(__this + 2,0);
      (*(code *)(onResult->fields).invoke_impl)
                ((onResult->fields).method_code,__this,(onResult->fields).method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileService$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileService___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o* __this, const MethodInfo* method);
// 0x41ab7d0

void ApplicationManagers_PublicProfiles_AottgPublicProfileService___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileService_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


