// Type: ApplicationManagers.Api.AottgApiClient
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiClient.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$MoveNext
// il2cpp: void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__MoveNext (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this, const MethodInfo* method);
// 0x41b0c40

void ApplicationManagers_Api_AottgApiClient_<SendAsync>d__4__MoveNext
               (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ApplicationManagers_Api_AottgApiClient_o *__this_00;
  ApplicationManagers_Api_IAottgApiTransport_o *pAVar3;
  ApplicationManagers_Api_IAottgApiTransport_c *pAVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  long lVar6;
  Il2CppMethodPointer pIVar7;
  long *plVar8;
  short sVar9;
  int iVar10;
  Il2CppRGCTXData *pIVar11;
  Il2CppMethodPointer *ppIVar12;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAVar13;
  ApplicationManagers_Api_AottgApiResult_o *pAVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  long lVar17;
  long lVar18;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_68;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_60;
  undefined8 local_58;
  long *local_48;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_40;
  undefined8 local_38;
  
  if (DAT_05704d24 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
    il2cpp_init_method_metadata(&MethodInfo_Void_SetResult);
    il2cpp_init_method_metadata(&MethodInfo_AottgApiTransportResponse_GetResult);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_init_method_metadata(&TypeInfo_IAottgApiTransport);
    il2cpp_init_method_metadata();
    DAT_05704d24 = '\x01';
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
    plVar8 = (method->field8_0x40).genericMethod;
    pAVar13 = *(ApplicationManagers_Api_AottgApiTransportResponse_o **)&method->token;
    (method->field8_0x40).genericMethod = (void *)0x0;
    method->token = 0;
    method->flags = 0;
    method->iflags = 0;
    method->slot = 0;
    method->parameters_count = '\0';
    method->bitflags = '\0';
    *(undefined4 *)&method->field_0x54 = 0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    if (method->klass == (Il2CppClass *)0x0) {
      uVar16 = il2cpp_init_method_metadata(&TypeInfo_ArgumentNullException);
      __this_01 = (System_ArgumentNullException_o *)il2cpp_runtime_glue(uVar16);
      paramName = (System_String_o *)il2cpp_init_method_metadata(&"request");
      System_ArgumentNullException___ctor(__this_01,paramName,(MethodInfo *)0x0);
      uVar16 = il2cpp_init_method_metadata(&MethodInfo_Void_MoveNext);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_01,uVar16);
    }
    __this_00 = (ApplicationManagers_Api_AottgApiClient_o *)method->return_type;
    if (__this_00 == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar11 = (Il2CppRGCTXData *)
              ApplicationManagers_Api_AottgApiClient__BuildTransportRequest
                        (__this_00,(ApplicationManagers_Api_AottgApiRequest_o *)method->klass,in_RDX
                        );
    (method->field7_0x38).rgctx_data = pIVar11;
    il2cpp_runtime_glue(&method->field7_0x38,pIVar11);
    pAVar3 = (__this_00->fields)._transport;
    if (pAVar3 == (ApplicationManagers_Api_IAottgApiTransport_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    in_RCX = (MethodInfo *)method->parameters;
    pIVar11 = (method->field7_0x38).rgctx_data;
    pAVar4 = pAVar3->klass;
    uVar2._0_1_ = (pAVar4->_2).rank;
    uVar2._1_1_ = (pAVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pAVar4->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar17) == TypeInfo_IAottgApiTransport) {
          ppIVar12 = &pAVar4->vtable[*(int *)((long)&pIVar5->offset + lVar17)].methodPtr;
          goto LAB_041b0dba;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar17);
    }
    ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pAVar3,TypeInfo_IAottgApiTransport,0);
LAB_041b0dba:
    (**ppIVar12)(&local_68,pAVar3,pIVar11,in_RCX,(MethodInfo *)ppIVar12[1]);
    local_38 = local_58;
    local_48 = local_68;
    pAStack_40 = pAStack_60;
    local_68 = (long *)0x0;
    pAStack_60 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
    local_58 = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T__Awaiter_ApplicationManagers_Api_Aot + 0x20) + 0x135) & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    local_58 = local_38;
    local_68 = local_48;
    pAStack_60 = pAStack_40;
    il2cpp_runtime_glue(&local_68,0);
    local_78 = local_58;
    local_88 = local_68;
    uStack_80 = pAStack_60;
    lVar17 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = il2cpp_glue_022c28b0();
    }
    plVar8 = local_88;
    pAVar13 = uStack_80;
    if (local_88 != (long *)0x0) {
      sVar9 = (short)local_78;
      lVar17 = *(long *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x18) + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = il2cpp_glue_022c28b0();
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = il2cpp_glue_022c28b0();
      }
      lVar6 = *plVar8;
      if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar18) == lVar17) {
            in_RCX = (MethodInfo *)
                     ((long)(*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar18) + 1) * 0x10 + lVar6 +
                     0x138);
            goto LAB_041b0f09;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar18);
      }
      in_RCX = (MethodInfo *)il2cpp_runtime_glue(plVar8,lVar17,1);
