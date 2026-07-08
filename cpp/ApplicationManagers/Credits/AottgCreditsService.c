// Type: ApplicationManagers.Credits.AottgCreditsService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsService.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsService.UnitKey$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService_UnitKey___cctor (const MethodInfo* method);
// 0x41af010

void ApplicationManagers_Credits_AottgCreditsService_UnitKey___cctor(MethodInfo *method)

{
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___ctor (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x41aeb10

void ApplicationManagers_Credits_AottgCreditsService_<>c__DisplayClass3_0___ctor
               (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$<GetCredits>b__0
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___GetCredits_b__0 (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o* __this, ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o* result, const MethodInfo* method);
// 0x41af020

void ApplicationManagers_Credits_AottgCreditsService_<>c__DisplayClass3_0__<GetCredits>b__0
               (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *result,
               MethodInfo *method)

{
  System_Action_AottgCreditsResult__o *pSVar1;
  code *vtable_dispatch;
  ApplicationManagers_Credits_AottgCreditsResult_o *pAVar2;
  
  pSVar1 = (__this->fields).onResult;
  pAVar2 = ApplicationManagers_Credits_AottgCreditsService__MapResult(result,(MethodInfo *)result);
  if (pSVar1 != (System_Action_AottgCreditsResult__o *)0x0) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$MoveNext
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this, const MethodInfo* method);
// 0x41af050

void ApplicationManagers_Credits_AottgCreditsService_<FetchCreditsAsync>d__6__MoveNext
               (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this,
               MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiRequest_Fields *pAVar1;
  void *pvVar2;
  char *pcVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppClass *pIVar5;
  short sVar6;
  int iVar7;
  bool_conflict bVar8;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  long lVar9;
  undefined8 *puVar10;
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar11;
  MethodInfo *in_RSI;
  long lVar12;
  MethodInfo *in_R8;
  undefined8 local_98;
  undefined8 uStack_90;
  Il2CppType **local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  System_String_o *local_58;
  ApplicationManagers_Credits_AottgCreditsResponse_o *local_50;
  Il2CppClass *local_48;
  MethodInfo *pMStack_40;
  Il2CppType **local_38;
  
  if (DAT_05704d19 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgApiClient);
    il2cpp_init_method_metadata(&TypeInfo_AottgApiRequest);
    il2cpp_init_method_metadata(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Cred);
    il2cpp_init_method_metadata(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Cred);
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
    il2cpp_init_method_metadata(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_UniTask_1_T__Awaiter_ApplicationManagers_Api_Aot);
    il2cpp_init_method_metadata(&"GET");
    il2cpp_init_method_metadata(&"/v1/credits");
    il2cpp_init_method_metadata();
    DAT_05704d19 = '\x01';
  }
  local_50 = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_98 = (Il2CppClass *)0x0;
  uStack_90 = (MethodInfo *)0x0;
  local_88 = (Il2CppType **)0x0;
  local_48 = (Il2CppClass *)0x0;
  pMStack_40 = (MethodInfo *)0x0;
  local_38 = (Il2CppType **)0x0;
  if (*(int *)&method->methodPointer == 0) {
    local_88 = method->parameters;
    pIVar5 = method->klass;
    uStack_90 = (MethodInfo *)method->return_type;
    method->klass = (Il2CppClass *)0x0;
    method->return_type = (Il2CppType *)0x0;
    method->parameters = (Il2CppType **)0x0;
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
    (request->fields).Path = "/v1/credits";
    il2cpp_runtime_glue(&(request->fields).Path);
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    ApplicationManagers_Api_AottgApiClient__SendAsync
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)local_78,__this_00,request,
               (System_Threading_CancellationToken_o)0x0,in_R8);
    local_38 = local_68;
    local_48 = (Il2CppClass *)local_78._0_8_;
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
    local_98 = (Il2CppClass *)local_78._0_8_;
    uStack_90 = (MethodInfo *)local_78._8_8_;
    lVar9 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_glue_022c28b0();
    }
    pIVar5 = local_98;
    if (local_98 != (Il2CppClass *)0x0) {
      sVar6 = (short)local_88;
      lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x18) + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = il2cpp_glue_022c28b0();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = il2cpp_glue_022c28b0();
      }
      pvVar2 = (pIVar5->_1).image;
      if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar12) == lVar9) {
            puVar10 = (undefined8 *)
                      ((long)pvVar2 +
                      (long)(*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar12) + 1) * 0x10 +
                      0x138);
            goto LAB_041af36d;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar12);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(pIVar5,lVar9,1);
