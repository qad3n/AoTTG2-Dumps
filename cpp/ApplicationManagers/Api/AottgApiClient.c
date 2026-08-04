// Type: ApplicationManagers.Api.AottgApiClient
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiClient.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$MoveNext
// il2cpp: void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this, const MethodInfo* method);
// 0x44ce5c0

void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext
               (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this,MethodInfo *method)

{
  ushort uVar1;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_IAottgApiTransport_o *pAVar2;
  ApplicationManagers_Api_IAottgApiTransport_c *pAVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  int iVar8;
  Il2CppRGCTXData *pIVar9;
  VirtualInvokeData *pVVar10;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAVar11;
  ApplicationManagers_Api_AottgApiResult_o *pAVar12;
  undefined8 *puVar13;
  long lVar14;
  System_ArgumentNullException_o *__this_01;
  System_String_o *pSVar15;
  System_String_o *error;
  undefined8 *puVar16;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  undefined8 uVar17;
  Il2CppMethodPointer pIVar18;
  long lVar19;
  long lVar20;
  MethodInfo *in_R9;
  InvokerMethod *ppIVar21;
  undefined1 auVar22 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_68;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_60;
  undefined8 local_58;
  long *local_48;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_40;
  undefined8 local_38;
  
  if (g_data_057aeb13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiTransportResponse_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgApiTransport);
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb13 = '\x01';
    in_RDX = extraout_RDX;
  }
  local_88 = (long *)0x0;
  uStack_80 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
  local_78 = 0;
  local_48 = (long *)0x0;
  pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
  local_38 = 0;
  if (*(int *)&method->methodPointer == 0) {
    local_78._0_2_ = method->slot;
    local_78._2_1_ = method->parameters_count;
    local_78._3_1_ = method->bitflags;
    local_78._4_4_ = *(undefined4 *)&method->field_0x54;
    plVar5 = (method->field8_0x40).genericMethod;
    pAVar11 = *(ApplicationManagers_Api_AottgApiTransportResponse_o **)&method->token;
    (method->field8_0x40).genericMethod = (void *)0x0;
    method->token = 0;
    method->flags = 0;
    method->iflags = 0;
    method->slot = 0;
    method->parameters_count = '\0';
    method->bitflags = '\0';
    *(undefined4 *)&method->field_0x54 = 0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
joined_r0x044ce71d:
    local_88 = plVar5;
    uStack_80 = pAVar11;
    if (plVar5 != (long *)0x0) {
      sVar6 = (short)local_78;
      lVar19 = *(long *)(MethodInfo_AottgApiTransportResponse_GetResult + 0x20);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = il2cpp_runtime_helper_023009c0();
      }
      lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x28);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = il2cpp_runtime_helper_023009c0();
      }
      lVar14 = *plVar5;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar20) == lVar19) {
            in_RCX = (MethodInfo *)
                     ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar20) * 0x10 + lVar14 + 0x138);
            goto label_044ce948;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar20);
      }
      in_RCX = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar5,lVar19,0);
label_044ce948:
      pAVar11 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)
                (*in_RCX->methodPointer)(plVar5,(ulong)(uint)(int)sVar6,in_RCX->virtualMethodPointer);
    }
    pAVar12 = ApplicationManagers_Api_AottgApiClient__HandleResponse
                        ((ApplicationManagers_Api_AottgApiRequest_o *)method->klass,
                         (ApplicationManagers_Api_AottgApiTransportRequest_o *)
                         (method->field7_0x38).rgctx_data,pAVar11,in_RCX);
  }
  else {
    if (method->klass == (Il2CppClass *)0x0) {
      uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
      __this_01 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(uVar17);
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"request");
      System_ArgumentNullException___ctor_3c0ad60(__this_01,pSVar15,(MethodInfo *)0x0);
      uVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MoveNext);
      il2cpp_runtime_helper_022b2b10(__this_01,uVar17);
label_044ceb09:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      __this_00 = (ApplicationManagers_Api_AottgApiClient_o *)method->return_type;
      if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) goto label_044ceb09;
      pIVar9 = (Il2CppRGCTXData *)
               ApplicationManagers_Api_AottgApiClient__BuildTransportRequest
                         (__this_00,(ApplicationManagers_Api_AottgApiRequest_o *)method->klass,in_RDX);
      (method->field7_0x38).rgctx_data = pIVar9;
      il2cpp_runtime_helper_022b4080(&method->field7_0x38,pIVar9);
      pAVar2 = (__this_00->fields)._transport;
      if (pAVar2 != (ApplicationManagers_Api_IAottgApiTransport_o *)0x0) {
        in_RCX = (MethodInfo *)method->parameters;
        pIVar9 = (method->field7_0x38).rgctx_data;
        pAVar3 = pAVar2->klass;
        uVar1._0_1_ = (pAVar3->_2).rank;
        uVar1._1_1_ = (pAVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pAVar3->_1).interfaceOffsets;
          lVar19 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar19) == TypeInfo_IAottgApiTransport) {
              pVVar10 = pAVar3->vtable + *(int *)((long)&pIVar4->offset + lVar19);
              goto label_044ce73a;
            }
            lVar19 = lVar19 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar19);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pAVar2,TypeInfo_IAottgApiTransport,0);
label_044ce73a:
        (*pVVar10->methodPtr)(&local_68,pAVar2,pIVar9,in_RCX,pVVar10->method);
        local_38 = local_58;
        local_48 = local_68;
        pAStack_40 = pAStack_60;
        local_68 = (long *)0x0;
        pAStack_60 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
        local_58 = 0;
        if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiTran + 0x20) + 0x135) & 1) == 0) {
          il2cpp_runtime_helper_023009c0();
        }
        local_58 = local_38;
        local_68 = local_48;
        pAStack_60 = pAStack_40;
        il2cpp_runtime_helper_022b4080(&local_68,0);
        local_78 = local_58;
        local_88 = local_68;
        uStack_80 = pAStack_60;
        lVar19 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = il2cpp_runtime_helper_023009c0();
        }
        plVar5 = local_88;
        pAVar11 = uStack_80;
        if (local_88 != (long *)0x0) {
          sVar6 = (short)local_78;
          lVar19 = *(long *)(*(long *)(*(long *)(lVar19 + 0xc0) + 0x18) + 0x20);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = il2cpp_runtime_helper_023009c0();
          }
          lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = il2cpp_runtime_helper_023009c0();
          }
          lVar14 = *plVar5;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
            lVar20 = 0;
            do {
              if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar20) == lVar19) {
                in_RCX = (MethodInfo *)
                         ((long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar20) + 1) * 0x10 + lVar14 + 0x138)
                ;
                goto label_044ce889;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar20);
          }
          in_RCX = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar5,lVar19,1);