LAB_041b0f09:
      iVar10 = (*in_RCX->methodPointer)(plVar8,(ulong)(uint)(int)sVar9,in_RCX->virtualMethodPointer)
      ;
      pAVar13 = uStack_80;
      plVar8 = local_88;
      if (iVar10 == 0) {
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
        uStack_80 = pAVar13;
        il2cpp_runtime_glue(&method->field8_0x40,0);
        il2cpp_glue_024acca0(&method->virtualMethodPointer,&local_88,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
        return;
      }
    }
  }
  local_88 = plVar8;
  uStack_80 = pAVar13;
  if (plVar8 != (long *)0x0) {
    sVar9 = (short)local_78;
    lVar17 = *(long *)(MethodInfo_AottgApiTransportResponse_GetResult + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = il2cpp_glue_022c28b0();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x28);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = il2cpp_glue_022c28b0();
    }
    lVar6 = *plVar8;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar18 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar18) == lVar17) {
          in_RCX = (MethodInfo *)
                   ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar18) * 0x10 + lVar6 + 0x138);
          goto LAB_041b0fc8;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar18);
    }
    in_RCX = (MethodInfo *)il2cpp_runtime_glue(plVar8,lVar17,0);
LAB_041b0fc8:
    pAVar13 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)
              (*in_RCX->methodPointer)(plVar8,(ulong)(uint)(int)sVar9,in_RCX->virtualMethodPointer);
  }
  pAVar14 = ApplicationManagers_Api_AottgApiClient__HandleResponse
                      ((ApplicationManagers_Api_AottgApiRequest_o *)method->klass,
                       (ApplicationManagers_Api_AottgApiTransportRequest_o *)
                       (method->field7_0x38).rgctx_data,pAVar13,in_RCX);
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
  il2cpp_runtime_glue(&method->field7_0x38,0);
  pIVar7 = method->virtualMethodPointer;
  if (pIVar7 == (Il2CppMethodPointer)0x0) {
    method->name = (char *)pAVar14;
    il2cpp_runtime_glue(&method->name,pAVar14);
    return;
  }
  if ((*(byte *)(*(long *)(MethodInfo_Void_SetResult + 0x20) + 0x135) & 1) == 0) {
    lVar17 = il2cpp_glue_022c28b0();
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
    bVar1 = *(byte *)(lVar17 + 0x135);
  }
  else {
    lVar17 = *(long *)(*(long *)(*(long *)(MethodInfo_Void_SetResult + 0x20) + 0xc0) + 8);
    bVar1 = *(byte *)(lVar17 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar17 = il2cpp_glue_022c28b0();
    lVar6 = *(long *)pIVar7;
    uVar2 = *(ushort *)(lVar6 + 0x12e);
  }
  else {
    lVar6 = *(long *)pIVar7;
    uVar2 = *(ushort *)(lVar6 + 0x12e);
  }
  if ((ulong)uVar2 != 0) {
    lVar18 = 0;
    do {
      if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar18) == lVar17) {
        puVar15 = (undefined8 *)
                  (lVar6 + (long)(*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar18) + 2) * 0x10 + 0x138
                  );
        goto LAB_041b10e5;
      }
      lVar18 = lVar18 + 0x10;
    } while ((ulong)uVar2 * 0x10 != lVar18);
  }
  puVar15 = (undefined8 *)il2cpp_runtime_glue(pIVar7,lVar17,2);
