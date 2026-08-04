// Type: ApplicationManagers.Credits.AottgCreditsService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsService.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsService.UnitKey$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService_UnitKey___cctor (const MethodInfo* method);
// 0x44c7f40

void ApplicationManagers_Credits_AottgCreditsService_UnitKey___cctor(MethodInfo *method)

{
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___ctor (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x44c7a40

void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___ctor
               (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$<GetCredits>b__0
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___GetCredits_b__0 (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o* __this, ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o* result, const MethodInfo* method);
// 0x44c7f50

void ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0___GetCredits_b__0
               (ApplicationManagers_Credits_AottgCreditsService___c__DisplayClass3_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *result,MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiRequest_Fields *pAVar1;
  ushort uVar2;
  System_Action_AottgCreditsResult__o *pSVar3;
  code *vtableDispatch;
  System_String_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar6;
  long *plVar7;
  System_String_o *pSVar8;
  short sVar9;
  char cVar10;
  bool_conflict bVar11;
  ApplicationManagers_Credits_AottgCreditsResult_o *pAVar12;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  long lVar13;
  VirtualInvokeData *pVVar14;
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *pAVar19;
  long lVar20;
  MethodInfo *in_R8;
  undefined1 auVar21 [12];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__c *pAStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  System_String_o *pSStack_60;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAStack_58;
  System_String_o *pSStack_50;
  MethodInfo *pMStack_48;
  ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__c *pAStack_40;
  System_Action_AottgCreditsResult__o *pSStack_30;
  
  pSVar3 = (__this->fields).onResult;
  pAVar19 = result;
  pAVar12 = ApplicationManagers_Credits_AottgCreditsService__MapResult(result,(MethodInfo *)result);
  if (pSVar3 != (System_Action_AottgCreditsResult__o *)0x0) {
    vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = pSVar3;
  if (g_data_057aeae7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiClient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiRequest);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&"GET");
    il2cpp_runtime_helper_023445d0(&"/v1/credits");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeae7 = '\x01';
  }
  pAStack_58 = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  pSStack_60 = (System_String_o *)0x0;
  uStack_a0 = (System_String_o *)0x0;
  uStack_98 = (MethodInfo *)0x0;
  pAStack_90 = (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__c *)0x0;
  pSStack_50 = (System_String_o *)0x0;
  pMStack_48 = (MethodInfo *)0x0;
  pAStack_40 = (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__c *)0x0;
  if (*(int *)&pAVar19->klass == 0) {
    pAStack_90 = pAVar19[1].klass;
    uStack_a0 = (pAVar19->fields)._Error_k__BackingField;
    uStack_98 = *(MethodInfo **)&(pAVar19->fields)._IsFromCache_k__BackingField;
    (pAVar19->fields)._Error_k__BackingField = (System_String_o *)0x0;
    *(undefined8 *)&(pAVar19->fields)._IsFromCache_k__BackingField = 0;
    pAVar19[1].klass = (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__c *)0x0;
    *(undefined4 *)&pAVar19->klass = 0xffffffff;
  }
  else {
    __this_00 = (ApplicationManagers_Api_AottgApiClient_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiClient);
    ApplicationManagers_Api_AottgApiClient___ctor(__this_00,(MethodInfo *)result);
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
    (request->fields).Path = "/v1/credits";
    il2cpp_runtime_helper_022b4080(&(request->fields).Path);
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) goto label_044c8460;
    ApplicationManagers_Api_AottgApiClient__SendAsync
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)auStack_80,__this_00,request,
               (System_Threading_CancellationToken_o)0x0,in_R8);
    pAStack_40 = uStack_70;
    pSStack_50 = (System_String_o *)auStack_80._0_8_;
    pMStack_48 = (MethodInfo *)auStack_80._8_8_;
    auStack_80._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    auStack_80._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    uStack_70._0_2_ = 0;
    uStack_70._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    uStack_70 = pAStack_40;
    auStack_80._0_8_ = pSStack_50;
    auStack_80._8_8_ = pMStack_48;
    il2cpp_runtime_helper_022b4080(auStack_80,0);
    pAStack_90 = uStack_70;
    uStack_a0 = (System_String_o *)auStack_80._0_8_;
    uStack_98 = (MethodInfo *)auStack_80._8_8_;
    cVar10 = il2cpp_runtime_helper_02235800(&uStack_a0,MethodInfo_Boolean_get_IsCompleted);
    if (cVar10 == '\0') {
      *(undefined4 *)&pAVar19->klass = 0;
      *(undefined4 *)&(pAVar19->fields)._Error_k__BackingField = (undefined4)uStack_a0;
      *(undefined4 *)((long)&(pAVar19->fields)._Error_k__BackingField + 4) = uStack_a0._4_4_;
      (pAVar19->fields)._IsFromCache_k__BackingField = (bool_conflict)uStack_98;
      *(undefined4 *)&(pAVar19->fields).field_0x1c = uStack_98._4_4_;
      pAVar19[1].klass = pAStack_90;
      il2cpp_runtime_helper_022b4080(&(pAVar19->fields)._Error_k__BackingField,0);
      il2cpp_runtime_helper_025bd7d0(&pAVar19->monitor,&uStack_a0,pAVar19,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pSVar8 = uStack_a0;
  method_00 = uStack_98;
  if (uStack_a0 != (System_String_o *)0x0) {
    sVar9 = (short)pAStack_90;
    lVar13 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = il2cpp_runtime_helper_023009c0();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x28);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = il2cpp_runtime_helper_023009c0();
    }
    pSVar4 = pSVar8->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar20) == lVar13) {
          pVVar14 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar20);
          goto label_044c82d0;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar20);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar8,lVar13,0);
label_044c82d0:
    method_00 = (MethodInfo *)(*pVVar14->methodPtr)(pSVar8,(ulong)(uint)(int)sVar9,pVVar14->method);
  }
  if (method_00 != (MethodInfo *)0x0) {
    if (*(char *)&method_00->invoker_method == '\0') {
      pAVar6 = (pAVar19->fields)._Value_k__BackingField;
      if (pAVar6 != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
        pAVar15 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((System_String_o *)method_00->parameters,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
        (*(code *)pAVar6[1].klass)
                  (pAVar6[2].fields._Categories_k__BackingField,pAVar15,
                   pAVar6[1].fields._Categories_k__BackingField);
      }
    }
    else {
      bVar11 = ApplicationManagers_Credits_AottgCreditsParser__TryParse
                         ((System_String_o *)method_00->klass,&pAStack_58,&pSStack_60,method_00);
      if ((char)bVar11 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("AottgCreditsService: failed to parse /v1/credits response.",(MethodInfo *)0x0);
        pAVar6 = (pAVar19->fields)._Value_k__BackingField;
        if (pAVar6 != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
          pAVar15 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(pSStack_60,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
          (*(code *)pAVar6[1].klass)
                    (pAVar6[2].fields._Categories_k__BackingField,pAVar15,
                     pAVar6[1].fields._Categories_k__BackingField);
        }
      }
      else {
        pAVar6 = (pAVar19->fields)._Value_k__BackingField;
        if (pAVar6 != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
          pAVar15 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                              ((Il2CppObject *)pAStack_58,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
          (*(code *)pAVar6[1].klass)
                    (pAVar6[2].fields._Categories_k__BackingField,pAVar15,
                     pAVar6[1].fields._Categories_k__BackingField);
        }
      }
    }
    *(undefined4 *)&pAVar19->klass = 0xfffffffe;
    if (g_data_057a6b79 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b79 = '\x01';
    }
    plVar7 = pAVar19->monitor;
    if (plVar7 == (long *)0x0) {
      return;
    }
    lVar13 = *plVar7;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar20 = 0;
      do {
        if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar20) == TypeInfo_IStateMachineRunnerPromise) {
          puVar16 = (undefined8 *)
                    (lVar13 + (long)(*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar20) + 2) * 0x10 + 0x138);
          goto label_044c8445;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar20);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IStateMachineRunnerPromise,2);
label_044c8445:
    (*(code *)*puVar16)(plVar7,puVar16[1]);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_044c8460:
  auVar21 = il2cpp_runtime_helper_022b2c90();
  if (auVar21._8_4_ != 1) {
    _Unwind_Resume(auVar21._0_8_);
  }
  puVar16 = (undefined8 *)__cxa_begin_catch(auVar21._0_8_);
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar10 = il2cpp_runtime_helper_0233e000(uVar17,*(undefined8 *)*puVar16);
  if (cVar10 == '\0') {
    puVar18 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar18 = *puVar16;
    __cxa_throw(puVar18,&PTR_PTR_05215060,0);
  }
  uVar17 = *puVar16;
  __cxa_end_catch();
  *(undefined4 *)&pAVar19->klass = 0xfffffffe;
  if (g_data_057a6b78 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6b78 = '\x01';
  }
  plVar7 = pAVar19->monitor;
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)&pAVar19->fields = uVar17;
    il2cpp_runtime_helper_022b4080(&pAVar19->fields,uVar17);
  }
  else {
    lVar13 = *plVar7;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar20 = 0;
      do {
        if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar20) == TypeInfo_IStateMachineRunnerPromise) {
          puVar16 = (undefined8 *)
                    (lVar13 + (long)(*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar20) + 3) * 0x10 + 0x138);
          goto label_044c8631;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar20);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IStateMachineRunnerPromise,3);