label_044ce889:
          iVar8 = (*in_RCX->methodPointer)(plVar5,(ulong)(uint)(int)sVar6,in_RCX->virtualMethodPointer);
          pAVar11 = uStack_80;
          plVar5 = local_88;
          if (iVar8 == 0) {
            *(undefined4 *)&method->methodPointer = 0;
            *(undefined4 *)&method->field8_0x40 = (undefined4)local_88;
            *(undefined4 *)((long)&method->field8_0x40 + 4) = local_88._4_4_;
            method->token = (uint32_t)uStack_80;
            method->flags = uStack_80._4_2_;
            method->iflags = uStack_80._6_2_;
            method->slot = (short)local_78;
            method->parameters_count = local_78._2_1_;
            method->bitflags = local_78._3_1_;
            *(undefined4 *)&method->field_0x54 = local_78._4_4_;
            uStack_80 = pAVar11;
            il2cpp_runtime_helper_022b4080(&method->field8_0x40,0);
            il2cpp_runtime_helper_024eadb0(&method->virtualMethodPointer,&local_88,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
            return;
          }
        }
        goto joined_r0x044ce71d;
      }
    }
    auVar22 = il2cpp_runtime_helper_022b2c90();
    uVar17 = auVar22._0_8_;
    if (auVar22._8_4_ != 1) {
      if (auVar22._8_4_ != 1) {
        _Unwind_Resume(uVar17);
      }
      puVar13 = (undefined8 *)__cxa_begin_catch(uVar17);
      uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      cVar7 = il2cpp_runtime_helper_0233e000(uVar17,*(undefined8 *)*puVar13);
      if (cVar7 == '\0') {
        puVar16 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar16 = *puVar13;
        __cxa_throw(puVar16,&PTR_PTR_05215060,0);
      }
      pAVar12 = (ApplicationManagers_Api_AottgApiResult_o *)*puVar13;
      __cxa_end_catch();
      *(undefined4 *)&method->methodPointer = 0xfffffffe;
      (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
      il2cpp_runtime_helper_022b4080(&method->field7_0x38,0);
      lVar19 = il2cpp_runtime_helper_023445d0();
      pIVar18 = method->virtualMethodPointer;
      if (pIVar18 == (Il2CppMethodPointer)0x0) {
        method->invoker_method = (InvokerMethod)pAVar12;
        ppIVar21 = &method->invoker_method;
        goto label_044ce9d5;
      }
      if ((*(byte *)(*(long *)(lVar19 + 0x20) + 0x135) & 1) == 0) {
        lVar19 = il2cpp_runtime_helper_023009c0();
        lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
        if ((*(byte *)(lVar19 + 0x135) & 1) != 0) goto label_044cecf1;
label_044ced2c:
        lVar19 = il2cpp_runtime_helper_023009c0();
        lVar14 = *(long *)pIVar18;
        uVar1 = *(ushort *)(lVar14 + 0x12e);
      }
      else {
        lVar19 = *(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) goto label_044ced2c;
label_044cecf1:
        lVar14 = *(long *)pIVar18;
        uVar1 = *(ushort *)(lVar14 + 0x12e);
      }
      if ((ulong)uVar1 != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar20) == lVar19) {
            iVar8 = *(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar20) + 3;
label_044cea55:
            puVar13 = (undefined8 *)(lVar14 + (long)iVar8 * 0x10 + 0x138);
            goto label_044cea65;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar1 * 0x10 != lVar20);
      }
      uVar17 = 3;
      goto label_044cea47;
    }
    puVar13 = (undefined8 *)__cxa_begin_catch(uVar17);
    uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_OperationCanceledException);
    cVar7 = il2cpp_runtime_helper_0233e000(uVar17,*(undefined8 *)*puVar13);
    if (cVar7 == '\0') {
      puVar16 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar16 = *puVar13;
      __cxa_throw(puVar16,&PTR_PTR_05215060,0);
    }
    __cxa_end_catch();
    pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    error = (System_String_o *)il2cpp_runtime_helper_023445d0();
    pAVar12 = ApplicationManagers_Api_AottgApiResult__Fail(0,pSVar15,error,(System_String_o *)0x0,1,in_R9);
  }
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
  il2cpp_runtime_helper_022b4080(&method->field7_0x38,0);
  pIVar18 = method->virtualMethodPointer;
  if (pIVar18 == (Il2CppMethodPointer)0x0) {
    method->name = (char *)pAVar12;
    ppIVar21 = (InvokerMethod *)&method->name;
label_044ce9d5:
    il2cpp_runtime_helper_022b4080(ppIVar21,pAVar12);
    return;
  }
  if ((*(byte *)(*(long *)(MethodInfo_Void_SetResult + 0x20) + 0x135) & 1) == 0) {
    lVar19 = il2cpp_runtime_helper_023009c0();
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
    if ((*(byte *)(lVar19 + 0x135) & 1) != 0) goto label_044ce9bb;
label_044cea01:
    lVar19 = il2cpp_runtime_helper_023009c0();
    lVar14 = *(long *)pIVar18;
    uVar1 = *(ushort *)(lVar14 + 0x12e);
  }
  else {
    lVar19 = *(long *)(*(long *)(*(long *)(MethodInfo_Void_SetResult + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) goto label_044cea01;
label_044ce9bb:
    lVar14 = *(long *)pIVar18;
    uVar1 = *(ushort *)(lVar14 + 0x12e);
  }
  if ((ulong)uVar1 != 0) {
    lVar20 = 0;
    do {
      if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar20) == lVar19) {
        iVar8 = *(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar20) + 2;
        goto label_044cea55;
      }
      lVar20 = lVar20 + 0x10;
    } while ((ulong)uVar1 * 0x10 != lVar20);
  }
  uVar17 = 2;
label_044cea47:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar18,lVar19,uVar17);
label_044cea65:
  (*(code *)*puVar13)(pIVar18,pAVar12,puVar13[1]);
  return;
}


// ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$SetStateMachine
// il2cpp: void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__SetStateMachine (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x44cedc0

void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__SetStateMachine
               (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (g_data_057aeb14 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetStateMachine);
    g_data_057aeb14 = '\x01';
  }
  return;
}


// ApplicationManagers.Api.AottgApiClient$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiClient___ctor (ApplicationManagers_Api_AottgApiClient_o* __this, const MethodInfo* method);
// 0x44c4f50

void ApplicationManagers_Api_AottgApiClient___ctor
               (ApplicationManagers_Api_AottgApiClient_o *__this,MethodInfo *method)

{
  System_Func_string__o *baseUrlProvider;
  Il2CppObject *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057aeb09 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_DefaultBaseUrl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUnityWebRequestTransport);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string);
    g_data_057aeb09 = '\x01';
  }
  baseUrlProvider = (System_Func_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string);
  method_00 = (MethodInfo *)0x0;
  System_Func_object____ctor();
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUnityWebRequestTransport);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  ApplicationManagers_Api_AottgApiClient___ctor_43cd1c0
            (__this,baseUrlProvider,(ApplicationManagers_Api_IAottgApiTransport_o *)__this_00,method_00);
  return;
}


// ApplicationManagers.Api.AottgApiClient$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiClient___ctor (ApplicationManagers_Api_AottgApiClient_o* __this, System_Func_string__o* baseUrlProvider, ApplicationManagers_Api_IAottgApiTransport_o* transport, const MethodInfo* method);
// 0x44cd1c0

void ApplicationManagers_Api_AottgApiClient___ctor_43cd1c0
               (ApplicationManagers_Api_AottgApiClient_o *__this,System_Func_string__o *baseUrlProvider,
               ApplicationManagers_Api_IAottgApiTransport_o *transport,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aeb0a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_DefaultBaseUrl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUnityWebRequestTransport);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string);
    g_data_057aeb0a = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (baseUrlProvider == (System_Func_string__o *)0x0) {
    baseUrlProvider = (System_Func_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string);
    System_Func_object____ctor();
  }
  if (__this == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeb0c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aeb0c = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 != 0) {
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    return;
  }
  (__this->fields)._baseUrlProvider = baseUrlProvider;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  if (transport == (ApplicationManagers_Api_IAottgApiTransport_o *)0x0) {
    transport = (ApplicationManagers_Api_IAottgApiTransport_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUnityWebRequestTransport);
    System_Object___ctor((Il2CppObject *)transport,(MethodInfo *)0x0);
  }
  (__this->fields)._transport = transport;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._transport,transport);
  return;
}


// ApplicationManagers.Api.AottgApiClient$$SendAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_Api_AottgApiClient__SendAsync (ApplicationManagers_Api_AottgApiClient_o* __this, ApplicationManagers_Api_AottgApiRequest_o* request, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
// 0x44c5040

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_Api_AottgApiClient__SendAsync
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__,
          ApplicationManagers_Api_AottgApiClient_o *__this,ApplicationManagers_Api_AottgApiRequest_o *request,
          System_Threading_CancellationToken_o cancellationToken,MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  char *pcVar5;
  _union_13 _Var6;
  _union_14 _Var7;
  undefined8 uVar8;
  undefined8 uVar9;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_48;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_40;
  undefined8 local_38;
  
  if (g_data_057aeb0b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AsyncUniTaskMethodBuilder_1_ApplicationManagers_Api_Aott);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgApiClient_SendAsync_d__4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_ApplicationManagers_Api_AottgApiResult_get_Tas);
    g_data_057aeb0b = '\x01';
  }
  uVar2 = 0;
  _Var7.genericMethod = (void *)0x0;
  uVar8._0_4_ = 0;
  uVar8._4_2_ = 0;
  uVar8._6_2_ = 0;
  _Var6.rgctx_data = (Il2CppRGCTXData *)0x0;
  uVar9._0_2_ = 0;
  uVar9._2_1_ = '\0';
  uVar9._3_1_ = '\0';
  uVar9._4_4_ = 0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (InvokerMethod)0x0;
  pcVar5 = (char *)0x0;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff60,0);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff80,__this);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff78,request);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff88,0);
  uVar1 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgApiClient_SendAsync_d__4 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this_00.fields._4_4_ = uVar2;
  __this_00.fields.__1__state = uVar1;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o *)pIVar3;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar4;
  __this_00.fields.__t__builder.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)pcVar5;
  __this_00.fields.request = request;
  __this_00.fields.__4__this = __this;
  __this_00.fields.cancellationToken.fields._source = cancellationToken.fields._source;
  __this_00.fields._transportRequest_5__2 =
       (ApplicationManagers_Api_AottgApiTransportRequest_o *)_Var6.rgctx_data;
  __this_00.fields.__u__1.fields.task.fields.source = _Var7.genericMethod;
  __this_00.fields.__u__1.fields.task.fields.result = (Il2CppObject *)uVar8;
  __this_00.fields.__u__1.fields.task.fields.token = (uint16_t)uVar9;
  __this_00.fields.__u__1.fields.task.fields._18_1_ = SUB81(uVar9,2);
  __this_00.fields.__u__1.fields.task.fields._19_1_ = SUB81(uVar9,3);
  __this_00.fields.__u__1.fields.task.fields._20_4_ = SUB84(uVar9,4);
  ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff58);
  il2cpp_runtime_helper_02f6cd90(&local_48,&stack0xffffffffffffff60,MethodInfo_UniTask_1_ApplicationManagers_Api_AottgApiResult_get_Tas);
  *(undefined8 *)&(__return_storage_ptr__->fields).token = local_38;
  (__return_storage_ptr__->fields).source = local_48;
  (__return_storage_ptr__->fields).result = pAStack_40;
  return __return_storage_ptr__;
}


// ApplicationManagers.Api.AottgApiClient$$DefaultBaseUrl
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__DefaultBaseUrl (const MethodInfo* method);
// 0x44cd290

System_String_o * ApplicationManagers_Api_AottgApiClient__DefaultBaseUrl(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aeb0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aeb0c = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10);
}


// ApplicationManagers.Api.AottgApiClient$$BuildTransportRequest
// il2cpp: ApplicationManagers_Api_AottgApiTransportRequest_o* ApplicationManagers_Api_AottgApiClient__BuildTransportRequest (ApplicationManagers_Api_AottgApiClient_o* __this, ApplicationManagers_Api_AottgApiRequest_o* request, const MethodInfo* method);
// 0x44cd300

