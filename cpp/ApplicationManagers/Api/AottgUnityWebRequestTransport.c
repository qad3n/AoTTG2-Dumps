// Type: ApplicationManagers.Api.AottgUnityWebRequestTransport
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgUnityWebRequestTransport.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$MoveNext
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this, const MethodInfo* method);
// 0x44cf2b0

void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext
               (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this,
               MethodInfo *method)

{
  Il2CppType ***pppIVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  UnityEngine_Networking_UnityWebRequest_o *pUVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppType *pIVar6;
  Il2CppMethodPointer pIVar7;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar8;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  int iVar9;
  int32_t iVar10;
  Il2CppObject *pIVar11;
  char cVar12;
  bool_conflict bVar13;
  int32_t iVar14;
  int iVar15;
  Il2CppType **ppIVar16;
  UnityEngine_Networking_DownloadHandlerBuffer_o *__this_03;
  System_Text_Encoding_o *pSVar17;
  System_Byte_array *data;
  UnityEngine_Networking_UploadHandlerRaw_o *__this_04;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *asyncOperation;
  uint *puVar18;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  MethodInfo *pMVar25;
  Il2CppClass *pIVar26;
  long lVar27;
  long lVar28;
  MethodInfo *in_R9;
  int iVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined8 in_stack_ffffffffffffff08;
  ulong in_stack_ffffffffffffff10;
  MethodInfo *in_stack_ffffffffffffff18;
  int in_stack_ffffffffffffff20;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  short local_c8;
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  Il2CppObject *local_a8;
  Il2CppObject *pIStack_a0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_98 [3];
  uint local_80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  UnityEngine_Networking_UnityWebRequest_o *pUStack_70;
  Il2CppObject *local_68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  UnityEngine_Networking_UnityWebRequest_o *pUStack_50;
  Il2CppObject *local_48;
  Il2CppObject *pIStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (g_data_057aeb1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_UnityEng);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UnityWebRequest_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownloadHandlerBuffer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_UnityEngine_Networking_UnityWebReque);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityWebRequest);
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb1e = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  pIStack_40 = (Il2CppObject *)0x0;
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pUStack_50 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_38 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  uVar33 = 0;
  uVar34 = 0;
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pUStack_70 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_68 = (Il2CppObject *)0x0;
  local_80 = 0;
  iVar29 = *(int *)&method->methodPointer;
  if (iVar29 == 0) {
    uVar4 = method->token;
    local_c8 = (short)uVar4;
    plVar24 = (method->field7_0x38).methodMetadataHandle;
    (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
    (method->field8_0x40).genericMethod = (void *)0x0;
    method->token = 0;
    method->flags = 0;
    method->iflags = 0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
    iVar29 = -1;
  }
  else {
    uVar32 = 0;
    if (method->klass == (Il2CppClass *)0x0) goto label_044cfb0b;
    ppIVar16 = (Il2CppType **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityWebRequest);
    UnityEngine_Networking_UnityWebRequest___ctor_51070d0();
    pppIVar1 = &method->parameters;
    method->parameters = ppIVar16;
    il2cpp_runtime_helper_022b4080(pppIVar1);
    pUVar5 = (UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1;
    __this_03 = (UnityEngine_Networking_DownloadHandlerBuffer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DownloadHandlerBuffer);
    UnityEngine_Networking_DownloadHandlerBuffer___ctor(__this_03,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_044cfb10;
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler
              (pUVar5,(UnityEngine_Networking_DownloadHandler_o *)__this_03,(MethodInfo *)0x0);
    if (method->klass == (Il2CppClass *)0x0) goto label_044cfb15;
    bVar13 = System_String__IsNullOrEmpty((method->klass->_1).byval_arg.data,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      pUVar5 = (UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1;
      pSVar17 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if (method->klass == (Il2CppClass *)0x0) goto label_044cfb3b;
      in_stack_ffffffffffffff10 = 0;
      if (pSVar17 == (System_Text_Encoding_o *)0x0) goto label_044cfb47;
      data = (System_Byte_array *)
             (*(pSVar17->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar17,(method->klass->_1).byval_arg.data,
                        (pSVar17->klass->vtable)._18_GetBytes.method);
      __this_04 = (UnityEngine_Networking_UploadHandlerRaw_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UploadHandlerRaw);
      UnityEngine_Networking_UploadHandlerRaw___ctor(__this_04,data,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_044cfb4c;
      UnityEngine_Networking_UnityWebRequest__set_uploadHandler
                (pUVar5,(UnityEngine_Networking_UploadHandler_o *)__this_04,(MethodInfo *)0x0);
    }
    pIVar26 = method->klass;
    if (pIVar26 == (Il2CppClass *)0x0) goto label_044cfb1a;
    if ((char)(pIVar26->_1).byval_arg.bits != '\0') {
      pUVar5 = (UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1;
      iVar14 = System_Nullable_int___get_Value
                         ((System_Nullable_int__o)&(pIVar26->_1).byval_arg.bits,MethodInfo_Int32_get_Value);
      if (pUVar5 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_044cfb31;
      UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar5,iVar14,(MethodInfo *)0x0);
      pIVar26 = method->klass;
      if (pIVar26 == (Il2CppClass *)0x0) goto label_044cfb36;
    }
    __this_00 = (pIVar26->_1).this_arg.data;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044cfb1f;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b8,__this_00,
               MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    local_38 = local_98[0];
    local_48 = local_a8;
    pIStack_40 = pIStack_a0;
    local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_b8;
    pUStack_50 = uStack_b0;
    lVar20 = 0;
    while (__this_01.fields._version = (int)in_stack_ffffffffffffff10,
          __this_01.fields._index = (int)(in_stack_ffffffffffffff10 >> 0x20),
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff08,
          __this_01.fields._current.fields.key = (Il2CppObject *)method,
          __this_01.fields._current.fields.value._0_4_ = iVar29,
          __this_01.fields._current.fields.value._4_4_ = uVar32,
          __this_01.fields._getEnumeratorRetType = uVar33, __this_01.fields._36_4_ = uVar34,
          bVar13 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             (__this_01,(MethodInfo_3251160 *)&local_58), (char)bVar13 != '\0') {
      auVar31 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&local_58,MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
      if ((UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1 ==
          (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_044cfb03;
      }
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader
                ((UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1,auVar31._0_8_,auVar31._8_8_,
                 (MethodInfo *)0x0);
    }
    if (iVar29 < 0) {
      __this_02.fields._version = (int)in_stack_ffffffffffffff10;
      __this_02.fields._index = (int)(in_stack_ffffffffffffff10 >> 0x20);
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff08;
      __this_02.fields._current.fields.key = (Il2CppObject *)method;
      __this_02.fields._current.fields.value._0_4_ = iVar29;
      __this_02.fields._current.fields.value._4_4_ = uVar32;
      __this_02.fields._getEnumeratorRetType = uVar33;
      __this_02.fields._36_4_ = uVar34;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251280 *)&local_58);
    }
    if ((UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1 ==
        (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_044cfb2c;
    in_stack_ffffffffffffff18 = method;
    asyncOperation =
         UnityEngine_Networking_UnityWebRequest__SendWebRequest
                   ((UnityEngine_Networking_UnityWebRequest_o *)*pppIVar1,(MethodInfo *)0x0);
    in_stack_ffffffffffffff20 = iVar29;
    Cysharp_Threading_Tasks_UnityAsyncExtensions__WithCancellation_49fac90
              ((Cysharp_Threading_Tasks_UniTask_UnityWebRequest__o *)local_b8,asyncOperation,
               (System_Threading_CancellationToken_o)method->return_type,(MethodInfo *)0x0);
    local_68 = local_a8;
    local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_b8;
    pUStack_70 = uStack_b0;
    local_b8 = (undefined1  [8])0x0;
    uStack_b0 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    local_a8 = (Il2CppObject *)0x0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_UnityEngine_Networking_UnityWebReque + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    local_a8 = local_68;
    local_b8 = (undefined1  [8])local_78;
    uStack_b0 = pUStack_70;
    il2cpp_runtime_helper_022b4080();
    pIVar11 = local_a8;
    local_c8 = (short)local_a8;
    iVar10 = uStack_b0._4_4_;
    iVar14 = (int32_t)uStack_b0;
    lVar20 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
    uVar33 = local_b8._0_4_;
    uVar34 = local_b8._4_4_;
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = il2cpp_runtime_helper_023009c0();
    }
    plVar24 = (long *)CONCAT44(uVar34,uVar33);
    if (plVar24 != (long *)0x0) {
      lVar20 = *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x18) + 0x20);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = il2cpp_runtime_helper_023009c0();
      }
      lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = il2cpp_runtime_helper_023009c0();
      }
      lVar27 = *plVar24;
      if ((ulong)*(ushort *)(lVar27 + 0x12e) != 0) {
        lVar28 = 0;
        do {
          if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar28) == lVar20) {
            puVar21 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar28) + 1) * 0x10 + lVar27 + 0x138);
            goto label_044cf89a;
          }
          lVar28 = lVar28 + 0x10;
        } while ((ulong)*(ushort *)(lVar27 + 0x12e) << 4 != lVar28);
      }
      puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar24,lVar20,1);
label_044cf89a:
      iVar15 = (*(code *)*puVar21)(plVar24,(int)local_c8,puVar21[1]);
      if (iVar15 == 0) {
        *(undefined4 *)&method->methodPointer = 0;
        *(undefined4 *)&method->field7_0x38 = uVar33;
        *(undefined4 *)((long)&method->field7_0x38 + 4) = uVar34;
        *(int32_t *)&method->field8_0x40 = iVar14;
        *(int32_t *)((long)&method->field8_0x40 + 4) = iVar10;
        *(Il2CppObject **)&method->token = pIVar11;
        il2cpp_runtime_helper_022b4080(&method->field7_0x38,0);
        il2cpp_runtime_helper_024eaf10(&method->virtualMethodPointer,&stack0xffffffffffffff28,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_UnityEng);
        return;
      }
    }
    plVar24 = (long *)CONCAT44(uVar34,uVar33);
  }
  if (plVar24 != (long *)0x0) {
    lVar20 = *(long *)(MethodInfo_UnityWebRequest_GetResult + 0x20);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = il2cpp_runtime_helper_023009c0();
    }
    lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x28);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = il2cpp_runtime_helper_023009c0();
    }
    lVar27 = *plVar24;
    if ((ulong)*(ushort *)(lVar27 + 0x12e) != 0) {
      lVar28 = 0;
      do {
        if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar28) == lVar20) {
          puVar21 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar28) * 0x10 + lVar27 + 0x138);
          goto label_044cf951;
        }
        lVar28 = lVar28 + 0x10;
      } while ((ulong)*(ushort *)(lVar27 + 0x12e) << 4 != lVar28);
    }
    puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar24,lVar20,0);