LAB_041af36d:
      iVar7 = (*(code *)*puVar10)(pIVar5,(int)sVar6,puVar10[1]);
      pIVar5 = local_98;
      if (iVar7 == 0) {
        *(undefined4 *)&method->methodPointer = 0;
        *(undefined4 *)&method->klass = (undefined4)local_98;
        *(undefined4 *)((long)&method->klass + 4) = local_98._4_4_;
        *(undefined4 *)&method->return_type = (undefined4)uStack_90;
        *(undefined4 *)((long)&method->return_type + 4) = uStack_90._4_4_;
        method->parameters = local_88;
        il2cpp_runtime_glue(&method->klass,0);
        il2cpp_glue_02581e90(&method->virtualMethodPointer,&local_98,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
        return;
      }
    }
  }
  method_00 = uStack_90;
  local_98 = pIVar5;
  if (pIVar5 != (Il2CppClass *)0x0) {
    sVar6 = (short)local_88;
    lVar9 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_glue_022c28b0();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_glue_022c28b0();
    }
    pvVar2 = (pIVar5->_1).image;
    if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar12) == lVar9) {
          puVar10 = (undefined8 *)
                    ((long)pvVar2 +
                    (long)*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
          goto LAB_041af430;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_glue(pIVar5,lVar9,0);
LAB_041af430:
    method_00 = (MethodInfo *)(*(code *)*puVar10)(pIVar5,(int)sVar6,puVar10[1]);
  }
  if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)&method_00->invoker_method == '\0') {
    pcVar3 = method->name;
    if (pcVar3 != (char *)0x0) {
      pAVar11 = ApplicationManagers_Api_AottgQueryFetchResult<object>__Fail
                          ((System_String_o *)method_00->parameters,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Cred);
      (**(code **)(pcVar3 + 0x18))
                (*(undefined8 *)(pcVar3 + 0x40),pAVar11,*(undefined8 *)(pcVar3 + 0x28));
    }
  }
  else {
    bVar8 = ApplicationManagers_Credits_AottgCreditsParser__TryParse
                      ((System_String_o *)method_00->klass,&local_50,&local_58,method_00);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogError("AottgCreditsService: failed to parse /v1/credits response.",(MethodInfo *)0x0);
      pcVar3 = method->name;
      if (pcVar3 != (char *)0x0) {
        pAVar11 = ApplicationManagers_Api_AottgQueryFetchResult<object>__Fail(local_58,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Cred)
        ;
        (**(code **)(pcVar3 + 0x18))
                  (*(undefined8 *)(pcVar3 + 0x40),pAVar11,*(undefined8 *)(pcVar3 + 0x28));
      }
    }
    else {
      pcVar3 = method->name;
      if (pcVar3 != (char *)0x0) {
        pAVar11 = ApplicationManagers_Api_AottgQueryFetchResult<object>__Ok
                            ((Il2CppObject *)local_50,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Cred);
        (**(code **)(pcVar3 + 0x18))
                  (*(undefined8 *)(pcVar3 + 0x40),pAVar11,*(undefined8 *)(pcVar3 + 0x28));
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
    lVar9 = *(long *)pIVar4;
    if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar12) == TypeInfo_IStateMachineRunnerPromise) {
          puVar10 = (undefined8 *)
                    (lVar9 + (long)(*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar12) + 2) * 0x10 +
                    0x138);
          goto LAB_041af5a5;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_glue(pIVar4,TypeInfo_IStateMachineRunnerPromise,2);