ApplicationManagers_Api_AottgApiTransportRequest_o *
ApplicationManagers_Api_AottgApiClient__BuildTransportRequest
          (ApplicationManagers_Api_AottgApiClient_o *__this,ApplicationManagers_Api_AottgApiRequest_o *request
          ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o **ppSVar1;
  bool_conflict bVar2;
  ApplicationManagers_Api_AottgApiTransportRequest_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *pSVar4;
  ApplicationManagers_Api_AottgApiTransportRequest_o *extraout_RAX;
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgApiTransportRequest_o *__this_01;
  
  __this_01 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)__this;
  if (g_data_057aeb0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiTransportRequest);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"Accept");
    il2cpp_runtime_helper_023445d0(&"GET");
    il2cpp_runtime_helper_023445d0(&"Content-Type");
    il2cpp_runtime_helper_023445d0(&"application/json");
    il2cpp_runtime_helper_023445d0(&"Authorization");
    __this_01 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)&"Bearer ";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb0d = '\x01';
  }
  if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((request->fields).Method,(MethodInfo *)0x0);
    pSVar4 = "GET";
    if ((char)bVar2 == '\0') {
      pSVar4 = (request->fields).Method;
      __this_01 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
      if (pSVar4 == (System_String_o *)0x0) goto label_044cd541;
      pSVar4 = System_String__ToUpperInvariant(pSVar4,(MethodInfo *)0x0);
    }
    __this_00 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiTransportRequest);
    if (g_data_057aeb19 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
      g_data_057aeb19 = '\x01';
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_System_String_System_String);
    ppSVar1 = &(__this_00->fields).Headers;
    (__this_00->fields).Headers = (System_Collections_Generic_Dictionary_string__string__o *)pSVar3;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    __this_01 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
      (__this_00->fields).Method = pSVar4;
      il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar4);
      pSVar4 = ApplicationManagers_Api_AottgApiClient__BuildUrl(__this,(request->fields).Path,method_00);
      (__this_00->fields).Url = pSVar4;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).Url,pSVar4);
      (__this_00->fields).JsonBody = (request->fields).JsonBody;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).JsonBody);
      (__this_00->fields).TimeoutSeconds.fields = (request->fields).TimeoutSeconds.fields;
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields).Headers;
      __this_01 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar3,"Accept","application/json",MethodInfo_Void_set_Item);
        bVar2 = System_String__IsNullOrEmpty((request->fields).JsonBody,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          __this_01 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
          if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 ==
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044cd541;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,"Content-Type",
                     "application/json",MethodInfo_Void_set_Item);
        }
        bVar2 = System_String__IsNullOrEmpty((request->fields).BearerToken,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
          __this_01 = "Bearer ";
          pSVar4 = System_String__Concat_3ae5ba0
                             ((System_String_o *)"Bearer ",(request->fields).BearerToken,(MethodInfo *)0x0)
          ;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044cd541;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar3,"Authorization",(Il2CppObject *)pSVar4,MethodInfo_Void_set_Item);
        }
        return __this_00;
      }
    }
  }
label_044cd541:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb19 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    g_data_057aeb19 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_System_String_System_String);
  (__this_01->fields).Headers = (System_Collections_Generic_Dictionary_string__string__o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Headers);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.Api.AottgApiClient$$BuildUrl
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__BuildUrl (ApplicationManagers_Api_AottgApiClient_o* __this, System_String_o* path, const MethodInfo* method);
// 0x44cd5d0

System_String_o *
ApplicationManagers_Api_AottgApiClient__BuildUrl
          (ApplicationManagers_Api_AottgApiClient_o *__this,System_String_o *path,MethodInfo *method)