label_044c8631:
    (*(code *)*puVar16)(plVar7,uVar17,puVar16[1]);
  }
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$MoveNext
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this, const MethodInfo* method);
// 0x44c7f80

void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext
               (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this,
               MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiRequest_Fields *pAVar1;
  void *pvVar2;
  char *pcVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppClass *pIVar6;
  short sVar7;
  char cVar8;
  bool_conflict bVar9;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  long lVar10;
  undefined8 *puVar11;
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  MethodInfo *in_RSI;
  long lVar15;
  MethodInfo *in_R8;
  undefined1 auVar16 [12];
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
  
  if (g_data_057aeae7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiClient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiRequest);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&"GET");
    il2cpp_runtime_helper_023445d0(&"/v1/credits");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeae7 = '\x01';
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
    local_98 = method->klass;
    uStack_90 = (MethodInfo *)method->return_type;
    method->klass = (Il2CppClass *)0x0;
    method->return_type = (Il2CppType *)0x0;
    method->parameters = (Il2CppType **)0x0;
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
    (request->fields).Path = "/v1/credits";
    il2cpp_runtime_helper_022b4080(&(request->fields).Path);
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) goto label_044c8460;
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
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    local_68 = local_38;
    local_78._0_8_ = local_48;
    local_78._8_8_ = pMStack_40;
    il2cpp_runtime_helper_022b4080(local_78,0);
    local_88 = local_68;
    local_98 = (Il2CppClass *)local_78._0_8_;
    uStack_90 = (MethodInfo *)local_78._8_8_;
    cVar8 = il2cpp_runtime_helper_02235800(&local_98,MethodInfo_Boolean_get_IsCompleted);
    if (cVar8 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      *(undefined4 *)&method->klass = (undefined4)local_98;
      *(undefined4 *)((long)&method->klass + 4) = local_98._4_4_;
      *(undefined4 *)&method->return_type = (undefined4)uStack_90;
      *(undefined4 *)((long)&method->return_type + 4) = uStack_90._4_4_;
      method->parameters = local_88;
      il2cpp_runtime_helper_022b4080(&method->klass,0);
      il2cpp_runtime_helper_025bd7d0(&method->virtualMethodPointer,&local_98,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pIVar6 = local_98;
  method_00 = uStack_90;
  if (local_98 != (Il2CppClass *)0x0) {
    sVar7 = (short)local_88;
    lVar10 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
    }
    pvVar2 = (pIVar6->_1).image;
    if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar15) == lVar10) {
          puVar11 = (undefined8 *)
                    ((long)pvVar2 + (long)*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar15) * 0x10 + 0x138
                    );
          goto label_044c82d0;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar15);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar6,lVar10,0);
label_044c82d0:
    method_00 = (MethodInfo *)(*(code *)*puVar11)(pIVar6,(int)sVar7,puVar11[1]);
  }
  if (method_00 != (MethodInfo *)0x0) {
    if (*(char *)&method_00->invoker_method == '\0') {
      pcVar3 = method->name;
      if (pcVar3 != (char *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((System_String_o *)method_00->parameters,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
        (**(code **)(pcVar3 + 0x18))(*(undefined8 *)(pcVar3 + 0x40),pAVar12,*(undefined8 *)(pcVar3 + 0x28));
      }
    }
    else {
      bVar9 = ApplicationManagers_Credits_AottgCreditsParser__TryParse
                        ((System_String_o *)method_00->klass,&local_50,&local_58,method_00);
      if ((char)bVar9 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("AottgCreditsService: failed to parse /v1/credits response.",(MethodInfo *)0x0);
        pcVar3 = method->name;
        if (pcVar3 != (char *)0x0) {
          pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(local_58,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
          (**(code **)(pcVar3 + 0x18))(*(undefined8 *)(pcVar3 + 0x40),pAVar12,*(undefined8 *)(pcVar3 + 0x28));
        }
      }
      else {
        pcVar3 = method->name;
        if (pcVar3 != (char *)0x0) {
          pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                              ((Il2CppObject *)local_50,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Credits_Aott);
          (**(code **)(pcVar3 + 0x18))(*(undefined8 *)(pcVar3 + 0x40),pAVar12,*(undefined8 *)(pcVar3 + 0x28));
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
    lVar10 = *(long *)pIVar4;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar15) == TypeInfo_IStateMachineRunnerPromise) {
          puVar11 = (undefined8 *)
                    (lVar10 + (long)(*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar15) + 2) * 0x10 + 0x138);
          goto label_044c8445;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar15);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar4,TypeInfo_IStateMachineRunnerPromise,2);
label_044c8445:
    (*(code *)*puVar11)(pIVar4,puVar11[1]);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_044c8460:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ != 1) {
    _Unwind_Resume(auVar16._0_8_);
  }
  puVar11 = (undefined8 *)__cxa_begin_catch(auVar16._0_8_);
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar8 = il2cpp_runtime_helper_0233e000(uVar13,*(undefined8 *)*puVar11);
  if (cVar8 == '\0') {
    puVar14 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar14 = *puVar11;
    __cxa_throw(puVar14,&PTR_PTR_05215060,0);
  }
  pIVar5 = (InvokerMethod)*puVar11;
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
    lVar10 = *(long *)pIVar4;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar15) == TypeInfo_IStateMachineRunnerPromise) {
          puVar11 = (undefined8 *)
                    (lVar10 + (long)(*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar15) + 3) * 0x10 + 0x138);
          goto label_044c8631;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar15);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar4,TypeInfo_IStateMachineRunnerPromise,3);
label_044c8631:
    (*(code *)*puVar11)(pIVar4,pIVar5,puVar11[1]);
  }
  return;
}


// ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$SetStateMachine
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__SetStateMachine (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x44c8680

void ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__SetStateMachine
               (ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$Init
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__Init (const MethodInfo* method);
// 0x44c7670

void ApplicationManagers_Credits_AottgCreditsService__Init(MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int32_t length;
  void *pvVar6;
  char *pcVar7;
  unkuint10 Var8;
  bool_conflict bVar9;
  long lVar10;
  Il2CppClass *__this;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar11;
  System_TimeSpan_Fields SVar12;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar13;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar14;
  System_Object_array *pSVar15;
  Il2CppObject *pIVar16;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_01;
  Il2CppClass *pIVar17;
  Il2CppClass *onResult;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAVar18;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  ulong uVar19;
  char **ppcVar20;
  System_TimeSpan_Fields SVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *__this_02;
  System_DateTime_Fields error;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar23;
  Il2CppClass *pIVar24;
  MethodInfo *in_R9;
  undefined1 auVar25 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_03;
  unkbyte10 Var26;
  long lStack_e8;
  undefined4 uStack_de;
  undefined2 uStack_da;
  Il2CppClass *pIStack_d8;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_d0;
  System_DateTime_Fields SStack_c8;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_c0;
  char cStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  MethodInfo *pMStack_a0;
  Il2CppClass *pIStack_98;
  Il2CppClass *pIStack_90;
  Il2CppClass *pIStack_88;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_80;
  Il2CppClass *pIStack_78;
  Il2CppClass *pIStack_70;
  Il2CppClass *pIStack_68;
  Il2CppClass *pIStack_60;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_58;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_50;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aeae2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIVar16 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar16;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar16);
  lVar10 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar12._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  __this_00 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_00,(System_TimeSpan_o)SVar12._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  __this_01 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pAVar23 = __this_01;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_01,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_00,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar10 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar10 + 0x20) = __this_01;
    il2cpp_runtime_helper_022b4080(lVar10 + 0x20,__this_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pAStack_50 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_01;
  if (g_data_057aeae3 == '\0') {
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  pIVar24 = pIVar17;
  System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
  if (pIVar17 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pIVar24,(MethodInfo *)0x0);
    return;
  }
  ppcVar20 = &(pIVar17->_1).name;
  (pIVar17->_1).name = (char *)pAVar23;
  pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar20);
  pIVar24 = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pIVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar17 = "not_initialized";
  if ((char)bVar9 != '\0') {
    pcVar7 = *ppcVar20;
    if (pcVar7 == (char *)0x0) {
      return;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar16,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar16[1].klass = 3;
    pIVar16[1].monitor = (void *)0x0;
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar16[1].monitor,0);
    pIVar16[2].klass = pIVar17;
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar16 + 2,pIVar17);
    *(undefined2 *)&pIVar16[2].monitor = 0;
    *(undefined1 *)((long)&pIVar16[2].monitor + 2) = 0;
    (**(code **)(pcVar7 + 0x18))(*(undefined8 *)(pcVar7 + 0x40),pIVar16,*(undefined8 *)(pcVar7 + 0x28));
    return;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar17 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  pIVar24 = onResult;
  System_Action_object____ctor();
  SVar12._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar17 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pAVar18 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
            ((ulong)fetch & 0xff);
  pAStack_58 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_50;
  pIStack_60 = (Il2CppClass *)0x0;
  lVar10 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pAVar18;
  pIVar24 = MethodInfo_Void_Get;
  pAStack_50 = __this_00;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    pIStack_68 = (Il2CppClass *)0x341a1ae;
    lVar10 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_68 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar10);
  pIVar11 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_68 = (Il2CppClass *)0x341a1d0;
  __this_02 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar11);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar17;
    pIStack_68 = (Il2CppClass *)0x341a1ec;
    pIVar11 = pIVar17;
    il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) {
      return;
    }
    __this_02 = *(Il2CppClass **)&(pIVar17->_1).byval_arg.bits;
    if (__this_02 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c **)
            (*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_68 = (Il2CppClass *)0x341a221;
      pIVar11 = (Il2CppClass *)t2._ticks;
      bVar9 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                        (__this_02,t2._ticks,&pIStack_60);
      if ((char)bVar9 == '\0') {
        lVar10 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          pIStack_68 = (Il2CppClass *)0x341a242;
          lVar10 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_68 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar10);
        pIVar11 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_68 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar11);
        __this_02 = *(Il2CppClass **)&(pIVar17->_1).byval_arg.bits;
        pIStack_60 = (Il2CppClass *)t2._ticks;
        if (__this_02 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar11 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_68 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_02,pIVar11,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ =
           (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
           (pIVar17->_1).namespaze;
      if (now.fields._8_8_ !=
          (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        pIVar11 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_02 = ((now.fields._8_8_)->_1).element_class;
        pIStack_68 = (Il2CppClass *)0x341a2ad;
        auVar25 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)fetch == '\0') {
          now.fields._8_8_ =
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
               (auVar25._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_68 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar25._0_8_;
          pIVar11 = pIStack_60;
          __this_02 = pIVar17;
          pIVar24 = onResult;
          bVar9 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar17,
                             (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_60,now,
                             (System_Action_AottgQueryResult_TValue___o *)onResult,(MethodInfo_331A460 *)in_R9
                            );
          if ((char)bVar9 != '\0') {
            return;
          }
        }
        if (pIStack_60 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_60->_1).this_arg.bits == '\0') {
            pIStack_68 = (Il2CppClass *)0x341a327;
            pIVar11 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_68 = (Il2CppClass *)0x341a30e;
            pIVar11 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_60->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_02 = (onResult->_1).element_class;
          pIStack_68 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_02,pIVar11,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_60 != (Il2CppClass *)0x0) &&
             (__this_02 = (Il2CppClass *)(pIStack_60->_1).name, __this_02 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c **)
                  (*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_02->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar7 = (__this_02->_1).name;
            if (pcVar7 != (char *)0x0) {
              uVar5 = *(uint *)&(__this_02->_1).namespaze;
              pIVar11 = onResult;
              if (uVar5 < *(uint *)(pcVar7 + 0x18)) {
                now.fields._8_8_ =
                     (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                     (ulong)(uVar5 + 1);
                *(uint *)&(__this_02->_1).namespaze = uVar5 + 1;
                __this_02 = (Il2CppClass *)(pcVar7 + (long)(int)uVar5 * 8 + 0x20);
                *(Il2CppClass **)(pcVar7 + (long)(int)uVar5 * 8 + 0x20) = onResult;
                pIStack_68 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pIStack_68 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
              }
              if (pIStack_60 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIStack_60->_1).this_arg.bits + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&(pIStack_60->_1).this_arg.bits + 2) = 1;
                pcVar7 = (pIVar17->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar10 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  pIStack_68 = (Il2CppClass *)0x341a3fe;
                  lVar10 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_68 = (Il2CppClass *)0x341a406;
                pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar10);
                now.fields._8_8_ =
                     *(ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c **)
                      (*(long *)((long)(((Il2CppClass *)SVar12._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_68 = (Il2CppClass *)0x341a42d;
                pIVar11 = __this;
                __this_02 = pIVar17;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar7 != (char *)0x0) {
                  pIStack_68 = (Il2CppClass *)0x341a444;
                  (**(code **)(pcVar7 + 0x18))
                            (*(undefined8 *)(pcVar7 + 0x40),uVar3,pIVar17,*(undefined8 *)(pcVar7 + 0x28));
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
  pIStack_68 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_78 = (Il2CppClass *)SVar12._ticks;
  pIVar22 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar21._ticks = (int64_t)pIVar11;
  error._dateData = (uint64_t)__this_02;
  pMStack_a0 = in_R9;
  pIStack_98 = pIVar24;
  pIStack_90 = __this;
  pIStack_88 = onResult;
  pAStack_80 = pAVar18;
  pIStack_70 = pIVar17;
  pIStack_68 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    error._dateData = (uint64_t)&TypeInfo_TimeSpan;
    pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_b8 = '\0';
  uStack_b7 = 0;
  uStack_b0 = 0;
  if (pIVar11 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar11->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar11->_1).this_arg.bits + 1) == '\0') {
        return;
      }
      pvVar6 = (__this_02->_1).byval_arg.data;
      if (pvVar6 != (void *)0x0) {
        cStack_b8 = *(char *)((long)pvVar6 + 0x18);
        uStack_b0 = *(undefined8 *)((long)pvVar6 + 0x20);
        if (cStack_b8 == '\0') {
          return;
        }
        ppIVar2 = (Il2CppType **)&(pIVar11->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var8 = *(unkuint10 *)ppIVar2;
        SVar12._ticks = (int64_t)*(ushort *)&(pIVar11->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a5ed
        ;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var8;
        left_00.fields._8_8_ = pIVar22;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ =
             (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)SVar12._ticks;
        error = extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar6 = (__this_02->_1).byval_arg.data;
        SVar21._ticks = (int64_t)pIVar22;
        if (pvVar6 != (void *)0x0) {
          cStack_b8 = *(char *)((long)pvVar6 + 0x18);
          uStack_b0 = *(undefined8 *)((long)pvVar6 + 0x20);
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a61f;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &cStack_b8;
          SVar12._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_03,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          t2._ticks = 0;
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a649;
          bVar9 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar12._ticks,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          error._dateData = (uint64_t)(pIVar11->_1).byval_arg.data;
          SVar21._ticks = 1;
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a672;
          pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)error._dateData,1,
                               (MethodInfo_331B520 *)pMStack_a0->klass->rgctx_data[0x21].method);
          now.fields._8_8_ =
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0;
          if (pIStack_98 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x341a68a;
            (*(code *)(pIStack_98->_1).namespaze)
                      ((pIStack_98->_1).element_class,pAVar13,*(undefined8 *)&(pIStack_98->_1).byval_arg.bits)
            ;
            return;
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar11->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var8 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ =
           (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
           (ulong)*(ushort *)&(pIVar11->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4ff
        ;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var8;
      left.fields._8_8_ = pIVar22;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar21._ticks = (int64_t)pIVar22;
      error = extraout_RDX.fields._dateData;
      SVar12._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar6 = (__this_02->_1).byval_arg.data;
      if (pvVar6 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar6 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a54d
        ;
        SVar21._ticks = t2._ticks;
        error._dateData = SVar12._ticks;
        bVar9 = System_TimeSpan__op_LessThan
                          ((System_TimeSpan_o)SVar12._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') goto label_0341a589;
        error._dateData = (uint64_t)(pIVar11->_1).namespaze;
        SVar21._ticks = 1;
        pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a576
        ;
        pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)error._dateData,1,
                             (MethodInfo_331B380 *)pMStack_a0->klass->rgctx_data[0x20].method);
        if (pIStack_98 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0
        ;
      }
    }
  }
  pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_d8 = pIVar11;
  pAStack_d0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)SVar12._ticks;
  SStack_c8 = extraout_RDX.fields._dateData;
  pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  lStack_e8 = 0;
  lVar10 = *(long *)&(((Il2CppClass *)error._dateData)->_1).byval_arg.bits;
  if (lVar10 != 0) {
    bVar9 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                      (lVar10,SVar21._ticks & 0xff,&lStack_e8);
    if ((char)bVar9 == '\0') {
      return;
    }
    if ((lStack_e8 != 0) &&
       (((*(undefined1 *)(lStack_e8 + 0x3a) = 0, pAVar14 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                              ("unknown_error",
                               *(MethodInfo_331AB10 **)
                                (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar14 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) && (lStack_e8 != 0)))) {
      if ((char)(pAVar14->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(lStack_e8 + 0x38) == '\0') {
label_0341a96a:
          *(undefined2 *)(lStack_e8 + 0x38) = 0x100;
          *(undefined8 *)(lStack_e8 + 0x18) = 0;
          *(System_String_o **)(lStack_e8 + 0x20) = (pAVar14->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          lVar10 = lStack_e8;
          pcVar7 = (((Il2CppClass *)error._dateData)->_1).namespaze;
          if ((pcVar7 != (char *)0x0) && (Var26 = (**(code **)(pcVar7 + 0x18))(), lVar10 != 0)) {
            *(unkbyte10 *)(lVar10 + 0x28) = Var26;
            *(undefined4 *)(lVar10 + 0x32) = uStack_de;
            *(undefined2 *)(lVar10 + 0x36) = uStack_da;
            pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((pAVar14->fields)._Error_k__BackingField,0,
                                 *(MethodInfo_331B520 **)
                                  (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108));
joined_r0x0341a9e7:
            if (lStack_e8 != 0) goto label_0341a82a;
          }
        }
        else {
          pvVar6 = (((Il2CppClass *)error._dateData)->_1).byval_arg.data;
          if (pvVar6 == (void *)0x0) goto label_0341a9ed;
          if (*(char *)((long)pvVar6 + 0x28) == '\0') goto label_0341a96a;
          *(System_String_o **)(lStack_e8 + 0x20) = (pAVar14->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          if ((lStack_e8 == 0) ||
             (pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  (*(Il2CppObject **)(lStack_e8 + 0x18),
                                   (pAVar14->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
             , lStack_e8 == 0)) goto label_0341a9ed;
label_0341a82a:
          if (((*(System_Collections_Generic_List_object__o **)(lStack_e8 + 0x10) !=
                (System_Collections_Generic_List_object__o *)0x0) &&
              (pSVar15 = System_Collections_Generic_List_object___ToArray
                                   (*(System_Collections_Generic_List_object__o **)(lStack_e8 + 0x10),
                                    *(MethodInfo_362E340 **)
                                     (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x148)
                                   ), lStack_e8 != 0)) && (lVar10 = *(long *)(lStack_e8 + 0x10), lVar10 != 0))
          {
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            length = *(int32_t *)(lVar10 + 0x18);
            *(undefined4 *)(lVar10 + 0x18) = 0;
            if (0 < length) {
              System_Array__Clear(*(System_Array_o **)(lVar10 + 0x10),0,length,(MethodInfo *)0x0);
            }
            if (pSVar15 != (System_Object_array *)0x0) {
              if ((int)pSVar15->max_length < 1) {
                return;
              }
              uVar19 = 0;
              if ((pSVar15->max_length & 0xffffffff) != 0) {
                do {
                  pIVar16 = pSVar15->m_Items[uVar19];
                  if (pIVar16 != (Il2CppObject *)0x0) {
                    if (pIVar16 == (Il2CppObject *)0x0) goto label_0341a9ed;
                    (*pIVar16[1].monitor)(pIVar16[4].klass,pAVar13,pIVar16[2].monitor);
                  }
                  uVar19 = uVar19 + 1;
                  uVar5 = (uint)pSVar15->max_length;
                  if ((long)(int)uVar5 <= (long)uVar19) {
                    return;
                  }
                } while (uVar19 < uVar5);
              }
              goto label_0341a9f2;
            }
          }
        }
      }
      else {
        *(undefined2 *)(lStack_e8 + 0x38) = 1;
        *(Il2CppObject **)(lStack_e8 + 0x18) = (pAVar14->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(lStack_e8 + 0x18);
        if (lStack_e8 != 0) {
          *(undefined8 *)(lStack_e8 + 0x20) = 0;
          il2cpp_runtime_helper_022b4080(lStack_e8 + 0x20,0);
          lVar10 = lStack_e8;
          pcVar7 = (((Il2CppClass *)error._dateData)->_1).namespaze;
          if ((pcVar7 != (char *)0x0) && (Var26 = (**(code **)(pcVar7 + 0x18))(), lVar10 != 0)) {
            *(unkbyte10 *)(lVar10 + 0x28) = Var26;
            *(undefined2 *)(lVar10 + 0x36) = uStack_da;
            *(undefined4 *)(lVar10 + 0x32) = uStack_de;
            if (lStack_e8 != 0) {
              pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                  (*(Il2CppObject **)(lStack_e8 + 0x18),0,
                                   *(MethodInfo_331B380 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100))
              ;
              goto joined_r0x0341a9e7;
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$GetCredits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__GetCredits (System_Action_AottgCreditsResult__o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x44c7800

void ApplicationManagers_Credits_AottgCreditsService__GetCredits
               (System_Action_AottgCreditsResult__o *onResult,bool_conflict forceRefresh,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int32_t length;
  void *pvVar6;
  char *pcVar7;
  unkuint10 Var8;
  bool_conflict bVar9;
  long lVar10;
  Il2CppClass *__this;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar11;
  System_TimeSpan_Fields t1;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar12;
  System_TimeSpan_o t1_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar13;
  System_Object_array *pSVar14;
  Il2CppClass *pIVar15;
  Il2CppObject *pIVar16;
  Il2CppClass *onResult_00;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAVar17;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  ulong uVar18;
  char **ppcVar19;
  System_TimeSpan_Fields SVar20;
  Il2CppClass *pIVar21;
  Il2CppClass *__this_00;
  System_DateTime_Fields error;
  Il2CppClass *pIVar22;
  MethodInfo_331A460 *in_R9;
  undefined1 auVar23 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_01;
  unkbyte10 Var24;
  long lStack_c0;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  Il2CppClass *pIStack_b0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_a8;
  System_DateTime_Fields SStack_a0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_98;
  char cStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  MethodInfo_331A460 *pMStack_78;
  Il2CppClass *pIStack_70;
  Il2CppClass *pIStack_68;
  Il2CppClass *pIStack_60;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_58;
  Il2CppClass *pIStack_50;
  Il2CppClass *pIStack_48;
  Il2CppClass *pIStack_40;
  Il2CppClass *pIStack_38;
  undefined8 uStack_30;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aeae3 == '\0') {
    uStack_30 = 0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    uStack_30 = 0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    uStack_30 = 0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    uStack_30 = 0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    uStack_30 = 0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    uStack_30 = 0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    uStack_30 = 0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    uStack_30 = 0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  uStack_30 = 0x44c788d;
  pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  uStack_30 = 0x44c789a;
  pIVar22 = pIVar15;
  System_Object___ctor((Il2CppObject *)pIVar15,(MethodInfo *)0x0);
  if (pIVar15 == (Il2CppClass *)0x0) {
label_044c7a30:
    uStack_30 = 0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pIVar22,(MethodInfo *)0x0);
    return;
  }
  ppcVar19 = &(pIVar15->_1).name;
  (pIVar15->_1).name = (char *)onResult;
  uStack_30 = 0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar19);
  pIVar22 = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_30 = 0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_30 = 0x44c78f2;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pIVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar15 = "not_initialized";
  if ((char)bVar9 != '\0') {
    pcVar7 = *ppcVar19;
    if (pcVar7 == (char *)0x0) {
      return;
    }
    if (g_data_057aead4 == '\0') {
      uStack_30 = 0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    uStack_30 = 0x44c793b;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    uStack_30 = 0x44c7948;
    System_Object___ctor(pIVar16,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar16[1].klass = 3;
    pIVar16[1].monitor = (void *)0x0;
    uStack_30 = 0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar16[1].monitor,0);
    pIVar16[2].klass = pIVar15;
    uStack_30 = 0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar16 + 2,pIVar15);
    *(undefined2 *)&pIVar16[2].monitor = 0;
    *(undefined1 *)((long)&pIVar16[2].monitor + 2) = 0;
    (**(code **)(pcVar7 + 0x18))(*(undefined8 *)(pcVar7 + 0x40),pIVar16,*(undefined8 *)(pcVar7 + 0x28));
    return;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar15 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    uStack_30 = 0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  uStack_30 = 0x44c79e3;
  onResult_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  uStack_30 = 0x44c79fd;
  pIVar22 = onResult_00;
  System_Action_object____ctor();
  t1._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar15 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pAVar17 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
            (ulong)(forceRefresh & 0xff);
  pIStack_38 = (Il2CppClass *)0x0;
  lVar10 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pAVar17;
  pIVar22 = MethodInfo_Void_Get;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    pIStack_40 = (Il2CppClass *)0x341a1ae;
    lVar10 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_40 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar10);
  pIVar11 = *(Il2CppClass **)(*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_40 = (Il2CppClass *)0x341a1d0;
  __this_00 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar11);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar15;
    pIStack_40 = (Il2CppClass *)0x341a1ec;
    pIVar11 = pIVar15;
    il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult_00 == (Il2CppClass *)0x0) {
      return;
    }
    __this_00 = *(Il2CppClass **)&(pIVar15->_1).byval_arg.bits;
    if (__this_00 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c **)
            (*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_40 = (Il2CppClass *)0x341a221;
      pIVar11 = (Il2CppClass *)t2._ticks;
      bVar9 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                        (__this_00,t2._ticks,&pIStack_38);
      if ((char)bVar9 == '\0') {
        lVar10 = *(long *)(*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) + 0x58);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          pIStack_40 = (Il2CppClass *)0x341a242;
          lVar10 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_40 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar10);
        pIVar11 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_40 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar11);
        __this_00 = *(Il2CppClass **)&(pIVar15->_1).byval_arg.bits;
        pIStack_38 = (Il2CppClass *)t2._ticks;
        if (__this_00 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar11 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_40 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_00,pIVar11,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ =
           (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
           (pIVar15->_1).namespaze;
      if (now.fields._8_8_ !=
          (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        pIVar11 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_00 = ((now.fields._8_8_)->_1).element_class;
        pIStack_40 = (Il2CppClass *)0x341a2ad;
        auVar23 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)forceRefresh == '\0') {
          now.fields._8_8_ =
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
               (auVar23._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_40 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar23._0_8_;
          pIVar11 = pIStack_38;
          __this_00 = pIVar15;
          pIVar22 = onResult_00;
          bVar9 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar15,
                             (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_38,now,
                             (System_Action_AottgQueryResult_TValue___o *)onResult_00,in_R9);
          if ((char)bVar9 != '\0') {
            return;
          }
        }
        if (pIStack_38 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_38->_1).this_arg.bits == '\0') {
            pIStack_40 = (Il2CppClass *)0x341a327;
            pIVar11 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) +
                                  200));
          }
          else {
            pIStack_40 = (Il2CppClass *)0x341a30e;
            pIVar11 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_38->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) +
                                  0xa8));
          }
          __this_00 = (onResult_00->_1).element_class;
          pIStack_40 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult_00->_1).namespaze)
                    (__this_00,pIVar11,*(undefined8 *)&(onResult_00->_1).byval_arg.bits);
          if ((pIStack_38 != (Il2CppClass *)0x0) &&
             (__this_00 = (Il2CppClass *)(pIStack_38->_1).name, __this_00 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c **)
                  (*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_00->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar7 = (__this_00->_1).name;
            if (pcVar7 != (char *)0x0) {
              uVar5 = *(uint *)&(__this_00->_1).namespaze;
              pIVar11 = onResult_00;
              if (uVar5 < *(uint *)(pcVar7 + 0x18)) {
                now.fields._8_8_ =
                     (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                     (ulong)(uVar5 + 1);
                *(uint *)&(__this_00->_1).namespaze = uVar5 + 1;
                __this_00 = (Il2CppClass *)(pcVar7 + (long)(int)uVar5 * 8 + 0x20);
                *(Il2CppClass **)(pcVar7 + (long)(int)uVar5 * 8 + 0x20) = onResult_00;
                pIStack_40 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pIStack_40 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)onResult_00,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
              }
              if (pIStack_38 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIStack_38->_1).this_arg.bits + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&(pIStack_38->_1).this_arg.bits + 2) = 1;
                pcVar7 = (pIVar15->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult_00 = (Il2CppClass *)CONCAT71((int7)((ulong)onResult_00 >> 8),uVar3);
                lVar10 = *(long *)(*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) +
                                  0xe8);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  pIStack_40 = (Il2CppClass *)0x341a3fe;
                  lVar10 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_40 = (Il2CppClass *)0x341a406;
                pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar10);
                now.fields._8_8_ =
                     *(ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c **)
                      (*(long *)((long)(((Il2CppClass *)t1._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_40 = (Il2CppClass *)0x341a42d;
                pIVar11 = __this;
                __this_00 = pIVar15;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar7 != (char *)0x0) {
                  pIStack_40 = (Il2CppClass *)0x341a444;
                  (**(code **)(pcVar7 + 0x18))
                            (*(undefined8 *)(pcVar7 + 0x40),uVar3,pIVar15,*(undefined8 *)(pcVar7 + 0x28));
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
  pIStack_40 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_50 = (Il2CppClass *)t1._ticks;
  pIVar21 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar20._ticks = (int64_t)pIVar11;
  error._dateData = (uint64_t)__this_00;
  pMStack_78 = in_R9;
  pIStack_70 = pIVar22;
  pIStack_68 = __this;
  pIStack_60 = onResult_00;
  pAStack_58 = pAVar17;
  pIStack_48 = pIVar15;
  pIStack_40 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    error._dateData = (uint64_t)&TypeInfo_TimeSpan;
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_90 = '\0';
  uStack_8f = 0;
  uStack_88 = 0;
  if (pIVar11 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar11->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar11->_1).this_arg.bits + 1) == '\0') {
        return;
      }
      pvVar6 = (__this_00->_1).byval_arg.data;
      if (pvVar6 != (void *)0x0) {
        cStack_90 = *(char *)((long)pvVar6 + 0x18);
        uStack_88 = *(undefined8 *)((long)pvVar6 + 0x20);
        if (cStack_90 == '\0') {
          return;
        }
        ppIVar2 = (Il2CppType **)&(pIVar11->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var8 = *(unkuint10 *)ppIVar2;
        t1._ticks = (int64_t)*(ushort *)&(pIVar11->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a5ed
        ;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var8;
        left_00.fields._8_8_ = pIVar21;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ =
             (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t1._ticks;
        error = extraout_RDX.fields._dateData;
        t1_00 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar6 = (__this_00->_1).byval_arg.data;
        SVar20._ticks = (int64_t)pIVar21;
        if (pvVar6 != (void *)0x0) {
          cStack_90 = *(char *)((long)pvVar6 + 0x18);
          uStack_88 = *(undefined8 *)((long)pvVar6 + 0x20);
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a61f;
          __this_01.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_01.fields._0_8_ = &cStack_90;
          t1._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_01,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          t2._ticks = 0;
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a649;
          bVar9 = System_TimeSpan__op_LessThan(t1_00,(System_TimeSpan_o)t1._ticks,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          error._dateData = (uint64_t)(pIVar11->_1).byval_arg.data;
          SVar20._ticks = 1;
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a672;
          pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)error._dateData,1,
                               (MethodInfo_331B520 *)
                               pMStack_78->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now.fields._8_8_ =
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0;
          if (pIStack_70 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x341a68a;
            (*(code *)(pIStack_70->_1).namespaze)
                      ((pIStack_70->_1).element_class,pAVar12,*(undefined8 *)&(pIStack_70->_1).byval_arg.bits)
            ;
            return;
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar11->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var8 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ =
           (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
           (ulong)*(ushort *)&(pIVar11->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4ff
        ;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var8;
      left.fields._8_8_ = pIVar21;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar20._ticks = (int64_t)pIVar21;
      error = extraout_RDX.fields._dateData;
      t1._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar6 = (__this_00->_1).byval_arg.data;
      if (pvVar6 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar6 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a54d
        ;
        SVar20._ticks = t2._ticks;
        error._dateData = t1._ticks;
        bVar9 = System_TimeSpan__op_LessThan
                          ((System_TimeSpan_o)t1._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') goto label_0341a589;
        error._dateData = (uint64_t)(pIVar11->_1).namespaze;
        SVar20._ticks = 1;
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a576
        ;
        pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)error._dateData,1,
                             (MethodInfo_331B380 *)
                             pMStack_78->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (pIStack_70 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0
        ;
      }
    }
  }
  pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_b0 = pIVar11;
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t1._ticks;
  SStack_a0 = extraout_RDX.fields._dateData;
  pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  lStack_c0 = 0;
  lVar10 = *(long *)&(((Il2CppClass *)error._dateData)->_1).byval_arg.bits;
  if (lVar10 != 0) {
    bVar9 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                      (lVar10,SVar20._ticks & 0xff,&lStack_c0);
    if ((char)bVar9 == '\0') {
      return;
    }
    if ((lStack_c0 != 0) &&
       (((*(undefined1 *)(lStack_c0 + 0x3a) = 0, pAVar13 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                              ("unknown_error",
                               *(MethodInfo_331AB10 **)
                                (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar13 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) && (lStack_c0 != 0)))) {
      if ((char)(pAVar13->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(lStack_c0 + 0x38) == '\0') {
label_0341a96a:
          *(undefined2 *)(lStack_c0 + 0x38) = 0x100;
          *(undefined8 *)(lStack_c0 + 0x18) = 0;
          *(System_String_o **)(lStack_c0 + 0x20) = (pAVar13->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          lVar10 = lStack_c0;
          pcVar7 = (((Il2CppClass *)error._dateData)->_1).namespaze;
          if ((pcVar7 != (char *)0x0) && (Var24 = (**(code **)(pcVar7 + 0x18))(), lVar10 != 0)) {
            *(unkbyte10 *)(lVar10 + 0x28) = Var24;
            *(undefined4 *)(lVar10 + 0x32) = uStack_b6;
            *(undefined2 *)(lVar10 + 0x36) = uStack_b2;
            pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((pAVar13->fields)._Error_k__BackingField,0,
                                 *(MethodInfo_331B520 **)
                                  (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108));
joined_r0x0341a9e7:
            if (lStack_c0 != 0) goto label_0341a82a;
          }
        }
        else {
          pvVar6 = (((Il2CppClass *)error._dateData)->_1).byval_arg.data;
          if (pvVar6 == (void *)0x0) goto label_0341a9ed;
          if (*(char *)((long)pvVar6 + 0x28) == '\0') goto label_0341a96a;
          *(System_String_o **)(lStack_c0 + 0x20) = (pAVar13->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          if ((lStack_c0 == 0) ||
             (pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  (*(Il2CppObject **)(lStack_c0 + 0x18),
                                   (pAVar13->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
             , lStack_c0 == 0)) goto label_0341a9ed;
label_0341a82a:
          if (((*(System_Collections_Generic_List_object__o **)(lStack_c0 + 0x10) !=
                (System_Collections_Generic_List_object__o *)0x0) &&
              (pSVar14 = System_Collections_Generic_List_object___ToArray
                                   (*(System_Collections_Generic_List_object__o **)(lStack_c0 + 0x10),
                                    *(MethodInfo_362E340 **)
                                     (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x148)
                                   ), lStack_c0 != 0)) && (lVar10 = *(long *)(lStack_c0 + 0x10), lVar10 != 0))
          {
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            length = *(int32_t *)(lVar10 + 0x18);
            *(undefined4 *)(lVar10 + 0x18) = 0;
            if (0 < length) {
              System_Array__Clear(*(System_Array_o **)(lVar10 + 0x10),0,length,(MethodInfo *)0x0);
            }
            if (pSVar14 != (System_Object_array *)0x0) {
              if ((int)pSVar14->max_length < 1) {
                return;
              }
              uVar18 = 0;
              if ((pSVar14->max_length & 0xffffffff) != 0) {
                do {
                  pIVar16 = pSVar14->m_Items[uVar18];
                  if (pIVar16 != (Il2CppObject *)0x0) {
                    if (pIVar16 == (Il2CppObject *)0x0) goto label_0341a9ed;
                    (*pIVar16[1].monitor)(pIVar16[4].klass,pAVar12,pIVar16[2].monitor);
                  }
                  uVar18 = uVar18 + 1;
                  uVar5 = (uint)pSVar14->max_length;
                  if ((long)(int)uVar5 <= (long)uVar18) {
                    return;
                  }
                } while (uVar18 < uVar5);
              }
              goto label_0341a9f2;
            }
          }
        }
      }
      else {
        *(undefined2 *)(lStack_c0 + 0x38) = 1;
        *(Il2CppObject **)(lStack_c0 + 0x18) = (pAVar13->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(lStack_c0 + 0x18);
        if (lStack_c0 != 0) {
          *(undefined8 *)(lStack_c0 + 0x20) = 0;
          il2cpp_runtime_helper_022b4080(lStack_c0 + 0x20,0);
          lVar10 = lStack_c0;
          pcVar7 = (((Il2CppClass *)error._dateData)->_1).namespaze;
          if ((pcVar7 != (char *)0x0) && (Var24 = (**(code **)(pcVar7 + 0x18))(), lVar10 != 0)) {
            *(unkbyte10 *)(lVar10 + 0x28) = Var24;
            *(undefined2 *)(lVar10 + 0x36) = uStack_b2;
            *(undefined4 *)(lVar10 + 0x32) = uStack_b6;
            if (lStack_c0 != 0) {
              pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                  (*(Il2CppObject **)(lStack_c0 + 0x18),0,
                                   *(MethodInfo_331B380 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100))
              ;
              goto joined_r0x0341a9e7;
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$ClearSessionCache
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__ClearSessionCache (const MethodInfo* method);
// 0x44c7a50

void ApplicationManagers_Credits_AottgCreditsService__ClearSessionCache(MethodInfo *method)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int32_t length;
  void *pvVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Object_o *x;
  undefined1 auVar6 [12];
  unkuint10 Var7;
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6_o __this;
  bool_conflict bVar8;
  long lVar9;
  Il2CppClass *__this_00;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar10;
  Il2CppClass *pIVar11;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar12;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar13;
  System_Object_array *pSVar14;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *in_RCX;
  long extraout_RDX;
  Il2CppClass *onResult;
  System_DateTime_o extraout_RDX_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_01;
  char *extraout_RDX_02;
  ulong uVar15;
  System_TimeSpan_Fields SVar16;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  Il2CppClass *__this_02;
  System_DateTime_Fields error;
  Il2CppClass *pIVar17;
  System_TimeSpan_Fields in_R8;
  MethodInfo_331A460 *in_R9;
  Il2CppClass *pIVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_03;
  Cysharp_Threading_Tasks_UniTask_o task;
  unkbyte10 Var21;
  long lStackY_d0;
  undefined4 uStackY_c6;
  undefined2 uStackY_c2;
  Il2CppClass *pIStackY_c0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStackY_b8;
  System_DateTime_Fields SStackY_b0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStackY_a8;
  char cStackY_a0;
  undefined7 uStackY_9f;
  undefined8 uStackY_98;
  MethodInfo_331A460 *pMStackY_88;
  Il2CppClass *pIStackY_80;
  Il2CppClass *pIStackY_78;
  Il2CppClass *pIStackY_70;
  ulong uStackY_68;
  undefined4 uVar22;
  undefined4 uVar23;
  Il2CppMethodPointer pIVar24;
  InvokerMethod pIVar25;
  Il2CppClass *entry;
  Il2CppClass *pIVar26;
  char *pcVar27;
  Il2CppType *pIVar28;
  Il2CppType **ppIVar29;
  MethodInfo_37EC980 *method_00;
  
  now.fields._8_8_ = in_RCX;
  if (g_data_057aeae4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aeae4 = '\x01';
    now.fields._8_8_ = in_RCX;
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeae5 == '\0') {
      uStackY_68 = 0x44c7b2f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgCreditsService_FetchCreditsAsync_d__6);
      g_data_057aeae5 = '\x01';
    }
    pIVar11 = (Il2CppClass *)0x0;
    pIVar28 = (Il2CppType *)0x0;
    pIVar25 = (InvokerMethod)0x0;
    uVar23 = 0;
    pIVar24 = (Il2CppMethodPointer)0x0;
    ppIVar29 = (Il2CppType **)0x0;
    uStackY_68 = 0x44c7b5f;
    il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffa8,0);
    uStackY_68 = 0x44c7b71;
    pcVar27 = extraout_RDX_02;
    il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb8,extraout_RDX_02);
    uVar22 = 0xffffffff;
    if (*(long *)(MethodInfo_Void_Start_AottgCreditsService_FetchCreditsAsync_d__6 + 0x38) == 0) {
      uStackY_68 = 0x44c7b8e;
      il2cpp_runtime_helper_02300a20();
    }
    uStackY_68 = 0x44c7b96;
    __this.fields._4_4_ = uVar23;
    __this.fields.__1__state = uVar22;
    __this.fields.__t__builder.fields.runnerPromise =
         (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar24;
    __this.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar25;
    __this.fields.onComplete = (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)pcVar27;
    __this.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar11;
    __this.fields.__u__1.fields.task.fields.result = (Il2CppObject *)pIVar28;
    __this.fields.__u__1.fields.task.fields._16_8_ = ppIVar29;
    ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext
              (__this,(MethodInfo *)&stack0xffffffffffffffa0);
    uStackY_68 = 0x44c7ba0;
    auVar6 = il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffa8,0);
    uStackY_68 = 0x44c7bac;
    task.fields._12_4_ = 0;
    task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar6._0_8_;
    task.fields.token = auVar6._8_2_;
    task.fields._10_2_ = auVar6._10_2_;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
    return;
  }
  lVar9 = *(long *)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (lVar9 == 0) {
    return;
  }
  __this_01 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar9 + 0x28);
  if (__this_01 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Clear
              (__this_01,*(MethodInfo_3162290 **)(*(long *)(*(long *)(MethodInfo_Void_Clear + 0x20) + 0xc0) + 0x60));
    return;
  }
  uVar15 = MethodInfo_Void_Clear;
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = *(Il2CppClass **)&(__this_01->fields)._freeCount;
  if (pIVar11 != (Il2CppClass *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Remove
              (pIVar11,uVar15 & 0xff,*(undefined8 *)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0x68))
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar19 = (ulong)now.fields._8_8_ & 0xffffffff;
  t2._ticks = uVar15 & 0xffffffff;
  entry = (Il2CppClass *)0x0;
  lVar9 = *(long *)(*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) + 0x70);
  pIVar17 = (Il2CppClass *)in_R8._ticks;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar9);
  pIVar10 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  __this_02 = __this_00;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this_00,
             (MethodInfo_27BBA90 *)pIVar10);
  pIVar18 = onResult;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).name = (char *)pIVar11;
    pIVar10 = pIVar11;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).name);
    *(char *)&(__this_00->_1).namespaze = (char)t2._ticks;
    if (onResult == (Il2CppClass *)0x0) {
      return;
    }
    __this_02 = *(Il2CppClass **)&(pIVar11->_1).byval_arg.bits;
    if (__this_02 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c **)
            (*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIVar10 = (Il2CppClass *)(uVar15 & 0xff);
      bVar8 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                        (__this_02,pIVar10,&stack0xffffffffffffffb8);
      if ((char)bVar8 == '\0') {
        lVar9 = *(long *)(*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) + 0x58);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = il2cpp_runtime_helper_023009c0();
        }
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar9);
        pIVar10 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar10);
        __this_02 = *(Il2CppClass **)&(pIVar11->_1).byval_arg.bits;
        if (__this_02 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar10 = (Il2CppClass *)(ulong)*(uint *)&(__this_00->_1).namespaze;
        entry = (Il2CppClass *)t2._ticks;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_02,pIVar10,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ =
           (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
           (pIVar11->_1).namespaze;
      if (now.fields._8_8_ !=
          (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        pIVar10 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_02 = ((now.fields._8_8_)->_1).element_class;
        auVar20 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        pIVar26 = entry;
        if ((char)uVar19 == '\0') {
          now.fields._8_8_ =
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
               (auVar20._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar20._0_8_;
          __this_02 = pIVar11;
          pIVar17 = onResult;
          bVar8 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar11,
                             (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)entry,now,
                             (System_Action_AottgQueryResult_TValue___o *)onResult,in_R9);
          pIVar10 = entry;
          if ((char)bVar8 != '\0') {
            return;
          }
        }
        if (pIVar26 != (Il2CppClass *)0x0) {
          if ((char)(pIVar26->_1).this_arg.bits == '\0') {
            pIVar10 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIVar10 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIVar26->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_02 = (onResult->_1).element_class;
          (*(code *)(onResult->_1).namespaze)(__this_02,pIVar10,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIVar26 != (Il2CppClass *)0x0) &&
             (__this_02 = (Il2CppClass *)(pIVar26->_1).name, __this_02 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c **)
                  (*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_02->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar27 = (__this_02->_1).name;
            if (pcVar27 != (char *)0x0) {
              uVar3 = *(uint *)&(__this_02->_1).namespaze;
              pIVar10 = onResult;
              if (uVar3 < *(uint *)(pcVar27 + 0x18)) {
                now.fields._8_8_ =
                     (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                     (ulong)(uVar3 + 1);
                *(uint *)&(__this_02->_1).namespaze = uVar3 + 1;
                __this_02 = (Il2CppClass *)(pcVar27 + (long)(int)uVar3 * 8 + 0x20);
                *(Il2CppClass **)(pcVar27 + (long)(int)uVar3 * 8 + 0x20) = onResult;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
              }
              if (pIVar26 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar26->_1).this_arg.bits + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&(pIVar26->_1).this_arg.bits + 2) = 1;
                pcVar27 = (pIVar11->_1).name;
                uVar2 = *(undefined1 *)&(__this_00->_1).namespaze;
                pIVar18 = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar2);
                lVar9 = *(long *)(*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) +
                                 0xe8);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = il2cpp_runtime_helper_023009c0();
                }
                pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar9);
                now.fields._8_8_ =
                     *(ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c **)
                      (*(long *)((long)(((Il2CppClass *)in_R8._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIVar10 = __this_00;
                __this_02 = pIVar11;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar27 != (char *)0x0) {
                  (**(code **)(pcVar27 + 0x18))
                            (*(undefined8 *)(pcVar27 + 0x40),uVar2,pIVar11,*(undefined8 *)(pcVar27 + 0x28));
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
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar16._ticks = (int64_t)pIVar10;
  error._dateData = (uint64_t)__this_02;
  pMStackY_88 = in_R9;
  pIStackY_80 = pIVar17;
  pIStackY_78 = __this_00;
  pIStackY_70 = pIVar18;
  uStackY_68 = uVar19;
  if (g_data_057a8cf0 == '\0') {
    pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    error._dateData = (uint64_t)&TypeInfo_TimeSpan;
    pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStackY_a0 = '\0';
  uStackY_9f = 0;
  uStackY_98 = 0;
  if (pIVar10 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar10->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar10->_1).this_arg.bits + 1) == '\0') {
        return;
      }
      pvVar4 = (__this_02->_1).byval_arg.data;
      if (pvVar4 != (void *)0x0) {
        cStackY_a0 = *(char *)((long)pvVar4 + 0x18);
        uStackY_98 = *(undefined8 *)((long)pvVar4 + 0x20);
        if (cStackY_a0 == '\0') {
          return;
        }
        ppIVar29 = (Il2CppType **)&(pIVar10->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar29;
        Var7 = *(unkuint10 *)ppIVar29;
        in_R8._ticks = (int64_t)*(ushort *)&(pIVar10->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var7;
        left_00.fields._8_8_ = pIVar11;
        left_00.fields._dateTime.fields._dateData = extraout_RDX_00.fields._dateData;
        now.fields._8_8_ =
             (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)in_R8._ticks;
        error = extraout_RDX_00.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar4 = (__this_02->_1).byval_arg.data;
        SVar16._ticks = (int64_t)pIVar11;
        if (pvVar4 != (void *)0x0) {
          cStackY_a0 = *(char *)((long)pvVar4 + 0x18);
          uStackY_98 = *(undefined8 *)((long)pvVar4 + 0x20);
          pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &cStackY_a0;
          in_R8._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_03,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          t2._ticks = 0;
          pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar8 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)in_R8._ticks,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          error._dateData = (uint64_t)(pIVar10->_1).byval_arg.data;
          SVar16._ticks = 1;
          pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)error._dateData,1,
                               (MethodInfo_331B520 *)
                               pMStackY_88->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now.fields._8_8_ =
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0;
          if (pIStackY_80 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStackY_80->_1).namespaze)
                      ((pIStackY_80->_1).element_class,pAVar12,
                       *(undefined8 *)&(pIStackY_80->_1).byval_arg.bits);
            return;
          }
        }
      }
    }
    else {
      ppIVar29 = (Il2CppType **)&(pIVar10->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar29;
      Var7 = *(unkuint10 *)ppIVar29;
      now.fields._8_8_ =
           (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
           (ulong)*(ushort *)&(pIVar10->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var7;
      left.fields._8_8_ = pIVar11;
      left.fields._dateTime.fields._dateData = extraout_RDX_00.fields._dateData;
      SVar16._ticks = (int64_t)pIVar11;
      error = extraout_RDX_00.fields._dateData;
      in_R8._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar4 = (__this_02->_1).byval_arg.data;
      if (pvVar4 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar4 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar16._ticks = t2._ticks;
        error._dateData = in_R8._ticks;
        bVar8 = System_TimeSpan__op_LessThan
                          ((System_TimeSpan_o)in_R8._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') goto label_0341a589;
        error._dateData = (uint64_t)(pIVar10->_1).namespaze;
        SVar16._ticks = 1;
        pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)error._dateData,1,
                             (MethodInfo_331B380 *)
                             pMStackY_88->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (pIStackY_80 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0
        ;
      }
    }
  }
  pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStackY_c0 = pIVar10;
  pAStackY_b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)in_R8._ticks;
  SStackY_b0 = extraout_RDX_00.fields._dateData;
  pAStackY_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  lStackY_d0 = 0;
  lVar9 = *(long *)&(((Il2CppClass *)error._dateData)->_1).byval_arg.bits;
  if (lVar9 != 0) {
    bVar8 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                      (lVar9,SVar16._ticks & 0xff,&lStackY_d0);
    if ((char)bVar8 == '\0') {
      return;
    }
    if ((lStackY_d0 != 0) &&
       (((*(undefined1 *)(lStackY_d0 + 0x3a) = 0, pAVar13 = extraout_RDX_01,
         extraout_RDX_01 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                              ("unknown_error",
                               *(MethodInfo_331AB10 **)
                                (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar13 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) && (lStackY_d0 != 0)))) {
      if ((char)(pAVar13->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(lStackY_d0 + 0x38) == '\0') {
label_0341a96a:
          *(undefined2 *)(lStackY_d0 + 0x38) = 0x100;
          *(undefined8 *)(lStackY_d0 + 0x18) = 0;
          *(System_String_o **)(lStackY_d0 + 0x20) = (pAVar13->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          lVar9 = lStackY_d0;
          pcVar27 = (((Il2CppClass *)error._dateData)->_1).namespaze;
          if ((pcVar27 != (char *)0x0) && (Var21 = (**(code **)(pcVar27 + 0x18))(), lVar9 != 0)) {
            *(unkbyte10 *)(lVar9 + 0x28) = Var21;
            *(undefined4 *)(lVar9 + 0x32) = uStackY_c6;
            *(undefined2 *)(lVar9 + 0x36) = uStackY_c2;
            pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((pAVar13->fields)._Error_k__BackingField,0,
                                 *(MethodInfo_331B520 **)
                                  (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108));
joined_r0x0341a9e7:
            if (lStackY_d0 != 0) goto label_0341a82a;
          }
        }
        else {
          pvVar4 = (((Il2CppClass *)error._dateData)->_1).byval_arg.data;
          if (pvVar4 == (void *)0x0) goto label_0341a9ed;
          if (*(char *)((long)pvVar4 + 0x28) == '\0') goto label_0341a96a;
          *(System_String_o **)(lStackY_d0 + 0x20) = (pAVar13->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          if ((lStackY_d0 == 0) ||
             (pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  (*(Il2CppObject **)(lStackY_d0 + 0x18),
                                   (pAVar13->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
             , lStackY_d0 == 0)) goto label_0341a9ed;
label_0341a82a:
          if (((*(System_Collections_Generic_List_object__o **)(lStackY_d0 + 0x10) !=
                (System_Collections_Generic_List_object__o *)0x0) &&
              (pSVar14 = System_Collections_Generic_List_object___ToArray
                                   (*(System_Collections_Generic_List_object__o **)(lStackY_d0 + 0x10),
                                    *(MethodInfo_362E340 **)
                                     (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x148)
                                   ), lStackY_d0 != 0)) && (lVar9 = *(long *)(lStackY_d0 + 0x10), lVar9 != 0))
          {
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            length = *(int32_t *)(lVar9 + 0x18);
            *(undefined4 *)(lVar9 + 0x18) = 0;
            if (0 < length) {
              System_Array__Clear(*(System_Array_o **)(lVar9 + 0x10),0,length,(MethodInfo *)0x0);
            }
            if (pSVar14 != (System_Object_array *)0x0) {
              if ((int)pSVar14->max_length < 1) {
                return;
              }
              uVar15 = 0;
              if ((pSVar14->max_length & 0xffffffff) != 0) {
                do {
                  pIVar5 = pSVar14->m_Items[uVar15];
                  if (pIVar5 != (Il2CppObject *)0x0) {
                    if (pIVar5 == (Il2CppObject *)0x0) goto label_0341a9ed;
                    (*pIVar5[1].monitor)(pIVar5[4].klass,pAVar12,pIVar5[2].monitor);
                  }
                  uVar15 = uVar15 + 1;
                  uVar3 = (uint)pSVar14->max_length;
                  if ((long)(int)uVar3 <= (long)uVar15) {
                    return;
                  }
                } while (uVar15 < uVar3);
              }
              goto label_0341a9f2;
            }
          }
        }
      }
      else {
        *(undefined2 *)(lStackY_d0 + 0x38) = 1;
        *(Il2CppObject **)(lStackY_d0 + 0x18) = (pAVar13->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(lStackY_d0 + 0x18);
        if (lStackY_d0 != 0) {
          *(undefined8 *)(lStackY_d0 + 0x20) = 0;
          il2cpp_runtime_helper_022b4080(lStackY_d0 + 0x20,0);
          lVar9 = lStackY_d0;
          pcVar27 = (((Il2CppClass *)error._dateData)->_1).namespaze;
          if ((pcVar27 != (char *)0x0) && (Var21 = (**(code **)(pcVar27 + 0x18))(), lVar9 != 0)) {
            *(unkbyte10 *)(lVar9 + 0x28) = Var21;
            *(undefined2 *)(lVar9 + 0x36) = uStackY_c2;
            *(undefined4 *)(lVar9 + 0x32) = uStackY_c6;
            if (lStackY_d0 != 0) {
              pAVar12 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                  (*(Il2CppObject **)(lStackY_d0 + 0x18),0,
                                   *(MethodInfo_331B380 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100))
              ;
              goto joined_r0x0341a9e7;
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$FetchCredits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsService__FetchCredits (ApplicationManagers_Credits_AottgCreditsService_o* __this, ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key, System_Action_AottgQueryFetchResult_AottgCreditsResponse___o* onComplete, const MethodInfo* method);
// 0x44c7b10

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
  
  if (g_data_057aeae5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgCreditsService_FetchCreditsAsync_d__6);
    g_data_057aeae5 = '\x01';
  }
  pIVar6 = (Il2CppClass *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  ppIVar8 = (Il2CppType **)0x0;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffc0,0);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffd0,param_3);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgCreditsService_FetchCreditsAsync_d__6 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this.fields._4_4_ = uVar3;
  __this.fields.__1__state = uVar2;
  __this.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this.fields.onComplete = (System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *)param_3;
  __this.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this.fields.__u__1.fields.task.fields.result = (Il2CppObject *)pIVar7;
  __this.fields.__u__1.fields.task.fields._16_8_ = ppIVar8;
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext
            (__this,(MethodInfo *)&stack0xffffffffffffffb8);
  auVar1 = il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffc0,0);
  task.fields._12_4_ = 0;
  task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar1._0_8_;
  task.fields.token = auVar1._8_2_;
  task.fields._10_2_ = auVar1._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsService$$FetchCreditsAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync (ApplicationManagers_Credits_AottgCreditsService_o* __this, System_Action_AottgQueryFetchResult_AottgCreditsResponse___o* onComplete, const MethodInfo* method);
// 0x44c7bc0

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync
          (ApplicationManagers_Credits_AottgCreditsService_o *__this,
          System_Action_AottgQueryFetchResult_AottgCreditsResponse___o *onComplete,MethodInfo *method)

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
  
  if (g_data_057aeae5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgCreditsService_FetchCreditsAsync_d__6);
    g_data_057aeae5 = '\x01';
    method = extraout_RDX;
  }
  pIVar6 = (Il2CppClass *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  ppIVar8 = (Il2CppType **)0x0;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffc0,0,method);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffd0,onComplete);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgCreditsService_FetchCreditsAsync_d__6 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this_00.fields._4_4_ = uVar3;
  __this_00.fields.__1__state = uVar2;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this_00.fields.onComplete = onComplete;
  __this_00.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this_00.fields.__u__1.fields.task.fields.result = (Il2CppObject *)pIVar7;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = ppIVar8;
  ApplicationManagers_Credits_AottgCreditsService__FetchCreditsAsync_d__6__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffffb8);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffc0,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.Credits.AottgCreditsService$$MapResult
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsService__MapResult (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o* result, const MethodInfo* method);
// 0x44c7c60

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsService__MapResult
          (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *result,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar1;
  System_String_o *pSVar2;
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  ApplicationManagers_Credits_AottgCreditsResult_o *extraout_RAX;
  ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *__this_00;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  __this_00 = result;
  if (g_data_057aeae6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Error);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsFromCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryResultState_get_State);
    __this_00 = (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *)&MethodInfo_AottgCreditsResponse_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeae6 = '\x01';
  }
  if (result == (ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  switch((result->fields)._State_k__BackingField) {
  case 0:
    if (g_data_057aead1 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead1 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    uVar5 = 0;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 0;
    (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,0);
    (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
    uVar3 = 1;
    uVar4 = 0;
    break;
  case 1:
    pAVar1 = (result->fields)._Value_k__BackingField;
    uVar5 = (undefined1)(result->fields)._IsFromCache_k__BackingField;
    if (g_data_057aead2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead2 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 1;
    (__this->fields)._Credits_k__BackingField = pAVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,pAVar1);
    (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
    goto label_044c7f09;
  case 2:
    pAVar1 = (result->fields)._Value_k__BackingField;
    if (g_data_057aead3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead3 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 2;
    (__this->fields)._Credits_k__BackingField = pAVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,pAVar1);
    (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
    uVar5 = 1;
    uVar4 = 1;
    uVar3 = 1;
    break;
  default:
    pSVar2 = (result->fields)._Error_k__BackingField;
    if (g_data_057aead4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    uVar5 = 0;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 3;
    (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,0);
    (__this->fields)._Error_k__BackingField = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,pSVar2);
label_044c7f09:
    uVar4 = 0;
    uVar3 = 0;
    break;
  case 4:
    pAVar1 = (result->fields)._Value_k__BackingField;
    pSVar2 = (result->fields)._Error_k__BackingField;
    if (g_data_057aead5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead5 = '\x01';
    }
    __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    uVar3 = 0;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = 4;
    (__this->fields)._Credits_k__BackingField = pAVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,pAVar1);
    (__this->fields)._Error_k__BackingField = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,pSVar2);
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
// 0x44c7f30

void ApplicationManagers_Credits_AottgCreditsService___ctor
               (ApplicationManagers_Credits_AottgCreditsService_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