label_044cf951:
    (*(code *)*puVar21)(plVar24,(int)local_c8,puVar21[1]);
  }
  in_stack_ffffffffffffff10 = 0;
  pAVar19 = ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse
                      ((UnityEngine_Networking_UnityWebRequest_o *)method->parameters,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_Nullable_long__o)ZEXT816(0),in_R9);
  iVar15 = 0x11;
  lVar20 = 0;
  pMVar25 = method;
  iVar9 = iVar29;
  do {
    iVar29 = in_stack_ffffffffffffff20;
    method = in_stack_ffffffffffffff18;
    if ((iVar9 < 0) && (ppIVar16 = pMVar25->parameters, ppIVar16 != (Il2CppType **)0x0)) {
      pIVar6 = *ppIVar16;
      if ((ulong)*(ushort *)&pIVar6[0x12].field_0xe != 0) {
        lVar27 = 0;
        do {
          if (*(long *)((long)pIVar6[0xb].data + lVar27) == TypeInfo_IDisposable) {
            puVar18 = &pIVar6[(long)*(int *)((long)pIVar6[0xb].data + lVar27 + 8) + 0x13].bits;
            goto label_044cf9e3;
          }
          lVar27 = lVar27 + 0x10;
        } while ((ulong)*(ushort *)&pIVar6[0x12].field_0xe << 4 != lVar27);
      }
      puVar18 = (uint *)il2cpp_runtime_helper_02300d20(ppIVar16,TypeInfo_IDisposable,0);
label_044cf9e3:
      (**(code **)puVar18)(ppIVar16,*(undefined8 *)(puVar18 + 2));
    }
    if (lVar20 == 0) {
      if (iVar15 == 0) goto label_044cfe85;
      if (iVar15 != 0x11) {
        return;
      }
      *(undefined4 *)&pMVar25->methodPointer = 0xfffffffe;
      pIVar7 = pMVar25->virtualMethodPointer;
      if (pIVar7 == (Il2CppMethodPointer)0x0) {
        pMVar25->name = (char *)pAVar19;
        il2cpp_runtime_helper_022b4080(&pMVar25->name,pAVar19);
        return;
      }
      if ((*(byte *)(*(long *)(MethodInfo_Void_SetResult + 0x20) + 0x135) & 1) == 0) {
        lVar20 = il2cpp_runtime_helper_023009c0();
        lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
        if ((*(byte *)(lVar20 + 0x135) & 1) != 0) goto label_044cfa4f;
label_044cfa74:
        lVar20 = il2cpp_runtime_helper_023009c0();
        lVar27 = *(long *)pIVar7;
        uVar3 = *(ushort *)(lVar27 + 0x12e);
      }
      else {
        lVar20 = *(long *)(*(long *)(*(long *)(MethodInfo_Void_SetResult + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) goto label_044cfa74;
label_044cfa4f:
        lVar27 = *(long *)pIVar7;
        uVar3 = *(ushort *)(lVar27 + 0x12e);
      }
      if ((ulong)uVar3 == 0) goto label_044cfaaf;
      lVar28 = 0;
      break;
    }
label_044cfb03:
    il2cpp_runtime_helper_022fefe0(lVar20);
label_044cfb0b:
    il2cpp_runtime_helper_022b2c90();
label_044cfb10:
    il2cpp_runtime_helper_022b2c90();
label_044cfb15:
    il2cpp_runtime_helper_022b2c90();
label_044cfb1a:
    il2cpp_runtime_helper_022b2c90();
label_044cfb1f:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0();
label_044cfb2c:
    il2cpp_runtime_helper_022b2c90();
label_044cfb31:
    il2cpp_runtime_helper_022b2c90();
label_044cfb36:
    il2cpp_runtime_helper_022b2c90();
label_044cfb3b:
    in_stack_ffffffffffffff10 = 0;
    il2cpp_runtime_helper_022b2c90();
label_044cfb47:
    il2cpp_runtime_helper_022b2c90();
label_044cfb4c:
    auVar30 = il2cpp_runtime_helper_022b2c90();
    if (auVar30._8_4_ != 1) goto label_044cfdac;
    plVar24 = (long *)__cxa_begin_catch();
    lVar20 = *plVar24;
    __cxa_end_catch();
    iVar15 = 0;
    pAVar19 = (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
    in_stack_ffffffffffffff18 = method;
    in_stack_ffffffffffffff20 = iVar29;
    pMVar25 = method;
    iVar9 = iVar29;
  } while( true );
  while (lVar28 = lVar28 + 0x10, (ulong)uVar3 * 0x10 != lVar28) {
    if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar28) == lVar20) {
      puVar21 = (undefined8 *)
                (lVar27 + (long)(*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar28) + 2) * 0x10 + 0x138);
      goto label_044cfaed;
    }
  }