{
  uint uVar1;
  System_String_c *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  System_String_array *values;
  System_String_array *pSVar7;
  ApplicationManagers_Api_AottgApiResult_o *pAVar8;
  SimpleJSONFixed_JSONNode_o *node;
  System_Func_string__o *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  ApplicationManagers_Api_AottgApiTransportRequest_o *request;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_array *value;
  MethodInfo *in_R9;
  System_String_Fields unaff_R12;
  Il2CppClass *responseText;
  System_String_o *pSStack_70;
  System_String_array *pSStack_68;
  System_String_o *pSStack_60;
  MethodInfo *pMStack_58;
  Il2CppClass *pIStack_50;
  undefined *puStack_48;
  System_String_o *pSStack_40;
  
  if (g_data_057aeb0e == '\0') {
    il2cpp_runtime_helper_023445d0(&"http://");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"https://");
    g_data_057aeb0e = '\x01';
  }
  request = (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0;
  pSVar5 = path;
  bVar3 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (path != (System_String_o *)0x0) {
      bVar3 = System_String__StartsWith_3af5570(path,"http://",5,(MethodInfo *)0x0);
      if (((char)bVar3 != '\0') ||
         (request = "https://", pSVar5 = path,
         bVar3 = System_String__StartsWith_3af5570(path,(System_String_o *)"https://",5,(MethodInfo *)0x0),
         (char)bVar3 != '\0')) {
        return path;
      }
      in_RCX = (__this->fields)._baseUrlProvider;
      if (in_RCX != (System_Func_string__o *)0x0) {
        request = (ApplicationManagers_Api_AottgApiTransportRequest_o *)(in_RCX->fields).method;
        pSVar5 = ((_union_14 *)&(in_RCX->fields).method_code)->genericMethod;
        pSVar4 = (System_String_o *)(*(code *)(in_RCX->fields).invoke_impl)();
        if (pSVar4 == (System_String_o *)0x0) {
          pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar5 = System_String__TrimEnd_3afbd10(pSVar4,0x2f,(MethodInfo *)0x0);
          pSVar4 = System_String__TrimStart(path,0x2f,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat_3af7150(pSVar5,"/",pSVar4,(MethodInfo *)0x0);
          return pSVar5;
        }
      }
    }
  }
  else {
    in_RCX = (__this->fields)._baseUrlProvider;
    if (in_RCX != (System_Func_string__o *)0x0) {
      request = (ApplicationManagers_Api_AottgApiTransportRequest_o *)(in_RCX->fields).method;
      pSVar5 = ((_union_14 *)&(in_RCX->fields).method_code)->genericMethod;
      pSVar4 = (System_String_o *)(*(code *)(in_RCX->fields).invoke_impl)();
      if (pSVar4 == (System_String_o *)0x0) {
        pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      if (pSVar4 != (System_String_o *)0x0) {
        pSVar5 = System_String__TrimEnd_3afbd10(pSVar4,0x2f,(MethodInfo *)0x0);
        return pSVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = path;
  if (method_00 != (MethodInfo *)0x0) {
    responseText = method_00->klass;
    if (responseText == (Il2CppClass *)0x0) {
      responseText = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      uVar1 = *(uint *)&method_00->invoker_method;
    }
    else {
      uVar1 = *(uint *)&method_00->invoker_method;
    }
    if ((uVar1 | 2) == 3) {
      pSVar7 = (System_String_array *)&stack0xffffffffffffffb0;
      if (g_data_057aeb0f == '\0') {
        pMStack_58 = (MethodInfo *)0x44cdb19;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiTransportResult);
        pMStack_58 = (MethodInfo *)0x44cdb25;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
        pMStack_58 = (MethodInfo *)0x44cdb31;
        il2cpp_runtime_helper_023445d0(&TypeInfo_string);
        pMStack_58 = (MethodInfo *)0x44cdb3d;
        il2cpp_runtime_helper_023445d0(&" ");
        pMStack_58 = (MethodInfo *)0x44cdb49;
        il2cpp_runtime_helper_023445d0(&" responseCode=");
        pMStack_58 = (MethodInfo *)0x44cdb55;
        il2cpp_runtime_helper_023445d0(&"AottgApiClient: network error ");
        pMStack_58 = (MethodInfo *)0x44cdb61;
        il2cpp_runtime_helper_023445d0(&"network_error");
        pMStack_58 = (MethodInfo *)0x44cdb6d;
        il2cpp_runtime_helper_023445d0(&" error=");
        pMStack_58 = (MethodInfo *)0x44cdb79;
        il2cpp_runtime_helper_023445d0(&" result=");
        g_data_057aeb0f = '\x01';
      }
      pSVar4 = (System_String_o *)0xa;
      pMStack_58 = (MethodInfo *)0x44cdb94;
      value = TypeInfo_string;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
      pSVar9 = "AottgApiClient: network error ";
      pSStack_68 = (System_String_array *)path;
      if (values != (System_String_array *)0x0) {
        pSVar10 = pSVar4;
        pSStack_68 = values;
        if ((int)values->max_length != 0) {
          value = (System_String_array *)values->m_Items;
          values->m_Items[0] = "AottgApiClient: network error ";
          pMStack_58 = (MethodInfo *)0x44cdbc1;
          il2cpp_runtime_helper_022b4080();
          pSVar4 = pSVar9;
          if (request == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) goto label_044cdd90;
          pSVar10 = pSVar9;
          if (1 < (uint)values->max_length) {
            pSVar10 = (request->fields).Method;
            value = (System_String_array *)(values->m_Items + 1);
            values->m_Items[1] = pSVar10;
            pMStack_58 = (MethodInfo *)0x44cdbe6;
            il2cpp_runtime_helper_022b4080();
            pSVar4 = " ";
            if (2 < (uint)values->max_length) {
              value = (System_String_array *)(values->m_Items + 2);
              values->m_Items[2] = " ";
              pMStack_58 = (MethodInfo *)0x44cdc07;
              il2cpp_runtime_helper_022b4080();
              pSVar10 = pSVar4;
              if (3 < (uint)values->max_length) {
                pSVar10 = (request->fields).Url;
                value = (System_String_array *)(values->m_Items + 3);
                values->m_Items[3] = pSVar10;
                pMStack_58 = (MethodInfo *)0x44cdc23;
                il2cpp_runtime_helper_022b4080();
                pSVar4 = " result=";
                if (4 < (uint)values->max_length) {
                  value = (System_String_array *)(values->m_Items + 4);
                  values->m_Items[4] = " result=";
                  pMStack_58 = (MethodInfo *)0x44cdc44;
                  il2cpp_runtime_helper_022b4080();
                  if (method_00 == (MethodInfo *)0x0) goto label_044cdd90;
                  pIStack_50 = TypeInfo_AottgApiTransportResult;
                  puStack_48 = (void *)0xffffffffffffffff;
                  pSStack_40 = (System_String_o *)
                               CONCAT44(pSStack_40._4_4_,*(undefined4 *)&method_00->invoker_method);
                  pSVar10 = (System_String_o *)0x0;
                  pMStack_58 = (MethodInfo *)0x44cdc76;
                  pSVar4 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffffb0,(MethodInfo *)0x0);
                  value = pSVar7;
                  if (5 < (uint)values->max_length) {
                    value = (System_String_array *)(values->m_Items + 5);
                    values->m_Items[5] = pSVar4;
                    pMStack_58 = (MethodInfo *)0x44cdc90;
                    il2cpp_runtime_helper_022b4080();
                    pSVar10 = pSVar4;
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = " responseCode=";
                      pMStack_58 = (MethodInfo *)0x44cdcb1;
                      il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      value = (System_String_array *)&method_00->name;
                      pSVar10 = (System_String_o *)0x0;
                      pMStack_58 = (MethodInfo *)0x44cdcbc;
                      pSVar4 = System_Int64__ToString((int64_t)value,(MethodInfo *)0x0);
                      if (7 < (uint)values->max_length) {
                        value = (System_String_array *)(values->m_Items + 7);
                        values->m_Items[7] = pSVar4;
                        pMStack_58 = (MethodInfo *)0x44cdcd6;
                        il2cpp_runtime_helper_022b4080();
                        pSVar9 = " error=";
                        pSVar10 = pSVar4;
                        if (8 < (uint)values->max_length) {
                          value = (System_String_array *)(values->m_Items + 8);
                          values->m_Items[8] = " error=";
                          pMStack_58 = (MethodInfo *)0x44cdcf7;
                          il2cpp_runtime_helper_022b4080();
                          pSVar10 = pSVar9;
                          if (9 < (uint)values->max_length) {
                            values->m_Items[9] = (System_String_o *)method_00->return_type;
                            pMStack_58 = (MethodInfo *)0x44cdd15;
                            il2cpp_runtime_helper_022b4080(values->m_Items + 9);
                            pMStack_58 = (MethodInfo *)0x44cdd1f;
                            pSVar7 = (System_String_array *)
                                     System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                              pMStack_58 = (MethodInfo *)0x44cdd3a;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pSVar4 = (System_String_o *)0x0;
                            pMStack_58 = (MethodInfo *)0x44cdd44;
                            value = pSVar7;
                            UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                            pSStack_68 = pSVar7;
                            if (pSVar5 != (System_String_o *)0x0) {
                              if (*(char *)((long)&pSVar5[2].monitor + 1) != '\0') {
                                pMStack_58 = (MethodInfo *)0x44cdd61;
                                ApplicationManagers_AottgNetworkNotifications__TryReport
                                          ("network_error",(MethodInfo *)0x0);
                              }
                              pMStack_58 = (MethodInfo *)0x44cdd7f;
                              pAVar8 = ApplicationManagers_Api_AottgApiResult__Fail
                                                 ((int64_t)method_00->name,(System_String_o *)method_00->klass
                                                  ,"network_error",(System_String_o *)method_00->return_type,0,
                                                  in_R9);
                              return (System_String_o *)pAVar8;
                            }
                            goto label_044cdd90;
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
        pSVar4 = pSVar10;
        pMStack_58 = (MethodInfo *)0x44cdd90;
        il2cpp_runtime_helper_022b2ca0();
      }
label_044cdd90:
      pMStack_58 = (MethodInfo *)0x44cdd95;
      il2cpp_runtime_helper_022b2c90();
      pSStack_60 = pSVar5;
      pMStack_58 = method_00;
      if (g_data_057aeb10 == '\0') {
        il2cpp_runtime_helper_023445d0(&"code");
        il2cpp_runtime_helper_023445d0(&"message");
        il2cpp_runtime_helper_023445d0(&"error");
        g_data_057aeb10 = '\x01';
      }
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        node = SimpleJSONFixed_JSON__Parse((System_String_o *)value,(MethodInfo *)0x0);
        pSVar5 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"error",method_01);
        bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return pSVar5;
        }
        pSVar5 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"message",method_02);
        bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return pSVar5;
        }
        pSVar5 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"code",method_03);
        bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return pSVar5;
        }
      }
      pSStack_70 = pSVar4;
      if (g_data_057aeb15 == '\0') {
        il2cpp_runtime_helper_023445d0(&"http_");
        g_data_057aeb15 = '\x01';
      }
      pSVar5 = System_Int64__ToString((int64_t)&pSStack_70,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3ae5ba0(_DAT_055de1b0,pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
    if (&g_data_00000063 < method_00->name + -200) {
      puStack_48 = (void *)0x44cd88b;
      pSVar5 = ApplicationManagers_Api_AottgApiClient__ParseError
                         ((System_String_o *)responseText,(int64_t)method_00->name,method_00);
      puStack_48 = (void *)0x44cd89c;
      ApplicationManagers_Api_AottgApiClient__LogHttpFailure
                (request,(ApplicationManagers_Api_AottgApiTransportResponse_o *)method_00,
                 (System_String_o *)responseText,(MethodInfo *)in_RCX);
      pAVar8 = ApplicationManagers_Api_AottgApiResult__Fail
                         ((int64_t)method_00->name,(System_String_o *)responseText,pSVar5,
                          (System_String_o *)method_00->return_type,0,in_R9);
      return (System_String_o *)pAVar8;
    }
    if (pSVar5 != (System_String_o *)0x0) {
      if (*(char *)&pSVar5[2].monitor == '\0') {
        unaff_R12._stringLength = 0;
        unaff_R12._firstChar = 0;
        unaff_R12._6_2_ = 0;
        pSVar2 = (System_String_c *)method_00->name;
      }
      else {
        unaff_R12._stringLength = 0;
        unaff_R12._firstChar = 0;
        unaff_R12._6_2_ = 0;
        puStack_48 = (void *)0x44cd7d8;
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)responseText,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          puStack_48 = (void *)0x44cd7e6;
          unaff_R12 = (System_String_Fields)
                      SimpleJSONFixed_JSON__Parse((System_String_o *)responseText,(MethodInfo *)0x0);
        }
        pSVar2 = (System_String_c *)method_00->name;
      }
      if (g_data_057aeb17 == '\0') {
        puStack_48 = (void *)0x44cd802;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiResult);
        g_data_057aeb17 = '\x01';
      }
      puStack_48 = (void *)0x44cd818;
      pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiResult);
      puStack_48 = (void *)0x44cd825;
      System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      if (pSVar5 != (System_String_o *)0x0) {
        *(undefined1 *)&(pSVar5->fields)._stringLength = 1;
        pSVar5[1].klass = pSVar2;
        if (responseText == (Il2CppClass *)0x0) {
          responseText = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        pSVar5[1].monitor = responseText;
        puStack_48 = (void *)0x44cd863;
        il2cpp_runtime_helper_022b4080(&pSVar5[1].monitor,responseText);
        pSVar5[1].fields = unaff_R12;
        puStack_48 = (void *)0x44cd876;
        il2cpp_runtime_helper_022b4080(&pSVar5[1].fields,unaff_R12);
        return pSVar5;
      }
    }
  }
  puStack_48 = (void *)0x44cda98;
  il2cpp_runtime_helper_022b2c90();
  puStack_48 = (void *)0x44cda9d;
  il2cpp_runtime_helper_022b2ca0();
  puStack_48 = (void *)0x44cdaa7;
  puVar6 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar6 = *(undefined8 *)unaff_R12;
  puStack_48 = &g_data_044cdabf;
  __cxa_throw(puVar6,&PTR_PTR_05215060,0);
}


// ApplicationManagers.Api.AottgApiClient$$HandleResponse
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiClient__HandleResponse (ApplicationManagers_Api_AottgApiRequest_o* request, ApplicationManagers_Api_AottgApiTransportRequest_o* transportRequest, ApplicationManagers_Api_AottgApiTransportResponse_o* response, const MethodInfo* method);
// 0x44cd740

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiClient__HandleResponse
          (ApplicationManagers_Api_AottgApiRequest_o *request,
          ApplicationManagers_Api_AottgApiTransportRequest_o *transportRequest,
          ApplicationManagers_Api_AottgApiTransportResponse_o *response,MethodInfo *method)

{
  uint uVar1;
  long responseCode;
  int64_t iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  System_String_array *values;
  System_String_array *pSVar6;
  ApplicationManagers_Api_AottgApiResult_o *pAVar7;
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_array *unaff_RBX;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_array *value;
  MethodInfo *in_R9;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  System_String_o *pSStack_58;
  System_String_array *pSStack_50;
  ApplicationManagers_Api_AottgApiRequest_o *pAStack_48;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_40;
  Il2CppClass *local_38;
  undefined *local_30;
  
  if (response != (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) {
    pSVar8 = (response->fields).Text;
    if (pSVar8 == (System_String_o *)0x0) {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      uVar1 = (response->fields).Result;
    }
    else {
      uVar1 = (response->fields).Result;
    }
    if ((uVar1 | 2) == 3) {
      pSVar6 = (System_String_array *)&stack0xffffffffffffffc8;
      if (g_data_057aeb0f == '\0') {
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb19;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiTransportResult);
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb25;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb31;
        il2cpp_runtime_helper_023445d0(&TypeInfo_string);
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb3d;
        il2cpp_runtime_helper_023445d0(&" ");
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb49;
        il2cpp_runtime_helper_023445d0(&" responseCode=");
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb55;
        il2cpp_runtime_helper_023445d0(&"AottgApiClient: network error ");
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb61;
        il2cpp_runtime_helper_023445d0(&"network_error");
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb6d;
        il2cpp_runtime_helper_023445d0(&" error=");
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb79;
        il2cpp_runtime_helper_023445d0(&" result=");
        g_data_057aeb0f = '\x01';
      }
      pSVar8 = (System_String_o *)0xa;
      pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb94;
      value = TypeInfo_string;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
      pSVar4 = "AottgApiClient: network error ";
      pSStack_50 = unaff_RBX;
      if (values != (System_String_array *)0x0) {
        pSVar9 = pSVar8;
        pSStack_50 = values;
        if ((int)values->max_length != 0) {
          value = (System_String_array *)values->m_Items;
          values->m_Items[0] = "AottgApiClient: network error ";
          pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdbc1;
          il2cpp_runtime_helper_022b4080();
          pSVar8 = pSVar4;
          if (transportRequest == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0)
          goto label_044cdd90;
          pSVar9 = pSVar4;
          if (1 < (uint)values->max_length) {
            pSVar9 = (transportRequest->fields).Method;
            value = (System_String_array *)(values->m_Items + 1);
            values->m_Items[1] = pSVar9;
            pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdbe6;
            il2cpp_runtime_helper_022b4080();
            pSVar8 = " ";
            if (2 < (uint)values->max_length) {
              value = (System_String_array *)(values->m_Items + 2);
              values->m_Items[2] = " ";
              pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc07;
              il2cpp_runtime_helper_022b4080();
              pSVar9 = pSVar8;
              if (3 < (uint)values->max_length) {
                pSVar9 = (transportRequest->fields).Url;
                value = (System_String_array *)(values->m_Items + 3);
                values->m_Items[3] = pSVar9;
                pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc23;
                il2cpp_runtime_helper_022b4080();
                pSVar8 = " result=";
                if (4 < (uint)values->max_length) {
                  value = (System_String_array *)(values->m_Items + 4);
                  values->m_Items[4] = " result=";
                  pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc44;
                  il2cpp_runtime_helper_022b4080();
                  if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0)
                  goto label_044cdd90;
                  local_38 = TypeInfo_AottgApiTransportResult;
                  local_30 = (void *)0xffffffffffffffff;
                  pSVar9 = (System_String_o *)0x0;
                  pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc76;
                  pSVar8 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffffc8,(MethodInfo *)0x0);
                  value = pSVar6;
                  if (5 < (uint)values->max_length) {
                    value = (System_String_array *)(values->m_Items + 5);
                    values->m_Items[5] = pSVar8;
                    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc90;
                    il2cpp_runtime_helper_022b4080();
                    pSVar9 = pSVar8;
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = " responseCode=";
                      pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdcb1;
                      il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      value = (System_String_array *)&(response->fields).StatusCode;
                      pSVar9 = (System_String_o *)0x0;
                      pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdcbc;
                      pSVar8 = System_Int64__ToString((int64_t)value,(MethodInfo *)0x0);
                      if (7 < (uint)values->max_length) {
                        value = (System_String_array *)(values->m_Items + 7);
                        values->m_Items[7] = pSVar8;
                        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdcd6;
                        il2cpp_runtime_helper_022b4080();
                        pSVar4 = " error=";
                        pSVar9 = pSVar8;
                        if (8 < (uint)values->max_length) {
                          value = (System_String_array *)(values->m_Items + 8);
                          values->m_Items[8] = " error=";
                          pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdcf7;
                          il2cpp_runtime_helper_022b4080();
                          pSVar9 = pSVar4;
                          if (9 < (uint)values->max_length) {
                            values->m_Items[9] = (response->fields).Error;
                            pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd15;
                            il2cpp_runtime_helper_022b4080(values->m_Items + 9);
                            pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd1f;
                            pSVar6 = (System_String_array *)
                                     System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                              pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd3a;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pSVar8 = (System_String_o *)0x0;
                            pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd44;
                            value = pSVar6;
                            UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
                            pSStack_50 = pSVar6;
                            if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
                              if (*(char *)((long)&(request->fields).ParseJson + 1) != '\0') {
                                pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd61;
                                ApplicationManagers_AottgNetworkNotifications__TryReport
                                          ("network_error",(MethodInfo *)0x0);
                              }
                              pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd7f;
                              pAVar7 = ApplicationManagers_Api_AottgApiResult__Fail
                                                 ((response->fields).StatusCode,(response->fields).Text,
                                                  "network_error",(response->fields).Error,0,in_R9);
                              return pAVar7;
                            }
                            goto label_044cdd90;
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
        pSVar8 = pSVar9;
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd90;
        il2cpp_runtime_helper_022b2ca0();
      }
label_044cdd90:
      pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd95;
      il2cpp_runtime_helper_022b2c90();
      pAStack_48 = request;
      pAStack_40 = response;
      if (g_data_057aeb10 == '\0') {
        il2cpp_runtime_helper_023445d0(&"code");
        il2cpp_runtime_helper_023445d0(&"message");
        il2cpp_runtime_helper_023445d0(&"error");
        g_data_057aeb10 = '\x01';
      }
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        node = SimpleJSONFixed_JSON__Parse((System_String_o *)value,(MethodInfo *)0x0);
        pAVar7 = (ApplicationManagers_Api_AottgApiResult_o *)
                 ApplicationManagers_Api_AottgApiClient__FieldValue(node,"error",method_00);
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)pAVar7,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return pAVar7;
        }
        pAVar7 = (ApplicationManagers_Api_AottgApiResult_o *)
                 ApplicationManagers_Api_AottgApiClient__FieldValue(node,"message",method_01);
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)pAVar7,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return pAVar7;
        }
        pAVar7 = (ApplicationManagers_Api_AottgApiResult_o *)
                 ApplicationManagers_Api_AottgApiClient__FieldValue(node,"code",method_02);
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)pAVar7,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return pAVar7;
        }
      }
      pSStack_58 = pSVar8;
      if (g_data_057aeb15 == '\0') {
        il2cpp_runtime_helper_023445d0(&"http_");
        g_data_057aeb15 = '\x01';
      }
      pSVar8 = System_Int64__ToString((int64_t)&pSStack_58,(MethodInfo *)0x0);
      pAVar7 = (ApplicationManagers_Api_AottgApiResult_o *)
               System_String__Concat_3ae5ba0(_DAT_055de1b0,pSVar8,(MethodInfo *)0x0);
      return pAVar7;
    }
    responseCode = (response->fields).StatusCode;
    if (99 < responseCode - 200U) {
      local_30 = (void *)0x44cd88b;
      pSVar4 = ApplicationManagers_Api_AottgApiClient__ParseError(pSVar8,responseCode,(MethodInfo *)response);
      local_30 = (void *)0x44cd89c;
      ApplicationManagers_Api_AottgApiClient__LogHttpFailure(transportRequest,response,pSVar8,method);
      pAVar7 = ApplicationManagers_Api_AottgApiResult__Fail
                         ((response->fields).StatusCode,pSVar8,pSVar4,(response->fields).Error,0,in_R9);
      return pAVar7;
    }
    if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
      if ((char)(request->fields).ParseJson == '\0') {
        unaff_R12 = (SimpleJSONFixed_JSONNode_o *)0x0;
        iVar2 = (response->fields).StatusCode;
      }
      else {
        unaff_R12 = (SimpleJSONFixed_JSONNode_o *)0x0;
        local_30 = (void *)0x44cd7d8;
        bVar3 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          local_30 = (void *)0x44cd7e6;
          unaff_R12 = SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
        }
        iVar2 = (response->fields).StatusCode;
      }
      if (g_data_057aeb17 == '\0') {
        local_30 = (void *)0x44cd802;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiResult);
        g_data_057aeb17 = '\x01';
      }
      local_30 = (void *)0x44cd818;
      pAVar7 = (ApplicationManagers_Api_AottgApiResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiResult);
      local_30 = (void *)0x44cd825;
      System_Object___ctor((Il2CppObject *)pAVar7,(MethodInfo *)0x0);
      if (pAVar7 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
        *(undefined1 *)&(pAVar7->fields)._Success_k__BackingField = 1;
        (pAVar7->fields)._StatusCode_k__BackingField = iVar2;
        if (pSVar8 == (System_String_o *)0x0) {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        (pAVar7->fields)._ResponseText_k__BackingField = pSVar8;
        local_30 = (void *)0x44cd863;
        il2cpp_runtime_helper_022b4080(&(pAVar7->fields)._ResponseText_k__BackingField,pSVar8);
        (pAVar7->fields)._Json_k__BackingField = unaff_R12;
        local_30 = (void *)0x44cd876;
        il2cpp_runtime_helper_022b4080(&(pAVar7->fields)._Json_k__BackingField,unaff_R12);
        return pAVar7;
      }
    }
  }
  local_30 = (void *)0x44cda98;
  il2cpp_runtime_helper_022b2c90();
  local_30 = (void *)0x44cda9d;
  il2cpp_runtime_helper_022b2ca0();
  local_30 = (void *)0x44cdaa7;
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = unaff_R12->klass;
  local_30 = &g_data_044cdabf;
  __cxa_throw(puVar5,&PTR_PTR_05215060,0);
}


// ApplicationManagers.Api.AottgApiClient$$NetworkFailure
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiClient__NetworkFailure (ApplicationManagers_Api_AottgApiRequest_o* request, ApplicationManagers_Api_AottgApiTransportRequest_o* transportRequest, ApplicationManagers_Api_AottgApiTransportResponse_o* response, const MethodInfo* method);
// 0x44cdaf0

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiClient__NetworkFailure
          (ApplicationManagers_Api_AottgApiRequest_o *request,
          ApplicationManagers_Api_AottgApiTransportRequest_o *transportRequest,
          ApplicationManagers_Api_AottgApiTransportResponse_o *response,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_array *values;
  System_String_array *pSVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_array *unaff_RBX;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *value;
  MethodInfo *in_R9;
  System_String_o *pSStack_58;
  System_String_array *pSStack_50;
  ApplicationManagers_Api_AottgApiRequest_o *pAStack_48;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_40;
  Il2CppClass *pIStack_38;
  void *pvStack_30;
  int32_t iStack_28;
  
  pSVar2 = (System_String_array *)&stack0xffffffffffffffc8;
  if (g_data_057aeb0f == '\0') {
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb19;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiTransportResult);
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb25;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb31;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb3d;
    il2cpp_runtime_helper_023445d0(&" ");
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb49;
    il2cpp_runtime_helper_023445d0(&" responseCode=");
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb55;
    il2cpp_runtime_helper_023445d0(&"AottgApiClient: network error ");
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb61;
    il2cpp_runtime_helper_023445d0(&"network_error");
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb6d;
    il2cpp_runtime_helper_023445d0(&" error=");
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb79;
    il2cpp_runtime_helper_023445d0(&" result=");
    g_data_057aeb0f = '\x01';
  }
  pSVar4 = (System_String_o *)0xa;
  pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdb94;
  value = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pSVar5 = "AottgApiClient: network error ";
  pSStack_50 = unaff_RBX;
  if (values != (System_String_array *)0x0) {
    pSVar6 = pSVar4;
    pSStack_50 = values;
    if ((int)values->max_length != 0) {
      value = (System_String_array *)values->m_Items;
      values->m_Items[0] = "AottgApiClient: network error ";
      pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdbc1;
      il2cpp_runtime_helper_022b4080();
      pSVar4 = pSVar5;
      if (transportRequest == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) goto label_044cdd90;
      pSVar6 = pSVar5;
      if (1 < (uint)values->max_length) {
        pSVar6 = (transportRequest->fields).Method;
        value = (System_String_array *)(values->m_Items + 1);
        values->m_Items[1] = pSVar6;
        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdbe6;
        il2cpp_runtime_helper_022b4080();
        pSVar4 = " ";
        if (2 < (uint)values->max_length) {
          value = (System_String_array *)(values->m_Items + 2);
          values->m_Items[2] = " ";
          pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc07;
          il2cpp_runtime_helper_022b4080();
          pSVar6 = pSVar4;
          if (3 < (uint)values->max_length) {
            pSVar6 = (transportRequest->fields).Url;
            value = (System_String_array *)(values->m_Items + 3);
            values->m_Items[3] = pSVar6;
            pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc23;
            il2cpp_runtime_helper_022b4080();
            pSVar4 = " result=";
            if (4 < (uint)values->max_length) {
              value = (System_String_array *)(values->m_Items + 4);
              values->m_Items[4] = " result=";
              pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc44;
              il2cpp_runtime_helper_022b4080();
              if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) goto label_044cdd90;
              pIStack_38 = TypeInfo_AottgApiTransportResult;
              pvStack_30 = (void *)0xffffffffffffffff;
              iStack_28 = (response->fields).Result;
              pSVar6 = (System_String_o *)0x0;
              pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc76;
              pSVar4 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffffc8,(MethodInfo *)0x0);
              value = pSVar2;
              if (5 < (uint)values->max_length) {
                value = (System_String_array *)(values->m_Items + 5);
                values->m_Items[5] = pSVar4;
                pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdc90;
                il2cpp_runtime_helper_022b4080();
                pSVar6 = pSVar4;
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = " responseCode=";
                  pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdcb1;
                  il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                  value = (System_String_array *)&(response->fields).StatusCode;
                  pSVar6 = (System_String_o *)0x0;
                  pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdcbc;
                  pSVar4 = System_Int64__ToString((int64_t)value,(MethodInfo *)0x0);
                  if (7 < (uint)values->max_length) {
                    value = (System_String_array *)(values->m_Items + 7);
                    values->m_Items[7] = pSVar4;
                    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdcd6;
                    il2cpp_runtime_helper_022b4080();
                    pSVar5 = " error=";
                    pSVar6 = pSVar4;
                    if (8 < (uint)values->max_length) {
                      value = (System_String_array *)(values->m_Items + 8);
                      values->m_Items[8] = " error=";
                      pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdcf7;
                      il2cpp_runtime_helper_022b4080();
                      pSVar6 = pSVar5;
                      if (9 < (uint)values->max_length) {
                        values->m_Items[9] = (response->fields).Error;
                        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd15;
                        il2cpp_runtime_helper_022b4080(values->m_Items + 9);
                        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd1f;
                        pSVar2 = (System_String_array *)
                                 System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                          pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd3a;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar4 = (System_String_o *)0x0;
                        pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd44;
                        value = pSVar2;
                        UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
                        pSStack_50 = pSVar2;
                        if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
                          if (*(char *)((long)&(request->fields).ParseJson + 1) != '\0') {
                            pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd61;
                            ApplicationManagers_AottgNetworkNotifications__TryReport
                                      ("network_error",(MethodInfo *)0x0);
                          }
                          pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd7f;
                          pAVar3 = ApplicationManagers_Api_AottgApiResult__Fail
                                             ((response->fields).StatusCode,(response->fields).Text,
                                              "network_error",(response->fields).Error,0,in_R9);
                          return pAVar3;
                        }
                        goto label_044cdd90;
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
    pSVar4 = pSVar6;
    pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd90;
    il2cpp_runtime_helper_022b2ca0();
  }
label_044cdd90:
  pAStack_40 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x44cdd95;
  il2cpp_runtime_helper_022b2c90();
  pAStack_48 = request;
  pAStack_40 = response;
  if (g_data_057aeb10 == '\0') {
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"message");
    il2cpp_runtime_helper_023445d0(&"error");
    g_data_057aeb10 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    node = SimpleJSONFixed_JSON__Parse((System_String_o *)value,(MethodInfo *)0x0);
    pAVar3 = (ApplicationManagers_Api_AottgApiResult_o *)
             ApplicationManagers_Api_AottgApiClient__FieldValue(node,"error",method_00);
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)pAVar3,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return pAVar3;
    }
    pAVar3 = (ApplicationManagers_Api_AottgApiResult_o *)
             ApplicationManagers_Api_AottgApiClient__FieldValue(node,"message",method_01);
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)pAVar3,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return pAVar3;
    }
    pAVar3 = (ApplicationManagers_Api_AottgApiResult_o *)
             ApplicationManagers_Api_AottgApiClient__FieldValue(node,"code",method_02);
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)pAVar3,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return pAVar3;
    }
  }
  pSStack_58 = pSVar4;
  if (g_data_057aeb15 == '\0') {
    il2cpp_runtime_helper_023445d0(&"http_");
    g_data_057aeb15 = '\x01';
  }
  pSVar4 = System_Int64__ToString((int64_t)&pSStack_58,(MethodInfo *)0x0);
  pAVar3 = (ApplicationManagers_Api_AottgApiResult_o *)
           System_String__Concat_3ae5ba0(_DAT_055de1b0,pSVar4,(MethodInfo *)0x0);
  return pAVar3;
}