LAB_041b10e5:
  (*(code *)*puVar15)(pIVar7,pAVar14,puVar15[1]);
  return;
}


// ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$SetStateMachine
// il2cpp: void ApplicationManagers_Api_AottgApiClient__SendAsync_d__4__SetStateMachine (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x41b1440

void ApplicationManagers_Api_AottgApiClient_<SendAsync>d__4__SetStateMachine
               (ApplicationManagers_Api_AottgApiClient__SendAsync_d__4_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  if (DAT_05704d25 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_SetStateMachine);
    DAT_05704d25 = '\x01';
  }
  return;
}


// ApplicationManagers.Api.AottgApiClient$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiClient___ctor (ApplicationManagers_Api_AottgApiClient_o* __this, const MethodInfo* method);
// 0x41ac020

void ApplicationManagers_Api_AottgApiClient___ctor
               (ApplicationManagers_Api_AottgApiClient_o *__this,MethodInfo *method)

{
  System_Func_string__o *baseUrlProvider;
  Il2CppObject *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704d1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_DefaultBaseUrl);
    il2cpp_init_method_metadata(&TypeInfo_AottgUnityWebRequestTransport);
    il2cpp_init_method_metadata(&TypeInfo_Func_string);
    DAT_05704d1a = '\x01';
  }
  baseUrlProvider = (System_Func_string__o *)il2cpp_runtime_glue(TypeInfo_Func_string);
  method_00 = (MethodInfo *)0x0;
  System_Func<object>___ctor();
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgUnityWebRequestTransport);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  ApplicationManagers_Api_AottgApiClient___ctor
            (__this,baseUrlProvider,(ApplicationManagers_Api_IAottgApiTransport_o *)__this_00,
             method_00);
  return;
}


// ApplicationManagers.Api.AottgApiClient$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiClient___ctor (ApplicationManagers_Api_AottgApiClient_o* __this, System_Func_string__o* baseUrlProvider, ApplicationManagers_Api_IAottgApiTransport_o* transport, const MethodInfo* method);
// 0x41af840

void ApplicationManagers_Api_AottgApiClient___ctor
               (ApplicationManagers_Api_AottgApiClient_o *__this,
               System_Func_string__o *baseUrlProvider,
               ApplicationManagers_Api_IAottgApiTransport_o *transport,MethodInfo *method)

{
  if (DAT_05704d1b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_DefaultBaseUrl);
    il2cpp_init_method_metadata(&TypeInfo_AottgUnityWebRequestTransport);
    il2cpp_init_method_metadata(&TypeInfo_Func_string);
    DAT_05704d1b = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (baseUrlProvider == (System_Func_string__o *)0x0) {
    baseUrlProvider = (System_Func_string__o *)il2cpp_runtime_glue(TypeInfo_Func_string);
    System_Func<object>___ctor();
  }
  if (__this != (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
    (__this->fields)._baseUrlProvider = baseUrlProvider;
    il2cpp_runtime_glue(&__this->fields);
    if (transport == (ApplicationManagers_Api_IAottgApiTransport_o *)0x0) {
      transport = (ApplicationManagers_Api_IAottgApiTransport_o *)il2cpp_runtime_glue(TypeInfo_AottgUnityWebRequestTransport);
      System_Object___ctor((Il2CppObject *)transport,(MethodInfo *)0x0);
    }
    (__this->fields)._transport = transport;
    il2cpp_runtime_glue(&(__this->fields)._transport,transport);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgApiClient$$SendAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_Api_AottgApiClient__SendAsync (ApplicationManagers_Api_AottgApiClient_o* __this, ApplicationManagers_Api_AottgApiRequest_o* request, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
// 0x41ac110

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_Api_AottgApiClient__SendAsync
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__,
          ApplicationManagers_Api_AottgApiClient_o *__this,
          ApplicationManagers_Api_AottgApiRequest_o *request,
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
  
  if (DAT_05704d1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AsyncUniTaskMethodBuilder_1_ApplicationManagers);
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_AottgApiClient__SendAsync_d__4);
    il2cpp_init_method_metadata(&MethodInfo_UniTask_1_ApplicationManagers_Api_AottgApiResult);
    DAT_05704d1c = '\x01';
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
  il2cpp_runtime_glue(&stack0xffffffffffffff60,0);
  il2cpp_runtime_glue(&stack0xffffffffffffff80,__this);
  il2cpp_runtime_glue(&stack0xffffffffffffff78,request);
  il2cpp_runtime_glue(&stack0xffffffffffffff88,0);
  uVar1 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgApiClient__SendAsync_d__4 + 0x38) == 0) {
    il2cpp_glue_022c2910();
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
  ApplicationManagers_Api_AottgApiClient_<SendAsync>d__4__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff58);
  il2cpp_glue_02efce00(&local_48,&stack0xffffffffffffff60,MethodInfo_UniTask_1_ApplicationManagers_Api_AottgApiResult);
  *(undefined8 *)&(__return_storage_ptr__->fields).token = local_38;
  (__return_storage_ptr__->fields).source = local_48;
  (__return_storage_ptr__->fields).result = pAStack_40;
  return __return_storage_ptr__;
}


