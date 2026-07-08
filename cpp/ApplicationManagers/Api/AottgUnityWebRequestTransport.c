// Type: ApplicationManagers.Api.AottgUnityWebRequestTransport
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgUnityWebRequestTransport.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$MoveNext
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this, const MethodInfo* method);
// 0x41b1930

/* WARNING: Removing unreachable block (ram,0x041b2183) */
/* WARNING: Removing unreachable block (ram,0x041b1e86) */
/* WARNING: Removing unreachable block (ram,0x041b21a4) */
/* WARNING: Removing unreachable block (ram,0x041b2505) */
/* WARNING: Removing unreachable block (ram,0x041b25ce) */
/* WARNING: Removing unreachable block (ram,0x041b2534) */
/* WARNING: Removing unreachable block (ram,0x041b256e) */
/* WARNING: Removing unreachable block (ram,0x041b2541) */
/* WARNING: Removing unreachable block (ram,0x041b2582) */
/* WARNING: Removing unreachable block (ram,0x041b255d) */
/* WARNING: Removing unreachable block (ram,0x041b259c) */
/* WARNING: Removing unreachable block (ram,0x041b25b0) */
/* WARNING: Removing unreachable block (ram,0x041b25e3) */
/* WARNING: Removing unreachable block (ram,0x041b25b6) */
/* WARNING: Removing unreachable block (ram,0x041b256c) */
/* WARNING: Removing unreachable block (ram,0x041b25bf) */
/* WARNING: Removing unreachable block (ram,0x041b25fa) */
/* WARNING: Removing unreachable block (ram,0x041b2606) */