// ApplicationManagers.Api.AottgApiClient$$IsNetworkError
// il2cpp: bool ApplicationManagers_Api_AottgApiClient__IsNetworkError (int32_t result, const MethodInfo* method);
// 0x44cdae0

bool_conflict ApplicationManagers_Api_AottgApiClient__IsNetworkError(int32_t result,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(result | 2U) == 3);
}


// ApplicationManagers.Api.AottgApiClient$$ParseError
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__ParseError (System_String_o* responseText, int64_t responseCode, const MethodInfo* method);
// 0x44cdda0

System_String_o *
ApplicationManagers_Api_AottgApiClient__ParseError
          (System_String_o *responseText,int64_t responseCode,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *node;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int64_t local_20;
  
  if (g_data_057aeb10 == '\0') {
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"message");
    il2cpp_runtime_helper_023445d0(&"error");
    g_data_057aeb10 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(responseText,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    node = SimpleJSONFixed_JSON__Parse(responseText,(MethodInfo *)0x0);
    pSVar2 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"error",method_00);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return pSVar2;
    }
    pSVar2 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"message",method_01);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return pSVar2;
    }
    pSVar2 = ApplicationManagers_Api_AottgApiClient__FieldValue(node,"code",method_02);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return pSVar2;
    }
  }
  local_20 = responseCode;
  if (g_data_057aeb15 == '\0') {
    il2cpp_runtime_helper_023445d0(&"http_");
    g_data_057aeb15 = '\x01';
  }
  pSVar2 = System_Int64__ToString((int64_t)&local_20,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3ae5ba0(_DAT_055de1b0,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ApplicationManagers.Api.AottgApiClient$$FieldValue
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__FieldValue (SimpleJSONFixed_JSONNode_o* node, System_String_o* name, const MethodInfo* method);
// 0x44ce370

System_String_o *
ApplicationManagers_Api_AottgApiClient__FieldValue
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *name,MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  ulong in_RAX;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  MethodInfo *pMVar6;
  System_String_o *local_30;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (g_data_057aeb11 == '\0') {
    local_30 = (System_String_o *)0x44ce393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeb11 = '\x01';
  }
  uStack_28 = uStack_28 & 0xffffffffffff;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    local_30 = (System_String_o *)0x44ce3ba;
    il2cpp_runtime_helper_02337ed0();
  }
  local_30 = (System_String_o *)0x44ce3c8;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (System_String_o *)0x0;
  }
  local_30 = (System_String_o *)0x44ce3dc;
  pSVar4 = name;
  bVar2 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (System_String_o *)0x0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    local_30 = (System_String_o *)0x44ce403;
    pSVar3 = (System_String_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,name,(node->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      local_30 = (System_String_o *)0x44ce418;
      il2cpp_runtime_helper_02337ed0();
    }
    local_30 = (System_String_o *)0x44ce424;
    pSVar4 = pSVar3;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (pSVar3 == (System_String_o *)0x0) goto label_044ce55c;
      local_30 = (System_String_o *)0x44ce444;
      pSVar4 = (System_String_o *)
               (*(((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._9_get_Value.methodPtr)(pSVar3);
      local_30 = (System_String_o *)0x44ce44e;
      bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar5 = (SimpleJSONFixed_JSONNode_c *)pSVar3->klass;
        pMVar6 = (pSVar5->vtable)._9_get_Value.method;
        goto label_044ce544;
      }
    }
    if (name != (System_String_o *)0x0) {
      local_30 = (System_String_o *)0x44ce46b;
      uVar1 = System_String__get_Chars(name,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        local_30 = (System_String_o *)0x44ce489;
        il2cpp_runtime_helper_02337ed0();
      }
      local_30 = (System_String_o *)0x44ce493;
      uVar1 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
      uStack_28 = CONCAT26(uVar1,(undefined6)uStack_28);
      local_30 = (System_String_o *)0x44ce4a4;
      pSVar4 = System_Char__ToString((short)&uStack_28 + 6,(MethodInfo *)0x0);
      local_30 = (System_String_o *)0x44ce4b6;
      pSVar3 = System_String__Substring(name,1,(MethodInfo *)0x0);
      local_30 = (System_String_o *)0x44ce4c3;
      pSVar4 = System_String__Concat_3ae5ba0(pSVar4,pSVar3,(MethodInfo *)0x0);
      local_30 = (System_String_o *)0x44ce4d9;
      pSVar3 = (System_String_o *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,pSVar4,(node->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        local_30 = (System_String_o *)0x44ce4ee;
        il2cpp_runtime_helper_02337ed0();
      }
      local_30 = (System_String_o *)0x44ce4fc;
      pSVar4 = pSVar3;
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return (System_String_o *)0x0;
      }
      if (pSVar3 != (System_String_o *)0x0) {
        local_30 = (System_String_o *)0x44ce518;
        pSVar4 = (System_String_o *)(*(pSVar3->klass->vtable)._9_GetTypeCode.methodPtr)(pSVar3);
        local_30 = (System_String_o *)0x44ce524;
        bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          return (System_String_o *)0x0;
        }
        pSVar5 = (SimpleJSONFixed_JSONNode_c *)pSVar3->klass;
        pMVar6 = (pSVar5->vtable)._9_get_Value.method;
label_044ce544:
        local_30 = (System_String_o *)0x44ce54a;
        pSVar4 = (System_String_o *)(*(pSVar5->vtable)._9_get_Value.methodPtr)(pSVar3,pMVar6);
        return pSVar4;
      }
    }
  }