LAB_041af5a5:
    (*(code *)*puVar10)(pIVar4,puVar10[1]);
  }
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$SetStateMachine
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__SetStateMachine (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x41af820

void ApplicationManagers_Credits_AottgCreditsService_<FetchCreditsAsync>d__6__SetStateMachine
               (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$Init
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__Init (const MethodInfo* method);
// 0x41ae740

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_Credits_AottgCreditsService__Init(MethodInfo *method)

{
  long lVar1;
  System_TimeSpan_Fields successTtl;
  Il2CppObject *pIVar2;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_00;
  MethodInfo *in_R9;
  
  if (DAT_05704d14 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_UnitKey__Action_AottgQueryFetchResult_Aot);
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsCache);
    il2cpp_init_method_metadata(&MethodInfo_Void_FetchCredits);
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsService);
    il2cpp_init_method_metadata(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_Ao);
    il2cpp_init_method_metadata(&TypeInfo_AottgQueryCache_UnitKey__AottgCreditsResponse);
    il2cpp_init_method_metadata(&TypeInfo_AottgQueryPolicy);
    il2cpp_init_method_metadata(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCredits);
    DAT_05704d14 = '\x01';
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCredits);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar2);
  lVar1 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)
          il2cpp_runtime_glue(TypeInfo_Action_UnitKey__Action_AottgQueryFetchResult_Aot);
  System_Action<AottgCreditsService_UnitKey__object>___ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    il2cpp_init_class();
  }
  successTtl._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  __this = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_glue(TypeInfo_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this,(System_TimeSpan_o)successTtl._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,
             in_R9);
  __this_00 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)
              il2cpp_runtime_glue(TypeInfo_AottgQueryCache_UnitKey__AottgCreditsResponse);
  ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>___ctor
            (__this_00,fetch,(System_Func_DateTimeOffset__o *)0x0,__this,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_Ao);
  if (lVar1 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar1 + 0x20) = __this_00;
    il2cpp_runtime_glue(lVar1 + 0x20,__this_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsService$$GetCredits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__GetCredits (System_Action_AottgCreditsResult__o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x41ae8d0

void ApplicationManagers_Credits_AottgCreditsService__GetCredits
               (System_Action_AottgCreditsResult__o *onResult,bool_conflict forceRefresh,
               MethodInfo *method)

{
  undefined1 uVar1;
  UnityEngine_Object_o *x;
  Il2CppClass *pIVar2;
  long lVar3;
  Il2CppClass *pIVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  
  if (DAT_05704d15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsService);
    il2cpp_init_method_metadata(&MethodInfo_Void_Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void__GetCredits_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    il2cpp_init_method_metadata(&TypeInfo_UnitKey);
    il2cpp_init_method_metadata(&"not_initialized");
    DAT_05704d15 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar6[1].klass = (Il2CppClass *)onResult;
    il2cpp_runtime_glue(pIVar6 + 1);
    x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar4 = "not_initialized";
    if ((char)bVar5 != '\0') {
      pIVar2 = pIVar6[1].klass;
      if (pIVar2 != (Il2CppClass *)0x0) {
        if (DAT_05704d06 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
          DAT_05704d06 = '\x01';
        }
        pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
        System_Object___ctor(pIVar6,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar6[1].klass = 3;
        pIVar6[1].monitor = (void *)0x0;
        il2cpp_runtime_glue(&pIVar6[1].monitor,0);
        pIVar6[2].klass = pIVar4;
        il2cpp_runtime_glue(pIVar6 + 2,pIVar4);
        *(undefined2 *)&pIVar6[2].monitor = 0;
        *(undefined1 *)((long)&pIVar6[2].monitor + 2) = 0;
        (*(code *)(pIVar2->_1).namespaze)
                  ((pIVar2->_1).element_class,pIVar6,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
        return;
      }
      return;
    }
    if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) != 0) {
      lVar3 = *(long *)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
      if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar1 = **(undefined1 **)(TypeInfo_UnitKey + 0xb8);
      uVar7 = il2cpp_runtime_glue(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
      System_Action<object>___ctor();
      if (lVar3 != 0) {
        ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__Get
                  (lVar3,uVar1,uVar7,forceRefresh & 0xff,MethodInfo_Void_Get);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsService$$ClearSessionCache
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__ClearSessionCache (const MethodInfo* method);
// 0x41aeb20

void ApplicationManagers_Credits_AottgCreditsService__ClearSessionCache(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  UnityEngine_Object_o *x;
  long lVar1;
  bool_conflict bVar2;
  
  if (DAT_05704d16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsService);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704d16 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar1 = *(long *)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
    if (lVar1 != 0) {
      __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar1 + 0x28);
      if (__this != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary<AottgCreditsService_UnitKey__object>__Clear
                  (__this,*(MethodInfo_30E28C0 **)
                           (*(long *)(*(long *)(MethodInfo_Void_Clear + 0x20) + 0xc0) + 0x60));
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$FetchCredits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCredits (ApplicationManagers_Credits_AottgCreditsService_o* __this, ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key, System_Action_AottgQueryFetchResult_AottgCreditsResponse___o* onComplete, const MethodInfo* method);
// 0x41aebe0

void ApplicationManagers_Credits_AottgCreditsService__FetchCredits
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined1 auVar1 [12];
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this;
  Cysharp_Threading_Tasks_UniTask_o task;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppClass *pIVar6;
  Il2CppType *pIVar7;
  Il2CppType **ppIVar8;
  
  if (DAT_05704d17 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_AottgCreditsService__FetchCreditsAsyn);
    DAT_05704d17 = '\x01';
  }
  pIVar6 = (Il2CppClass *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  ppIVar8 = (Il2CppType **)0x0;
  il2cpp_runtime_glue(&stack0xffffffffffffffc0,0);
  il2cpp_runtime_glue(&stack0xffffffffffffffd0,param_3);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgCreditsService__FetchCreditsAsyn + 0x38) == 0) {
    il2cpp_glue_022c2910();
  }
  __this.fields._4_4_ = uVar3;
  __this.fields.__1__state = uVar2;
  __this.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this.fields.onComplete = (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)param_3
  ;
  __this.fields.__u__1.fields.task.fields.source =
       (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this.fields.__u__1.fields.task.fields.result = (Il2CppObject *)pIVar7;
  __this.fields.__u__1.fields.task.fields._16_8_ = ppIVar8;
  ApplicationManagers_Credits_AottgCreditsService_<FetchCreditsAsync>d__6__MoveNext
            (__this,(MethodInfo *)&stack0xffffffffffffffb8);
  auVar1 = il2cpp_glue_02711ab0(&stack0xffffffffffffffc0,0);
  task.fields._12_4_ = 0;
  task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar1._0_8_;
  task.fields.token = auVar1._8_2_;
  task.fields._10_2_ = auVar1._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$FetchCreditsAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync (ApplicationManagers_Credits_AottgCreditsService_o* __this, System_Action_AottgQueryFetchResult_AottgCreditsResponse___o* onComplete, const MethodInfo* method);
// 0x41aec90

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync
          (ApplicationManagers_Credits_AottgCreditsService_o *__this,
          System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *onComplete,
          MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this_00;
  MethodInfo *extraout_RDX;
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppClass *pIVar6;
  Il2CppType *pIVar7;
  Il2CppType **ppIVar8;
  
  if (DAT_05704d17 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_AottgCreditsService__FetchCreditsAsyn);
    DAT_05704d17 = '\x01';
    method = extraout_RDX;
  }
  pIVar6 = (Il2CppClass *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  ppIVar8 = (Il2CppType **)0x0;
  il2cpp_runtime_glue(&stack0xffffffffffffffc0,0,method);
  il2cpp_runtime_glue(&stack0xffffffffffffffd0,onComplete);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgCreditsService__FetchCreditsAsyn + 0x38) == 0) {
    il2cpp_glue_022c2910();
  }
  __this_00.fields._4_4_ = uVar3;
  __this_00.fields.__1__state = uVar2;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this_00.fields.onComplete = onComplete;
  __this_00.fields.__u__1.fields.task.fields.source =
       (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this_00.fields.__u__1.fields.task.fields.result = (Il2CppObject *)pIVar7;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = ppIVar8;
  ApplicationManagers_Credits_AottgCreditsService_<FetchCreditsAsync>d__6__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffffb8);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_glue_02711ab0(&stack0xffffffffffffffc0,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.Credits.AottgCreditsService$$MapResult
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsService__MapResult (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o* result, const MethodInfo* method);
// 0x41aed30

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsService__MapResult
          (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *result,
          MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar1;
  System_String_o *pSVar2;
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  if (DAT_05704d18 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Error);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_IsFromCache);
    il2cpp_init_method_metadata(&MethodInfo_AottgQueryResultState_get_State);
    il2cpp_init_method_metadata(&MethodInfo_AottgCreditsResponse_get_Value);
    DAT_05704d18 = '\x01';
  }
  if (result == (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  switch((result->fields)._State_k__BackingField) {
  case 0:
    if (DAT_05704d03 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d03 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    uVar5 = 0;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 0;
    (__this->fields)._Credits_k__BackingField =
         (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,0);
    (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,0);
    uVar3 = 1;
    uVar4 = 0;
    break;
  case 1:
    pAVar1 = (result->fields)._Value_k__BackingField;
    uVar5 = (undefined1)(result->fields)._IsFromCache_k__BackingField;
    if (DAT_05704d04 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d04 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 1;
    (__this->fields)._Credits_k__BackingField = pAVar1;
    il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,pAVar1);
    (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,0);
    goto LAB_041aefd9;
  case 2:
    pAVar1 = (result->fields)._Value_k__BackingField;
    if (DAT_05704d05 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d05 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 2;
    (__this->fields)._Credits_k__BackingField = pAVar1;
    il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,pAVar1);
    (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,0);
    uVar5 = 1;
    uVar4 = 1;
    uVar3 = 1;
    break;
  default:
    pSVar2 = (result->fields)._Error_k__BackingField;
    if (DAT_05704d06 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d06 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    uVar5 = 0;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 3;
    (__this->fields)._Credits_k__BackingField =
         (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,0);
    (__this->fields)._Error_k__BackingField = pSVar2;
    il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,pSVar2);
LAB_041aefd9:
    uVar4 = 0;
    uVar3 = 0;
    break;
  case 4:
    pAVar1 = (result->fields)._Value_k__BackingField;
    pSVar2 = (result->fields)._Error_k__BackingField;
    if (DAT_05704d07 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d07 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    uVar3 = 0;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 4;
    (__this->fields)._Credits_k__BackingField = pAVar1;
    il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,pAVar1);
    (__this->fields)._Error_k__BackingField = pSVar2;
    il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,pSVar2);
    uVar5 = 1;
    uVar4 = 1;
  }
  *(undefined1 *)&(__this->fields)._IsFromCache_k__BackingField = uVar5;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = uVar4;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = uVar3;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsService$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___ctor (ApplicationManagers_Credits_AottgCreditsService_o* __this, const MethodInfo* method);
// 0x41af000

void ApplicationManagers_Credits_AottgCreditsService___ctor
               (ApplicationManagers_Credits_AottgCreditsService_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