label_044cfaaf:
  puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar7,lVar20,2);
label_044cfaed:
  (*(code *)*puVar21)(pIVar7,pAVar19,puVar21[1]);
  return;
label_044cfdac:
  pMVar25 = method;
  if ((iVar29 < 0) && (ppIVar16 = method->parameters, ppIVar16 != (Il2CppType **)0x0)) {
    pIVar6 = *ppIVar16;
    if ((ulong)*(ushort *)&pIVar6[0x12].field_0xe != 0) {
      lVar20 = 0;
      do {
        if (*(long *)((long)pIVar6[0xb].data + lVar20) == TypeInfo_IDisposable) {
          puVar18 = &pIVar6[(long)*(int *)((long)pIVar6[0xb].data + lVar20 + 8) + 0x13].bits;
          goto label_044cfe17;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)*(ushort *)&pIVar6[0x12].field_0xe << 4 != lVar20);
    }
    puVar18 = (uint *)il2cpp_runtime_helper_02300d20(ppIVar16,TypeInfo_IDisposable,0);
    pMVar25 = method;
label_044cfe17:
    (**(code **)puVar18)(ppIVar16,*(undefined8 *)(puVar18 + 2));
  }
  if (auVar30._8_4_ != 1) {
    _Unwind_Resume(auVar30._0_8_);
  }
  puVar21 = (undefined8 *)__cxa_begin_catch(auVar30._0_8_);
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar12 = il2cpp_runtime_helper_0233e000(uVar22,*(undefined8 *)*puVar21);
  if (cVar12 == '\0') {
    puVar23 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar23 = *puVar21;
    __cxa_throw(puVar23,&PTR_PTR_05215060,0);
  }
  local_98[(in_stack_ffffffffffffff10 & 0xffffffff) + 1] =
       (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)*puVar21;
  local_80 = (int)in_stack_ffffffffffffff10 + 1;
  in_stack_ffffffffffffff10 = (ulong)local_80;
  __cxa_end_catch();