// ApplicationManagers.Api.AottgApiClient$$DefaultBaseUrl
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__DefaultBaseUrl (const MethodInfo* method);
// 0x41af910

System_String_o * ApplicationManagers_Api_AottgApiClient__DefaultBaseUrl(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704d1d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704d1d = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60);
}


// ApplicationManagers.Api.AottgApiClient$$BuildTransportRequest
// il2cpp: ApplicationManagers_Api_AottgApiTransportRequest_o* ApplicationManagers_Api_AottgApiClient__BuildTransportRequest (ApplicationManagers_Api_AottgApiClient_o* __this, ApplicationManagers_Api_AottgApiRequest_o* request, const MethodInfo* method);
// 0x41af980

ApplicationManagers_Api_AottgApiTransportRequest_o *
ApplicationManagers_Api_AottgApiClient__BuildTransportRequest
          (ApplicationManagers_Api_AottgApiClient_o *__this,
          ApplicationManagers_Api_AottgApiRequest_o *request,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o **ppSVar1;
  bool_conflict bVar2;
  ApplicationManagers_Api_AottgApiTransportRequest_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  
  if (DAT_05704d1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgApiTransportRequest);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"Accept");
    il2cpp_init_method_metadata(&"GET");
    il2cpp_init_method_metadata(&"Content-Type");
    il2cpp_init_method_metadata(&"application/json");
    il2cpp_init_method_metadata(&"Authorization");
    il2cpp_init_method_metadata(&"Bearer ");
    DAT_05704d1e = '\x01';
  }
  if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((request->fields).Method,(MethodInfo *)0x0);
    pSVar4 = "GET";
    if ((char)bVar2 == '\0') {
      pSVar4 = (request->fields).Method;
      if (pSVar4 == (System_String_o *)0x0) goto LAB_041afbc1;
      pSVar4 = System_String__ToUpperInvariant(pSVar4,(MethodInfo *)0x0);
    }
    __this_00 = (ApplicationManagers_Api_AottgApiTransportRequest_o *)
                il2cpp_runtime_glue(TypeInfo_AottgApiTransportRequest);
    if (DAT_05704d2a == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
      il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
      DAT_05704d2a = '\x01';
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
    System_Collections_Generic_Dictionary<object__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_System_String);
    ppSVar1 = &(__this_00->fields).Headers;
    (__this_00->fields).Headers = (System_Collections_Generic_Dictionary_string__string__o *)pSVar3;
    il2cpp_runtime_glue(ppSVar1);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0) {
      (__this_00->fields).Method = pSVar4;
      il2cpp_runtime_glue(&__this_00->fields,pSVar4);
      pSVar4 = ApplicationManagers_Api_AottgApiClient__BuildUrl
                         (__this,(request->fields).Path,method_00);
      (__this_00->fields).Url = pSVar4;
      il2cpp_runtime_glue(&(__this_00->fields).Url,pSVar4);
      (__this_00->fields).JsonBody = (request->fields).JsonBody;
      il2cpp_runtime_glue(&(__this_00->fields).JsonBody);
      (__this_00->fields).TimeoutSeconds.fields = (request->fields).TimeoutSeconds.fields;
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this_00->fields).Headers;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar3,"Accept","application/json",MethodInfo_Void_set_Item);
        bVar2 = System_String__IsNullOrEmpty((request->fields).JsonBody,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 ==
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_041afbc1;
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,
                     "Content-Type","application/json",MethodInfo_Void_set_Item);
        }
        bVar2 = System_String__IsNullOrEmpty((request->fields).BearerToken,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
          pSVar4 = System_String__Concat
                             ("Bearer ",(request->fields).BearerToken,(MethodInfo *)0x0);
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_041afbc1;
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar3,"Authorization",(Il2CppObject *)pSVar4,MethodInfo_Void_set_Item);
        }
        return __this_00;
      }
    }
  }