void ApplicationManagers_Api_AottgUnityWebRequestTransport_<SendAsync>d__0__MoveNext
               (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this,
               MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  UnityEngine_Networking_UnityWebRequest_o *pUVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar6;
  Il2CppType *pIVar7;
  Il2CppMethodPointer pIVar8;
  long *plVar9;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  int32_t iVar10;
  Il2CppObject *pIVar11;
  bool_conflict bVar12;
  int32_t iVar13;
  int iVar14;
  Il2CppType **ppIVar15;
  UnityEngine_Networking_DownloadHandlerBuffer_o *__this_03;
  System_Text_Encoding_o *pSVar16;
  System_Byte_array *data;
  UnityEngine_Networking_UploadHandlerRaw_o *__this_04;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *asyncOperation;
  long lVar17;
  undefined8 *puVar18;
  uint *puVar19;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAVar20;
  Il2CppClass *pIVar21;
  long lVar22;
  MethodInfo *in_R9;
  int iVar23;
  undefined1 auVar24 [16];
  undefined8 in_stack_ffffffffffffff08;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  short local_c8;
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  Il2CppObject *local_a8;
  Il2CppObject *pIStack_a0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_98;
  undefined4 local_80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  UnityEngine_Networking_UnityWebRequest_o *pUStack_70;
  Il2CppObject *local_68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  UnityEngine_Networking_UnityWebRequest_o *pUStack_50;
  Il2CppObject *local_48;
  Il2CppObject *pIStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (DAT_05704d2f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
    il2cpp_init_method_metadata(&MethodInfo_Void_SetResult);
    il2cpp_init_method_metadata(&MethodInfo_UnityWebRequest_GetResult);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&TypeInfo_DownloadHandlerBuffer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_System_String__get);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_UniTask_1_T__Awaiter_UnityEngine_Networking_Unit);
    il2cpp_init_method_metadata(&TypeInfo_UnityWebRequest);
    il2cpp_init_method_metadata();
    DAT_05704d2f = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  pIStack_40 = (Il2CppObject *)0x0;
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pUStack_50 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_38 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  uVar26 = 0;
  uVar27 = 0;
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pUStack_70 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_68 = (Il2CppObject *)0x0;
  local_80 = 0;
  iVar23 = *(int *)&method->methodPointer;
  if (iVar23 == 0) {
    uVar4 = method->token;
    local_c8 = (short)uVar4;
    plVar9 = (method->field7_0x38).methodMetadataHandle;
    (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
    (method->field8_0x40).genericMethod = (void *)0x0;
    method->token = 0;
    method->flags = 0;
    method->iflags = 0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
    iVar23 = -1;
  }
  else {
    uVar25 = 0;
    if (method->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    ppIVar15 = (Il2CppType **)il2cpp_runtime_glue(TypeInfo_UnityWebRequest);
    UnityEngine_Networking_UnityWebRequest___ctor();
    pppIVar1 = &method->parameters;
    method->parameters = ppIVar15;
    il2cpp_runtime_glue(pppIVar1);
    pUVar5 = (UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1;
    __this_03 = (UnityEngine_Networking_DownloadHandlerBuffer_o *)il2cpp_runtime_glue(TypeInfo_DownloadHandlerBuffer);
    UnityEngine_Networking_DownloadHandlerBuffer___ctor(__this_03,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler
              (pUVar5,(UnityEngine_Networking_DownloadHandler_o *)__this_03,(MethodInfo *)0x0);
    if (method->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar12 = System_String__IsNullOrEmpty((method->klass->_1).byval_arg.data,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      pUVar5 = (UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1;
      pSVar16 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if (method->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      in_stack_ffffffffffffff10 = 0;
      if (pSVar16 == (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      data = (System_Byte_array *)
             (*(pSVar16->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar16,(method->klass->_1).byval_arg.data,
                        (pSVar16->klass->vtable)._18_GetBytes.method);
      __this_04 = (UnityEngine_Networking_UploadHandlerRaw_o *)il2cpp_runtime_glue(TypeInfo_UploadHandlerRaw);
      UnityEngine_Networking_UploadHandlerRaw___ctor(__this_04,data,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_Networking_UnityWebRequest__set_uploadHandler
                (pUVar5,(UnityEngine_Networking_UploadHandler_o *)__this_04,(MethodInfo *)0x0);
    }
    pIVar21 = method->klass;
    if (pIVar21 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((char)(pIVar21->_1).byval_arg.bits != '\0') {
      pUVar5 = (UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1;
      iVar13 = System_Nullable<int>__get_Value
                         ((System_Nullable_int__o)&(pIVar21->_1).byval_arg.bits,MethodInfo_Int32_get_Value);
      if (pUVar5 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar5,iVar13,(MethodInfo *)0x0);
      pIVar21 = method->klass;
      if (pIVar21 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    __this_00 = (pIVar21->_1).this_arg.data;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b8,
               __this_00,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    local_38 = local_98;
    local_48 = local_a8;
    pIStack_40 = pIStack_a0;
    local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_b8;
    pUStack_50 = uStack_b0;
    while (__this_01.fields._version = (int)in_stack_ffffffffffffff10,
          __this_01.fields._index = (int)((ulong)in_stack_ffffffffffffff10 >> 0x20),
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff08,
          __this_01.fields._current.fields.key = (Il2CppObject *)method,
          __this_01.fields._current.fields.value._0_4_ = iVar23,
          __this_01.fields._current.fields.value._4_4_ = uVar25,
          __this_01.fields._getEnumeratorRetType = uVar26, __this_01.fields._36_4_ = uVar27,
          bVar12 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                             (__this_01,(MethodInfo_31CFE90 *)&local_58), (char)bVar12 != '\0') {
      auVar24 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&local_58,MethodInfo_KeyValuePair_2_System_String_System_String__get);
      if ((UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1 ==
          (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader
                ((UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1,auVar24._0_8_,auVar24._8_8_,
                 (MethodInfo *)0x0);
    }
    if (iVar23 < 0) {
      __this_02.fields._version = (int)in_stack_ffffffffffffff10;
      __this_02.fields._index = (int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff08;
      __this_02.fields._current.fields.key = (Il2CppObject *)method;
      __this_02.fields._current.fields.value._0_4_ = iVar23;
      __this_02.fields._current.fields.value._4_4_ = uVar25;
      __this_02.fields._getEnumeratorRetType = uVar26;
      __this_02.fields._36_4_ = uVar27;
      System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                (__this_02,(MethodInfo_31CFFB0 *)&local_58);
    }
    if ((UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1 ==
        (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    asyncOperation =
         UnityEngine_Networking_UnityWebRequest__SendWebRequest
                   ((UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1,(MethodInfo *)0x0);
    Cysharp_Threading_Tasks_UnityAsyncExtensions__WithCancellation
              ((Cysharp_Threading_Tasks_UniTask_UnityWebRequest__o *)local_b8,asyncOperation,
               (System_Threading_CancellationToken_o)method->return_type,(MethodInfo *)0x0);
    local_68 = local_a8;
    local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_b8;
    pUStack_70 = uStack_b0;
    local_b8 = (undefined1  [8])0x0;
    uStack_b0 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    local_a8 = (Il2CppObject *)0x0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T__Awaiter_UnityEngine_Networking_Unit + 0x20) + 0x135) & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    local_a8 = local_68;
    local_b8 = (undefined1  [8])local_78;
    uStack_b0 = pUStack_70;
    il2cpp_runtime_glue();
    pIVar11 = local_a8;
    local_c8 = (short)local_a8;
    iVar10 = uStack_b0._4_4_;
    iVar13 = (int32_t)uStack_b0;
    lVar17 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
    uVar26 = local_b8._0_4_;
    uVar27 = local_b8._4_4_;
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = il2cpp_glue_022c28b0();
    }
    plVar9 = (long *)CONCAT44(uVar27,uVar26);
    if (plVar9 != (long *)0x0) {
      lVar17 = *(long *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x18) + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = il2cpp_glue_022c28b0();
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = il2cpp_glue_022c28b0();
      }
      lVar6 = *plVar9;
      if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
        lVar22 = 0;
        do {
          if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar22) == lVar17) {
            puVar18 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar22) + 1) * 0x10 + lVar6 +
                      0x138);
            goto LAB_041b1f1a;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar22);
      }
      puVar18 = (undefined8 *)il2cpp_runtime_glue(plVar9,lVar17,1);
LAB_041b1f1a:
      iVar14 = (*(code *)*puVar18)(plVar9,(int)local_c8,puVar18[1]);
      if (iVar14 == 0) {
        *(undefined4 *)&method->methodPointer = 0;
        *(undefined4 *)&method->field7_0x38 = uVar26;
        *(undefined4 *)((long)&method->field7_0x38 + 4) = uVar27;
        *(int32_t *)&method->field8_0x40 = iVar13;
        *(int32_t *)((long)&method->field8_0x40 + 4) = iVar10;
        *(Il2CppObject **)&method->token = pIVar11;
        il2cpp_runtime_glue(&method->field7_0x38,0);
        il2cpp_glue_024ace00(&method->virtualMethodPointer,&stack0xffffffffffffff28,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
        return;
      }
    }
    plVar9 = (long *)CONCAT44(uVar27,uVar26);
  }
  if (plVar9 != (long *)0x0) {
    lVar17 = *(long *)(MethodInfo_UnityWebRequest_GetResult + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = il2cpp_glue_022c28b0();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x28);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = il2cpp_glue_022c28b0();
    }
    lVar6 = *plVar9;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar22 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar22) == lVar17) {
          puVar18 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar22) * 0x10 + lVar6 + 0x138);
          goto LAB_041b1fd1;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar22);
    }
    puVar18 = (undefined8 *)il2cpp_runtime_glue(plVar9,lVar17,0);
LAB_041b1fd1:
    (*(code *)*puVar18)(plVar9,(int)local_c8,puVar18[1]);
  }
  pAVar20 = ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse
                      ((UnityEngine_Networking_UnityWebRequest_o *)method->parameters,
                       (System_String_o *)0x0,(System_String_o *)0x0,
                       (System_Nullable_long__o)ZEXT816(0),in_R9);
  if ((iVar23 < 0) && (ppIVar15 = method->parameters, ppIVar15 != (Il2CppType **)0x0)) {
    pIVar7 = *ppIVar15;
    if ((ulong)*(ushort *)&pIVar7[0x12].field_0xe != 0) {
      lVar17 = 0;
      do {
        if (*(long *)((long)pIVar7[0xb].data + lVar17) == TypeInfo_IDisposable) {
          puVar19 = &pIVar7[(long)*(int *)((long)pIVar7[0xb].data + lVar17 + 8) + 0x13].bits;
          goto LAB_041b2063;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)&pIVar7[0x12].field_0xe << 4 != lVar17);
    }
    puVar19 = (uint *)il2cpp_runtime_glue(ppIVar15,TypeInfo_IDisposable,0);
LAB_041b2063:
    (**(code **)puVar19)(ppIVar15,*(undefined8 *)(puVar19 + 2));
  }
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  pIVar8 = method->virtualMethodPointer;
  if (pIVar8 == (Il2CppMethodPointer)0x0) {
    method->name = (char *)pAVar20;
    il2cpp_runtime_glue(&method->name,pAVar20);
    return;
  }
  if ((*(byte *)(*(long *)(MethodInfo_Void_SetResult + 0x20) + 0x135) & 1) == 0) {
    lVar17 = il2cpp_glue_022c28b0();
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
    bVar2 = *(byte *)(lVar17 + 0x135);
  }
  else {
    lVar17 = *(long *)(*(long *)(*(long *)(MethodInfo_Void_SetResult + 0x20) + 0xc0) + 8);
    bVar2 = *(byte *)(lVar17 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar17 = il2cpp_glue_022c28b0();
    lVar6 = *(long *)pIVar8;
    uVar3 = *(ushort *)(lVar6 + 0x12e);
  }
  else {
    lVar6 = *(long *)pIVar8;
    uVar3 = *(ushort *)(lVar6 + 0x12e);
  }
  if ((ulong)uVar3 != 0) {
    lVar22 = 0;
    do {
      if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar22) == lVar17) {
        puVar18 = (undefined8 *)
                  (lVar6 + (long)(*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar22) + 2) * 0x10 + 0x138
                  );
        goto LAB_041b216d;
      }
      lVar22 = lVar22 + 0x10;
    } while ((ulong)uVar3 * 0x10 != lVar22);
  }
  puVar18 = (undefined8 *)il2cpp_runtime_glue(pIVar8,lVar17,2);
LAB_041b216d:
  (*(code *)*puVar18)(pIVar8,pAVar20,puVar18[1]);
  return;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$SetStateMachine
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__SetStateMachine (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x41b2720

void ApplicationManagers_Api_AottgUnityWebRequestTransport_<SendAsync>d__0__SetStateMachine
               (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  if (DAT_05704d30 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_SetStateMachine);
    DAT_05704d30 = '\x01';
  }
  return;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$SendAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync (ApplicationManagers_Api_AottgUnityWebRequestTransport_o* __this, ApplicationManagers_Api_AottgApiTransportRequest_o* request, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
// 0x41b16a0

Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o *
ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync
          (Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o *__return_storage_ptr__,
          ApplicationManagers_Api_AottgUnityWebRequestTransport_o *__this,
          ApplicationManagers_Api_AottgApiTransportRequest_o *request,
          System_Threading_CancellationToken_o cancellationToken,MethodInfo *method)

{
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  char *pcVar5;
  Il2CppType **ppIVar6;
  _union_13 _Var7;
  _union_14 _Var8;
  undefined8 uVar9;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_40;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAStack_38;
  undefined8 local_30;
  
  if (DAT_05704d2d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AsyncUniTaskMethodBuilder_1_ApplicationManagers);
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_AottgUnityWebRequestTransport__SendAs);
    il2cpp_init_method_metadata(&MethodInfo_UniTask_1_ApplicationManagers_Api_AottgApiTransp);
    DAT_05704d2d = '\x01';
  }
  uVar2 = 0;
  _Var8.genericMethod = (void *)0x0;
  uVar9._0_4_ = 0;
  uVar9._4_2_ = 0;
  uVar9._6_2_ = 0;
  ppIVar6 = (Il2CppType **)0x0;
  _Var7.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (InvokerMethod)0x0;
  pcVar5 = (char *)0x0;
  il2cpp_runtime_glue(&stack0xffffffffffffff70,0);
  il2cpp_runtime_glue(&stack0xffffffffffffff88,request);
  il2cpp_runtime_glue(&stack0xffffffffffffff90,0);
  uVar1 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgUnityWebRequestTransport__SendAs + 0x38) == 0) {
    il2cpp_glue_022c2910();
  }
  __this_00.fields._4_4_ = uVar2;
  __this_00.fields.__1__state = uVar1;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o *)pIVar3;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar4;
  __this_00.fields.__t__builder.fields.result =
       (ApplicationManagers_Api_AottgApiTransportResponse_o *)pcVar5;
  __this_00.fields.request = request;
  __this_00.fields.cancellationToken.fields._source = cancellationToken.fields._source;
  __this_00.fields._unityRequest_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)ppIVar6;
  __this_00.fields.__u__1.fields.task.fields.source =
       (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)_Var7.rgctx_data;
  __this_00.fields.__u__1.fields.task.fields.result = _Var8.genericMethod;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = uVar9;
  ApplicationManagers_Api_AottgUnityWebRequestTransport_<SendAsync>d__0__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff68);
  il2cpp_glue_02efce00(&local_40,&stack0xffffffffffffff70,MethodInfo_UniTask_1_ApplicationManagers_Api_AottgApiTransp);
  *(undefined8 *)&(__return_storage_ptr__->fields).token = local_30;
  (__return_storage_ptr__->fields).source = local_40;
  (__return_storage_ptr__->fields).result = pAStack_38;
  return __return_storage_ptr__;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$BuildResponse
// il2cpp: ApplicationManagers_Api_AottgApiTransportResponse_o* ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse (UnityEngine_Networking_UnityWebRequest_o* unityRequest, System_String_o* textOverride, System_String_o* errorOverride, System_Nullable_long__o statusCodeOverride, const MethodInfo* method);
// 0x41b17b0

ApplicationManagers_Api_AottgApiTransportResponse_o *
ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse
          (UnityEngine_Networking_UnityWebRequest_o *unityRequest,System_String_o *textOverride,
          System_String_o *errorOverride,System_Nullable_long__o statusCodeOverride,
          MethodInfo *method)

{
  int32_t iVar1;
  ApplicationManagers_Api_AottgApiTransportResponse_o *__this;
  int64_t iVar2;
  UnityEngine_Networking_DownloadHandler_o *pUVar3;
  int iVar4;
  char local_34;
  
  if (DAT_05704d2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgApiTransportResponse);
    il2cpp_init_method_metadata(&MethodInfo_Int64_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05704d2e = '\x01';
  }
  __this = (ApplicationManagers_Api_AottgApiTransportResponse_o *)il2cpp_runtime_glue(TypeInfo_AottgApiTransportResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((unityRequest != (UnityEngine_Networking_UnityWebRequest_o *)0x0) &&
     (iVar1 = UnityEngine_Networking_UnityWebRequest__get_result(unityRequest,(MethodInfo *)0x0),
     __this != (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0)) {
    iVar4 = 0;
    if (iVar1 - 2U < 3) {
      iVar4 = iVar1 + -1;
    }
    (__this->fields).Result = iVar4;
    local_34 = (char)statusCodeOverride.fields.hasValue;
    if (local_34 == '\0') {
      iVar2 = UnityEngine_Networking_UnityWebRequest__get_responseCode
                        (unityRequest,(MethodInfo *)0x0);
      (__this->fields).StatusCode = iVar2;
    }
    else {
      (__this->fields).StatusCode = statusCodeOverride.fields.value;
    }
    if (textOverride == (System_String_o *)0x0) {
      pUVar3 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                         (unityRequest,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
        textOverride = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      else {
        pUVar3 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                           (unityRequest,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Networking_DownloadHandler_o *)0x0) goto LAB_041b18fc;
        textOverride = UnityEngine_Networking_DownloadHandler__get_text(pUVar3,(MethodInfo *)0x0);
      }
    }
    (__this->fields).Text = textOverride;
    il2cpp_runtime_glue(&(__this->fields).Text);
    if (errorOverride == (System_String_o *)0x0) {
      errorOverride =
           UnityEngine_Networking_UnityWebRequest__get_error(unityRequest,(MethodInfo *)0x0);
    }
    (__this->fields).Error = errorOverride;
    il2cpp_runtime_glue(&(__this->fields).Error,errorOverride);
    return __this;
  }
LAB_041b18fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$ConvertResult
// il2cpp: int32_t ApplicationManagers_Api_AottgUnityWebRequestTransport__ConvertResult (int32_t result, const MethodInfo* method);
// 0x41b1910

int32_t ApplicationManagers_Api_AottgUnityWebRequestTransport__ConvertResult
                  (int32_t result,MethodInfo *method)

{
  if (result - 2U < 3) {
    return result + -1;
  }
  return 0;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport___ctor (ApplicationManagers_Api_AottgUnityWebRequestTransport_o* __this, const MethodInfo* method);
// 0x41af830

void ApplicationManagers_Api_AottgUnityWebRequestTransport___ctor
               (ApplicationManagers_Api_AottgUnityWebRequestTransport_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