label_044cfe85:
  pSVar8 = local_98[in_stack_ffffffffffffff10 & 0xffffffff];
  *(undefined4 *)&pMVar25->methodPointer = 0xfffffffe;
  lVar20 = il2cpp_runtime_helper_023445d0();
  pIVar7 = pMVar25->virtualMethodPointer;
  if (pIVar7 == (Il2CppMethodPointer)0x0) {
    pMVar25->invoker_method = (InvokerMethod)pSVar8;
    il2cpp_runtime_helper_022b4080(&pMVar25->invoker_method,pSVar8);
    return;
  }
  if ((*(byte *)(*(long *)(lVar20 + 0x20) + 0x135) & 1) == 0) {
    lVar20 = il2cpp_runtime_helper_023009c0();
    lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
    bVar2 = *(byte *)(lVar20 + 0x135);
  }
  else {
    lVar20 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 8);
    bVar2 = *(byte *)(lVar20 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar20 = il2cpp_runtime_helper_023009c0();
    lVar27 = *(long *)pIVar7;
    uVar3 = *(ushort *)(lVar27 + 0x12e);
  }
  else {
    lVar27 = *(long *)pIVar7;
    uVar3 = *(ushort *)(lVar27 + 0x12e);
  }
  if ((ulong)uVar3 != 0) {
    lVar28 = 0;
    do {
      if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar28) == lVar20) {
        puVar21 = (undefined8 *)
                  (lVar27 + (long)(*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar28) + 3) * 0x10 + 0x138);
        goto label_044cff7a;
      }
      lVar28 = lVar28 + 0x10;
    } while ((ulong)uVar3 * 0x10 != lVar28);
  }
  puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar7,lVar20,3);