LAB_041afbc1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgApiClient$$BuildUrl
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__BuildUrl (ApplicationManagers_Api_AottgApiClient_o* __this, System_String_o* path, const MethodInfo* method);
// 0x41afc50

System_String_o *
ApplicationManagers_Api_AottgApiClient__BuildUrl
          (ApplicationManagers_Api_AottgApiClient_o *__this,System_String_o *path,MethodInfo *method
          )

{
  System_Func_string__o *pSVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  
  if (DAT_05704d1f == '\0') {
    il2cpp_init_method_metadata(&"http://");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"https://");
    DAT_05704d1f = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (path != (System_String_o *)0x0) {
      bVar2 = System_String__StartsWith(path,"http://",5,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__StartsWith(path,"https://",5,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pSVar1 = (__this->fields)._baseUrlProvider;
          if (pSVar1 != (System_Func_string__o *)0x0) {
            pSVar3 = (System_String_o *)
                     (*(code *)(pSVar1->fields).invoke_impl)
                               ((pSVar1->fields).method_code,(pSVar1->fields).method);
            if (pSVar3 == (System_String_o *)0x0) {
              pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
            if (pSVar3 != (System_String_o *)0x0) {
              pSVar3 = System_String__TrimEnd(pSVar3,0x2f,(MethodInfo *)0x0);
              str2 = System_String__TrimStart(path,0x2f,(MethodInfo *)0x0);
              pSVar3 = System_String__Concat(pSVar3,"/",str2,(MethodInfo *)0x0);
              return pSVar3;
            }
          }
          goto LAB_041afdb3;
        }
      }
      return path;
    }
  }
  else {
    pSVar1 = (__this->fields)._baseUrlProvider;
    if (pSVar1 != (System_Func_string__o *)0x0) {
      pSVar3 = (System_String_o *)
               (*(code *)(pSVar1->fields).invoke_impl)
                         ((pSVar1->fields).method_code,(pSVar1->fields).method);
      if (pSVar3 == (System_String_o *)0x0) {
        pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__TrimEnd(pSVar3,0x2f,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
LAB_041afdb3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgApiClient$$HandleResponse
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiClient__HandleResponse (ApplicationManagers_Api_AottgApiRequest_o* request, ApplicationManagers_Api_AottgApiTransportRequest_o* transportRequest, ApplicationManagers_Api_AottgApiTransportResponse_o* response, const MethodInfo* method);
// 0x41afdc0

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
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *error;
  System_String_array *values;
  System_String_o *pSVar5;
  ApplicationManagers_Api_AottgApiResult_o *pAVar6;
  MethodInfo *in_R9;
  System_Enum_o local_38;
  
  if (response != (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) {
    pSVar5 = (response->fields).Text;
    if (pSVar5 == (System_String_o *)0x0) {
      pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      uVar1 = (response->fields).Result;
    }
    else {
      uVar1 = (response->fields).Result;
    }
    if ((uVar1 | 2) == 3) {
      if (DAT_05704d20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AottgApiTransportResult);
        il2cpp_init_method_metadata(&TypeInfo_Debug);
        il2cpp_init_method_metadata(&TypeInfo_string);
        il2cpp_init_method_metadata(&" ");
        il2cpp_init_method_metadata(&" responseCode=");
        il2cpp_init_method_metadata(&"AottgApiClient: network error ");
        il2cpp_init_method_metadata(&"network_error");
        il2cpp_init_method_metadata(&" error=");
        il2cpp_init_method_metadata(&" result=");
        DAT_05704d20 = '\x01';
      }
      values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,10);
      if (values == (System_String_array *)0x0) {
LAB_041b0410:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "AottgApiClient: network error ";
        il2cpp_runtime_glue(values->m_Items);
        if (transportRequest == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0)
        goto LAB_041b0410;
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = (transportRequest->fields).Method;
          il2cpp_runtime_glue(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = " ";
            il2cpp_runtime_glue(values->m_Items + 2);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = (transportRequest->fields).Url;
              il2cpp_runtime_glue(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = " result=";
                il2cpp_runtime_glue(values->m_Items + 4);
                if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0)
                goto LAB_041b0410;
                local_38.klass = TypeInfo_AottgApiTransportResult;
                local_38.monitor = (void *)0xffffffffffffffff;
                pSVar5 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = pSVar5;
                  il2cpp_runtime_glue(values->m_Items + 5,pSVar5);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = " responseCode=";
                    il2cpp_runtime_glue(values->m_Items + 6);
                    pSVar5 = System_Int64__ToString
                                       ((int64_t)&(response->fields).StatusCode,(MethodInfo *)0x0);
                    if (7 < (uint)values->max_length) {
                      values->m_Items[7] = pSVar5;
                      il2cpp_runtime_glue(values->m_Items + 7,pSVar5);
                      if (8 < (uint)values->max_length) {
                        values->m_Items[8] = " error=";
                        il2cpp_runtime_glue(values->m_Items + 8);
                        if (9 < (uint)values->max_length) {
                          values->m_Items[9] = (response->fields).Error;
                          il2cpp_runtime_glue(values->m_Items + 9);
                          pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
                          if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
                            if (*(char *)((long)&(request->fields).ParseJson + 1) != '\0') {
                              ApplicationManagers_AottgNetworkNotifications__TryReport
                                        ("network_error",(MethodInfo *)0x0);
                            }
                            pAVar6 = ApplicationManagers_Api_AottgApiResult__Fail
                                               ((response->fields).StatusCode,
                                                (response->fields).Text,"network_error",
                                                (response->fields).Error,0,in_R9);
                            return pAVar6;
                          }
                          goto LAB_041b0410;
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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    responseCode = (response->fields).StatusCode;
    if (99 < responseCode - 200U) {
      local_38.monitor = (void *)0x41aff0b;
      error = ApplicationManagers_Api_AottgApiClient__ParseError
                        (pSVar5,responseCode,(MethodInfo *)response);
      local_38.monitor = (void *)0x41aff1c;
      ApplicationManagers_Api_AottgApiClient__LogHttpFailure
                (transportRequest,response,pSVar5,method);
      pAVar6 = ApplicationManagers_Api_AottgApiResult__Fail
                         ((response->fields).StatusCode,pSVar5,error,(response->fields).Error,0,
                          in_R9);
      return pAVar6;
    }
    if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
      if ((char)(request->fields).ParseJson == '\0') {
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
        iVar2 = (response->fields).StatusCode;
      }
      else {
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
        local_38.monitor = (void *)0x41afe58;
        bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          local_38.monitor = (void *)0x41afe66;
          pSVar4 = SimpleJSONFixed_JSON__Parse(pSVar5,(MethodInfo *)0x0);
        }
        iVar2 = (response->fields).StatusCode;
      }
      if (DAT_05704d28 == '\0') {
        local_38.monitor = (void *)0x41afe82;
        il2cpp_init_method_metadata(&TypeInfo_AottgApiResult);
        DAT_05704d28 = '\x01';
      }
      local_38.monitor = (void *)0x41afe98;
      pAVar6 = (ApplicationManagers_Api_AottgApiResult_o *)il2cpp_runtime_glue(TypeInfo_AottgApiResult);
      local_38.monitor = (void *)0x41afea5;
      System_Object___ctor((Il2CppObject *)pAVar6,(MethodInfo *)0x0);
      if (pAVar6 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
        *(undefined1 *)&(pAVar6->fields)._Success_k__BackingField = 1;
        (pAVar6->fields)._StatusCode_k__BackingField = iVar2;
        if (pSVar5 == (System_String_o *)0x0) {
          pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        (pAVar6->fields)._ResponseText_k__BackingField = pSVar5;
        local_38.monitor = (void *)0x41afee3;
        il2cpp_runtime_glue(&(pAVar6->fields)._ResponseText_k__BackingField,pSVar5);
        (pAVar6->fields)._Json_k__BackingField = pSVar4;
        local_38.monitor = (void *)0x41afef6;
        il2cpp_runtime_glue(&(pAVar6->fields)._Json_k__BackingField,pSVar4);
        return pAVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  local_38.monitor = &UNK_041b0118;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgApiClient$$NetworkFailure
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiClient__NetworkFailure (ApplicationManagers_Api_AottgApiRequest_o* request, ApplicationManagers_Api_AottgApiTransportRequest_o* transportRequest, ApplicationManagers_Api_AottgApiTransportResponse_o* response, const MethodInfo* method);
// 0x41b0170

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiClient__NetworkFailure
          (ApplicationManagers_Api_AottgApiRequest_o *request,
          ApplicationManagers_Api_AottgApiTransportRequest_o *transportRequest,
          ApplicationManagers_Api_AottgApiTransportResponse_o *response,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  MethodInfo *in_R9;
  System_Enum_o SStack_38;
  int32_t iStack_28;
  
  if (DAT_05704d20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgApiTransportResult);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&" responseCode=");
    il2cpp_init_method_metadata(&"AottgApiClient: network error ");
    il2cpp_init_method_metadata(&"network_error");
    il2cpp_init_method_metadata(&" error=");
    il2cpp_init_method_metadata(&" result=");
    DAT_05704d20 = '\x01';
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,10);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "AottgApiClient: network error ";
      il2cpp_runtime_glue(values->m_Items);
      if (transportRequest == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0)
      goto LAB_041b0410;
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (transportRequest->fields).Method;
        il2cpp_runtime_glue(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = " ";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (transportRequest->fields).Url;
            il2cpp_runtime_glue(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = " result=";
              il2cpp_runtime_glue(values->m_Items + 4);
              if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0)
              goto LAB_041b0410;
              SStack_38.klass = TypeInfo_AottgApiTransportResult;
              SStack_38.monitor = (void *)0xffffffffffffffff;
              iStack_28 = (response->fields).Result;
              pSVar1 = System_Enum__ToString(&SStack_38,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                il2cpp_runtime_glue(values->m_Items + 5,pSVar1);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = " responseCode=";
                  il2cpp_runtime_glue(values->m_Items + 6);
                  pSVar1 = System_Int64__ToString
                                     ((int64_t)&(response->fields).StatusCode,(MethodInfo *)0x0);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar1;
                    il2cpp_runtime_glue(values->m_Items + 7,pSVar1);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = " error=";
                      il2cpp_runtime_glue(values->m_Items + 8);
                      if (9 < (uint)values->max_length) {
                        values->m_Items[9] = (response->fields).Error;
                        il2cpp_runtime_glue(values->m_Items + 9);
                        pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                        if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
                          if (*(char *)((long)&(request->fields).ParseJson + 1) != '\0') {
                            ApplicationManagers_AottgNetworkNotifications__TryReport
                                      ("network_error",(MethodInfo *)0x0);
                          }
                          pAVar2 = ApplicationManagers_Api_AottgApiResult__Fail
                                             ((response->fields).StatusCode,(response->fields).Text,
                                              "network_error",(response->fields).Error,0,in_R9);
                          return pAVar2;
                        }
                        goto LAB_041b0410;
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041b0410:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgApiClient$$IsNetworkError
// il2cpp: bool ApplicationManagers_Api_AottgApiClient__IsNetworkError (int32_t result, const MethodInfo* method);
// 0x41b0160

bool_conflict
ApplicationManagers_Api_AottgApiClient__IsNetworkError(int32_t result,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(result | 2U) == 3);
}


// ApplicationManagers.Api.AottgApiClient$$ParseError
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__ParseError (System_String_o* responseText, int64_t responseCode, const MethodInfo* method);
// 0x41b0420

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
  
  if (DAT_05704d21 == '\0') {
    il2cpp_init_method_metadata(&"code");
    il2cpp_init_method_metadata(&"message");
    il2cpp_init_method_metadata(&"error");
    DAT_05704d21 = '\x01';
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
  if (DAT_05704d26 == '\0') {
    il2cpp_init_method_metadata(&"http_");
    DAT_05704d26 = '\x01';
  }
  pSVar2 = System_Int64__ToString((int64_t)&local_20,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat("http_",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ApplicationManagers.Api.AottgApiClient$$FieldValue
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiClient__FieldValue (SimpleJSONFixed_JSONNode_o* node, System_String_o* name, const MethodInfo* method);
// 0x41b09f0

System_String_o *
ApplicationManagers_Api_AottgApiClient__FieldValue
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *name,MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  ulong in_RAX;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar3;
  System_String_o *str1;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  MethodInfo *pMVar5;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_05704d22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704d22 = '\x01';
  }
  uStack_28 = uStack_28 & 0xffffffffffff;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (System_String_o *)0x0;
  }
  bVar2 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (System_String_o *)0x0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(node->klass->vtable)._7_get_Item.methodPtr)
                  (node,name,(node->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041b0bdc;
      pSVar3 = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
      bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar4 = a->klass;
        pMVar5 = (pSVar4->vtable)._9_get_Value.method;
        goto LAB_041b0bc4;
      }
    }
    if (name != (System_String_o *)0x0) {
      uVar1 = System_String__get_Chars(name,0,(MethodInfo *)0x0);
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar1 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
      uStack_28 = CONCAT26(uVar1,(undefined6)uStack_28);
      pSVar3 = System_Char__ToString((short)&uStack_28 + 6,(MethodInfo *)0x0);
      str1 = System_String__Substring(name,1,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(node->klass->vtable)._7_get_Item.methodPtr)
                    (node,pSVar3,(node->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return (System_String_o *)0x0;
      }
      if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
        bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          return (System_String_o *)0x0;
        }
        pSVar4 = a->klass;
        pMVar5 = (pSVar4->vtable)._9_get_Value.method;
LAB_041b0bc4:
        pSVar3 = (System_String_o *)(*(pSVar4->vtable)._9_get_Value.methodPtr)(a,pMVar5);
        return pSVar3;
      }
    }
  }
LAB_041b0bdc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgApiClient$$LogHttpFailure
// il2cpp: void ApplicationManagers_Api_AottgApiClient__LogHttpFailure (ApplicationManagers_Api_AottgApiTransportRequest_o* request, ApplicationManagers_Api_AottgApiTransportResponse_o* response, System_String_o* text, const MethodInfo* method);
// 0x41b0620

void ApplicationManagers_Api_AottgApiClient__LogHttpFailure
               (ApplicationManagers_Api_AottgApiTransportRequest_o *request,
               ApplicationManagers_Api_AottgApiTransportResponse_o *response,System_String_o *text,
               MethodInfo *method)

{
  int64_t *__this;
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (DAT_05704d23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"AottgApiClient: HTTP ");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&" body=");
    il2cpp_init_method_metadata(&" error=");
    DAT_05704d23 = '\x01';
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,10);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "AottgApiClient: HTTP ";
      il2cpp_runtime_glue(values->m_Items);
      if (response == (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) goto LAB_041b0869;
      __this = &(response->fields).StatusCode;
      pSVar1 = System_Int64__ToString((int64_t)__this,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        il2cpp_runtime_glue(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = " ";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (request == (ApplicationManagers_Api_AottgApiTransportRequest_o *)0x0)
          goto LAB_041b0869;
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (request->fields).Method;
            il2cpp_runtime_glue(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = " ";
              il2cpp_runtime_glue(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = (request->fields).Url;
                il2cpp_runtime_glue(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = " error=";
                  il2cpp_runtime_glue(values->m_Items + 6);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = (response->fields).Error;
                    il2cpp_runtime_glue(values->m_Items + 7);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = " body=";
                      il2cpp_runtime_glue(values->m_Items + 8);
                      if (9 < (uint)values->max_length) {
                        values->m_Items[9] = text;
                        il2cpp_runtime_glue(values->m_Items + 9);
                        pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                        if (99 < *__this - 400U) {
                          if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                          return;
                        }
                        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041b0869:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