label_044ce55c:
  local_30 = (System_String_o *)0x44ce561;
  il2cpp_runtime_helper_022b2c90();
  local_30 = pSVar4;
  if (g_data_057aeb15 == '\0') {
    il2cpp_runtime_helper_023445d0(&"http_");
    g_data_057aeb15 = '\x01';
  }
  pSVar4 = System_Int64__ToString((int64_t)&local_30,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_3ae5ba0(_DAT_055de1b0,pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// ApplicationManagers.Api.AottgApiClient$$LogHttpFailure
// il2cpp: void ApplicationManagers_Api_AottgApiClient__LogHttpFailure (ApplicationManagers_Api_AottgApiTransportRequest_o* request, ApplicationManagers_Api_AottgApiTransportResponse_o* response, System_String_o* text, const MethodInfo* method);
// 0x44cdfa0

void ApplicationManagers_Api_AottgApiClient__LogHttpFailure
               (ApplicationManagers_Api_AottgApiTransportRequest_o *request,
               ApplicationManagers_Api_AottgApiTransportResponse_o *response,System_String_o *text,
               MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  System_String_array *values;
  Il2CppClass *pIVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *__this;
  System_String_o *a;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_c *pSVar7;
  void *pvVar8;
  System_String_array *unaff_RBX;
  Il2CppClass **unaff_RBP;
  Il2CppClass *pIVar9;
  Il2CppClass *pIVar10;
  MethodInfo *pMVar11;
  System_String_o **ppSVar12;
  Il2CppObject *pIVar13;
  uint in_R8D;
  int64_t *unaff_R12;
  undefined1 auVar14 [16];
  System_String_o *pSStack_c8;
  undefined8 uStack_c0;
  Il2CppObject *pIStack_b8;
  Il2CppObject *pIStack_b0;
  void *pvStack_a8;
  Il2CppClass *pIStack_a0;
  undefined8 uStack_98;
  Il2CppObject *pIStack_90;
  Il2CppClass *pIStack_88;
  ulong uStack_80;
  MethodInfo *pMStack_78;
  undefined8 uStack_70;
  System_String_array *pSStack_68;
  int64_t *piStack_60;
  ApplicationManagers_Api_AottgApiTransportRequest_o *pAStack_58;
  System_String_o *pSStack_50;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_48;
  Il2CppClass **ppIStack_40;
  
  if (g_data_057aeb12 == '\0') {
    ppIStack_40 = (Il2CppClass **)0x44cdfc9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    ppIStack_40 = (Il2CppClass **)0x44cdfd5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    ppIStack_40 = (Il2CppClass **)0x44cdfe1;
    il2cpp_runtime_helper_023445d0(&"AottgApiClient: HTTP ");
    ppIStack_40 = (Il2CppClass **)0x44cdfed;
    il2cpp_runtime_helper_023445d0(&" ");
    ppIStack_40 = (Il2CppClass **)0x44cdff9;
    il2cpp_runtime_helper_023445d0(&" body=");
    ppIStack_40 = (Il2CppClass **)0x44ce005;
    il2cpp_runtime_helper_023445d0(&" error=");
    g_data_057aeb12 = '\x01';
  }
  pIVar9 = (Il2CppClass *)0xa;
  ppIStack_40 = (Il2CppClass **)0x44ce020;
  ppSVar12 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pIVar3 = "AottgApiClient: HTTP ";
  pSStack_68 = unaff_RBX;
  if (values != (System_String_array *)0x0) {
    pSStack_68 = values;
    if ((int)values->max_length != 0) {
      ppSVar12 = values->m_Items;
      values->m_Items[0] = (System_String_o *)"AottgApiClient: HTTP ";
      ppIStack_40 = (Il2CppClass **)0x44ce04d;
      il2cpp_runtime_helper_022b4080();
      pIVar9 = pIVar3;
      if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) goto label_044ce1e9;
      unaff_R12 = &(response->fields).StatusCode;
      pIVar9 = (Il2CppClass *)0x0;
      ppIStack_40 = (Il2CppClass **)0x44ce064;
      ppSVar12 = (System_String_o **)unaff_R12;
      pIVar3 = (Il2CppClass *)System_Int64__ToString((int64_t)unaff_R12,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        ppSVar12 = values->m_Items + 1;
        values->m_Items[1] = (System_String_o *)pIVar3;
        ppIStack_40 = (Il2CppClass **)0x44ce07e;
        il2cpp_runtime_helper_022b4080();
        pIVar10 = " ";
        pIVar9 = pIVar3;
        if (2 < (uint)values->max_length) {
          unaff_RBP = &" ";
          ppSVar12 = values->m_Items + 2;
          values->m_Items[2] = (System_String_o *)" ";
          ppIStack_40 = (Il2CppClass **)0x44ce0a0;
          il2cpp_runtime_helper_022b4080();
          pIVar9 = pIVar10;
          if (request == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) goto label_044ce1e9;
          if (3 < (uint)values->max_length) {
            pIVar9 = (Il2CppClass *)(request->fields).Method;
            ppSVar12 = values->m_Items + 3;
            values->m_Items[3] = (System_String_o *)pIVar9;
            ppIStack_40 = (Il2CppClass **)0x44ce0c4;
            il2cpp_runtime_helper_022b4080();
            pIVar3 = " ";
            if (4 < (uint)values->max_length) {
              ppSVar12 = values->m_Items + 4;
              values->m_Items[4] = (System_String_o *)" ";
              ppIStack_40 = (Il2CppClass **)0x44ce0df;
              il2cpp_runtime_helper_022b4080();
              pIVar9 = pIVar3;
              if (5 < (uint)values->max_length) {
                pIVar9 = (Il2CppClass *)(request->fields).Url;
                ppSVar12 = values->m_Items + 5;
                values->m_Items[5] = (System_String_o *)pIVar9;
                ppIStack_40 = (Il2CppClass **)0x44ce0fa;
                il2cpp_runtime_helper_022b4080();
                pIVar3 = " error=";
                if (6 < (uint)values->max_length) {
                  ppSVar12 = values->m_Items + 6;
                  values->m_Items[6] = (System_String_o *)" error=";
                  ppIStack_40 = (Il2CppClass **)0x44ce11b;
                  il2cpp_runtime_helper_022b4080();
                  pIVar9 = pIVar3;
                  if (7 < (uint)values->max_length) {
                    pIVar9 = (Il2CppClass *)(response->fields).Error;
                    ppSVar12 = values->m_Items + 7;
                    values->m_Items[7] = (System_String_o *)pIVar9;
                    ppIStack_40 = (Il2CppClass **)0x44ce136;
                    il2cpp_runtime_helper_022b4080();
                    pIVar3 = " body=";
                    if (8 < (uint)values->max_length) {
                      ppSVar12 = values->m_Items + 8;
                      values->m_Items[8] = (System_String_o *)" body=";
                      ppIStack_40 = (Il2CppClass **)0x44ce157;
                      il2cpp_runtime_helper_022b4080();
                      pIVar9 = pIVar3;
                      if (9 < (uint)values->max_length) {
                        values->m_Items[9] = text;
                        ppIStack_40 = (Il2CppClass **)0x44ce174;
                        il2cpp_runtime_helper_022b4080(values->m_Items + 9);
                        ppIStack_40 = (Il2CppClass **)0x44ce17e;
                        pSVar4 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                        if (*unaff_R12 - 400U <= &g_data_00000063) {
                          if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                            ppIStack_40 = (Il2CppClass **)0x44ce1cc;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                          return;
                        }
                        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                          ppIStack_40 = (Il2CppClass **)0x44ce1ab;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
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
    ppIStack_40 = (Il2CppClass **)0x44ce1e9;
    il2cpp_runtime_helper_022b2ca0();
  }
label_044ce1e9:
  ppIStack_40 = (Il2CppClass **)0x44ce1ee;
  auVar14 = il2cpp_runtime_helper_022b2c90();
  pIVar3 = auVar14._8_8_;
  uStack_70 = auVar14._0_8_;
  piStack_60 = unaff_R12;
  pAStack_58 = request;
  pSStack_50 = text;
  pAStack_48 = response;
  ppIStack_40 = unaff_RBP;
  if (g_data_057aeb18 == '\0') {
    pMStack_78 = (MethodInfo *)0x44ce21f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiResult);
    g_data_057aeb18 = '\x01';
  }
  pMStack_78 = (MethodInfo *)0x44ce235;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiResult);
  pIVar10 = (Il2CppClass *)0x0;
  pMStack_78 = (MethodInfo *)0x44ce242;
  pIVar13 = pIVar5;
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
    *(undefined1 *)&pIVar5[1].klass = 0;
    pIVar5[1].monitor = ppSVar12;
    if (pIVar9 == (Il2CppClass *)0x0) {
      pIVar9 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pIVar5[2].klass = pIVar9;
    pMStack_78 = (MethodInfo *)0x44ce27c;
    il2cpp_runtime_helper_022b4080(pIVar5 + 2,pIVar9);
    pIVar5[3].klass = pIVar3;
    pMStack_78 = (MethodInfo *)0x44ce28c;
    il2cpp_runtime_helper_022b4080(pIVar5 + 3,pIVar3);
    pIVar5[3].monitor = method;
    pMStack_78 = (MethodInfo *)0x44ce29f;
    il2cpp_runtime_helper_022b4080(&pIVar5[3].monitor,method);
    *(char *)&pIVar5[4].klass = (char)in_R8D;
    return;
  }
  pMStack_78 = (MethodInfo *)0x44ce2ba;
  auVar14 = il2cpp_runtime_helper_022b2c90();
  pvVar8 = auVar14._8_8_;
  uStack_98 = auVar14._0_8_;
  pIStack_90 = pIVar5;
  pIStack_88 = pIVar3;
  uStack_80 = (ulong)in_R8D;
  pMStack_78 = method;
  if (g_data_057aeb17 == '\0') {
    pIStack_a0 = (Il2CppClass *)0x44ce2e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiResult);
    g_data_057aeb17 = '\x01';
  }
  pIStack_a0 = (Il2CppClass *)0x44ce2fc;
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiResult);
  pSVar4 = (System_String_o *)0x0;
  pIStack_a0 = (Il2CppClass *)0x44ce309;
  pIVar5 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    *(undefined1 *)&__this[1].klass = 1;
    __this[1].monitor = pIVar13;
    if (pIVar10 == (Il2CppClass *)0x0) {
      pIVar10 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    __this[2].klass = pIVar10;
    pIStack_a0 = (Il2CppClass *)0x44ce343;
    il2cpp_runtime_helper_022b4080(__this + 2,pIVar10);
    __this[2].monitor = pvVar8;
    pIStack_a0 = (Il2CppClass *)0x44ce356;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor,pvVar8);
    return;
  }
  pIStack_a0 = (Il2CppClass *)0x44ce36a;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pIStack_b8 = __this;
  pIStack_b0 = pIVar13;
  pvStack_a8 = pvVar8;
  pIStack_a0 = pIVar10;
  if (g_data_057aeb11 == '\0') {
    pSStack_c8 = (System_String_o *)0x44ce393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeb11 = '\x01';
  }
  uStack_c0 = uStack_c0 & 0xffffffffffff;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_c8 = (System_String_o *)0x44ce3ba;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_c8 = (System_String_o *)0x44ce3c8;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pSStack_c8 = (System_String_o *)0x44ce3dc;
  pSVar6 = pSVar4;
  bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (pIVar5 != (Il2CppObject *)0x0) {
    pSStack_c8 = (System_String_o *)0x44ce403;
    a = (System_String_o *)
        (*pIVar5->klass->vtable[7].methodPtr)(pIVar5,pSVar4,pIVar5->klass->vtable[7].method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_c8 = (System_String_o *)0x44ce418;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_c8 = (System_String_o *)0x44ce424;
    pSVar6 = a;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (a == (System_String_o *)0x0) goto label_044ce55c;
      pSStack_c8 = (System_String_o *)0x44ce444;
      pSVar6 = (System_String_o *)
               (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._9_get_Value.methodPtr)(a);
      pSStack_c8 = (System_String_o *)0x44ce44e;
      bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar7 = (SimpleJSONFixed_JSONNode_c *)a->klass;
        pMVar11 = (pSVar7->vtable)._9_get_Value.method;
        goto label_044ce544;
      }
    }
    if (pSVar4 != (System_String_o *)0x0) {
      pSStack_c8 = (System_String_o *)0x44ce46b;
      uVar1 = System_String__get_Chars(pSVar4,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        pSStack_c8 = (System_String_o *)0x44ce489;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_c8 = (System_String_o *)0x44ce493;
      uVar1 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
      uStack_c0 = CONCAT26(uVar1,(undefined6)uStack_c0);
      pSStack_c8 = (System_String_o *)0x44ce4a4;
      pSVar6 = System_Char__ToString((short)&uStack_c0 + 6,(MethodInfo *)0x0);
      pSStack_c8 = (System_String_o *)0x44ce4b6;
      pSVar4 = System_String__Substring(pSVar4,1,(MethodInfo *)0x0);
      pSStack_c8 = (System_String_o *)0x44ce4c3;
      pSVar4 = System_String__Concat_3ae5ba0(pSVar6,pSVar4,(MethodInfo *)0x0);
      pSStack_c8 = (System_String_o *)0x44ce4d9;
      a = (System_String_o *)
          (*pIVar5->klass->vtable[7].methodPtr)(pIVar5,pSVar4,pIVar5->klass->vtable[7].method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStack_c8 = (System_String_o *)0x44ce4ee;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_c8 = (System_String_o *)0x44ce4fc;
      pSVar6 = a;
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (a != (System_String_o *)0x0) {
        pSStack_c8 = (System_String_o *)0x44ce518;
        pSVar4 = (System_String_o *)(*(a->klass->vtable)._9_GetTypeCode.methodPtr)(a);
        pSStack_c8 = (System_String_o *)0x44ce524;
        bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          return;
        }
        pSVar7 = (SimpleJSONFixed_JSONNode_c *)a->klass;
        pMVar11 = (pSVar7->vtable)._9_get_Value.method;
label_044ce544:
        pSStack_c8 = (System_String_o *)0x44ce54a;
        (*(pSVar7->vtable)._9_get_Value.methodPtr)(a,pMVar11);
        return;
      }
    }
  }
label_044ce55c:
  pSStack_c8 = (System_String_o *)0x44ce561;
  il2cpp_runtime_helper_022b2c90();
  pSStack_c8 = pSVar6;
  if (g_data_057aeb15 == '\0') {
    il2cpp_runtime_helper_023445d0(&"http_");
    g_data_057aeb15 = '\x01';
  }
  pSVar4 = System_Int64__ToString((int64_t)&pSStack_c8,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0(_DAT_055de1b0,pSVar4,(MethodInfo *)0x0);
  return;
}