label_044cff7a:
  (*(code *)*puVar21)(pIVar7,pSVar8,puVar21[1]);
  return;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$SetStateMachine
// il2cpp: void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__SetStateMachine (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x44d00a0

void ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__SetStateMachine
               (ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (g_data_057aeb1f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetStateMachine);
    g_data_057aeb1f = '\x01';
  }
  return;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$SendAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync (ApplicationManagers_Api_AottgUnityWebRequestTransport_o* __this, ApplicationManagers_Api_AottgApiTransportRequest_o* request, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
// 0x44cf020

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
  
  if (g_data_057aeb1c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AsyncUniTaskMethodBuilder_1_ApplicationManagers_Api_Aott);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgUnityWebRequestTransport_SendAsync_d__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_ApplicationManagers_Api_AottgApiTransportRespo);
    g_data_057aeb1c = '\x01';
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
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff70,0);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff88,request);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff90,0);
  uVar1 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgUnityWebRequestTransport_SendAsync_d__0 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this_00.fields._4_4_ = uVar2;
  __this_00.fields.__1__state = uVar1;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_T__o *)pIVar3;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar4;
  __this_00.fields.__t__builder.fields.result = (ApplicationManagers_Api_AottgApiTransportResponse_o *)pcVar5;
  __this_00.fields.request = request;
  __this_00.fields.cancellationToken.fields._source = cancellationToken.fields._source;
  __this_00.fields._unityRequest_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)ppIVar6;
  __this_00.fields.__u__1.fields.task.fields.source =
       (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)_Var7.rgctx_data;
  __this_00.fields.__u__1.fields.task.fields.result = _Var8.genericMethod;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = uVar9;
  ApplicationManagers_Api_AottgUnityWebRequestTransport__SendAsync_d__0__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff68);
  il2cpp_runtime_helper_02f6cd90(&local_40,&stack0xffffffffffffff70,MethodInfo_UniTask_1_ApplicationManagers_Api_AottgApiTransportRespo);
  *(undefined8 *)&(__return_storage_ptr__->fields).token = local_30;
  (__return_storage_ptr__->fields).source = local_40;
  (__return_storage_ptr__->fields).result = pAStack_38;
  return __return_storage_ptr__;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$BuildResponse
// il2cpp: ApplicationManagers_Api_AottgApiTransportResponse_o* ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse (UnityEngine_Networking_UnityWebRequest_o* unityRequest, System_String_o* textOverride, System_String_o* errorOverride, System_Nullable_long__o statusCodeOverride, const MethodInfo* method);
// 0x44cf130

ApplicationManagers_Api_AottgApiTransportResponse_o *
ApplicationManagers_Api_AottgUnityWebRequestTransport__BuildResponse
          (UnityEngine_Networking_UnityWebRequest_o *unityRequest,System_String_o *textOverride,
          System_String_o *errorOverride,System_Nullable_long__o statusCodeOverride,MethodInfo *method)

{
  int32_t iVar1;
  ApplicationManagers_Api_AottgApiTransportResponse_o *__this;
  int64_t iVar2;
  UnityEngine_Networking_DownloadHandler_o *pUVar3;
  int iVar4;
  ApplicationManagers_Api_AottgApiTransportResponse_o *pAVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  char local_34;
  
  if (g_data_057aeb1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiTransportResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int64_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057aeb1d = '\x01';
  }
  __this = (ApplicationManagers_Api_AottgApiTransportResponse_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiTransportResponse);
  pAVar5 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  iVar4 = (int)pAVar5;
  if (unityRequest != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    pUVar6 = unityRequest;
    iVar1 = UnityEngine_Networking_UnityWebRequest__get_result(unityRequest,(MethodInfo *)0x0);
    iVar4 = (int)pUVar6;
    if (__this != (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0) {
      iVar4 = 0;
      if (iVar1 - 2U < 3) {
        iVar4 = iVar1 + -1;
      }
      (__this->fields).Result = iVar4;
      local_34 = (char)statusCodeOverride.fields.hasValue;
      if (local_34 == '\0') {
        iVar2 = UnityEngine_Networking_UnityWebRequest__get_responseCode(unityRequest,(MethodInfo *)0x0);
        (__this->fields).StatusCode = iVar2;
      }
      else {
        (__this->fields).StatusCode = statusCodeOverride.fields.value;
      }
      if (textOverride == (System_String_o *)0x0) {
        pUVar3 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(unityRequest,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
          textOverride = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pUVar6 = unityRequest;
          pUVar3 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(unityRequest,(MethodInfo *)0x0)
          ;
          iVar4 = (int)pUVar6;
          if (pUVar3 == (UnityEngine_Networking_DownloadHandler_o *)0x0) goto label_044cf27c;
          textOverride = UnityEngine_Networking_DownloadHandler__get_text(pUVar3,(MethodInfo *)0x0);
        }
      }
      (__this->fields).Text = textOverride;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Text);
      if (errorOverride == (System_String_o *)0x0) {
        errorOverride = UnityEngine_Networking_UnityWebRequest__get_error(unityRequest,(MethodInfo *)0x0);
      }
      (__this->fields).Error = errorOverride;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Error,errorOverride);
      return __this;
    }
  }
label_044cf27c:
  il2cpp_runtime_helper_022b2c90();
  if (iVar4 - 2U < 3) {
    return (ApplicationManagers_Api_AottgApiTransportResponse_o *)(ulong)(iVar4 - 1);
  }
  return (ApplicationManagers_Api_AottgApiTransportResponse_o *)0x0;
}


// ApplicationManagers.Api.AottgUnityWebRequestTransport$$ConvertResult
// il2cpp: int32_t ApplicationManagers_Api_AottgUnityWebRequestTransport__ConvertResult (int32_t result, const MethodInfo* method);
// 0x44cf290

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
// 0x44cd1b0

void ApplicationManagers_Api_AottgUnityWebRequestTransport___ctor
               (ApplicationManagers_Api_AottgUnityWebRequestTransport_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


