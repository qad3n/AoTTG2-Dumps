// Type: ApplicationManagers.Changelog.AottgChangelogService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogService.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogService.UnitKey$$.cctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_UnitKey___cctor (const MethodInfo* method);
// 0x44cba90

void ApplicationManagers_Changelog_AottgChangelogService_UnitKey___cctor(MethodInfo *method)

{
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_ListKey___ctor (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t page, int32_t pageSize, const MethodInfo* method);
// 0x44cb010

void ApplicationManagers_Changelog_AottgChangelogService_ListKey___ctor
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this,int32_t page,
               int32_t pageSize,MethodInfo *method)

{
  *(int32_t *)__this.fields = page;
  *(int32_t *)((long)__this.fields + 4) = pageSize;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$get_Page
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_Page (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, const MethodInfo* method);
// 0x44cbaa0

int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_Page
                  (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this,MethodInfo *method)

{
  return *(int32_t *)__this.fields;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$set_Page
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_Page (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t value, const MethodInfo* method);
// 0x44cbab0

void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_Page
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this,int32_t value,
               MethodInfo *method)

{
  *(int32_t *)__this.fields = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$get_PageSize
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_PageSize (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, const MethodInfo* method);
// 0x44cbac0

int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_PageSize
                  (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this,MethodInfo *method)

{
  return *(int32_t *)((long)__this.fields + 4);
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$set_PageSize
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_PageSize (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t value, const MethodInfo* method);
// 0x44cbad0

void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_PageSize
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this,int32_t value,
               MethodInfo *method)

{
  *(int32_t *)((long)__this.fields + 4) = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass10_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x44cb230

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___ctor
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass10_0$$<GetEntry>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___GetEntry_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o* __this, ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o* result, const MethodInfo* method);
// 0x44cbae0

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___GetEntry_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o *result,MethodInfo *method)

{
  System_Action_AottgChangelogResult_ChangelogEntryResponse___o *pSVar1;
  code *vtableDispatch;
  InvokerMethod pIVar2;
  void *pvVar3;
  ApplicationManagers_Changelog_AottgChangelogService_c *pAVar4;
  Il2CppMethodPointer pIVar5;
  Il2CppType *pIVar6;
  short sVar7;
  char cVar8;
  bool_conflict bVar9;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar10;
  long lVar11;
  undefined8 *puVar12;
  ApplicationManagers_Api_AottgApiResult_o *pAVar13;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo_253CA20 *pMVar18;
  MethodInfo_253CA20 *pMVar19;
  long lVar20;
  undefined1 auVar21 [12];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  MethodInfo_253CA20_RGCTXs *pMStack_d8;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  System_String_o *pSStack_a8;
  Il2CppObject *pIStack_a0;
  Il2CppType *pIStack_98;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_90;
  MethodInfo_253CA20_RGCTXs *pMStack_88;
  InvokerMethod pIStack_80;
  MethodInfo_253CA20 *pMStack_78;
  
  if (cRam00000000057aeb02 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_ChangelogEntryResponse_Map_Change);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    cRam00000000057aeb02 = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar18 = _DAT_05599078;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,_DAT_05599078);
  if (pSVar1 != (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,pAVar10,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (cRam00000000057aeb03 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_LatestChangelogVersionResponse_Ma);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    cRam00000000057aeb03 = '\x01';
  }
  lVar11 = *(long *)&result->fields;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar19 = _DAT_05599080;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)pMVar18,_DAT_05599080);
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 0x18))
              (*(undefined8 *)(lVar11 + 0x40),pAVar10,*(undefined8 *)(lVar11 + 0x28),*(code **)(lVar11 + 0x18)
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (cRam00000000057aeb04 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_ChangelogEntryResponse_Map_Change);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    cRam00000000057aeb04 = '\x01';
  }
  pIVar2 = pMVar18->invoker_method;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar18 = _DAT_05599078;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)pMVar19,_DAT_05599078);
  if (pIVar2 != (InvokerMethod)0x0) {
    (**(code **)(pIVar2 + 0x18))
              (*(undefined8 *)(pIVar2 + 0x40),pAVar10,*(undefined8 *)(pIVar2 + 0x28),*(code **)(pIVar2 + 0x18)
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb05 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Map_P);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    g_data_057aeb05 = '\x01';
  }
  pIVar2 = pMVar19->invoker_method;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar19 = pMVar18;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)pMVar18,MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Map_P);
  if (pIVar2 != (InvokerMethod)0x0) {
    (**(code **)(pIVar2 + 0x18))
              (*(undefined8 *)(pIVar2 + 0x40),pAVar10,*(undefined8 *)(pIVar2 + 0x28),*(code **)(pIVar2 + 0x18)
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  pIStack_80 = pIVar2;
  pMStack_78 = pMVar18;
  if (g_data_057aeb06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&" response.");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb06 = '\x01';
    method_00 = extraout_RDX_00;
  }
  pIStack_a0 = (Il2CppObject *)0x0;
  pSStack_a8 = (System_String_o *)0x0;
  uStack_e8 = (Il2CppType *)0x0;
  uStack_e0 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  pMStack_d8 = (MethodInfo_253CA20_RGCTXs *)0x0;
  pIStack_98 = (Il2CppType *)0x0;
  pAStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  pMStack_88 = (MethodInfo_253CA20_RGCTXs *)0x0;
  if (*(int *)&pMVar19->methodPointer == 0) {
    pMStack_d8 = pMVar19->rgctx_data;
    uStack_e8 = pMVar19->return_type;
    uStack_e0 = (ApplicationManagers_Api_AottgApiResult_o *)pMVar19->parameters;
    pMVar19->return_type = (Il2CppType *)0x0;
    pMVar19->parameters = (Il2CppType **)0x0;
    pMVar19->rgctx_data = (MethodInfo_253CA20_RGCTXs *)0x0;
    *(undefined4 *)&pMVar19->methodPointer = 0xffffffff;
  }
  else {
    pSVar15 = (System_String_o *)pMVar19->name;
    if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_01;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)auStack_c8,pSVar15,method_00);
    pMStack_88 = uStack_b8;
    pIStack_98 = (Il2CppType *)auStack_c8._0_8_;
    pAStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)auStack_c8._8_8_;
    auStack_c8._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    auStack_c8._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    uStack_b8._0_2_ = 0;
    uStack_b8._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    uStack_b8 = pMStack_88;
    auStack_c8._0_8_ = pIStack_98;
    auStack_c8._8_8_ = pAStack_90;
    il2cpp_runtime_helper_022b4080(auStack_c8,0);
    pMStack_d8 = uStack_b8;
    uStack_e8 = (Il2CppType *)auStack_c8._0_8_;
    uStack_e0 = (ApplicationManagers_Api_AottgApiResult_o *)auStack_c8._8_8_;
    cVar8 = il2cpp_runtime_helper_02235800(&uStack_e8,MethodInfo_Boolean_get_IsCompleted);
    if (cVar8 == '\0') {
      *(undefined4 *)&pMVar19->methodPointer = 0;
      *(undefined4 *)&pMVar19->return_type = (undefined4)uStack_e8;
      *(undefined4 *)((long)&pMVar19->return_type + 4) = uStack_e8._4_4_;
      *(undefined4 *)&pMVar19->parameters = (undefined4)uStack_e0;
      *(undefined4 *)((long)&pMVar19->parameters + 4) = uStack_e0._4_4_;
      pMVar19->rgctx_data = pMStack_d8;
      il2cpp_runtime_helper_022b4080(&pMVar19->return_type,0);
      il2cpp_runtime_helper_025bd440(&pMVar19->virtualMethodPointer,&uStack_e8,pMVar19,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pIVar6 = uStack_e8;
  pAVar13 = uStack_e0;
  if (uStack_e8 != (Il2CppType *)0x0) {
    sVar7 = (short)pMStack_d8;
    lVar11 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    pvVar3 = pIVar6->data;
    if ((ulong)*(ushort *)((long)pvVar3 + 0x12e) != 0) {
      lVar20 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar3 + 0xb0) + lVar20) == lVar11) {
          puVar12 = (undefined8 *)
                    ((long)pvVar3 + (long)*(int *)(*(long *)((long)pvVar3 + 0xb0) + 8 + lVar20) * 0x10 + 0x138
                    );
          goto label_044cbfc0;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar3 + 0x12e) << 4 != lVar20);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar6,lVar11,0);
label_044cbfc0:
    pAVar13 = (ApplicationManagers_Api_AottgApiResult_o *)(*(code *)*puVar12)(pIVar6,(int)sVar7,puVar12[1]);
  }
  if (pAVar13 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    auVar21 = il2cpp_runtime_helper_022b2c90();
    if (auVar21._8_4_ != 1) {
      _Unwind_Resume(auVar21._0_8_);
    }
    puVar12 = (undefined8 *)__cxa_begin_catch(auVar21._0_8_);
    uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar8 = il2cpp_runtime_helper_0233e000(uVar16,*(undefined8 *)*puVar12);
    if (cVar8 == '\0') {
      puVar17 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar17 = *puVar12;
      __cxa_throw(puVar17,&PTR_PTR_05215060,0);
    }
    pIVar2 = (InvokerMethod)*puVar12;
    __cxa_end_catch();
    *(undefined4 *)&pMVar19->methodPointer = 0xfffffffe;
    if (g_data_057a6b78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b78 = '\x01';
    }
    pIVar5 = pMVar19->virtualMethodPointer;
    if (pIVar5 == (Il2CppMethodPointer)0x0) {
      pMVar19->invoker_method = pIVar2;
      il2cpp_runtime_helper_022b4080(&pMVar19->invoker_method,pIVar2);
    }
    else {
      lVar11 = *(long *)pIVar5;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar20) == TypeInfo_IStateMachineRunnerPromise) {
            puVar12 = (undefined8 *)
                      (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar20) + 3) * 0x10 + 0x138);
            goto label_044cc3b7;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar20);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar5,TypeInfo_IStateMachineRunnerPromise,3);
label_044cc3b7:
      (*(code *)*puVar12)(pIVar5,pIVar2,puVar12[1]);
    }
  }
  else {
    if ((char)(pAVar13->fields)._Success_k__BackingField == '\0') {
      pAVar4 = pMVar19->klass;
      if ((pAVar13->fields)._StatusCode_k__BackingField == 0x194) {
        if (pAVar4 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                              ((Il2CppObject *)0x0,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pAVar4->_1).namespaze)
                    ((pAVar4->_1).element_class,pAVar14,*(undefined8 *)&(pAVar4->_1).byval_arg.bits);
        }
      }
      else if (pAVar4 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
        pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((pAVar13->fields)._Error_k__BackingField,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
        (*(code *)(pAVar4->_1).namespaze)
                  ((pAVar4->_1).element_class,pAVar14,*(undefined8 *)&(pAVar4->_1).byval_arg.bits);
      }
    }
    else {
      pSVar15 = (pAVar13->fields)._ResponseText_k__BackingField;
      if (g_data_057aeaea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseEntry);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_ChangelogEntryResponse);
        g_data_057aeaea = '\x01';
      }
      parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Parser_ChangelogEntryResponse);
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
      bVar9 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (pSVar15,parser,&pIStack_a0,&pSStack_a8,MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
      if ((char)bVar9 == '\0') {
        pSVar15 = System_String__Concat_3af7150
                            ("AottgChangelogService: failed to parse ",(System_String_o *)pMVar19->name," response.",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
        pAVar4 = pMVar19->klass;
        if (pAVar4 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(pSStack_a8,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pAVar4->_1).namespaze)
                    ((pAVar4->_1).element_class,pAVar14,*(undefined8 *)&(pAVar4->_1).byval_arg.bits);
        }
      }
      else {
        pAVar4 = pMVar19->klass;
        if (pAVar4 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok(pIStack_a0,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pAVar4->_1).namespaze)
                    ((pAVar4->_1).element_class,pAVar14,*(undefined8 *)&(pAVar4->_1).byval_arg.bits);
        }
      }
    }
    *(undefined4 *)&pMVar19->methodPointer = 0xfffffffe;
    if (g_data_057a6b79 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b79 = '\x01';
    }
    pIVar5 = pMVar19->virtualMethodPointer;
    if (pIVar5 != (Il2CppMethodPointer)0x0) {
      lVar11 = *(long *)pIVar5;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar20) == TypeInfo_IStateMachineRunnerPromise) {
            puVar12 = (undefined8 *)
                      (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar20) + 2) * 0x10 + 0x138);
            goto label_044cc205;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar20);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar5,TypeInfo_IStateMachineRunnerPromise,2);
label_044cc205:
      (*(code *)*puVar12)(pIVar5,puVar12[1]);
    }
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass7_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x44cac20

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___ctor
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass7_0$$<GetLatestVersion>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___GetLatestVersion_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o* __this, ApplicationManagers_Api_AottgQueryResult_LatestChangelogVersionResponse__o* result, const MethodInfo* method);
// 0x44cbb70

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___GetLatestVersion_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_LatestChangelogVersionResponse__o *result,
               MethodInfo *method)

{
  System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o *pSVar1;
  code *vtableDispatch;
  InvokerMethod pIVar2;
  void *pvVar3;
  ApplicationManagers_Changelog_AottgChangelogService_c *pAVar4;
  Il2CppMethodPointer pIVar5;
  Il2CppType *pIVar6;
  short sVar7;
  char cVar8;
  bool_conflict bVar9;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar10;
  long lVar11;
  undefined8 *puVar12;
  ApplicationManagers_Api_AottgApiResult_o *pAVar13;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo_253CA20 *pMVar18;
  MethodInfo_253CA20 *result_00;
  long lVar19;
  undefined1 auVar20 [12];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  MethodInfo_253CA20_RGCTXs *pMStack_c0;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  System_String_o *pSStack_90;
  Il2CppObject *pIStack_88;
  Il2CppType *pIStack_80;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_78;
  MethodInfo_253CA20_RGCTXs *pMStack_70;
  InvokerMethod pIStack_68;
  MethodInfo_253CA20 *pMStack_60;
  
  if (cRam00000000057aeb03 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_LatestChangelogVersionResponse_Ma);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    cRam00000000057aeb03 = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar18 = _DAT_05599080;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,_DAT_05599080);
  if (pSVar1 != (System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,pAVar10,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (cRam00000000057aeb04 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_ChangelogEntryResponse_Map_Change);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    cRam00000000057aeb04 = '\x01';
  }
  lVar11 = *(long *)&result->fields;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  result_00 = _DAT_05599078;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)pMVar18,_DAT_05599078);
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 0x18))
              (*(undefined8 *)(lVar11 + 0x40),pAVar10,*(undefined8 *)(lVar11 + 0x28),*(code **)(lVar11 + 0x18)
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb05 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Map_P);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    g_data_057aeb05 = '\x01';
  }
  pIVar2 = pMVar18->invoker_method;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar18 = result_00;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)result_00,MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Map_P);
  if (pIVar2 != (InvokerMethod)0x0) {
    (**(code **)(pIVar2 + 0x18))
              (*(undefined8 *)(pIVar2 + 0x40),pAVar10,*(undefined8 *)(pIVar2 + 0x28),*(code **)(pIVar2 + 0x18)
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  pIStack_68 = pIVar2;
  pMStack_60 = result_00;
  if (g_data_057aeb06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&" response.");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb06 = '\x01';
    method_00 = extraout_RDX_00;
  }
  pIStack_88 = (Il2CppObject *)0x0;
  pSStack_90 = (System_String_o *)0x0;
  uStack_d0 = (Il2CppType *)0x0;
  uStack_c8 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  pMStack_c0 = (MethodInfo_253CA20_RGCTXs *)0x0;
  pIStack_80 = (Il2CppType *)0x0;
  pAStack_78 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  pMStack_70 = (MethodInfo_253CA20_RGCTXs *)0x0;
  if (*(int *)&pMVar18->methodPointer == 0) {
    pMStack_c0 = pMVar18->rgctx_data;
    uStack_d0 = pMVar18->return_type;
    uStack_c8 = (ApplicationManagers_Api_AottgApiResult_o *)pMVar18->parameters;
    pMVar18->return_type = (Il2CppType *)0x0;
    pMVar18->parameters = (Il2CppType **)0x0;
    pMVar18->rgctx_data = (MethodInfo_253CA20_RGCTXs *)0x0;
    *(undefined4 *)&pMVar18->methodPointer = 0xffffffff;
  }
  else {
    pSVar15 = (System_String_o *)pMVar18->name;
    if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_01;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)auStack_b0,pSVar15,method_00);
    pMStack_70 = uStack_a0;
    pIStack_80 = (Il2CppType *)auStack_b0._0_8_;
    pAStack_78 = (ApplicationManagers_Api_AottgApiResult_o *)auStack_b0._8_8_;
    auStack_b0._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    auStack_b0._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    uStack_a0._0_2_ = 0;
    uStack_a0._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    uStack_a0 = pMStack_70;
    auStack_b0._0_8_ = pIStack_80;
    auStack_b0._8_8_ = pAStack_78;
    il2cpp_runtime_helper_022b4080(auStack_b0,0);
    pMStack_c0 = uStack_a0;
    uStack_d0 = (Il2CppType *)auStack_b0._0_8_;
    uStack_c8 = (ApplicationManagers_Api_AottgApiResult_o *)auStack_b0._8_8_;
    cVar8 = il2cpp_runtime_helper_02235800(&uStack_d0,MethodInfo_Boolean_get_IsCompleted);
    if (cVar8 == '\0') {
      *(undefined4 *)&pMVar18->methodPointer = 0;
      *(undefined4 *)&pMVar18->return_type = (undefined4)uStack_d0;
      *(undefined4 *)((long)&pMVar18->return_type + 4) = uStack_d0._4_4_;
      *(undefined4 *)&pMVar18->parameters = (undefined4)uStack_c8;
      *(undefined4 *)((long)&pMVar18->parameters + 4) = uStack_c8._4_4_;
      pMVar18->rgctx_data = pMStack_c0;
      il2cpp_runtime_helper_022b4080(&pMVar18->return_type,0);
      il2cpp_runtime_helper_025bd440(&pMVar18->virtualMethodPointer,&uStack_d0,pMVar18,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pIVar6 = uStack_d0;
  pAVar13 = uStack_c8;
  if (uStack_d0 != (Il2CppType *)0x0) {
    sVar7 = (short)pMStack_c0;
    lVar11 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    pvVar3 = pIVar6->data;
    if ((ulong)*(ushort *)((long)pvVar3 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar3 + 0xb0) + lVar19) == lVar11) {
          puVar12 = (undefined8 *)
                    ((long)pvVar3 + (long)*(int *)(*(long *)((long)pvVar3 + 0xb0) + 8 + lVar19) * 0x10 + 0x138
                    );
          goto label_044cbfc0;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar3 + 0x12e) << 4 != lVar19);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar6,lVar11,0);
label_044cbfc0:
    pAVar13 = (ApplicationManagers_Api_AottgApiResult_o *)(*(code *)*puVar12)(pIVar6,(int)sVar7,puVar12[1]);
  }
  if (pAVar13 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    auVar20 = il2cpp_runtime_helper_022b2c90();
    if (auVar20._8_4_ != 1) {
      _Unwind_Resume(auVar20._0_8_);
    }
    puVar12 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
    uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar8 = il2cpp_runtime_helper_0233e000(uVar16,*(undefined8 *)*puVar12);
    if (cVar8 == '\0') {
      puVar17 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar17 = *puVar12;
      __cxa_throw(puVar17,&PTR_PTR_05215060,0);
    }
    pIVar2 = (InvokerMethod)*puVar12;
    __cxa_end_catch();
    *(undefined4 *)&pMVar18->methodPointer = 0xfffffffe;
    if (g_data_057a6b78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b78 = '\x01';
    }
    pIVar5 = pMVar18->virtualMethodPointer;
    if (pIVar5 == (Il2CppMethodPointer)0x0) {
      pMVar18->invoker_method = pIVar2;
      il2cpp_runtime_helper_022b4080(&pMVar18->invoker_method,pIVar2);
    }
    else {
      lVar11 = *(long *)pIVar5;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar19 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar19) == TypeInfo_IStateMachineRunnerPromise) {
            puVar12 = (undefined8 *)
                      (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar19) + 3) * 0x10 + 0x138);
            goto label_044cc3b7;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar19);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar5,TypeInfo_IStateMachineRunnerPromise,3);
label_044cc3b7:
      (*(code *)*puVar12)(pIVar5,pIVar2,puVar12[1]);
    }
  }
  else {
    if ((char)(pAVar13->fields)._Success_k__BackingField == '\0') {
      pAVar4 = pMVar18->klass;
      if ((pAVar13->fields)._StatusCode_k__BackingField == 0x194) {
        if (pAVar4 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                              ((Il2CppObject *)0x0,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pAVar4->_1).namespaze)
                    ((pAVar4->_1).element_class,pAVar14,*(undefined8 *)&(pAVar4->_1).byval_arg.bits);
        }
      }
      else if (pAVar4 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
        pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((pAVar13->fields)._Error_k__BackingField,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
        (*(code *)(pAVar4->_1).namespaze)
                  ((pAVar4->_1).element_class,pAVar14,*(undefined8 *)&(pAVar4->_1).byval_arg.bits);
      }
    }
    else {
      pSVar15 = (pAVar13->fields)._ResponseText_k__BackingField;
      if (g_data_057aeaea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseEntry);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_ChangelogEntryResponse);
        g_data_057aeaea = '\x01';
      }
      parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Parser_ChangelogEntryResponse);
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
      bVar9 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (pSVar15,parser,&pIStack_88,&pSStack_90,MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
      if ((char)bVar9 == '\0') {
        pSVar15 = System_String__Concat_3af7150
                            ("AottgChangelogService: failed to parse ",(System_String_o *)pMVar18->name," response.",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
        pAVar4 = pMVar18->klass;
        if (pAVar4 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(pSStack_90,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pAVar4->_1).namespaze)
                    ((pAVar4->_1).element_class,pAVar14,*(undefined8 *)&(pAVar4->_1).byval_arg.bits);
        }
      }
      else {
        pAVar4 = pMVar18->klass;
        if (pAVar4 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok(pIStack_88,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pAVar4->_1).namespaze)
                    ((pAVar4->_1).element_class,pAVar14,*(undefined8 *)&(pAVar4->_1).byval_arg.bits);
        }
      }
    }
    *(undefined4 *)&pMVar18->methodPointer = 0xfffffffe;
    if (g_data_057a6b79 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b79 = '\x01';
    }
    pIVar5 = pMVar18->virtualMethodPointer;
    if (pIVar5 != (Il2CppMethodPointer)0x0) {
      lVar11 = *(long *)pIVar5;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar19 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar19) == TypeInfo_IStateMachineRunnerPromise) {
            puVar12 = (undefined8 *)
                      (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar19) + 2) * 0x10 + 0x138);
            goto label_044cc205;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar19);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar5,TypeInfo_IStateMachineRunnerPromise,2);
label_044cc205:
      (*(code *)*puVar12)(pIVar5,puVar12[1]);
    }
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass8_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x44cadd0

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___ctor
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass8_0$$<GetLatest>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___GetLatest_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o* __this, ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o* result, const MethodInfo* method);
// 0x44cbc00

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___GetLatest_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o *result,MethodInfo *method)

{
  System_Action_AottgChangelogResult_ChangelogEntryResponse___o *pSVar1;
  code *vtableDispatch;
  void *pvVar2;
  ApplicationManagers_Changelog_AottgChangelogService_c *pAVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppType *pIVar6;
  short sVar7;
  char cVar8;
  bool_conflict bVar9;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar10;
  long lVar11;
  undefined8 *puVar12;
  ApplicationManagers_Api_AottgApiResult_o *pAVar13;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo_253CA20 *result_00;
  MethodInfo_253CA20 *pMVar18;
  long lVar19;
  undefined1 auVar20 [12];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  MethodInfo_253CA20_RGCTXs *pMStack_a8;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  System_String_o *pSStack_78;
  Il2CppObject *pIStack_70;
  Il2CppType *pIStack_68;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_60;
  MethodInfo_253CA20_RGCTXs *pMStack_58;
  long lStack_50;
  MethodInfo_253CA20 *pMStack_48;
  
  if (cRam00000000057aeb04 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_ChangelogEntryResponse_Map_Change);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    cRam00000000057aeb04 = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  result_00 = _DAT_05599078;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,_DAT_05599078);
  if (pSVar1 != (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,pAVar10,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb05 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Map_P);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    g_data_057aeb05 = '\x01';
  }
  lVar11 = *(long *)&result->fields;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar18 = result_00;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)result_00,MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Map_P);
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 0x18))
              (*(undefined8 *)(lVar11 + 0x40),pAVar10,*(undefined8 *)(lVar11 + 0x28),*(code **)(lVar11 + 0x18)
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  lStack_50 = lVar11;
  pMStack_48 = result_00;
  if (g_data_057aeb06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&" response.");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb06 = '\x01';
    method_00 = extraout_RDX_00;
  }
  pIStack_70 = (Il2CppObject *)0x0;
  pSStack_78 = (System_String_o *)0x0;
  uStack_b8 = (Il2CppType *)0x0;
  uStack_b0 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  pMStack_a8 = (MethodInfo_253CA20_RGCTXs *)0x0;
  pIStack_68 = (Il2CppType *)0x0;
  pAStack_60 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  pMStack_58 = (MethodInfo_253CA20_RGCTXs *)0x0;
  if (*(int *)&pMVar18->methodPointer == 0) {
    pMStack_a8 = pMVar18->rgctx_data;
    uStack_b8 = pMVar18->return_type;
    uStack_b0 = (ApplicationManagers_Api_AottgApiResult_o *)pMVar18->parameters;
    pMVar18->return_type = (Il2CppType *)0x0;
    pMVar18->parameters = (Il2CppType **)0x0;
    pMVar18->rgctx_data = (MethodInfo_253CA20_RGCTXs *)0x0;
    *(undefined4 *)&pMVar18->methodPointer = 0xffffffff;
  }
  else {
    pSVar15 = (System_String_o *)pMVar18->name;
    if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_01;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)auStack_98,pSVar15,method_00);
    pMStack_58 = uStack_88;
    pIStack_68 = (Il2CppType *)auStack_98._0_8_;
    pAStack_60 = (ApplicationManagers_Api_AottgApiResult_o *)auStack_98._8_8_;
    auStack_98._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    auStack_98._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    uStack_88._0_2_ = 0;
    uStack_88._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    uStack_88 = pMStack_58;
    auStack_98._0_8_ = pIStack_68;
    auStack_98._8_8_ = pAStack_60;
    il2cpp_runtime_helper_022b4080(auStack_98,0);
    pMStack_a8 = uStack_88;
    uStack_b8 = (Il2CppType *)auStack_98._0_8_;
    uStack_b0 = (ApplicationManagers_Api_AottgApiResult_o *)auStack_98._8_8_;
    cVar8 = il2cpp_runtime_helper_02235800(&uStack_b8,MethodInfo_Boolean_get_IsCompleted);
    if (cVar8 == '\0') {
      *(undefined4 *)&pMVar18->methodPointer = 0;
      *(undefined4 *)&pMVar18->return_type = (undefined4)uStack_b8;
      *(undefined4 *)((long)&pMVar18->return_type + 4) = uStack_b8._4_4_;
      *(undefined4 *)&pMVar18->parameters = (undefined4)uStack_b0;
      *(undefined4 *)((long)&pMVar18->parameters + 4) = uStack_b0._4_4_;
      pMVar18->rgctx_data = pMStack_a8;
      il2cpp_runtime_helper_022b4080(&pMVar18->return_type,0);
      il2cpp_runtime_helper_025bd440(&pMVar18->virtualMethodPointer,&uStack_b8,pMVar18,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pIVar6 = uStack_b8;
  pAVar13 = uStack_b0;
  if (uStack_b8 != (Il2CppType *)0x0) {
    sVar7 = (short)pMStack_a8;
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
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar19) == lVar11) {
          puVar12 = (undefined8 *)
                    ((long)pvVar2 + (long)*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar19) * 0x10 + 0x138
                    );
          goto label_044cbfc0;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar19);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar6,lVar11,0);
label_044cbfc0:
    pAVar13 = (ApplicationManagers_Api_AottgApiResult_o *)(*(code *)*puVar12)(pIVar6,(int)sVar7,puVar12[1]);
  }
  if (pAVar13 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    auVar20 = il2cpp_runtime_helper_022b2c90();
    if (auVar20._8_4_ != 1) {
      _Unwind_Resume(auVar20._0_8_);
    }
    puVar12 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
    uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar8 = il2cpp_runtime_helper_0233e000(uVar16,*(undefined8 *)*puVar12);
    if (cVar8 == '\0') {
      puVar17 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar17 = *puVar12;
      __cxa_throw(puVar17,&PTR_PTR_05215060,0);
    }
    pIVar5 = (InvokerMethod)*puVar12;
    __cxa_end_catch();
    *(undefined4 *)&pMVar18->methodPointer = 0xfffffffe;
    if (g_data_057a6b78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b78 = '\x01';
    }
    pIVar4 = pMVar18->virtualMethodPointer;
    if (pIVar4 == (Il2CppMethodPointer)0x0) {
      pMVar18->invoker_method = pIVar5;
      il2cpp_runtime_helper_022b4080(&pMVar18->invoker_method,pIVar5);
    }
    else {
      lVar11 = *(long *)pIVar4;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar19 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar19) == TypeInfo_IStateMachineRunnerPromise) {
            puVar12 = (undefined8 *)
                      (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar19) + 3) * 0x10 + 0x138);
            goto label_044cc3b7;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar19);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar4,TypeInfo_IStateMachineRunnerPromise,3);
label_044cc3b7:
      (*(code *)*puVar12)(pIVar4,pIVar5,puVar12[1]);
    }
  }
  else {
    if ((char)(pAVar13->fields)._Success_k__BackingField == '\0') {
      pAVar3 = pMVar18->klass;
      if ((pAVar13->fields)._StatusCode_k__BackingField == 0x194) {
        if (pAVar3 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                              ((Il2CppObject *)0x0,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pAVar3->_1).namespaze)
                    ((pAVar3->_1).element_class,pAVar14,*(undefined8 *)&(pAVar3->_1).byval_arg.bits);
        }
      }
      else if (pAVar3 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
        pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((pAVar13->fields)._Error_k__BackingField,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
        (*(code *)(pAVar3->_1).namespaze)
                  ((pAVar3->_1).element_class,pAVar14,*(undefined8 *)&(pAVar3->_1).byval_arg.bits);
      }
    }
    else {
      pSVar15 = (pAVar13->fields)._ResponseText_k__BackingField;
      if (g_data_057aeaea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseEntry);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_ChangelogEntryResponse);
        g_data_057aeaea = '\x01';
      }
      parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Parser_ChangelogEntryResponse);
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
      bVar9 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (pSVar15,parser,&pIStack_70,&pSStack_78,MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
      if ((char)bVar9 == '\0') {
        pSVar15 = System_String__Concat_3af7150
                            ("AottgChangelogService: failed to parse ",(System_String_o *)pMVar18->name," response.",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
        pAVar3 = pMVar18->klass;
        if (pAVar3 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(pSStack_78,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pAVar3->_1).namespaze)
                    ((pAVar3->_1).element_class,pAVar14,*(undefined8 *)&(pAVar3->_1).byval_arg.bits);
        }
      }
      else {
        pAVar3 = pMVar18->klass;
        if (pAVar3 != (ApplicationManagers_Changelog_AottgChangelogService_c *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok(pIStack_70,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pAVar3->_1).namespaze)
                    ((pAVar3->_1).element_class,pAVar14,*(undefined8 *)&(pAVar3->_1).byval_arg.bits);
        }
      }
    }
    *(undefined4 *)&pMVar18->methodPointer = 0xfffffffe;
    if (g_data_057a6b79 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b79 = '\x01';
    }
    pIVar4 = pMVar18->virtualMethodPointer;
    if (pIVar4 != (Il2CppMethodPointer)0x0) {
      lVar11 = *(long *)pIVar4;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar19 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar19) == TypeInfo_IStateMachineRunnerPromise) {
            puVar12 = (undefined8 *)
                      (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar19) + 2) * 0x10 + 0x138);
            goto label_044cc205;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar19);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar4,TypeInfo_IStateMachineRunnerPromise,2);
label_044cc205:
      (*(code *)*puVar12)(pIVar4,puVar12[1]);
    }
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass9_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x44cb000

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___ctor
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass9_0$$<GetList>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___GetList_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o* __this, ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__o* result, const MethodInfo* method);
// 0x44cbc90

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___GetList_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__o *result,
               MethodInfo *method)

{
  ushort uVar1;
  System_Action_AottgChangelogResult_PublicChangelogListResponse___o *pSVar2;
  code *vtableDispatch;
  ApplicationManagers_Changelog_PublicChangelogListResponse_o *path;
  Cysharp_Threading_Tasks_IUniTaskSource_T__c *pCVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  long *plVar5;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar6;
  short sVar7;
  char cVar8;
  bool_conflict bVar9;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar10;
  long lVar11;
  VirtualInvokeData *pVVar12;
  ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__c *pAVar13;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar14;
  System_String_o *pSVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__o *pAVar19;
  long lVar20;
  undefined1 auVar21 [12];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  void *pvStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  System_String_o *pSStack_60;
  Il2CppObject *pIStack_58;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCStack_50;
  ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__c *pAStack_48;
  void *pvStack_40;
  System_Action_AottgChangelogResult_PublicChangelogListResponse___o *pSStack_38;
  ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__o *pAStack_30;
  
  if (g_data_057aeb05 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Map_P);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    g_data_057aeb05 = '\x01';
  }
  pSVar2 = (__this->fields).onResult;
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar19 = result;
  pAVar10 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                      ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Map_P);
  if (pSVar2 != (System_Action_AottgChangelogResult_PublicChangelogListResponse___o *)0x0) {
    vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar2->fields).method_code,pAVar10,(pSVar2->fields).method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  pSStack_38 = pSVar2;
  pAStack_30 = result;
  if (g_data_057aeb06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&" response.");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb06 = '\x01';
    method_00 = extraout_RDX_00;
  }
  pIStack_58 = (Il2CppObject *)0x0;
  pSStack_60 = (System_String_o *)0x0;
  uStack_a0 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  uStack_98 = (ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__c *)0x0;
  pvStack_90 = (void *)0x0;
  pCStack_50 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  pAStack_48 = (ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__c *)0x0;
  pvStack_40 = (void *)0x0;
  if (*(int *)&pAVar19->klass == 0) {
    pvStack_90 = pAVar19[1].monitor;
    uStack_a0 = *(Cysharp_Threading_Tasks_IUniTaskSource_T__o **)
                 &(pAVar19->fields)._IsFromCache_k__BackingField;
    uStack_98 = pAVar19[1].klass;
    *(undefined8 *)&(pAVar19->fields)._IsFromCache_k__BackingField = 0;
    pAVar19[1].klass = (ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__c *)0x0;
    pAVar19[1].monitor = (void *)0x0;
    *(undefined4 *)&pAVar19->klass = 0xffffffff;
  }
  else {
    path = (pAVar19->fields)._Value_k__BackingField;
    if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_01;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)auStack_80,(System_String_o *)path,
               method_00);
    pvStack_40 = uStack_70;
    pCStack_50 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)auStack_80._0_8_;
    pAStack_48 = (ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__c *)auStack_80._8_8_;
    auStack_80._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    auStack_80._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    uStack_70._0_2_ = 0;
    uStack_70._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    uStack_70 = pvStack_40;
    auStack_80._0_8_ = pCStack_50;
    auStack_80._8_8_ = pAStack_48;
    il2cpp_runtime_helper_022b4080(auStack_80,0);
    pvStack_90 = uStack_70;
    uStack_a0 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)auStack_80._0_8_;
    uStack_98 = (ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__c *)auStack_80._8_8_;
    cVar8 = il2cpp_runtime_helper_02235800(&uStack_a0,MethodInfo_Boolean_get_IsCompleted);
    if (cVar8 == '\0') {
      *(undefined4 *)&pAVar19->klass = 0;
      (pAVar19->fields)._IsFromCache_k__BackingField = (bool_conflict)uStack_a0;
      *(undefined4 *)&(pAVar19->fields).field_0x1c = uStack_a0._4_4_;
      *(undefined4 *)&pAVar19[1].klass = (undefined4)uStack_98;
      *(undefined4 *)((long)&pAVar19[1].klass + 4) = uStack_98._4_4_;
      pAVar19[1].monitor = pvStack_90;
      il2cpp_runtime_helper_022b4080(&(pAVar19->fields)._IsFromCache_k__BackingField,0);
      il2cpp_runtime_helper_025bd440(&pAVar19->monitor,&uStack_a0,pAVar19,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pCVar6 = uStack_a0;
  pAVar13 = uStack_98;
  if (uStack_a0 != (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0) {
    sVar7 = (short)pvStack_90;
    lVar11 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    pCVar3 = pCVar6->klass;
    uVar1._0_1_ = (pCVar3->_2).rank;
    uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pCVar3->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar20) == lVar11) {
          pVVar12 = pCVar3->vtable + *(int *)((long)&pIVar4->offset + lVar20);
          goto label_044cbfc0;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar20);
    }
    pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pCVar6,lVar11,0);
label_044cbfc0:
    pAVar13 = (ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__c *)
              (*pVVar12->methodPtr)(pCVar6,(ulong)(uint)(int)sVar7,pVVar12->method);
  }
  if (pAVar13 == (ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__c *)0x0) {
    auVar21 = il2cpp_runtime_helper_022b2c90();
    if (auVar21._8_4_ != 1) {
      _Unwind_Resume(auVar21._0_8_);
    }
    puVar16 = (undefined8 *)__cxa_begin_catch(auVar21._0_8_);
    uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar8 = il2cpp_runtime_helper_0233e000(uVar17,*(undefined8 *)*puVar16);
    if (cVar8 == '\0') {
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
    plVar5 = pAVar19->monitor;
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)&pAVar19->fields = uVar17;
      il2cpp_runtime_helper_022b4080(&pAVar19->fields,uVar17);
    }
    else {
      lVar11 = *plVar5;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar20) == TypeInfo_IStateMachineRunnerPromise) {
            puVar16 = (undefined8 *)
                      (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar20) + 3) * 0x10 + 0x138);
            goto label_044cc3b7;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar20);
      }
      puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IStateMachineRunnerPromise,3);
label_044cc3b7:
      (*(code *)*puVar16)(plVar5,uVar17,puVar16[1]);
    }
  }
  else {
    if (*(char *)&(pAVar13->_1).name == '\0') {
      pSVar15 = (pAVar19->fields)._Error_k__BackingField;
      if ((pAVar13->_1).namespaze == (char *)0x194) {
        if (pSVar15 != (System_String_o *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                              ((Il2CppObject *)0x0,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)pSVar15[1].klass)(pSVar15[2].fields,pAVar14,pSVar15[1].fields);
        }
      }
      else if (pSVar15 != (System_String_o *)0x0) {
        pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((pAVar13->_1).this_arg.data,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
        (*(code *)pSVar15[1].klass)(pSVar15[2].fields,pAVar14,pSVar15[1].fields);
      }
    }
    else {
      pSVar15 = (pAVar13->_1).byval_arg.data;
      if (g_data_057aeaea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseEntry);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_ChangelogEntryResponse);
        g_data_057aeaea = '\x01';
      }
      parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Parser_ChangelogEntryResponse);
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
      bVar9 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (pSVar15,parser,&pIStack_58,&pSStack_60,MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
      if ((char)bVar9 == '\0') {
        pSVar15 = System_String__Concat_3af7150
                            ("AottgChangelogService: failed to parse ",(System_String_o *)(pAVar19->fields)._Value_k__BackingField,
                             " response.",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
        pSVar15 = (pAVar19->fields)._Error_k__BackingField;
        if (pSVar15 != (System_String_o *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(pSStack_60,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)pSVar15[1].klass)(pSVar15[2].fields,pAVar14,pSVar15[1].fields);
        }
      }
      else {
        pSVar15 = (pAVar19->fields)._Error_k__BackingField;
        if (pSVar15 != (System_String_o *)0x0) {
          pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok(pIStack_58,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)pSVar15[1].klass)(pSVar15[2].fields,pAVar14,pSVar15[1].fields);
        }
      }
    }
    *(undefined4 *)&pAVar19->klass = 0xfffffffe;
    if (g_data_057a6b79 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b79 = '\x01';
    }
    plVar5 = pAVar19->monitor;
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar20) == TypeInfo_IStateMachineRunnerPromise) {
            puVar16 = (undefined8 *)
                      (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar20) + 2) * 0x10 + 0x138);
            goto label_044cc205;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar20);
      }
      puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IStateMachineRunnerPromise,2);
label_044cc205:
      (*(code *)*puVar16)(plVar5,puVar16[1]);
    }
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchEntryAsync>d__18$$MoveNext
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__MoveNext (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this, const MethodInfo* method);
// 0x44cbd20

void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__MoveNext
               (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this,
               MethodInfo *method)

{
  void *pvVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Il2CppType *pIVar5;
  undefined2 uVar6;
  char cVar7;
  bool_conflict bVar8;
  long lVar9;
  undefined8 *puVar10;
  ApplicationManagers_Api_AottgApiResult_o *pAVar11;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar12;
  System_String_o *pSVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long lVar16;
  undefined1 auVar17 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  _union_13 local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  System_String_o *local_48;
  Il2CppObject *local_40;
  Il2CppType *local_38;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_30;
  _union_13 local_28;
  
  if (g_data_057aeb06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&" response.");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb06 = '\x01';
    in_RDX = extraout_RDX;
  }
  local_40 = (Il2CppObject *)0x0;
  local_48 = (System_String_o *)0x0;
  local_88 = (Il2CppType *)0x0;
  uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_78 = (_union_13)0x0;
  local_38 = (Il2CppType *)0x0;
  pAStack_30 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_28.rgctx_data = (Il2CppRGCTXData *)0x0;
  if (*(int *)&method->methodPointer == 0) {
    local_78 = method->field7_0x38;
    local_88 = method->return_type;
    uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)method->parameters;
    method->return_type = (Il2CppType *)0x0;
    method->parameters = (Il2CppType **)0x0;
    (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    pSVar13 = (System_String_o *)method->name;
    if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_00;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)local_68,pSVar13,in_RDX);
    local_28 = local_58;
    local_38 = (Il2CppType *)local_68._0_8_;
    pAStack_30 = (ApplicationManagers_Api_AottgApiResult_o *)local_68._8_8_;
    local_68._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_58._0_2_ = 0;
    local_58._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    local_58 = local_28;
    local_68._0_8_ = local_38;
    local_68._8_8_ = pAStack_30;
    il2cpp_runtime_helper_022b4080(local_68,0);
    local_78 = local_58;
    local_88 = (Il2CppType *)local_68._0_8_;
    uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)local_68._8_8_;
    cVar7 = il2cpp_runtime_helper_02235800(&local_88,MethodInfo_Boolean_get_IsCompleted);
    if (cVar7 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      *(undefined4 *)&method->return_type = (undefined4)local_88;
      *(undefined4 *)((long)&method->return_type + 4) = local_88._4_4_;
      *(undefined4 *)&method->parameters = (undefined4)uStack_80;
      *(undefined4 *)((long)&method->parameters + 4) = uStack_80._4_4_;
      method->field7_0x38 = local_78;
      il2cpp_runtime_helper_022b4080(&method->return_type,0);
      il2cpp_runtime_helper_025bd440(&method->virtualMethodPointer,&local_88,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pIVar5 = local_88;
  pAVar11 = uStack_80;
  if (local_88 != (Il2CppType *)0x0) {
    uVar6 = local_78._0_2_;
    lVar9 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    pvVar1 = pIVar5->data;
    if ((ulong)*(ushort *)((long)pvVar1 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar1 + 0xb0) + lVar16) == lVar9) {
          puVar10 = (undefined8 *)
                    ((long)pvVar1 + (long)*(int *)(*(long *)((long)pvVar1 + 0xb0) + 8 + lVar16) * 0x10 + 0x138
                    );
          goto label_044cbfc0;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar1 + 0x12e) << 4 != lVar16);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar5,lVar9,0);
label_044cbfc0:
    pAVar11 = (ApplicationManagers_Api_AottgApiResult_o *)
              (*(code *)*puVar10)(pIVar5,(int)(short)uVar6,puVar10[1]);
  }
  if (pAVar11 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    auVar17 = il2cpp_runtime_helper_022b2c90();
    if (auVar17._8_4_ != 1) {
      _Unwind_Resume(auVar17._0_8_);
    }
    puVar10 = (undefined8 *)__cxa_begin_catch(auVar17._0_8_);
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar7 = il2cpp_runtime_helper_0233e000(uVar14,*(undefined8 *)*puVar10);
    if (cVar7 == '\0') {
      puVar15 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar15 = *puVar10;
      __cxa_throw(puVar15,&PTR_PTR_05215060,0);
    }
    pIVar4 = (InvokerMethod)*puVar10;
    __cxa_end_catch();
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (g_data_057a6b78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b78 = '\x01';
    }
    pIVar3 = method->virtualMethodPointer;
    if (pIVar3 == (Il2CppMethodPointer)0x0) {
      method->invoker_method = pIVar4;
      il2cpp_runtime_helper_022b4080(&method->invoker_method,pIVar4);
    }
    else {
      lVar9 = *(long *)pIVar3;
      if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar16) == TypeInfo_IStateMachineRunnerPromise) {
            puVar10 = (undefined8 *)
                      (lVar9 + (long)(*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar16) + 3) * 0x10 + 0x138);
            goto label_044cc3b7;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar3,TypeInfo_IStateMachineRunnerPromise,3);
label_044cc3b7:
      (*(code *)*puVar10)(pIVar3,pIVar4,puVar10[1]);
    }
  }
  else {
    if ((char)(pAVar11->fields)._Success_k__BackingField == '\0') {
      pIVar2 = method->klass;
      if ((pAVar11->fields)._StatusCode_k__BackingField == 0x194) {
        if (pIVar2 != (Il2CppClass *)0x0) {
          pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                              ((Il2CppObject *)0x0,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pIVar2->_1).namespaze)
                    ((pIVar2->_1).element_class,pAVar12,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
        }
      }
      else if (pIVar2 != (Il2CppClass *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((pAVar11->fields)._Error_k__BackingField,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
        (*(code *)(pIVar2->_1).namespaze)
                  ((pIVar2->_1).element_class,pAVar12,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
      }
    }
    else {
      pSVar13 = (pAVar11->fields)._ResponseText_k__BackingField;
      if (g_data_057aeaea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseEntry);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_ChangelogEntryResponse);
        g_data_057aeaea = '\x01';
      }
      parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Parser_ChangelogEntryResponse);
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
      bVar8 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (pSVar13,parser,&local_40,&local_48,MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
      if ((char)bVar8 == '\0') {
        pSVar13 = System_String__Concat_3af7150
                            ("AottgChangelogService: failed to parse ",(System_String_o *)method->name," response.",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
        pIVar2 = method->klass;
        if (pIVar2 != (Il2CppClass *)0x0) {
          pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(local_48,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pIVar2->_1).namespaze)
                    ((pIVar2->_1).element_class,pAVar12,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
        }
      }
      else {
        pIVar2 = method->klass;
        if (pIVar2 != (Il2CppClass *)0x0) {
          pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok(local_40,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Ch);
          (*(code *)(pIVar2->_1).namespaze)
                    ((pIVar2->_1).element_class,pAVar12,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
        }
      }
    }
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (g_data_057a6b79 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b79 = '\x01';
    }
    pIVar3 = method->virtualMethodPointer;
    if (pIVar3 != (Il2CppMethodPointer)0x0) {
      lVar9 = *(long *)pIVar3;
      if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar16) == TypeInfo_IStateMachineRunnerPromise) {
            puVar10 = (undefined8 *)
                      (lVar9 + (long)(*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar16) + 2) * 0x10 + 0x138);
            goto label_044cc205;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar3,TypeInfo_IStateMachineRunnerPromise,2);
label_044cc205:
      (*(code *)*puVar10)(pIVar3,puVar10[1]);
    }
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchEntryAsync>d__18$$SetStateMachine
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__SetStateMachine (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x44cc410

void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__SetStateMachine
               (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchLatestVersionAsync>d__16$$MoveNext
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this, const MethodInfo* method);
// 0x44cc420

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
               (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this,
               MethodInfo *method)

{
  void *pvVar1;
  System_String_o *json;
  char *pcVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Il2CppClass *pIVar5;
  short sVar6;
  char cVar7;
  bool_conflict bVar8;
  long lVar9;
  undefined8 *puVar10;
  ApplicationManagers_Api_AottgApiResult_o *pAVar11;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long lVar15;
  undefined1 auVar16 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  Il2CppType **local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  System_String_o *local_48;
  Il2CppObject *local_40;
  Il2CppClass *local_38;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_30;
  Il2CppType **local_28;
  
  if (g_data_057aeb07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_La);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_La);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&"/v1/changelog/latest-version");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb07 = '\x01';
    in_RDX = extraout_RDX;
  }
  local_40 = (Il2CppObject *)0x0;
  local_48 = (System_String_o *)0x0;
  local_88 = (Il2CppClass *)0x0;
  uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_78 = (Il2CppType **)0x0;
  local_38 = (Il2CppClass *)0x0;
  pAStack_30 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_28 = (Il2CppType **)0x0;
  if (*(int *)&method->methodPointer == 0) {
    local_78 = method->parameters;
    local_88 = method->klass;
    uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)method->return_type;
    method->klass = (Il2CppClass *)0x0;
    method->return_type = (Il2CppType *)0x0;
    method->parameters = (Il2CppType **)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_00;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)local_68,"/v1/changelog/latest-version",in_RDX);
    local_28 = local_58;
    local_38 = (Il2CppClass *)local_68._0_8_;
    pAStack_30 = (ApplicationManagers_Api_AottgApiResult_o *)local_68._8_8_;
    local_68._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_58._0_2_ = 0;
    local_58._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    local_58 = local_28;
    local_68._0_8_ = local_38;
    local_68._8_8_ = pAStack_30;
    il2cpp_runtime_helper_022b4080(local_68,0);
    local_78 = local_58;
    local_88 = (Il2CppClass *)local_68._0_8_;
    uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)local_68._8_8_;
    cVar7 = il2cpp_runtime_helper_02235800(&local_88,MethodInfo_Boolean_get_IsCompleted);
    if (cVar7 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      *(undefined4 *)&method->klass = (undefined4)local_88;
      *(undefined4 *)((long)&method->klass + 4) = local_88._4_4_;
      *(undefined4 *)&method->return_type = (undefined4)uStack_80;
      *(undefined4 *)((long)&method->return_type + 4) = uStack_80._4_4_;
      method->parameters = local_78;
      il2cpp_runtime_helper_022b4080(&method->klass,0);
      il2cpp_runtime_helper_025bd570(&method->virtualMethodPointer,&local_88,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pIVar5 = local_88;
  pAVar11 = uStack_80;
  if (local_88 != (Il2CppClass *)0x0) {
    sVar6 = (short)local_78;
    lVar9 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    pvVar1 = (pIVar5->_1).image;
    if ((ulong)*(ushort *)((long)pvVar1 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar1 + 0xb0) + lVar15) == lVar9) {
          puVar10 = (undefined8 *)
                    ((long)pvVar1 + (long)*(int *)(*(long *)((long)pvVar1 + 0xb0) + 8 + lVar15) * 0x10 + 0x138
                    );
          goto label_044cc6c0;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar1 + 0x12e) << 4 != lVar15);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar5,lVar9,0);
label_044cc6c0:
    pAVar11 = (ApplicationManagers_Api_AottgApiResult_o *)(*(code *)*puVar10)(pIVar5,(int)sVar6,puVar10[1]);
  }
  if (pAVar11 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) {
      _Unwind_Resume(auVar16._0_8_);
    }
    puVar10 = (undefined8 *)__cxa_begin_catch(auVar16._0_8_);
    uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar7 = il2cpp_runtime_helper_0233e000(uVar13,*(undefined8 *)*puVar10);
    if (cVar7 == '\0') {
      puVar14 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar14 = *puVar10;
      __cxa_throw(puVar14,&PTR_PTR_05215060,0);
    }
    pIVar4 = (InvokerMethod)*puVar10;
    __cxa_end_catch();
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (g_data_057a6b78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b78 = '\x01';
    }
    pIVar3 = method->virtualMethodPointer;
    if (pIVar3 == (Il2CppMethodPointer)0x0) {
      method->invoker_method = pIVar4;
      il2cpp_runtime_helper_022b4080(&method->invoker_method,pIVar4);
    }
    else {
      lVar9 = *(long *)pIVar3;
      if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar15) == TypeInfo_IStateMachineRunnerPromise) {
            puVar10 = (undefined8 *)
                      (lVar9 + (long)(*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar15) + 3) * 0x10 + 0x138);
            goto label_044cca35;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar15);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar3,TypeInfo_IStateMachineRunnerPromise,3);
label_044cca35:
      (*(code *)*puVar10)(pIVar3,pIVar4,puVar10[1]);
    }
  }
  else {
    if ((char)(pAVar11->fields)._Success_k__BackingField == '\0') {
      pcVar2 = method->name;
      if (pcVar2 != (char *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((pAVar11->fields)._Error_k__BackingField,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_La);
        (**(code **)(pcVar2 + 0x18))(*(undefined8 *)(pcVar2 + 0x40),pAVar12,*(undefined8 *)(pcVar2 + 0x28));
      }
    }
    else {
      json = (pAVar11->fields)._ResponseText_k__BackingField;
      if (g_data_057aeae9 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseLatestVersion);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_LatestChangelogVersionResponse);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_LatestChangelogVersionResponse);
        g_data_057aeae9 = '\x01';
      }
      parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Parser_LatestChangelogVersionResponse);
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
      bVar8 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (json,parser,&local_40,&local_48,MethodInfo_Boolean_TryParse_LatestChangelogVersionResponse);
      if ((char)bVar8 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("AottgChangelogService: failed to parse /v1/changelog/latest-version response.",(MethodInfo *)0x0);
        pcVar2 = method->name;
        if (pcVar2 != (char *)0x0) {
          pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(local_48,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_La);
          (**(code **)(pcVar2 + 0x18))(*(undefined8 *)(pcVar2 + 0x40),pAVar12,*(undefined8 *)(pcVar2 + 0x28));
        }
      }
      else {
        pcVar2 = method->name;
        if (pcVar2 != (char *)0x0) {
          pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok(local_40,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_La);
          (**(code **)(pcVar2 + 0x18))(*(undefined8 *)(pcVar2 + 0x40),pAVar12,*(undefined8 *)(pcVar2 + 0x28));
        }
      }
    }
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (g_data_057a6b79 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b79 = '\x01';
    }
    pIVar3 = method->virtualMethodPointer;
    if (pIVar3 != (Il2CppMethodPointer)0x0) {
      lVar9 = *(long *)pIVar3;
      if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar15) == TypeInfo_IStateMachineRunnerPromise) {
            puVar10 = (undefined8 *)
                      (lVar9 + (long)(*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar15) + 2) * 0x10 + 0x138);
            goto label_044cc8a5;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar15);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar3,TypeInfo_IStateMachineRunnerPromise,2);
label_044cc8a5:
      (*(code *)*puVar10)(pIVar3,puVar10[1]);
    }
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchLatestVersionAsync>d__16$$SetStateMachine
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__SetStateMachine (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x44cca80

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__SetStateMachine
               (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchListAsync>d__17$$MoveNext
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this, const MethodInfo* method);
// 0x44cca90

void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext
               (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this,
               MethodInfo *method)

{
  void *pvVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Il2CppType *pIVar5;
  undefined2 uVar6;
  char cVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  System_String_o *str3;
  long lVar10;
  undefined8 *puVar11;
  ApplicationManagers_Api_AottgApiResult_o *pAVar12;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  long lVar16;
  undefined1 auVar17 [12];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  _union_13 local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  System_String_o *local_48;
  Il2CppObject *local_40;
  Il2CppType *local_38;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_30;
  _union_13 local_28;
  
  if (g_data_057aeb08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Pu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Pu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0(&"AottgChangelogService: failed to parse /v1/changelog response.");
    il2cpp_runtime_helper_023445d0(&"&pageSize=");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb08 = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  local_48 = (System_String_o *)0x0;
  local_88 = (Il2CppType *)0x0;
  uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_78 = (_union_13)0x0;
  local_8c = 0;
  local_38 = (Il2CppType *)0x0;
  pAStack_30 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_28.rgctx_data = (Il2CppRGCTXData *)0x0;
  if (*(int *)&method->methodPointer == 0) {
    local_78 = method->field7_0x38;
    local_88 = method->return_type;
    uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)method->parameters;
    method->return_type = (Il2CppType *)0x0;
    method->parameters = (Il2CppType **)0x0;
    (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    local_8c = *(undefined4 *)&method->name;
    pSVar9 = System_Int32__ToString((int32_t)&local_8c,(MethodInfo *)0x0);
    local_8c = *(undefined4 *)((long)&method->name + 4);
    str3 = System_Int32__ToString((int32_t)&local_8c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_3af7470("/v1/changelog?page=",pSVar9,"&pageSize=",str3,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_00;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)local_68,pSVar9,method_00);
    local_28 = local_58;
    local_38 = (Il2CppType *)local_68._0_8_;
    pAStack_30 = (ApplicationManagers_Api_AottgApiResult_o *)local_68._8_8_;
    local_68._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_58._0_2_ = 0;
    local_58._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    local_58 = local_28;
    local_68._0_8_ = local_38;
    local_68._8_8_ = pAStack_30;
    il2cpp_runtime_helper_022b4080(local_68,0);
    local_78 = local_58;
    local_88 = (Il2CppType *)local_68._0_8_;
    uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)local_68._8_8_;
    cVar7 = il2cpp_runtime_helper_02235800(&local_88,MethodInfo_Boolean_get_IsCompleted);
    if (cVar7 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      *(undefined4 *)&method->return_type = (undefined4)local_88;
      *(undefined4 *)((long)&method->return_type + 4) = local_88._4_4_;
      *(undefined4 *)&method->parameters = (undefined4)uStack_80;
      *(undefined4 *)((long)&method->parameters + 4) = uStack_80._4_4_;
      method->field7_0x38 = local_78;
      il2cpp_runtime_helper_022b4080(&method->return_type,0);
      il2cpp_runtime_helper_025bd6a0(&method->virtualMethodPointer,&local_88,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
      return;
    }
  }
  pIVar5 = local_88;
  pAVar12 = uStack_80;
  if (local_88 != (Il2CppType *)0x0) {
    uVar6 = local_78._0_2_;
    lVar10 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
    }
    pvVar1 = pIVar5->data;
    if ((ulong)*(ushort *)((long)pvVar1 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar1 + 0xb0) + lVar16) == lVar10) {
          puVar11 = (undefined8 *)
                    ((long)pvVar1 + (long)*(int *)(*(long *)((long)pvVar1 + 0xb0) + 8 + lVar16) * 0x10 + 0x138
                    );
          goto label_044ccda0;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar1 + 0x12e) << 4 != lVar16);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar5,lVar10,0);
label_044ccda0:
    pAVar12 = (ApplicationManagers_Api_AottgApiResult_o *)
              (*(code *)*puVar11)(pIVar5,(int)(short)uVar6,puVar11[1]);
  }
  if (pAVar12 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    auVar17 = il2cpp_runtime_helper_022b2c90();
    if (auVar17._8_4_ != 1) {
      _Unwind_Resume(auVar17._0_8_);
    }
    puVar11 = (undefined8 *)__cxa_begin_catch(auVar17._0_8_);
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar7 = il2cpp_runtime_helper_0233e000(uVar14,*(undefined8 *)*puVar11);
    if (cVar7 == '\0') {
      puVar15 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar15 = *puVar11;
      __cxa_throw(puVar15,&PTR_PTR_05215060,0);
    }
    pIVar4 = (InvokerMethod)*puVar11;
    __cxa_end_catch();
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (g_data_057a6b78 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b78 = '\x01';
    }
    pIVar3 = method->virtualMethodPointer;
    if (pIVar3 == (Il2CppMethodPointer)0x0) {
      method->invoker_method = pIVar4;
      il2cpp_runtime_helper_022b4080(&method->invoker_method,pIVar4);
    }
    else {
      lVar10 = *(long *)pIVar3;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar16) == TypeInfo_IStateMachineRunnerPromise) {
            puVar11 = (undefined8 *)
                      (lVar10 + (long)(*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar16) + 3) * 0x10 + 0x138);
            goto label_044cd148;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar16);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar3,TypeInfo_IStateMachineRunnerPromise,3);
label_044cd148:
      (*(code *)*puVar11)(pIVar3,pIVar4,puVar11[1]);
    }
  }
  else {
    if ((char)(pAVar12->fields)._Success_k__BackingField == '\0') {
      pIVar2 = method->klass;
      if (pIVar2 != (Il2CppClass *)0x0) {
        pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((pAVar12->fields)._Error_k__BackingField,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Pu);
        (*(code *)(pIVar2->_1).namespaze)
                  ((pIVar2->_1).element_class,pAVar13,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
      }
    }
    else {
      pSVar9 = (pAVar12->fields)._ResponseText_k__BackingField;
      if (g_data_057aeaeb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseList);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_PublicChangelogListResponse);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_PublicChangelogListResponse);
        g_data_057aeaeb = '\x01';
      }
      parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Parser_PublicChangelogListResponse);
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
      bVar8 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (pSVar9,parser,&local_40,&local_48,MethodInfo_Boolean_TryParse_PublicChangelogListResponse);
      if ((char)bVar8 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogError("AottgChangelogService: failed to parse /v1/changelog response.",(MethodInfo *)0x0);
        pIVar2 = method->klass;
        if (pIVar2 != (Il2CppClass *)0x0) {
          pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(local_48,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Pu);
          (*(code *)(pIVar2->_1).namespaze)
                    ((pIVar2->_1).element_class,pAVar13,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
        }
      }
      else {
        pIVar2 = method->klass;
        if (pIVar2 != (Il2CppClass *)0x0) {
          pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok(local_40,MethodInfo_AottgQueryFetchResult_1_ApplicationManagers_Changelog_Pu);
          (*(code *)(pIVar2->_1).namespaze)
                    ((pIVar2->_1).element_class,pAVar13,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
        }
      }
    }
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (g_data_057a6b79 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6b79 = '\x01';
    }
    pIVar3 = method->virtualMethodPointer;
    if (pIVar3 != (Il2CppMethodPointer)0x0) {
      lVar10 = *(long *)pIVar3;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar16) == TypeInfo_IStateMachineRunnerPromise) {
            puVar11 = (undefined8 *)
                      (lVar10 + (long)(*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar16) + 2) * 0x10 + 0x138);
            goto label_044ccf85;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar16);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar3,TypeInfo_IStateMachineRunnerPromise,2);
label_044ccf85:
      (*(code *)*puVar11)(pIVar3,puVar11[1]);
    }
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchListAsync>d__17$$SetStateMachine
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__SetStateMachine (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x44cd1a0

void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__SetStateMachine
               (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Init
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__Init (const MethodInfo* method);
// 0x44ca6f0

void ApplicationManagers_Changelog_AottgChangelogService__Init(MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  uint *puVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  int32_t iVar7;
  Il2CppArrayBounds *pIVar8;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAVar9;
  void *pvVar10;
  System_Action_AottgChangelogResult_T___o *onResult;
  unkuint10 Var11;
  bool_conflict bVar12;
  long lVar13;
  System_Object_array *pSVar14;
  System_TimeSpan_Fields SVar15;
  System_Object_array *pSVar16;
  System_TimeSpan_Fields SVar17;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar18;
  System_TimeSpan_Fields t1;
  Il2CppClass *pIVar19;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  char *pcVar20;
  long lVar21;
  undefined8 uVar22;
  System_String_o *paramName;
  System_TimeSpan_o t1_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar23;
  Il2CppObject *pIVar24;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_00;
  System_Object_array *pSVar25;
  System_Object_array *pSVar26;
  System_DateTime_o extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  long extraout_RDX_01;
  System_Object_array *onResult_00;
  System_DateTime_o extraout_RDX_02;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_03;
  ulong uVar27;
  Il2CppClass *pIVar28;
  Il2CppClass *pIVar29;
  System_TimeSpan_Fields SVar30;
  System_Object_array *pSVar31;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar32;
  System_Object_array *pSVar33;
  System_DateTime_Fields SVar34;
  Il2CppClass *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_02;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar35;
  System_Object_array *pSVar36;
  MethodInfo_331A460 *in_R9;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar37;
  undefined1 auVar38 [16];
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_03;
  System_DateTimeOffset_o left_01;
  System_DateTimeOffset_o left_02;
  System_Nullable_TimeSpan__o __this_04;
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o now_00;
  System_DateTimeOffset_o right_01;
  System_DateTimeOffset_o right_02;
  unkbyte10 Var39;
  long lStack_208;
  undefined4 uStack_1fe;
  undefined2 uStack_1fa;
  System_Object_array *pSStack_1f8;
  System_Object_array *pSStack_1f0;
  System_DateTime_Fields SStack_1e8;
  Il2CppClass *pIStack_1e0;
  char cStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  MethodInfo_3319840 *pMStack_1c0;
  System_Object_array *pSStack_1b8;
  System_Object_array *pSStack_1b0;
  System_Object_array *pSStack_1a8;
  ulong uStack_1a0;
  System_Object_array *pSStack_198;
  System_Object_array *pSStack_190;
  System_Object_array *pSStack_188;
  System_Object_array *pSStack_180;
  System_Object_array *pSStack_178;
  char *pcStack_170;
  Il2CppClass *pIStack_168;
  System_Object_array *pSStack_160;
  System_Object_array *pSStack_158;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  Il2CppClass *pIStack_120;
  System_Object_array *pSStack_118;
  Il2CppClass *pIStack_110;
  System_Object_array *pSStack_108;
  System_Object_array *pSStack_100;
  Il2CppClass *pIStack_f8;
  Il2CppClass *pIStack_e8;
  undefined4 uStack_de;
  undefined2 uStack_da;
  System_Object_array *pSStack_d8;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_d0;
  System_DateTime_Fields SStack_c8;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_c0;
  char cStack_b8;
  undefined7 uStack_b7;
  void *pvStack_b0;
  MethodInfo_3319840 *pMStack_a0;
  System_Object_array *pSStack_98;
  System_Object_array *pSStack_90;
  System_Object_array *pSStack_88;
  System_Object_array *pSStack_80;
  System_Object_array *pSStack_78;
  System_Object_array *pSStack_70;
  System_Object_array *pSStack_68;
  System_Object_array *pSStack_60;
  undefined8 uStack_58;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_50;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_48;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_40;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSStack_38;
  MethodInfo_37EC980 *method_00;
  MethodInfo_37EC980 *method_01;
  
  if (g_data_057aeaf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_LatestChange);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string_Action_AottgQueryFetchResult_ChangelogEntr);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_ListKey_Action_AottgQueryFetchResult_PublicChange);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_ChangelogEnt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchLatestEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchLatestVersion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchList);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_System_String_ApplicationManagers_Chan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Changelog_AottgCha);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Changelog_AottgCha);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Changelog_AottgCha);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_ChangelogEntryResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_ListKey_PublicChangelogListResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_string_ChangelogEntryResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_LatestChangelogVersionResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogService_CreateSingleton_AottgChangelogServ);
    g_data_057aeaf5 = '\x01';
  }
  if (*(int *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 0xc) + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar24 = Utility_SingletonFactory__CreateSingleton_object_
                      (*(Il2CppObject **)(*(long *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8) + 8),
                       MethodInfo_AottgChangelogService_CreateSingleton_AottgChangelogServ);
  lVar13 = *(long *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8);
  *(Il2CppObject **)(lVar13 + 8) = pIVar24;
  il2cpp_runtime_helper_022b4080(lVar13 + 8,pIVar24);
  lVar13 = *(long *)(*(long *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8) + 8);
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_LatestChange);
  System_Action_AottgChangelogService_UnitKey__object____ctor();
  pAVar37 = (ApplicationManagers_Api_AottgQueryPolicy_o *)
            **(undefined8 **)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8);
  __this_00 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_LatestChangelogVersionResponse);
  pSVar32 = fetch;
  pAVar35 = __this_00;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor
            (__this_00,fetch,(System_Func_DateTimeOffset__o *)0x0,pAVar37,MethodInfo_AottgQueryCache_2_ApplicationManagers_Changelog_AottgCha);
  if (lVar13 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar13 + 0x20) = __this_00;
    il2cpp_runtime_helper_022b4080(lVar13 + 0x20,__this_00);
    lVar13 = *(long *)(*(long *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8) + 8);
    fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_ChangelogEnt);
    System_Action_AottgChangelogService_UnitKey__object____ctor();
    pAVar37 = (ApplicationManagers_Api_AottgQueryPolicy_o *)
              **(undefined8 **)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8);
    __this_00 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_ChangelogEntryResponse);
    pSVar32 = fetch;
    pAVar35 = __this_00;
    ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor
              (__this_00,fetch,(System_Func_DateTimeOffset__o *)0x0,pAVar37,MethodInfo_AottgQueryCache_2_ApplicationManagers_Changelog_AottgCha);
    if (lVar13 != 0) {
      *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar13 + 0x28) = __this_00;
      il2cpp_runtime_helper_022b4080(lVar13 + 0x28,__this_00);
      lVar13 = *(long *)(*(long *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8) + 8);
      fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_ListKey_Action_AottgQueryFetchResult_PublicChange)
      ;
      System_Action_AottgChangelogService_ListKey__object____ctor();
      pAVar37 = (ApplicationManagers_Api_AottgQueryPolicy_o *)
                **(undefined8 **)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8);
      __this_00 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_ListKey_PublicChangelogListResponse);
      pSVar32 = fetch;
      pAVar35 = __this_00;
      ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object____ctor
                (__this_00,fetch,(System_Func_DateTimeOffset__o *)0x0,pAVar37,MethodInfo_AottgQueryCache_2_ApplicationManagers_Changelog_AottgCha);
      if (lVar13 != 0) {
        *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar13 + 0x30) = __this_00;
        il2cpp_runtime_helper_022b4080(lVar13 + 0x30,__this_00);
        lVar13 = *(long *)(*(long *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8) + 8);
        fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_Action_string_Action_AottgQueryFetchResult_ChangelogEntr);
        System_Action_object__object____ctor();
        pAVar37 = (ApplicationManagers_Api_AottgQueryPolicy_o *)
                  **(undefined8 **)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8);
        __this_00 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_string_ChangelogEntryResponse);
        pSVar32 = fetch;
        pAVar35 = __this_00;
        ApplicationManagers_Api_AottgQueryCache_object__object____ctor
                  (__this_00,fetch,(System_Func_DateTimeOffset__o *)0x0,pAVar37,MethodInfo_AottgQueryCache_2_System_String_ApplicationManagers_Chan);
        if (lVar13 != 0) {
          *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar13 + 0x38) = __this_00;
          il2cpp_runtime_helper_022b4080(lVar13 + 0x38,__this_00);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pAStack_50 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0;
  pAStack_48 = pAVar37;
  pAStack_40 = __this_00;
  pSStack_38 = fetch;
  if (g_data_057aeaf6 == '\0') {
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44caaa3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_LatestChangelogVersionResponse);
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44caaaf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Ready_LatestChangelogVersionResponse);
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44caabb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44caac7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44caad3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetLatestVersion_b__0);
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44caadf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_0);
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44caaeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    g_data_057aeaf6 = '\x01';
  }
  uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44cab01;
  pSVar25 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_0);
  uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44cab0e;
  now.fields._8_8_ = pSVar25;
  System_Object___ctor((Il2CppObject *)pSVar25,(MethodInfo *)0x0);
  if (pSVar25 == (System_Object_array *)0x0) {
label_044cac0f:
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44cac14;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&(now.fields._8_8_)->obj,(MethodInfo *)0x0);
    return;
  }
  pSVar25->bounds = (Il2CppArrayBounds *)pAVar35;
  uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44cab2a;
  il2cpp_runtime_helper_022b4080(&pSVar25->bounds,pAVar35);
  onResult = (System_Action_AottgChangelogResult_T___o *)pSVar25->bounds;
  if (*(int *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 0xc) + 4) == 0) {
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44cab46;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44cab58;
  bVar12 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_(onResult,MethodInfo_Boolean_Ready_LatestChangelogVersionResponse);
  if ((char)bVar12 == '\0') {
    return;
  }
  if (*(int *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 0xc) + 4) == 0) {
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44cab71;
    il2cpp_runtime_helper_02337ed0();
  }
  lVar13 = *(long *)(*(long *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8) + 8);
  now.fields._8_8_ = TypeInfo_AottgChangelogService;
  if (lVar13 == 0) goto label_044cac0f;
  pSVar25 = *(System_Object_array **)(lVar13 + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44caba5;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44cabc2;
  pSVar26 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_LatestChangelogVersionResponse);
  uStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)0x44cabdc;
  now.fields._8_8_ = pSVar26;
  System_Action_object____ctor();
  pAVar37 = pAStack_48;
  uStack_58 = pAStack_50;
  SVar17._ticks = (int64_t)MethodInfo_Void_Get;
  if (pSVar25 == (System_Object_array *)0x0) goto label_044cac0f;
  SVar15._ticks = (int64_t)bVar5;
  now_00.fields._8_8_ = (System_Object_array *)((ulong)pSVar32 & 0xff);
  pAStack_48 = (ApplicationManagers_Api_AottgQueryPolicy_o *)&TypeInfo_AottgChangelogService;
  pAStack_50 = pAVar37;
  pSStack_60 = (System_Object_array *)0x0;
  lVar13 = *(long *)(*(long *)((long)((Il2CppType *)MethodInfo_Void_Get->m_Items)->data + 0xc0) + 0x70);
  now.fields._8_8_ = now_00.fields._8_8_;
  pSVar36 = MethodInfo_Void_Get;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    pSStack_68 = (System_Object_array *)0x341958e;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  pSStack_68 = (System_Object_array *)0x3419596;
  pSVar14 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar13);
  pSVar16 = *(System_Object_array **)
             (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data + 0xc0) +
             0x78);
  pSStack_68 = (System_Object_array *)0x34195b0;
  pSVar33 = pSVar14;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)pSVar14,
             (MethodInfo_27BBA50 *)pSVar16);
  if (pSVar14 != (System_Object_array *)0x0) {
    pSVar14->bounds = (Il2CppArrayBounds *)pSVar25;
    pSStack_68 = (System_Object_array *)0x34195cc;
    pSVar16 = pSVar25;
    il2cpp_runtime_helper_022b4080(&pSVar14->bounds);
    *(byte *)&pSVar14->max_length = bVar5;
    if (pSVar26 == (System_Object_array *)0x0) {
      return;
    }
    pSVar33 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
    if (pSVar33 != (System_Object_array *)0x0) {
      now.fields._8_8_ =
           *(System_Object_array **)
            (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data + 0xc0) +
            0x48);
      pSStack_68 = (System_Object_array *)0x3419601;
      pSVar16 = (System_Object_array *)SVar15._ticks;
      bVar12 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                         (pSVar33,SVar15._ticks,&pSStack_60);
      if ((char)bVar12 == '\0') {
        lVar13 = *(long *)(*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->
                                           data + 0xc0) + 0x58);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          pSStack_68 = (System_Object_array *)0x3419622;
          lVar13 = il2cpp_runtime_helper_023009c0();
        }
        pSStack_68 = (System_Object_array *)0x341962a;
        SVar15._ticks = il2cpp_runtime_helper_023052d0(lVar13);
        pSVar16 = *(System_Object_array **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                             0xc0) + 0x88);
        pSStack_68 = (System_Object_array *)0x3419647;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)SVar15._ticks,
                   (MethodInfo_31EFAA0 *)pSVar16);
        pSVar33 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
        pSStack_60 = (System_Object_array *)SVar15._ticks;
        if (pSVar33 == (System_Object_array *)0x0) goto label_03419833;
        pSVar16 = (System_Object_array *)(ulong)*(uint *)&pSVar14->max_length;
        pSStack_68 = (System_Object_array *)0x3419675;
        System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___set_Item
                  (pSVar33,pSVar16,SVar15._ticks,
                   *(undefined8 *)
                    (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                              0xc0) + 0x90));
      }
      now.fields._8_8_ = (System_Object_array *)pSVar25->max_length;
      if (now.fields._8_8_ != (System_Object_array *)0x0) {
        pSVar16 = *(System_Object_array **)&((Il2CppType *)(now.fields._8_8_)->m_Items)->bits;
        pSVar33 = ((Il2CppType *)(now.fields._8_8_)->m_Items)[2].data;
        pSStack_68 = (System_Object_array *)0x341968d;
        auVar38 = (*(code *)(now.fields._8_8_)->max_length)();
        if ((char)pSVar32 == '\0') {
          now.fields._8_8_ = (System_Object_array *)(auVar38._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                             0xc0) + 0x98);
          pSStack_68 = (System_Object_array *)0x34196b8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar38._0_8_;
          pSVar16 = pSStack_60;
          pSVar33 = pSVar25;
          pSVar36 = pSVar26;
          bVar12 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pSVar25,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pSStack_60,now,
                              (System_Action_AottgQueryResult_TValue___o *)pSVar26,(MethodInfo_3319840 *)in_R9
                             );
          if ((char)bVar12 != '\0') {
            return;
          }
        }
        if (pSStack_60 != (System_Object_array *)0x0) {
          if ((char)((Il2CppType *)pSStack_60->m_Items)[1].bits == '\0') {
            pSStack_68 = (System_Object_array *)0x3419707;
            pSVar16 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar17._ticks)->m_Items)->data +
                                            0xc0) + 200));
          }
          else {
            pSStack_68 = (System_Object_array *)0x34196ee;
            pSVar16 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)pSStack_60->max_length,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar17._ticks)->m_Items)->data +
                                            0xc0) + 0xa8));
          }
          pSVar33 = ((Il2CppType *)pSVar26->m_Items)[2].data;
          pSStack_68 = (System_Object_array *)0x3419719;
          (*(code *)pSVar26->max_length)
                    (pSVar33,pSVar16,*(undefined8 *)&((Il2CppType *)pSVar26->m_Items)->bits);
          if ((pSStack_60 != (System_Object_array *)0x0) &&
             (pSVar33 = (System_Object_array *)pSStack_60->bounds, pSVar33 != (System_Object_array *)0x0)) {
            now.fields._8_8_ =
                 *(System_Object_array **)
                  (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                            0xc0) + 0xd8);
            piVar1 = (int *)((long)&pSVar33->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar8 = pSVar33->bounds;
            if (pIVar8 != (Il2CppArrayBounds *)0x0) {
              uVar6 = *(uint *)&pSVar33->max_length;
              pSVar16 = pSVar26;
              if (uVar6 < (uint)pIVar8[1].lower_bound) {
                now.fields._8_8_ = (System_Object_array *)(ulong)(uVar6 + 1);
                *(uint *)&pSVar33->max_length = uVar6 + 1;
                pSVar33 = (System_Object_array *)(&pIVar8[2].length + (int)uVar6);
                (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)pSVar26;
                pSStack_68 = (System_Object_array *)0x341977a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pSStack_68 = (System_Object_array *)0x341979f;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar33,(Il2CppObject *)pSVar26,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x70)
                          );
              }
              if (pSStack_60 != (System_Object_array *)0x0) {
                if (*(char *)((long)&((Il2CppType *)pSStack_60->m_Items)[1].bits + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&((Il2CppType *)pSStack_60->m_Items)[1].bits + 2) = 1;
                pIVar8 = pSVar25->bounds;
                uVar4 = *(undefined1 *)&pSVar14->max_length;
                pSVar26 = (System_Object_array *)CONCAT71((int7)((ulong)pSVar26 >> 8),uVar4);
                lVar13 = *(long *)(*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar17._ticks)->m_Items)->data +
                                            0xc0) + 0xe8);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  pSStack_68 = (System_Object_array *)0x34197de;
                  lVar13 = il2cpp_runtime_helper_023009c0();
                }
                pSStack_68 = (System_Object_array *)0x34197e6;
                pSVar25 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar13);
                now.fields._8_8_ =
                     *(System_Object_array **)
                      (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                                0xc0) + 0xf0);
                pSStack_68 = (System_Object_array *)0x341980d;
                pSVar16 = pSVar14;
                pSVar33 = pSVar25;
                System_Action_object____ctor();
                SVar15._ticks = 0;
                if (pIVar8 != (Il2CppArrayBounds *)0x0) {
                  pSStack_68 = (System_Object_array *)0x3419824;
                  (**(code **)&pIVar8[1].lower_bound)
                            (pIVar8[4].length,uVar4,pSVar25,*(undefined8 *)&pIVar8[2].lower_bound);
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
  pSStack_68 = (System_Object_array *)0x3419838;
  il2cpp_runtime_helper_022b2c90();
  pSStack_78 = (System_Object_array *)SVar17._ticks;
  pSVar31 = (System_Object_array *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar30._ticks = (int64_t)pSVar16;
  SVar34._dateData = (uint64_t)pSVar33;
  pMStack_a0 = (MethodInfo_3319840 *)in_R9;
  pSStack_98 = pSVar36;
  pSStack_90 = pSVar14;
  pSStack_88 = pSVar26;
  pSStack_80 = now_00.fields._8_8_;
  pSStack_70 = pSVar25;
  pSStack_68 = (System_Object_array *)SVar15._ticks;
  if (g_data_057a8ced == '\0') {
    pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419879;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419885;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419891;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    SVar34._dateData = (uint64_t)&TypeInfo_TimeSpan;
    pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341989d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ced = '\x01';
  }
  cStack_b8 = '\0';
  uStack_b7 = 0;
  pvStack_b0 = (void *)0x0;
  t1._ticks = (int64_t)pSVar31;
  if (pSVar16 != (System_Object_array *)0x0) {
    if (*(char *)&((Il2CppType *)pSVar16->m_Items)[1].bits == '\0') {
label_03419969:
      if (*(char *)((long)&((Il2CppType *)pSVar16->m_Items)[1].bits + 1) == '\0') {
        return;
      }
      pAVar9 = ((Il2CppType *)pSVar33->m_Items)->data;
      if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        cStack_b8 = *(char *)&(pAVar9->_1).namespaze;
        pvStack_b0 = (pAVar9->_1).byval_arg.data;
        if (cStack_b8 == '\0') {
          return;
        }
        ppIVar2 = (Il2CppType **)&((Il2CppType *)pSVar16->m_Items)->bits;
        SVar15._ticks = (int64_t)*ppIVar2;
        Var11 = *(unkuint10 *)ppIVar2;
        SVar17._ticks = (int64_t)*(ushort *)&((Il2CppType *)pSVar16->m_Items)[1].data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x34199b9;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar36 = (System_Object_array *)0x0;
        pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x34199cd
        ;
        left_00.fields._8_8_ = pSVar31;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var11;
        now.fields._8_8_ = (System_Object_array *)SVar17._ticks;
        SVar34 = extraout_RDX.fields._dateData;
        t1._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pAVar9 = ((Il2CppType *)pSVar33->m_Items)->data;
        SVar30._ticks = (int64_t)pSVar31;
        if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
          cStack_b8 = *(char *)&(pAVar9->_1).namespaze;
          pvStack_b0 = (pAVar9->_1).byval_arg.data;
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x34199ff;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &cStack_b8;
          SVar17._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_03,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x3419a1a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar15._ticks = 0;
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x3419a29;
          bVar12 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)t1._ticks,(System_TimeSpan_o)SVar17._ticks,(MethodInfo *)0x0)
          ;
          if ((char)bVar12 == '\0') {
            return;
          }
          SVar34._dateData = (uint64_t)((Il2CppType *)pSVar16->m_Items)->data;
          SVar30._ticks = 1;
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x3419a52;
          pAVar18 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)SVar34._dateData,1,
                               (MethodInfo_331B520 *)
                               pMStack_a0->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now.fields._8_8_ = (System_Object_array *)0x0;
          if (pSStack_98 != (System_Object_array *)0x0) {
label_03419a5c:
            pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x3419a6a;
            (*(code *)pSStack_98->max_length)
                      (((Il2CppType *)pSStack_98->m_Items)[2].data,pAVar18,
                       *(undefined8 *)&((Il2CppType *)pSStack_98->m_Items)->bits);
            return;
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&((Il2CppType *)pSVar16->m_Items)->bits;
      SVar15._ticks = (int64_t)*ppIVar2;
      Var11 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (System_Object_array *)(ulong)*(ushort *)&((Il2CppType *)pSVar16->m_Items)[1].data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x34198df
        ;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar36 = (System_Object_array *)0x0;
      pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x34198f3;
      left.fields._8_8_ = pSVar31;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var11;
      SVar30._ticks = (int64_t)pSVar31;
      SVar34 = extraout_RDX.fields._dateData;
      SVar17._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pAVar9 = ((Il2CppType *)pSVar33->m_Items)->data;
      if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        SVar15._ticks = (int64_t)(pAVar9->_1).name;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x3419920;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341992d
        ;
        SVar30._ticks = SVar15._ticks;
        SVar34._dateData = SVar17._ticks;
        bVar12 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar17._ticks,(System_TimeSpan_o)SVar15._ticks,
                            (MethodInfo *)0x0);
        if ((char)bVar12 == '\0') goto label_03419969;
        SVar34._dateData = pSVar16->max_length;
        SVar30._ticks = 1;
        pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419956
        ;
        pAVar18 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)SVar34._dateData,1,
                             (MethodInfo_331B380 *)
                             pMStack_a0->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (pSStack_98 != (System_Object_array *)0x0) goto label_03419a5c;
        now.fields._8_8_ = (System_Object_array *)0x0;
      }
    }
  }
  pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419a87;
  il2cpp_runtime_helper_022b2c90();
  pIVar28 = (Il2CppClass *)(SVar30._ticks & 0xffffffff);
  pSVar25 = now.fields._8_8_;
  pSVar26 = (System_Object_array *)SVar30._ticks;
  pSStack_d8 = pSVar16;
  pAStack_d0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)SVar17._ticks;
  SStack_c8 = extraout_RDX.fields._dateData;
  pAStack_c0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)SVar15._ticks;
  if (g_data_057a8cee == '\0') {
    pIStack_f8 = (Il2CppClass *)0x3419aba;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cee = '\x01';
  }
  pIStack_e8 = (Il2CppClass *)0x0;
  __this_01 = *(Il2CppClass **)&((Il2CppType *)((System_Object_array *)SVar34._dateData)->m_Items)->bits;
  pIVar19 = extraout_RDX_00;
  if (__this_01 == (Il2CppClass *)0x0) {
label_03419dcd:
    pIStack_f8 = (Il2CppClass *)0x3419dd2;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar25 = *(System_Object_array **)
               (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x48);
    pSVar26 = (System_Object_array *)(SVar30._ticks & 0xff);
    pIStack_f8 = (Il2CppClass *)0x3419af4;
    bVar12 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                       (__this_01,pSVar26,&pIStack_e8);
    if ((char)bVar12 == '\0') {
      return;
    }
    pIVar19 = extraout_RDX_00;
    if (pIStack_e8 == (Il2CppClass *)0x0) goto label_03419dcd;
    *(undefined1 *)((long)&(pIStack_e8->_1).this_arg.bits + 2) = 0;
    pIVar19 = extraout_RDX_00;
    if (extraout_RDX_00 == (Il2CppClass *)0x0) {
      pSVar26 = *(System_Object_array **)
                 (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x118);
      pIStack_f8 = (Il2CppClass *)0x3419b34;
      __this_01 = "unknown_error";
      pIVar19 = (Il2CppClass *)
                ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error",(MethodInfo_331AB10 *)pSVar26);
      if (pIVar19 == (Il2CppClass *)0x0) goto label_03419dcd;
    }
    __this_01 = pIStack_e8;
    if (pIStack_e8 == (Il2CppClass *)0x0) goto label_03419dcd;
    if (*(char *)&(pIVar19->_1).name != '\0') {
      *(undefined2 *)&(pIStack_e8->_1).this_arg.bits = 1;
      pSVar26 = (System_Object_array *)(pIVar19->_1).namespaze;
      (pIStack_e8->_1).namespaze = (char *)pSVar26;
      pIStack_f8 = (Il2CppClass *)0x3419b6f;
      il2cpp_runtime_helper_022b4080(&(pIStack_e8->_1).namespaze);
      __this_01 = (Il2CppClass *)0x0;
      if (pIStack_e8 != (Il2CppClass *)0x0) {
        (pIStack_e8->_1).byval_arg.data = (void *)0x0;
        __this_01 = (Il2CppClass *)&(pIStack_e8->_1).byval_arg;
        pSVar26 = (System_Object_array *)0x0;
        pIStack_f8 = (Il2CppClass *)0x3419b90;
        il2cpp_runtime_helper_022b4080();
        pIVar29 = pIStack_e8;
        pSVar25 = (System_Object_array *)((System_Object_array *)SVar34._dateData)->max_length;
        if (pSVar25 != (System_Object_array *)0x0) {
          pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
          __this_01 = ((Il2CppType *)pSVar25->m_Items)[2].data;
          pIStack_f8 = (Il2CppClass *)0x3419bad;
          Var39 = (*(code *)pSVar25->max_length)();
          pIVar19 = pIVar29;
          if (pIVar29 != (Il2CppClass *)0x0) {
            *(unkbyte10 *)&(pIVar29->_1).byval_arg.bits = Var39;
            *(undefined2 *)((long)&(pIVar29->_1).this_arg.data + 6) = uStack_da;
            *(undefined4 *)((long)&(pIVar29->_1).this_arg.data + 2) = uStack_de;
            if (pIStack_e8 != (Il2CppClass *)0x0) {
              __this_01 = (Il2CppClass *)(pIStack_e8->_1).namespaze;
              pSVar26 = (System_Object_array *)0x0;
              pIStack_f8 = (Il2CppClass *)0x3419bf9;
              SVar34._dateData =
                   (uint64_t)
                   ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                             ((Il2CppObject *)__this_01,0,
                              *(MethodInfo_331B380 **)
                               (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) +
                               0x100));
              goto joined_r0x03419c04;
            }
          }
        }
      }
      goto label_03419dcd;
    }
    if ((char)(pIStack_e8->_1).this_arg.bits != '\0') {
      pAVar9 = ((Il2CppType *)((System_Object_array *)SVar34._dateData)->m_Items)->data;
      if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        if ((char)(pAVar9->_1).byval_arg.bits == '\0') goto label_03419d4a;
        pSVar26 = (pIVar19->_1).byval_arg.data;
        (pIStack_e8->_1).byval_arg.data = pSVar26;
        __this_01 = (Il2CppClass *)&(pIStack_e8->_1).byval_arg;
        pIStack_f8 = (Il2CppClass *)0x3419d07;
        il2cpp_runtime_helper_022b4080();
        if (pIStack_e8 != (Il2CppClass *)0x0) {
          __this_01 = (Il2CppClass *)(pIStack_e8->_1).namespaze;
          pSVar26 = (pIVar19->_1).byval_arg.data;
          pIStack_f8 = (Il2CppClass *)0x3419d34;
          SVar34._dateData =
               (uint64_t)
               ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                         ((Il2CppObject *)__this_01,(System_String_o *)pSVar26,
                          *(MethodInfo_331B660 **)
                           (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x140)
                         );
joined_r0x03419c04:
          pIVar29 = pIVar28;
          if (pIStack_e8 != (Il2CppClass *)0x0) goto label_03419c0a;
        }
      }
      goto label_03419dcd;
    }
label_03419d4a:
    *(undefined2 *)&(pIStack_e8->_1).this_arg.bits = 0x100;
    (pIStack_e8->_1).namespaze = (char *)0x0;
    pSVar26 = (pIVar19->_1).byval_arg.data;
    (pIStack_e8->_1).byval_arg.data = pSVar26;
    __this_01 = (Il2CppClass *)&(pIStack_e8->_1).byval_arg;
    pIStack_f8 = (Il2CppClass *)0x3419d69;
    il2cpp_runtime_helper_022b4080();
    pIVar29 = pIStack_e8;
    pSVar25 = (System_Object_array *)((System_Object_array *)SVar34._dateData)->max_length;
    if (pSVar25 == (System_Object_array *)0x0) goto label_03419dcd;
    pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
    __this_01 = ((Il2CppType *)pSVar25->m_Items)[2].data;
    pIStack_f8 = (Il2CppClass *)0x3419d82;
    Var39 = (*(code *)pSVar25->max_length)();
    pIVar28 = pIVar29;
    if (pIVar29 == (Il2CppClass *)0x0) goto label_03419dcd;
    *(unkbyte10 *)&(pIVar29->_1).byval_arg.bits = Var39;
    *(undefined4 *)((long)&(pIVar29->_1).this_arg.data + 2) = uStack_de;
    *(undefined2 *)((long)&(pIVar29->_1).this_arg.data + 6) = uStack_da;
    __this_01 = (pIVar19->_1).byval_arg.data;
    pSVar26 = (System_Object_array *)0x0;
    pIStack_f8 = (Il2CppClass *)0x3419dbc;
    SVar34._dateData =
         (uint64_t)
         ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                   ((System_String_o *)__this_01,0,
                    *(MethodInfo_331B520 **)
                     (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x108));
    if (pIStack_e8 == (Il2CppClass *)0x0) goto label_03419dcd;
label_03419c0a:
    __this_01 = (Il2CppClass *)(pIStack_e8->_1).name;
    pIVar28 = pIVar29;
    if (__this_01 == (Il2CppClass *)0x0) goto label_03419dcd;
    pSVar26 = *(System_Object_array **)
               (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x148);
    pIStack_f8 = (Il2CppClass *)0x3419c2e;
    now.fields._8_8_ =
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)__this_01,(MethodInfo_362E340 *)pSVar26);
    if ((pIStack_e8 == (Il2CppClass *)0x0) || (pcVar20 = (pIStack_e8->_1).name, pcVar20 == (char *)0x0))
    goto label_03419dcd;
    *(int *)(pcVar20 + 0x1c) = *(int *)(pcVar20 + 0x1c) + 1;
    iVar7 = *(int32_t *)(pcVar20 + 0x18);
    pcVar20[0x18] = '\0';
    pcVar20[0x19] = '\0';
    pcVar20[0x1a] = '\0';
    pcVar20[0x1b] = '\0';
    if (0 < iVar7) {
      __this_01 = *(Il2CppClass **)(pcVar20 + 0x10);
      pSVar26 = (System_Object_array *)0x0;
      pSVar25 = (System_Object_array *)0x0;
      pIStack_f8 = (Il2CppClass *)0x3419c6b;
      System_Array__Clear((System_Array_o *)__this_01,0,iVar7,(MethodInfo *)0x0);
    }
    if (now.fields._8_8_ == (System_Object_array *)0x0) goto label_03419dcd;
    if ((int)(now.fields._8_8_)->max_length < 1) {
      return;
    }
    pIVar28 = (Il2CppClass *)0x0;
    pIVar19 = (Il2CppClass *)0x0;
    if (((now.fields._8_8_)->max_length & 0xffffffff) != 0) {
      do {
        pIVar29 = (Il2CppClass *)(now.fields._8_8_)->m_Items[(long)pIVar19];
        if (pIVar29 != (Il2CppClass *)0x0) {
          pIVar28 = pIVar29;
          if (pIVar29 == (Il2CppClass *)0x0) goto label_03419dcd;
          __this_01 = (pIVar29->_1).element_class;
          pIStack_f8 = (Il2CppClass *)0x3419cd0;
          pSVar26 = (System_Object_array *)SVar34._dateData;
          (*(code *)(pIVar29->_1).namespaze)
                    (__this_01,SVar34._dateData,*(undefined8 *)&(pIVar29->_1).byval_arg.bits);
        }
        pIVar19 = (Il2CppClass *)((long)&(pIVar19->_1).image + 1);
        uVar6 = (uint)(now.fields._8_8_)->max_length;
        pSVar25 = (System_Object_array *)(long)(int)uVar6;
        if ((long)pSVar25 <= (long)pIVar19) {
          return;
        }
      } while (pIVar19 < (Il2CppClass *)(ulong)uVar6);
    }
  }
  pIStack_f8 = (Il2CppClass *)0x3419dd7;
  auVar38 = il2cpp_runtime_helper_022b2ca0();
  pcVar20 = auVar38._8_8_;
  uStack_128 = auVar38._0_8_;
  now_00.fields._8_8_ = pSVar25;
  SVar17._ticks = (int64_t)pSVar36;
  pIStack_120 = pIVar19;
  pSStack_118 = pSVar33;
  pIStack_110 = (Il2CppClass *)t1._ticks;
  pSStack_108 = now.fields._8_8_;
  pSStack_100 = (System_Object_array *)SVar34._dateData;
  pIStack_f8 = pIVar28;
  if (g_data_057a8cef == '\0') {
    uStack_130 = 0x3419e0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    uStack_130 = 0x3419e1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cef = '\x01';
  }
  lVar13 = **(long **)((long)((Il2CppType *)pSVar36->m_Items)->data + 0xc0);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    uStack_130 = 0x3419e3e;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  uStack_130 = 0x3419e46;
  __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar13);
  uStack_130 = 0x3419e60;
  System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object____ctor
            (__this,*(MethodInfo_3161460 **)
                     (*(long *)((long)((Il2CppType *)pSVar36->m_Items)->data + 0xc0) + 8));
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(__this_01->_1).byval_arg.bits = __this;
  uStack_130 = 0x3419e70;
  il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg.bits);
  now.fields._8_8_ = (System_Object_array *)0x0;
  uStack_130 = 0x3419e7a;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (pSVar26 == (System_Object_array *)0x0) {
    uStack_130 = 0x341a059;
    uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    uStack_130 = 0x341a061;
    pSVar26 = (System_Object_array *)il2cpp_runtime_helper_023052d0(uVar22);
    uStack_130 = 0x341a070;
    paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    uStack_130 = 0x341a07d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)pSVar26,paramName,(MethodInfo *)0x0);
    uStack_130 = 0x341a088;
    now.fields._8_8_ = pSVar36;
    pSVar16 = pSVar26;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pSVar16 = (System_Object_array *)0x0;
    if (__this_01 != (Il2CppClass *)0x0) {
      (__this_01->_1).name = (char *)pSVar26;
      uStack_130 = 0x3419ea3;
      il2cpp_runtime_helper_022b4080(&(__this_01->_1).name,pSVar26);
      if (pcVar20 == (char *)0x0) {
        lVar13 = *(long *)(*(long *)((long)((Il2CppType *)pSVar36->m_Items)->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          uStack_130 = 0x3419ec9;
          lVar13 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar13 + 0xe4) == 0) {
          uStack_130 = 0x3419eda;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar13 = *(long *)(*(long *)((long)((Il2CppType *)pSVar36->m_Items)->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          uStack_130 = 0x3419efa;
          lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
        }
        pcVar20 = *(char **)(*(long *)(lVar13 + 0xb8) + 8);
        if (pcVar20 == (char *)0x0) {
          lVar13 = *(long *)(*(long *)((long)((Il2CppType *)pSVar36->m_Items)->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            uStack_130 = 0x3419f2b;
            lVar13 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar13 + 0xe4) == 0) {
            uStack_130 = 0x3419f3c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar13 = *(long *)(*(long *)((long)((Il2CppType *)pSVar36->m_Items)->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            uStack_130 = 0x3419f5c;
            il2cpp_runtime_helper_023009c0(lVar13);
          }
          uStack_130 = 0x3419f75;
          pcVar20 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          uStack_130 = 0x3419f94;
          System_Func_DateTimeOffset____ctor();
          lVar13 = *(long *)((long)((Il2CppType *)pSVar36->m_Items)->data + 0xc0);
          lVar21 = *(long *)(lVar13 + 0x28);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            uStack_130 = 0x3419fb4;
            lVar21 = il2cpp_runtime_helper_023009c0(lVar21);
            lVar13 = *(long *)((long)((Il2CppType *)pSVar36->m_Items)->data + 0xc0);
          }
          *(char **)(*(long *)(lVar21 + 0xb8) + 8) = pcVar20;
          lVar13 = *(long *)(lVar13 + 0x28);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            uStack_130 = 0x3419fdf;
            lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
          }
          uStack_130 = 0x3419ff2;
          il2cpp_runtime_helper_022b4080(*(long *)(lVar13 + 0xb8) + 8,pcVar20);
        }
      }
      (__this_01->_1).namespaze = pcVar20;
      uStack_130 = 0x341a002;
      il2cpp_runtime_helper_022b4080(&(__this_01->_1).namespaze,pcVar20);
      if (pSVar25 == (System_Object_array *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          uStack_130 = 0x341a01f;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar25 = (System_Object_array *)**(undefined8 **)(TypeInfo_AottgQueryPolicy + 0xb8);
      }
      (__this_01->_1).byval_arg.data = pSVar25;
      il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg,pSVar25);
      return;
    }
  }
  uStack_130 = 0x341a08d;
  auVar38 = il2cpp_runtime_helper_022b2c90();
  uStack_130 = auVar38._0_8_;
  lVar13 = *(long *)&((Il2CppType *)pSVar16->m_Items)->bits;
  if (lVar13 != 0) {
    lStack_138 = 0x3262308;
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___FindEntry
              (lVar13,(ulong)now.fields._8_8_ & 0xff,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(auVar38._8_8_ + 0x20) + 0xc0) + 0x40) +
                                    0x20) + 0xc0) + 0x108));
    return;
  }
  lStack_138 = 0x341a0b8;
  il2cpp_runtime_helper_022b2c90();
  lStack_138 = 0;
  lVar13 = *(long *)(lVar13 + 0x28);
  if (lVar13 != 0) {
    now_00.fields._8_8_ =
         *(System_Object_array **)(*(long *)(*(long *)(extraout_RDX_01 + 0x20) + 0xc0) + 0x48);
    now.fields._8_8_ = (System_Object_array *)((ulong)now.fields._8_8_ & 0xff);
    uStack_140 = 0x341a0ed;
    bVar12 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (lVar13,now.fields._8_8_,&lStack_138);
    if ((char)bVar12 == '\0') {
      return;
    }
    if (lStack_138 != 0) {
      return;
    }
  }
  uStack_140 = 0x341a10c;
  uStack_140 = il2cpp_runtime_helper_022b2c90();
  __this_02 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar13 + 0x28);
  if (__this_02 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Clear
              (__this_02,
               *(MethodInfo_3162290 **)
                (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x60));
    return;
  }
  uStack_148 = 0x341a134;
  auVar38 = il2cpp_runtime_helper_022b2c90();
  uStack_148 = auVar38._0_8_;
  pSVar16 = *(System_Object_array **)&(__this_02->fields)._freeCount;
  if (pSVar16 != (System_Object_array *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Remove
              (pSVar16,(ulong)now.fields._8_8_ & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar38._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pSStack_150 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x341a168;
  il2cpp_runtime_helper_022b2c90();
  uVar27 = (ulong)now_00.fields._8_8_ & 0xffffffff;
  SVar15._ticks = (ulong)now.fields._8_8_ & 0xffffffff;
  pSStack_180 = (System_Object_array *)0x0;
  lVar13 = *(long *)(*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                              0xc0) + 0x70);
  pSVar33 = (System_Object_array *)SVar17._ticks;
  pSStack_178 = pSVar26;
  pcStack_170 = pcVar20;
  pIStack_168 = __this_01;
  pSStack_160 = pSVar25;
  pSStack_158 = pSVar36;
  pSStack_150 = __this;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    pSStack_188 = (System_Object_array *)0x341a1ae;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  pSStack_188 = (System_Object_array *)0x341a1b6;
  pSVar14 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar13);
  pSVar25 = *(System_Object_array **)
             (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data + 0xc0) +
             0x78);
  pSStack_188 = (System_Object_array *)0x341a1d0;
  pSVar26 = pSVar14;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)pSVar14,
             (MethodInfo_27BBA90 *)pSVar25);
  pSVar36 = onResult_00;
  if (pSVar14 != (System_Object_array *)0x0) {
    pSVar14->bounds = (Il2CppArrayBounds *)pSVar16;
    pSStack_188 = (System_Object_array *)0x341a1ec;
    pSVar25 = pSVar16;
    il2cpp_runtime_helper_022b4080(&pSVar14->bounds);
    *(char *)&pSVar14->max_length = (char)SVar15._ticks;
    if (onResult_00 == (System_Object_array *)0x0) {
      return;
    }
    pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar16->m_Items)->bits;
    if (pSVar26 != (System_Object_array *)0x0) {
      now_00.fields._8_8_ =
           *(System_Object_array **)
            (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data + 0xc0) +
            0x48);
      pSVar25 = (System_Object_array *)((ulong)now.fields._8_8_ & 0xff);
      pSStack_188 = (System_Object_array *)0x341a221;
      bVar12 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (pSVar26,pSVar25,&pSStack_180);
      if ((char)bVar12 == '\0') {
        lVar13 = *(long *)(*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->
                                           data + 0xc0) + 0x58);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          pSStack_188 = (System_Object_array *)0x341a242;
          lVar13 = il2cpp_runtime_helper_023009c0();
        }
        pSStack_188 = (System_Object_array *)0x341a24a;
        SVar15._ticks = il2cpp_runtime_helper_023052d0(lVar13);
        pSVar25 = *(System_Object_array **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                             0xc0) + 0x88);
        pSStack_188 = (System_Object_array *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)SVar15._ticks,
                   (MethodInfo_31EFB10 *)pSVar25);
        pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar16->m_Items)->bits;
        pSStack_180 = (System_Object_array *)SVar15._ticks;
        if (pSVar26 == (System_Object_array *)0x0) goto label_0341a453;
        pSVar25 = (System_Object_array *)(ulong)*(uint *)&pSVar14->max_length;
        pSStack_188 = (System_Object_array *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (pSVar26,pSVar25,SVar15._ticks,
                   *(undefined8 *)
                    (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                              0xc0) + 0x90));
      }
      now_00.fields._8_8_ = (System_Object_array *)pSVar16->max_length;
      if (now_00.fields._8_8_ != (System_Object_array *)0x0) {
        pSVar25 = *(System_Object_array **)&((Il2CppType *)(now_00.fields._8_8_)->m_Items)->bits;
        pSVar26 = ((Il2CppType *)(now_00.fields._8_8_)->m_Items)[2].data;
        pSStack_188 = (System_Object_array *)0x341a2ad;
        auVar38 = (*(code *)(now_00.fields._8_8_)->max_length)();
        if ((char)uVar27 == '\0') {
          now_00.fields._8_8_ = (System_Object_array *)(auVar38._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                             0xc0) + 0x98);
          pSStack_188 = (System_Object_array *)0x341a2d8;
          now_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar38._0_8_;
          pSVar25 = pSStack_180;
          pSVar26 = pSVar16;
          pSVar33 = onResult_00;
          bVar12 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pSVar16,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pSStack_180,
                              now_00,(System_Action_AottgQueryResult_TValue___o *)onResult_00,in_R9);
          if ((char)bVar12 != '\0') {
            return;
          }
        }
        if (pSStack_180 != (System_Object_array *)0x0) {
          if ((char)((Il2CppType *)pSStack_180->m_Items)[1].bits == '\0') {
            pSStack_188 = (System_Object_array *)0x341a327;
            pSVar25 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar17._ticks)->m_Items)->data +
                                            0xc0) + 200));
          }
          else {
            pSStack_188 = (System_Object_array *)0x341a30e;
            pSVar25 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)pSStack_180->max_length,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar17._ticks)->m_Items)->data +
                                            0xc0) + 0xa8));
          }
          pSVar26 = ((Il2CppType *)onResult_00->m_Items)[2].data;
          pSStack_188 = (System_Object_array *)0x341a339;
          (*(code *)onResult_00->max_length)
                    (pSVar26,pSVar25,*(undefined8 *)&((Il2CppType *)onResult_00->m_Items)->bits);
          if ((pSStack_180 != (System_Object_array *)0x0) &&
             (pSVar26 = (System_Object_array *)pSStack_180->bounds, pSVar26 != (System_Object_array *)0x0)) {
            now_00.fields._8_8_ =
                 *(System_Object_array **)
                  (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                            0xc0) + 0xd8);
            piVar1 = (int *)((long)&pSVar26->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar8 = pSVar26->bounds;
            if (pIVar8 != (Il2CppArrayBounds *)0x0) {
              uVar6 = *(uint *)&pSVar26->max_length;
              pSVar25 = onResult_00;
              if (uVar6 < (uint)pIVar8[1].lower_bound) {
                now_00.fields._8_8_ = (System_Object_array *)(ulong)(uVar6 + 1);
                *(uint *)&pSVar26->max_length = uVar6 + 1;
                pSVar26 = (System_Object_array *)(&pIVar8[2].length + (int)uVar6);
                (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)onResult_00;
                pSStack_188 = (System_Object_array *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pSStack_188 = (System_Object_array *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar26,&onResult_00->obj,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0) +
                            0x70));
              }
              if (pSStack_180 != (System_Object_array *)0x0) {
                if (*(char *)((long)&((Il2CppType *)pSStack_180->m_Items)[1].bits + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&((Il2CppType *)pSStack_180->m_Items)[1].bits + 2) = 1;
                pIVar8 = pSVar16->bounds;
                uVar4 = *(undefined1 *)&pSVar14->max_length;
                pSVar36 = (System_Object_array *)CONCAT71((int7)((ulong)onResult_00 >> 8),uVar4);
                lVar13 = *(long *)(*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar17._ticks)->m_Items)->data +
                                            0xc0) + 0xe8);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  pSStack_188 = (System_Object_array *)0x341a3fe;
                  lVar13 = il2cpp_runtime_helper_023009c0();
                }
                pSStack_188 = (System_Object_array *)0x341a406;
                pSVar16 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar13);
                now_00.fields._8_8_ =
                     *(System_Object_array **)
                      (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar17._ticks)->m_Items)->data +
                                0xc0) + 0xf0);
                pSStack_188 = (System_Object_array *)0x341a42d;
                pSVar25 = pSVar14;
                pSVar26 = pSVar16;
                System_Action_object____ctor();
                SVar15._ticks = 0;
                if (pIVar8 != (Il2CppArrayBounds *)0x0) {
                  pSStack_188 = (System_Object_array *)0x341a444;
                  (**(code **)&pIVar8[1].lower_bound)
                            (pIVar8[4].length,uVar4,pSVar16,*(undefined8 *)&pIVar8[2].lower_bound);
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
  pSStack_188 = (System_Object_array *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  now.fields._8_8_ = (System_Object_array *)((ulong)now_00.fields._8_8_ & 0xffffffff);
  SVar30._ticks = (int64_t)pSVar25;
  SVar34._dateData = (uint64_t)pSVar26;
  pMStack_1c0 = (MethodInfo_3319840 *)in_R9;
  pSStack_1b8 = pSVar33;
  pSStack_1b0 = pSVar14;
  pSStack_1a8 = pSVar36;
  uStack_1a0 = uVar27;
  pSStack_198 = (System_Object_array *)SVar17._ticks;
  pSStack_190 = pSVar16;
  pSStack_188 = (System_Object_array *)SVar15._ticks;
  if (g_data_057a8cf0 == '\0') {
    pIStack_1e0 = (Il2CppClass *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pIStack_1e0 = (Il2CppClass *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pIStack_1e0 = (Il2CppClass *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    SVar34._dateData = (uint64_t)&TypeInfo_TimeSpan;
    pIStack_1e0 = (Il2CppClass *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_1d8 = '\0';
  uStack_1d7 = 0;
  uStack_1d0 = 0;
  if (pSVar25 != (System_Object_array *)0x0) {
    if ((char)((Il2CppType *)pSVar25->m_Items)[1].bits == '\0') {
label_0341a589:
      if (*(char *)((long)&((Il2CppType *)pSVar25->m_Items)[1].bits + 1) == '\0') {
        return;
      }
      pvVar10 = ((Il2CppType *)pSVar26->m_Items)->data;
      if (pvVar10 != (void *)0x0) {
        cStack_1d8 = *(char *)((long)pvVar10 + 0x18);
        uStack_1d0 = *(undefined8 *)((long)pvVar10 + 0x20);
        if (cStack_1d8 == '\0') {
          return;
        }
        puVar3 = &((Il2CppType *)pSVar25->m_Items)->bits;
        SVar15._ticks = *(int64_t *)puVar3;
        Var11 = *(unkuint10 *)puVar3;
        SVar17._ticks = (int64_t)*(ushort *)&((Il2CppType *)pSVar25->m_Items)[1].data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pIStack_1e0 = (Il2CppClass *)0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_1e0 = (Il2CppClass *)0x341a5ed;
        left_02.fields._8_8_ = now.fields._8_8_;
        left_02.fields._dateTime.fields._dateData = extraout_RDX_02.fields._dateData;
        right_02.fields._10_6_ = 0;
        right_02.fields._0_10_ = Var11;
        now_00.fields._8_8_ = (System_Object_array *)SVar17._ticks;
        SVar34 = extraout_RDX_02.fields._dateData;
        t1_00 = System_DateTimeOffset__op_Subtraction(left_02,right_02,(MethodInfo *)0x0);
        pvVar10 = ((Il2CppType *)pSVar26->m_Items)->data;
        SVar30._ticks = (int64_t)now.fields._8_8_;
        if (pvVar10 != (void *)0x0) {
          cStack_1d8 = *(char *)((long)pvVar10 + 0x18);
          uStack_1d0 = *(undefined8 *)((long)pvVar10 + 0x20);
          pIStack_1e0 = (Il2CppClass *)0x341a61f;
          __this_04.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_04.fields._0_8_ = &cStack_1d8;
          SVar17._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_04,method_01);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pIStack_1e0 = (Il2CppClass *)0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar15._ticks = 0;
          pIStack_1e0 = (Il2CppClass *)0x341a649;
          bVar12 = System_TimeSpan__op_LessThan(t1_00,(System_TimeSpan_o)SVar17._ticks,(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            return;
          }
          SVar34._dateData = (uint64_t)((Il2CppType *)pSVar25->m_Items)->data;
          SVar30._ticks = 1;
          pIStack_1e0 = (Il2CppClass *)0x341a672;
          pAVar18 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)SVar34._dateData,1,
                               (MethodInfo_331B520 *)
                               pMStack_1c0->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now_00.fields._8_8_ = (System_Object_array *)0x0;
          if (pSStack_1b8 != (System_Object_array *)0x0) {
label_0341a67c:
            pIStack_1e0 = (Il2CppClass *)0x341a68a;
            (*(code *)pSStack_1b8->max_length)
                      (((Il2CppType *)pSStack_1b8->m_Items)[2].data,pAVar18,
                       *(undefined8 *)&((Il2CppType *)pSStack_1b8->m_Items)->bits);
            return;
          }
        }
      }
    }
    else {
      puVar3 = &((Il2CppType *)pSVar25->m_Items)->bits;
      SVar15._ticks = *(int64_t *)puVar3;
      Var11 = *(unkuint10 *)puVar3;
      now_00.fields._8_8_ = (System_Object_array *)(ulong)*(ushort *)&((Il2CppType *)pSVar25->m_Items)[1].data
      ;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pIStack_1e0 = (Il2CppClass *)0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_1e0 = (Il2CppClass *)0x341a513;
      left_01.fields._8_8_ = now.fields._8_8_;
      left_01.fields._dateTime.fields._dateData = extraout_RDX_02.fields._dateData;
      right_01.fields._10_6_ = 0;
      right_01.fields._0_10_ = Var11;
      SVar30._ticks = (int64_t)now.fields._8_8_;
      SVar34 = extraout_RDX_02.fields._dateData;
      SVar17._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left_01,right_01,(MethodInfo *)0x0);
      pvVar10 = ((Il2CppType *)pSVar26->m_Items)->data;
      if (pvVar10 != (void *)0x0) {
        SVar15._ticks = ((System_TimeSpan_Fields *)((long)pvVar10 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pIStack_1e0 = (Il2CppClass *)0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_1e0 = (Il2CppClass *)0x341a54d;
        SVar30._ticks = SVar15._ticks;
        SVar34._dateData = SVar17._ticks;
        bVar12 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar17._ticks,(System_TimeSpan_o)SVar15._ticks,
                            (MethodInfo *)0x0);
        if ((char)bVar12 == '\0') goto label_0341a589;
        SVar34._dateData = pSVar25->max_length;
        SVar30._ticks = 1;
        pIStack_1e0 = (Il2CppClass *)0x341a576;
        pAVar18 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)SVar34._dateData,1,
                             (MethodInfo_331B380 *)
                             pMStack_1c0->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (pSStack_1b8 != (System_Object_array *)0x0) goto label_0341a67c;
        now_00.fields._8_8_ = (System_Object_array *)0x0;
      }
    }
  }
  pIStack_1e0 = (Il2CppClass *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pSStack_1f8 = pSVar25;
  pSStack_1f0 = (System_Object_array *)SVar17._ticks;
  SStack_1e8 = extraout_RDX_02.fields._dateData;
  pIStack_1e0 = (Il2CppClass *)SVar15._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  lStack_208 = 0;
  lVar13 = *(long *)&((Il2CppType *)((System_Object_array *)SVar34._dateData)->m_Items)->bits;
  if (lVar13 != 0) {
    bVar12 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (lVar13,SVar30._ticks & 0xff,&lStack_208);
    if ((char)bVar12 == '\0') {
      return;
    }
    if ((lStack_208 != 0) &&
       (((*(undefined1 *)(lStack_208 + 0x3a) = 0, pAVar23 = extraout_RDX_03,
         extraout_RDX_03 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pAVar23 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                              ((System_String_o *)"unknown_error",
                               *(MethodInfo_331AB10 **)
                                (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0)
                                + 0x118)),
         pAVar23 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) && (lStack_208 != 0)))) {
      if ((char)(pAVar23->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(lStack_208 + 0x38) == '\0') {
label_0341a96a:
          *(undefined2 *)(lStack_208 + 0x38) = 0x100;
          *(undefined8 *)(lStack_208 + 0x18) = 0;
          *(System_String_o **)(lStack_208 + 0x20) = (pAVar23->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          lVar13 = lStack_208;
          if (((char *)((System_Object_array *)SVar34._dateData)->max_length != (char *)0x0) &&
             (Var39 = (**(code **)((char *)((System_Object_array *)SVar34._dateData)->max_length + 0x18))(),
             lVar13 != 0)) {
            *(unkbyte10 *)(lVar13 + 0x28) = Var39;
            *(undefined4 *)(lVar13 + 0x32) = uStack_1fe;
            *(undefined2 *)(lVar13 + 0x36) = uStack_1fa;
            pAVar18 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((pAVar23->fields)._Error_k__BackingField,0,
                                 *(MethodInfo_331B520 **)
                                  (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0
                                            ) + 0x108));
joined_r0x0341a9e7:
            if (lStack_208 != 0) goto label_0341a82a;
          }
        }
        else {
          pvVar10 = ((Il2CppType *)((System_Object_array *)SVar34._dateData)->m_Items)->data;
          if (pvVar10 == (void *)0x0) goto label_0341a9ed;
          if (*(char *)((long)pvVar10 + 0x28) == '\0') goto label_0341a96a;
          *(System_String_o **)(lStack_208 + 0x20) = (pAVar23->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          if ((lStack_208 == 0) ||
             (pAVar18 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  (*(Il2CppObject **)(lStack_208 + 0x18),
                                   (pAVar23->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data +
                                              0xc0) + 0x140)), lStack_208 == 0)) goto label_0341a9ed;
label_0341a82a:
          if (((*(System_Collections_Generic_List_object__o **)(lStack_208 + 0x10) !=
                (System_Collections_Generic_List_object__o *)0x0) &&
              (now.fields._8_8_ =
                    System_Collections_Generic_List_object___ToArray
                              (*(System_Collections_Generic_List_object__o **)(lStack_208 + 0x10),
                               *(MethodInfo_362E340 **)
                                (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0)
                                + 0x148)), lStack_208 != 0)) &&
             (lVar13 = *(long *)(lStack_208 + 0x10), lVar13 != 0)) {
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            iVar7 = *(int32_t *)(lVar13 + 0x18);
            *(undefined4 *)(lVar13 + 0x18) = 0;
            if (0 < iVar7) {
              System_Array__Clear(*(System_Array_o **)(lVar13 + 0x10),0,iVar7,(MethodInfo *)0x0);
            }
            if (now.fields._8_8_ != (System_Object_array *)0x0) {
              if ((int)(now.fields._8_8_)->max_length < 1) {
                return;
              }
              uVar27 = 0;
              if (((now.fields._8_8_)->max_length & 0xffffffff) != 0) {
                do {
                  pIVar24 = (now.fields._8_8_)->m_Items[uVar27];
                  if (pIVar24 != (Il2CppObject *)0x0) {
                    if (pIVar24 == (Il2CppObject *)0x0) goto label_0341a9ed;
                    (*pIVar24[1].monitor)(pIVar24[4].klass,pAVar18,pIVar24[2].monitor);
                  }
                  uVar27 = uVar27 + 1;
                  uVar6 = (uint)(now.fields._8_8_)->max_length;
                  if ((long)(int)uVar6 <= (long)uVar27) {
                    return;
                  }
                } while (uVar27 < uVar6);
              }
              goto label_0341a9f2;
            }
          }
        }
      }
      else {
        *(undefined2 *)(lStack_208 + 0x38) = 1;
        *(Il2CppObject **)(lStack_208 + 0x18) = (pAVar23->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(lStack_208 + 0x18);
        if (lStack_208 != 0) {
          *(undefined8 *)(lStack_208 + 0x20) = 0;
          il2cpp_runtime_helper_022b4080(lStack_208 + 0x20,0);
          lVar13 = lStack_208;
          if (((char *)((System_Object_array *)SVar34._dateData)->max_length != (char *)0x0) &&
             (Var39 = (**(code **)((char *)((System_Object_array *)SVar34._dateData)->max_length + 0x18))(),
             lVar13 != 0)) {
            *(unkbyte10 *)(lVar13 + 0x28) = Var39;
            *(undefined2 *)(lVar13 + 0x36) = uStack_1fa;
            *(undefined4 *)(lVar13 + 0x32) = uStack_1fe;
            if (lStack_208 != 0) {
              pAVar18 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                  (*(Il2CppObject **)(lStack_208 + 0x18),0,
                                   *(MethodInfo_331B380 **)
                                    (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data +
                                              0xc0) + 0x100));
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


// ApplicationManagers.Changelog.AottgChangelogService$$GetLatestVersion
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetLatestVersion (System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x44caa80

void ApplicationManagers_Changelog_AottgChangelogService__GetLatestVersion
               (System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o *onResult,
               bool_conflict forceRefresh,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  uint *puVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  int32_t iVar7;
  Il2CppArrayBounds *pIVar8;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAVar9;
  void *pvVar10;
  Il2CppObject *pIVar11;
  System_Action_AottgChangelogResult_T___o *onResult_00;
  unkuint10 Var12;
  bool_conflict bVar13;
  long lVar14;
  System_Object_array *pSVar15;
  System_TimeSpan_Fields SVar16;
  System_Object_array *pSVar17;
  System_TimeSpan_Fields SVar18;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar19;
  System_TimeSpan_Fields t1;
  Il2CppClass *pIVar20;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  char *pcVar21;
  long lVar22;
  undefined8 uVar23;
  System_String_o *paramName;
  System_TimeSpan_o t1_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar24;
  System_Object_array *pSVar25;
  System_Object_array *pSVar26;
  System_DateTime_o extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  long extraout_RDX_01;
  System_Object_array *onResult_01;
  System_DateTime_o extraout_RDX_02;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_03;
  ulong uVar27;
  Il2CppClass *pIVar28;
  Il2CppClass *pIVar29;
  System_TimeSpan_Fields SVar30;
  System_Object_array *pSVar31;
  System_Object_array *pSVar32;
  System_DateTime_Fields SVar33;
  Il2CppClass *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_Object_array *pSVar34;
  MethodInfo_331A460 *in_R9;
  undefined1 auVar35 [16];
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_02;
  System_DateTimeOffset_o left_01;
  System_DateTimeOffset_o left_02;
  System_Nullable_TimeSpan__o __this_03;
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o now_00;
  System_DateTimeOffset_o right_01;
  System_DateTimeOffset_o right_02;
  unkbyte10 Var36;
  long lStack_1e0;
  undefined4 uStack_1d6;
  undefined2 uStack_1d2;
  System_Object_array *pSStack_1d0;
  System_Object_array *pSStack_1c8;
  System_DateTime_Fields SStack_1c0;
  Il2CppClass *pIStack_1b8;
  char cStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  MethodInfo_3319840 *pMStack_198;
  System_Object_array *pSStack_190;
  System_Object_array *pSStack_188;
  System_Object_array *pSStack_180;
  ulong uStack_178;
  System_Object_array *pSStack_170;
  System_Object_array *pSStack_168;
  System_Object_array *pSStack_160;
  System_Object_array *pSStack_158;
  System_Object_array *pSStack_150;
  char *pcStack_148;
  Il2CppClass *pIStack_140;
  System_Object_array *pSStack_138;
  System_Object_array *pSStack_130;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  Il2CppClass *pIStack_f8;
  System_Object_array *pSStack_f0;
  Il2CppClass *pIStack_e8;
  System_Object_array *pSStack_e0;
  System_Object_array *pSStack_d8;
  Il2CppClass *pIStack_d0;
  Il2CppClass *pIStack_c0;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  System_Object_array *pSStack_b0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_a8;
  System_DateTime_Fields SStack_a0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_98;
  char cStack_90;
  undefined7 uStack_8f;
  void *pvStack_88;
  MethodInfo_3319840 *pMStack_78;
  System_Object_array *pSStack_70;
  System_Object_array *pSStack_68;
  System_Object_array *pSStack_60;
  System_Object_array *pSStack_58;
  System_Object_array *pSStack_50;
  System_Object_array *pSStack_48;
  System_Object_array *pSStack_40;
  System_Object_array *pSStack_38;
  undefined8 uStack_30;
  MethodInfo_37EC980 *method_00;
  MethodInfo_37EC980 *method_01;
  
  if (g_data_057aeaf6 == '\0') {
    uStack_30 = 0x44caaa3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_LatestChangelogVersionResponse);
    uStack_30 = 0x44caaaf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Ready_LatestChangelogVersionResponse);
    uStack_30 = 0x44caabb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    uStack_30 = 0x44caac7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    uStack_30 = 0x44caad3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetLatestVersion_b__0);
    uStack_30 = 0x44caadf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_0);
    uStack_30 = 0x44caaeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    g_data_057aeaf6 = '\x01';
  }
  uStack_30 = 0x44cab01;
  pSVar25 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_0);
  uStack_30 = 0x44cab0e;
  now.fields._8_8_ = pSVar25;
  System_Object___ctor((Il2CppObject *)pSVar25,(MethodInfo *)0x0);
  if (pSVar25 == (System_Object_array *)0x0) {
label_044cac0f:
    uStack_30 = 0x44cac14;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&(now.fields._8_8_)->obj,(MethodInfo *)0x0);
    return;
  }
  pSVar25->bounds = (Il2CppArrayBounds *)onResult;
  uStack_30 = 0x44cab2a;
  il2cpp_runtime_helper_022b4080(&pSVar25->bounds,onResult);
  onResult_00 = (System_Action_AottgChangelogResult_T___o *)pSVar25->bounds;
  if (*(int *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 0xc) + 4) == 0) {
    uStack_30 = 0x44cab46;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_30 = 0x44cab58;
  bVar13 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_(onResult_00,MethodInfo_Boolean_Ready_LatestChangelogVersionResponse);
  if ((char)bVar13 == '\0') {
    return;
  }
  if (*(int *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 0xc) + 4) == 0) {
    uStack_30 = 0x44cab71;
    il2cpp_runtime_helper_02337ed0();
  }
  lVar14 = *(long *)(*(long *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8) + 8);
  now.fields._8_8_ = TypeInfo_AottgChangelogService;
  if (lVar14 == 0) goto label_044cac0f;
  pSVar25 = *(System_Object_array **)(lVar14 + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    uStack_30 = 0x44caba5;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  uStack_30 = 0x44cabc2;
  pSVar26 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_LatestChangelogVersionResponse);
  uStack_30 = 0x44cabdc;
  now.fields._8_8_ = pSVar26;
  System_Action_object____ctor();
  SVar18._ticks = (int64_t)MethodInfo_Void_Get;
  if (pSVar25 == (System_Object_array *)0x0) goto label_044cac0f;
  SVar16._ticks = (int64_t)bVar5;
  now_00.fields._8_8_ = (System_Object_array *)(ulong)(forceRefresh & 0xff);
  pSStack_38 = (System_Object_array *)0x0;
  lVar14 = *(long *)(*(long *)((long)((Il2CppType *)MethodInfo_Void_Get->m_Items)->data + 0xc0) + 0x70);
  now.fields._8_8_ = now_00.fields._8_8_;
  pSVar34 = MethodInfo_Void_Get;
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    pSStack_40 = (System_Object_array *)0x341958e;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  pSStack_40 = (System_Object_array *)0x3419596;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar14);
  pSVar17 = *(System_Object_array **)
             (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data + 0xc0) +
             0x78);
  pSStack_40 = (System_Object_array *)0x34195b0;
  pSVar32 = pSVar15;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)pSVar15,
             (MethodInfo_27BBA50 *)pSVar17);
  if (pSVar15 != (System_Object_array *)0x0) {
    pSVar15->bounds = (Il2CppArrayBounds *)pSVar25;
    pSStack_40 = (System_Object_array *)0x34195cc;
    pSVar17 = pSVar25;
    il2cpp_runtime_helper_022b4080(&pSVar15->bounds);
    *(byte *)&pSVar15->max_length = bVar5;
    if (pSVar26 == (System_Object_array *)0x0) {
      return;
    }
    pSVar32 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
    if (pSVar32 != (System_Object_array *)0x0) {
      now.fields._8_8_ =
           *(System_Object_array **)
            (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data + 0xc0) +
            0x48);
      pSStack_40 = (System_Object_array *)0x3419601;
      pSVar17 = (System_Object_array *)SVar16._ticks;
      bVar13 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                         (pSVar32,SVar16._ticks,&pSStack_38);
      if ((char)bVar13 == '\0') {
        lVar14 = *(long *)(*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->
                                           data + 0xc0) + 0x58);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          pSStack_40 = (System_Object_array *)0x3419622;
          lVar14 = il2cpp_runtime_helper_023009c0();
        }
        pSStack_40 = (System_Object_array *)0x341962a;
        SVar16._ticks = il2cpp_runtime_helper_023052d0(lVar14);
        pSVar17 = *(System_Object_array **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                             0xc0) + 0x88);
        pSStack_40 = (System_Object_array *)0x3419647;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)SVar16._ticks,
                   (MethodInfo_31EFAA0 *)pSVar17);
        pSVar32 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
        pSStack_38 = (System_Object_array *)SVar16._ticks;
        if (pSVar32 == (System_Object_array *)0x0) goto label_03419833;
        pSVar17 = (System_Object_array *)(ulong)*(uint *)&pSVar15->max_length;
        pSStack_40 = (System_Object_array *)0x3419675;
        System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___set_Item
                  (pSVar32,pSVar17,SVar16._ticks,
                   *(undefined8 *)
                    (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                              0xc0) + 0x90));
      }
      now.fields._8_8_ = (System_Object_array *)pSVar25->max_length;
      if (now.fields._8_8_ != (System_Object_array *)0x0) {
        pSVar17 = *(System_Object_array **)&((Il2CppType *)(now.fields._8_8_)->m_Items)->bits;
        pSVar32 = ((Il2CppType *)(now.fields._8_8_)->m_Items)[2].data;
        pSStack_40 = (System_Object_array *)0x341968d;
        auVar35 = (*(code *)(now.fields._8_8_)->max_length)();
        if ((char)forceRefresh == '\0') {
          now.fields._8_8_ = (System_Object_array *)(auVar35._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                             0xc0) + 0x98);
          pSStack_40 = (System_Object_array *)0x34196b8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar35._0_8_;
          pSVar17 = pSStack_38;
          pSVar32 = pSVar25;
          pSVar34 = pSVar26;
          bVar13 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pSVar25,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pSStack_38,now,
                              (System_Action_AottgQueryResult_TValue___o *)pSVar26,(MethodInfo_3319840 *)in_R9
                             );
          if ((char)bVar13 != '\0') {
            return;
          }
        }
        if (pSStack_38 != (System_Object_array *)0x0) {
          if ((char)((Il2CppType *)pSStack_38->m_Items)[1].bits == '\0') {
            pSStack_40 = (System_Object_array *)0x3419707;
            pSVar17 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 200));
          }
          else {
            pSStack_40 = (System_Object_array *)0x34196ee;
            pSVar17 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)pSStack_38->max_length,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 0xa8));
          }
          pSVar32 = ((Il2CppType *)pSVar26->m_Items)[2].data;
          pSStack_40 = (System_Object_array *)0x3419719;
          (*(code *)pSVar26->max_length)
                    (pSVar32,pSVar17,*(undefined8 *)&((Il2CppType *)pSVar26->m_Items)->bits);
          if ((pSStack_38 != (System_Object_array *)0x0) &&
             (pSVar32 = (System_Object_array *)pSStack_38->bounds, pSVar32 != (System_Object_array *)0x0)) {
            now.fields._8_8_ =
                 *(System_Object_array **)
                  (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                            0xc0) + 0xd8);
            piVar1 = (int *)((long)&pSVar32->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar8 = pSVar32->bounds;
            if (pIVar8 != (Il2CppArrayBounds *)0x0) {
              uVar6 = *(uint *)&pSVar32->max_length;
              pSVar17 = pSVar26;
              if (uVar6 < (uint)pIVar8[1].lower_bound) {
                now.fields._8_8_ = (System_Object_array *)(ulong)(uVar6 + 1);
                *(uint *)&pSVar32->max_length = uVar6 + 1;
                pSVar32 = (System_Object_array *)(&pIVar8[2].length + (int)uVar6);
                (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)pSVar26;
                pSStack_40 = (System_Object_array *)0x341977a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pSStack_40 = (System_Object_array *)0x341979f;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar32,(Il2CppObject *)pSVar26,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x70)
                          );
              }
              if (pSStack_38 != (System_Object_array *)0x0) {
                if (*(char *)((long)&((Il2CppType *)pSStack_38->m_Items)[1].bits + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&((Il2CppType *)pSStack_38->m_Items)[1].bits + 2) = 1;
                pIVar8 = pSVar25->bounds;
                uVar4 = *(undefined1 *)&pSVar15->max_length;
                pSVar26 = (System_Object_array *)CONCAT71((int7)((ulong)pSVar26 >> 8),uVar4);
                lVar14 = *(long *)(*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 0xe8);
                if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                  pSStack_40 = (System_Object_array *)0x34197de;
                  lVar14 = il2cpp_runtime_helper_023009c0();
                }
                pSStack_40 = (System_Object_array *)0x34197e6;
                pSVar25 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar14);
                now.fields._8_8_ =
                     *(System_Object_array **)
                      (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                0xc0) + 0xf0);
                pSStack_40 = (System_Object_array *)0x341980d;
                pSVar17 = pSVar15;
                pSVar32 = pSVar25;
                System_Action_object____ctor();
                SVar16._ticks = 0;
                if (pIVar8 != (Il2CppArrayBounds *)0x0) {
                  pSStack_40 = (System_Object_array *)0x3419824;
                  (**(code **)&pIVar8[1].lower_bound)
                            (pIVar8[4].length,uVar4,pSVar25,*(undefined8 *)&pIVar8[2].lower_bound);
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
  pSStack_40 = (System_Object_array *)0x3419838;
  il2cpp_runtime_helper_022b2c90();
  pSStack_50 = (System_Object_array *)SVar18._ticks;
  pSVar31 = (System_Object_array *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar30._ticks = (int64_t)pSVar17;
  SVar33._dateData = (uint64_t)pSVar32;
  pMStack_78 = (MethodInfo_3319840 *)in_R9;
  pSStack_70 = pSVar34;
  pSStack_68 = pSVar15;
  pSStack_60 = pSVar26;
  pSStack_58 = now_00.fields._8_8_;
  pSStack_48 = pSVar25;
  pSStack_40 = (System_Object_array *)SVar16._ticks;
  if (g_data_057a8ced == '\0') {
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419879;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419885;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419891;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    SVar33._dateData = (uint64_t)&TypeInfo_TimeSpan;
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341989d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ced = '\x01';
  }
  cStack_90 = '\0';
  uStack_8f = 0;
  pvStack_88 = (void *)0x0;
  t1._ticks = (int64_t)pSVar31;
  if (pSVar17 != (System_Object_array *)0x0) {
    if (*(char *)&((Il2CppType *)pSVar17->m_Items)[1].bits == '\0') {
label_03419969:
      if (*(char *)((long)&((Il2CppType *)pSVar17->m_Items)[1].bits + 1) == '\0') {
        return;
      }
      pAVar9 = ((Il2CppType *)pSVar32->m_Items)->data;
      if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        cStack_90 = *(char *)&(pAVar9->_1).namespaze;
        pvStack_88 = (pAVar9->_1).byval_arg.data;
        if (cStack_90 == '\0') {
          return;
        }
        ppIVar2 = (Il2CppType **)&((Il2CppType *)pSVar17->m_Items)->bits;
        SVar16._ticks = (int64_t)*ppIVar2;
        Var12 = *(unkuint10 *)ppIVar2;
        SVar18._ticks = (int64_t)*(ushort *)&((Il2CppType *)pSVar17->m_Items)[1].data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x34199b9;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar34 = (System_Object_array *)0x0;
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x34199cd
        ;
        left_00.fields._8_8_ = pSVar31;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var12;
        now.fields._8_8_ = (System_Object_array *)SVar18._ticks;
        SVar33 = extraout_RDX.fields._dateData;
        t1._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pAVar9 = ((Il2CppType *)pSVar32->m_Items)->data;
        SVar30._ticks = (int64_t)pSVar31;
        if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
          cStack_90 = *(char *)&(pAVar9->_1).namespaze;
          pvStack_88 = (pAVar9->_1).byval_arg.data;
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x34199ff;
          __this_02.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_02.fields._0_8_ = &cStack_90;
          SVar18._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_02,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x3419a1a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar16._ticks = 0;
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x3419a29;
          bVar13 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)t1._ticks,(System_TimeSpan_o)SVar18._ticks,(MethodInfo *)0x0)
          ;
          if ((char)bVar13 == '\0') {
            return;
          }
          SVar33._dateData = (uint64_t)((Il2CppType *)pSVar17->m_Items)->data;
          SVar30._ticks = 1;
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x3419a52;
          pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)SVar33._dateData,1,
                               (MethodInfo_331B520 *)
                               pMStack_78->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now.fields._8_8_ = (System_Object_array *)0x0;
          if (pSStack_70 != (System_Object_array *)0x0) {
label_03419a5c:
            pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x3419a6a;
            (*(code *)pSStack_70->max_length)
                      (((Il2CppType *)pSStack_70->m_Items)[2].data,pAVar19,
                       *(undefined8 *)&((Il2CppType *)pSStack_70->m_Items)->bits);
            return;
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&((Il2CppType *)pSVar17->m_Items)->bits;
      SVar16._ticks = (int64_t)*ppIVar2;
      Var12 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (System_Object_array *)(ulong)*(ushort *)&((Il2CppType *)pSVar17->m_Items)[1].data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x34198df
        ;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar34 = (System_Object_array *)0x0;
      pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x34198f3;
      left.fields._8_8_ = pSVar31;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var12;
      SVar30._ticks = (int64_t)pSVar31;
      SVar33 = extraout_RDX.fields._dateData;
      SVar18._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pAVar9 = ((Il2CppType *)pSVar32->m_Items)->data;
      if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        SVar16._ticks = (int64_t)(pAVar9->_1).name;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x3419920;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341992d
        ;
        SVar30._ticks = SVar16._ticks;
        SVar33._dateData = SVar18._ticks;
        bVar13 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar18._ticks,(System_TimeSpan_o)SVar16._ticks,
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_03419969;
        SVar33._dateData = pSVar17->max_length;
        SVar30._ticks = 1;
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419956
        ;
        pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)SVar33._dateData,1,
                             (MethodInfo_331B380 *)
                             pMStack_78->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (pSStack_70 != (System_Object_array *)0x0) goto label_03419a5c;
        now.fields._8_8_ = (System_Object_array *)0x0;
      }
    }
  }
  pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419a87;
  il2cpp_runtime_helper_022b2c90();
  pIVar28 = (Il2CppClass *)(SVar30._ticks & 0xffffffff);
  pSVar25 = now.fields._8_8_;
  pSVar26 = (System_Object_array *)SVar30._ticks;
  pSStack_b0 = pSVar17;
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)SVar18._ticks;
  SStack_a0 = extraout_RDX.fields._dateData;
  pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)SVar16._ticks;
  if (g_data_057a8cee == '\0') {
    pIStack_d0 = (Il2CppClass *)0x3419aba;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cee = '\x01';
  }
  pIStack_c0 = (Il2CppClass *)0x0;
  __this_00 = *(Il2CppClass **)&((Il2CppType *)((System_Object_array *)SVar33._dateData)->m_Items)->bits;
  pIVar20 = extraout_RDX_00;
  if (__this_00 == (Il2CppClass *)0x0) {
label_03419dcd:
    pIStack_d0 = (Il2CppClass *)0x3419dd2;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar25 = *(System_Object_array **)
               (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x48);
    pSVar26 = (System_Object_array *)(SVar30._ticks & 0xff);
    pIStack_d0 = (Il2CppClass *)0x3419af4;
    bVar13 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                       (__this_00,pSVar26,&pIStack_c0);
    if ((char)bVar13 == '\0') {
      return;
    }
    pIVar20 = extraout_RDX_00;
    if (pIStack_c0 == (Il2CppClass *)0x0) goto label_03419dcd;
    *(undefined1 *)((long)&(pIStack_c0->_1).this_arg.bits + 2) = 0;
    pIVar20 = extraout_RDX_00;
    if (extraout_RDX_00 == (Il2CppClass *)0x0) {
      pSVar26 = *(System_Object_array **)
                 (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x118);
      pIStack_d0 = (Il2CppClass *)0x3419b34;
      __this_00 = "unknown_error";
      pIVar20 = (Il2CppClass *)
                ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error",(MethodInfo_331AB10 *)pSVar26);
      if (pIVar20 == (Il2CppClass *)0x0) goto label_03419dcd;
    }
    __this_00 = pIStack_c0;
    if (pIStack_c0 == (Il2CppClass *)0x0) goto label_03419dcd;
    if (*(char *)&(pIVar20->_1).name != '\0') {
      *(undefined2 *)&(pIStack_c0->_1).this_arg.bits = 1;
      pSVar26 = (System_Object_array *)(pIVar20->_1).namespaze;
      (pIStack_c0->_1).namespaze = (char *)pSVar26;
      pIStack_d0 = (Il2CppClass *)0x3419b6f;
      il2cpp_runtime_helper_022b4080(&(pIStack_c0->_1).namespaze);
      __this_00 = (Il2CppClass *)0x0;
      if (pIStack_c0 != (Il2CppClass *)0x0) {
        (pIStack_c0->_1).byval_arg.data = (void *)0x0;
        __this_00 = (Il2CppClass *)&(pIStack_c0->_1).byval_arg;
        pSVar26 = (System_Object_array *)0x0;
        pIStack_d0 = (Il2CppClass *)0x3419b90;
        il2cpp_runtime_helper_022b4080();
        pIVar29 = pIStack_c0;
        pSVar25 = (System_Object_array *)((System_Object_array *)SVar33._dateData)->max_length;
        if (pSVar25 != (System_Object_array *)0x0) {
          pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
          __this_00 = ((Il2CppType *)pSVar25->m_Items)[2].data;
          pIStack_d0 = (Il2CppClass *)0x3419bad;
          Var36 = (*(code *)pSVar25->max_length)();
          pIVar20 = pIVar29;
          if (pIVar29 != (Il2CppClass *)0x0) {
            *(unkbyte10 *)&(pIVar29->_1).byval_arg.bits = Var36;
            *(undefined2 *)((long)&(pIVar29->_1).this_arg.data + 6) = uStack_b2;
            *(undefined4 *)((long)&(pIVar29->_1).this_arg.data + 2) = uStack_b6;
            if (pIStack_c0 != (Il2CppClass *)0x0) {
              __this_00 = (Il2CppClass *)(pIStack_c0->_1).namespaze;
              pSVar26 = (System_Object_array *)0x0;
              pIStack_d0 = (Il2CppClass *)0x3419bf9;
              SVar33._dateData =
                   (uint64_t)
                   ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                             ((Il2CppObject *)__this_00,0,
                              *(MethodInfo_331B380 **)
                               (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) +
                               0x100));
              goto joined_r0x03419c04;
            }
          }
        }
      }
      goto label_03419dcd;
    }
    if ((char)(pIStack_c0->_1).this_arg.bits != '\0') {
      pAVar9 = ((Il2CppType *)((System_Object_array *)SVar33._dateData)->m_Items)->data;
      if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        if ((char)(pAVar9->_1).byval_arg.bits == '\0') goto label_03419d4a;
        pSVar26 = (pIVar20->_1).byval_arg.data;
        (pIStack_c0->_1).byval_arg.data = pSVar26;
        __this_00 = (Il2CppClass *)&(pIStack_c0->_1).byval_arg;
        pIStack_d0 = (Il2CppClass *)0x3419d07;
        il2cpp_runtime_helper_022b4080();
        if (pIStack_c0 != (Il2CppClass *)0x0) {
          __this_00 = (Il2CppClass *)(pIStack_c0->_1).namespaze;
          pSVar26 = (pIVar20->_1).byval_arg.data;
          pIStack_d0 = (Il2CppClass *)0x3419d34;
          SVar33._dateData =
               (uint64_t)
               ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                         ((Il2CppObject *)__this_00,(System_String_o *)pSVar26,
                          *(MethodInfo_331B660 **)
                           (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x140)
                         );
joined_r0x03419c04:
          pIVar29 = pIVar28;
          if (pIStack_c0 != (Il2CppClass *)0x0) goto label_03419c0a;
        }
      }
      goto label_03419dcd;
    }
label_03419d4a:
    *(undefined2 *)&(pIStack_c0->_1).this_arg.bits = 0x100;
    (pIStack_c0->_1).namespaze = (char *)0x0;
    pSVar26 = (pIVar20->_1).byval_arg.data;
    (pIStack_c0->_1).byval_arg.data = pSVar26;
    __this_00 = (Il2CppClass *)&(pIStack_c0->_1).byval_arg;
    pIStack_d0 = (Il2CppClass *)0x3419d69;
    il2cpp_runtime_helper_022b4080();
    pIVar29 = pIStack_c0;
    pSVar25 = (System_Object_array *)((System_Object_array *)SVar33._dateData)->max_length;
    if (pSVar25 == (System_Object_array *)0x0) goto label_03419dcd;
    pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
    __this_00 = ((Il2CppType *)pSVar25->m_Items)[2].data;
    pIStack_d0 = (Il2CppClass *)0x3419d82;
    Var36 = (*(code *)pSVar25->max_length)();
    pIVar28 = pIVar29;
    if (pIVar29 == (Il2CppClass *)0x0) goto label_03419dcd;
    *(unkbyte10 *)&(pIVar29->_1).byval_arg.bits = Var36;
    *(undefined4 *)((long)&(pIVar29->_1).this_arg.data + 2) = uStack_b6;
    *(undefined2 *)((long)&(pIVar29->_1).this_arg.data + 6) = uStack_b2;
    __this_00 = (pIVar20->_1).byval_arg.data;
    pSVar26 = (System_Object_array *)0x0;
    pIStack_d0 = (Il2CppClass *)0x3419dbc;
    SVar33._dateData =
         (uint64_t)
         ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                   ((System_String_o *)__this_00,0,
                    *(MethodInfo_331B520 **)
                     (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x108));
    if (pIStack_c0 == (Il2CppClass *)0x0) goto label_03419dcd;
label_03419c0a:
    __this_00 = (Il2CppClass *)(pIStack_c0->_1).name;
    pIVar28 = pIVar29;
    if (__this_00 == (Il2CppClass *)0x0) goto label_03419dcd;
    pSVar26 = *(System_Object_array **)
               (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x148);
    pIStack_d0 = (Il2CppClass *)0x3419c2e;
    now.fields._8_8_ =
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)__this_00,(MethodInfo_362E340 *)pSVar26);
    if ((pIStack_c0 == (Il2CppClass *)0x0) || (pcVar21 = (pIStack_c0->_1).name, pcVar21 == (char *)0x0))
    goto label_03419dcd;
    *(int *)(pcVar21 + 0x1c) = *(int *)(pcVar21 + 0x1c) + 1;
    iVar7 = *(int32_t *)(pcVar21 + 0x18);
    pcVar21[0x18] = '\0';
    pcVar21[0x19] = '\0';
    pcVar21[0x1a] = '\0';
    pcVar21[0x1b] = '\0';
    if (0 < iVar7) {
      __this_00 = *(Il2CppClass **)(pcVar21 + 0x10);
      pSVar26 = (System_Object_array *)0x0;
      pSVar25 = (System_Object_array *)0x0;
      pIStack_d0 = (Il2CppClass *)0x3419c6b;
      System_Array__Clear((System_Array_o *)__this_00,0,iVar7,(MethodInfo *)0x0);
    }
    if (now.fields._8_8_ == (System_Object_array *)0x0) goto label_03419dcd;
    if ((int)(now.fields._8_8_)->max_length < 1) {
      return;
    }
    pIVar28 = (Il2CppClass *)0x0;
    pIVar20 = (Il2CppClass *)0x0;
    if (((now.fields._8_8_)->max_length & 0xffffffff) != 0) {
      do {
        pIVar29 = (Il2CppClass *)(now.fields._8_8_)->m_Items[(long)pIVar20];
        if (pIVar29 != (Il2CppClass *)0x0) {
          pIVar28 = pIVar29;
          if (pIVar29 == (Il2CppClass *)0x0) goto label_03419dcd;
          __this_00 = (pIVar29->_1).element_class;
          pIStack_d0 = (Il2CppClass *)0x3419cd0;
          pSVar26 = (System_Object_array *)SVar33._dateData;
          (*(code *)(pIVar29->_1).namespaze)
                    (__this_00,SVar33._dateData,*(undefined8 *)&(pIVar29->_1).byval_arg.bits);
        }
        pIVar20 = (Il2CppClass *)((long)&(pIVar20->_1).image + 1);
        uVar6 = (uint)(now.fields._8_8_)->max_length;
        pSVar25 = (System_Object_array *)(long)(int)uVar6;
        if ((long)pSVar25 <= (long)pIVar20) {
          return;
        }
      } while (pIVar20 < (Il2CppClass *)(ulong)uVar6);
    }
  }
  pIStack_d0 = (Il2CppClass *)0x3419dd7;
  auVar35 = il2cpp_runtime_helper_022b2ca0();
  pcVar21 = auVar35._8_8_;
  uStack_100 = auVar35._0_8_;
  now_00.fields._8_8_ = pSVar25;
  SVar18._ticks = (int64_t)pSVar34;
  pIStack_f8 = pIVar20;
  pSStack_f0 = pSVar32;
  pIStack_e8 = (Il2CppClass *)t1._ticks;
  pSStack_e0 = now.fields._8_8_;
  pSStack_d8 = (System_Object_array *)SVar33._dateData;
  pIStack_d0 = pIVar28;
  if (g_data_057a8cef == '\0') {
    uStack_108 = 0x3419e0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    uStack_108 = 0x3419e1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cef = '\x01';
  }
  lVar14 = **(long **)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    uStack_108 = 0x3419e3e;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  uStack_108 = 0x3419e46;
  __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar14);
  uStack_108 = 0x3419e60;
  System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object____ctor
            (__this,*(MethodInfo_3161460 **)
                     (*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 8));
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(__this_00->_1).byval_arg.bits = __this;
  uStack_108 = 0x3419e70;
  il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg.bits);
  now.fields._8_8_ = (System_Object_array *)0x0;
  uStack_108 = 0x3419e7a;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (pSVar26 == (System_Object_array *)0x0) {
    uStack_108 = 0x341a059;
    uVar23 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    uStack_108 = 0x341a061;
    pSVar26 = (System_Object_array *)il2cpp_runtime_helper_023052d0(uVar23);
    uStack_108 = 0x341a070;
    paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    uStack_108 = 0x341a07d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)pSVar26,paramName,(MethodInfo *)0x0);
    uStack_108 = 0x341a088;
    now.fields._8_8_ = pSVar34;
    pSVar17 = pSVar26;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pSVar17 = (System_Object_array *)0x0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).name = (char *)pSVar26;
      uStack_108 = 0x3419ea3;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).name,pSVar26);
      if (pcVar21 == (char *)0x0) {
        lVar14 = *(long *)(*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          uStack_108 = 0x3419ec9;
          lVar14 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar14 + 0xe4) == 0) {
          uStack_108 = 0x3419eda;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar14 = *(long *)(*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          uStack_108 = 0x3419efa;
          lVar14 = il2cpp_runtime_helper_023009c0(lVar14);
        }
        pcVar21 = *(char **)(*(long *)(lVar14 + 0xb8) + 8);
        if (pcVar21 == (char *)0x0) {
          lVar14 = *(long *)(*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            uStack_108 = 0x3419f2b;
            lVar14 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar14 + 0xe4) == 0) {
            uStack_108 = 0x3419f3c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar14 = *(long *)(*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            uStack_108 = 0x3419f5c;
            il2cpp_runtime_helper_023009c0(lVar14);
          }
          uStack_108 = 0x3419f75;
          pcVar21 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          uStack_108 = 0x3419f94;
          System_Func_DateTimeOffset____ctor();
          lVar14 = *(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0);
          lVar22 = *(long *)(lVar14 + 0x28);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            uStack_108 = 0x3419fb4;
            lVar22 = il2cpp_runtime_helper_023009c0(lVar22);
            lVar14 = *(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0);
          }
          *(char **)(*(long *)(lVar22 + 0xb8) + 8) = pcVar21;
          lVar14 = *(long *)(lVar14 + 0x28);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            uStack_108 = 0x3419fdf;
            lVar14 = il2cpp_runtime_helper_023009c0(lVar14);
          }
          uStack_108 = 0x3419ff2;
          il2cpp_runtime_helper_022b4080(*(long *)(lVar14 + 0xb8) + 8,pcVar21);
        }
      }
      (__this_00->_1).namespaze = pcVar21;
      uStack_108 = 0x341a002;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).namespaze,pcVar21);
      if (pSVar25 == (System_Object_array *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          uStack_108 = 0x341a01f;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar25 = (System_Object_array *)**(undefined8 **)(TypeInfo_AottgQueryPolicy + 0xb8);
      }
      (__this_00->_1).byval_arg.data = pSVar25;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,pSVar25);
      return;
    }
  }
  uStack_108 = 0x341a08d;
  auVar35 = il2cpp_runtime_helper_022b2c90();
  uStack_108 = auVar35._0_8_;
  lVar14 = *(long *)&((Il2CppType *)pSVar17->m_Items)->bits;
  if (lVar14 != 0) {
    lStack_110 = 0x3262308;
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___FindEntry
              (lVar14,(ulong)now.fields._8_8_ & 0xff,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(auVar35._8_8_ + 0x20) + 0xc0) + 0x40) +
                                    0x20) + 0xc0) + 0x108));
    return;
  }
  lStack_110 = 0x341a0b8;
  il2cpp_runtime_helper_022b2c90();
  lStack_110 = 0;
  lVar14 = *(long *)(lVar14 + 0x28);
  if (lVar14 != 0) {
    now_00.fields._8_8_ =
         *(System_Object_array **)(*(long *)(*(long *)(extraout_RDX_01 + 0x20) + 0xc0) + 0x48);
    now.fields._8_8_ = (System_Object_array *)((ulong)now.fields._8_8_ & 0xff);
    uStack_118 = 0x341a0ed;
    bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (lVar14,now.fields._8_8_,&lStack_110);
    if ((char)bVar13 == '\0') {
      return;
    }
    if (lStack_110 != 0) {
      return;
    }
  }
  uStack_118 = 0x341a10c;
  uStack_118 = il2cpp_runtime_helper_022b2c90();
  __this_01 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar14 + 0x28);
  if (__this_01 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Clear
              (__this_01,
               *(MethodInfo_3162290 **)
                (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x60));
    return;
  }
  uStack_120 = 0x341a134;
  auVar35 = il2cpp_runtime_helper_022b2c90();
  uStack_120 = auVar35._0_8_;
  pSVar17 = *(System_Object_array **)&(__this_01->fields)._freeCount;
  if (pSVar17 != (System_Object_array *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Remove
              (pSVar17,(ulong)now.fields._8_8_ & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar35._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pSStack_128 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x341a168;
  il2cpp_runtime_helper_022b2c90();
  uVar27 = (ulong)now_00.fields._8_8_ & 0xffffffff;
  SVar16._ticks = (ulong)now.fields._8_8_ & 0xffffffff;
  pSStack_158 = (System_Object_array *)0x0;
  lVar14 = *(long *)(*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                              0xc0) + 0x70);
  pSVar32 = (System_Object_array *)SVar18._ticks;
  pSStack_150 = pSVar26;
  pcStack_148 = pcVar21;
  pIStack_140 = __this_00;
  pSStack_138 = pSVar25;
  pSStack_130 = pSVar34;
  pSStack_128 = __this;
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    pSStack_160 = (System_Object_array *)0x341a1ae;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  pSStack_160 = (System_Object_array *)0x341a1b6;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar14);
  pSVar25 = *(System_Object_array **)
             (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data + 0xc0) +
             0x78);
  pSStack_160 = (System_Object_array *)0x341a1d0;
  pSVar26 = pSVar15;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)pSVar15,
             (MethodInfo_27BBA90 *)pSVar25);
  pSVar34 = onResult_01;
  if (pSVar15 != (System_Object_array *)0x0) {
    pSVar15->bounds = (Il2CppArrayBounds *)pSVar17;
    pSStack_160 = (System_Object_array *)0x341a1ec;
    pSVar25 = pSVar17;
    il2cpp_runtime_helper_022b4080(&pSVar15->bounds);
    *(char *)&pSVar15->max_length = (char)SVar16._ticks;
    if (onResult_01 == (System_Object_array *)0x0) {
      return;
    }
    pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar17->m_Items)->bits;
    if (pSVar26 != (System_Object_array *)0x0) {
      now_00.fields._8_8_ =
           *(System_Object_array **)
            (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data + 0xc0) +
            0x48);
      pSVar25 = (System_Object_array *)((ulong)now.fields._8_8_ & 0xff);
      pSStack_160 = (System_Object_array *)0x341a221;
      bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (pSVar26,pSVar25,&pSStack_158);
      if ((char)bVar13 == '\0') {
        lVar14 = *(long *)(*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->
                                           data + 0xc0) + 0x58);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          pSStack_160 = (System_Object_array *)0x341a242;
          lVar14 = il2cpp_runtime_helper_023009c0();
        }
        pSStack_160 = (System_Object_array *)0x341a24a;
        SVar16._ticks = il2cpp_runtime_helper_023052d0(lVar14);
        pSVar25 = *(System_Object_array **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                             0xc0) + 0x88);
        pSStack_160 = (System_Object_array *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)SVar16._ticks,
                   (MethodInfo_31EFB10 *)pSVar25);
        pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar17->m_Items)->bits;
        pSStack_158 = (System_Object_array *)SVar16._ticks;
        if (pSVar26 == (System_Object_array *)0x0) goto label_0341a453;
        pSVar25 = (System_Object_array *)(ulong)*(uint *)&pSVar15->max_length;
        pSStack_160 = (System_Object_array *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (pSVar26,pSVar25,SVar16._ticks,
                   *(undefined8 *)
                    (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                              0xc0) + 0x90));
      }
      now_00.fields._8_8_ = (System_Object_array *)pSVar17->max_length;
      if (now_00.fields._8_8_ != (System_Object_array *)0x0) {
        pSVar25 = *(System_Object_array **)&((Il2CppType *)(now_00.fields._8_8_)->m_Items)->bits;
        pSVar26 = ((Il2CppType *)(now_00.fields._8_8_)->m_Items)[2].data;
        pSStack_160 = (System_Object_array *)0x341a2ad;
        auVar35 = (*(code *)(now_00.fields._8_8_)->max_length)();
        if ((char)uVar27 == '\0') {
          now_00.fields._8_8_ = (System_Object_array *)(auVar35._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                             0xc0) + 0x98);
          pSStack_160 = (System_Object_array *)0x341a2d8;
          now_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar35._0_8_;
          pSVar25 = pSStack_158;
          pSVar26 = pSVar17;
          pSVar32 = onResult_01;
          bVar13 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pSVar17,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pSStack_158,
                              now_00,(System_Action_AottgQueryResult_TValue___o *)onResult_01,in_R9);
          if ((char)bVar13 != '\0') {
            return;
          }
        }
        if (pSStack_158 != (System_Object_array *)0x0) {
          if ((char)((Il2CppType *)pSStack_158->m_Items)[1].bits == '\0') {
            pSStack_160 = (System_Object_array *)0x341a327;
            pSVar25 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 200));
          }
          else {
            pSStack_160 = (System_Object_array *)0x341a30e;
            pSVar25 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)pSStack_158->max_length,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 0xa8));
          }
          pSVar26 = ((Il2CppType *)onResult_01->m_Items)[2].data;
          pSStack_160 = (System_Object_array *)0x341a339;
          (*(code *)onResult_01->max_length)
                    (pSVar26,pSVar25,*(undefined8 *)&((Il2CppType *)onResult_01->m_Items)->bits);
          if ((pSStack_158 != (System_Object_array *)0x0) &&
             (pSVar26 = (System_Object_array *)pSStack_158->bounds, pSVar26 != (System_Object_array *)0x0)) {
            now_00.fields._8_8_ =
                 *(System_Object_array **)
                  (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                            0xc0) + 0xd8);
            piVar1 = (int *)((long)&pSVar26->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar8 = pSVar26->bounds;
            if (pIVar8 != (Il2CppArrayBounds *)0x0) {
              uVar6 = *(uint *)&pSVar26->max_length;
              pSVar25 = onResult_01;
              if (uVar6 < (uint)pIVar8[1].lower_bound) {
                now_00.fields._8_8_ = (System_Object_array *)(ulong)(uVar6 + 1);
                *(uint *)&pSVar26->max_length = uVar6 + 1;
                pSVar26 = (System_Object_array *)(&pIVar8[2].length + (int)uVar6);
                (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)onResult_01;
                pSStack_160 = (System_Object_array *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pSStack_160 = (System_Object_array *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar26,&onResult_01->obj,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0) +
                            0x70));
              }
              if (pSStack_158 != (System_Object_array *)0x0) {
                if (*(char *)((long)&((Il2CppType *)pSStack_158->m_Items)[1].bits + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&((Il2CppType *)pSStack_158->m_Items)[1].bits + 2) = 1;
                pIVar8 = pSVar17->bounds;
                uVar4 = *(undefined1 *)&pSVar15->max_length;
                pSVar34 = (System_Object_array *)CONCAT71((int7)((ulong)onResult_01 >> 8),uVar4);
                lVar14 = *(long *)(*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 0xe8);
                if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                  pSStack_160 = (System_Object_array *)0x341a3fe;
                  lVar14 = il2cpp_runtime_helper_023009c0();
                }
                pSStack_160 = (System_Object_array *)0x341a406;
                pSVar17 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar14);
                now_00.fields._8_8_ =
                     *(System_Object_array **)
                      (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                0xc0) + 0xf0);
                pSStack_160 = (System_Object_array *)0x341a42d;
                pSVar25 = pSVar15;
                pSVar26 = pSVar17;
                System_Action_object____ctor();
                SVar16._ticks = 0;
                if (pIVar8 != (Il2CppArrayBounds *)0x0) {
                  pSStack_160 = (System_Object_array *)0x341a444;
                  (**(code **)&pIVar8[1].lower_bound)
                            (pIVar8[4].length,uVar4,pSVar17,*(undefined8 *)&pIVar8[2].lower_bound);
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
  pSStack_160 = (System_Object_array *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  now.fields._8_8_ = (System_Object_array *)((ulong)now_00.fields._8_8_ & 0xffffffff);
  SVar30._ticks = (int64_t)pSVar25;
  SVar33._dateData = (uint64_t)pSVar26;
  pMStack_198 = (MethodInfo_3319840 *)in_R9;
  pSStack_190 = pSVar32;
  pSStack_188 = pSVar15;
  pSStack_180 = pSVar34;
  uStack_178 = uVar27;
  pSStack_170 = (System_Object_array *)SVar18._ticks;
  pSStack_168 = pSVar17;
  pSStack_160 = (System_Object_array *)SVar16._ticks;
  if (g_data_057a8cf0 == '\0') {
    pIStack_1b8 = (Il2CppClass *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pIStack_1b8 = (Il2CppClass *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pIStack_1b8 = (Il2CppClass *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    SVar33._dateData = (uint64_t)&TypeInfo_TimeSpan;
    pIStack_1b8 = (Il2CppClass *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_1b0 = '\0';
  uStack_1af = 0;
  uStack_1a8 = 0;
  if (pSVar25 != (System_Object_array *)0x0) {
    if ((char)((Il2CppType *)pSVar25->m_Items)[1].bits == '\0') {
label_0341a589:
      if (*(char *)((long)&((Il2CppType *)pSVar25->m_Items)[1].bits + 1) == '\0') {
        return;
      }
      pvVar10 = ((Il2CppType *)pSVar26->m_Items)->data;
      if (pvVar10 != (void *)0x0) {
        cStack_1b0 = *(char *)((long)pvVar10 + 0x18);
        uStack_1a8 = *(undefined8 *)((long)pvVar10 + 0x20);
        if (cStack_1b0 == '\0') {
          return;
        }
        puVar3 = &((Il2CppType *)pSVar25->m_Items)->bits;
        SVar16._ticks = *(int64_t *)puVar3;
        Var12 = *(unkuint10 *)puVar3;
        SVar18._ticks = (int64_t)*(ushort *)&((Il2CppType *)pSVar25->m_Items)[1].data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pIStack_1b8 = (Il2CppClass *)0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_1b8 = (Il2CppClass *)0x341a5ed;
        left_02.fields._8_8_ = now.fields._8_8_;
        left_02.fields._dateTime.fields._dateData = extraout_RDX_02.fields._dateData;
        right_02.fields._10_6_ = 0;
        right_02.fields._0_10_ = Var12;
        now_00.fields._8_8_ = (System_Object_array *)SVar18._ticks;
        SVar33 = extraout_RDX_02.fields._dateData;
        t1_00 = System_DateTimeOffset__op_Subtraction(left_02,right_02,(MethodInfo *)0x0);
        pvVar10 = ((Il2CppType *)pSVar26->m_Items)->data;
        SVar30._ticks = (int64_t)now.fields._8_8_;
        if (pvVar10 != (void *)0x0) {
          cStack_1b0 = *(char *)((long)pvVar10 + 0x18);
          uStack_1a8 = *(undefined8 *)((long)pvVar10 + 0x20);
          pIStack_1b8 = (Il2CppClass *)0x341a61f;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &cStack_1b0;
          SVar18._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_03,method_01);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pIStack_1b8 = (Il2CppClass *)0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar16._ticks = 0;
          pIStack_1b8 = (Il2CppClass *)0x341a649;
          bVar13 = System_TimeSpan__op_LessThan(t1_00,(System_TimeSpan_o)SVar18._ticks,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return;
          }
          SVar33._dateData = (uint64_t)((Il2CppType *)pSVar25->m_Items)->data;
          SVar30._ticks = 1;
          pIStack_1b8 = (Il2CppClass *)0x341a672;
          pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)SVar33._dateData,1,
                               (MethodInfo_331B520 *)
                               pMStack_198->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now_00.fields._8_8_ = (System_Object_array *)0x0;
          if (pSStack_190 != (System_Object_array *)0x0) {
label_0341a67c:
            pIStack_1b8 = (Il2CppClass *)0x341a68a;
            (*(code *)pSStack_190->max_length)
                      (((Il2CppType *)pSStack_190->m_Items)[2].data,pAVar19,
                       *(undefined8 *)&((Il2CppType *)pSStack_190->m_Items)->bits);
            return;
          }
        }
      }
    }
    else {
      puVar3 = &((Il2CppType *)pSVar25->m_Items)->bits;
      SVar16._ticks = *(int64_t *)puVar3;
      Var12 = *(unkuint10 *)puVar3;
      now_00.fields._8_8_ = (System_Object_array *)(ulong)*(ushort *)&((Il2CppType *)pSVar25->m_Items)[1].data
      ;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pIStack_1b8 = (Il2CppClass *)0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_1b8 = (Il2CppClass *)0x341a513;
      left_01.fields._8_8_ = now.fields._8_8_;
      left_01.fields._dateTime.fields._dateData = extraout_RDX_02.fields._dateData;
      right_01.fields._10_6_ = 0;
      right_01.fields._0_10_ = Var12;
      SVar30._ticks = (int64_t)now.fields._8_8_;
      SVar33 = extraout_RDX_02.fields._dateData;
      SVar18._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left_01,right_01,(MethodInfo *)0x0);
      pvVar10 = ((Il2CppType *)pSVar26->m_Items)->data;
      if (pvVar10 != (void *)0x0) {
        SVar16._ticks = ((System_TimeSpan_Fields *)((long)pvVar10 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pIStack_1b8 = (Il2CppClass *)0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_1b8 = (Il2CppClass *)0x341a54d;
        SVar30._ticks = SVar16._ticks;
        SVar33._dateData = SVar18._ticks;
        bVar13 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar18._ticks,(System_TimeSpan_o)SVar16._ticks,
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_0341a589;
        SVar33._dateData = pSVar25->max_length;
        SVar30._ticks = 1;
        pIStack_1b8 = (Il2CppClass *)0x341a576;
        pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)SVar33._dateData,1,
                             (MethodInfo_331B380 *)
                             pMStack_198->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (pSStack_190 != (System_Object_array *)0x0) goto label_0341a67c;
        now_00.fields._8_8_ = (System_Object_array *)0x0;
      }
    }
  }
  pIStack_1b8 = (Il2CppClass *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pSStack_1d0 = pSVar25;
  pSStack_1c8 = (System_Object_array *)SVar18._ticks;
  SStack_1c0 = extraout_RDX_02.fields._dateData;
  pIStack_1b8 = (Il2CppClass *)SVar16._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  lStack_1e0 = 0;
  lVar14 = *(long *)&((Il2CppType *)((System_Object_array *)SVar33._dateData)->m_Items)->bits;
  if (lVar14 != 0) {
    bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (lVar14,SVar30._ticks & 0xff,&lStack_1e0);
    if ((char)bVar13 == '\0') {
      return;
    }
    if ((lStack_1e0 != 0) &&
       (((*(undefined1 *)(lStack_1e0 + 0x3a) = 0, pAVar24 = extraout_RDX_03,
         extraout_RDX_03 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pAVar24 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                              ((System_String_o *)"unknown_error",
                               *(MethodInfo_331AB10 **)
                                (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0)
                                + 0x118)),
         pAVar24 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) && (lStack_1e0 != 0)))) {
      if ((char)(pAVar24->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(lStack_1e0 + 0x38) == '\0') {
label_0341a96a:
          *(undefined2 *)(lStack_1e0 + 0x38) = 0x100;
          *(undefined8 *)(lStack_1e0 + 0x18) = 0;
          *(System_String_o **)(lStack_1e0 + 0x20) = (pAVar24->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          lVar14 = lStack_1e0;
          if (((char *)((System_Object_array *)SVar33._dateData)->max_length != (char *)0x0) &&
             (Var36 = (**(code **)((char *)((System_Object_array *)SVar33._dateData)->max_length + 0x18))(),
             lVar14 != 0)) {
            *(unkbyte10 *)(lVar14 + 0x28) = Var36;
            *(undefined4 *)(lVar14 + 0x32) = uStack_1d6;
            *(undefined2 *)(lVar14 + 0x36) = uStack_1d2;
            pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((pAVar24->fields)._Error_k__BackingField,0,
                                 *(MethodInfo_331B520 **)
                                  (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0
                                            ) + 0x108));
joined_r0x0341a9e7:
            if (lStack_1e0 != 0) goto label_0341a82a;
          }
        }
        else {
          pvVar10 = ((Il2CppType *)((System_Object_array *)SVar33._dateData)->m_Items)->data;
          if (pvVar10 == (void *)0x0) goto label_0341a9ed;
          if (*(char *)((long)pvVar10 + 0x28) == '\0') goto label_0341a96a;
          *(System_String_o **)(lStack_1e0 + 0x20) = (pAVar24->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          if ((lStack_1e0 == 0) ||
             (pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  (*(Il2CppObject **)(lStack_1e0 + 0x18),
                                   (pAVar24->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data +
                                              0xc0) + 0x140)), lStack_1e0 == 0)) goto label_0341a9ed;
label_0341a82a:
          if (((*(System_Collections_Generic_List_object__o **)(lStack_1e0 + 0x10) !=
                (System_Collections_Generic_List_object__o *)0x0) &&
              (now.fields._8_8_ =
                    System_Collections_Generic_List_object___ToArray
                              (*(System_Collections_Generic_List_object__o **)(lStack_1e0 + 0x10),
                               *(MethodInfo_362E340 **)
                                (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0)
                                + 0x148)), lStack_1e0 != 0)) &&
             (lVar14 = *(long *)(lStack_1e0 + 0x10), lVar14 != 0)) {
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            iVar7 = *(int32_t *)(lVar14 + 0x18);
            *(undefined4 *)(lVar14 + 0x18) = 0;
            if (0 < iVar7) {
              System_Array__Clear(*(System_Array_o **)(lVar14 + 0x10),0,iVar7,(MethodInfo *)0x0);
            }
            if (now.fields._8_8_ != (System_Object_array *)0x0) {
              if ((int)(now.fields._8_8_)->max_length < 1) {
                return;
              }
              uVar27 = 0;
              if (((now.fields._8_8_)->max_length & 0xffffffff) != 0) {
                do {
                  pIVar11 = (now.fields._8_8_)->m_Items[uVar27];
                  if (pIVar11 != (Il2CppObject *)0x0) {
                    if (pIVar11 == (Il2CppObject *)0x0) goto label_0341a9ed;
                    (*pIVar11[1].monitor)(pIVar11[4].klass,pAVar19,pIVar11[2].monitor);
                  }
                  uVar27 = uVar27 + 1;
                  uVar6 = (uint)(now.fields._8_8_)->max_length;
                  if ((long)(int)uVar6 <= (long)uVar27) {
                    return;
                  }
                } while (uVar27 < uVar6);
              }
              goto label_0341a9f2;
            }
          }
        }
      }
      else {
        *(undefined2 *)(lStack_1e0 + 0x38) = 1;
        *(Il2CppObject **)(lStack_1e0 + 0x18) = (pAVar24->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(lStack_1e0 + 0x18);
        if (lStack_1e0 != 0) {
          *(undefined8 *)(lStack_1e0 + 0x20) = 0;
          il2cpp_runtime_helper_022b4080(lStack_1e0 + 0x20,0);
          lVar14 = lStack_1e0;
          if (((char *)((System_Object_array *)SVar33._dateData)->max_length != (char *)0x0) &&
             (Var36 = (**(code **)((char *)((System_Object_array *)SVar33._dateData)->max_length + 0x18))(),
             lVar14 != 0)) {
            *(unkbyte10 *)(lVar14 + 0x28) = Var36;
            *(undefined2 *)(lVar14 + 0x36) = uStack_1d2;
            *(undefined4 *)(lVar14 + 0x32) = uStack_1d6;
            if (lStack_1e0 != 0) {
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                  (*(Il2CppObject **)(lStack_1e0 + 0x18),0,
                                   *(MethodInfo_331B380 **)
                                    (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data +
                                              0xc0) + 0x100));
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


// ApplicationManagers.Changelog.AottgChangelogService$$GetLatest
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetLatest (System_Action_AottgChangelogResult_ChangelogEntryResponse___o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x44cac30

void ApplicationManagers_Changelog_AottgChangelogService__GetLatest
               (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *onResult,
               bool_conflict forceRefresh,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  uint *puVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  int32_t iVar7;
  Il2CppArrayBounds *pIVar8;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAVar9;
  void *pvVar10;
  Il2CppObject *pIVar11;
  System_Action_AottgChangelogResult_T___o *onResult_00;
  unkuint10 Var12;
  bool_conflict bVar13;
  long lVar14;
  System_Object_array *pSVar15;
  System_TimeSpan_Fields SVar16;
  System_Object_array *pSVar17;
  System_TimeSpan_Fields SVar18;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar19;
  System_TimeSpan_Fields t1;
  Il2CppClass *pIVar20;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  char *pcVar21;
  long lVar22;
  undefined8 uVar23;
  System_String_o *paramName;
  System_TimeSpan_o t1_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar24;
  System_Object_array *pSVar25;
  System_Object_array *pSVar26;
  System_DateTime_o extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  long extraout_RDX_01;
  System_Object_array *onResult_01;
  System_DateTime_o extraout_RDX_02;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_03;
  ulong uVar27;
  Il2CppClass *pIVar28;
  Il2CppClass *pIVar29;
  System_TimeSpan_Fields SVar30;
  System_Object_array *pSVar31;
  System_Object_array *pSVar32;
  System_DateTime_Fields SVar33;
  Il2CppClass *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_Object_array *pSVar34;
  MethodInfo_331A460 *in_R9;
  undefined1 auVar35 [16];
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_02;
  System_DateTimeOffset_o left_01;
  System_DateTimeOffset_o left_02;
  System_Nullable_TimeSpan__o __this_03;
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o now_00;
  System_DateTimeOffset_o right_01;
  System_DateTimeOffset_o right_02;
  unkbyte10 Var36;
  long lStack_1e0;
  undefined4 uStack_1d6;
  undefined2 uStack_1d2;
  System_Object_array *pSStack_1d0;
  System_Object_array *pSStack_1c8;
  System_DateTime_Fields SStack_1c0;
  Il2CppClass *pIStack_1b8;
  char cStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  MethodInfo_3319840 *pMStack_198;
  System_Object_array *pSStack_190;
  System_Object_array *pSStack_188;
  System_Object_array *pSStack_180;
  ulong uStack_178;
  System_Object_array *pSStack_170;
  System_Object_array *pSStack_168;
  System_Object_array *pSStack_160;
  System_Object_array *pSStack_158;
  System_Object_array *pSStack_150;
  char *pcStack_148;
  Il2CppClass *pIStack_140;
  System_Object_array *pSStack_138;
  System_Object_array *pSStack_130;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  Il2CppClass *pIStack_f8;
  System_Object_array *pSStack_f0;
  Il2CppClass *pIStack_e8;
  System_Object_array *pSStack_e0;
  System_Object_array *pSStack_d8;
  Il2CppClass *pIStack_d0;
  Il2CppClass *pIStack_c0;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  System_Object_array *pSStack_b0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_a8;
  System_DateTime_Fields SStack_a0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_98;
  char cStack_90;
  undefined7 uStack_8f;
  void *pvStack_88;
  MethodInfo_3319840 *pMStack_78;
  System_Object_array *pSStack_70;
  System_Object_array *pSStack_68;
  System_Object_array *pSStack_60;
  System_Object_array *pSStack_58;
  System_Object_array *pSStack_50;
  System_Object_array *pSStack_48;
  System_Object_array *pSStack_40;
  System_Object_array *pSStack_38;
  undefined8 uStack_30;
  MethodInfo_37EC980 *method_00;
  MethodInfo_37EC980 *method_01;
  
  if (g_data_057aeaf7 == '\0') {
    uStack_30 = 0x44cac53;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_ChangelogEntryResponse);
    uStack_30 = 0x44cac5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Ready_ChangelogEntryResponse);
    uStack_30 = 0x44cac6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    uStack_30 = 0x44cac77;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    uStack_30 = 0x44cac83;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetLatest_b__0);
    uStack_30 = 0x44cac8f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    uStack_30 = 0x44cac9b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    g_data_057aeaf7 = '\x01';
  }
  uStack_30 = 0x44cacb1;
  pSVar25 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
  uStack_30 = 0x44cacbe;
  now.fields._8_8_ = pSVar25;
  System_Object___ctor((Il2CppObject *)pSVar25,(MethodInfo *)0x0);
  if (pSVar25 == (System_Object_array *)0x0) {
label_044cadbf:
    uStack_30 = 0x44cadc4;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&(now.fields._8_8_)->obj,(MethodInfo *)0x0);
    return;
  }
  pSVar25->bounds = (Il2CppArrayBounds *)onResult;
  uStack_30 = 0x44cacda;
  il2cpp_runtime_helper_022b4080(&pSVar25->bounds,onResult);
  onResult_00 = (System_Action_AottgChangelogResult_T___o *)pSVar25->bounds;
  if (*(int *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 0xc) + 4) == 0) {
    uStack_30 = 0x44cacf6;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_30 = 0x44cad08;
  bVar13 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_(onResult_00,MethodInfo_Boolean_Ready_ChangelogEntryResponse);
  if ((char)bVar13 == '\0') {
    return;
  }
  if (*(int *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 0xc) + 4) == 0) {
    uStack_30 = 0x44cad21;
    il2cpp_runtime_helper_02337ed0();
  }
  lVar14 = *(long *)(*(long *)((long)((Il2CppType *)TypeInfo_AottgChangelogService->m_Items + 9) + 8) + 8);
  now.fields._8_8_ = TypeInfo_AottgChangelogService;
  if (lVar14 == 0) goto label_044cadbf;
  pSVar25 = *(System_Object_array **)(lVar14 + 0x28);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    uStack_30 = 0x44cad55;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  uStack_30 = 0x44cad72;
  pSVar26 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_ChangelogEntryResponse);
  uStack_30 = 0x44cad8c;
  now.fields._8_8_ = pSVar26;
  System_Action_object____ctor();
  SVar18._ticks = (int64_t)MethodInfo_Void_Get;
  if (pSVar25 == (System_Object_array *)0x0) goto label_044cadbf;
  SVar16._ticks = (int64_t)bVar5;
  now_00.fields._8_8_ = (System_Object_array *)(ulong)(forceRefresh & 0xff);
  pSStack_38 = (System_Object_array *)0x0;
  lVar14 = *(long *)(*(long *)((long)((Il2CppType *)MethodInfo_Void_Get->m_Items)->data + 0xc0) + 0x70);
  now.fields._8_8_ = now_00.fields._8_8_;
  pSVar34 = MethodInfo_Void_Get;
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    pSStack_40 = (System_Object_array *)0x341958e;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  pSStack_40 = (System_Object_array *)0x3419596;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar14);
  pSVar17 = *(System_Object_array **)
             (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data + 0xc0) +
             0x78);
  pSStack_40 = (System_Object_array *)0x34195b0;
  pSVar32 = pSVar15;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)pSVar15,
             (MethodInfo_27BBA50 *)pSVar17);
  if (pSVar15 != (System_Object_array *)0x0) {
    pSVar15->bounds = (Il2CppArrayBounds *)pSVar25;
    pSStack_40 = (System_Object_array *)0x34195cc;
    pSVar17 = pSVar25;
    il2cpp_runtime_helper_022b4080(&pSVar15->bounds);
    *(byte *)&pSVar15->max_length = bVar5;
    if (pSVar26 == (System_Object_array *)0x0) {
      return;
    }
    pSVar32 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
    if (pSVar32 != (System_Object_array *)0x0) {
      now.fields._8_8_ =
           *(System_Object_array **)
            (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data + 0xc0) +
            0x48);
      pSStack_40 = (System_Object_array *)0x3419601;
      pSVar17 = (System_Object_array *)SVar16._ticks;
      bVar13 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                         (pSVar32,SVar16._ticks,&pSStack_38);
      if ((char)bVar13 == '\0') {
        lVar14 = *(long *)(*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->
                                           data + 0xc0) + 0x58);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          pSStack_40 = (System_Object_array *)0x3419622;
          lVar14 = il2cpp_runtime_helper_023009c0();
        }
        pSStack_40 = (System_Object_array *)0x341962a;
        SVar16._ticks = il2cpp_runtime_helper_023052d0(lVar14);
        pSVar17 = *(System_Object_array **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                             0xc0) + 0x88);
        pSStack_40 = (System_Object_array *)0x3419647;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)SVar16._ticks,
                   (MethodInfo_31EFAA0 *)pSVar17);
        pSVar32 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
        pSStack_38 = (System_Object_array *)SVar16._ticks;
        if (pSVar32 == (System_Object_array *)0x0) goto label_03419833;
        pSVar17 = (System_Object_array *)(ulong)*(uint *)&pSVar15->max_length;
        pSStack_40 = (System_Object_array *)0x3419675;
        System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___set_Item
                  (pSVar32,pSVar17,SVar16._ticks,
                   *(undefined8 *)
                    (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                              0xc0) + 0x90));
      }
      now.fields._8_8_ = (System_Object_array *)pSVar25->max_length;
      if (now.fields._8_8_ != (System_Object_array *)0x0) {
        pSVar17 = *(System_Object_array **)&((Il2CppType *)(now.fields._8_8_)->m_Items)->bits;
        pSVar32 = ((Il2CppType *)(now.fields._8_8_)->m_Items)[2].data;
        pSStack_40 = (System_Object_array *)0x341968d;
        auVar35 = (*(code *)(now.fields._8_8_)->max_length)();
        if ((char)forceRefresh == '\0') {
          now.fields._8_8_ = (System_Object_array *)(auVar35._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                             0xc0) + 0x98);
          pSStack_40 = (System_Object_array *)0x34196b8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar35._0_8_;
          pSVar17 = pSStack_38;
          pSVar32 = pSVar25;
          pSVar34 = pSVar26;
          bVar13 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pSVar25,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pSStack_38,now,
                              (System_Action_AottgQueryResult_TValue___o *)pSVar26,(MethodInfo_3319840 *)in_R9
                             );
          if ((char)bVar13 != '\0') {
            return;
          }
        }
        if (pSStack_38 != (System_Object_array *)0x0) {
          if ((char)((Il2CppType *)pSStack_38->m_Items)[1].bits == '\0') {
            pSStack_40 = (System_Object_array *)0x3419707;
            pSVar17 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 200));
          }
          else {
            pSStack_40 = (System_Object_array *)0x34196ee;
            pSVar17 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)pSStack_38->max_length,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 0xa8));
          }
          pSVar32 = ((Il2CppType *)pSVar26->m_Items)[2].data;
          pSStack_40 = (System_Object_array *)0x3419719;
          (*(code *)pSVar26->max_length)
                    (pSVar32,pSVar17,*(undefined8 *)&((Il2CppType *)pSVar26->m_Items)->bits);
          if ((pSStack_38 != (System_Object_array *)0x0) &&
             (pSVar32 = (System_Object_array *)pSStack_38->bounds, pSVar32 != (System_Object_array *)0x0)) {
            now.fields._8_8_ =
                 *(System_Object_array **)
                  (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                            0xc0) + 0xd8);
            piVar1 = (int *)((long)&pSVar32->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar8 = pSVar32->bounds;
            if (pIVar8 != (Il2CppArrayBounds *)0x0) {
              uVar6 = *(uint *)&pSVar32->max_length;
              pSVar17 = pSVar26;
              if (uVar6 < (uint)pIVar8[1].lower_bound) {
                now.fields._8_8_ = (System_Object_array *)(ulong)(uVar6 + 1);
                *(uint *)&pSVar32->max_length = uVar6 + 1;
                pSVar32 = (System_Object_array *)(&pIVar8[2].length + (int)uVar6);
                (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)pSVar26;
                pSStack_40 = (System_Object_array *)0x341977a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pSStack_40 = (System_Object_array *)0x341979f;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar32,(Il2CppObject *)pSVar26,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x70)
                          );
              }
              if (pSStack_38 != (System_Object_array *)0x0) {
                if (*(char *)((long)&((Il2CppType *)pSStack_38->m_Items)[1].bits + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&((Il2CppType *)pSStack_38->m_Items)[1].bits + 2) = 1;
                pIVar8 = pSVar25->bounds;
                uVar4 = *(undefined1 *)&pSVar15->max_length;
                pSVar26 = (System_Object_array *)CONCAT71((int7)((ulong)pSVar26 >> 8),uVar4);
                lVar14 = *(long *)(*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 0xe8);
                if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                  pSStack_40 = (System_Object_array *)0x34197de;
                  lVar14 = il2cpp_runtime_helper_023009c0();
                }
                pSStack_40 = (System_Object_array *)0x34197e6;
                pSVar25 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar14);
                now.fields._8_8_ =
                     *(System_Object_array **)
                      (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                0xc0) + 0xf0);
                pSStack_40 = (System_Object_array *)0x341980d;
                pSVar17 = pSVar15;
                pSVar32 = pSVar25;
                System_Action_object____ctor();
                SVar16._ticks = 0;
                if (pIVar8 != (Il2CppArrayBounds *)0x0) {
                  pSStack_40 = (System_Object_array *)0x3419824;
                  (**(code **)&pIVar8[1].lower_bound)
                            (pIVar8[4].length,uVar4,pSVar25,*(undefined8 *)&pIVar8[2].lower_bound);
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
  pSStack_40 = (System_Object_array *)0x3419838;
  il2cpp_runtime_helper_022b2c90();
  pSStack_50 = (System_Object_array *)SVar18._ticks;
  pSVar31 = (System_Object_array *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar30._ticks = (int64_t)pSVar17;
  SVar33._dateData = (uint64_t)pSVar32;
  pMStack_78 = (MethodInfo_3319840 *)in_R9;
  pSStack_70 = pSVar34;
  pSStack_68 = pSVar15;
  pSStack_60 = pSVar26;
  pSStack_58 = now_00.fields._8_8_;
  pSStack_48 = pSVar25;
  pSStack_40 = (System_Object_array *)SVar16._ticks;
  if (g_data_057a8ced == '\0') {
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419879;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419885;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419891;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    SVar33._dateData = (uint64_t)&TypeInfo_TimeSpan;
    pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341989d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ced = '\x01';
  }
  cStack_90 = '\0';
  uStack_8f = 0;
  pvStack_88 = (void *)0x0;
  t1._ticks = (int64_t)pSVar31;
  if (pSVar17 != (System_Object_array *)0x0) {
    if (*(char *)&((Il2CppType *)pSVar17->m_Items)[1].bits == '\0') {
label_03419969:
      if (*(char *)((long)&((Il2CppType *)pSVar17->m_Items)[1].bits + 1) == '\0') {
        return;
      }
      pAVar9 = ((Il2CppType *)pSVar32->m_Items)->data;
      if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        cStack_90 = *(char *)&(pAVar9->_1).namespaze;
        pvStack_88 = (pAVar9->_1).byval_arg.data;
        if (cStack_90 == '\0') {
          return;
        }
        ppIVar2 = (Il2CppType **)&((Il2CppType *)pSVar17->m_Items)->bits;
        SVar16._ticks = (int64_t)*ppIVar2;
        Var12 = *(unkuint10 *)ppIVar2;
        SVar18._ticks = (int64_t)*(ushort *)&((Il2CppType *)pSVar17->m_Items)[1].data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x34199b9;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar34 = (System_Object_array *)0x0;
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x34199cd
        ;
        left_00.fields._8_8_ = pSVar31;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var12;
        now.fields._8_8_ = (System_Object_array *)SVar18._ticks;
        SVar33 = extraout_RDX.fields._dateData;
        t1._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pAVar9 = ((Il2CppType *)pSVar32->m_Items)->data;
        SVar30._ticks = (int64_t)pSVar31;
        if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
          cStack_90 = *(char *)&(pAVar9->_1).namespaze;
          pvStack_88 = (pAVar9->_1).byval_arg.data;
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x34199ff;
          __this_02.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_02.fields._0_8_ = &cStack_90;
          SVar18._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_02,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x3419a1a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar16._ticks = 0;
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x3419a29;
          bVar13 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)t1._ticks,(System_TimeSpan_o)SVar18._ticks,(MethodInfo *)0x0)
          ;
          if ((char)bVar13 == '\0') {
            return;
          }
          SVar33._dateData = (uint64_t)((Il2CppType *)pSVar17->m_Items)->data;
          SVar30._ticks = 1;
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x3419a52;
          pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)SVar33._dateData,1,
                               (MethodInfo_331B520 *)
                               pMStack_78->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now.fields._8_8_ = (System_Object_array *)0x0;
          if (pSStack_70 != (System_Object_array *)0x0) {
label_03419a5c:
            pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x3419a6a;
            (*(code *)pSStack_70->max_length)
                      (((Il2CppType *)pSStack_70->m_Items)[2].data,pAVar19,
                       *(undefined8 *)&((Il2CppType *)pSStack_70->m_Items)->bits);
            return;
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&((Il2CppType *)pSVar17->m_Items)->bits;
      SVar16._ticks = (int64_t)*ppIVar2;
      Var12 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (System_Object_array *)(ulong)*(ushort *)&((Il2CppType *)pSVar17->m_Items)[1].data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x34198df
        ;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar34 = (System_Object_array *)0x0;
      pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x34198f3;
      left.fields._8_8_ = pSVar31;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var12;
      SVar30._ticks = (int64_t)pSVar31;
      SVar33 = extraout_RDX.fields._dateData;
      SVar18._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pAVar9 = ((Il2CppType *)pSVar32->m_Items)->data;
      if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        SVar16._ticks = (int64_t)(pAVar9->_1).name;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x3419920;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341992d
        ;
        SVar30._ticks = SVar16._ticks;
        SVar33._dateData = SVar18._ticks;
        bVar13 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar18._ticks,(System_TimeSpan_o)SVar16._ticks,
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_03419969;
        SVar33._dateData = pSVar17->max_length;
        SVar30._ticks = 1;
        pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419956
        ;
        pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)SVar33._dateData,1,
                             (MethodInfo_331B380 *)
                             pMStack_78->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (pSStack_70 != (System_Object_array *)0x0) goto label_03419a5c;
        now.fields._8_8_ = (System_Object_array *)0x0;
      }
    }
  }
  pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x3419a87;
  il2cpp_runtime_helper_022b2c90();
  pIVar28 = (Il2CppClass *)(SVar30._ticks & 0xffffffff);
  pSVar25 = now.fields._8_8_;
  pSVar26 = (System_Object_array *)SVar30._ticks;
  pSStack_b0 = pSVar17;
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)SVar18._ticks;
  SStack_a0 = extraout_RDX.fields._dateData;
  pAStack_98 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)SVar16._ticks;
  if (g_data_057a8cee == '\0') {
    pIStack_d0 = (Il2CppClass *)0x3419aba;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cee = '\x01';
  }
  pIStack_c0 = (Il2CppClass *)0x0;
  __this_00 = *(Il2CppClass **)&((Il2CppType *)((System_Object_array *)SVar33._dateData)->m_Items)->bits;
  pIVar20 = extraout_RDX_00;
  if (__this_00 == (Il2CppClass *)0x0) {
label_03419dcd:
    pIStack_d0 = (Il2CppClass *)0x3419dd2;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar25 = *(System_Object_array **)
               (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x48);
    pSVar26 = (System_Object_array *)(SVar30._ticks & 0xff);
    pIStack_d0 = (Il2CppClass *)0x3419af4;
    bVar13 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                       (__this_00,pSVar26,&pIStack_c0);
    if ((char)bVar13 == '\0') {
      return;
    }
    pIVar20 = extraout_RDX_00;
    if (pIStack_c0 == (Il2CppClass *)0x0) goto label_03419dcd;
    *(undefined1 *)((long)&(pIStack_c0->_1).this_arg.bits + 2) = 0;
    pIVar20 = extraout_RDX_00;
    if (extraout_RDX_00 == (Il2CppClass *)0x0) {
      pSVar26 = *(System_Object_array **)
                 (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x118);
      pIStack_d0 = (Il2CppClass *)0x3419b34;
      __this_00 = "unknown_error";
      pIVar20 = (Il2CppClass *)
                ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error",(MethodInfo_331AB10 *)pSVar26);
      if (pIVar20 == (Il2CppClass *)0x0) goto label_03419dcd;
    }
    __this_00 = pIStack_c0;
    if (pIStack_c0 == (Il2CppClass *)0x0) goto label_03419dcd;
    if (*(char *)&(pIVar20->_1).name != '\0') {
      *(undefined2 *)&(pIStack_c0->_1).this_arg.bits = 1;
      pSVar26 = (System_Object_array *)(pIVar20->_1).namespaze;
      (pIStack_c0->_1).namespaze = (char *)pSVar26;
      pIStack_d0 = (Il2CppClass *)0x3419b6f;
      il2cpp_runtime_helper_022b4080(&(pIStack_c0->_1).namespaze);
      __this_00 = (Il2CppClass *)0x0;
      if (pIStack_c0 != (Il2CppClass *)0x0) {
        (pIStack_c0->_1).byval_arg.data = (void *)0x0;
        __this_00 = (Il2CppClass *)&(pIStack_c0->_1).byval_arg;
        pSVar26 = (System_Object_array *)0x0;
        pIStack_d0 = (Il2CppClass *)0x3419b90;
        il2cpp_runtime_helper_022b4080();
        pIVar29 = pIStack_c0;
        pSVar25 = (System_Object_array *)((System_Object_array *)SVar33._dateData)->max_length;
        if (pSVar25 != (System_Object_array *)0x0) {
          pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
          __this_00 = ((Il2CppType *)pSVar25->m_Items)[2].data;
          pIStack_d0 = (Il2CppClass *)0x3419bad;
          Var36 = (*(code *)pSVar25->max_length)();
          pIVar20 = pIVar29;
          if (pIVar29 != (Il2CppClass *)0x0) {
            *(unkbyte10 *)&(pIVar29->_1).byval_arg.bits = Var36;
            *(undefined2 *)((long)&(pIVar29->_1).this_arg.data + 6) = uStack_b2;
            *(undefined4 *)((long)&(pIVar29->_1).this_arg.data + 2) = uStack_b6;
            if (pIStack_c0 != (Il2CppClass *)0x0) {
              __this_00 = (Il2CppClass *)(pIStack_c0->_1).namespaze;
              pSVar26 = (System_Object_array *)0x0;
              pIStack_d0 = (Il2CppClass *)0x3419bf9;
              SVar33._dateData =
                   (uint64_t)
                   ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                             ((Il2CppObject *)__this_00,0,
                              *(MethodInfo_331B380 **)
                               (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) +
                               0x100));
              goto joined_r0x03419c04;
            }
          }
        }
      }
      goto label_03419dcd;
    }
    if ((char)(pIStack_c0->_1).this_arg.bits != '\0') {
      pAVar9 = ((Il2CppType *)((System_Object_array *)SVar33._dateData)->m_Items)->data;
      if (pAVar9 != (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x0) {
        if ((char)(pAVar9->_1).byval_arg.bits == '\0') goto label_03419d4a;
        pSVar26 = (pIVar20->_1).byval_arg.data;
        (pIStack_c0->_1).byval_arg.data = pSVar26;
        __this_00 = (Il2CppClass *)&(pIStack_c0->_1).byval_arg;
        pIStack_d0 = (Il2CppClass *)0x3419d07;
        il2cpp_runtime_helper_022b4080();
        if (pIStack_c0 != (Il2CppClass *)0x0) {
          __this_00 = (Il2CppClass *)(pIStack_c0->_1).namespaze;
          pSVar26 = (pIVar20->_1).byval_arg.data;
          pIStack_d0 = (Il2CppClass *)0x3419d34;
          SVar33._dateData =
               (uint64_t)
               ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                         ((Il2CppObject *)__this_00,(System_String_o *)pSVar26,
                          *(MethodInfo_331B660 **)
                           (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x140)
                         );
joined_r0x03419c04:
          pIVar29 = pIVar28;
          if (pIStack_c0 != (Il2CppClass *)0x0) goto label_03419c0a;
        }
      }
      goto label_03419dcd;
    }
label_03419d4a:
    *(undefined2 *)&(pIStack_c0->_1).this_arg.bits = 0x100;
    (pIStack_c0->_1).namespaze = (char *)0x0;
    pSVar26 = (pIVar20->_1).byval_arg.data;
    (pIStack_c0->_1).byval_arg.data = pSVar26;
    __this_00 = (Il2CppClass *)&(pIStack_c0->_1).byval_arg;
    pIStack_d0 = (Il2CppClass *)0x3419d69;
    il2cpp_runtime_helper_022b4080();
    pIVar29 = pIStack_c0;
    pSVar25 = (System_Object_array *)((System_Object_array *)SVar33._dateData)->max_length;
    if (pSVar25 == (System_Object_array *)0x0) goto label_03419dcd;
    pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar25->m_Items)->bits;
    __this_00 = ((Il2CppType *)pSVar25->m_Items)[2].data;
    pIStack_d0 = (Il2CppClass *)0x3419d82;
    Var36 = (*(code *)pSVar25->max_length)();
    pIVar28 = pIVar29;
    if (pIVar29 == (Il2CppClass *)0x0) goto label_03419dcd;
    *(unkbyte10 *)&(pIVar29->_1).byval_arg.bits = Var36;
    *(undefined4 *)((long)&(pIVar29->_1).this_arg.data + 2) = uStack_b6;
    *(undefined2 *)((long)&(pIVar29->_1).this_arg.data + 6) = uStack_b2;
    __this_00 = (pIVar20->_1).byval_arg.data;
    pSVar26 = (System_Object_array *)0x0;
    pIStack_d0 = (Il2CppClass *)0x3419dbc;
    SVar33._dateData =
         (uint64_t)
         ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                   ((System_String_o *)__this_00,0,
                    *(MethodInfo_331B520 **)
                     (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x108));
    if (pIStack_c0 == (Il2CppClass *)0x0) goto label_03419dcd;
label_03419c0a:
    __this_00 = (Il2CppClass *)(pIStack_c0->_1).name;
    pIVar28 = pIVar29;
    if (__this_00 == (Il2CppClass *)0x0) goto label_03419dcd;
    pSVar26 = *(System_Object_array **)
               (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x148);
    pIStack_d0 = (Il2CppClass *)0x3419c2e;
    now.fields._8_8_ =
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)__this_00,(MethodInfo_362E340 *)pSVar26);
    if ((pIStack_c0 == (Il2CppClass *)0x0) || (pcVar21 = (pIStack_c0->_1).name, pcVar21 == (char *)0x0))
    goto label_03419dcd;
    *(int *)(pcVar21 + 0x1c) = *(int *)(pcVar21 + 0x1c) + 1;
    iVar7 = *(int32_t *)(pcVar21 + 0x18);
    pcVar21[0x18] = '\0';
    pcVar21[0x19] = '\0';
    pcVar21[0x1a] = '\0';
    pcVar21[0x1b] = '\0';
    if (0 < iVar7) {
      __this_00 = *(Il2CppClass **)(pcVar21 + 0x10);
      pSVar26 = (System_Object_array *)0x0;
      pSVar25 = (System_Object_array *)0x0;
      pIStack_d0 = (Il2CppClass *)0x3419c6b;
      System_Array__Clear((System_Array_o *)__this_00,0,iVar7,(MethodInfo *)0x0);
    }
    if (now.fields._8_8_ == (System_Object_array *)0x0) goto label_03419dcd;
    if ((int)(now.fields._8_8_)->max_length < 1) {
      return;
    }
    pIVar28 = (Il2CppClass *)0x0;
    pIVar20 = (Il2CppClass *)0x0;
    if (((now.fields._8_8_)->max_length & 0xffffffff) != 0) {
      do {
        pIVar29 = (Il2CppClass *)(now.fields._8_8_)->m_Items[(long)pIVar20];
        if (pIVar29 != (Il2CppClass *)0x0) {
          pIVar28 = pIVar29;
          if (pIVar29 == (Il2CppClass *)0x0) goto label_03419dcd;
          __this_00 = (pIVar29->_1).element_class;
          pIStack_d0 = (Il2CppClass *)0x3419cd0;
          pSVar26 = (System_Object_array *)SVar33._dateData;
          (*(code *)(pIVar29->_1).namespaze)
                    (__this_00,SVar33._dateData,*(undefined8 *)&(pIVar29->_1).byval_arg.bits);
        }
        pIVar20 = (Il2CppClass *)((long)&(pIVar20->_1).image + 1);
        uVar6 = (uint)(now.fields._8_8_)->max_length;
        pSVar25 = (System_Object_array *)(long)(int)uVar6;
        if ((long)pSVar25 <= (long)pIVar20) {
          return;
        }
      } while (pIVar20 < (Il2CppClass *)(ulong)uVar6);
    }
  }
  pIStack_d0 = (Il2CppClass *)0x3419dd7;
  auVar35 = il2cpp_runtime_helper_022b2ca0();
  pcVar21 = auVar35._8_8_;
  uStack_100 = auVar35._0_8_;
  now_00.fields._8_8_ = pSVar25;
  SVar18._ticks = (int64_t)pSVar34;
  pIStack_f8 = pIVar20;
  pSStack_f0 = pSVar32;
  pIStack_e8 = (Il2CppClass *)t1._ticks;
  pSStack_e0 = now.fields._8_8_;
  pSStack_d8 = (System_Object_array *)SVar33._dateData;
  pIStack_d0 = pIVar28;
  if (g_data_057a8cef == '\0') {
    uStack_108 = 0x3419e0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    uStack_108 = 0x3419e1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cef = '\x01';
  }
  lVar14 = **(long **)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    uStack_108 = 0x3419e3e;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  uStack_108 = 0x3419e46;
  __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar14);
  uStack_108 = 0x3419e60;
  System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object____ctor
            (__this,*(MethodInfo_3161460 **)
                     (*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 8));
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(__this_00->_1).byval_arg.bits = __this;
  uStack_108 = 0x3419e70;
  il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg.bits);
  now.fields._8_8_ = (System_Object_array *)0x0;
  uStack_108 = 0x3419e7a;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (pSVar26 == (System_Object_array *)0x0) {
    uStack_108 = 0x341a059;
    uVar23 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    uStack_108 = 0x341a061;
    pSVar26 = (System_Object_array *)il2cpp_runtime_helper_023052d0(uVar23);
    uStack_108 = 0x341a070;
    paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    uStack_108 = 0x341a07d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)pSVar26,paramName,(MethodInfo *)0x0);
    uStack_108 = 0x341a088;
    now.fields._8_8_ = pSVar34;
    pSVar17 = pSVar26;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pSVar17 = (System_Object_array *)0x0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).name = (char *)pSVar26;
      uStack_108 = 0x3419ea3;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).name,pSVar26);
      if (pcVar21 == (char *)0x0) {
        lVar14 = *(long *)(*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          uStack_108 = 0x3419ec9;
          lVar14 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar14 + 0xe4) == 0) {
          uStack_108 = 0x3419eda;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar14 = *(long *)(*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          uStack_108 = 0x3419efa;
          lVar14 = il2cpp_runtime_helper_023009c0(lVar14);
        }
        pcVar21 = *(char **)(*(long *)(lVar14 + 0xb8) + 8);
        if (pcVar21 == (char *)0x0) {
          lVar14 = *(long *)(*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            uStack_108 = 0x3419f2b;
            lVar14 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar14 + 0xe4) == 0) {
            uStack_108 = 0x3419f3c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar14 = *(long *)(*(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            uStack_108 = 0x3419f5c;
            il2cpp_runtime_helper_023009c0(lVar14);
          }
          uStack_108 = 0x3419f75;
          pcVar21 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          uStack_108 = 0x3419f94;
          System_Func_DateTimeOffset____ctor();
          lVar14 = *(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0);
          lVar22 = *(long *)(lVar14 + 0x28);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            uStack_108 = 0x3419fb4;
            lVar22 = il2cpp_runtime_helper_023009c0(lVar22);
            lVar14 = *(long *)((long)((Il2CppType *)pSVar34->m_Items)->data + 0xc0);
          }
          *(char **)(*(long *)(lVar22 + 0xb8) + 8) = pcVar21;
          lVar14 = *(long *)(lVar14 + 0x28);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            uStack_108 = 0x3419fdf;
            lVar14 = il2cpp_runtime_helper_023009c0(lVar14);
          }
          uStack_108 = 0x3419ff2;
          il2cpp_runtime_helper_022b4080(*(long *)(lVar14 + 0xb8) + 8,pcVar21);
        }
      }
      (__this_00->_1).namespaze = pcVar21;
      uStack_108 = 0x341a002;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).namespaze,pcVar21);
      if (pSVar25 == (System_Object_array *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          uStack_108 = 0x341a01f;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar25 = (System_Object_array *)**(undefined8 **)(TypeInfo_AottgQueryPolicy + 0xb8);
      }
      (__this_00->_1).byval_arg.data = pSVar25;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,pSVar25);
      return;
    }
  }
  uStack_108 = 0x341a08d;
  auVar35 = il2cpp_runtime_helper_022b2c90();
  uStack_108 = auVar35._0_8_;
  lVar14 = *(long *)&((Il2CppType *)pSVar17->m_Items)->bits;
  if (lVar14 != 0) {
    lStack_110 = 0x3262308;
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___FindEntry
              (lVar14,(ulong)now.fields._8_8_ & 0xff,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(auVar35._8_8_ + 0x20) + 0xc0) + 0x40) +
                                    0x20) + 0xc0) + 0x108));
    return;
  }
  lStack_110 = 0x341a0b8;
  il2cpp_runtime_helper_022b2c90();
  lStack_110 = 0;
  lVar14 = *(long *)(lVar14 + 0x28);
  if (lVar14 != 0) {
    now_00.fields._8_8_ =
         *(System_Object_array **)(*(long *)(*(long *)(extraout_RDX_01 + 0x20) + 0xc0) + 0x48);
    now.fields._8_8_ = (System_Object_array *)((ulong)now.fields._8_8_ & 0xff);
    uStack_118 = 0x341a0ed;
    bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (lVar14,now.fields._8_8_,&lStack_110);
    if ((char)bVar13 == '\0') {
      return;
    }
    if (lStack_110 != 0) {
      return;
    }
  }
  uStack_118 = 0x341a10c;
  uStack_118 = il2cpp_runtime_helper_022b2c90();
  __this_01 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar14 + 0x28);
  if (__this_01 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Clear
              (__this_01,
               *(MethodInfo_3162290 **)
                (*(long *)((long)((Il2CppType *)(now.fields._8_8_)->m_Items)->data + 0xc0) + 0x60));
    return;
  }
  uStack_120 = 0x341a134;
  auVar35 = il2cpp_runtime_helper_022b2c90();
  uStack_120 = auVar35._0_8_;
  pSVar17 = *(System_Object_array **)&(__this_01->fields)._freeCount;
  if (pSVar17 != (System_Object_array *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Remove
              (pSVar17,(ulong)now.fields._8_8_ & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar35._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pSStack_128 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x341a168;
  il2cpp_runtime_helper_022b2c90();
  uVar27 = (ulong)now_00.fields._8_8_ & 0xffffffff;
  SVar16._ticks = (ulong)now.fields._8_8_ & 0xffffffff;
  pSStack_158 = (System_Object_array *)0x0;
  lVar14 = *(long *)(*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                              0xc0) + 0x70);
  pSVar32 = (System_Object_array *)SVar18._ticks;
  pSStack_150 = pSVar26;
  pcStack_148 = pcVar21;
  pIStack_140 = __this_00;
  pSStack_138 = pSVar25;
  pSStack_130 = pSVar34;
  pSStack_128 = __this;
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    pSStack_160 = (System_Object_array *)0x341a1ae;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  pSStack_160 = (System_Object_array *)0x341a1b6;
  pSVar15 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar14);
  pSVar25 = *(System_Object_array **)
             (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data + 0xc0) +
             0x78);
  pSStack_160 = (System_Object_array *)0x341a1d0;
  pSVar26 = pSVar15;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)pSVar15,
             (MethodInfo_27BBA90 *)pSVar25);
  pSVar34 = onResult_01;
  if (pSVar15 != (System_Object_array *)0x0) {
    pSVar15->bounds = (Il2CppArrayBounds *)pSVar17;
    pSStack_160 = (System_Object_array *)0x341a1ec;
    pSVar25 = pSVar17;
    il2cpp_runtime_helper_022b4080(&pSVar15->bounds);
    *(char *)&pSVar15->max_length = (char)SVar16._ticks;
    if (onResult_01 == (System_Object_array *)0x0) {
      return;
    }
    pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar17->m_Items)->bits;
    if (pSVar26 != (System_Object_array *)0x0) {
      now_00.fields._8_8_ =
           *(System_Object_array **)
            (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data + 0xc0) +
            0x48);
      pSVar25 = (System_Object_array *)((ulong)now.fields._8_8_ & 0xff);
      pSStack_160 = (System_Object_array *)0x341a221;
      bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (pSVar26,pSVar25,&pSStack_158);
      if ((char)bVar13 == '\0') {
        lVar14 = *(long *)(*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->
                                           data + 0xc0) + 0x58);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          pSStack_160 = (System_Object_array *)0x341a242;
          lVar14 = il2cpp_runtime_helper_023009c0();
        }
        pSStack_160 = (System_Object_array *)0x341a24a;
        SVar16._ticks = il2cpp_runtime_helper_023052d0(lVar14);
        pSVar25 = *(System_Object_array **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                             0xc0) + 0x88);
        pSStack_160 = (System_Object_array *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)SVar16._ticks,
                   (MethodInfo_31EFB10 *)pSVar25);
        pSVar26 = *(System_Object_array **)&((Il2CppType *)pSVar17->m_Items)->bits;
        pSStack_158 = (System_Object_array *)SVar16._ticks;
        if (pSVar26 == (System_Object_array *)0x0) goto label_0341a453;
        pSVar25 = (System_Object_array *)(ulong)*(uint *)&pSVar15->max_length;
        pSStack_160 = (System_Object_array *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (pSVar26,pSVar25,SVar16._ticks,
                   *(undefined8 *)
                    (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                              0xc0) + 0x90));
      }
      now_00.fields._8_8_ = (System_Object_array *)pSVar17->max_length;
      if (now_00.fields._8_8_ != (System_Object_array *)0x0) {
        pSVar25 = *(System_Object_array **)&((Il2CppType *)(now_00.fields._8_8_)->m_Items)->bits;
        pSVar26 = ((Il2CppType *)(now_00.fields._8_8_)->m_Items)[2].data;
        pSStack_160 = (System_Object_array *)0x341a2ad;
        auVar35 = (*(code *)(now_00.fields._8_8_)->max_length)();
        if ((char)uVar27 == '\0') {
          now_00.fields._8_8_ = (System_Object_array *)(auVar35._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                             0xc0) + 0x98);
          pSStack_160 = (System_Object_array *)0x341a2d8;
          now_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar35._0_8_;
          pSVar25 = pSStack_158;
          pSVar26 = pSVar17;
          pSVar32 = onResult_01;
          bVar13 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pSVar17,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pSStack_158,
                              now_00,(System_Action_AottgQueryResult_TValue___o *)onResult_01,in_R9);
          if ((char)bVar13 != '\0') {
            return;
          }
        }
        if (pSStack_158 != (System_Object_array *)0x0) {
          if ((char)((Il2CppType *)pSStack_158->m_Items)[1].bits == '\0') {
            pSStack_160 = (System_Object_array *)0x341a327;
            pSVar25 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 200));
          }
          else {
            pSStack_160 = (System_Object_array *)0x341a30e;
            pSVar25 = (System_Object_array *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)pSStack_158->max_length,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 0xa8));
          }
          pSVar26 = ((Il2CppType *)onResult_01->m_Items)[2].data;
          pSStack_160 = (System_Object_array *)0x341a339;
          (*(code *)onResult_01->max_length)
                    (pSVar26,pSVar25,*(undefined8 *)&((Il2CppType *)onResult_01->m_Items)->bits);
          if ((pSStack_158 != (System_Object_array *)0x0) &&
             (pSVar26 = (System_Object_array *)pSStack_158->bounds, pSVar26 != (System_Object_array *)0x0)) {
            now_00.fields._8_8_ =
                 *(System_Object_array **)
                  (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                            0xc0) + 0xd8);
            piVar1 = (int *)((long)&pSVar26->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar8 = pSVar26->bounds;
            if (pIVar8 != (Il2CppArrayBounds *)0x0) {
              uVar6 = *(uint *)&pSVar26->max_length;
              pSVar25 = onResult_01;
              if (uVar6 < (uint)pIVar8[1].lower_bound) {
                now_00.fields._8_8_ = (System_Object_array *)(ulong)(uVar6 + 1);
                *(uint *)&pSVar26->max_length = uVar6 + 1;
                pSVar26 = (System_Object_array *)(&pIVar8[2].length + (int)uVar6);
                (&pIVar8[2].length)[(int)uVar6] = (il2cpp_array_size_t)onResult_01;
                pSStack_160 = (System_Object_array *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pSStack_160 = (System_Object_array *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar26,&onResult_01->obj,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0) +
                            0x70));
              }
              if (pSStack_158 != (System_Object_array *)0x0) {
                if (*(char *)((long)&((Il2CppType *)pSStack_158->m_Items)[1].bits + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&((Il2CppType *)pSStack_158->m_Items)[1].bits + 2) = 1;
                pIVar8 = pSVar17->bounds;
                uVar4 = *(undefined1 *)&pSVar15->max_length;
                pSVar34 = (System_Object_array *)CONCAT71((int7)((ulong)onResult_01 >> 8),uVar4);
                lVar14 = *(long *)(*(long *)((long)((Il2CppType *)
                                                   ((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                            0xc0) + 0xe8);
                if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                  pSStack_160 = (System_Object_array *)0x341a3fe;
                  lVar14 = il2cpp_runtime_helper_023009c0();
                }
                pSStack_160 = (System_Object_array *)0x341a406;
                pSVar17 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar14);
                now_00.fields._8_8_ =
                     *(System_Object_array **)
                      (*(long *)((long)((Il2CppType *)((System_Object_array *)SVar18._ticks)->m_Items)->data +
                                0xc0) + 0xf0);
                pSStack_160 = (System_Object_array *)0x341a42d;
                pSVar25 = pSVar15;
                pSVar26 = pSVar17;
                System_Action_object____ctor();
                SVar16._ticks = 0;
                if (pIVar8 != (Il2CppArrayBounds *)0x0) {
                  pSStack_160 = (System_Object_array *)0x341a444;
                  (**(code **)&pIVar8[1].lower_bound)
                            (pIVar8[4].length,uVar4,pSVar17,*(undefined8 *)&pIVar8[2].lower_bound);
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
  pSStack_160 = (System_Object_array *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  now.fields._8_8_ = (System_Object_array *)((ulong)now_00.fields._8_8_ & 0xffffffff);
  SVar30._ticks = (int64_t)pSVar25;
  SVar33._dateData = (uint64_t)pSVar26;
  pMStack_198 = (MethodInfo_3319840 *)in_R9;
  pSStack_190 = pSVar32;
  pSStack_188 = pSVar15;
  pSStack_180 = pSVar34;
  uStack_178 = uVar27;
  pSStack_170 = (System_Object_array *)SVar18._ticks;
  pSStack_168 = pSVar17;
  pSStack_160 = (System_Object_array *)SVar16._ticks;
  if (g_data_057a8cf0 == '\0') {
    pIStack_1b8 = (Il2CppClass *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pIStack_1b8 = (Il2CppClass *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pIStack_1b8 = (Il2CppClass *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    SVar33._dateData = (uint64_t)&TypeInfo_TimeSpan;
    pIStack_1b8 = (Il2CppClass *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_1b0 = '\0';
  uStack_1af = 0;
  uStack_1a8 = 0;
  if (pSVar25 != (System_Object_array *)0x0) {
    if ((char)((Il2CppType *)pSVar25->m_Items)[1].bits == '\0') {
label_0341a589:
      if (*(char *)((long)&((Il2CppType *)pSVar25->m_Items)[1].bits + 1) == '\0') {
        return;
      }
      pvVar10 = ((Il2CppType *)pSVar26->m_Items)->data;
      if (pvVar10 != (void *)0x0) {
        cStack_1b0 = *(char *)((long)pvVar10 + 0x18);
        uStack_1a8 = *(undefined8 *)((long)pvVar10 + 0x20);
        if (cStack_1b0 == '\0') {
          return;
        }
        puVar3 = &((Il2CppType *)pSVar25->m_Items)->bits;
        SVar16._ticks = *(int64_t *)puVar3;
        Var12 = *(unkuint10 *)puVar3;
        SVar18._ticks = (int64_t)*(ushort *)&((Il2CppType *)pSVar25->m_Items)[1].data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pIStack_1b8 = (Il2CppClass *)0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_1b8 = (Il2CppClass *)0x341a5ed;
        left_02.fields._8_8_ = now.fields._8_8_;
        left_02.fields._dateTime.fields._dateData = extraout_RDX_02.fields._dateData;
        right_02.fields._10_6_ = 0;
        right_02.fields._0_10_ = Var12;
        now_00.fields._8_8_ = (System_Object_array *)SVar18._ticks;
        SVar33 = extraout_RDX_02.fields._dateData;
        t1_00 = System_DateTimeOffset__op_Subtraction(left_02,right_02,(MethodInfo *)0x0);
        pvVar10 = ((Il2CppType *)pSVar26->m_Items)->data;
        SVar30._ticks = (int64_t)now.fields._8_8_;
        if (pvVar10 != (void *)0x0) {
          cStack_1b0 = *(char *)((long)pvVar10 + 0x18);
          uStack_1a8 = *(undefined8 *)((long)pvVar10 + 0x20);
          pIStack_1b8 = (Il2CppClass *)0x341a61f;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &cStack_1b0;
          SVar18._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_03,method_01);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pIStack_1b8 = (Il2CppClass *)0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar16._ticks = 0;
          pIStack_1b8 = (Il2CppClass *)0x341a649;
          bVar13 = System_TimeSpan__op_LessThan(t1_00,(System_TimeSpan_o)SVar18._ticks,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return;
          }
          SVar33._dateData = (uint64_t)((Il2CppType *)pSVar25->m_Items)->data;
          SVar30._ticks = 1;
          pIStack_1b8 = (Il2CppClass *)0x341a672;
          pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)SVar33._dateData,1,
                               (MethodInfo_331B520 *)
                               pMStack_198->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now_00.fields._8_8_ = (System_Object_array *)0x0;
          if (pSStack_190 != (System_Object_array *)0x0) {
label_0341a67c:
            pIStack_1b8 = (Il2CppClass *)0x341a68a;
            (*(code *)pSStack_190->max_length)
                      (((Il2CppType *)pSStack_190->m_Items)[2].data,pAVar19,
                       *(undefined8 *)&((Il2CppType *)pSStack_190->m_Items)->bits);
            return;
          }
        }
      }
    }
    else {
      puVar3 = &((Il2CppType *)pSVar25->m_Items)->bits;
      SVar16._ticks = *(int64_t *)puVar3;
      Var12 = *(unkuint10 *)puVar3;
      now_00.fields._8_8_ = (System_Object_array *)(ulong)*(ushort *)&((Il2CppType *)pSVar25->m_Items)[1].data
      ;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pIStack_1b8 = (Il2CppClass *)0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_1b8 = (Il2CppClass *)0x341a513;
      left_01.fields._8_8_ = now.fields._8_8_;
      left_01.fields._dateTime.fields._dateData = extraout_RDX_02.fields._dateData;
      right_01.fields._10_6_ = 0;
      right_01.fields._0_10_ = Var12;
      SVar30._ticks = (int64_t)now.fields._8_8_;
      SVar33 = extraout_RDX_02.fields._dateData;
      SVar18._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left_01,right_01,(MethodInfo *)0x0);
      pvVar10 = ((Il2CppType *)pSVar26->m_Items)->data;
      if (pvVar10 != (void *)0x0) {
        SVar16._ticks = ((System_TimeSpan_Fields *)((long)pvVar10 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pIStack_1b8 = (Il2CppClass *)0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_1b8 = (Il2CppClass *)0x341a54d;
        SVar30._ticks = SVar16._ticks;
        SVar33._dateData = SVar18._ticks;
        bVar13 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar18._ticks,(System_TimeSpan_o)SVar16._ticks,
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_0341a589;
        SVar33._dateData = pSVar25->max_length;
        SVar30._ticks = 1;
        pIStack_1b8 = (Il2CppClass *)0x341a576;
        pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)SVar33._dateData,1,
                             (MethodInfo_331B380 *)
                             pMStack_198->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (pSStack_190 != (System_Object_array *)0x0) goto label_0341a67c;
        now_00.fields._8_8_ = (System_Object_array *)0x0;
      }
    }
  }
  pIStack_1b8 = (Il2CppClass *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pSStack_1d0 = pSVar25;
  pSStack_1c8 = (System_Object_array *)SVar18._ticks;
  SStack_1c0 = extraout_RDX_02.fields._dateData;
  pIStack_1b8 = (Il2CppClass *)SVar16._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  lStack_1e0 = 0;
  lVar14 = *(long *)&((Il2CppType *)((System_Object_array *)SVar33._dateData)->m_Items)->bits;
  if (lVar14 != 0) {
    bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (lVar14,SVar30._ticks & 0xff,&lStack_1e0);
    if ((char)bVar13 == '\0') {
      return;
    }
    if ((lStack_1e0 != 0) &&
       (((*(undefined1 *)(lStack_1e0 + 0x3a) = 0, pAVar24 = extraout_RDX_03,
         extraout_RDX_03 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pAVar24 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                              ((System_String_o *)"unknown_error",
                               *(MethodInfo_331AB10 **)
                                (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0)
                                + 0x118)),
         pAVar24 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) && (lStack_1e0 != 0)))) {
      if ((char)(pAVar24->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(lStack_1e0 + 0x38) == '\0') {
label_0341a96a:
          *(undefined2 *)(lStack_1e0 + 0x38) = 0x100;
          *(undefined8 *)(lStack_1e0 + 0x18) = 0;
          *(System_String_o **)(lStack_1e0 + 0x20) = (pAVar24->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          lVar14 = lStack_1e0;
          if (((char *)((System_Object_array *)SVar33._dateData)->max_length != (char *)0x0) &&
             (Var36 = (**(code **)((char *)((System_Object_array *)SVar33._dateData)->max_length + 0x18))(),
             lVar14 != 0)) {
            *(unkbyte10 *)(lVar14 + 0x28) = Var36;
            *(undefined4 *)(lVar14 + 0x32) = uStack_1d6;
            *(undefined2 *)(lVar14 + 0x36) = uStack_1d2;
            pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((pAVar24->fields)._Error_k__BackingField,0,
                                 *(MethodInfo_331B520 **)
                                  (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0
                                            ) + 0x108));
joined_r0x0341a9e7:
            if (lStack_1e0 != 0) goto label_0341a82a;
          }
        }
        else {
          pvVar10 = ((Il2CppType *)((System_Object_array *)SVar33._dateData)->m_Items)->data;
          if (pvVar10 == (void *)0x0) goto label_0341a9ed;
          if (*(char *)((long)pvVar10 + 0x28) == '\0') goto label_0341a96a;
          *(System_String_o **)(lStack_1e0 + 0x20) = (pAVar24->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          if ((lStack_1e0 == 0) ||
             (pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  (*(Il2CppObject **)(lStack_1e0 + 0x18),
                                   (pAVar24->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data +
                                              0xc0) + 0x140)), lStack_1e0 == 0)) goto label_0341a9ed;
label_0341a82a:
          if (((*(System_Collections_Generic_List_object__o **)(lStack_1e0 + 0x10) !=
                (System_Collections_Generic_List_object__o *)0x0) &&
              (now.fields._8_8_ =
                    System_Collections_Generic_List_object___ToArray
                              (*(System_Collections_Generic_List_object__o **)(lStack_1e0 + 0x10),
                               *(MethodInfo_362E340 **)
                                (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data + 0xc0)
                                + 0x148)), lStack_1e0 != 0)) &&
             (lVar14 = *(long *)(lStack_1e0 + 0x10), lVar14 != 0)) {
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            iVar7 = *(int32_t *)(lVar14 + 0x18);
            *(undefined4 *)(lVar14 + 0x18) = 0;
            if (0 < iVar7) {
              System_Array__Clear(*(System_Array_o **)(lVar14 + 0x10),0,iVar7,(MethodInfo *)0x0);
            }
            if (now.fields._8_8_ != (System_Object_array *)0x0) {
              if ((int)(now.fields._8_8_)->max_length < 1) {
                return;
              }
              uVar27 = 0;
              if (((now.fields._8_8_)->max_length & 0xffffffff) != 0) {
                do {
                  pIVar11 = (now.fields._8_8_)->m_Items[uVar27];
                  if (pIVar11 != (Il2CppObject *)0x0) {
                    if (pIVar11 == (Il2CppObject *)0x0) goto label_0341a9ed;
                    (*pIVar11[1].monitor)(pIVar11[4].klass,pAVar19,pIVar11[2].monitor);
                  }
                  uVar27 = uVar27 + 1;
                  uVar6 = (uint)(now.fields._8_8_)->max_length;
                  if ((long)(int)uVar6 <= (long)uVar27) {
                    return;
                  }
                } while (uVar27 < uVar6);
              }
              goto label_0341a9f2;
            }
          }
        }
      }
      else {
        *(undefined2 *)(lStack_1e0 + 0x38) = 1;
        *(Il2CppObject **)(lStack_1e0 + 0x18) = (pAVar24->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(lStack_1e0 + 0x18);
        if (lStack_1e0 != 0) {
          *(undefined8 *)(lStack_1e0 + 0x20) = 0;
          il2cpp_runtime_helper_022b4080(lStack_1e0 + 0x20,0);
          lVar14 = lStack_1e0;
          if (((char *)((System_Object_array *)SVar33._dateData)->max_length != (char *)0x0) &&
             (Var36 = (**(code **)((char *)((System_Object_array *)SVar33._dateData)->max_length + 0x18))(),
             lVar14 != 0)) {
            *(unkbyte10 *)(lVar14 + 0x28) = Var36;
            *(undefined2 *)(lVar14 + 0x36) = uStack_1d2;
            *(undefined4 *)(lVar14 + 0x32) = uStack_1d6;
            if (lStack_1e0 != 0) {
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                  (*(Il2CppObject **)(lStack_1e0 + 0x18),0,
                                   *(MethodInfo_331B380 **)
                                    (*(long *)((long)((Il2CppType *)(now_00.fields._8_8_)->m_Items)->data +
                                              0xc0) + 0x100));
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


// ApplicationManagers.Changelog.AottgChangelogService$$GetList
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetList (System_Action_AottgChangelogResult_PublicChangelogListResponse___o* onResult, int32_t page, int32_t pageSize, bool forceRefresh, const MethodInfo* method);
// 0x44cade0

void ApplicationManagers_Changelog_AottgChangelogService__GetList
               (System_Action_AottgChangelogResult_PublicChangelogListResponse___o *onResult,int32_t page,
               int32_t pageSize,bool_conflict forceRefresh,MethodInfo *method)

{
  undefined1 uVar1;
  uint uVar2;
  int32_t iVar3;
  void *pvVar4;
  Il2CppObject *pIVar5;
  System_Action_AottgChangelogResult_T___o *onResult_00;
  unkuint10 Var6;
  byte bVar7;
  int32_t in_EAX;
  bool_conflict bVar8;
  long lVar9;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar10;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar11;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar12;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar13;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar14;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  char *pcVar16;
  long lVar17;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields t2;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar18;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields __this;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields t1;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar19;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar20;
  undefined8 uVar21;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields __this_00;
  System_String_o *pSVar22;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields t2_00;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar23;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields __this_01;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields t1_00;
  System_TimeSpan_o t1_01;
  System_Object_array *pSVar24;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar25;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar26;
  undefined8 *puVar27;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar28;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar29;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar30;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  long extraout_RDX_01;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields onResult_01;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields extraout_RDX_02;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields extraout_RDX_03;
  long extraout_RDX_04;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields onResult_02;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields extraout_RDX_05;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_06;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields key;
  ulong uVar31;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar32;
  char **ppcVar33;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar34;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar35;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar36;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar37;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar38;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar39;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar40;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields __this_02;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar41;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar42;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar43;
  MethodInfo_331A460 *in_R9;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar44;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar45;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AVar46;
  undefined1 auVar47 [16];
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_03;
  System_DateTimeOffset_o left_01;
  System_DateTimeOffset_o left_02;
  System_Nullable_TimeSpan__o __this_04;
  System_DateTimeOffset_o left_03;
  System_DateTimeOffset_o left_04;
  System_Nullable_TimeSpan__o __this_05;
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o now_00;
  System_DateTimeOffset_o right_01;
  System_DateTimeOffset_o right_02;
  System_DateTimeOffset_o now_01;
  System_DateTimeOffset_o right_03;
  System_DateTimeOffset_o right_04;
  unkbyte10 Var48;
  long lStack_300;
  undefined4 uStack_2f6;
  undefined2 uStack_2f2;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_2f0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_2e8;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_2e0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_2d8;
  char cStack_2d0;
  undefined7 uStack_2cf;
  undefined8 uStack_2c8;
  MethodInfo_3318C10 *pMStack_2b8;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_2b0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_2a8;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_2a0;
  ulong uStack_298;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_290;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_288;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_280;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_278;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_270;
  char *pcStack_268;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_260;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_258;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_250;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_218;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_210;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_208;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_200;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_1f8;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_1f0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_1e0;
  undefined4 uStack_1d6;
  undefined2 uStack_1d2;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_1d0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_1c8;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_1c0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_1b8;
  char cStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  MethodInfo_3318C10 *pMStack_198;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_190;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_188;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_180;
  ulong uStack_178;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_170;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_168;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_160;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_158;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_150;
  char *pcStack_148;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_140;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_138;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_130;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_f8;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAStack_f0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_e8;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_e0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_d8;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_d0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_c0;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_b0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_a8;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_a0;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_98;
  char cStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  MethodInfo_3318C10 *pMStack_78;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_70;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_68;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_60;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_58;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_50;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_48;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_40;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields AStack_38;
  MethodInfo_37EC980 *method_00;
  MethodInfo_37EC980 *method_01;
  MethodInfo_37EC980 *method_02;
  
  AStack_38._PageSize_k__BackingField = forceRefresh;
  AStack_38._Page_k__BackingField = in_EAX;
  if (g_data_057aeaf8 == '\0') {
    AStack_40._Page_k__BackingField = 0x44cae0d;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_PublicChangelogListResponse);
    AStack_40._Page_k__BackingField = 0x44cae19;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Faile);
    AStack_40._Page_k__BackingField = 0x44cae25;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Ready_PublicChangelogListResponse);
    AStack_40._Page_k__BackingField = 0x44cae31;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    AStack_40._Page_k__BackingField = 0x44cae3d;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    AStack_40._Page_k__BackingField = 0x44cae49;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetList_b__0);
    AStack_40._Page_k__BackingField = 0x44cae55;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass9_0);
    AStack_40._Page_k__BackingField = 0x44cae61;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&"bad_page_size");
    AStack_40._Page_k__BackingField = 0x44cae6d;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&"bad_page");
    g_data_057aeaf8 = '\x01';
  }
  AStack_40._Page_k__BackingField = 0x44cae83;
  AStack_40._PageSize_k__BackingField = 0;
  AVar25 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
           il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass9_0);
  AStack_40._Page_k__BackingField = 0x44cae90;
  AStack_40._PageSize_k__BackingField = 0;
  now.fields._8_8_ = AVar25;
  System_Object___ctor((Il2CppObject *)AVar25,(MethodInfo *)0x0);
  if (AVar25 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) goto label_044cafee;
  ppcVar33 = (char **)((long)AVar25 + 0x10);
  *(System_Action_AottgChangelogResult_PublicChangelogListResponse___o **)((long)AVar25 + 0x10) = onResult;
  AStack_40._Page_k__BackingField = 0x44caeaf;
  AStack_40._PageSize_k__BackingField = 0;
  il2cpp_runtime_helper_022b4080(ppcVar33,onResult);
  onResult_00 = *(System_Action_AottgChangelogResult_T___o **)((long)AVar25 + 0x10);
  if (*(int *)((long)TypeInfo_AottgChangelogService + 0xe4) == 0) {
    AStack_40._Page_k__BackingField = 0x44caecb;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  AStack_40._Page_k__BackingField = 0x44caedd;
  AStack_40._PageSize_k__BackingField = 0;
  bVar8 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_(onResult_00,MethodInfo_Boolean_Ready_PublicChangelogListResponse);
  if ((char)bVar8 == '\0') {
    return;
  }
  if (page < 1) {
    pcVar16 = *ppcVar33;
    if (pcVar16 == (char *)0x0) {
      return;
    }
    puVar27 = &"bad_page";
label_044cafae:
    AStack_40._Page_k__BackingField = 0x44cafc0;
    AStack_40._PageSize_k__BackingField = 0;
    pAVar28 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                        ((System_String_o *)*puVar27,MethodInfo_AottgChangelogResult_1_PublicChangelogListResponse_Faile);
    (**(code **)(pcVar16 + 0x18))
              (*(undefined8 *)(pcVar16 + 0x40),pAVar28,*(undefined8 *)(pcVar16 + 0x28),
               *(code **)(pcVar16 + 0x18));
    return;
  }
  if (99 < pageSize - 1U) {
    pcVar16 = *ppcVar33;
    if (pcVar16 == (char *)0x0) {
      return;
    }
    puVar27 = &"bad_page_size";
    goto label_044cafae;
  }
  if (*(int *)((long)TypeInfo_AottgChangelogService + 0xe4) == 0) {
    AStack_40._Page_k__BackingField = 0x44caf0d;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  lVar9 = *(long *)((long)*(void **)((long)TypeInfo_AottgChangelogService + 0xb8) + 8);
  now.fields._8_8_ = TypeInfo_AottgChangelogService;
  if (lVar9 == 0) {
label_044cafee:
    AStack_40._Page_k__BackingField = 0x44caff3;
    AStack_40._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return;
  }
  AVar25 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)(lVar9 + 0x30);
  AStack_40._Page_k__BackingField = 0x44caf37;
  AStack_40._PageSize_k__BackingField = 0;
  AVar26 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
           il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_PublicChangelogListResponse);
  AStack_40._Page_k__BackingField = 0x44caf51;
  AStack_40._PageSize_k__BackingField = 0;
  now.fields._8_8_ = AVar26;
  System_Action_object____ctor();
  AVar12 = MethodInfo_Void_Get;
  if (AVar25 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) goto label_044cafee;
  AVar37._PageSize_k__BackingField = pageSize;
  AVar37._Page_k__BackingField = page;
  bVar7 = (byte)AStack_38._PageSize_k__BackingField;
  AVar30._1_7_ = 0;
  AVar30._Page_k__BackingField._0_1_ = (byte)AStack_38._PageSize_k__BackingField;
  AStack_38._Page_k__BackingField = 0;
  AStack_38._PageSize_k__BackingField = 0;
  lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)MethodInfo_Void_Get + 0x20))->data + 0xc0) + 0x70);
  now.fields._8_8_ = AVar30;
  AVar42 = MethodInfo_Void_Get;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    AStack_40._Page_k__BackingField = 0x341895f;
    AStack_40._PageSize_k__BackingField = 0;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  AStack_40._Page_k__BackingField = 0x3418967;
  AStack_40._PageSize_k__BackingField = 0;
  AVar10 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)il2cpp_runtime_helper_023052d0(lVar9);
  AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
            (*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0x78);
  AStack_40._Page_k__BackingField = 0x3418981;
  AStack_40._PageSize_k__BackingField = 0;
  AVar38 = AVar10;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_ListKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)AVar10,
             (MethodInfo_27BBA00 *)AVar11);
  if (AVar10 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar10 + 0x10) = AVar25;
    AStack_40._Page_k__BackingField = 0x341899d;
    AStack_40._PageSize_k__BackingField = 0;
    AVar11 = AVar25;
    il2cpp_runtime_helper_022b4080((char **)((long)AVar10 + 0x10));
    *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar10 + 0x18) = AVar37;
    if (AVar26 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
      return;
    }
    AVar38 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar25 + 0x28);
    if (AVar38 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
      now.fields._8_8_ =
           *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
            (*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0x48);
      AStack_40._Page_k__BackingField = 0x34189d1;
      AStack_40._PageSize_k__BackingField = 0;
      AVar11 = AVar37;
      bVar8 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)AVar38,
                         (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)AVar37,
                         (Il2CppObject **)&AStack_38,(MethodInfo_315C740 *)now.fields._8_8_);
      if ((char)bVar8 == '\0') {
        lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0x58);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          AStack_40._Page_k__BackingField = 0x34189f2;
          AStack_40._PageSize_k__BackingField = 0;
          lVar9 = il2cpp_runtime_helper_023009c0();
        }
        AStack_40._Page_k__BackingField = 0x34189fa;
        AStack_40._PageSize_k__BackingField = 0;
        AVar37 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)il2cpp_runtime_helper_023052d0(lVar9)
        ;
        AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  (*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0x88);
        AStack_40._Page_k__BackingField = 0x3418a17;
        AStack_40._PageSize_k__BackingField = 0;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_ListKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)AVar37,
                   (MethodInfo_31EFA30 *)AVar11);
        AVar38 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar25 + 0x28);
        AStack_38 = AVar37;
        if (AVar38 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
        goto label_03418c03;
        AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar10 + 0x18);
        AStack_40._Page_k__BackingField = 0x3418a46;
        AStack_40._PageSize_k__BackingField = 0;
        System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)AVar38,
                   (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)AVar11,
                   (Il2CppObject *)AVar37,
                   *(MethodInfo_315ACA0 **)
                    (*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0x90));
      }
      now.fields._8_8_ =
           *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar25 + 0x18);
      if (now.fields._8_8_ != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
        AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  ((long)now.fields._8_8_ + 0x28);
        AVar38 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  ((long)now.fields._8_8_ + 0x40);
        AStack_40._Page_k__BackingField = 0x3418a5e;
        AStack_40._PageSize_k__BackingField = 0;
        auVar47 = (**(code **)((long)now.fields._8_8_ + 0x18))();
        if (bVar7 == 0) {
          now.fields._8_8_ =
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
               (auVar47._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0x98);
          AStack_40._Page_k__BackingField = 0x3418a89;
          AStack_40._PageSize_k__BackingField = 0;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar47._0_8_;
          AVar11 = AStack_38;
          AVar38 = AVar25;
          AVar42 = AVar26;
          bVar8 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object___TryEmitFresh
                            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)AVar25,
                             (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)AStack_38,now,
                             (System_Action_AottgQueryResult_TValue___o *)AVar26,(MethodInfo_3318C10 *)in_R9);
          if ((char)bVar8 != '\0') {
            return;
          }
        }
        if (AStack_38 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
          if (*(char *)((long)AStack_38 + 0x38) == '\0') {
            AStack_40._Page_k__BackingField = 0x3418ad8;
            AStack_40._PageSize_k__BackingField = 0;
            AVar11 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                     ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                               (*(MethodInfo_331B2F0 **)
                                 (*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 200));
          }
          else {
            AStack_40._Page_k__BackingField = 0x3418abf;
            AStack_40._PageSize_k__BackingField = 0;
            AVar11 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                     ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                               (*(Il2CppObject **)((long)AStack_38 + 0x18),
                                *(MethodInfo_331B450 **)
                                 (*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0xa8))
            ;
          }
          AVar38 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                    ((long)AVar26 + 0x40);
          AStack_40._Page_k__BackingField = 0x3418aea;
          AStack_40._PageSize_k__BackingField = 0;
          (**(code **)((long)AVar26 + 0x18))(AVar38,AVar11,*(undefined8 *)((long)AVar26 + 0x28));
          if ((AStack_38 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) &&
             (AVar38 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                        ((long)AStack_38 + 0x10),
             AVar38 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)) {
            now.fields._8_8_ =
                 *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  (*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0xd8);
            *(int *)((long)AVar38 + 0x1c) = *(int *)((long)AVar38 + 0x1c) + 1;
            pcVar16 = *(char **)((long)AVar38 + 0x10);
            if (pcVar16 != (char *)0x0) {
              uVar2 = *(uint *)((long)AVar38 + 0x18);
              AVar11 = AVar26;
              if (uVar2 < *(uint *)(pcVar16 + 0x18)) {
                now.fields._8_4_ = uVar2 + 1;
                now.fields._12_4_ = 0;
                *(uint *)((long)AVar38 + 0x18) = now.fields._8_4_;
                AVar38 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                         ((long)pcVar16 + (long)(int)uVar2 * 8 + 0x20);
                *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                 (pcVar16 + (long)(int)uVar2 * 8 + 0x20) = AVar26;
                AStack_40._Page_k__BackingField = 0x3418b4b;
                AStack_40._PageSize_k__BackingField = 0;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                AStack_40._Page_k__BackingField = 0x3418b70;
                AStack_40._PageSize_k__BackingField = 0;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)AVar38,(Il2CppObject *)AVar26,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data + 0xc0) +
                            0x70));
              }
              if (AStack_38 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
                if (*(char *)((long)AStack_38 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)((long)AStack_38 + 0x3a) = 1;
                pcVar16 = *(char **)((long)AVar25 + 0x10);
                AVar25 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                          ((long)AVar10 + 0x18);
                lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0xe8);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  AStack_40._Page_k__BackingField = 0x3418baf;
                  AStack_40._PageSize_k__BackingField = 0;
                  lVar9 = il2cpp_runtime_helper_023009c0();
                }
                AStack_40._Page_k__BackingField = 0x3418bb7;
                AStack_40._PageSize_k__BackingField = 0;
                AVar26 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                         il2cpp_runtime_helper_023052d0(lVar9);
                now.fields._8_8_ =
                     *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                      (*(long *)((long)((Il2CppType *)((long)AVar12 + 0x20))->data + 0xc0) + 0xf0);
                AStack_40._Page_k__BackingField = 0x3418bde;
                AStack_40._PageSize_k__BackingField = 0;
                AVar11 = AVar10;
                AVar38 = AVar26;
                System_Action_object____ctor();
                AVar37._Page_k__BackingField = 0;
                AVar37._PageSize_k__BackingField = 0;
                if (pcVar16 != (char *)0x0) {
                  AStack_40._Page_k__BackingField = 0x3418bf4;
                  AStack_40._PageSize_k__BackingField = 0;
                  (**(code **)(pcVar16 + 0x18))
                            (*(undefined8 *)(pcVar16 + 0x40),AVar25,AVar26,*(undefined8 *)(pcVar16 + 0x28));
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
  AStack_40._Page_k__BackingField = 0x3418c08;
  AStack_40._PageSize_k__BackingField = 0;
  il2cpp_runtime_helper_022b2c90();
  AStack_50 = AVar12;
  now_00.fields._8_8_ =
       (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
       ((ulong)now.fields._8_8_ & 0xffffffff);
  key = AVar11;
  AVar39 = AVar38;
  pMStack_78 = (MethodInfo_3318C10 *)in_R9;
  AStack_70 = AVar42;
  AStack_68 = AVar10;
  AStack_60 = AVar26;
  AStack_58 = AVar30;
  AStack_48 = AVar25;
  AStack_40 = AVar37;
  if (g_data_057a8cea == '\0') {
    AStack_98._Page_k__BackingField = 0x3418c49;
    AStack_98._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    AStack_98._Page_k__BackingField = 0x3418c55;
    AStack_98._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    AStack_98._Page_k__BackingField = 0x3418c61;
    AStack_98._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    AVar39 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)&TypeInfo_TimeSpan;
    AStack_98._Page_k__BackingField = 0x3418c6d;
    AStack_98._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cea = '\x01';
  }
  cStack_90 = '\0';
  uStack_8f = 0;
  uStack_88 = 0;
  AVar25 = now_00.fields._8_8_;
  if (AVar11 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    if (*(char *)((long)AVar11 + 0x38) == '\0') {
label_03418d39:
      if (*(char *)((long)AVar11 + 0x39) == '\0') {
        return;
      }
      pvVar4 = ((Il2CppType *)((long)AVar38 + 0x20))->data;
      if (pvVar4 != (void *)0x0) {
        cStack_90 = *(char *)((long)pvVar4 + 0x18);
        uStack_88 = *(undefined8 *)((long)pvVar4 + 0x20);
        if (cStack_90 == '\0') {
          return;
        }
        AVar37 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar11 + 0x28);
        Var6 = *(unkuint10 *)((long)AVar11 + 0x28);
        AVar12._2_6_ = 0;
        AVar12._Page_k__BackingField._0_2_ = *(ushort *)((long)AVar11 + 0x30);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          AStack_98._Page_k__BackingField = 0x3418d89;
          AStack_98._PageSize_k__BackingField = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        AVar42._Page_k__BackingField = 0;
        AVar42._PageSize_k__BackingField = 0;
        AStack_98._Page_k__BackingField = 0x3418d9d;
        AStack_98._PageSize_k__BackingField = 0;
        left_00.fields._8_8_ = now_00.fields._8_8_;
        left_00.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var6;
        now.fields._8_8_ = AVar12;
        AVar39 = extraout_RDX;
        AVar25 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                 System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar4 = ((Il2CppType *)((long)AVar38 + 0x20))->data;
        key = now_00.fields._8_8_;
        if (pvVar4 != (void *)0x0) {
          cStack_90 = *(char *)((long)pvVar4 + 0x18);
          uStack_88 = *(undefined8 *)((long)pvVar4 + 0x20);
          AStack_98._Page_k__BackingField = 0x3418dcf;
          AStack_98._PageSize_k__BackingField = 0;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &cStack_90;
          AVar12 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                   System_Nullable_TimeSpan___get_Value(__this_03,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            AStack_98._Page_k__BackingField = 0x3418dea;
            AStack_98._PageSize_k__BackingField = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          AVar37._Page_k__BackingField = 0;
          AVar37._PageSize_k__BackingField = 0;
          AStack_98._Page_k__BackingField = 0x3418df9;
          AStack_98._PageSize_k__BackingField = 0;
          bVar8 = System_TimeSpan__op_LessThan
                            ((System_TimeSpan_o)AVar25,(System_TimeSpan_o)AVar12,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          AVar39 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                    ((long)AVar11 + 0x20);
          key._Page_k__BackingField = 1;
          key._PageSize_k__BackingField = 0;
          AStack_98._Page_k__BackingField = 0x3418e22;
          AStack_98._PageSize_k__BackingField = 0;
          pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)AVar39,1,
                               (MethodInfo_331B520 *)
                               pMStack_78->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now.fields._8_4_ = 0;
          now.fields._12_4_ = 0;
          if (AStack_70 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
label_03418e2c:
            AStack_98._Page_k__BackingField = 0x3418e3a;
            AStack_98._PageSize_k__BackingField = 0;
            (**(code **)((long)AStack_70 + 0x18))
                      (*(Il2CppClass **)((long)AStack_70 + 0x40),pAVar13,
                       *(undefined8 *)((long)AStack_70 + 0x28));
            return;
          }
        }
      }
    }
    else {
      AVar37 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar11 + 0x28);
      Var6 = *(unkuint10 *)((long)AVar11 + 0x28);
      now.fields._10_6_ = 0;
      now.fields._offsetMinutes = *(ushort *)((long)AVar11 + 0x30);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        AStack_98._Page_k__BackingField = 0x3418caf;
        AStack_98._PageSize_k__BackingField = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      AVar42._Page_k__BackingField = 0;
      AVar42._PageSize_k__BackingField = 0;
      AStack_98._Page_k__BackingField = 0x3418cc3;
      AStack_98._PageSize_k__BackingField = 0;
      left.fields._8_8_ = now_00.fields._8_8_;
      left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var6;
      key = now_00.fields._8_8_;
      AVar39 = extraout_RDX;
      AVar12 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
               System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar4 = ((Il2CppType *)((long)AVar38 + 0x20))->data;
      if (pvVar4 != (void *)0x0) {
        AVar37 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)pvVar4 + 0x10);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          AStack_98._Page_k__BackingField = 0x3418cf0;
          AStack_98._PageSize_k__BackingField = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        AStack_98._Page_k__BackingField = 0x3418cfd;
        AStack_98._PageSize_k__BackingField = 0;
        key = AVar37;
        AVar39 = AVar12;
        bVar8 = System_TimeSpan__op_LessThan
                          ((System_TimeSpan_o)AVar12,(System_TimeSpan_o)AVar37,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') goto label_03418d39;
        AVar39 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar11 + 0x18);
        key._Page_k__BackingField = 1;
        key._PageSize_k__BackingField = 0;
        AStack_98._Page_k__BackingField = 0x3418d26;
        AStack_98._PageSize_k__BackingField = 0;
        pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)AVar39,1,
                             (MethodInfo_331B380 *)
                             pMStack_78->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (AStack_70 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
        goto label_03418e2c;
        now.fields._8_4_ = 0;
        now.fields._12_4_ = 0;
      }
    }
  }
  AStack_98._Page_k__BackingField = 0x3418e57;
  AStack_98._PageSize_k__BackingField = 0;
  il2cpp_runtime_helper_022b2c90();
  AVar26 = now.fields._8_8_;
  AVar10 = key;
  AStack_b0 = AVar11;
  AStack_a8 = AVar38;
  AStack_a0 = AVar12;
  AStack_98 = extraout_RDX;
  if (g_data_057a8ceb == '\0') {
    AStack_d0._Page_k__BackingField = 0x3418e8c;
    AStack_d0._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ceb = '\x01';
  }
  AStack_c0._Page_k__BackingField = 0;
  AStack_c0._PageSize_k__BackingField = 0;
  AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar39 + 0x28);
  pAVar14 = extraout_RDX_00;
  if (AVar11 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
label_034191b6:
    AStack_d0._Page_k__BackingField = 0x34191bb;
    AStack_d0._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    AVar26 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
              (*(long *)((long)((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data + 0xc0) + 0x48);
    AStack_d0._Page_k__BackingField = 0x3418ec5;
    AStack_d0._PageSize_k__BackingField = 0;
    AVar10 = key;
    bVar8 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)AVar11,
                       (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)key,
                       (Il2CppObject **)&AStack_c0,(MethodInfo_315C740 *)AVar26);
    if ((char)bVar8 == '\0') {
      return;
    }
    if (AStack_c0 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
    goto label_034191b6;
    *(undefined1 *)((long)AStack_c0 + 0x3a) = 0;
    if (extraout_RDX_00 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      AVar10 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                (*(long *)((long)((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data + 0xc0) + 0x118);
      AStack_d0._Page_k__BackingField = 0x3418f05;
      AStack_d0._PageSize_k__BackingField = 0;
      AVar11 = "unknown_error";
      pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error",(MethodInfo_331AB10 *)AVar10);
      if (pAVar14 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_034191b6;
    }
    AVar11 = AStack_c0;
    if (AStack_c0 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
    goto label_034191b6;
    if ((char)(pAVar14->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)((long)AStack_c0 + 0x38) = 1;
      AVar10 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
               (pAVar14->fields)._Value_k__BackingField;
      *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AStack_c0 + 0x18) = AVar10
      ;
      AStack_d0._Page_k__BackingField = 0x3418f43;
      AStack_d0._PageSize_k__BackingField = 0;
      il2cpp_runtime_helper_022b4080((char **)((long)AStack_c0 + 0x18));
      AVar11._Page_k__BackingField = 0;
      AVar11._PageSize_k__BackingField = 0;
      if (AStack_c0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
        ((Il2CppType *)((long)AStack_c0 + 0x20))->data = (void *)0x0;
        AVar11 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((long)AStack_c0 + 0x20);
        AVar10._Page_k__BackingField = 0;
        AVar10._PageSize_k__BackingField = 0;
        AStack_d0._Page_k__BackingField = 0x3418f64;
        AStack_d0._PageSize_k__BackingField = 0;
        il2cpp_runtime_helper_022b4080();
        AVar12 = AStack_c0;
        AVar26 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar39 + 0x18);
        if (AVar26 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
          AVar10 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                    ((long)AVar26 + 0x28);
          AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                    ((long)AVar26 + 0x40);
          AStack_d0._Page_k__BackingField = 0x3418f81;
          AStack_d0._PageSize_k__BackingField = 0;
          Var48 = (**(code **)((long)AVar26 + 0x18))();
          key = AVar12;
          if (AVar12 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
            *(unkbyte10 *)((long)AVar12 + 0x28) = Var48;
            *(undefined2 *)((long)AVar12 + 0x36) = uStack_b2;
            *(undefined4 *)((long)AVar12 + 0x32) = uStack_b6;
            if (AStack_c0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
              AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                        ((long)AStack_c0 + 0x18);
              AVar10._Page_k__BackingField = 0;
              AVar10._PageSize_k__BackingField = 0;
              AStack_d0._Page_k__BackingField = 0x3418fcd;
              AStack_d0._PageSize_k__BackingField = 0;
              AVar39 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                       ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                 ((Il2CppObject *)AVar11,0,
                                  *(MethodInfo_331B380 **)
                                   (*(long *)((long)((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data +
                                             0xc0) + 0x100));
              goto joined_r0x03418fd8;
            }
          }
        }
      }
      goto label_034191b6;
    }
    if (*(char *)((long)AStack_c0 + 0x38) != '\0') {
      pvVar4 = ((Il2CppType *)((long)AVar39 + 0x20))->data;
      if (pvVar4 != (void *)0x0) {
        if (*(char *)((long)pvVar4 + 0x28) == '\0') goto label_03419131;
        AVar10 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                 (pAVar14->fields)._Error_k__BackingField;
        *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AStack_c0 + 0x20) =
             AVar10;
        AVar11 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((long)AStack_c0 + 0x20);
        AStack_d0._Page_k__BackingField = 0x34190ed;
        AStack_d0._PageSize_k__BackingField = 0;
        il2cpp_runtime_helper_022b4080();
        if (AStack_c0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
          AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                    ((long)AStack_c0 + 0x18);
          AVar10 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                   (pAVar14->fields)._Error_k__BackingField;
          AStack_d0._Page_k__BackingField = 0x341911b;
          AStack_d0._PageSize_k__BackingField = 0;
          AVar39 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                   ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                             ((Il2CppObject *)AVar11,(System_String_o *)AVar10,
                              *(MethodInfo_331B660 **)
                               (*(long *)((long)((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data + 0xc0)
                               + 0x140));
          AVar12 = key;
joined_r0x03418fd8:
          key = AVar12;
          if (AStack_c0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
          goto label_03418fde;
        }
      }
      goto label_034191b6;
    }
label_03419131:
    *(undefined2 *)((long)AStack_c0 + 0x38) = 0x100;
    *(char **)((long)AStack_c0 + 0x18) = (char *)0x0;
    AVar10 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
             (pAVar14->fields)._Error_k__BackingField;
    *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AStack_c0 + 0x20) = AVar10;
    AVar11 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((long)AStack_c0 + 0x20);
    AStack_d0._Page_k__BackingField = 0x3419151;
    AStack_d0._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_022b4080();
    AVar12 = AStack_c0;
    AVar26 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar39 + 0x18);
    if (AVar26 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) goto label_034191b6;
    AVar10 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar26 + 0x28);
    AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar26 + 0x40);
    AStack_d0._Page_k__BackingField = 0x341916a;
    AStack_d0._PageSize_k__BackingField = 0;
    Var48 = (**(code **)((long)AVar26 + 0x18))();
    key = AVar12;
    if (AVar12 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) goto label_034191b6;
    *(unkbyte10 *)((long)AVar12 + 0x28) = Var48;
    *(undefined4 *)((long)AVar12 + 0x32) = uStack_b6;
    *(undefined2 *)((long)AVar12 + 0x36) = uStack_b2;
    AVar11 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
             (pAVar14->fields)._Error_k__BackingField;
    AVar10._Page_k__BackingField = 0;
    AVar10._PageSize_k__BackingField = 0;
    AStack_d0._Page_k__BackingField = 0x34191a5;
    AStack_d0._PageSize_k__BackingField = 0;
    AVar39 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
             ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                       ((System_String_o *)AVar11,0,
                        *(MethodInfo_331B520 **)
                         (*(long *)((long)((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data + 0xc0) +
                         0x108));
    if (AStack_c0 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
    goto label_034191b6;
label_03418fde:
    AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AStack_c0 + 0x10);
    key = AVar12;
    if (AVar11 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) goto label_034191b6;
    AVar10 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
              (*(long *)((long)((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data + 0xc0) + 0x148);
    AStack_d0._Page_k__BackingField = 0x3419002;
    AStack_d0._PageSize_k__BackingField = 0;
    now.fields._8_8_ =
         (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)AVar11,(MethodInfo_362E340 *)AVar10);
    if ((AStack_c0 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) ||
       (pcVar16 = *(char **)((long)AStack_c0 + 0x10), pcVar16 == (char *)0x0)) goto label_034191b6;
    *(int *)(pcVar16 + 0x1c) = *(int *)(pcVar16 + 0x1c) + 1;
    iVar3 = *(int32_t *)(pcVar16 + 0x18);
    pcVar16[0x18] = '\0';
    pcVar16[0x19] = '\0';
    pcVar16[0x1a] = '\0';
    pcVar16[0x1b] = '\0';
    if (0 < iVar3) {
      AVar11 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)(pcVar16 + 0x10);
      AVar10._Page_k__BackingField = 0;
      AVar10._PageSize_k__BackingField = 0;
      AVar26._Page_k__BackingField = 0;
      AVar26._PageSize_k__BackingField = 0;
      AStack_d0._Page_k__BackingField = 0x341903f;
      AStack_d0._PageSize_k__BackingField = 0;
      System_Array__Clear((System_Array_o *)AVar11,0,iVar3,(MethodInfo *)0x0);
    }
    if (now.fields._8_8_ == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
    goto label_034191b6;
    if ((int)*(ulong *)((long)now.fields._8_8_ + 0x18) < 1) {
      return;
    }
    pAVar14 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0;
    key._Page_k__BackingField = 0;
    key._PageSize_k__BackingField = 0;
    pAVar44 = pAVar14;
    if ((*(ulong *)((long)now.fields._8_8_ + 0x18) & 0xffffffff) != 0) {
      do {
        pAVar14 = *(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o **)
                   ((long)now.fields._8_8_ + 0x20 + (long)key * 8);
        if (pAVar14 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
          if (pAVar14 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_034191b6;
          AVar11 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                   pAVar14[1].fields._Value_k__BackingField;
          AStack_d0._Page_k__BackingField = 0x34190b4;
          AStack_d0._PageSize_k__BackingField = 0;
          AVar10 = AVar39;
          (*(code *)(pAVar14->fields)._Value_k__BackingField)(AVar11,AVar39,pAVar14[1].klass);
          pAVar44 = pAVar14;
        }
        pAVar14 = pAVar44;
        key = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((long)key + 1);
        AVar26 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                 (long)(int)*(uint *)((long)now.fields._8_8_ + 0x18);
        if ((long)AVar26 <= (long)key) {
          return;
        }
        AVar38._PageSize_k__BackingField = 0;
        AVar38._Page_k__BackingField = *(uint *)((long)now.fields._8_8_ + 0x18);
        pAVar44 = pAVar14;
      } while ((ulong)key < (ulong)AVar38);
    }
  }
  AStack_d0 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
              ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor;
  auVar47 = il2cpp_runtime_helper_022b2ca0();
  pcVar16 = auVar47._8_8_;
  uStack_100 = auVar47._0_8_;
  now_00.fields._8_8_ = AVar26;
  t1 = AVar42;
  AStack_f8 = key;
  pAStack_f0 = pAVar14;
  AStack_e8 = AVar25;
  AStack_e0 = now.fields._8_8_;
  AStack_d8 = AVar39;
  AStack_d0 = AVar37;
  if (g_data_057a8cec == '\0') {
    uStack_108 = 0x34191ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    uStack_108 = 0x34191fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cec = '\x01';
  }
  lVar9 = **(long **)((long)((Il2CppType *)((long)AVar42 + 0x20))->data + 0xc0);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    uStack_108 = 0x341921e;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  uStack_108 = 0x3419226;
  pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar9);
  uStack_108 = 0x3419240;
  System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object____ctor
            (pSVar15,*(MethodInfo_315DA50 **)
                      (*(long *)((long)((Il2CppType *)((long)AVar42 + 0x20))->data + 0xc0) + 8));
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)AVar11 + 0x28) = pSVar15;
  uStack_108 = 0x3419250;
  il2cpp_runtime_helper_022b4080((uint *)((long)AVar11 + 0x28));
  AVar25._Page_k__BackingField = 0;
  AVar25._PageSize_k__BackingField = 0;
  uStack_108 = 0x341925a;
  System_Object___ctor((Il2CppObject *)AVar11,(MethodInfo *)0x0);
  if (AVar10 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    uStack_108 = 0x3419439;
    uVar21 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    uStack_108 = 0x3419441;
    AVar10 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)il2cpp_runtime_helper_023052d0(uVar21);
    uStack_108 = 0x3419450;
    pSVar22 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    uStack_108 = 0x341945d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)AVar10,pSVar22,(MethodInfo *)0x0);
    uStack_108 = 0x3419468;
    AVar25 = AVar42;
    AVar39 = AVar10;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    AVar39._Page_k__BackingField = 0;
    AVar39._PageSize_k__BackingField = 0;
    if (AVar11 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
      *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar11 + 0x10) = AVar10;
      uStack_108 = 0x3419283;
      il2cpp_runtime_helper_022b4080((char **)((long)AVar11 + 0x10),AVar10);
      if (pcVar16 == (char *)0x0) {
        lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar42 + 0x20))->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          uStack_108 = 0x34192a9;
          lVar9 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          uStack_108 = 0x34192ba;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar42 + 0x20))->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          uStack_108 = 0x34192da;
          lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
        }
        pcVar16 = *(char **)(*(long *)(lVar9 + 0xb8) + 8);
        if (pcVar16 == (char *)0x0) {
          lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar42 + 0x20))->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            uStack_108 = 0x341930b;
            lVar9 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            uStack_108 = 0x341931c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar42 + 0x20))->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            uStack_108 = 0x341933c;
            il2cpp_runtime_helper_023009c0(lVar9);
          }
          uStack_108 = 0x3419355;
          pcVar16 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          uStack_108 = 0x3419374;
          System_Func_DateTimeOffset____ctor();
          lVar9 = *(long *)((long)((Il2CppType *)((long)AVar42 + 0x20))->data + 0xc0);
          lVar17 = *(long *)(lVar9 + 0x28);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            uStack_108 = 0x3419394;
            lVar17 = il2cpp_runtime_helper_023009c0(lVar17);
            lVar9 = *(long *)((long)((Il2CppType *)((long)AVar42 + 0x20))->data + 0xc0);
          }
          *(char **)(*(long *)(lVar17 + 0xb8) + 8) = pcVar16;
          lVar9 = *(long *)(lVar9 + 0x28);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            uStack_108 = 0x34193bf;
            lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
          }
          uStack_108 = 0x34193d2;
          il2cpp_runtime_helper_022b4080(*(long *)(lVar9 + 0xb8) + 8,pcVar16);
        }
      }
      *(char **)((long)AVar11 + 0x18) = pcVar16;
      uStack_108 = 0x34193e2;
      il2cpp_runtime_helper_022b4080((char **)((long)AVar11 + 0x18),pcVar16);
      if (AVar26 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          uStack_108 = 0x34193ff;
          il2cpp_runtime_helper_02337ed0();
        }
        AVar26 = **(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields **)
                   (TypeInfo_AottgQueryPolicy + 0xb8);
      }
      *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar11 + 0x20) = AVar26;
      il2cpp_runtime_helper_022b4080((Il2CppType *)((long)AVar11 + 0x20),AVar26);
      return;
    }
  }
  uStack_108 = 0x341946d;
  auVar47 = il2cpp_runtime_helper_022b2c90();
  uStack_108 = auVar47._0_8_;
  lVar9 = *(long *)((long)AVar39 + 0x28);
  if (lVar9 != 0) {
    lStack_110 = 0x325e8f8;
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___FindEntry
              (lVar9,(ulong)AVar25 & 0xff,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(auVar47._8_8_ + 0x20) + 0xc0) + 0x40) +
                                    0x20) + 0xc0) + 0x108));
    return;
  }
  lStack_110 = 0x3419498;
  il2cpp_runtime_helper_022b2c90();
  lStack_110 = 0;
  lVar9 = *(long *)(lVar9 + 0x28);
  if (lVar9 != 0) {
    now_00.fields._8_8_ =
         *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
          (*(long *)(*(long *)(extraout_RDX_01 + 0x20) + 0xc0) + 0x48);
    AVar25 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((ulong)AVar25 & 0xff);
    uStack_118 = 0x34194cd;
    bVar8 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                      (lVar9,AVar25,&lStack_110);
    if ((char)bVar8 == '\0') {
      return;
    }
    if (lStack_110 != 0) {
      return;
    }
  }
  uStack_118 = 0x34194ec;
  uStack_118 = il2cpp_runtime_helper_022b2c90();
  pSVar40 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar9 + 0x28);
  if (pSVar40 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___Clear
              (pSVar40,*(MethodInfo_315E880 **)
                        (*(long *)((long)((Il2CppType *)((long)AVar25 + 0x20))->data + 0xc0) + 0x60));
    return;
  }
  uStack_120 = 0x3419514;
  auVar47 = il2cpp_runtime_helper_022b2c90();
  uStack_120 = auVar47._0_8_;
  __this._Page_k__BackingField = (pSVar40->fields)._freeCount;
  __this._PageSize_k__BackingField = (pSVar40->fields)._version;
  if (__this != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___Remove
              (__this,(ulong)AVar25 & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar47._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pSStack_128 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x3419548;
  il2cpp_runtime_helper_022b2c90();
  uVar31 = (ulong)now_00.fields._8_8_ & 0xffffffff;
  t2 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((ulong)AVar25 & 0xffffffff);
  AStack_158._Page_k__BackingField = 0;
  AStack_158._PageSize_k__BackingField = 0;
  lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0x70);
  AVar43 = t1;
  AStack_150 = AVar10;
  pcStack_148 = pcVar16;
  AStack_140 = AVar11;
  AStack_138 = AVar26;
  AStack_130 = AVar42;
  pSStack_128 = pSVar15;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    AStack_160._Page_k__BackingField = 0x341958e;
    AStack_160._PageSize_k__BackingField = 0;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  AStack_160._Page_k__BackingField = 0x3419596;
  AStack_160._PageSize_k__BackingField = 0;
  AVar12 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)il2cpp_runtime_helper_023052d0(lVar9);
  AVar18 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
            (*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0x78);
  AStack_160._Page_k__BackingField = 0x34195b0;
  AStack_160._PageSize_k__BackingField = 0;
  now.fields._8_8_ = AVar12;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)AVar12,
             (MethodInfo_27BBA50 *)AVar18);
  AVar45 = onResult_01;
  if (AVar12 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar12 + 0x10) = __this;
    AStack_160._Page_k__BackingField = 0x34195cc;
    AStack_160._PageSize_k__BackingField = 0;
    AVar18 = __this;
    il2cpp_runtime_helper_022b4080((char **)((long)AVar12 + 0x10));
    *(char *)((long)AVar12 + 0x18) = (char)t2._Page_k__BackingField;
    if (onResult_01 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
      return;
    }
    now.fields._8_8_ =
         *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)__this + 0x28);
    if (now.fields._8_8_ != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
      now_00.fields._8_8_ =
           *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
            (*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0x48);
      AVar18 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((ulong)AVar25 & 0xff);
      AStack_160._Page_k__BackingField = 0x3419601;
      AStack_160._PageSize_k__BackingField = 0;
      bVar8 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                        (now.fields._8_8_,AVar18,&AStack_158);
      if ((char)bVar8 == '\0') {
        lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0x58);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          AStack_160._Page_k__BackingField = 0x3419622;
          AStack_160._PageSize_k__BackingField = 0;
          lVar9 = il2cpp_runtime_helper_023009c0();
        }
        AStack_160._Page_k__BackingField = 0x341962a;
        AStack_160._PageSize_k__BackingField = 0;
        t2 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)il2cpp_runtime_helper_023052d0(lVar9);
        AVar18 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  (*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0x88);
        AStack_160._Page_k__BackingField = 0x3419647;
        AStack_160._PageSize_k__BackingField = 0;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2,
                   (MethodInfo_31EFAA0 *)AVar18);
        now.fields._8_8_ =
             *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)__this + 0x28);
        AStack_158 = t2;
        if (now.fields._8_8_ == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
        goto label_03419833;
        AVar18._PageSize_k__BackingField = 0;
        AVar18._Page_k__BackingField = *(uint *)((long)AVar12 + 0x18);
        AStack_160._Page_k__BackingField = 0x3419675;
        AStack_160._PageSize_k__BackingField = 0;
        System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___set_Item
                  (now.fields._8_8_,AVar18,t2,
                   *(undefined8 *)(*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0x90));
      }
      now_00.fields._8_8_ =
           *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)__this + 0x18);
      if (now_00.fields._8_8_ != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
        AVar18 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  ((long)now_00.fields._8_8_ + 0x28);
        now.fields._8_8_ =
             *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
              ((long)now_00.fields._8_8_ + 0x40);
        AStack_160._Page_k__BackingField = 0x341968d;
        AStack_160._PageSize_k__BackingField = 0;
        auVar47 = (**(code **)((long)now_00.fields._8_8_ + 0x18))();
        if ((char)uVar31 == '\0') {
          now_00.fields._8_8_ =
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
               (auVar47._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0x98);
          AStack_160._Page_k__BackingField = 0x34196b8;
          AStack_160._PageSize_k__BackingField = 0;
          now_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar47._0_8_;
          AVar18 = AStack_158;
          now.fields._8_8_ = __this;
          AVar43 = onResult_01;
          bVar8 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___TryEmitFresh
                            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
                             (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)AStack_158,
                             now_00,(System_Action_AottgQueryResult_TValue___o *)onResult_01,
                             (MethodInfo_3319840 *)in_R9);
          if ((char)bVar8 != '\0') {
            return;
          }
        }
        if (AStack_158 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
          if (*(char *)((long)AStack_158 + 0x38) == '\0') {
            AStack_160._Page_k__BackingField = 0x3419707;
            AStack_160._PageSize_k__BackingField = 0;
            AVar18 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                     ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                               (*(MethodInfo_331B2F0 **)
                                 (*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 200));
          }
          else {
            AStack_160._Page_k__BackingField = 0x34196ee;
            AStack_160._PageSize_k__BackingField = 0;
            AVar18 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                     ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                               (*(Il2CppObject **)((long)AStack_158 + 0x18),
                                *(MethodInfo_331B450 **)
                                 (*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0xa8));
          }
          now.fields._8_8_ =
               *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                ((long)onResult_01 + 0x40);
          AStack_160._Page_k__BackingField = 0x3419719;
          AStack_160._PageSize_k__BackingField = 0;
          (**(code **)((long)onResult_01 + 0x18))
                    (now.fields._8_8_,AVar18,*(undefined8 *)((long)onResult_01 + 0x28));
          if ((AStack_158 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) &&
             (now.fields._8_8_ =
                   *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                    ((long)AStack_158 + 0x10),
             now.fields._8_8_ != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)) {
            now_00.fields._8_8_ =
                 *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  (*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0xd8);
            *(int *)((long)now.fields._8_8_ + 0x1c) = *(int *)((long)now.fields._8_8_ + 0x1c) + 1;
            pcVar16 = *(char **)((long)now.fields._8_8_ + 0x10);
            if (pcVar16 != (char *)0x0) {
              uVar2 = *(uint *)((long)now.fields._8_8_ + 0x18);
              AVar18 = onResult_01;
              if (uVar2 < *(uint *)(pcVar16 + 0x18)) {
                now_00.fields._8_4_ = uVar2 + 1;
                now_00.fields._12_4_ = 0;
                *(uint *)((long)now.fields._8_8_ + 0x18) = now_00.fields._8_4_;
                now.fields._8_8_ =
                     (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                     ((long)pcVar16 + (long)(int)uVar2 * 8 + 0x20);
                *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                 (pcVar16 + (long)(int)uVar2 * 8 + 0x20) = onResult_01;
                AStack_160._Page_k__BackingField = 0x341977a;
                AStack_160._PageSize_k__BackingField = 0;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                AStack_160._Page_k__BackingField = 0x341979f;
                AStack_160._PageSize_k__BackingField = 0;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)now.fields._8_8_,
                           (Il2CppObject *)onResult_01,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)((long)now_00.fields._8_8_ + 0x20))->data + 0xc0)
                            + 0x70));
              }
              if (AStack_158 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
                if (*(char *)((long)AStack_158 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)((long)AStack_158 + 0x3a) = 1;
                pcVar16 = *(char **)((long)__this + 0x10);
                uVar1 = *(undefined1 *)((long)AVar12 + 0x18);
                AVar45._1_7_ = onResult_01._1_7_;
                AVar45._Page_k__BackingField._0_1_ = uVar1;
                lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0xe8);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  AStack_160._Page_k__BackingField = 0x34197de;
                  AStack_160._PageSize_k__BackingField = 0;
                  lVar9 = il2cpp_runtime_helper_023009c0();
                }
                AStack_160._Page_k__BackingField = 0x34197e6;
                AStack_160._PageSize_k__BackingField = 0;
                __this = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                         il2cpp_runtime_helper_023052d0(lVar9);
                now_00.fields._8_8_ =
                     *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                      (*(long *)((long)((Il2CppType *)((long)t1 + 0x20))->data + 0xc0) + 0xf0);
                AStack_160._Page_k__BackingField = 0x341980d;
                AStack_160._PageSize_k__BackingField = 0;
                AVar18 = AVar12;
                now.fields._8_8_ = __this;
                System_Action_object____ctor();
                t2._Page_k__BackingField = 0;
                t2._PageSize_k__BackingField = 0;
                if (pcVar16 != (char *)0x0) {
                  AStack_160._Page_k__BackingField = 0x3419824;
                  AStack_160._PageSize_k__BackingField = 0;
                  (**(code **)(pcVar16 + 0x18))
                            (*(undefined8 *)(pcVar16 + 0x40),uVar1,__this,*(undefined8 *)(pcVar16 + 0x28));
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
  AStack_160._Page_k__BackingField = 0x3419838;
  AStack_160._PageSize_k__BackingField = 0;
  il2cpp_runtime_helper_022b2c90();
  AVar26 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
           ((ulong)now_00.fields._8_8_ & 0xffffffff);
  AVar34 = AVar18;
  AVar25 = now.fields._8_8_;
  pMStack_198 = (MethodInfo_3318C10 *)in_R9;
  AStack_190 = AVar43;
  AStack_188 = AVar12;
  AStack_180 = AVar45;
  uStack_178 = uVar31;
  AStack_170 = t1;
  AStack_168 = __this;
  AStack_160 = t2;
  if (g_data_057a8ced == '\0') {
    AStack_1b8._Page_k__BackingField = 0x3419879;
    AStack_1b8._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    AStack_1b8._Page_k__BackingField = 0x3419885;
    AStack_1b8._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    AStack_1b8._Page_k__BackingField = 0x3419891;
    AStack_1b8._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    AVar25 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)&TypeInfo_TimeSpan;
    AStack_1b8._Page_k__BackingField = 0x341989d;
    AStack_1b8._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ced = '\x01';
  }
  cStack_1b0 = '\0';
  uStack_1af = 0;
  uStack_1a8 = 0;
  AVar12 = AVar26;
  if (AVar18 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    if (*(char *)((long)AVar18 + 0x38) == '\0') {
label_03419969:
      if (*(char *)((long)AVar18 + 0x39) == '\0') {
        return;
      }
      pvVar4 = ((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data;
      if (pvVar4 != (void *)0x0) {
        cStack_1b0 = *(char *)((long)pvVar4 + 0x18);
        uStack_1a8 = *(undefined8 *)((long)pvVar4 + 0x20);
        if (cStack_1b0 == '\0') {
          return;
        }
        t2 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar18 + 0x28);
        Var6 = *(unkuint10 *)((long)AVar18 + 0x28);
        t1._2_6_ = 0;
        t1._Page_k__BackingField._0_2_ = *(ushort *)&((Il2CppType *)((long)AVar18 + 0x30))->data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          AStack_1b8._Page_k__BackingField = 0x34199b9;
          AStack_1b8._PageSize_k__BackingField = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        AVar43._Page_k__BackingField = 0;
        AVar43._PageSize_k__BackingField = 0;
        AStack_1b8._Page_k__BackingField = 0x34199cd;
        AStack_1b8._PageSize_k__BackingField = 0;
        left_02.fields._8_8_ = AVar26;
        left_02.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_02;
        right_02.fields._10_6_ = 0;
        right_02.fields._0_10_ = Var6;
        now_00.fields._8_8_ = t1;
        AVar25 = extraout_RDX_02;
        AVar12 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                 System_DateTimeOffset__op_Subtraction(left_02,right_02,(MethodInfo *)0x0);
        pvVar4 = ((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data;
        AVar34 = AVar26;
        if (pvVar4 != (void *)0x0) {
          cStack_1b0 = *(char *)((long)pvVar4 + 0x18);
          uStack_1a8 = *(undefined8 *)((long)pvVar4 + 0x20);
          AStack_1b8._Page_k__BackingField = 0x34199ff;
          AStack_1b8._PageSize_k__BackingField = 0;
          __this_04.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_04.fields._0_8_ = &cStack_1b0;
          t1 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
               System_Nullable_TimeSpan___get_Value(__this_04,method_01);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            AStack_1b8._Page_k__BackingField = 0x3419a1a;
            AStack_1b8._PageSize_k__BackingField = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          t2._Page_k__BackingField = 0;
          t2._PageSize_k__BackingField = 0;
          AStack_1b8._Page_k__BackingField = 0x3419a29;
          AStack_1b8._PageSize_k__BackingField = 0;
          bVar8 = System_TimeSpan__op_LessThan
                            ((System_TimeSpan_o)AVar12,(System_TimeSpan_o)t1,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          AVar25 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                    ((long)AVar18 + 0x20);
          AVar34._Page_k__BackingField = 1;
          AVar34._PageSize_k__BackingField = 0;
          AStack_1b8._Page_k__BackingField = 0x3419a52;
          AStack_1b8._PageSize_k__BackingField = 0;
          pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)AVar25,1,
                               (MethodInfo_331B520 *)
                               pMStack_198->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now_00.fields._8_4_ = 0;
          now_00.fields._12_4_ = 0;
          if (AStack_190 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
label_03419a5c:
            AStack_1b8._Page_k__BackingField = 0x3419a6a;
            AStack_1b8._PageSize_k__BackingField = 0;
            (**(code **)((long)AStack_190 + 0x18))
                      (*(Il2CppClass **)((long)AStack_190 + 0x40),pAVar13,
                       *(undefined8 *)((long)AStack_190 + 0x28));
            return;
          }
        }
      }
    }
    else {
      t2 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar18 + 0x28);
      Var6 = *(unkuint10 *)((long)AVar18 + 0x28);
      now_00.fields._10_6_ = 0;
      now_00.fields._offsetMinutes = *(ushort *)&((Il2CppType *)((long)AVar18 + 0x30))->data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        AStack_1b8._Page_k__BackingField = 0x34198df;
        AStack_1b8._PageSize_k__BackingField = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      AVar43._Page_k__BackingField = 0;
      AVar43._PageSize_k__BackingField = 0;
      AStack_1b8._Page_k__BackingField = 0x34198f3;
      AStack_1b8._PageSize_k__BackingField = 0;
      left_01.fields._8_8_ = AVar26;
      left_01.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_02;
      right_01.fields._10_6_ = 0;
      right_01.fields._0_10_ = Var6;
      AVar34 = AVar26;
      AVar25 = extraout_RDX_02;
      t1 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
           System_DateTimeOffset__op_Subtraction(left_01,right_01,(MethodInfo *)0x0);
      pvVar4 = ((Il2CppType *)((long)now.fields._8_8_ + 0x20))->data;
      if (pvVar4 != (void *)0x0) {
        t2 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)pvVar4 + 0x10);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          AStack_1b8._Page_k__BackingField = 0x3419920;
          AStack_1b8._PageSize_k__BackingField = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        AStack_1b8._Page_k__BackingField = 0x341992d;
        AStack_1b8._PageSize_k__BackingField = 0;
        AVar34 = t2;
        AVar25 = t1;
        bVar8 = System_TimeSpan__op_LessThan((System_TimeSpan_o)t1,(System_TimeSpan_o)t2,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') goto label_03419969;
        AVar25 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar18 + 0x18);
        AVar34._Page_k__BackingField = 1;
        AVar34._PageSize_k__BackingField = 0;
        AStack_1b8._Page_k__BackingField = 0x3419956;
        AStack_1b8._PageSize_k__BackingField = 0;
        pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)AVar25,1,
                             (MethodInfo_331B380 *)
                             pMStack_198->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (AStack_190 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
        goto label_03419a5c;
        now_00.fields._8_4_ = 0;
        now_00.fields._12_4_ = 0;
      }
    }
  }
  AStack_1b8._Page_k__BackingField = 0x3419a87;
  AStack_1b8._PageSize_k__BackingField = 0;
  il2cpp_runtime_helper_022b2c90();
  AVar32 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((ulong)AVar34 & 0xffffffff);
  AVar29 = now_00.fields._8_8_;
  __this_00 = AVar34;
  AStack_1d0 = AVar18;
  AStack_1c8 = t1;
  AStack_1c0 = extraout_RDX_02;
  AStack_1b8 = t2;
  if (g_data_057a8cee == '\0') {
    AStack_1f0._Page_k__BackingField = 0x3419aba;
    AStack_1f0._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cee = '\x01';
  }
  AStack_1e0._Page_k__BackingField = 0;
  AStack_1e0._PageSize_k__BackingField = 0;
  __this_02 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar25 + 0x28);
  AVar19 = extraout_RDX_03;
  if (__this_02 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
label_03419dcd:
    AStack_1f0._Page_k__BackingField = 0x3419dd2;
    AStack_1f0._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    AVar29 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
              (*(long *)((long)((Il2CppType *)((long)now_00.fields._8_8_ + 0x20))->data + 0xc0) + 0x48);
    __this_00 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((ulong)AVar34 & 0xff);
    AStack_1f0._Page_k__BackingField = 0x3419af4;
    AStack_1f0._PageSize_k__BackingField = 0;
    bVar8 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                      (__this_02,__this_00,&AStack_1e0);
    if ((char)bVar8 == '\0') {
      return;
    }
    AVar19 = extraout_RDX_03;
    if (AStack_1e0 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
    goto label_03419dcd;
    *(undefined1 *)((long)AStack_1e0 + 0x3a) = 0;
    AVar19 = extraout_RDX_03;
    if (extraout_RDX_03 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
      __this_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                   (*(long *)((long)((Il2CppType *)((long)now_00.fields._8_8_ + 0x20))->data + 0xc0) + 0x118);
      AStack_1f0._Page_k__BackingField = 0x3419b34;
      AStack_1f0._PageSize_k__BackingField = 0;
      __this_02 = "unknown_error";
      AVar19 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
               ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                         ((System_String_o *)"unknown_error",(MethodInfo_331AB10 *)__this_00);
      if (AVar19 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
      goto label_03419dcd;
    }
    __this_02 = AStack_1e0;
    if (AStack_1e0 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
    goto label_03419dcd;
    if (*(char *)((long)AVar19 + 0x10) != '\0') {
      *(undefined2 *)((long)AStack_1e0 + 0x38) = 1;
      __this_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar19 + 0x18)
      ;
      *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AStack_1e0 + 0x18) =
           __this_00;
      AStack_1f0._Page_k__BackingField = 0x3419b6f;
      AStack_1f0._PageSize_k__BackingField = 0;
      il2cpp_runtime_helper_022b4080((char **)((long)AStack_1e0 + 0x18));
      __this_02._Page_k__BackingField = 0;
      __this_02._PageSize_k__BackingField = 0;
      if (AStack_1e0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
        ((Il2CppType *)((long)AStack_1e0 + 0x20))->data = (void *)0x0;
        __this_02 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                    ((long)AStack_1e0 + 0x20);
        __this_00._Page_k__BackingField = 0;
        __this_00._PageSize_k__BackingField = 0;
        AStack_1f0._Page_k__BackingField = 0x3419b90;
        AStack_1f0._PageSize_k__BackingField = 0;
        il2cpp_runtime_helper_022b4080();
        AVar26 = AStack_1e0;
        AVar29 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar25 + 0x18);
        if (AVar29 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
          __this_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                       ((long)AVar29 + 0x28);
          __this_02 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                       ((long)AVar29 + 0x40);
          AStack_1f0._Page_k__BackingField = 0x3419bad;
          AStack_1f0._PageSize_k__BackingField = 0;
          Var48 = (**(code **)((long)AVar29 + 0x18))();
          AVar19 = AVar26;
          if (AVar26 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
            *(unkbyte10 *)((long)AVar26 + 0x28) = Var48;
            *(undefined2 *)((long)AVar26 + 0x36) = uStack_1d2;
            *(undefined4 *)((long)AVar26 + 0x32) = uStack_1d6;
            if (AStack_1e0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
              __this_02 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                           ((long)AStack_1e0 + 0x18);
              __this_00._Page_k__BackingField = 0;
              __this_00._PageSize_k__BackingField = 0;
              AStack_1f0._Page_k__BackingField = 0x3419bf9;
              AStack_1f0._PageSize_k__BackingField = 0;
              AVar25 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                       ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                 ((Il2CppObject *)__this_02,0,
                                  *(MethodInfo_331B380 **)
                                   (*(long *)((long)((Il2CppType *)((long)now_00.fields._8_8_ + 0x20))->data +
                                             0xc0) + 0x100));
              goto joined_r0x03419c04;
            }
          }
        }
      }
      goto label_03419dcd;
    }
    if (*(char *)((long)AStack_1e0 + 0x38) != '\0') {
      pvVar4 = ((Il2CppType *)((long)AVar25 + 0x20))->data;
      if (pvVar4 != (void *)0x0) {
        if (*(char *)((long)pvVar4 + 0x28) == '\0') goto label_03419d4a;
        __this_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                     ((long)AVar19 + 0x20);
        *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AStack_1e0 + 0x20) =
             __this_00;
        __this_02 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                    ((long)AStack_1e0 + 0x20);
        AStack_1f0._Page_k__BackingField = 0x3419d07;
        AStack_1f0._PageSize_k__BackingField = 0;
        il2cpp_runtime_helper_022b4080();
        if (AStack_1e0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
          __this_02 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                       ((long)AStack_1e0 + 0x18);
          __this_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                       ((long)AVar19 + 0x20);
          AStack_1f0._Page_k__BackingField = 0x3419d34;
          AStack_1f0._PageSize_k__BackingField = 0;
          AVar25 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                   ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                             ((Il2CppObject *)__this_02,(System_String_o *)__this_00,
                              *(MethodInfo_331B660 **)
                               (*(long *)((long)((Il2CppType *)((long)now_00.fields._8_8_ + 0x20))->data +
                                         0xc0) + 0x140));
joined_r0x03419c04:
          AVar26 = AVar32;
          if (AStack_1e0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
          goto label_03419c0a;
        }
      }
      goto label_03419dcd;
    }
label_03419d4a:
    *(undefined2 *)((long)AStack_1e0 + 0x38) = 0x100;
    *(char **)((long)AStack_1e0 + 0x18) = (char *)0x0;
    __this_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar19 + 0x20);
    *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AStack_1e0 + 0x20) =
         __this_00;
    __this_02 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((long)AStack_1e0 + 0x20);
    AStack_1f0._Page_k__BackingField = 0x3419d69;
    AStack_1f0._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_022b4080();
    AVar26 = AStack_1e0;
    AVar29 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar25 + 0x18);
    if (AVar29 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) goto label_03419dcd;
    __this_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar29 + 0x28);
    __this_02 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar29 + 0x40);
    AStack_1f0._Page_k__BackingField = 0x3419d82;
    AStack_1f0._PageSize_k__BackingField = 0;
    Var48 = (**(code **)((long)AVar29 + 0x18))();
    AVar32 = AVar26;
    if (AVar26 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) goto label_03419dcd;
    *(unkbyte10 *)((long)AVar26 + 0x28) = Var48;
    *(undefined4 *)((long)AVar26 + 0x32) = uStack_1d6;
    *(undefined2 *)((long)AVar26 + 0x36) = uStack_1d2;
    __this_02 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar19 + 0x20);
    __this_00._Page_k__BackingField = 0;
    __this_00._PageSize_k__BackingField = 0;
    AStack_1f0._Page_k__BackingField = 0x3419dbc;
    AStack_1f0._PageSize_k__BackingField = 0;
    AVar25 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
             ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                       ((System_String_o *)__this_02,0,
                        *(MethodInfo_331B520 **)
                         (*(long *)((long)((Il2CppType *)((long)now_00.fields._8_8_ + 0x20))->data + 0xc0) +
                         0x108));
    if (AStack_1e0 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
    goto label_03419dcd;
label_03419c0a:
    __this_02 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                 ((long)AStack_1e0 + 0x10);
    AVar32 = AVar26;
    if (__this_02 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
    goto label_03419dcd;
    __this_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                 (*(long *)((long)((Il2CppType *)((long)now_00.fields._8_8_ + 0x20))->data + 0xc0) + 0x148);
    AStack_1f0._Page_k__BackingField = 0x3419c2e;
    AStack_1f0._PageSize_k__BackingField = 0;
    now_00.fields._8_8_ =
         (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)__this_02,(MethodInfo_362E340 *)__this_00);
    if ((AStack_1e0 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) ||
       (pcVar16 = *(char **)((long)AStack_1e0 + 0x10), pcVar16 == (char *)0x0)) goto label_03419dcd;
    *(int *)(pcVar16 + 0x1c) = *(int *)(pcVar16 + 0x1c) + 1;
    iVar3 = *(int32_t *)(pcVar16 + 0x18);
    pcVar16[0x18] = '\0';
    pcVar16[0x19] = '\0';
    pcVar16[0x1a] = '\0';
    pcVar16[0x1b] = '\0';
    if (0 < iVar3) {
      __this_02 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)(pcVar16 + 0x10);
      __this_00._Page_k__BackingField = 0;
      __this_00._PageSize_k__BackingField = 0;
      AVar29._Page_k__BackingField = 0;
      AVar29._PageSize_k__BackingField = 0;
      AStack_1f0._Page_k__BackingField = 0x3419c6b;
      AStack_1f0._PageSize_k__BackingField = 0;
      System_Array__Clear((System_Array_o *)__this_02,0,iVar3,(MethodInfo *)0x0);
    }
    if (now_00.fields._8_8_ == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
    goto label_03419dcd;
    if ((int)*(ulong *)((long)now_00.fields._8_8_ + 0x18) < 1) {
      return;
    }
    AVar32._Page_k__BackingField = 0;
    AVar32._PageSize_k__BackingField = 0;
    AVar19._Page_k__BackingField = 0;
    AVar19._PageSize_k__BackingField = 0;
    if ((*(ulong *)((long)now_00.fields._8_8_ + 0x18) & 0xffffffff) != 0) {
      do {
        AVar26 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  ((long)now_00.fields._8_8_ + 0x20 + (long)AVar19 * 8);
        if (AVar26 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
          AVar32 = AVar26;
          if (AVar26 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
          goto label_03419dcd;
          __this_02 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                       ((long)AVar26 + 0x40);
          AStack_1f0._Page_k__BackingField = 0x3419cd0;
          AStack_1f0._PageSize_k__BackingField = 0;
          __this_00 = AVar25;
          (**(code **)((long)AVar26 + 0x18))(__this_02,AVar25,*(undefined8 *)((long)AVar26 + 0x28));
        }
        AVar19 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((long)AVar19 + 1);
        AVar29 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                 (long)(int)*(uint *)((long)now_00.fields._8_8_ + 0x18);
        if ((long)AVar29 <= (long)AVar19) {
          return;
        }
        AVar20._PageSize_k__BackingField = 0;
        AVar20._Page_k__BackingField = *(uint *)((long)now_00.fields._8_8_ + 0x18);
      } while ((ulong)AVar19 < (ulong)AVar20);
    }
  }
  AStack_1f0._Page_k__BackingField = 0x3419dd7;
  AStack_1f0._PageSize_k__BackingField = 0;
  auVar47 = il2cpp_runtime_helper_022b2ca0();
  pcVar16 = auVar47._8_8_;
  uStack_220 = auVar47._0_8_;
  now_01.fields._8_8_ = AVar29;
  t1_00 = AVar43;
  AStack_218 = AVar19;
  AStack_210 = now.fields._8_8_;
  AStack_208 = AVar12;
  AStack_200 = now_00.fields._8_8_;
  AStack_1f8 = AVar25;
  AStack_1f0 = AVar32;
  if (g_data_057a8cef == '\0') {
    uStack_228 = 0x3419e0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    uStack_228 = 0x3419e1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cef = '\x01';
  }
  lVar9 = **(long **)((long)((Il2CppType *)((long)AVar43 + 0x20))->data + 0xc0);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    uStack_228 = 0x3419e3e;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  uStack_228 = 0x3419e46;
  pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar9);
  uStack_228 = 0x3419e60;
  System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object____ctor
            (pSVar15,*(MethodInfo_3161460 **)
                      (*(long *)((long)((Il2CppType *)((long)AVar43 + 0x20))->data + 0xc0) + 8));
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)__this_02 + 0x28) = pSVar15;
  uStack_228 = 0x3419e70;
  il2cpp_runtime_helper_022b4080((uint *)((long)__this_02 + 0x28));
  AVar35._Page_k__BackingField = 0;
  AVar35._PageSize_k__BackingField = 0;
  uStack_228 = 0x3419e7a;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_00 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    uStack_228 = 0x341a059;
    uVar21 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    uStack_228 = 0x341a061;
    __this_00 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)il2cpp_runtime_helper_023052d0(uVar21)
    ;
    uStack_228 = 0x341a070;
    pSVar22 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    uStack_228 = 0x341a07d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)__this_00,pSVar22,(MethodInfo *)0x0);
    uStack_228 = 0x341a088;
    AVar35 = AVar43;
    AVar41 = __this_00;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    AVar41._Page_k__BackingField = 0;
    AVar41._PageSize_k__BackingField = 0;
    if (__this_02 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
      *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)__this_02 + 0x10) =
           __this_00;
      uStack_228 = 0x3419ea3;
      il2cpp_runtime_helper_022b4080((char **)((long)__this_02 + 0x10),__this_00);
      if (pcVar16 == (char *)0x0) {
        lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar43 + 0x20))->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          uStack_228 = 0x3419ec9;
          lVar9 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          uStack_228 = 0x3419eda;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar43 + 0x20))->data + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          uStack_228 = 0x3419efa;
          lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
        }
        pcVar16 = *(char **)(*(long *)(lVar9 + 0xb8) + 8);
        if (pcVar16 == (char *)0x0) {
          lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar43 + 0x20))->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            uStack_228 = 0x3419f2b;
            lVar9 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            uStack_228 = 0x3419f3c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)AVar43 + 0x20))->data + 0xc0) + 0x28);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            uStack_228 = 0x3419f5c;
            il2cpp_runtime_helper_023009c0(lVar9);
          }
          uStack_228 = 0x3419f75;
          pcVar16 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          uStack_228 = 0x3419f94;
          System_Func_DateTimeOffset____ctor();
          lVar9 = *(long *)((long)((Il2CppType *)((long)AVar43 + 0x20))->data + 0xc0);
          lVar17 = *(long *)(lVar9 + 0x28);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            uStack_228 = 0x3419fb4;
            lVar17 = il2cpp_runtime_helper_023009c0(lVar17);
            lVar9 = *(long *)((long)((Il2CppType *)((long)AVar43 + 0x20))->data + 0xc0);
          }
          *(char **)(*(long *)(lVar17 + 0xb8) + 8) = pcVar16;
          lVar9 = *(long *)(lVar9 + 0x28);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            uStack_228 = 0x3419fdf;
            lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
          }
          uStack_228 = 0x3419ff2;
          il2cpp_runtime_helper_022b4080(*(long *)(lVar9 + 0xb8) + 8,pcVar16);
        }
      }
      *(char **)((long)__this_02 + 0x18) = pcVar16;
      uStack_228 = 0x341a002;
      il2cpp_runtime_helper_022b4080((char **)((long)__this_02 + 0x18),pcVar16);
      if (AVar29 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          uStack_228 = 0x341a01f;
          il2cpp_runtime_helper_02337ed0();
        }
        AVar29 = **(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields **)
                   (TypeInfo_AottgQueryPolicy + 0xb8);
      }
      *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)__this_02 + 0x20) = AVar29
      ;
      il2cpp_runtime_helper_022b4080((Il2CppType *)((long)__this_02 + 0x20),AVar29);
      return;
    }
  }
  uStack_228 = 0x341a08d;
  auVar47 = il2cpp_runtime_helper_022b2c90();
  uStack_228 = auVar47._0_8_;
  lVar9 = *(long *)((long)AVar41 + 0x28);
  if (lVar9 != 0) {
    lStack_230 = 0x3262308;
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___FindEntry
              (lVar9,(ulong)AVar35 & 0xff,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(auVar47._8_8_ + 0x20) + 0xc0) + 0x40) +
                                    0x20) + 0xc0) + 0x108));
    return;
  }
  lStack_230 = 0x341a0b8;
  il2cpp_runtime_helper_022b2c90();
  lStack_230 = 0;
  lVar9 = *(long *)(lVar9 + 0x28);
  if (lVar9 != 0) {
    now_01.fields._8_8_ =
         *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
          (*(long *)(*(long *)(extraout_RDX_04 + 0x20) + 0xc0) + 0x48);
    AVar35 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((ulong)AVar35 & 0xff);
    uStack_238 = 0x341a0ed;
    bVar8 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                      (lVar9,AVar35,&lStack_230);
    if ((char)bVar8 == '\0') {
      return;
    }
    if (lStack_230 != 0) {
      return;
    }
  }
  uStack_238 = 0x341a10c;
  uStack_238 = il2cpp_runtime_helper_022b2c90();
  pSVar40 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar9 + 0x28);
  if (pSVar40 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Clear
              (pSVar40,*(MethodInfo_3162290 **)
                        (*(long *)((long)((Il2CppType *)((long)AVar35 + 0x20))->data + 0xc0) + 0x60));
    return;
  }
  uStack_240 = 0x341a134;
  auVar47 = il2cpp_runtime_helper_022b2c90();
  uStack_240 = auVar47._0_8_;
  __this_01._Page_k__BackingField = (pSVar40->fields)._freeCount;
  __this_01._PageSize_k__BackingField = (pSVar40->fields)._version;
  if (__this_01 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Remove
              (__this_01,(ulong)AVar35 & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar47._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pSStack_248 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x341a168;
  il2cpp_runtime_helper_022b2c90();
  uVar31 = (ulong)now_01.fields._8_8_ & 0xffffffff;
  t2_00 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((ulong)AVar35 & 0xffffffff);
  AStack_278._Page_k__BackingField = 0;
  AStack_278._PageSize_k__BackingField = 0;
  lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0x70);
  now.fields._8_8_ = t1_00;
  AStack_270 = __this_00;
  pcStack_268 = pcVar16;
  AStack_260 = __this_02;
  AStack_258 = AVar29;
  AStack_250 = AVar43;
  pSStack_248 = pSVar15;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    AStack_280._Page_k__BackingField = 0x341a1ae;
    AStack_280._PageSize_k__BackingField = 0;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  AStack_280._Page_k__BackingField = 0x341a1b6;
  AStack_280._PageSize_k__BackingField = 0;
  AVar12 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)il2cpp_runtime_helper_023052d0(lVar9);
  AVar23 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
            (*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0x78);
  AStack_280._Page_k__BackingField = 0x341a1d0;
  AStack_280._PageSize_k__BackingField = 0;
  AVar25 = AVar12;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)AVar12,
             (MethodInfo_27BBA90 *)AVar23);
  AVar46 = onResult_02;
  if (AVar12 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar12 + 0x10) = __this_01;
    AStack_280._Page_k__BackingField = 0x341a1ec;
    AStack_280._PageSize_k__BackingField = 0;
    AVar23 = __this_01;
    il2cpp_runtime_helper_022b4080((char **)((long)AVar12 + 0x10));
    *(char *)((long)AVar12 + 0x18) = (char)t2_00._Page_k__BackingField;
    if (onResult_02 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
      return;
    }
    AVar25 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)__this_01 + 0x28);
    if (AVar25 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
      now_01.fields._8_8_ =
           *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
            (*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0x48);
      AVar23 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)((ulong)AVar35 & 0xff);
      AStack_280._Page_k__BackingField = 0x341a221;
      AStack_280._PageSize_k__BackingField = 0;
      bVar8 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                        (AVar25,AVar23,&AStack_278);
      if ((char)bVar8 == '\0') {
        lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0x58);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          AStack_280._Page_k__BackingField = 0x341a242;
          AStack_280._PageSize_k__BackingField = 0;
          lVar9 = il2cpp_runtime_helper_023009c0();
        }
        AStack_280._Page_k__BackingField = 0x341a24a;
        AStack_280._PageSize_k__BackingField = 0;
        t2_00 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)il2cpp_runtime_helper_023052d0(lVar9);
        AVar23 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  (*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0x88);
        AStack_280._Page_k__BackingField = 0x341a267;
        AStack_280._PageSize_k__BackingField = 0;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2_00,
                   (MethodInfo_31EFB10 *)AVar23);
        AVar25 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  ((long)__this_01 + 0x28);
        AStack_278 = t2_00;
        if (AVar25 == (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
        goto label_0341a453;
        AVar23._PageSize_k__BackingField = 0;
        AVar23._Page_k__BackingField = *(uint *)((long)AVar12 + 0x18);
        AStack_280._Page_k__BackingField = 0x341a295;
        AStack_280._PageSize_k__BackingField = 0;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (AVar25,AVar23,t2_00,
                   *(undefined8 *)(*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0x90))
        ;
      }
      now_01.fields._8_8_ =
           *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)__this_01 + 0x18);
      if (now_01.fields._8_8_ != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
        AVar23 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  ((long)now_01.fields._8_8_ + 0x28);
        AVar25 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  ((long)now_01.fields._8_8_ + 0x40);
        AStack_280._Page_k__BackingField = 0x341a2ad;
        AStack_280._PageSize_k__BackingField = 0;
        auVar47 = (**(code **)((long)now_01.fields._8_8_ + 0x18))();
        if ((char)uVar31 == '\0') {
          now_01.fields._8_8_ =
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
               (auVar47._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_331A460 **)
                   (*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0x98);
          AStack_280._Page_k__BackingField = 0x341a2d8;
          AStack_280._PageSize_k__BackingField = 0;
          now_01.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar47._0_8_;
          AVar23 = AStack_278;
          AVar25 = __this_01;
          now.fields._8_8_ = onResult_02;
          bVar8 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_01,
                             (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)AStack_278,
                             now_01,(System_Action_AottgQueryResult_TValue___o *)onResult_02,in_R9);
          if ((char)bVar8 != '\0') {
            return;
          }
        }
        if (AStack_278 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
          if (*(char *)((long)AStack_278 + 0x38) == '\0') {
            AStack_280._Page_k__BackingField = 0x341a327;
            AStack_280._PageSize_k__BackingField = 0;
            AVar23 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                     ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                               (*(MethodInfo_331B2F0 **)
                                 (*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 200));
          }
          else {
            AStack_280._Page_k__BackingField = 0x341a30e;
            AStack_280._PageSize_k__BackingField = 0;
            AVar23 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                     ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                               (*(Il2CppObject **)((long)AStack_278 + 0x18),
                                *(MethodInfo_331B450 **)
                                 (*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0xa8));
          }
          AVar25 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                    ((long)onResult_02 + 0x40);
          AStack_280._Page_k__BackingField = 0x341a339;
          AStack_280._PageSize_k__BackingField = 0;
          (**(code **)((long)onResult_02 + 0x18))(AVar25,AVar23,*(undefined8 *)((long)onResult_02 + 0x28));
          if ((AStack_278 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) &&
             (AVar25 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                        ((long)AStack_278 + 0x10),
             AVar25 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)) {
            now_01.fields._8_8_ =
                 *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                  (*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0xd8);
            *(int *)((long)AVar25 + 0x1c) = *(int *)((long)AVar25 + 0x1c) + 1;
            pcVar16 = *(char **)((long)AVar25 + 0x10);
            if (pcVar16 != (char *)0x0) {
              uVar2 = *(uint *)((long)AVar25 + 0x18);
              AVar23 = onResult_02;
              if (uVar2 < *(uint *)(pcVar16 + 0x18)) {
                now_01.fields._8_4_ = uVar2 + 1;
                now_01.fields._12_4_ = 0;
                *(uint *)((long)AVar25 + 0x18) = now_01.fields._8_4_;
                AVar25 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                         ((long)pcVar16 + (long)(int)uVar2 * 8 + 0x20);
                *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                 (pcVar16 + (long)(int)uVar2 * 8 + 0x20) = onResult_02;
                AStack_280._Page_k__BackingField = 0x341a39a;
                AStack_280._PageSize_k__BackingField = 0;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                AStack_280._Page_k__BackingField = 0x341a3bf;
                AStack_280._PageSize_k__BackingField = 0;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)AVar25,(Il2CppObject *)onResult_02,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)((long)now_01.fields._8_8_ + 0x20))->data + 0xc0)
                            + 0x70));
              }
              if (AStack_278 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
                if (*(char *)((long)AStack_278 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)((long)AStack_278 + 0x3a) = 1;
                pcVar16 = *(char **)((long)__this_01 + 0x10);
                uVar1 = *(undefined1 *)((long)AVar12 + 0x18);
                AVar46._1_7_ = onResult_02._1_7_;
                AVar46._Page_k__BackingField._0_1_ = uVar1;
                lVar9 = *(long *)(*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0xe8);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  AStack_280._Page_k__BackingField = 0x341a3fe;
                  AStack_280._PageSize_k__BackingField = 0;
                  lVar9 = il2cpp_runtime_helper_023009c0();
                }
                AStack_280._Page_k__BackingField = 0x341a406;
                AStack_280._PageSize_k__BackingField = 0;
                __this_01 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                            il2cpp_runtime_helper_023052d0(lVar9);
                now_01.fields._8_8_ =
                     *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                      (*(long *)((long)((Il2CppType *)((long)t1_00 + 0x20))->data + 0xc0) + 0xf0);
                AStack_280._Page_k__BackingField = 0x341a42d;
                AStack_280._PageSize_k__BackingField = 0;
                AVar23 = AVar12;
                AVar25 = __this_01;
                System_Action_object____ctor();
                t2_00._Page_k__BackingField = 0;
                t2_00._PageSize_k__BackingField = 0;
                if (pcVar16 != (char *)0x0) {
                  AStack_280._Page_k__BackingField = 0x341a444;
                  AStack_280._PageSize_k__BackingField = 0;
                  (**(code **)(pcVar16 + 0x18))
                            (*(undefined8 *)(pcVar16 + 0x40),uVar1,__this_01,*(undefined8 *)(pcVar16 + 0x28));
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
  AStack_280._Page_k__BackingField = 0x341a458;
  AStack_280._PageSize_k__BackingField = 0;
  il2cpp_runtime_helper_022b2c90();
  AVar37 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
           ((ulong)now_01.fields._8_8_ & 0xffffffff);
  AVar36 = AVar23;
  AVar26 = AVar25;
  pMStack_2b8 = (MethodInfo_3318C10 *)in_R9;
  AStack_2b0 = now.fields._8_8_;
  AStack_2a8 = AVar12;
  AStack_2a0 = AVar46;
  uStack_298 = uVar31;
  AStack_290 = t1_00;
  AStack_288 = __this_01;
  AStack_280 = t2_00;
  if (g_data_057a8cf0 == '\0') {
    AStack_2d8._Page_k__BackingField = 0x341a499;
    AStack_2d8._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    AStack_2d8._Page_k__BackingField = 0x341a4a5;
    AStack_2d8._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    AStack_2d8._Page_k__BackingField = 0x341a4b1;
    AStack_2d8._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    AVar26 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)&TypeInfo_TimeSpan;
    AStack_2d8._Page_k__BackingField = 0x341a4bd;
    AStack_2d8._PageSize_k__BackingField = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_2d0 = '\0';
  uStack_2cf = 0;
  uStack_2c8 = 0;
  if (AVar23 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
    if (*(char *)((long)AVar23 + 0x38) == '\0') {
label_0341a589:
      if (*(char *)((long)AVar23 + 0x39) == '\0') {
        return;
      }
      pvVar4 = ((Il2CppType *)((long)AVar25 + 0x20))->data;
      if (pvVar4 != (void *)0x0) {
        cStack_2d0 = *(char *)((long)pvVar4 + 0x18);
        uStack_2c8 = *(undefined8 *)((long)pvVar4 + 0x20);
        if (cStack_2d0 == '\0') {
          return;
        }
        t2_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar23 + 0x28);
        Var6 = *(unkuint10 *)((long)AVar23 + 0x28);
        t1_00._2_6_ = 0;
        t1_00._Page_k__BackingField._0_2_ = *(ushort *)&((Il2CppType *)((long)AVar23 + 0x30))->data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          AStack_2d8._Page_k__BackingField = 0x341a5d9;
          AStack_2d8._PageSize_k__BackingField = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        AStack_2d8._Page_k__BackingField = 0x341a5ed;
        AStack_2d8._PageSize_k__BackingField = 0;
        left_04.fields._8_8_ = AVar37;
        left_04.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_05;
        right_04.fields._10_6_ = 0;
        right_04.fields._0_10_ = Var6;
        now_01.fields._8_8_ = t1_00;
        AVar26 = extraout_RDX_05;
        t1_01 = System_DateTimeOffset__op_Subtraction(left_04,right_04,(MethodInfo *)0x0);
        pvVar4 = ((Il2CppType *)((long)AVar25 + 0x20))->data;
        AVar36 = AVar37;
        if (pvVar4 != (void *)0x0) {
          cStack_2d0 = *(char *)((long)pvVar4 + 0x18);
          uStack_2c8 = *(undefined8 *)((long)pvVar4 + 0x20);
          AStack_2d8._Page_k__BackingField = 0x341a61f;
          AStack_2d8._PageSize_k__BackingField = 0;
          __this_05.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_05.fields._0_8_ = &cStack_2d0;
          t1_00 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
                  System_Nullable_TimeSpan___get_Value(__this_05,method_02);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            AStack_2d8._Page_k__BackingField = 0x341a63a;
            AStack_2d8._PageSize_k__BackingField = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          t2_00._Page_k__BackingField = 0;
          t2_00._PageSize_k__BackingField = 0;
          AStack_2d8._Page_k__BackingField = 0x341a649;
          AStack_2d8._PageSize_k__BackingField = 0;
          bVar8 = System_TimeSpan__op_LessThan(t1_01,(System_TimeSpan_o)t1_00,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          AVar26 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)
                    ((long)AVar23 + 0x20);
          AVar36._Page_k__BackingField = 1;
          AVar36._PageSize_k__BackingField = 0;
          AStack_2d8._Page_k__BackingField = 0x341a672;
          AStack_2d8._PageSize_k__BackingField = 0;
          pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)AVar26,1,
                               (MethodInfo_331B520 *)
                               pMStack_2b8->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now_01.fields._8_4_ = 0;
          now_01.fields._12_4_ = 0;
          if (AStack_2b0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0) {
label_0341a67c:
            AStack_2d8._Page_k__BackingField = 0x341a68a;
            AStack_2d8._PageSize_k__BackingField = 0;
            (**(code **)((long)AStack_2b0 + 0x18))
                      (*(Il2CppClass **)((long)AStack_2b0 + 0x40),pAVar13,
                       *(undefined8 *)((long)AStack_2b0 + 0x28));
            return;
          }
        }
      }
    }
    else {
      t2_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar23 + 0x28);
      Var6 = *(unkuint10 *)((long)AVar23 + 0x28);
      now_01.fields._10_6_ = 0;
      now_01.fields._offsetMinutes = *(ushort *)&((Il2CppType *)((long)AVar23 + 0x30))->data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        AStack_2d8._Page_k__BackingField = 0x341a4ff;
        AStack_2d8._PageSize_k__BackingField = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      AStack_2d8._Page_k__BackingField = 0x341a513;
      AStack_2d8._PageSize_k__BackingField = 0;
      left_03.fields._8_8_ = AVar37;
      left_03.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_05;
      right_03.fields._10_6_ = 0;
      right_03.fields._0_10_ = Var6;
      AVar36 = AVar37;
      AVar26 = extraout_RDX_05;
      t1_00 = (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)
              System_DateTimeOffset__op_Subtraction(left_03,right_03,(MethodInfo *)0x0);
      pvVar4 = ((Il2CppType *)((long)AVar25 + 0x20))->data;
      if (pvVar4 != (void *)0x0) {
        t2_00 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)pvVar4 + 0x10);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          AStack_2d8._Page_k__BackingField = 0x341a540;
          AStack_2d8._PageSize_k__BackingField = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        AStack_2d8._Page_k__BackingField = 0x341a54d;
        AStack_2d8._PageSize_k__BackingField = 0;
        AVar36 = t2_00;
        AVar26 = t1_00;
        bVar8 = System_TimeSpan__op_LessThan
                          ((System_TimeSpan_o)t1_00,(System_TimeSpan_o)t2_00,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') goto label_0341a589;
        AVar26 = *(ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields *)((long)AVar23 + 0x18);
        AVar36._Page_k__BackingField = 1;
        AVar36._PageSize_k__BackingField = 0;
        AStack_2d8._Page_k__BackingField = 0x341a576;
        AStack_2d8._PageSize_k__BackingField = 0;
        pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)AVar26,1,
                             (MethodInfo_331B380 *)
                             pMStack_2b8->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (AStack_2b0 != (ApplicationManagers_Changelog_AottgChangelogService_ListKey_Fields)0x0)
        goto label_0341a67c;
        now_01.fields._8_4_ = 0;
        now_01.fields._12_4_ = 0;
      }
    }
  }
  AStack_2d8._Page_k__BackingField = 0x341a6a7;
  AStack_2d8._PageSize_k__BackingField = 0;
  il2cpp_runtime_helper_022b2c90();
  AStack_2f0 = AVar23;
  AStack_2e8 = t1_00;
  AStack_2e0 = extraout_RDX_05;
  AStack_2d8 = t2_00;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  lStack_300 = 0;
  if (*(long *)((long)AVar26 + 0x28) != 0) {
    bVar8 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                      (*(long *)((long)AVar26 + 0x28),(ulong)AVar36 & 0xff,&lStack_300);
    if ((char)bVar8 == '\0') {
      return;
    }
    if ((lStack_300 != 0) &&
       (((*(undefined1 *)(lStack_300 + 0x3a) = 0, pAVar14 = extraout_RDX_06,
         extraout_RDX_06 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pAVar14 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                              ((System_String_o *)"unknown_error",
                               *(MethodInfo_331AB10 **)
                                (*(long *)((long)((Il2CppType *)((long)now_01.fields._8_8_ + 0x20))->data +
                                          0xc0) + 0x118)),
         pAVar14 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) && (lStack_300 != 0)))) {
      if ((char)(pAVar14->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(lStack_300 + 0x38) == '\0') {
label_0341a96a:
          *(undefined2 *)(lStack_300 + 0x38) = 0x100;
          *(undefined8 *)(lStack_300 + 0x18) = 0;
          *(System_String_o **)(lStack_300 + 0x20) = (pAVar14->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          lVar9 = lStack_300;
          if ((*(char **)((long)AVar26 + 0x18) != (char *)0x0) &&
             (Var48 = (**(code **)(*(char **)((long)AVar26 + 0x18) + 0x18))(), lVar9 != 0)) {
            *(unkbyte10 *)(lVar9 + 0x28) = Var48;
            *(undefined4 *)(lVar9 + 0x32) = uStack_2f6;
            *(undefined2 *)(lVar9 + 0x36) = uStack_2f2;
            pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((pAVar14->fields)._Error_k__BackingField,0,
                                 *(MethodInfo_331B520 **)
                                  (*(long *)((long)((Il2CppType *)((long)now_01.fields._8_8_ + 0x20))->data +
                                            0xc0) + 0x108));
joined_r0x0341a9e7:
            if (lStack_300 != 0) goto label_0341a82a;
          }
        }
        else {
          pvVar4 = ((Il2CppType *)((long)AVar26 + 0x20))->data;
          if (pvVar4 == (void *)0x0) goto label_0341a9ed;
          if (*(char *)((long)pvVar4 + 0x28) == '\0') goto label_0341a96a;
          *(System_String_o **)(lStack_300 + 0x20) = (pAVar14->fields)._Error_k__BackingField;
          il2cpp_runtime_helper_022b4080();
          if ((lStack_300 == 0) ||
             (pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  (*(Il2CppObject **)(lStack_300 + 0x18),
                                   (pAVar14->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((Il2CppType *)((long)now_01.fields._8_8_ + 0x20))->data
                                              + 0xc0) + 0x140)), lStack_300 == 0)) goto label_0341a9ed;
label_0341a82a:
          if (((*(System_Collections_Generic_List_object__o **)(lStack_300 + 0x10) !=
                (System_Collections_Generic_List_object__o *)0x0) &&
              (pSVar24 = System_Collections_Generic_List_object___ToArray
                                   (*(System_Collections_Generic_List_object__o **)(lStack_300 + 0x10),
                                    *(MethodInfo_362E340 **)
                                     (*(long *)((long)((Il2CppType *)((long)now_01.fields._8_8_ + 0x20))->data
                                               + 0xc0) + 0x148)), lStack_300 != 0)) &&
             (lVar9 = *(long *)(lStack_300 + 0x10), lVar9 != 0)) {
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            iVar3 = *(int32_t *)(lVar9 + 0x18);
            *(undefined4 *)(lVar9 + 0x18) = 0;
            if (0 < iVar3) {
              System_Array__Clear(*(System_Array_o **)(lVar9 + 0x10),0,iVar3,(MethodInfo *)0x0);
            }
            if (pSVar24 != (System_Object_array *)0x0) {
              if ((int)pSVar24->max_length < 1) {
                return;
              }
              uVar31 = 0;
              if ((pSVar24->max_length & 0xffffffff) != 0) {
                do {
                  pIVar5 = pSVar24->m_Items[uVar31];
                  if (pIVar5 != (Il2CppObject *)0x0) {
                    if (pIVar5 == (Il2CppObject *)0x0) goto label_0341a9ed;
                    (*pIVar5[1].monitor)(pIVar5[4].klass,pAVar13,pIVar5[2].monitor);
                  }
                  uVar31 = uVar31 + 1;
                  uVar2 = (uint)pSVar24->max_length;
                  if ((long)(int)uVar2 <= (long)uVar31) {
                    return;
                  }
                } while (uVar31 < uVar2);
              }
              goto label_0341a9f2;
            }
          }
        }
      }
      else {
        *(undefined2 *)(lStack_300 + 0x38) = 1;
        *(Il2CppObject **)(lStack_300 + 0x18) = (pAVar14->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(lStack_300 + 0x18);
        if (lStack_300 != 0) {
          *(undefined8 *)(lStack_300 + 0x20) = 0;
          il2cpp_runtime_helper_022b4080(lStack_300 + 0x20,0);
          lVar9 = lStack_300;
          if ((*(char **)((long)AVar26 + 0x18) != (char *)0x0) &&
             (Var48 = (**(code **)(*(char **)((long)AVar26 + 0x18) + 0x18))(), lVar9 != 0)) {
            *(unkbyte10 *)(lVar9 + 0x28) = Var48;
            *(undefined2 *)(lVar9 + 0x36) = uStack_2f2;
            *(undefined4 *)(lVar9 + 0x32) = uStack_2f6;
            if (lStack_300 != 0) {
              pAVar13 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                  (*(Il2CppObject **)(lStack_300 + 0x18),0,
                                   *(MethodInfo_331B380 **)
                                    (*(long *)((long)((Il2CppType *)((long)now_01.fields._8_8_ + 0x20))->data
                                              + 0xc0) + 0x100));
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


// ApplicationManagers.Changelog.AottgChangelogService$$GetEntry
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetEntry (System_String_o* id, System_Action_AottgChangelogResult_ChangelogEntryResponse___o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x44cb020

void ApplicationManagers_Changelog_AottgChangelogService__GetEntry
               (System_String_o *id,System_Action_AottgChangelogResult_ChangelogEntryResponse___o *onResult,
               bool_conflict forceRefresh,MethodInfo *method)

{
  long lVar1;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this;
  bool_conflict bVar2;
  System_Action_AottgChangelogResult_T___o *__this_00;
  System_String_o *input;
  System_Action_AottgQueryResult_TValue___o *onResult_00;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar3;
  System_Action_AottgChangelogResult_T___o *onResult_01;
  System_Guid_Fields local_48;
  
  if (g_data_057aeaf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_ChangelogEntryResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChangelogResult_1_ChangelogEntryResponse_FailedNoCa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Ready_ChangelogEntryResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetEntry_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    il2cpp_runtime_helper_023445d0(&"bad_id");
    g_data_057aeaf9 = '\x01';
  }
  local_48._a = 0;
  local_48._b = 0;
  local_48._c = 0;
  local_48._d = '\0';
  local_48._e = '\0';
  local_48._f = '\0';
  local_48._g = '\0';
  local_48._h = '\0';
  local_48._i = '\0';
  local_48._j = '\0';
  local_48._k = '\0';
  __this_00 = (System_Action_AottgChangelogResult_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  onResult_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Action_AottgChangelogResult_T___o *)0x0) {
    (__this_00->fields).method_ptr = (intptr_t)onResult;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,onResult);
    onResult_01 = (System_Action_AottgChangelogResult_T___o *)(__this_00->fields).method_ptr;
    if (*(int *)((long)&TypeInfo_AottgChangelogService[1].fields.original_method_info + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_(onResult_01,MethodInfo_Boolean_Ready_ChangelogEntryResponse);
    if ((char)bVar2 == '\0') {
      return;
    }
    if ((id != (System_String_o *)0x0) ||
       (id = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), id != (System_String_o *)0x0)) {
      input = System_String__Trim(id,(MethodInfo *)0x0);
      bVar2 = System_Guid__TryParse(input,(System_Guid_o *)&local_48,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        lVar1 = (__this_00->fields).method_ptr;
        if (lVar1 == 0) {
          return;
        }
        pAVar3 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                           ("bad_id",MethodInfo_AottgChangelogResult_1_ChangelogEntryResponse_FailedNoCa);
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),pAVar3,*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      if (*(int *)((long)&TypeInfo_AottgChangelogService[1].fields.original_method_info + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar1 = *(long *)(TypeInfo_AottgChangelogService[1].fields.extra_arg + 8);
      onResult_01 = TypeInfo_AottgChangelogService;
      if (lVar1 != 0) {
        __this = *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar1 + 0x38);
        onResult_00 = (System_Action_AottgQueryResult_TValue___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_ChangelogEntryResponse);
        onResult_01 = (System_Action_AottgChangelogResult_T___o *)onResult_00;
        System_Action_object____ctor();
        if (__this != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
          ApplicationManagers_Api_AottgQueryCache_object__object___Get
                    (__this,(Il2CppObject *)input,onResult_00,forceRefresh & 0xff,MethodInfo_Void_Get);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)onResult_01,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$ClearSessionCache
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__ClearSessionCache (const MethodInfo* method);
// 0x44cb240

void ApplicationManagers_Changelog_AottgChangelogService__ClearSessionCache(MethodInfo *method)

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
  MethodInfo_331B450 *pMVar15;
  MethodInfo_331B380 *pMVar16;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *pAVar17;
  MethodInfo_315DA50 *method_03;
  MethodInfo_3161460 *method_04;
  MethodInfo_331B2F0 *pMVar18;
  MethodInfo_362C220 *pMVar19;
  il2cpp_array_size_t iVar20;
  MethodInfo_331AB10 *method_05;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo_362E340 *method_06;
  System_Array_o *array;
  MethodInfo_331B660 *pMVar21;
  MethodInfo_331B520 *pMVar22;
  UnityEngine_Object_o *x;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar23;
  undefined1 auVar24 [12];
  unkuint10 Var25;
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this_00;
  int iVar26;
  char cVar27;
  bool_conflict bVar28;
  long lVar29;
  Il2CppRGCTXData IVar30;
  Il2CppRGCTXData IVar31;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar32;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar33;
  Il2CppType *pIVar34;
  char *pcVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  Il2CppRGCTXData IVar40;
  void *pvVar41;
  undefined1 *puVar42;
  long lVar43;
  unkuint10 *pVar44;
  System_TimeSpan_Fields t1;
  void *pvVar45;
  Il2CppRGCTXData *pIVar46;
  Il2CppRGCTXData *pIVar47;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar48;
  Il2CppRGCTXData IVar49;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar50;
  System_String_o *pSVar51;
  Il2CppRGCTXData t1_00;
  System_TimeSpan_o t1_01;
  System_Object_array *pSVar52;
  int iVar53;
  ulong uVar54;
  Il2CppRGCTXData IVar55;
  Il2CppRuntimeInterfaceOffsetPair *pIVar56;
  MethodInfo *pMVar57;
  Il2CppRGCTXData in_RCX;
  MethodInfo_33194F0 **ppMVar58;
  long extraout_RDX;
  Il2CppRGCTXData onResult;
  Il2CppRGCTXData extraout_RDX_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  ulong uVar59;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  Il2CppRGCTXData *extraout_RDX_07;
  Il2CppRGCTXData extraout_RDX_08;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_09;
  Il2CppRGCTXData extraout_RDX_10;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_11;
  Il2CppRGCTXData extraout_RDX_12;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 *puVar60;
  undefined8 *puVar61;
  MethodInfo_3316900 *pMVar62;
  undefined8 *puVar63;
  InvokerMethod pIVar64;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *pAVar65;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long *plVar66;
  Il2CppMethodPointer pIVar67;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar68;
  Il2CppRGCTXData IVar69;
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
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_02;
  System_DateTimeOffset_o left_01;
  System_DateTimeOffset_o left_02;
  System_Nullable_TimeSpan__o __this_03;
  System_DateTimeOffset_o left_03;
  System_DateTimeOffset_o left_04;
  System_Nullable_TimeSpan__o __this_04;
  System_DateTimeOffset_o left_05;
  System_DateTimeOffset_o left_06;
  System_Nullable_TimeSpan__o __this_05;
  System_DateTimeOffset_o left_07;
  System_DateTimeOffset_o left_08;
  System_Nullable_TimeSpan__o __this_06;
  Cysharp_Threading_Tasks_UniTask_o task;
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
  unkbyte10 Var77;
  uint32_t auStackY_710 [4];
  int32_t aiStackY_700 [2];
  undefined4 uStackY_6f6;
  uint16_t auStackY_6f2 [5];
  uint16_t auStackY_6e8 [4];
  uint8_t auStackY_6e0 [8];
  Il2CppMethodPointer pIStackY_6d8;
  MethodInfo *pMStackY_6d0;
  Il2CppMethodPointer apIStackY_6c8 [3];
  MethodInfo *pMStackY_6b0;
  Il2CppMethodPointer pIStackY_6a8;
  MethodInfo *pMStackY_6a0;
  void *apvStackY_698 [2];
  char *apcStackY_688 [2];
  Il2CppType IStackY_678;
  void *pvStackY_668;
  uint auStackY_660 [2];
  Il2CppClass *apIStackY_658 [4];
  void *apvStackY_638 [3];
  Il2CppClass *pIStackY_620;
  void *apvStackY_618 [4];
  Il2CppClass **appIStackY_5f8 [3];
  void *pvStackY_5e0;
  undefined4 uStackY_5d6;
  undefined2 uStackY_5d2;
  Il2CppClass **ppIStackY_5d0;
  void *pvStackY_5c8;
  uint32_t auStackY_5c0 [4];
  size_t sStackY_5b0;
  void *apvStackY_5a8 [2];
  uint32_t auStackY_598 [8];
  uint16_t auStackY_578 [4];
  uint16_t auStackY_570 [4];
  uint8_t auStackY_568 [8];
  Il2CppMethodPointer pIStackY_560;
  MethodInfo *pMStackY_558;
  Il2CppMethodPointer pIStackY_550;
  MethodInfo *pMStackY_548;
  Il2CppMethodPointer pIStackY_540;
  MethodInfo *pMStackY_538;
  Il2CppMethodPointer pIStackY_530;
  MethodInfo *pMStackY_528;
  void *apvStackY_520 [2];
  char *apcStackY_510 [2];
  void *pvStackY_500;
  uint auStackY_4f8 [2];
  void *pvStackY_4f0;
  uint auStackY_4e8 [2];
  Il2CppClass *apIStackY_4e0 [4];
  void *pvStackY_4c0;
  undefined4 uStackY_4b6;
  undefined2 uStackY_4b2;
  void *pvStackY_4b0;
  Il2CppClass *pIStackY_4a8;
  void *apvStackY_4a0 [5];
  Il2CppClass **ppIStackY_478;
  Il2CppRuntimeInterfaceOffsetPair *pIStackY_470;
  void *pvStackY_468;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *pAStackY_460;
  Il2CppClass **ppIStackY_458;
  void *pvStackY_450;
  uint32_t auStackY_448 [4];
  size_t sStackY_438;
  void *pvStackY_430;
  uint32_t auStackY_428 [10];
  uint16_t auStackY_400 [4];
  uint16_t auStackY_3f8 [4];
  uint8_t auStackY_3f0 [8];
  Il2CppMethodPointer pIStackY_3e8;
  MethodInfo *pMStackY_3e0;
  Il2CppMethodPointer pIStackY_3d8;
  MethodInfo *pMStackY_3d0;
  Il2CppMethodPointer pIStackY_3c8;
  MethodInfo *pMStackY_3c0;
  Il2CppMethodPointer pIStackY_3b8;
  MethodInfo *pMStackY_3b0;
  Il2CppRGCTXData IStackY_3a8;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *pAStackY_3a0;
  Il2CppType *pIStackY_398;
  Il2CppType **ppIStackY_390;
  Il2CppRGCTXData *pIStackY_388;
  _union_148677 _StackY_380;
  uint32_t auStackY_378 [2];
  uint16_t auStackY_370 [8];
  Il2CppMethodPointer pIStackY_360;
  InvokerMethod pIStackY_358;
  undefined1 uStackY_349;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *pAStackY_348;
  Il2CppType *pIStackY_340;
  Il2CppType **ppIStackY_338;
  Il2CppRGCTXData *pIStackY_330;
  _union_148677 _StackY_328;
  uint32_t auStackY_320 [2];
  uint16_t auStackY_318 [4];
  undefined1 auStackY_310 [80];
  uint uStackY_2c0;
  undefined1 uStackY_2b9;
  Il2CppRGCTXData aIStackY_2b8 [5];
  undefined8 uStackY_290;
  undefined8 uStackY_288;
  Il2CppRGCTXData aIStackY_280 [2];
  long alStackY_270 [2];
  Il2CppRGCTXData IStackY_260;
  char acStackY_254 [4];
  Il2CppRGCTXData aIStackY_250 [3];
  long lStackY_238;
  Il2CppRGCTXData aIStackY_230 [3];
  long lStackY_218;
  Il2CppRGCTXData aIStackY_210 [2];
  long alStackY_200 [3];
  Il2CppRGCTXData IStackY_1e8;
  undefined1 uStackY_1d9;
  long alStackY_1d8 [5];
  long alStackY_1b0 [3];
  Il2CppRGCTXData IStackY_198;
  undefined8 uStackY_190;
  char acStackY_181 [9];
  il2cpp_array_size_t aiStackY_178 [3];
  undefined8 *apuStackY_160 [2];
  Il2CppRGCTXData IStackY_150;
  undefined1 uStackY_141;
  Il2CppRGCTXData IStackY_140;
  Il2CppRGCTXData IStackY_138;
  Il2CppRGCTXData IStackY_130;
  Il2CppType *pIStackY_128;
  undefined8 uStackY_120;
  Il2CppRGCTXData IStackY_118;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAStackY_110;
  Il2CppRGCTXData IStackY_108;
  Il2CppRGCTXData IStackY_100;
  Il2CppRGCTXData IStackY_f8;
  Il2CppRGCTXData IStackY_f0;
  Il2CppRGCTXData IStackY_e0;
  undefined4 uStackY_d6;
  undefined2 uStackY_d2;
  Il2CppRGCTXData IStackY_d0;
  Il2CppRGCTXData IStackY_c8;
  Il2CppRGCTXData IStackY_c0;
  Il2CppRGCTXData IStackY_b8;
  char cStackY_b0;
  undefined7 uStackY_af;
  undefined8 uStackY_a8;
  MethodInfo_3316900 *pMStackY_98;
  Il2CppRGCTXData IStackY_90;
  Il2CppRGCTXData IStackY_88;
  Il2CppRGCTXData IStackY_80;
  char **ppcStackY_78;
  Il2CppRGCTXData IStackY_68;
  undefined4 uVar78;
  undefined4 uVar79;
  Il2CppRGCTXData IVar80;
  Il2CppObject *pIVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  Il2CppClass *pIVar84;
  Il2CppType **ppIVar85;
  MethodInfo_37EC980 *method_07;
  MethodInfo_37EC980 *method_08;
  MethodInfo_37EC980 *method_09;
  MethodInfo_37EC980 *method_10;
  MethodInfo_37EC980 *method_11;
  
  now.fields._8_8_ = (MethodInfo_33188C0 **)in_RCX;
  if (g_data_057aeafa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aeafa = '\x01';
    now.fields._8_8_ = (MethodInfo_33188C0 **)in_RCX;
  }
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AottgChangelogService + 0xb8) + 8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar28 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar28 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar29 = *(long *)(*(long *)(TypeInfo_AottgChangelogService + 0xb8) + 8);
  if (lVar29 == 0) {
label_044cb3fe:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeafd == '\0') {
      IStackY_68 = (Il2CppRGCTXData)0x44cb42f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgChangelogService_FetchLatestVersionAsync);
      g_data_057aeafd = '\x01';
    }
    pIVar84 = (Il2CppClass *)0x0;
    pIVar34 = (Il2CppType *)0x0;
    pIVar81 = (Il2CppObject *)0x0;
    uVar79 = 0;
    pIVar67 = (Il2CppMethodPointer)0x0;
    ppIVar85 = (Il2CppType **)0x0;
    IStackY_68 = (Il2CppRGCTXData)0x44cb45f;
    il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffa8,0);
    uVar82 = (undefined4)extraout_RDX_14;
    uVar83 = (undefined4)((ulong)extraout_RDX_14 >> 0x20);
    IStackY_68 = (Il2CppRGCTXData)0x44cb471;
    il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb8,extraout_RDX_14);
    uVar78 = 0xffffffff;
    if (*(long *)(MethodInfo_Void_Start_AottgChangelogService_FetchLatestVersionAsync + 0x38) == 0) {
      IStackY_68 = (Il2CppRGCTXData)0x44cb48e;
      il2cpp_runtime_helper_02300a20();
    }
    IStackY_68 = (Il2CppRGCTXData)0x44cb496;
    __this_00.fields._4_4_ = uVar79;
    __this_00.fields.__1__state = uVar78;
    __this_00.fields.__t__builder.fields.runnerPromise =
         (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar67;
    __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar81;
    __this_00.fields.onComplete._0_4_ = uVar82;
    __this_00.fields.onComplete._4_4_ = uVar83;
    __this_00.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar84
    ;
    __this_00.fields.__u__1.fields.task.fields.result = (Il2CppObject *)pIVar34;
    __this_00.fields.__u__1.fields.task.fields._16_8_ = ppIVar85;
    ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
              (__this_00,(MethodInfo *)&stack0xffffffffffffffa0);
    IStackY_68 = (Il2CppRGCTXData)0x44cb4a0;
    auVar24 = il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffa8,0);
    IStackY_68 = (Il2CppRGCTXData)0x44cb4ac;
    task.fields._12_4_ = 0;
    task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar24._0_8_;
    task.fields.token = auVar24._8_2_;
    task.fields._10_2_ = auVar24._10_2_;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
    return;
  }
  pAVar23 = *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar29 + 0x20);
  if (pAVar23 != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
    ppMVar58 = &MethodInfo_Void_Clear;
    ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___Clear
              (pAVar23,MethodInfo_Void_Clear);
    now.fields._8_8_ = (MethodInfo_33188C0 **)ppMVar58;
  }
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar29 = *(long *)(*(long *)(TypeInfo_AottgChangelogService + 0xb8) + 8);
  if (lVar29 == 0) goto label_044cb3fe;
  pAVar23 = *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar29 + 0x28);
  if (pAVar23 != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
    ppMVar58 = &MethodInfo_Void_Clear;
    ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___Clear
              (pAVar23,MethodInfo_Void_Clear);
    now.fields._8_8_ = (MethodInfo_33188C0 **)ppMVar58;
  }
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar29 = *(long *)(*(long *)(TypeInfo_AottgChangelogService + 0xb8) + 8);
  if (lVar29 == 0) goto label_044cb3fe;
  pAVar23 = *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar29 + 0x30);
  if (pAVar23 != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
    now.fields._8_8_ = &MethodInfo_Void_Clear;
    ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object___Clear
              (pAVar23,MethodInfo_Void_Clear);
  }
  if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar29 = *(long *)(*(long *)(TypeInfo_AottgChangelogService + 0xb8) + 8);
  if (lVar29 == 0) goto label_044cb3fe;
  lVar29 = *(long *)(lVar29 + 0x38);
  if (lVar29 == 0) {
    return;
  }
  __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar29 + 0x28);
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (__this_01,(MethodInfo_3104FC0 *)(MethodInfo_Void_Clear.method)->klass->rgctx_data[0xc].method);
    return;
  }
  now_00.fields._8_8_ = MethodInfo_Void_Clear;
  il2cpp_runtime_helper_022b2c90();
  IVar40 = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(__this_01->fields)._freeCount;
  if (IVar40.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              ((System_Collections_Generic_Dictionary_object__object__o *)IVar40.method,
               (Il2CppObject *)now_00.fields._8_8_,
               *(MethodInfo_3106630 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0x68));
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar27 = (char)now.fields._8_8_;
  IVar80.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(in_R8.method)->klass)->fields + 0xc0) + 0x70);
  IVar55 = in_R8;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = il2cpp_runtime_helper_023009c0();
  }
  IVar30.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar29);
  IVar31 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(in_R8.method)->klass)->fields + 0xc0) + 0x78))->method;
  IVar69.rgctxDataDummy = IVar30.rgctxDataDummy;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_object__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)IVar30.method,
             (MethodInfo_27BB8C0 *)IVar31.method);
  now_01.fields._8_8_ = onResult;
  if (IVar30.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    (IVar30.method)->invoker_method = (InvokerMethod)IVar40;
    il2cpp_runtime_helper_022b4080(&(IVar30.method)->invoker_method,IVar40.rgctxDataDummy);
    unaff_R13 = &(IVar30.method)->name;
    (IVar30.method)->name = (char *)now_00.fields._8_8_;
    IVar31 = now_00.fields._8_8_;
    il2cpp_runtime_helper_022b4080(unaff_R13);
    if (onResult.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar69 = (Il2CppRGCTXData)(IVar40.method)->return_type;
    if (IVar69.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      IVar31.method = (MethodInfo *)*unaff_R13;
      now.fields._8_8_ =
           (MethodInfo_33188C0 **)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(in_R8.method)->klass)->fields + 0xc0) + 0x48))->method;
      bVar28 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                         ((System_Collections_Generic_Dictionary_object__object__o *)IVar69.method,
                          (Il2CppObject *)IVar31.method,(Il2CppObject **)&stack0xffffffffffffffb0,
                          (MethodInfo_3106990 *)now.fields._8_8_);
      if ((char)bVar28 == '\0') {
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(in_R8.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          lVar29 = il2cpp_runtime_helper_023009c0();
        }
        now_00.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar29);
        IVar31 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(in_R8.method)->klass)->fields + 0xc0) + 0x88))->method;
        ApplicationManagers_Api_AottgQueryCache_Entry_object__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)now_00.fields._8_8_,
                   (MethodInfo_31EF570 *)IVar31.method);
        IVar69 = (Il2CppRGCTXData)(IVar40.method)->return_type;
        if (IVar69.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_034168f2;
        IVar31.method = (MethodInfo *)*unaff_R13;
        IVar80.rgctxDataDummy = now_00.fields._8_8_;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)IVar69.method,
                   (Il2CppObject *)IVar31.method,(Il2CppObject *)now_00.fields._8_8_,
                   *(MethodInfo_3104DF0 **)
                    (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(in_R8.method)->klass)->fields + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (MethodInfo_33188C0 **)(IVar40.method)->name;
      if ((Il2CppRGCTXData *)now.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar31 = (Il2CppRGCTXData)((MethodInfo *)now.fields._8_8_)->return_type;
        IVar69 = (Il2CppRGCTXData)(((MethodInfo *)now.fields._8_8_)->field8_0x40).genericMethod;
        auVar75 = (*(code *)((MethodInfo *)now.fields._8_8_)->name)();
        IVar49 = IVar80;
        if (cVar27 == '\0') {
          now.fields._8_8_ = (MethodInfo_33188C0 **)(auVar75._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo_3316900 **)
                   (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                        &(in_R8.method)->klass)->fields + 0xc0) + 0x98);
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar75._0_8_;
          IVar69 = IVar40;
          IVar55 = onResult;
          bVar28 = ApplicationManagers_Api_AottgQueryCache_object__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)IVar40.method,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar80.method,
                              now,(System_Action_AottgQueryResult_TValue___o *)onResult.method,in_R9);
          IVar31 = IVar80;
          if ((char)bVar28 != '\0') {
            return;
          }
        }
        if (IVar49.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          if (*(char *)&(IVar49.method)->field7_0x38 == '\0') {
            IVar31.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                           (*(MethodInfo_331B2F0 **)
                             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                    *)&(in_R8.method)->klass)->fields + 0xc0) + 200));
          }
          else {
            IVar31.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                           ((Il2CppObject *)(IVar49.method)->name,
                            *(MethodInfo_331B450 **)
                             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                    *)&(in_R8.method)->klass)->fields + 0xc0) + 0xa8));
          }
          IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(onResult.klass)->_1)[8].method;
          (*(code *)(onResult.method)->name)
                    (IVar69.rgctxDataDummy,IVar31.rgctxDataDummy,(onResult.method)->return_type);
          if ((IVar49.rgctxDataDummy != (Il2CppRGCTXData *)0x0) &&
             (IVar69 = (Il2CppRGCTXData)(IVar49.method)->invoker_method,
             IVar69.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now.fields._8_8_ =
                 (MethodInfo_33188C0 **)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(in_R8.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar69.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = (Il2CppArrayBounds *)(IVar69.method)->invoker_method;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar69.method)->name;
              IVar31 = onResult;
              if (uVar4 < (uint)pIVar6[1].lower_bound) {
                now.fields._8_4_ = uVar4 + 1;
                now.fields._12_4_ = 0;
                *(uint *)&(IVar69.method)->name = now.fields._8_4_;
                IVar69.rgctxDataDummy = &pIVar6[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar6[2].length + (int)uVar4))->klass = (Il2CppClass *)onResult;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar69.method,
                           (Il2CppObject *)onResult.method,
                           *(MethodInfo_362C220 **)
                            (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&((MethodInfo *)now.fields._8_8_)->klass)->fields + 0xc0)
                            + 0x70));
              }
              if (IVar49.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
                if (*(char *)((long)&(IVar49.method)->field7_0x38 + 2) != '\0') {
                  return;
                }
                *(undefined1 *)((long)&(IVar49.method)->field7_0x38 + 2) = 1;
                pIVar6 = (Il2CppArrayBounds *)(IVar40.method)->invoker_method;
                IVar40.method = (MethodInfo *)*unaff_R13;
                lVar29 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(in_R8.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
                  lVar29 = il2cpp_runtime_helper_023009c0();
                }
                now_01.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar29);
                now.fields._8_8_ =
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(in_R8.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                IVar31.rgctxDataDummy = IVar30.rgctxDataDummy;
                IVar69.rgctxDataDummy = now_01.fields._8_8_;
                System_Action_object____ctor();
                now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
                if (pIVar6 != (Il2CppArrayBounds *)0x0) {
                  (**(code **)&pIVar6[1].lower_bound)
                            (pIVar6[4].length,IVar40.rgctxDataDummy,now_01.fields._8_8_,
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
  il2cpp_runtime_helper_022b2c90();
  IVar49.rgctxDataDummy = (void *)((ulong)now.fields._8_8_ & 0xffffffff);
  IVar80 = IVar31;
  plVar66 = (long *)IVar69;
  pMStackY_98 = in_R9;
  IStackY_90 = IVar55;
  IStackY_88.rgctxDataDummy = IVar30.rgctxDataDummy;
  IStackY_80 = now_01.fields._8_8_;
  ppcStackY_78 = unaff_R13;
  IStackY_68 = IVar40;
  if (g_data_057a8ce4 == '\0') {
    IStackY_b8 = (Il2CppRGCTXData)0x3416939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    IStackY_b8 = (Il2CppRGCTXData)0x3416945;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    IStackY_b8 = (Il2CppRGCTXData)0x3416951;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar66 = &TypeInfo_TimeSpan;
    IStackY_b8 = (Il2CppRGCTXData)0x341695d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ce4 = '\x01';
  }
  cStackY_b0 = '\0';
  uStackY_af = 0;
  uStackY_a8 = 0;
  IVar40.rgctxDataDummy = IVar49.rgctxDataDummy;
  if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar31.method)->field7_0x38 == '\0') {
label_03416a29:
      if (*(char *)((long)&(IVar31.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar69.method)->klass)->fields;
      if (lVar29 != 0) {
        cStackY_b0 = *(char *)(lVar29 + 0x18);
        uStackY_a8 = *(undefined8 *)(lVar29 + 0x20);
        if (cStackY_b0 == '\0') {
          return;
        }
        now_00.fields._8_8_ = (Il2CppRGCTXData)(IVar31.method)->return_type;
        Var25 = *(unkuint10 *)&(IVar31.method)->return_type;
        in_R8._2_6_ = 0;
        in_R8._0_2_ = *(ushort *)&(IVar31.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          IStackY_b8 = (Il2CppRGCTXData)0x3416a79;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        IStackY_b8 = (Il2CppRGCTXData)0x3416a8d;
        left_00.fields._8_8_ = IVar49.rgctxDataDummy;
        left_00.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_00.rgctxDataDummy;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var25;
        now.fields._8_8_ = (MethodInfo_33188C0 **)in_R8;
        plVar66 = (long *)extraout_RDX_00;
        IVar40 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar69.method)->klass)->fields;
        IVar80 = IVar49;
        if (lVar29 != 0) {
          cStackY_b0 = *(char *)(lVar29 + 0x18);
          uStackY_a8 = *(undefined8 *)(lVar29 + 0x20);
          IStackY_b8 = (Il2CppRGCTXData)0x3416abf;
          __this_02.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_02.fields._0_8_ = &cStackY_b0;
          in_R8 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_02,method_07);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            IStackY_b8 = (Il2CppRGCTXData)0x3416ada;
            il2cpp_runtime_helper_02337ed0();
          }
          now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          IStackY_b8 = (Il2CppRGCTXData)0x3416ae9;
          bVar28 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)IVar40,(System_TimeSpan_o)in_R8,(MethodInfo *)0x0);
          if ((char)bVar28 == '\0') {
            return;
          }
          plVar66 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar31.method)->klass)->fields;
          IVar80 = (Il2CppRGCTXData)0x1;
          IStackY_b8 = (Il2CppRGCTXData)0x3416b12;
          pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar66,1,
                               (MethodInfo_331B520 *)
                               pMStackY_98->klass->rgctx_data->
                               _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
          now.fields._8_8_ = (MethodInfo_33188C0 **)0x0;
          if (IStackY_90.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
label_03416b1c:
            IStackY_b8 = (Il2CppRGCTXData)0x3416b2a;
            (*(code *)(IStackY_90.method)->name)
                      (((Il2CppRGCTXData *)&(IStackY_90.klass)->_1)[8].rgctxDataDummy,pAVar32,
                       (IStackY_90.method)->return_type);
            return;
          }
        }
      }
    }
    else {
      now_00.fields._8_8_ = (Il2CppRGCTXData)(IVar31.method)->return_type;
      Var25 = *(unkuint10 *)&(IVar31.method)->return_type;
      now.fields._10_6_ = 0;
      now.fields._offsetMinutes = *(ushort *)&(IVar31.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        IStackY_b8 = (Il2CppRGCTXData)0x341699f;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      IStackY_b8 = (Il2CppRGCTXData)0x34169b3;
      left.fields._8_8_ = IVar49.rgctxDataDummy;
      left.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_00.rgctxDataDummy;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var25;
      IVar80.rgctxDataDummy = IVar49.rgctxDataDummy;
      plVar66 = (long *)extraout_RDX_00;
      in_R8 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar69.method)->klass)->fields;
      if (lVar29 != 0) {
        now_00.fields._8_8_ = (Il2CppRGCTXData)*(Il2CppRGCTXData *)(lVar29 + 0x10);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          IStackY_b8 = (Il2CppRGCTXData)0x34169e0;
          il2cpp_runtime_helper_02337ed0();
        }
        IStackY_b8 = (Il2CppRGCTXData)0x34169ed;
        IVar80 = now_00.fields._8_8_;
        plVar66 = (long *)in_R8;
        bVar28 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)in_R8,(System_TimeSpan_o)now_00.fields._8_8_,(MethodInfo *)0x0)
        ;
        if ((char)bVar28 == '\0') goto label_03416a29;
        plVar66 = (long *)(IVar31.method)->name;
        IVar80 = (Il2CppRGCTXData)0x1;
        IStackY_b8 = (Il2CppRGCTXData)0x3416a16;
        pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar66,1,
                             (MethodInfo_331B380 *)
                             pMStackY_98->klass->rgctx_data->
                             _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
        if (IStackY_90.rgctxDataDummy != (Il2CppRGCTXData *)0x0) goto label_03416b1c;
        now.fields._8_8_ = (MethodInfo_33188C0 **)0x0;
      }
    }
  }
  IStackY_b8 = (Il2CppRGCTXData)0x3416b47;
  il2cpp_runtime_helper_022b2c90();
  now_01.fields._8_8_ = (Il2CppRGCTXData)now.fields._8_8_;
  IVar30 = IVar80;
  IStackY_d0 = IVar31;
  IStackY_c8 = IVar69;
  IStackY_c0 = in_R8;
  IStackY_b8 = extraout_RDX_00;
  if (g_data_057a8ce5 == '\0') {
    IStackY_f0 = (Il2CppRGCTXData)0x3416b7c;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ce5 = '\x01';
  }
  IStackY_e0.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  IVar31 = (Il2CppRGCTXData)((MethodInfo *)plVar66)->return_type;
  pAVar33 = extraout_RDX_01;
  if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
label_03416ea6:
    IStackY_f0 = (Il2CppRGCTXData)0x3416eab;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    now_01.fields._8_8_ =
         (Il2CppRGCTXData)
         ((Il2CppRGCTXData *)
         (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                              &((MethodInfo *)now.fields._8_8_)->klass)->fields + 0xc0) + 0x48))->method;
    IStackY_f0 = (Il2CppRGCTXData)0x3416bb5;
    IVar30 = IVar80;
    bVar28 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_object__object__o *)IVar31.method,
                        (Il2CppObject *)IVar80.method,(Il2CppObject **)&IStackY_e0.method,
                        (MethodInfo_3106990 *)now_01.fields._8_8_);
    if ((char)bVar28 == '\0') {
      return;
    }
    if (IStackY_e0.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    *(undefined1 *)((long)&(IStackY_e0.method)->field7_0x38 + 2) = 0;
    if (extraout_RDX_01 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      IVar30 = (Il2CppRGCTXData)
               ((Il2CppRGCTXData *)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &((MethodInfo *)now.fields._8_8_)->klass)->fields + 0xc0) + 0x118))->
               method;
      IStackY_f0 = (Il2CppRGCTXData)0x3416bf5;
      IVar31 = "unknown_error";
      pAVar33 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error".method,(MethodInfo_331AB10 *)IVar30.method);
      if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_03416ea6;
    }
    IVar31 = IStackY_e0;
    if (IStackY_e0.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    if ((char)(pAVar33->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)&(IStackY_e0.method)->field7_0x38 = 1;
      IVar30 = (Il2CppRGCTXData)(pAVar33->fields)._Value_k__BackingField;
      (IStackY_e0.method)->name = (char *)IVar30;
      IStackY_f0 = (Il2CppRGCTXData)0x3416c33;
      il2cpp_runtime_helper_022b4080(&(IStackY_e0.method)->name);
      IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      if (IStackY_e0.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
        *(int32_t *)&(IStackY_e0.method)->klass = 0;
        *(int32_t *)((long)&(IStackY_e0.method)->klass + 4) = 0;
        IVar31.rgctxDataDummy = &(IStackY_e0.method)->klass;
        IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        IStackY_f0 = (Il2CppRGCTXData)0x3416c54;
        il2cpp_runtime_helper_022b4080();
        IVar69 = IStackY_e0;
        now_01.fields._8_8_ = (Il2CppRGCTXData)((MethodInfo *)plVar66)->name;
        if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
          IVar30 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
          IVar31 = *(Il2CppRGCTXData *)&(now_01.fields._8_8_)->field8_0x40;
          IStackY_f0 = (Il2CppRGCTXData)0x3416c71;
          Var77 = (*(code *)(now_01.fields._8_8_)->name)();
          IVar80 = IVar69;
          if (IVar69.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
            *(unkbyte10 *)&(IVar69.method)->return_type = Var77;
            *(undefined2 *)((long)&(IVar69.method)->parameters + 6) = uStackY_d2;
            *(undefined4 *)((long)&(IVar69.method)->parameters + 2) = uStackY_d6;
            if (IStackY_e0.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
              IVar31 = (Il2CppRGCTXData)(IStackY_e0.method)->name;
              IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
              IStackY_f0 = (Il2CppRGCTXData)0x3416cbd;
              plVar66 = (long *)ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                          ((Il2CppObject *)IVar31.method,0,
                                           *(MethodInfo_331B380 **)
                                            (*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&((MethodInfo *)now.fields._8_8_)->klass)->fields +
                                                      0xc0) + 0x100));
              goto joined_r0x03416cc8;
            }
          }
        }
      }
      goto label_03416ea6;
    }
    if (*(char *)&(IStackY_e0.method)->field7_0x38 != '\0') {
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &((MethodInfo *)plVar66)->klass)->fields;
      if (lVar29 != 0) {
        if (*(char *)(lVar29 + 0x28) == '\0') goto label_03416e21;
        IVar30 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
        *(Il2CppRGCTXData *)
         &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IStackY_e0.method)->klass)->fields
             = IVar30;
        IVar31.rgctxDataDummy = &(IStackY_e0.method)->klass;
        IStackY_f0 = (Il2CppRGCTXData)0x3416ddd;
        il2cpp_runtime_helper_022b4080();
        if (IStackY_e0.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          IVar31 = (Il2CppRGCTXData)(IStackY_e0.method)->name;
          IVar30 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
          IStackY_f0 = (Il2CppRGCTXData)0x3416e0b;
          plVar66 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                      ((Il2CppObject *)IVar31.method,(System_String_o *)IVar30.method,
                                       *(MethodInfo_331B660 **)
                                        (*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&((MethodInfo *)now.fields._8_8_)->klass)->fields +
                                                  0xc0) + 0x140));
          IVar69 = IVar80;
joined_r0x03416cc8:
          IVar80 = IVar69;
          if (IStackY_e0.rgctxDataDummy != (Il2CppRGCTXData *)0x0) goto label_03416cce;
        }
      }
      goto label_03416ea6;
    }
label_03416e21:
    *(undefined2 *)&(IStackY_e0.method)->field7_0x38 = 0x100;
    (IStackY_e0.method)->name = (char *)0x0;
    IVar30 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    *(Il2CppRGCTXData *)
     &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IStackY_e0.method)->klass)->fields =
         IVar30;
    IVar31.rgctxDataDummy = &(IStackY_e0.method)->klass;
    IStackY_f0 = (Il2CppRGCTXData)0x3416e41;
    il2cpp_runtime_helper_022b4080();
    IVar69 = IStackY_e0;
    now_01.fields._8_8_ = (Il2CppRGCTXData)((MethodInfo *)plVar66)->name;
    if (now_01.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    IVar30 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
    IVar31 = *(Il2CppRGCTXData *)&(now_01.fields._8_8_)->field8_0x40;
    IStackY_f0 = (Il2CppRGCTXData)0x3416e5a;
    Var77 = (*(code *)(now_01.fields._8_8_)->name)();
    IVar80 = IVar69;
    if (IVar69.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    *(unkbyte10 *)&(IVar69.method)->return_type = Var77;
    *(undefined4 *)((long)&(IVar69.method)->parameters + 2) = uStackY_d6;
    *(undefined2 *)((long)&(IVar69.method)->parameters + 6) = uStackY_d2;
    IVar31 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    IStackY_f0 = (Il2CppRGCTXData)0x3416e95;
    plVar66 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((System_String_o *)IVar31.method,0,
                                 *(MethodInfo_331B520 **)
                                  (*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&((MethodInfo *)now.fields._8_8_)->klass)->fields +
                                            0xc0) + 0x108));
    if (IStackY_e0.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
label_03416cce:
    IVar31 = (Il2CppRGCTXData)
             ((System_Collections_Generic_Dictionary_object__object__Fields *)
             &(IStackY_e0.method)->invoker_method)->_buckets;
    IVar80 = IVar69;
    if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    IVar30 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &((MethodInfo *)now.fields._8_8_)->klass)->fields + 0xc0) + 0x148))->method;
    IStackY_f0 = (Il2CppRGCTXData)0x3416cf2;
    now.fields._8_8_ =
         (MethodInfo_33188C0 **)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)IVar31.method,
                    (MethodInfo_362E340 *)IVar30.method);
    if ((IStackY_e0.rgctxDataDummy == (Il2CppRGCTXData *)0x0) ||
       (pSVar7 = ((System_Collections_Generic_Dictionary_object__object__Fields *)
                 &(IStackY_e0.method)->invoker_method)->_buckets, pSVar7 == (System_Int32_array *)0x0))
    goto label_03416ea6;
    piVar1 = (int *)((long)&pSVar7->max_length + 4);
    *piVar1 = *piVar1 + 1;
    iVar5 = (int32_t)pSVar7->max_length;
    *(undefined4 *)&pSVar7->max_length = 0;
    if (0 < iVar5) {
      IVar31 = (Il2CppRGCTXData)pSVar7->bounds;
      IVar30.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      IStackY_f0 = (Il2CppRGCTXData)0x3416d2f;
      System_Array__Clear((System_Array_o *)IVar31.method,0,iVar5,(MethodInfo *)0x0);
    }
    if ((Il2CppRGCTXData *)now.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03416ea6;
    if ((int)((MethodInfo *)now.fields._8_8_)->name < 1) {
      return;
    }
    pAVar33 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0;
    IVar80.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pAVar71 = pAVar33;
    if (((ulong)((MethodInfo *)now.fields._8_8_)->name & 0xffffffff) != 0) {
      do {
        pAVar33 = *(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o **)
                   ((long)now.fields._8_8_ + (long)IVar80.rgctxDataDummy * 8 + 0x20);
        if (pAVar33 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
          if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_03416ea6;
          IVar31 = (Il2CppRGCTXData)pAVar33[1].fields._Value_k__BackingField;
          IStackY_f0 = (Il2CppRGCTXData)0x3416da4;
          IVar30 = (Il2CppRGCTXData)plVar66;
          (*(code *)(pAVar33->fields)._Value_k__BackingField)(IVar31.rgctxDataDummy,plVar66,pAVar33[1].klass);
          pAVar71 = pAVar33;
        }
        pAVar33 = pAVar71;
        IVar80.rgctxDataDummy = (void *)((long)&(IVar80.method)->methodPointer + 1);
        now_01.fields._8_8_ = (Il2CppRGCTXData)(long)(int)*(uint *)&((MethodInfo *)now.fields._8_8_)->name;
        if ((long)now_01.fields._8_8_ <= (long)IVar80.rgctxDataDummy) {
          return;
        }
        pAVar71 = pAVar33;
      } while (IVar80.rgctxDataDummy <
               (Il2CppRGCTXData *)(ulong)*(uint *)&((MethodInfo *)now.fields._8_8_)->name);
    }
  }
  IStackY_f0.rgctxDataDummy =
       ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
  ;
  auVar75 = il2cpp_runtime_helper_022b2ca0();
  pcVar35 = auVar75._8_8_;
  uStackY_120 = auVar75._0_8_;
  IVar69 = IVar55;
  IStackY_118 = IVar80;
  pAStackY_110 = pAVar33;
  IStackY_108 = IVar40;
  IStackY_100 = (Il2CppRGCTXData)now.fields._8_8_;
  IStackY_f8 = (Il2CppRGCTXData)plVar66;
  IStackY_f0 = now_00.fields._8_8_;
  if (g_data_057a8ce6 == '\0') {
    pIStackY_128 = (Il2CppType *)0x3416edf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pIStackY_128 = (Il2CppType *)0x3416eeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8ce6 = '\x01';
  }
  lVar29 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar55.method)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    pIStackY_128 = (Il2CppType *)0x3416f0e;
    lVar29 = il2cpp_runtime_helper_023009c0();
  }
  pIStackY_128 = (Il2CppType *)0x3416f16;
  pIVar34 = (Il2CppType *)il2cpp_runtime_helper_023052d0(lVar29);
  pIStackY_128 = (Il2CppType *)0x3416f2d;
  (*(code *)**(undefined8 **)
              (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                   &(IVar55.method)->klass)->fields + 0xc0) + 8))(pIVar34);
  (IVar31.method)->return_type = pIVar34;
  pIStackY_128 = (Il2CppType *)0x3416f3d;
  il2cpp_runtime_helper_022b4080(&(IVar31.method)->return_type);
  IVar40.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  pIStackY_128 = (Il2CppType *)0x3416f47;
  System_Object___ctor((Il2CppObject *)IVar31.method,(MethodInfo *)0x0);
  if (IVar30.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
    pIStackY_128 = (Il2CppType *)0x3417126;
    uVar37 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pIStackY_128 = (Il2CppType *)0x341712e;
    IVar30.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(uVar37);
    pIStackY_128 = (Il2CppType *)0x341713d;
    pSVar51 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pIStackY_128 = (Il2CppType *)0x341714a;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)IVar30.method,pSVar51,(MethodInfo *)0x0);
    pIStackY_128 = (Il2CppType *)0x3417155;
    IVar40 = IVar55;
    now_00.fields._8_8_ = IVar30.rgctxDataDummy;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
    if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      (IVar31.method)->invoker_method = (InvokerMethod)IVar30;
      pIStackY_128 = (Il2CppType *)0x3416f70;
      il2cpp_runtime_helper_022b4080(&(IVar31.method)->invoker_method,IVar30.rgctxDataDummy);
      if (pcVar35 == (char *)0x0) {
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar55.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pIStackY_128 = (Il2CppType *)0x3416f96;
          lVar29 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar29 + 0xe4) == 0) {
          pIStackY_128 = (Il2CppType *)0x3416fa7;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar55.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pIStackY_128 = (Il2CppType *)0x3416fc7;
          lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
        }
        pcVar35 = *(char **)(*(long *)(lVar29 + 0xb8) + 8);
        if (pcVar35 == (char *)0x0) {
          lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar55.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pIStackY_128 = (Il2CppType *)0x3416ff8;
            lVar29 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar29 + 0xe4) == 0) {
            pIStackY_128 = (Il2CppType *)0x3417009;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar55.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pIStackY_128 = (Il2CppType *)0x3417029;
            il2cpp_runtime_helper_023009c0(lVar29);
          }
          pIStackY_128 = (Il2CppType *)0x3417042;
          pcVar35 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pIStackY_128 = (Il2CppType *)0x3417061;
          System_Func_DateTimeOffset____ctor();
          lVar29 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar55.method)->klass)->fields + 0xc0);
          lVar36 = *(long *)(lVar29 + 0x28);
          if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
            pIStackY_128 = (Il2CppType *)0x3417081;
            lVar36 = il2cpp_runtime_helper_023009c0(lVar36);
            lVar29 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar55.method)->klass)->fields + 0xc0);
          }
          *(char **)(*(long *)(lVar36 + 0xb8) + 8) = pcVar35;
          lVar29 = *(long *)(lVar29 + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pIStackY_128 = (Il2CppType *)0x34170ac;
            lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
          }
          pIStackY_128 = (Il2CppType *)0x34170bf;
          il2cpp_runtime_helper_022b4080(*(long *)(lVar29 + 0xb8) + 8,pcVar35);
        }
      }
      (IVar31.method)->name = pcVar35;
      pIStackY_128 = (Il2CppType *)0x34170cf;
      il2cpp_runtime_helper_022b4080(&(IVar31.method)->name,pcVar35);
      if (now_01.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pIStackY_128 = (Il2CppType *)0x34170ec;
          il2cpp_runtime_helper_02337ed0();
        }
        now_01.fields._8_8_ = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      *(Il2CppRGCTXData *)
       &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar31.method)->klass)->fields =
           (void *)now_01.fields._8_8_;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar31.method)->klass,now_01.fields._8_8_);
      return;
    }
  }
  pIStackY_128 = (Il2CppType *)0x341715a;
  il2cpp_runtime_helper_022b2c90();
  lVar29 = *(long *)(extraout_RDX_02 + 0x20);
  lVar36 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x38);
  uVar54 = (ulong)*(uint *)(lVar36 + 0xfc);
  lVar43 = -(uVar54 + 0xf & 0xfffffffffffffff0);
  apuStackY_160[1] = (undefined8 *)((long)apuStackY_160 + lVar43 + 8U);
  pIVar8 = (now_00.fields._8_8_)->return_type;
  now_00.fields._8_8_ = IVar40;
  if (-1 < *(int *)(lVar36 + 0x28)) {
    now_00.fields._8_8_ = &IStackY_150;
  }
  IStackY_150 = IVar40;
  IStackY_140 = IVar30;
  IStackY_138 = now_01.fields._8_8_;
  IStackY_130 = IVar55;
  pIStackY_128 = pIVar34;
  *(undefined8 *)((long)apuStackY_160 + lVar43) = 0x34171af;
  puVar60 = apuStackY_160[1];
  memcpy(apuStackY_160[1],now_00.fields._8_8_,uVar54);
  if (pIVar8 != (Il2CppType *)0x0) {
    puVar60 = *(undefined8 **)(*(long *)(lVar29 + 0xc0) + 0x40);
    uVar37 = *puVar60;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar29 + 0xc0) + 0x38) + 0x28)) {
      apuStackY_160[1] = (undefined8 *)*apuStackY_160[1];
    }
    pcVar9 = (code *)puVar60[2];
    *(undefined8 *)((long)apuStackY_160 + lVar43) = 0x34171e1;
    (*pcVar9)(uVar37,puVar60,pIVar8,apuStackY_160 + 1,&uStackY_141);
    return;
  }
  *(undefined8 *)((long)apuStackY_160 + lVar43) = 0x34171f4;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppType ***)((long)apuStackY_160 + lVar43) = &pIStackY_128;
  *(long *)((long)aiStackY_178 + lVar43 + 0x10) = lVar29;
  *(undefined8 *)((long)aiStackY_178 + lVar43 + 8) = 0;
  *(char **)((long)aiStackY_178 + lVar43) = pcVar35;
  *(undefined8 **)(acStackY_181 + lVar43 + 1) = apuStackY_160[1];
  ((Il2CppRGCTXData *)((long)&IStackY_198 + lVar43))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  lVar29 = *(long *)(extraout_RDX_03 + 0x20);
  lVar36 = *(long *)(lVar29 + 0xc0);
  uVar54 = (ulong)*(uint *)(*(long *)(lVar36 + 0x38) + 0xfc);
  puVar63 = (undefined8 *)((long)alStackY_1b0 + (lVar43 - (uVar54 + 0xf & 0xfffffffffffffff0)));
  *(undefined8 *)((long)&uStackY_190 + lVar43) = 0;
  lVar10 = puVar60[5];
  if (-1 < *(int *)(*(long *)(lVar36 + 0x38) + 0x28)) {
    now_00.fields._8_8_ = (void *)((long)&IStackY_198 + lVar43);
  }
  puVar63[-1] = 0x3417261;
  puVar60 = puVar63;
  memcpy(puVar63,now_00.fields._8_8_,uVar54);
  if (lVar10 != 0) {
    puVar60 = *(undefined8 **)(*(long *)(lVar29 + 0xc0) + 0x48);
    uVar37 = *puVar60;
    puVar39 = puVar63;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar29 + 0xc0) + 0x38) + 0x28)) {
      puVar39 = (undefined8 *)*puVar63;
    }
    *(undefined8 **)((long)alStackY_1b0 + lVar43) = puVar39;
    *(long *)((long)alStackY_1b0 + lVar43 + 8) = (long)&uStackY_190 + lVar43;
    pcVar9 = (code *)puVar60[2];
    puVar63[-1] = 0x341729c;
    (*pcVar9)(uVar37,puVar60,lVar10,(long)alStackY_1b0 + lVar43,acStackY_181 + lVar43);
    if (acStackY_181[lVar43] != '\0') {
      uVar37 = *(undefined8 *)((long)&uStackY_190 + lVar43);
      lVar29 = *(long *)(*(long *)(*(long *)(*(long *)(extraout_RDX_03 + 0x20) + 0xc0) + 0x58) + 0x80);
      puVar63[-1] = 0x34172c6;
      il2cpp_runtime_helper_02338550(uVar37,lVar29 + 0xc0);
    }
    return;
  }
  puVar63[-1] = 0x34172e2;
  uVar37 = il2cpp_runtime_helper_022b2c90();
  puVar63[-1] = uVar37;
  lVar36 = puVar60[5];
  if (lVar36 != 0) {
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                     &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x60))();
    return;
  }
  puVar63[-2] = 0x3417314;
  il2cpp_runtime_helper_022b2c90();
  puVar63[-2] = (long)apuStackY_160 + lVar43;
  puVar63[-3] = 0;
  puVar63[-4] = extraout_RDX_03;
  puVar63[-5] = puVar63;
  ((Il2CppRGCTXData *)(puVar63 + -7))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  lVar43 = *(long *)(extraout_RDX_04 + 0x20);
  lVar10 = *(long *)(*(long *)(lVar43 + 0xc0) + 0x38);
  uVar59 = (ulong)*(uint *)(lVar10 + 0xfc);
  uVar54 = uVar59 + 0xf & 0xfffffffffffffff0;
  puVar60 = (undefined8 *)((long)puVar63 + (-0x40 - uVar54));
  lVar36 = *(long *)(lVar36 + 0x28);
  if (-1 < *(int *)(lVar10 + 0x28)) {
    now_00.fields._8_8_ = puVar63 + -7;
  }
  puVar60[-1] = 0x341736f;
  puVar39 = puVar60;
  memcpy(puVar60,now_00.fields._8_8_,uVar59);
  uVar78 = (undefined4)uVar54;
  if (lVar36 != 0) {
    puVar39 = *(undefined8 **)(*(long *)(lVar43 + 0xc0) + 0x68);
    uVar37 = *puVar39;
    puVar61 = puVar60;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar43 + 0xc0) + 0x38) + 0x28)) {
      puVar61 = (undefined8 *)*puVar60;
    }
    puVar63[-8] = puVar61;
    pcVar9 = (code *)puVar39[2];
    puVar60[-1] = 0x34173a1;
    (*pcVar9)(uVar37,puVar39,lVar36,puVar63 + -8,(long)puVar63 + -0x29);
    return;
  }
  puVar60[-1] = 0x34173b1;
  il2cpp_runtime_helper_022b2c90();
  puVar60[-1] = puVar63 + -2;
  puVar60[-2] = lVar43;
  puVar60[-3] = 0;
  ((Il2CppRGCTXData *)(puVar60 + -4))->method = (MethodInfo *)IVar31;
  puVar60[-5] = lVar29;
  puVar60[-6] = puVar60;
  *(undefined4 *)((long)puVar60 + -100) = uVar78;
  puVar60[-9] = puVar39;
  ((Il2CppRGCTXData *)(puVar60 + -0x12))->rgctxDataDummy = (void *)now_00.fields._8_8_;
  pSVar72 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar69.method)->klass;
  lVar29 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar69.method)->klass)->fields + 0xc0);
  uVar54 = (ulong)*(uint *)(*(long *)(lVar29 + 0x38) + 0xfc);
  uVar59 = (ulong)*(uint *)(*(long *)(lVar29 + 0xa0) + 0xfc);
  puVar60[-0xe] = uVar54;
  puVar63 = (undefined8 *)((long)puVar60 + (-0x98 - (uVar54 + 0xf & 0xfffffffffffffff0)));
  puVar60[-0xf] = uVar59;
  uVar54 = uVar59 + 0xf & 0xfffffffffffffff0;
  lVar36 = (long)puVar63 - uVar54;
  puVar60[-0x10] = lVar36;
  puVar60[-7] = 0;
  lVar29 = *(long *)(lVar29 + 0x70);
  bVar2 = *(byte *)(lVar29 + 0x135);
  puVar60[-0x11] = extraout_RDX_05;
  if ((bVar2 & 1) == 0) {
    *(undefined8 *)(lVar36 + -8) = 0x341745a;
    lVar29 = il2cpp_runtime_helper_023009c0();
  }
  iVar53 = (int)uVar54;
  *(undefined8 *)(lVar36 + -8) = 0x3417462;
  puVar38 = (undefined8 *)il2cpp_runtime_helper_023052d0(lVar29);
  IVar40 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x78))->method;
  IVar55 = *(Il2CppRGCTXData *)&(IVar40.method)->methodPointer;
  *(undefined8 *)(lVar36 + -8) = 0x3417479;
  puVar61 = puVar38;
  (*(code *)IVar55)();
  IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  puVar39 = puVar60;
  if (puVar38 != (undefined8 *)0x0) {
    lVar29 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
    *(undefined8 *)(lVar36 + -8) = 0x34174a5;
    il2cpp_runtime_helper_022b2950(lVar29,8);
    *(undefined8 *)(lVar36 + -8) = 0x34174b0;
    puVar39 = (undefined8 *)il2cpp_runtime_helper_02338550(puVar38,lVar29);
    *puVar39 = puVar60[-9];
    uVar37 = *(undefined8 *)(lVar29 + 8);
    *(undefined8 *)(lVar36 + -8) = 0x34174c5;
    il2cpp_runtime_helper_022b2880(uVar37,puVar39,0);
    lVar29 = *(long *)&pSVar72->fields;
    IVar40.rgctxDataDummy = puVar60 + -0x12;
    if (*(int *)(*(long *)(*(long *)(lVar29 + 0xc0) + 0x38) + 0x28) < 0) {
      IVar40 = now_00.fields._8_8_;
    }
    now_00.fields._8_8_ = *(Il2CppRGCTXData *)(puVar60 + -0xe);
    *(undefined8 *)(lVar36 + -8) = 0x34174f2;
    memcpy(puVar63,IVar40.rgctxDataDummy,(size_t)now_00.fields._8_8_);
    lVar29 = *(long *)(*(long *)(*(long *)(lVar29 + 0xc0) + 0x70) + 0x80);
    puVar60[-0xc] = puVar38;
    iVar53 = now_00.fields._8_4_;
    *(undefined8 *)(lVar36 + -8) = 0x341751a;
    il2cpp_runtime_helper_022b2970(puVar38,lVar29 + 0x20,puVar63);
    IVar55 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar60 + -0x11))->rgctxDataDummy;
    if (IVar55.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    puVar39 = *(undefined8 **)(puVar60[-9] + 0x28);
    lVar29 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
    uVar37 = puVar60[-0xc];
    *(undefined8 *)(lVar36 + -8) = 0x3417552;
    IVar40.rgctxDataDummy = (void *)il2cpp_runtime_helper_02338550(uVar37,lVar29 + 0x20);
    *(undefined8 *)(lVar36 + -8) = 0x3417560;
    puVar61 = puVar63;
    memcpy(puVar63,IVar40.rgctxDataDummy,(size_t)now_00.fields._8_8_);
    if (puVar39 != (undefined8 *)0x0) {
      lVar29 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
      IVar40 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar29 + 0x48))->method;
      puVar61 = ((Il2CppRGCTXData *)&(IVar40.method)->methodPointer)->rgctxDataDummy;
      puVar38 = puVar63;
      if (-1 < *(int *)(*(long *)(lVar29 + 0x38) + 0x28)) {
        puVar38 = (undefined8 *)*puVar63;
      }
      puVar60[-0xb] = puVar38;
      puVar60[-10] = puVar60 + -7;
      iVar26 = (int)puVar60;
      iVar53 = iVar26 + -0x58;
      IVar69.rgctxDataDummy = puVar60 + -8;
      pIVar6 = (Il2CppArrayBounds *)(IVar40.method)->invoker_method;
      *(undefined8 *)(lVar36 + -8) = 0x34175a5;
      (*(code *)pIVar6)(puVar61,IVar40.rgctxDataDummy,puVar39);
      if (*(char *)(puVar60 + -8) == '\0') {
        lVar29 = *(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          *(undefined8 *)(lVar36 + -8) = 0x34175cc;
          lVar29 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)(lVar36 + -8) = 0x34175d4;
        uVar37 = il2cpp_runtime_helper_023052d0(lVar29);
        pcVar9 = (code *)**(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x88);
        *(undefined8 *)(lVar36 + -8) = 0x34175ee;
        (*pcVar9)(uVar37);
        puVar60[-7] = uVar37;
        puVar39 = *(undefined8 **)(puVar60[-9] + 0x28);
        lVar29 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
        uVar37 = puVar60[-0xc];
        *(undefined8 *)(lVar36 + -8) = 0x341761d;
        IVar40.rgctxDataDummy = (void *)il2cpp_runtime_helper_02338550(uVar37,lVar29 + 0x20);
        *(undefined8 *)(lVar36 + -8) = 0x341762b;
        puVar61 = puVar63;
        memcpy(puVar63,IVar40.rgctxDataDummy,(size_t)now_00.fields._8_8_);
        if (puVar39 == (undefined8 *)0x0) goto label_0341795f;
        IVar69 = *(Il2CppRGCTXData *)(puVar60 + -7);
        lVar29 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
        IVar40 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar29 + 0x90))->method;
        puVar61 = ((Il2CppRGCTXData *)&(IVar40.method)->methodPointer)->rgctxDataDummy;
        puVar38 = puVar63;
        if (-1 < *(int *)(*(long *)(lVar29 + 0x38) + 0x28)) {
          puVar38 = (undefined8 *)*puVar63;
        }
        puVar60[-0xb] = puVar38;
        *(Il2CppRGCTXData *)(puVar60 + -10) = IVar69;
        pIVar6 = (Il2CppArrayBounds *)(IVar40.method)->invoker_method;
        *(undefined8 *)(lVar36 + -8) = 0x341766f;
        (*(code *)pIVar6)(puVar61,IVar40.rgctxDataDummy,puVar39,puVar60 + -0xb);
      }
      lVar29 = *(long *)(puVar60[-9] + 0x18);
      iVar53 = 0;
      if (lVar29 != 0) {
        uVar37 = *(undefined8 *)(lVar29 + 0x28);
        uVar11 = *(undefined8 *)(lVar29 + 0x40);
        pcVar9 = *(code **)(lVar29 + 0x18);
        *(undefined8 *)(lVar36 + -8) = 0x341768b;
        auVar75 = (*pcVar9)(uVar11,uVar37);
        if (*(char *)((long)puVar60 + -100) == '\0') {
          uVar37 = puVar60[-7];
          in_R9 = *(MethodInfo_3316900 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x98);
          uVar11 = puVar60[-9];
          pIVar67 = in_R9->methodPointer;
          *(undefined8 *)(lVar36 + -8) = 0x34176b6;
          cVar27 = (*pIVar67)(uVar11,uVar37,auVar75._0_8_,auVar75._8_8_ & 0xffffffff,IVar55.rgctxDataDummy);
          if (cVar27 != '\0') {
            return;
          }
        }
        uVar37 = puVar60[-7];
        lVar29 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80);
        *(undefined8 *)(lVar36 + -8) = 0x34176e1;
        pcVar35 = (char *)il2cpp_runtime_helper_02338550(uVar37,lVar29 + 0x80);
        if (*pcVar35 == '\0') {
          pcVar9 = (code *)**(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 200);
          *(undefined8 *)(lVar36 + -8) = 0x3417792;
          IVar69.rgctxDataDummy = (void *)(*pcVar9)();
          puVar61 = *(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xc0);
          uVar37 = *puVar61;
          ((Il2CppRGCTXData *)(puVar60 + -8))->rgctxDataDummy = (void *)IVar69;
        }
        else {
          uVar37 = puVar60[-7];
          lVar29 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80);
          *(undefined8 *)(lVar36 + -8) = 0x341770d;
          pvVar41 = (void *)il2cpp_runtime_helper_02338550(uVar37,lVar29 + 0x20);
          puVar39 = (undefined8 *)puVar60[-0x10];
          sVar12 = puVar60[-0xf];
          *(undefined8 *)(lVar36 + -8) = 0x3417720;
          memcpy(puVar39,pvVar41,sVar12);
          lVar29 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
          puVar61 = *(undefined8 **)(lVar29 + 0xa8);
          uVar37 = *puVar61;
          if (-1 < *(int *)(*(long *)(lVar29 + 0xa0) + 0x28)) {
            puVar39 = (undefined8 *)*puVar39;
          }
          now_00.fields._8_8_ = puVar60 + -8;
          puVar60[-8] = puVar39;
          pcVar9 = (code *)puVar61[2];
          *(undefined8 *)(lVar36 + -8) = 0x3417759;
          (*pcVar9)(uVar37,puVar61,0,now_00.fields._8_8_,puVar60 + -0xb);
          IVar69 = *(Il2CppRGCTXData *)(puVar60 + -0xb);
          puVar61 = *(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xc0);
          uVar37 = *puVar61;
          *(Il2CppRGCTXData *)(puVar60 + -8) = IVar69;
        }
        iVar53 = iVar26 + -0x40;
        pcVar9 = (code *)puVar61[2];
        *(undefined8 *)(lVar36 + -8) = 0x34177b8;
        (*pcVar9)(uVar37,puVar61,IVar55.rgctxDataDummy);
        puVar61 = (undefined8 *)puVar60[-7];
        IVar40 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80))->
                 rgctxDataDummy;
        *(undefined8 *)(lVar36 + -8) = 0x34177d7;
        plVar66 = (long *)il2cpp_runtime_helper_02338550();
        if (*plVar66 != 0) {
          puVar61 = *(undefined8 **)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xd8);
          uVar37 = *puVar61;
          ((Il2CppRGCTXData *)(puVar60 + -8))->rgctxDataDummy = (void *)IVar55;
          iVar53 = iVar26 + -0x40;
          pcVar9 = (code *)puVar61[2];
          *(undefined8 *)(lVar36 + -8) = 0x3417806;
          IVar69 = IVar55;
          (*pcVar9)(uVar37);
          puVar61 = (undefined8 *)puVar60[-7];
          IVar40.rgctxDataDummy =
               (void *)(*(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80) + 0xc0
                       );
          *(undefined8 *)(lVar36 + -8) = 0x341782a;
          pcVar35 = (char *)il2cpp_runtime_helper_02338550();
          if (*pcVar35 != '\0') {
            return;
          }
          lVar29 = puVar60[-7];
          now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (lVar29 != 0) {
            lVar10 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x58) + 0x80);
            lVar43 = lVar10 + 0xc0;
            *(undefined8 *)(lVar36 + -8) = 0x341786b;
            il2cpp_runtime_helper_022b2950(lVar43,1);
            *(undefined8 *)(lVar36 + -8) = 0x3417876;
            puVar42 = (undefined1 *)il2cpp_runtime_helper_02338550(lVar29,lVar43);
            *puVar42 = 1;
            uVar37 = *(undefined8 *)(lVar10 + 200);
            *(undefined8 *)(lVar36 + -8) = 0x341788b;
            il2cpp_runtime_helper_022b2880(uVar37,puVar42,0);
            lVar29 = *(long *)(puVar60[-9] + 0x10);
            lVar43 = *(long *)(*(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0x70) + 0x80);
            IVar55 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(puVar60 + -0xc))->rgctxDataDummy;
            *(undefined8 *)(lVar36 + -8) = 0x34178b9;
            pvVar41 = (void *)il2cpp_runtime_helper_02338550(IVar55.rgctxDataDummy,lVar43 + 0x20);
            sVar12 = puVar60[-0xe];
            *(undefined8 *)(lVar36 + -8) = 0x34178c8;
            memcpy(puVar63,pvVar41,sVar12);
            lVar43 = *(long *)(*(long *)(*(long *)&pSVar72->fields + 0xc0) + 0xe8);
            if ((*(byte *)(lVar43 + 0x135) & 1) == 0) {
              *(undefined8 *)(lVar36 + -8) = 0x34178e8;
              lVar43 = il2cpp_runtime_helper_023009c0();
            }
            *(undefined8 *)(lVar36 + -8) = 0x34178f0;
            puVar39 = (undefined8 *)il2cpp_runtime_helper_023052d0(lVar43);
            lVar43 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
            uVar37 = *(undefined8 *)(lVar43 + 0xe0);
            puVar38 = *(undefined8 **)(lVar43 + 0xf0);
            pcVar9 = (code *)*puVar38;
            *(undefined8 *)(lVar36 + -8) = 0x3417914;
            IVar40 = IVar55;
            puVar61 = puVar39;
            (*pcVar9)(puVar39,IVar55.rgctxDataDummy,uVar37);
            iVar53 = (int)puVar38;
            now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
            if (lVar29 != 0) {
              lVar43 = *(long *)(*(long *)&pSVar72->fields + 0xc0);
              puVar61 = *(undefined8 **)(lVar43 + 0xf8);
              uVar37 = *puVar61;
              if (-1 < *(int *)(*(long *)(lVar43 + 0x38) + 0x28)) {
                puVar63 = (undefined8 *)*puVar63;
              }
              puVar60[-0xb] = puVar63;
              puVar60[-10] = puVar39;
              pcVar9 = (code *)puVar61[2];
              *(undefined8 *)(lVar36 + -8) = 0x3417950;
              (*pcVar9)(uVar37,puVar61,lVar29,puVar60 + -0xb,puVar39);
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
  *(undefined8 **)(lVar36 + -0x18) = puVar63;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__o **)(lVar36 + -0x20) = pSVar72;
  ((Il2CppRGCTXData *)(lVar36 + -0x28))->rgctxDataDummy = (void *)IVar55;
  *(undefined8 **)(lVar36 + -0x30) = puVar39;
  *(Il2CppRGCTXData *)(lVar36 + -0x40) = IVar69;
  *(int *)(lVar36 + -0x38) = iVar53;
  *(undefined8 *)(lVar36 + -0x70) = extraout_RDX_06;
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
  IVar55.rgctxDataDummy = (void *)(t1._ticks + 0xfU & 0xfffffffffffffff0);
  __dest = (MethodInfo_3316900 *)((lVar36 + -0x88) - (long)IVar55);
  *(undefined8 *)(lVar36 + -0x68) = 0;
  *(undefined8 *)(lVar36 + -0x60) = 0;
  pvVar41 = (pAVar13->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
  __dest[-1].slot = 0x7a1e;
  __dest[-1].parameters_count = 'A';
  __dest[-1].bitflags = '\x03';
  *(undefined4 *)&__dest[-1].field_0x54 = 0;
  pcVar35 = (char *)il2cpp_runtime_helper_02338550(IVar40.rgctxDataDummy,(long)pvVar41 + 0x80);
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
    IVar80 = IVar40;
    pcVar35 = (char *)il2cpp_runtime_helper_02338550();
    if (*pcVar35 == '\0') {
      return;
    }
    lVar29 = *(long *)(*(long *)(lVar36 + -0x48) + 0x20);
    pMVar62 = in_R9;
    if (lVar29 != 0) {
      cVar27 = *(char *)(lVar29 + 0x18);
      uVar37 = *(undefined8 *)(lVar29 + 0x20);
      *(char *)(lVar36 + -0x68) = cVar27;
      *(undefined8 *)(lVar36 + -0x60) = uVar37;
      if (cVar27 == '\0') {
        return;
      }
      pvVar41 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1
                ).fields;
      __dest[-1].slot = 0x7be9;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      pIVar70 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar40.rgctxDataDummy,(long)pvVar41 + 0x60);
      now_00.fields._8_8_ = *pIVar70;
      Var25 = *(unkuint10 *)pIVar70;
      IVar55._2_6_ = 0;
      IVar55._0_2_ = *(ushort *)(pIVar70 + 1);
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        __dest[-1].slot = 0x7c09;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar80 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar36 + -0x70))->method;
      uVar4 = *(uint *)(lVar36 + -0x38);
      IVar69.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      __dest[-1].slot = 0x7c21;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      left_02.fields._8_4_ = uVar4;
      left_02.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)IVar80.rgctxDataDummy;
      left_02.fields._12_4_ = 0;
      pIVar70 = (Il2CppRGCTXData *)(ulong)uVar4;
      right_02.fields._10_6_ = 0;
      right_02.fields._0_10_ = Var25;
      t1._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left_02,right_02,(MethodInfo *)0x0);
      lVar29 = *(long *)(*(long *)(lVar36 + -0x48) + 0x20);
      pMVar73 = in_R9;
      if (lVar29 != 0) {
        IVar55._0_1_ = *(undefined1 *)(lVar29 + 0x18);
        uVar37 = *(undefined8 *)(lVar29 + 0x20);
        *(undefined1 *)(lVar36 + -0x68) = *(undefined1 *)(lVar29 + 0x18);
        *(undefined8 *)(lVar36 + -0x60) = uVar37;
        __dest[-1].slot = 0x7c56;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        __this_03.fields.value.fields._ticks =
             (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
        __this_03.fields._0_8_ = lVar36 + -0x68;
        now_00.fields._8_8_ = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_03,method_08);
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
        bVar28 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)t1._ticks,(System_TimeSpan_o)now_00.fields._8_8_,
                            (MethodInfo *)0x0);
        if ((char)bVar28 == '\0') {
          return;
        }
        pvVar41 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->
                  _1).fields;
        __dest[-1].slot = 0x7ca6;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        pIVar70 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar40.rgctxDataDummy,(long)pvVar41 + 0x40);
        IVar80 = (Il2CppRGCTXData)pIVar70->method;
        pIVar70 = (Il2CppRGCTXData *)0x1;
        pIVar67 = in_R9->klass->rgctx_data->_33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache
                  ->methodPointer;
        __dest[-1].slot = 0x7cc2;
        __dest[-1].parameters_count = 'A';
        __dest[-1].bitflags = '\x03';
        *(undefined4 *)&__dest[-1].field_0x54 = 0;
        pvVar45 = (void *)(*pIVar67)();
        pvVar41 = *(void **)(lVar36 + -0x40);
        if (pvVar41 != (void *)0x0) {
          pMVar57 = in_R9->klass->rgctx_data->_24_System_Action_AottgQueryResult_TValue___Invoke;
          pIVar67 = pMVar57->methodPointer;
          *(void **)(lVar36 + -0x58) = pvVar45;
label_03417ceb:
          pIVar64 = pMVar57->invoker_method;
          __dest[-1].slot = 0x7cee;
          __dest[-1].parameters_count = 'A';
          __dest[-1].bitflags = '\x03';
          *(undefined4 *)&__dest[-1].field_0x54 = 0;
          (*pIVar64)(pIVar67,pMVar57,pvVar41,(void **)(lVar36 + -0x58),pvVar45);
          return;
        }
      }
    }
  }
  else {
    *(MethodInfo_3316900 **)(lVar36 + -0x78) = in_R9;
    pvVar41 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).
              fields;
    __dest[-1].slot = 0x7a4d;
    __dest[-1].parameters_count = 'A';
    __dest[-1].bitflags = '\x03';
    *(undefined4 *)&__dest[-1].field_0x54 = 0;
    pVar44 = (unkuint10 *)il2cpp_runtime_helper_02338550(IVar40.rgctxDataDummy,(long)pvVar41 + 0x60);
    pMVar62 = *(MethodInfo_3316900 **)pVar44;
    Var25 = *pVar44;
    IVar55._2_6_ = 0;
    IVar55._0_2_ = *(ushort *)((long)pVar44 + 8);
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      __dest[-1].slot = 0x7a6d;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    IVar80 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar36 + -0x70))->method;
    uVar4 = *(uint *)(lVar36 + -0x38);
    IVar69.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    __dest[-1].slot = 0x7a82;
    __dest[-1].parameters_count = 'A';
    __dest[-1].bitflags = '\x03';
    *(undefined4 *)&__dest[-1].field_0x54 = 0;
    left_01.fields._8_4_ = uVar4;
    left_01.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)IVar80.rgctxDataDummy;
    left_01.fields._12_4_ = 0;
    pIVar70 = (Il2CppRGCTXData *)(ulong)uVar4;
    right_01.fields._10_6_ = 0;
    right_01.fields._0_10_ = Var25;
    now_00.fields._8_8_ =
         (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_01,right_01,(MethodInfo *)0x0);
    lVar29 = *(long *)(*(long *)(lVar36 + -0x48) + 0x20);
    if (lVar29 != 0) {
      t2._ticks = ((System_TimeSpan_Fields *)(lVar29 + 0x10))->_ticks;
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
      bVar28 = System_TimeSpan__op_LessThan
                         ((System_TimeSpan_o)now_00.fields._8_8_,(System_TimeSpan_o)t2._ticks,
                          (MethodInfo *)0x0);
      in_R9 = *(MethodInfo_3316900 **)(lVar36 + -0x78);
      if ((char)bVar28 == '\0') goto label_03417b74;
      pvVar41 = (in_R9->klass->rgctx_data->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1
                ).fields;
      __dest[-1].slot = 0x7aed;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      pvVar41 = (void *)il2cpp_runtime_helper_02338550(IVar40.rgctxDataDummy,(long)pvVar41 + 0x20);
      __dest[-1].slot = 0x7afb;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      memcpy(__dest,pvVar41,t1._ticks);
      pAVar13 = in_R9->klass->rgctx_data;
      pIVar70 = (Il2CppRGCTXData *)pAVar13->_32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh;
      IVar80 = (Il2CppRGCTXData)pIVar70->method;
      if (-1 < (int)(pAVar13->_20_TValue->_1).byval_arg.bits) {
        pMVar73 = (MethodInfo_3316900 *)__dest->methodPointer;
      }
      pvVar41 = *(void **)(lVar36 + -0x40);
      *(undefined1 *)(lVar36 + -0x31) = 1;
      *(MethodInfo_3316900 **)(lVar36 + -0x58) = pMVar73;
      *(long *)(lVar36 + -0x50) = lVar36 + -0x31;
      IVar55.rgctxDataDummy = (void *)(lVar36 + -0x58);
      IVar69.rgctxDataDummy = (void *)(lVar36 + -0x80);
      IVar31 = pIVar70[2];
      __dest[-1].slot = 0x7b42;
      __dest[-1].parameters_count = 'A';
      __dest[-1].bitflags = '\x03';
      *(undefined4 *)&__dest[-1].field_0x54 = 0;
      (*(code *)IVar31)(IVar80.rgctxDataDummy,pIVar70,0);
      t1._ticks = 0;
      pMVar62 = in_R9;
      if (pvVar41 != (void *)0x0) {
        pvVar45 = *(void **)(lVar36 + -0x80);
        pMVar57 = in_R9->klass->rgctx_data->_24_System_Action_AottgQueryResult_TValue___Invoke;
        pIVar67 = pMVar57->methodPointer;
        *(void **)(lVar36 + -0x58) = pvVar45;
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
  __dest[-1].parameters = (Il2CppType **)IVar40;
  __dest[-1].return_type = (Il2CppType *)pMVar62;
  __dest[-2].rgctx_data = extraout_RDX_07;
  __dest[-2].name = (char *)pIVar70;
  if (g_data_057a8ce8 == '\0') {
    __dest[-2].invoker_method = (InvokerMethod)0x3417d4a;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ce8 = '\x01';
  }
  __dest[-1].virtualMethodPointer = (Il2CppMethodPointer)IVar55;
  now_01.fields._8_8_ =
       (Il2CppRGCTXData)
       *(Il2CppRGCTXData *)
        &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar55.method)->klass)->fields;
  pIVar46 = (now_01.fields._8_8_)->rgctx_data;
  uVar54 = (ulong)((pIVar46[7].klass)->_2).actualSize;
  pIVar64 = (InvokerMethod)(ulong)((pIVar46[0x14].klass)->_2).actualSize;
  IVar31.rgctxDataDummy = (void *)((long)__dest + (-0x98 - (uVar54 + 0xf & 0xfffffffffffffff0)));
  __dest[-1].invoker_method = pIVar64;
  IVar40.rgctxDataDummy = (void *)((ulong)(pIVar64 + 0xf) & 0xfffffffffffffff0);
  __dest[-2].return_type = (Il2CppType *)((long)IVar31.rgctxDataDummy - (long)IVar40);
  pAVar65 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *)
            (((long)IVar31.rgctxDataDummy - (long)IVar40) - (long)IVar40);
  __dest[-2].klass = pAVar65;
  __dest[-1].klass = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *)0x0;
  iVar53 = *(int *)&(pIVar46[7].method)->return_type;
  __dest[-2].parameters = (Il2CppType **)IVar80;
  now_00.fields._8_8_ = (Il2CppRGCTXData)(IVar80.method)->return_type;
  pIVar46 = (Il2CppRGCTXData *)&__dest[-2].name;
  if (iVar53 < 0) {
    pIVar46 = pIVar70;
  }
  pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417ddc;
  IVar80.rgctxDataDummy = IVar31.rgctxDataDummy;
  memcpy(IVar31.rgctxDataDummy,pIVar46,uVar54);
  if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
label_03418583:
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418588;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar46 = (Il2CppRGCTXData *)(now_01.fields._8_8_)->rgctx_data[9].method;
    IVar80 = (Il2CppRGCTXData)pIVar46->rgctxDataDummy;
    if (*(int *)&((now_01.fields._8_8_)->rgctx_data[7].method)->return_type < 0) {
      pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
    }
    else {
      pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
      IVar31 = *(Il2CppRGCTXData *)&(IVar31.method)->methodPointer;
    }
    *(Il2CppRGCTXData *)&__dest[-2].token = IVar31;
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c ***)&__dest[-2].slot = &__dest[-1].klass;
    IVar40.rgctxDataDummy = &__dest[-2].token;
    IVar69.rgctxDataDummy = &__dest[-2].field8_0x40;
    IVar31 = pIVar46[2];
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e24;
    (*(code *)IVar31)(IVar80.rgctxDataDummy,pIVar46,now_00.fields._8_8_);
    if (*(char *)&__dest[-2].field8_0x40 == '\0') {
      return;
    }
    IVar31 = (Il2CppRGCTXData)__dest[-1].klass;
    if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    pIVar70 = pIVar70 + 4;
    now_01.fields._8_8_ = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    IVar55.rgctxDataDummy = &(now_01.fields._8_8_)->rgctx_data;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e69;
    il2cpp_runtime_helper_022b2950(IVar55.rgctxDataDummy,1);
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e74;
    puVar42 = (undefined1 *)il2cpp_runtime_helper_02338550(IVar31.rgctxDataDummy,IVar55.rgctxDataDummy);
    *puVar42 = 0;
    ppIVar74 = ((now_01.fields._8_8_)->_2).typeHierarchy;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417e88;
    il2cpp_runtime_helper_022b2880(ppIVar74,puVar42,0);
    now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-2].rgctx_data;
    if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) {
      pIVar46 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x23].method;
      now_00.fields._8_8_ = *pIVar46;
      pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417eaf;
      IVar80 = "unknown_error";
      now_00.fields._8_8_ = (void *)(*now_00.fields._8_8_)();
      if (now_00.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03418583;
    }
    pIVar46 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x25].method;
    IVar55 = *pIVar46;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417ed2;
    IVar80 = now_00.fields._8_8_;
    cVar27 = (*(code *)IVar55)();
    IVar55 = (Il2CppRGCTXData)__dest[-1].klass;
    __dest[-1].virtualMethodPointer = (Il2CppMethodPointer)pIVar70;
    if (cVar27 != '\0') {
      if (IVar55.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
        now_01.fields._8_8_ = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
        pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f15;
        il2cpp_runtime_helper_022b2950((Il2CppRGCTXData *)&(now_01.fields._8_8_)->_1 + 0x10,1);
        pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f20;
        pIVar46 = (Il2CppRGCTXData *)
                  il2cpp_runtime_helper_02338550(IVar55.rgctxDataDummy,
                                     (Il2CppRGCTXData *)&(now_01.fields._8_8_)->_1 + 0x10);
        *(undefined1 *)pIVar46 = 1;
        IVar80 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(now_01.fields._8_8_)->_1)[0x11].rgctxDataDummy;
        pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f34;
        il2cpp_runtime_helper_022b2880(IVar80.rgctxDataDummy,pIVar46,0);
        IVar31 = (Il2CppRGCTXData)__dest[-1].klass;
        if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          pvVar41 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
          lVar29 = (long)pvVar41 + 0xa0;
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f6b;
          il2cpp_runtime_helper_022b2950(lVar29,1);
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f76;
          puVar42 = (undefined1 *)il2cpp_runtime_helper_02338550(IVar31.rgctxDataDummy,lVar29);
          *puVar42 = 0;
          uVar37 = *(undefined8 *)((long)pvVar41 + 0xa8);
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417f8a;
          il2cpp_runtime_helper_022b2880(uVar37,puVar42,0);
          IVar30 = (Il2CppRGCTXData)__dest[-1].klass;
          pIVar46 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x26].method;
          IVar80 = (Il2CppRGCTXData)pIVar46->rgctxDataDummy;
          IVar55 = (Il2CppRGCTXData)__dest[-2].return_type;
          *(Il2CppRGCTXData *)&__dest[-2].token = (void *)IVar55;
          IVar40.rgctxDataDummy = &__dest[-2].token;
          now_01.fields._8_8_ = pIVar46[2];
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417fb8;
          IVar69 = IVar55;
          (*(code *)now_01.fields._8_8_)(IVar80.rgctxDataDummy,pIVar46,now_00.fields._8_8_);
          now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (IVar30.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
            pIVar46 = (Il2CppRGCTXData *)((long)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields + 0x20);
            IVar40 = (Il2CppRGCTXData)__dest[-1].invoker_method;
            pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3417fea;
            il2cpp_runtime_helper_022b2970(IVar30.rgctxDataDummy,pIVar46,IVar55.rgctxDataDummy);
            now_01.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
            now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-2].parameters;
            IVar80 = IVar30;
            if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
              IVar31 = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
              IVar55.rgctxDataDummy = &(IVar31.method)->field8_0x40;
              pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418022;
              il2cpp_runtime_helper_022b2950(IVar55.rgctxDataDummy,8);
              pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341802d;
              pIVar46 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(now_01.fields._8_8_,IVar55.rgctxDataDummy);
              pIVar46->rgctxDataDummy = (void *)0x0;
              IVar80 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar31.klass)->_1)[9].rgctxDataDummy;
              pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418042;
              il2cpp_runtime_helper_022b2880(IVar80.rgctxDataDummy,pIVar46,0);
              IVar40 = (Il2CppRGCTXData)(now_00.fields._8_8_)->name;
              if (IVar40.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
                now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
                pIVar46 = (Il2CppRGCTXData *)(IVar40.method)->return_type;
                IVar80 = *(Il2CppRGCTXData *)&(IVar40.method)->field8_0x40;
                pcVar9 = (code *)(IVar40.method)->name;
                pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341805e;
                auVar75 = (*pcVar9)();
                if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
                  IVar30.rgctxDataDummy = (void *)(auVar75._8_8_ & 0xffffffff);
                  pvVar41 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
                  lVar29 = (long)pvVar41 + 0x60;
                  pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418095;
                  il2cpp_runtime_helper_022b2950(lVar29,0x10);
                  pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34180a0;
                  puVar60 = (undefined8 *)il2cpp_runtime_helper_02338550(now_00.fields._8_8_,lVar29);
                  *puVar60 = auVar75._0_8_;
                  *(short *)(puVar60 + 1) = IVar30._0_2_;
                  uVar37 = *(undefined8 *)((long)pvVar41 + 0x68);
                  pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
                  pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34180bb;
                  il2cpp_runtime_helper_022b2880(uVar37,puVar60,0);
                  pAVar14 = __dest[-1].klass;
                  pvVar41 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
                  pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34180de;
                  pvVar41 = (void *)il2cpp_runtime_helper_02338550(pAVar14,(long)pvVar41 + 0x20);
                  IVar55 = (Il2CppRGCTXData)__dest[-2].klass;
                  pIVar64 = __dest[-1].invoker_method;
                  pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34180f4;
                  memcpy(IVar55.rgctxDataDummy,pvVar41,(size_t)pIVar64);
                  pMVar57 = pIVar70->klass->rgctx_data[0x20].method;
                  pIVar67 = pMVar57->methodPointer;
                  if (-1 < *(int *)&(pIVar70->klass->rgctx_data[0x14].method)->return_type) {
                    IVar55 = *(Il2CppRGCTXData *)&(IVar55.method)->methodPointer;
                  }
                  *(undefined1 *)((long)&__dest[-1].name + 7) = 0;
                  *(Il2CppRGCTXData *)&__dest[-2].token = (void *)IVar55;
                  puVar42 = (undefined1 *)((long)&__dest[-1].name + 7);
                  goto label_03418255;
                }
              }
            }
          }
        }
      }
      goto label_03418583;
    }
    pIVar46 = (Il2CppRGCTXData *)((long)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields + 0x80);
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341814c;
    IVar80 = IVar55;
    pcVar35 = (char *)il2cpp_runtime_helper_02338550();
    cVar27 = *pcVar35;
    __dest[-2].rgctx_data = (Il2CppRGCTXData *)now_00.fields._8_8_;
    if (cVar27 == '\0') {
label_0341826f:
      pAVar14 = __dest[-1].klass;
      now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      if (pAVar14 != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__c *)0x0) {
        IVar31 = (Il2CppRGCTXData)((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
        IVar55.rgctxDataDummy = (Il2CppRGCTXData *)&(IVar31.klass)->_1 + 0x10;
        pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34182a6;
        il2cpp_runtime_helper_022b2950(IVar55.rgctxDataDummy,1);
        pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34182b1;
        pIVar46 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(pAVar14,IVar55.rgctxDataDummy);
        *(undefined1 *)pIVar46 = 0;
        IVar80 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar31.klass)->_1)[0x11].rgctxDataDummy;
        pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34182c5;
        il2cpp_runtime_helper_022b2880(IVar80.rgctxDataDummy,pIVar46,0);
        now_01.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
        if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
          pvVar41 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
          IVar55.rgctxDataDummy = pvVar41 + 0xa0;
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34182fc;
          il2cpp_runtime_helper_022b2950(IVar55.rgctxDataDummy,1);
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418307;
          puVar42 = (undefined1 *)il2cpp_runtime_helper_02338550(now_01.fields._8_8_,IVar55.rgctxDataDummy);
          *puVar42 = 1;
          uVar37 = *(undefined8 *)((long)pvVar41 + 0xa8);
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341831b;
          il2cpp_runtime_helper_022b2880(uVar37,puVar42,0);
          pAVar14 = __dest[-1].klass;
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341833e;
          pvVar41 = (void *)il2cpp_runtime_helper_02338550(pAVar14);
          pIVar64 = __dest[-1].invoker_method;
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341834c;
          memset(pvVar41,0,(size_t)pIVar64);
          IVar31 = (Il2CppRGCTXData)__dest[-1].klass;
          pIVar46 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x27].method;
          IVar30 = *pIVar46;
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418367;
          IVar80 = now_00.fields._8_8_;
          IVar30.rgctxDataDummy = (void *)(*IVar30.rgctxDataDummy)();
          if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
            pIVar70 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
            IVar55.rgctxDataDummy = pIVar70 + 8;
            pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341839b;
            il2cpp_runtime_helper_022b2950(IVar55.rgctxDataDummy,8);
            pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34183a6;
            pIVar46 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar31.rgctxDataDummy,IVar55.rgctxDataDummy);
            pIVar46->rgctxDataDummy = (void *)IVar30;
            IVar80 = (Il2CppRGCTXData)pIVar70[9].rgctxDataDummy;
            pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34183b8;
            il2cpp_runtime_helper_022b2880(IVar80.rgctxDataDummy,pIVar46,0);
            IVar40 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(__dest[-2].parameters + 3))->method;
            now_01.fields._8_8_ = IVar30.rgctxDataDummy;
            if (IVar40.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
              now_00.fields._8_8_ = (Il2CppRGCTXData)__dest[-1].klass;
              pIVar46 = (Il2CppRGCTXData *)(IVar40.method)->return_type;
              IVar80 = *(Il2CppRGCTXData *)&(IVar40.method)->field8_0x40;
              pcVar9 = (code *)(IVar40.method)->name;
              pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34183d8;
              auVar75 = (*pcVar9)();
              __dest[-1].invoker_method = auVar75._0_8_;
              if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
                IVar30.rgctxDataDummy = (void *)(auVar75._8_8_ & 0xffffffff);
                pIVar70 = (Il2CppRGCTXData *)__dest[-1].virtualMethodPointer;
                pvVar41 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
                IVar55.rgctxDataDummy = pvVar41 + 0x60;
                pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418413;
                il2cpp_runtime_helper_022b2950(IVar55.rgctxDataDummy,0x10);
                pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341841e;
                puVar60 = (undefined8 *)il2cpp_runtime_helper_02338550(now_00.fields._8_8_,IVar55.rgctxDataDummy);
                *puVar60 = __dest[-1].invoker_method;
                *(short *)(puVar60 + 1) = IVar30._0_2_;
                uVar37 = *(undefined8 *)((long)pvVar41 + 0x68);
                pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341843c;
                il2cpp_runtime_helper_022b2880(uVar37,puVar60,0);
                pIVar46 = __dest[-2].rgctx_data;
                pIVar67 = (pIVar70->klass->rgctx_data[0x27].method)->methodPointer;
                pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418453;
                uVar37 = (*pIVar67)(pIVar46);
                IVar40 = (Il2CppRGCTXData)pIVar70->klass->rgctx_data;
                pcVar9 = (code *)**(undefined8 **)&((IVar40.klass)->_2).static_fields_size;
                pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341846b;
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
    IVar49 = (Il2CppRGCTXData)__dest[-1].klass;
    pIVar46 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x27].method;
    IVar80 = *pIVar46;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341818f;
    IVar30.rgctxDataDummy = (void *)(*IVar80.rgctxDataDummy)();
    IVar80 = now_00.fields._8_8_;
    now_00.fields._8_8_ = IVar49;
    if (IVar49.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    pvVar41 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    lVar29 = (long)pvVar41 + 0x40;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34181c2;
    il2cpp_runtime_helper_022b2950(lVar29,8);
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34181cd;
    pIVar46 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(IVar49.rgctxDataDummy,lVar29);
    pIVar46->rgctxDataDummy = (void *)IVar30;
    uVar37 = *(undefined8 *)((long)pvVar41 + 0x48);
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34181de;
    il2cpp_runtime_helper_022b2880(uVar37,pIVar46,0);
    pAVar14 = __dest[-1].klass;
    pvVar41 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418201;
    pvVar41 = (void *)il2cpp_runtime_helper_02338550(pAVar14,(long)pvVar41 + 0x20);
    IVar55 = (Il2CppRGCTXData)__dest[-2].return_type;
    pIVar64 = __dest[-1].invoker_method;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418214;
    memcpy(IVar55.rgctxDataDummy,pvVar41,(size_t)pIVar64);
    pIVar46 = __dest[-2].rgctx_data;
    pIVar67 = (pIVar70->klass->rgctx_data[0x27].method)->methodPointer;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341822c;
    puVar42 = (undefined1 *)(*pIVar67)(pIVar46);
    pMVar57 = pIVar70->klass->rgctx_data[0x28].method;
    pIVar67 = pMVar57->methodPointer;
    if (-1 < *(int *)&(pIVar70->klass->rgctx_data[0x14].method)->return_type) {
      IVar55 = *(Il2CppRGCTXData *)&(IVar55.method)->methodPointer;
    }
    *(Il2CppRGCTXData *)&__dest[-2].token = (void *)IVar55;
label_03418255:
    *(undefined1 **)&__dest[-2].slot = puVar42;
    IVar40.rgctxDataDummy = &__dest[-2].token;
    IVar69.rgctxDataDummy = &__dest[-2].field8_0x40;
    pIVar64 = pMVar57->invoker_method;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418266;
    (*pIVar64)(pIVar67,pMVar57,(void *)0x0,IVar40.rgctxDataDummy,IVar69.rgctxDataDummy);
    now_01.fields._8_8_ = *(Il2CppRGCTXData *)&__dest[-2].field8_0x40;
label_0341846e:
    pAVar14 = __dest[-1].klass;
    pIVar46 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341848d;
    plVar66 = (long *)il2cpp_runtime_helper_02338550(pAVar14);
    IVar80.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    IVar31 = IVar30;
    if (*plVar66 == 0) goto label_03418583;
    pIVar67 = (pIVar70->klass->rgctx_data[0x29].method)->methodPointer;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34184ad;
    IVar31.rgctxDataDummy = (void *)(*pIVar67)();
    pAVar14 = __dest[-1].klass;
    pIVar46 = ((pIVar70->klass->rgctx_data[0xb].klass)->_1).fields;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34184cf;
    pIVar47 = (Il2CppRGCTXData *)il2cpp_runtime_helper_02338550(pAVar14);
    IVar80 = (Il2CppRGCTXData)pIVar47->method;
    if (IVar80.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    pIVar46 = (Il2CppRGCTXData *)pIVar70->klass->rgctx_data[0x2b].method;
    IVar30 = *pIVar46;
    pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x34184ef;
    (*(code *)IVar30)();
    if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
    if ((int)(IVar31.method)->name < 1) {
      return;
    }
    IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    now_00.fields._8_8_ = &__dest[-2].token;
    pIVar70 = (Il2CppRGCTXData *)0x0;
    IVar30.rgctxDataDummy = IVar55.rgctxDataDummy;
    if (((ulong)(IVar31.method)->name & 0xffffffff) != 0) {
      do {
        IVar55 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)((long)IVar31.rgctxDataDummy + (long)pIVar70 * 8 + 0x20))->rgctxDataDummy
        ;
        if (IVar55.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          if (IVar55.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418583;
          pIVar46 = *(Il2CppRGCTXData **)(*(long *)(*(long *)__dest[-1].virtualMethodPointer + 0xc0) + 0xc0);
          IVar80 = (Il2CppRGCTXData)pIVar46->method;
          *(Il2CppRGCTXData *)&__dest[-2].token = (MethodInfo *)now_01.fields._8_8_;
          IVar40 = pIVar46[2];
          pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x3418572;
          IVar69 = now_01.fields._8_8_;
          (*(code *)IVar40)(IVar80.rgctxDataDummy,pIVar46,IVar55.rgctxDataDummy,now_00.fields._8_8_);
          IVar30 = IVar55;
        }
        IVar55 = IVar30;
        pIVar70 = (Il2CppRGCTXData *)((long)pIVar70 + 1);
        IVar40 = (Il2CppRGCTXData)(long)(int)*(uint *)&(IVar31.method)->name;
        if ((long)IVar40.rgctxDataDummy <= (long)pIVar70) {
          return;
        }
        IVar30 = IVar55;
      } while (pIVar70 < (Il2CppRGCTXData *)(ulong)*(uint *)&(IVar31.method)->name);
    }
  }
  pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)0x341858d;
  auVar75 = il2cpp_runtime_helper_022b2ca0();
  pcVar35 = auVar75._8_8_;
  pAVar65[-1].vtable._3_ToString.method = (MethodInfo *)&__dest[-1].slot;
  pAVar65[-1].vtable._3_ToString.methodPtr = (Il2CppMethodPointer)IVar31;
  pAVar65[-1].vtable._2_GetHashCode.method = (MethodInfo *)now_01.fields._8_8_;
  pAVar65[-1].vtable._2_GetHashCode.methodPtr = (Il2CppMethodPointer)now_00.fields._8_8_;
  pAVar65[-1].vtable._1_Finalize.method = (MethodInfo *)pIVar70;
  pAVar65[-1].vtable._1_Finalize.methodPtr = (Il2CppMethodPointer)IVar55;
  pAVar65[-1].vtable._0_Equals.method = (MethodInfo *)auVar75._0_8_;
  now_00.fields._8_8_ = IVar40;
  IVar31 = IVar69;
  if (g_data_057a8ce9 == '\0') {
    pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8ce9 = '\x01';
  }
  lVar29 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar69.method)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185ee;
    lVar29 = il2cpp_runtime_helper_023009c0();
  }
  pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34185f6;
  pSVar48 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar29);
  method_01 = *(MethodInfo_315A040 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(IVar69.method)->klass)->fields + 0xc0) + 8);
  pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418610;
  System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object____ctor(pSVar48,method_01);
  (IVar80.method)->return_type = (Il2CppType *)pSVar48;
  pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418620;
  il2cpp_runtime_helper_022b4080(&(IVar80.method)->return_type);
  IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341862a;
  System_Object___ctor((Il2CppObject *)IVar80.method,(MethodInfo *)0x0);
  if (pIVar46 == (Il2CppRGCTXData *)0x0) {
    pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418809;
    uVar37 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418811;
    pIVar46 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(uVar37);
    pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418820;
    pSVar51 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341882d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)pIVar46,pSVar51,(MethodInfo *)0x0);
    pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418838;
    IVar55 = IVar69;
    pIVar70 = pIVar46;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pIVar70 = (Il2CppRGCTXData *)0x0;
    if (IVar80.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      (IVar80.method)->invoker_method = (InvokerMethod)pIVar46;
      pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418653;
      il2cpp_runtime_helper_022b4080(&(IVar80.method)->invoker_method,pIVar46);
      if (pcVar35 == (char *)0x0) {
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar69.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418679;
          lVar29 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar29 + 0xe4) == 0) {
          pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341868a;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar69.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34186aa;
          lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
        }
        pcVar35 = *(char **)(*(long *)(lVar29 + 0xb8) + 8);
        if (pcVar35 == (char *)0x0) {
          lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar69.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34186db;
            lVar29 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar29 + 0xe4) == 0) {
            pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34186ec;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar69.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341870c;
            il2cpp_runtime_helper_023009c0(lVar29);
          }
          pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418725;
          pcVar35 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418744;
          System_Func_DateTimeOffset____ctor();
          lVar29 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar69.method)->klass)->fields + 0xc0);
          lVar36 = *(long *)(lVar29 + 0x28);
          if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
            pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3418764;
            lVar36 = il2cpp_runtime_helper_023009c0(lVar36);
            lVar29 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar69.method)->klass)->fields + 0xc0);
          }
          *(char **)(*(long *)(lVar36 + 0xb8) + 8) = pcVar35;
          lVar29 = *(long *)(lVar29 + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341878f;
            lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
          }
          lVar29 = *(long *)(lVar29 + 0xb8);
          pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34187a2;
          il2cpp_runtime_helper_022b4080(lVar29 + 8,pcVar35);
        }
      }
      (IVar80.method)->name = pcVar35;
      pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34187b2;
      il2cpp_runtime_helper_022b4080(&(IVar80.method)->name,pcVar35);
      if (IVar40.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34187cf;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar40 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      *(Il2CppRGCTXData *)
       &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)&(IVar80.method)->klass)->fields =
           (void *)IVar40;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar80.method)->klass,IVar40.rgctxDataDummy);
      return;
    }
  }
  pAVar65[-1].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341883d;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-1].vtable._0_Equals.methodPtr = auVar75._0_8_;
  pMVar57 = pIVar70[5].method;
  if (pMVar57 != (MethodInfo *)0x0) {
    lVar29 = *(long *)(*(long *)(*(long *)(auVar75._8_8_ + 0x20) + 0xc0) + 0x40);
    pAVar65[-1].vtable._0_Equals.methodPtr = pAVar65[-1].vtable._0_Equals.methodPtr;
    method_00 = *(MethodInfo_315B430 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x108);
    pAVar65[-1]._2.naturalAligment = 0xe8;
    pAVar65[-1]._2.packingSize = 0xae;
    pAVar65[-1]._2.bitflags1 = '%';
    pAVar65[-1]._2.bitflags2 = '\x03';
    *(undefined4 *)&pAVar65[-1]._2.field_0x6c = 0;
    System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___FindEntry
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar57,
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar55,method_00);
    return;
  }
  pAVar65[-1]._2.naturalAligment = 'd';
  pAVar65[-1]._2.packingSize = 0x88;
  pAVar65[-1]._2.bitflags1 = 'A';
  pAVar65[-1]._2.bitflags2 = '\x03';
  *(undefined4 *)&pAVar65[-1]._2.field_0x6c = 0;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  uVar37 = auVar75._0_8_;
  pAVar65[-1]._2.naturalAligment = (char)uVar37;
  pAVar65[-1]._2.packingSize = (char)((ulong)uVar37 >> 8);
  pAVar65[-1]._2.bitflags1 = (char)((ulong)uVar37 >> 0x10);
  pAVar65[-1]._2.bitflags2 = (char)((ulong)uVar37 >> 0x18);
  *(int *)&pAVar65[-1]._2.field_0x6c = (int)((ulong)uVar37 >> 0x20);
  pAVar65[-1]._2.naturalAligment = '\0';
  pAVar65[-1]._2.packingSize = '\0';
  pAVar65[-1]._2.bitflags1 = '\0';
  pAVar65[-1]._2.bitflags2 = '\0';
  *(undefined4 *)&pAVar65[-1]._2.field_0x6c = 0;
  pSVar68 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar57->return_type;
  if (pSVar68 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    now_00.fields._8_8_ =
         (Il2CppRGCTXData)
         ((Il2CppRGCTXData *)(*(long *)(*(long *)(auVar75._8_8_ + 0x20) + 0xc0) + 0x48))->method;
    pAVar65[-1]._2.interfaces_count = 0x8899;
    pAVar65[-1]._2.interface_offsets_count = 0x341;
    pAVar65[-1]._2.typeHierarchyDepth = '\0';
    pAVar65[-1]._2.genericRecursionDepth = '\0';
    pAVar65[-1]._2.rank = '\0';
    pAVar65[-1]._2.minimumAlignment = '\0';
    bVar28 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                       (pSVar68,(ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar55,
                        (Il2CppObject **)&pAVar65[-1]._2.naturalAligment,
                        (MethodInfo_315C740 *)now_00.fields._8_8_);
    if ((char)bVar28 == '\0') {
      return;
    }
    lVar29._0_1_ = pAVar65[-1]._2.naturalAligment;
    lVar29._1_1_ = pAVar65[-1]._2.packingSize;
    lVar29._2_1_ = pAVar65[-1]._2.bitflags1;
    lVar29._3_1_ = pAVar65[-1]._2.bitflags2;
    lVar29._4_4_ = *(undefined4 *)&pAVar65[-1]._2.field_0x6c;
    if (lVar29 != 0) {
      return;
    }
  }
  pAVar65[-1]._2.interfaces_count = 35000;
  pAVar65[-1]._2.interface_offsets_count = 0x341;
  pAVar65[-1]._2.typeHierarchyDepth = '\0';
  pAVar65[-1]._2.genericRecursionDepth = '\0';
  pAVar65[-1]._2.rank = '\0';
  pAVar65[-1]._2.minimumAlignment = '\0';
  uVar37 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-1]._2.interfaces_count = (short)uVar37;
  pAVar65[-1]._2.interface_offsets_count = (short)((ulong)uVar37 >> 0x10);
  pAVar65[-1]._2.typeHierarchyDepth = (char)((ulong)uVar37 >> 0x20);
  pAVar65[-1]._2.genericRecursionDepth = (char)((ulong)uVar37 >> 0x28);
  pAVar65[-1]._2.rank = (char)((ulong)uVar37 >> 0x30);
  pAVar65[-1]._2.minimumAlignment = (char)((ulong)uVar37 >> 0x38);
  pSVar68 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(pSVar68->fields)._freeCount;
  if (pSVar68 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___Clear
              (pSVar68,(MethodInfo_315AE70 *)(IVar55.method)->klass->rgctx_data[0xc].method);
    return;
  }
  pAVar65[-1]._2.field_count = 0x88e4;
  pAVar65[-1]._2.event_count = 0x341;
  pAVar65[-1]._2.nested_type_count = 0;
  pAVar65[-1]._2.vtable_count = 0;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  uVar37 = auVar75._0_8_;
  pAVar65[-1]._2.field_count = (short)uVar37;
  pAVar65[-1]._2.event_count = (short)((ulong)uVar37 >> 0x10);
  pAVar65[-1]._2.nested_type_count = (short)((ulong)uVar37 >> 0x20);
  pAVar65[-1]._2.vtable_count = (short)((ulong)uVar37 >> 0x30);
  now_01.fields._8_8_ = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(pSVar68->fields)._freeCount;
  if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)now_01.fields._8_8_,
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar55,
               *(MethodInfo_315C3E0 **)(*(long *)(*(long *)(auVar75._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pAVar65[-1]._2.token = 0x3418914;
  pAVar65[-1]._2.method_count = 0;
  pAVar65[-1]._2.property_count = 0;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  IVar30 = auVar75._8_8_;
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pAVar65[-1]._2.token = pSVar48;
  *(Il2CppRGCTXData *)&pAVar65[-1]._2.thread_static_fields_offset = (MethodInfo *)IVar69;
  *(Il2CppRGCTXData *)&pAVar65[-1]._2.static_fields_size = (void *)IVar40;
  *(Il2CppRGCTXData *)&pAVar65[-1]._2.element_size = (MethodInfo *)IVar80;
  *(char **)&pAVar65[-1]._2.instance_size = pcVar35;
  pAVar65[-1]._2.genericContainerHandle = pIVar46;
  pAVar65[-1]._2.cctor_thread = auVar75._0_8_;
  ppIVar74 = (Il2CppClass **)((ulong)now_00.fields._8_8_ & 0xffffffff);
  pAVar65[-1]._2.cctor_thread = 0;
  lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar31.method)->klass)->fields + 0xc0) + 0x70);
  IVar40 = IVar31;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x341895f;
    lVar29 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418967;
  IVar49.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar29);
  IVar80 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(IVar31.method)->klass)->fields + 0xc0) + 0x78))->method;
  *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418981;
  IVar69.rgctxDataDummy = IVar49.rgctxDataDummy;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_ListKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)IVar49.method,
             (MethodInfo_27BBA00 *)IVar80.method);
  if (IVar49.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    (IVar49.method)->invoker_method = (InvokerMethod)now_01.fields._8_8_;
    *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x341899d;
    IVar80 = now_01.fields._8_8_;
    il2cpp_runtime_helper_022b4080(&(IVar49.method)->invoker_method);
    (IVar49.method)->name = (char *)IVar55;
    if (IVar30.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar69 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
    if (IVar69.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      now_00.fields._8_8_ =
           (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(IVar31.method)->klass)->fields + 0xc0) + 0x48))->method;
      *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x34189d1;
      IVar80 = IVar55;
      bVar28 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)IVar69.method,
                          (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar55,
                          (Il2CppObject **)&pAVar65[-1]._2.cctor_thread,
                          (MethodInfo_315C740 *)now_00.fields._8_8_);
      if ((char)bVar28 == '\0') {
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar31.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x34189f2;
          lVar29 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x34189fa;
        IVar55.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar29);
        IVar80 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar31.method)->klass)->fields + 0xc0) + 0x88))->method;
        *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418a17;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_ListKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar55.method,
                   (MethodInfo_31EFA30 *)IVar80.method);
        pAVar65[-1]._2.cctor_thread = (size_t)IVar55;
        IVar69 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
        if (IVar69.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03418c03;
        IVar80 = (Il2CppRGCTXData)(IVar49.method)->name;
        method_02 = *(MethodInfo_315ACA0 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar31.method)->klass)->fields + 0xc0) + 0x90);
        *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418a46;
        System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)IVar69.method,
                   (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)IVar80,
                   (Il2CppObject *)IVar55.method,method_02);
      }
      now_00.fields._8_8_ = (Il2CppRGCTXData)(now_01.fields._8_8_)->name;
      if (now_00.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar80 = (Il2CppRGCTXData)(now_00.fields._8_8_)->return_type;
        IVar69 = (Il2CppRGCTXData)((now_00.fields._8_8_)->field8_0x40).genericMethod;
        pcVar9 = (code *)(now_00.fields._8_8_)->name;
        *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418a5e;
        auVar75 = (*pcVar9)();
        if ((char)ppIVar74 == '\0') {
          now_00.fields._8_8_ = (void *)(auVar75._8_8_ & 0xffffffff);
          IVar80 = (Il2CppRGCTXData)pAVar65[-1]._2.cctor_thread;
          method_12 = *(MethodInfo_331A460 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar31.method)->klass)->fields + 0xc0) + 0x98);
          *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418a89;
          now_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar75._0_8_;
          IVar69 = now_01.fields._8_8_;
          IVar40 = IVar30;
          bVar28 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)now_01.fields._8_8_,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar80.method,
                              now_00,(System_Action_AottgQueryResult_TValue___o *)IVar30.method,
                              (MethodInfo_3318C10 *)method_12);
          if ((char)bVar28 != '\0') {
            return;
          }
        }
        lVar29 = pAVar65[-1]._2.cctor_thread;
        if (lVar29 != 0) {
          if (*(char *)(lVar29 + 0x38) == '\0') {
            pMVar18 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar31.method)->klass)->fields + 0xc0) + 200);
            *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418ad8;
            IVar80.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar18);
          }
          else {
            pIVar81 = *(Il2CppObject **)(lVar29 + 0x18);
            pMVar15 = *(MethodInfo_331B450 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar31.method)->klass)->fields + 0xc0) + 0xa8);
            *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418abf;
            IVar80.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar81,pMVar15);
          }
          pIVar34 = (IVar30.method)->return_type;
          IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar30.klass)->_1)[8].method;
          pcVar9 = (code *)(IVar30.method)->name;
          *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418aea;
          (*pcVar9)(IVar69.rgctxDataDummy,IVar80.rgctxDataDummy,pIVar34);
          lVar29 = pAVar65[-1]._2.cctor_thread;
          if ((lVar29 != 0) &&
             (IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar29 + 0x10))->method,
             IVar69.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now_00.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar31.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar69.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = (Il2CppArrayBounds *)(IVar69.method)->invoker_method;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar69.method)->name;
              IVar80 = IVar30;
              if (uVar4 < (uint)pIVar6[1].lower_bound) {
                now_00.fields._8_4_ = uVar4 + 1;
                now_00.fields._12_4_ = 0;
                *(uint *)&(IVar69.method)->name = now_00.fields._8_4_;
                IVar69.rgctxDataDummy = &pIVar6[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar6[2].length + (int)uVar4))->klass = (Il2CppClass *)IVar30;
                *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418b4b;
                il2cpp_runtime_helper_022b4080();
                lVar29 = pAVar65[-1]._2.cctor_thread;
              }
              else {
                pMVar19 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418b70;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar69.method,
                           (Il2CppObject *)IVar30.method,pMVar19);
                lVar29 = pAVar65[-1]._2.cctor_thread;
              }
              if (lVar29 != 0) {
                if (*(char *)(lVar29 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)(lVar29 + 0x3a) = 1;
                pIVar6 = (Il2CppArrayBounds *)(now_01.fields._8_8_)->invoker_method;
                now_01.fields._8_8_ = (Il2CppRGCTXData)(IVar49.method)->name;
                lVar29 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(IVar31.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
                  *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418baf;
                  lVar29 = il2cpp_runtime_helper_023009c0();
                }
                *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418bb7;
                IVar30.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar29);
                now_00.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar31.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418bde;
                IVar80.rgctxDataDummy = IVar49.rgctxDataDummy;
                IVar69.rgctxDataDummy = IVar30.rgctxDataDummy;
                System_Action_object____ctor();
                IVar55.rgctxDataDummy = (Il2CppObject *)0x0;
                if (pIVar6 != (Il2CppArrayBounds *)0x0) {
                  uVar37 = *(undefined8 *)&pIVar6[2].lower_bound;
                  iVar20 = pIVar6[4].length;
                  pcVar9 = *(code **)&pIVar6[1].lower_bound;
                  *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418bf4;
                  (*pcVar9)(iVar20,now_01.fields._8_8_,IVar30.rgctxDataDummy,uVar37);
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
  *(undefined8 *)&pAVar65[-1]._2.cctor_finished = 0x3418c08;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppRGCTXData *)&pAVar65[-1]._2.cctor_finished = (MethodInfo *)IVar55;
  *(Il2CppRGCTXData *)&pAVar65[-1]._2.initializationExceptionGCHandle = (MethodInfo *)now_01.fields._8_8_;
  pAVar65[-1]._2.unity_user_data = (void *)IVar31;
  pAVar65[-1]._2.typeHierarchy = ppIVar74;
  pAVar65[-1].rgctx_data = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *)IVar30;
  pAVar65[-1].static_fields = (void *)IVar49;
  pAVar65[-1]._1.implementedInterfaces = (Il2CppClass **)method_12;
  pAVar65[-1]._1.interfaceOffsets = (Il2CppRuntimeInterfaceOffsetPair *)IVar40;
  IVar30.rgctxDataDummy = now_00.fields._8_8_ & 0xffffffff;
  now_01.fields._8_8_ = IVar80;
  plVar66 = (long *)IVar69;
  if (g_data_057a8cea == '\0') {
    pAVar65[-1]._1.events = (void *)0x3418c49;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAVar65[-1]._1.events = (void *)0x3418c55;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAVar65[-1]._1.events = (void *)0x3418c61;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar66 = &TypeInfo_TimeSpan;
    pAVar65[-1]._1.events = (void *)0x3418c6d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cea = '\x01';
  }
  pAVar65[-1]._1.properties = (void *)0x0;
  pAVar65[-1]._1.methods = (void *)0x0;
  IVar49.rgctxDataDummy = IVar30.rgctxDataDummy;
  if (IVar80.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar80.method)->field7_0x38 == '\0') {
label_03418d39:
      if (*(char *)((long)&(IVar80.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar69.method)->klass)->fields;
      if (lVar29 != 0) {
        cVar27 = *(char *)(lVar29 + 0x18);
        pvVar41 = *(void **)(lVar29 + 0x20);
        *(char *)&pAVar65[-1]._1.properties = cVar27;
        pAVar65[-1]._1.methods = pvVar41;
        if (cVar27 == '\0') {
          return;
        }
        IVar55 = (Il2CppRGCTXData)(IVar80.method)->return_type;
        Var25 = *(unkuint10 *)&(IVar80.method)->return_type;
        IVar31._2_6_ = 0;
        IVar31._0_2_ = *(ushort *)&(IVar80.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAVar65[-1]._1.events = (void *)0x3418d89;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar40.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        pAVar65[-1]._1.events = (void *)0x3418d9d;
        left_04.fields._8_8_ = IVar30.rgctxDataDummy;
        left_04.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_08.rgctxDataDummy;
        right_04.fields._10_6_ = 0;
        right_04.fields._0_10_ = Var25;
        now_00.fields._8_8_ = IVar31;
        plVar66 = (long *)extraout_RDX_08;
        IVar49 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_04,right_04,(MethodInfo *)0x0);
        lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar69.method)->klass)->fields;
        now_01.fields._8_8_ = IVar30;
        if (lVar29 != 0) {
          pvVar41 = *(void **)(lVar29 + 0x20);
          *(undefined1 *)&pAVar65[-1]._1.properties = *(undefined1 *)(lVar29 + 0x18);
          pAVar65[-1]._1.methods = pvVar41;
          pAVar65[-1]._1.events = (void *)0x3418dcf;
          __this_04.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_04.fields._0_8_ = &pAVar65[-1]._1.properties;
          IVar31 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_04,method_09);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAVar65[-1]._1.events = (void *)0x3418dea;
            il2cpp_runtime_helper_02337ed0();
          }
          IVar55.rgctxDataDummy = (Il2CppObject *)0x0;
          pAVar65[-1]._1.events = (void *)0x3418df9;
          bVar28 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)IVar49,(System_TimeSpan_o)IVar31,(MethodInfo *)0x0);
          if ((char)bVar28 == '\0') {
            return;
          }
          plVar66 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar80.method)->klass)->fields;
          pMVar57 = pAVar65[-1]._1.implementedInterfaces[4]->rgctx_data[0x21].method;
          now_01.fields._8_8_ = (Il2CppRGCTXData)0x1;
          pAVar65[-1]._1.events = (void *)0x3418e22;
          pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar66,1,(MethodInfo_331B520 *)pMVar57);
          pIVar56 = pAVar65[-1]._1.interfaceOffsets;
          now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (pIVar56 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) {
label_03418e2c:
            uVar37 = *(undefined8 *)&pIVar56[2].offset;
            pIVar84 = pIVar56[4].interfaceType;
            pcVar9 = *(code **)&pIVar56[1].offset;
            pAVar65[-1]._1.events = (void *)0x3418e3a;
            (*pcVar9)(pIVar84,pAVar32,uVar37);
            return;
          }
        }
      }
    }
    else {
      IVar55 = (Il2CppRGCTXData)(IVar80.method)->return_type;
      Var25 = *(unkuint10 *)&(IVar80.method)->return_type;
      now_00.fields._10_6_ = 0;
      now_00.fields._offsetMinutes = *(ushort *)&(IVar80.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAVar65[-1]._1.events = (void *)0x3418caf;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar40.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      pAVar65[-1]._1.events = (void *)0x3418cc3;
      left_03.fields._8_8_ = IVar30.rgctxDataDummy;
      left_03.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_08.rgctxDataDummy;
      right_03.fields._10_6_ = 0;
      right_03.fields._0_10_ = Var25;
      now_01.fields._8_8_ = IVar30.rgctxDataDummy;
      plVar66 = (long *)extraout_RDX_08;
      IVar31 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_03,right_03,(MethodInfo *)0x0);
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar69.method)->klass)->fields;
      if (lVar29 != 0) {
        IVar55 = *(Il2CppRGCTXData *)(lVar29 + 0x10);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAVar65[-1]._1.events = (void *)0x3418cf0;
          il2cpp_runtime_helper_02337ed0();
        }
        pAVar65[-1]._1.events = (void *)0x3418cfd;
        now_01.fields._8_8_ = IVar55;
        plVar66 = (long *)IVar31;
        bVar28 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)IVar31,(System_TimeSpan_o)IVar55,(MethodInfo *)0x0);
        if ((char)bVar28 == '\0') goto label_03418d39;
        plVar66 = (long *)(IVar80.method)->name;
        pMVar57 = pAVar65[-1]._1.implementedInterfaces[4]->rgctx_data[0x20].method;
        now_01.fields._8_8_ = (Il2CppRGCTXData)0x1;
        pAVar65[-1]._1.events = (void *)0x3418d26;
        pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar66,1,(MethodInfo_331B380 *)pMVar57);
        pIVar56 = pAVar65[-1]._1.interfaceOffsets;
        if (pIVar56 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_03418e2c;
        now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  pAVar65[-1]._1.events = (void *)0x3418e57;
  il2cpp_runtime_helper_022b2c90();
  pAVar65[-1]._1.events = (void *)extraout_RDX_08;
  pAVar65[-1]._1.fields = (void *)IVar31;
  pAVar65[-1]._1.klass = (Il2CppClass *)IVar69;
  pAVar65[-1]._1.interopData = (void *)IVar80;
  IVar80 = now_00.fields._8_8_;
  IVar31 = now_01.fields._8_8_;
  if (g_data_057a8ceb == '\0') {
    pAVar65[-1]._1.declaringType = (Il2CppClass *)0x3418e8c;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ceb = '\x01';
  }
  pAVar65[-1]._1.generic_class = (void *)0x0;
  IVar69 = (Il2CppRGCTXData)((MethodInfo *)plVar66)->return_type;
  pAVar33 = extraout_RDX_09;
  if (IVar69.rgctxDataDummy == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
label_034191b6:
    pAVar65[-1]._1.declaringType = (Il2CppClass *)0x34191bb;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    IVar80 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x48))->method;
    pAVar65[-1]._1.declaringType = (Il2CppClass *)0x3418ec5;
    IVar31 = now_01.fields._8_8_;
    bVar28 = System_Collections_Generic_Dictionary_AottgChangelogService_ListKey__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)IVar69.method,
                        (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o)now_01.fields._8_8_,
                        &pAVar65[-1]._1.generic_class,(MethodInfo_315C740 *)IVar80.method);
    if ((char)bVar28 == '\0') {
      return;
    }
    pvVar41 = pAVar65[-1]._1.generic_class;
    if (pvVar41 == (void *)0x0) goto label_034191b6;
    *(undefined1 *)((long)pvVar41 + 0x3a) = 0;
    if (extraout_RDX_09 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      IVar31 = (Il2CppRGCTXData)
               ((Il2CppRGCTXData *)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x118))->method;
      pAVar65[-1]._1.declaringType = (Il2CppClass *)0x3418f05;
      IVar69 = "unknown_error";
      pAVar33 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error".method,(MethodInfo_331AB10 *)IVar31.method);
      if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_034191b6;
    }
    IVar69 = (Il2CppRGCTXData)pAVar65[-1]._1.generic_class;
    if (IVar69.rgctxDataDummy == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
    goto label_034191b6;
    if ((char)(pAVar33->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)&(IVar69.method)->field7_0x38 = 1;
      IVar31 = (Il2CppRGCTXData)(pAVar33->fields)._Value_k__BackingField;
      (IVar69.method)->name = (char *)IVar31;
      pAVar65[-1]._1.declaringType = (Il2CppClass *)0x3418f43;
      il2cpp_runtime_helper_022b4080(&(IVar69.method)->name);
      pvVar41 = pAVar65[-1]._1.generic_class;
      IVar69.rgctxDataDummy = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      if (pvVar41 != (void *)0x0) {
        *(undefined8 *)((long)pvVar41 + 0x20) = 0;
        IVar69.rgctxDataDummy = pvVar41 + 0x20;
        IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        pAVar65[-1]._1.declaringType = (Il2CppClass *)0x3418f64;
        il2cpp_runtime_helper_022b4080();
        IVar80 = (Il2CppRGCTXData)((MethodInfo *)plVar66)->name;
        if (IVar80.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          now_01.fields._8_8_ = (Il2CppRGCTXData)pAVar65[-1]._1.generic_class;
          IVar31 = (Il2CppRGCTXData)(IVar80.method)->return_type;
          IVar69 = *(Il2CppRGCTXData *)&(IVar80.method)->field8_0x40;
          pcVar9 = (code *)(IVar80.method)->name;
          pAVar65[-1]._1.declaringType = (Il2CppClass *)0x3418f81;
          Var77 = (*pcVar9)();
          if (now_01.fields._8_8_ != (void *)0x0) {
            *(unkbyte10 *)&(now_01.fields._8_8_)->return_type = Var77;
            *(undefined2 *)((long)&(now_01.fields._8_8_)->parameters + 6) =
                 *(undefined2 *)((long)&pAVar65[-1]._1.typeMetadataHandle + 6);
            *(undefined4 *)((long)&(now_01.fields._8_8_)->parameters + 2) =
                 *(undefined4 *)((long)&pAVar65[-1]._1.typeMetadataHandle + 2);
            pvVar41 = pAVar65[-1]._1.generic_class;
            if (pvVar41 != (void *)0x0) {
              IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar41 + 0x18))->method;
              pMVar16 = *(MethodInfo_331B380 **)
                         (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                              &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
              IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
              pAVar65[-1]._1.declaringType = (Il2CppClass *)0x3418fcd;
              plVar66 = (long *)ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                          ((Il2CppObject *)IVar69.method,0,pMVar16);
              pvVar41 = pAVar65[-1]._1.generic_class;
              goto joined_r0x03418fd8;
            }
          }
        }
      }
      goto label_034191b6;
    }
    if (*(char *)&(IVar69.method)->field7_0x38 != '\0') {
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &((MethodInfo *)plVar66)->klass)->fields;
      if (lVar29 != 0) {
        if (*(char *)(lVar29 + 0x28) == '\0') goto label_03419131;
        IVar31 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
        (IVar69.method)->klass = (Il2CppClass *)IVar31;
        IVar69.rgctxDataDummy = &(IVar69.method)->klass;
        pAVar65[-1]._1.declaringType = (Il2CppClass *)0x34190ed;
        il2cpp_runtime_helper_022b4080();
        pvVar41 = pAVar65[-1]._1.generic_class;
        if (pvVar41 != (void *)0x0) {
          IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar41 + 0x18))->method;
          IVar31 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
          pMVar21 = *(MethodInfo_331B660 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
          pAVar65[-1]._1.declaringType = (Il2CppClass *)0x341911b;
          plVar66 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                      ((Il2CppObject *)IVar69.method,(System_String_o *)IVar31.method,pMVar21)
          ;
          pvVar41 = pAVar65[-1]._1.generic_class;
joined_r0x03418fd8:
          if (pvVar41 != (void *)0x0) goto label_03418fde;
        }
      }
      goto label_034191b6;
    }
label_03419131:
    *(undefined2 *)&(IVar69.method)->field7_0x38 = 0x100;
    (IVar69.method)->name = (char *)0x0;
    IVar31 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    (IVar69.method)->klass = (Il2CppClass *)IVar31;
    IVar69.rgctxDataDummy = &(IVar69.method)->klass;
    pAVar65[-1]._1.declaringType = (Il2CppClass *)0x3419151;
    il2cpp_runtime_helper_022b4080();
    IVar80 = (Il2CppRGCTXData)((MethodInfo *)plVar66)->name;
    if (IVar80.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_034191b6;
    now_01.fields._8_8_ = (Il2CppRGCTXData)pAVar65[-1]._1.generic_class;
    IVar31 = (Il2CppRGCTXData)(IVar80.method)->return_type;
    IVar69 = *(Il2CppRGCTXData *)&(IVar80.method)->field8_0x40;
    pcVar9 = (code *)(IVar80.method)->name;
    pAVar65[-1]._1.declaringType = (Il2CppClass *)0x341916a;
    Var77 = (*pcVar9)();
    if (now_01.fields._8_8_ == (void *)0x0) goto label_034191b6;
    *(unkbyte10 *)&(now_01.fields._8_8_)->return_type = Var77;
    *(undefined4 *)((long)&(now_01.fields._8_8_)->parameters + 2) =
         *(undefined4 *)((long)&pAVar65[-1]._1.typeMetadataHandle + 2);
    *(undefined2 *)((long)&(now_01.fields._8_8_)->parameters + 6) =
         *(undefined2 *)((long)&pAVar65[-1]._1.typeMetadataHandle + 6);
    IVar69 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    pMVar22 = *(MethodInfo_331B520 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
    IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pAVar65[-1]._1.declaringType = (Il2CppClass *)0x34191a5;
    plVar66 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((System_String_o *)IVar69.method,0,pMVar22);
    pvVar41 = pAVar65[-1]._1.generic_class;
    if (pvVar41 == (void *)0x0) goto label_034191b6;
label_03418fde:
    IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar41 + 0x10))->method;
    if (IVar69.rgctxDataDummy == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
    goto label_034191b6;
    IVar31 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x148))->method;
    pAVar65[-1]._1.declaringType = (Il2CppClass *)0x3419002;
    now_00.fields._8_8_ =
         (MethodInfo *)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)IVar69.method,
                    (MethodInfo_362E340 *)IVar31.method);
    pvVar41 = pAVar65[-1]._1.generic_class;
    if ((pvVar41 == (void *)0x0) || (lVar29 = *(long *)((long)pvVar41 + 0x10), lVar29 == 0))
    goto label_034191b6;
    *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
    iVar5 = *(int32_t *)(lVar29 + 0x18);
    *(undefined4 *)(lVar29 + 0x18) = 0;
    if (0 < iVar5) {
      IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar29 + 0x10))->method;
      IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      IVar80.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      pAVar65[-1]._1.declaringType = (Il2CppClass *)0x341903f;
      System_Array__Clear((System_Array_o *)IVar69.method,0,iVar5,(MethodInfo *)0x0);
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
          pAVar17 = pAVar33[1].klass;
          IVar69 = (Il2CppRGCTXData)pAVar33[1].fields._Value_k__BackingField;
          pIVar81 = (pAVar33->fields)._Value_k__BackingField;
          pAVar65[-1]._1.declaringType = (Il2CppClass *)0x34190b4;
          IVar31 = (Il2CppRGCTXData)plVar66;
          (*(code *)pIVar81)(IVar69.rgctxDataDummy,plVar66,pAVar17);
          pAVar71 = pAVar33;
        }
        pAVar33 = pAVar71;
        now_01.fields._8_8_ = (void *)((long)&(now_01.fields._8_8_)->methodPointer + 1);
        IVar80 = (Il2CppRGCTXData)(long)(int)*(uint *)&(now_00.fields._8_8_)->name;
        if ((long)IVar80.rgctxDataDummy <= (long)now_01.fields._8_8_) {
          return;
        }
        pAVar71 = pAVar33;
      } while (now_01.fields._8_8_ < (void *)(ulong)*(uint *)&(now_00.fields._8_8_)->name);
    }
  }
  pAVar65[-1]._1.declaringType =
       (Il2CppClass *)ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor;
  auVar75 = il2cpp_runtime_helper_022b2ca0();
  pSVar50 = auVar75._8_8_;
  pAVar65[-1]._1.declaringType = (Il2CppClass *)IVar55;
  pAVar65[-1]._1.castClass = (Il2CppClass *)plVar66;
  pAVar65[-1]._1.element_class = (Il2CppClass *)now_00.fields._8_8_;
  *(Il2CppRGCTXData *)&pAVar65[-1]._1.this_arg.bits = (void *)IVar49;
  pAVar65[-1]._1.this_arg.data = pAVar33;
  *(Il2CppRGCTXData *)&pAVar65[-1]._1.byval_arg.bits = (MethodInfo *)now_01.fields._8_8_;
  pAVar65[-1]._1.byval_arg.data = auVar75._0_8_;
  now_01.fields._8_8_ = IVar80;
  IVar30 = IVar40;
  if (g_data_057a8cec == '\0') {
    pAVar65[-1]._1.namespaze = (char *)0x34191ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pAVar65[-1]._1.namespaze = (char *)0x34191fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cec = '\x01';
  }
  lVar29 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar40.method)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    pAVar65[-1]._1.namespaze = (char *)0x341921e;
    lVar29 = il2cpp_runtime_helper_023009c0();
  }
  pAVar65[-1]._1.namespaze = (char *)0x3419226;
  pSVar48 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar29);
  method_03 = *(MethodInfo_315DA50 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(IVar40.method)->klass)->fields + 0xc0) + 8);
  pAVar65[-1]._1.namespaze = (char *)0x3419240;
  System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object____ctor(pSVar48,method_03);
  (IVar69.method)->return_type = (Il2CppType *)pSVar48;
  pAVar65[-1]._1.namespaze = (char *)0x3419250;
  il2cpp_runtime_helper_022b4080(&(IVar69.method)->return_type);
  now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
  pAVar65[-1]._1.namespaze = (char *)0x341925a;
  System_Object___ctor((Il2CppObject *)IVar69.method,(MethodInfo *)0x0);
  if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
    pAVar65[-1]._1.namespaze = (char *)0x3419439;
    uVar37 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pAVar65[-1]._1.namespaze = (char *)0x3419441;
    IVar31.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(uVar37);
    pAVar65[-1]._1.namespaze = (char *)0x3419450;
    pSVar51 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pAVar65[-1]._1.namespaze = (char *)0x341945d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)IVar31.method,pSVar51,(MethodInfo *)0x0);
    pAVar65[-1]._1.namespaze = (char *)0x3419468;
    now_00.fields._8_8_ = IVar40;
    IVar55.rgctxDataDummy = IVar31.rgctxDataDummy;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (IVar69.rgctxDataDummy != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&(IVar69.method)->invoker_method)->
      _buckets = (System_Int32_array *)IVar31;
      pAVar65[-1]._1.namespaze = (char *)0x3419283;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)
                         &(IVar69.method)->invoker_method,IVar31.rgctxDataDummy);
      if (pSVar50 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar40.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pAVar65[-1]._1.namespaze = (char *)0x34192a9;
          lVar29 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar29 + 0xe4) == 0) {
          pAVar65[-1]._1.namespaze = (char *)0x34192ba;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar40.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pAVar65[-1]._1.namespaze = (char *)0x34192da;
          lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
        }
        pSVar50 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   (*(long *)(lVar29 + 0xb8) + 8);
        if (pSVar50 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar40.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pAVar65[-1]._1.namespaze = (char *)0x341930b;
            lVar29 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar29 + 0xe4) == 0) {
            pAVar65[-1]._1.namespaze = (char *)0x341931c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar40.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pAVar65[-1]._1.namespaze = (char *)0x341933c;
            il2cpp_runtime_helper_023009c0(lVar29);
          }
          pAVar65[-1]._1.namespaze = (char *)0x3419355;
          pSVar50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pAVar65[-1]._1.namespaze = (char *)0x3419374;
          System_Func_DateTimeOffset____ctor();
          lVar29 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar40.method)->klass)->fields + 0xc0);
          lVar36 = *(long *)(lVar29 + 0x28);
          if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
            pAVar65[-1]._1.namespaze = (char *)0x3419394;
            lVar36 = il2cpp_runtime_helper_023009c0(lVar36);
            lVar29 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar40.method)->klass)->fields + 0xc0);
          }
          *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(*(long *)(lVar36 + 0xb8) + 8)
               = pSVar50;
          lVar29 = *(long *)(lVar29 + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pAVar65[-1]._1.namespaze = (char *)0x34193bf;
            lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
          }
          lVar29 = *(long *)(lVar29 + 0xb8);
          pAVar65[-1]._1.namespaze = (char *)0x34193d2;
          il2cpp_runtime_helper_022b4080(lVar29 + 8,pSVar50);
        }
      }
      (IVar69.method)->name = (char *)pSVar50;
      pAVar65[-1]._1.namespaze = (char *)0x34193e2;
      il2cpp_runtime_helper_022b4080(&(IVar69.method)->name,pSVar50);
      if (IVar80.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pAVar65[-1]._1.namespaze = (char *)0x34193ff;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar80 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      (IVar69.method)->klass = (Il2CppClass *)IVar80;
      il2cpp_runtime_helper_022b4080(&(IVar69.method)->klass,IVar80.rgctxDataDummy);
      return;
    }
  }
  pAVar65[-1]._1.namespaze = "\x0f\x1f";
  auVar75 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-1]._1.namespaze = (char *)auVar75._0_8_;
  pIVar34 = (IVar55.method)->return_type;
  if (pIVar34 != (Il2CppType *)0x0) {
    lVar29 = *(long *)(*(long *)(*(long *)(auVar75._8_8_ + 0x20) + 0xc0) + 0x40);
    pAVar65[-1]._1.namespaze = pAVar65[-1]._1.namespaze;
    uVar37 = *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x108);
    pAVar65[-1]._1.name = (char *)0x325e8f8;
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___FindEntry
              (pIVar34,(ulong)now_00.fields._8_8_ & 0xff,uVar37);
    return;
  }
  pAVar65[-1]._1.name = (char *)0x3419498;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-1]._1.name = (char *)auVar75._0_8_;
  pAVar65[-1]._1.name = (char *)0x0;
  pvVar41 = *(void **)&pIVar34[2].bits;
  if (pvVar41 != (void *)0x0) {
    now_01.fields._8_8_ = *(Il2CppRGCTXData *)(*(long *)(*(long *)(auVar75._8_8_ + 0x20) + 0xc0) + 0x48);
    now_00.fields._8_8_ = now_00.fields._8_8_ & 0xff;
    pAVar65[-1]._1.gc_desc = (void *)0x34194cd;
    bVar28 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                       (pvVar41,now_00.fields._8_8_,&pAVar65[-1]._1.name);
    if ((char)bVar28 == '\0') {
      return;
    }
    if (pAVar65[-1]._1.name != (char *)0x0) {
      return;
    }
  }
  pAVar65[-1]._1.gc_desc = (void *)0x34194ec;
  uVar37 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-1]._1.gc_desc = (void *)uVar37;
  pSVar68 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)pvVar41 + 0x28);
  if (pSVar68 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___Clear
              (pSVar68,*(MethodInfo_315E880 **)
                        (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                             &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x60));
    return;
  }
  pAVar65[-1]._1.image = (void *)0x3419514;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-1]._1.image = auVar75._0_8_;
  IVar55 = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(pSVar68->fields)._freeCount;
  if (IVar55.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___Remove
              (IVar55.rgctxDataDummy,(ulong)now_00.fields._8_8_ & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar75._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pAVar65[-2].vtable._3_ToString.method = (MethodInfo *)0x3419548;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  IVar49 = auVar75._8_8_;
  pAVar65[-2].vtable._3_ToString.method = (MethodInfo *)pSVar48;
  pAVar65[-2].vtable._3_ToString.methodPtr = (Il2CppMethodPointer)IVar40;
  pAVar65[-2].vtable._2_GetHashCode.method = (MethodInfo *)IVar80;
  pAVar65[-2].vtable._2_GetHashCode.methodPtr = (Il2CppMethodPointer)IVar69;
  pAVar65[-2].vtable._1_Finalize.method = (MethodInfo *)pSVar50;
  pAVar65[-2].vtable._1_Finalize.methodPtr = (Il2CppMethodPointer)IVar31;
  pAVar65[-2].vtable._0_Equals.method = (MethodInfo *)auVar75._0_8_;
  uVar54 = (ulong)now_01.fields._8_8_ & 0xffffffff;
  IVar40.rgctxDataDummy = now_00.fields._8_8_ & 0xffffffff;
  pAVar65[-2].vtable._0_Equals.method = (MethodInfo *)0x0;
  lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar30.method)->klass)->fields + 0xc0) + 0x70);
  IVar80 = IVar30;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341958e;
    lVar29 = il2cpp_runtime_helper_023009c0();
  }
  pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419596;
  now_02.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar29);
  IVar69 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(IVar30.method)->klass)->fields + 0xc0) + 0x78))->method;
  pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34195b0;
  IVar31.rgctxDataDummy = now_02.fields._8_8_;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgChangelogService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)
             now_02.fields._8_8_,(MethodInfo_27BBA50 *)IVar69.method);
  if (now_02.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    (now_02.fields._8_8_)->invoker_method = (InvokerMethod)IVar55;
    pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34195cc;
    IVar69 = IVar55;
    il2cpp_runtime_helper_022b4080(&(now_02.fields._8_8_)->invoker_method);
    *(char *)&(now_02.fields._8_8_)->name = IVar40._0_1_;
    if (IVar49.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar31 = (Il2CppRGCTXData)(IVar55.method)->return_type;
    if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      now_01.fields._8_8_ =
           *(Il2CppRGCTXData *)
            (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar30.method)->klass)->fields + 0xc0) + 0x48);
      IVar69.rgctxDataDummy = now_00.fields._8_8_ & 0xff;
      pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419601;
      bVar28 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                         (IVar31.rgctxDataDummy,IVar69.rgctxDataDummy,&pAVar65[-2].vtable._0_Equals.method);
      if ((char)bVar28 == '\0') {
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar30.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419622;
          lVar29 = il2cpp_runtime_helper_023009c0();
        }
        pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341962a;
        IVar40.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar29);
        IVar69 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar30.method)->klass)->fields + 0xc0) + 0x88))->method;
        pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419647;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgChangelogService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar40.method,
                   (MethodInfo_31EFAA0 *)IVar69.method);
        pAVar65[-2].vtable._0_Equals.method = (MethodInfo *)IVar40;
        IVar31 = (Il2CppRGCTXData)(IVar55.method)->return_type;
        if (IVar31.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03419833;
        uVar37 = *(undefined8 *)
                  (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar30.method)->klass)->fields + 0xc0) + 0x90);
        IVar69._4_4_ = 0;
        IVar69._0_4_ = *(uint *)&(now_02.fields._8_8_)->name;
        pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419675;
        System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___set_Item
                  (IVar31.rgctxDataDummy,IVar69.rgctxDataDummy,IVar40.rgctxDataDummy,uVar37);
      }
      now_01.fields._8_8_ = (Il2CppRGCTXData)(IVar55.method)->name;
      if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar69 = (Il2CppRGCTXData)(now_01.fields._8_8_)->return_type;
        IVar31 = (Il2CppRGCTXData)((now_01.fields._8_8_)->field8_0x40).genericMethod;
        pcVar9 = (code *)(now_01.fields._8_8_)->name;
        pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341968d;
        auVar76 = (*pcVar9)();
        if ((char)uVar54 == '\0') {
          now_01.fields._8_8_ = (void *)(auVar76._8_8_ & 0xffffffff);
          IVar69 = (Il2CppRGCTXData)pAVar65[-2].vtable._0_Equals.method;
          method_12 = *(MethodInfo_331A460 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar30.method)->klass)->fields + 0xc0) + 0x98);
          pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34196b8;
          now_01.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar76._0_8_;
          IVar31 = IVar55;
          IVar80 = IVar49;
          bVar28 = ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)IVar55.method,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar69.method,
                              now_01,(System_Action_AottgQueryResult_TValue___o *)IVar49.method,
                              (MethodInfo_3319840 *)method_12);
          if ((char)bVar28 != '\0') {
            return;
          }
        }
        lVar29 = (long)pAVar65[-2].vtable._0_Equals.method;
        if (lVar29 != 0) {
          if (*(char *)(lVar29 + 0x38) == '\0') {
            pMVar18 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar30.method)->klass)->fields + 0xc0) + 200);
            pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419707;
            IVar69.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar18);
          }
          else {
            pIVar81 = *(Il2CppObject **)(lVar29 + 0x18);
            pMVar15 = *(MethodInfo_331B450 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(IVar30.method)->klass)->fields + 0xc0) + 0xa8);
            pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34196ee;
            IVar69.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar81,pMVar15);
          }
          pIVar34 = (IVar49.method)->return_type;
          IVar31 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(IVar49.klass)->_1)[8].method;
          pcVar9 = (code *)(IVar49.method)->name;
          pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419719;
          (*pcVar9)(IVar31.rgctxDataDummy,IVar69.rgctxDataDummy,pIVar34);
          lVar29 = (long)pAVar65[-2].vtable._0_Equals.method;
          if ((lVar29 != 0) &&
             (IVar31 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar29 + 0x10))->method,
             IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now_01.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(IVar30.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar31.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = (Il2CppArrayBounds *)(IVar31.method)->invoker_method;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar31.method)->name;
              IVar69 = IVar49;
              if (uVar4 < (uint)pIVar6[1].lower_bound) {
                now_01.fields._8_4_ = uVar4 + 1;
                now_01.fields._12_4_ = 0;
                *(uint *)&(IVar31.method)->name = now_01.fields._8_4_;
                IVar31.rgctxDataDummy = &pIVar6[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar6[2].length + (int)uVar4))->klass = (Il2CppClass *)IVar49;
                pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341977a;
                il2cpp_runtime_helper_022b4080();
                lVar29 = (long)pAVar65[-2].vtable._0_Equals.method;
              }
              else {
                pMVar19 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341979f;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar31.method,
                           (Il2CppObject *)IVar49.method,pMVar19);
                lVar29 = (long)pAVar65[-2].vtable._0_Equals.method;
              }
              if (lVar29 != 0) {
                if (*(char *)(lVar29 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)(lVar29 + 0x3a) = 1;
                pIVar6 = (Il2CppArrayBounds *)(IVar55.method)->invoker_method;
                uVar3 = *(undefined1 *)&(now_02.fields._8_8_)->name;
                IVar49._1_7_ = auVar75._9_7_;
                IVar49._0_1_ = uVar3;
                lVar29 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(IVar30.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
                  pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34197de;
                  lVar29 = il2cpp_runtime_helper_023009c0();
                }
                pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x34197e6;
                IVar55.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar29);
                now_01.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(IVar30.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341980d;
                IVar69.rgctxDataDummy = now_02.fields._8_8_;
                IVar31.rgctxDataDummy = IVar55.rgctxDataDummy;
                System_Action_object____ctor();
                IVar40.rgctxDataDummy = (Il2CppObject *)0x0;
                if (pIVar6 != (Il2CppArrayBounds *)0x0) {
                  uVar37 = *(undefined8 *)&pIVar6[2].lower_bound;
                  iVar20 = pIVar6[4].length;
                  pcVar9 = *(code **)&pIVar6[1].lower_bound;
                  pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419824;
                  (*pcVar9)(iVar20,uVar3,IVar55.rgctxDataDummy,uVar37);
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
  pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x3419838;
  il2cpp_runtime_helper_022b2c90();
  pAVar65[-2].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)IVar40;
  *(Il2CppRGCTXData *)&pAVar65[-2]._2.naturalAligment = (MethodInfo *)IVar55;
  *(Il2CppRGCTXData *)&pAVar65[-2]._2.interfaces_count = (MethodInfo *)IVar30;
  pAVar65[-2]._2.field_count = (short)uVar54;
  pAVar65[-2]._2.event_count = (short)(uVar54 >> 0x10);
  pAVar65[-2]._2.nested_type_count = (short)(uVar54 >> 0x20);
  pAVar65[-2]._2.vtable_count = (short)(uVar54 >> 0x30);
  *(Il2CppRGCTXData *)&pAVar65[-2]._2.token = (Il2CppClass *)IVar49;
  *(Il2CppRGCTXData *)&pAVar65[-2]._2.thread_static_fields_offset = (MethodInfo *)now_02.fields._8_8_;
  *(MethodInfo_331A460 **)&pAVar65[-2]._2.element_size = method_12;
  *(Il2CppRGCTXData *)&pAVar65[-2]._2.static_fields_size = IVar80;
  IVar55.rgctxDataDummy = now_01.fields._8_8_ & 0xffffffff;
  now_00.fields._8_8_ = IVar69;
  plVar66 = (long *)IVar31;
  if (g_data_057a8ced == '\0') {
    *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419879;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419885;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419891;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar66 = &TypeInfo_TimeSpan;
    *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x341989d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8ced = '\x01';
  }
  pAVar65[-2]._2.cctor_thread = 0;
  pAVar65[-2]._2.genericContainerHandle = (void *)0x0;
  IVar49.rgctxDataDummy = IVar55.rgctxDataDummy;
  if (IVar69.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar69.method)->field7_0x38 == '\0') {
label_03419969:
      if (*(char *)((long)&(IVar69.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar31.method)->klass)->fields;
      if (lVar29 != 0) {
        cVar27 = *(char *)(lVar29 + 0x18);
        pvVar41 = *(void **)(lVar29 + 0x20);
        *(char *)&pAVar65[-2]._2.cctor_thread = cVar27;
        pAVar65[-2]._2.genericContainerHandle = pvVar41;
        if (cVar27 == '\0') {
          return;
        }
        IVar40 = (Il2CppRGCTXData)(IVar69.method)->return_type;
        Var25 = *(unkuint10 *)&(IVar69.method)->return_type;
        IVar30._2_6_ = 0;
        IVar30._0_2_ = *(ushort *)&(IVar69.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x34199b9;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar80.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x34199cd;
        left_06.fields._8_8_ = IVar55.rgctxDataDummy;
        left_06.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_10.rgctxDataDummy;
        right_06.fields._10_6_ = 0;
        right_06.fields._0_10_ = Var25;
        now_01.fields._8_8_ = IVar30;
        plVar66 = (long *)extraout_RDX_10;
        IVar49 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_06,right_06,(MethodInfo *)0x0);
        lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar31.method)->klass)->fields;
        now_00.fields._8_8_ = IVar55;
        if (lVar29 != 0) {
          pvVar41 = *(void **)(lVar29 + 0x20);
          *(undefined1 *)&pAVar65[-2]._2.cctor_thread = *(undefined1 *)(lVar29 + 0x18);
          pAVar65[-2]._2.genericContainerHandle = pvVar41;
          *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x34199ff;
          __this_05.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_05.fields._0_8_ = &pAVar65[-2]._2.cctor_thread;
          IVar30 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_05,method_10);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419a1a;
            il2cpp_runtime_helper_02337ed0();
          }
          IVar40.rgctxDataDummy = (Il2CppObject *)0x0;
          *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419a29;
          bVar28 = System_TimeSpan__op_LessThan
                             ((System_TimeSpan_o)IVar49,(System_TimeSpan_o)IVar30,(MethodInfo *)0x0);
          if ((char)bVar28 == '\0') {
            return;
          }
          plVar66 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar69.method)->klass)->fields;
          pMVar22 = *(MethodInfo_331B520 **)
                     (*(long *)(*(long *)(*(long *)&pAVar65[-2]._2.element_size + 0x20) + 0xc0) + 0x108);
          now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
          *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419a52;
          pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar66,1,pMVar22);
          lVar36._0_4_ = pAVar65[-2]._2.static_fields_size;
          lVar36._4_4_ = pAVar65[-2]._2.thread_static_fields_size;
          now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (lVar36 != 0) {
label_03419a5c:
            uVar37 = *(undefined8 *)(lVar36 + 0x28);
            uVar11 = *(undefined8 *)(lVar36 + 0x40);
            pcVar9 = *(code **)(lVar36 + 0x18);
            *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419a6a;
            (*pcVar9)(uVar11,pAVar32,uVar37);
            return;
          }
        }
      }
    }
    else {
      IVar40 = (Il2CppRGCTXData)(IVar69.method)->return_type;
      Var25 = *(unkuint10 *)&(IVar69.method)->return_type;
      now_01.fields._10_6_ = 0;
      now_01.fields._offsetMinutes = *(ushort *)&(IVar69.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x34198df;
        il2cpp_runtime_helper_02337ed0();
      }
      IVar80.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x34198f3;
      left_05.fields._8_8_ = IVar55.rgctxDataDummy;
      left_05.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_10.rgctxDataDummy;
      right_05.fields._10_6_ = 0;
      right_05.fields._0_10_ = Var25;
      now_00.fields._8_8_ = IVar55.rgctxDataDummy;
      plVar66 = (long *)extraout_RDX_10;
      IVar30 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_05,right_05,(MethodInfo *)0x0);
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar31.method)->klass)->fields;
      if (lVar29 != 0) {
        IVar40 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar29 + 0x10))->rgctxDataDummy;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419920;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x341992d;
        now_00.fields._8_8_ = IVar40;
        plVar66 = (long *)IVar30;
        bVar28 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)IVar30,(System_TimeSpan_o)IVar40,(MethodInfo *)0x0);
        if ((char)bVar28 == '\0') goto label_03419969;
        plVar66 = (long *)(IVar69.method)->name;
        pMVar16 = *(MethodInfo_331B380 **)
                   (*(long *)(*(long *)(*(long *)&pAVar65[-2]._2.element_size + 0x20) + 0xc0) + 0x100);
        now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
        *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419956;
        pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar66,1,pMVar16);
        lVar36._0_4_ = pAVar65[-2]._2.static_fields_size;
        lVar36._4_4_ = pAVar65[-2]._2.thread_static_fields_size;
        if (lVar36 != 0) goto label_03419a5c;
        now_01.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  *(undefined8 *)&pAVar65[-2]._2.cctor_finished = 0x3419a87;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppRGCTXData *)&pAVar65[-2]._2.cctor_finished = (void *)IVar40;
  *(Il2CppRGCTXData *)&pAVar65[-2]._2.initializationExceptionGCHandle = (MethodInfo *)extraout_RDX_10;
  pAVar65[-2]._2.unity_user_data = (void *)IVar30;
  pAVar65[-2]._2.typeHierarchy = (Il2CppClass **)IVar69;
  pvVar41 = now_00.fields._8_8_ & 0xffffffff;
  IVar40 = now_01.fields._8_8_;
  IVar55 = now_00.fields._8_8_;
  if (g_data_057a8cee == '\0') {
    pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419aba;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cee = '\x01';
  }
  pAVar65[-2].static_fields = (void *)0x0;
  IVar69 = (Il2CppRGCTXData)((MethodInfo *)plVar66)->return_type;
  pAVar33 = extraout_RDX_11;
  if (IVar69.rgctxDataDummy == (System_Collections_Generic_List_object__o *)0x0) {
label_03419dcd:
    pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419dd2;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    IVar40 = *(Il2CppRGCTXData *)
              (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                   &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x48);
    IVar55.rgctxDataDummy = now_00.fields._8_8_ & 0xff;
    pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419af4;
    bVar28 = System_Collections_Generic_Dictionary_AottgChangelogService_UnitKey__object___TryGetValue
                       (IVar69.rgctxDataDummy,IVar55.rgctxDataDummy,&pAVar65[-2].static_fields);
    if ((char)bVar28 == '\0') {
      return;
    }
    if (pAVar65[-2].static_fields == (void *)0x0) goto label_03419dcd;
    *(undefined1 *)((long)pAVar65[-2].static_fields + 0x3a) = 0;
    if (extraout_RDX_11 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      IVar55 = (Il2CppRGCTXData)
               ((Il2CppRGCTXData *)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x118))->method;
      pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419b34;
      IVar69 = "unknown_error";
      pAVar33 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((System_String_o *)"unknown_error".method,(MethodInfo_331AB10 *)IVar55.method);
      if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_03419dcd;
    }
    IVar69 = (Il2CppRGCTXData)pAVar65[-2].static_fields;
    if (IVar69.rgctxDataDummy == (System_Collections_Generic_List_object__o *)0x0) goto label_03419dcd;
    if ((char)(pAVar33->fields)._Success_k__BackingField != '\0') {
      *(undefined2 *)&(IVar69.method)->field7_0x38 = 1;
      IVar55 = (Il2CppRGCTXData)(pAVar33->fields)._Value_k__BackingField;
      (IVar69.method)->name = (char *)IVar55;
      pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419b6f;
      il2cpp_runtime_helper_022b4080(&(IVar69.method)->name);
      pvVar45 = pAVar65[-2].static_fields;
      IVar69.rgctxDataDummy = (System_Collections_Generic_List_object__o *)0x0;
      if (pvVar45 != (void *)0x0) {
        *(undefined8 *)((long)pvVar45 + 0x20) = 0;
        IVar69.rgctxDataDummy = pvVar45 + 0x20;
        IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
        pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419b90;
        il2cpp_runtime_helper_022b4080();
        IVar40 = (Il2CppRGCTXData)((MethodInfo *)plVar66)->name;
        if (IVar40.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
          pAVar33 = pAVar65[-2].static_fields;
          IVar55 = (Il2CppRGCTXData)(IVar40.method)->return_type;
          IVar69 = *(Il2CppRGCTXData *)&(IVar40.method)->field8_0x40;
          pcVar9 = (code *)(IVar40.method)->name;
          pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419bad;
          Var77 = (*pcVar9)();
          if (pAVar33 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
            *(unkbyte10 *)(pAVar33 + 1) = Var77;
            *(undefined2 *)((long)&pAVar33[1].monitor + 6) =
                 *(undefined2 *)((long)&pAVar65[-2].rgctx_data + 6);
            *(undefined4 *)((long)&pAVar33[1].monitor + 2) =
                 *(undefined4 *)((long)&pAVar65[-2].rgctx_data + 2);
            if (pAVar65[-2].static_fields != (void *)0x0) {
              IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pAVar65[-2].static_fields + 0x18))->method;
              pMVar16 = *(MethodInfo_331B380 **)
                         (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                              &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
              IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
              pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419bf9;
              plVar66 = (long *)ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                          ((Il2CppObject *)IVar69.method,0,pMVar16);
              pvVar45 = pAVar65[-2].static_fields;
              goto joined_r0x03419c04;
            }
          }
        }
      }
      goto label_03419dcd;
    }
    if (*(char *)&(IVar69.method)->field7_0x38 != '\0') {
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &((MethodInfo *)plVar66)->klass)->fields;
      if (lVar29 != 0) {
        if (*(char *)(lVar29 + 0x28) == '\0') goto label_03419d4a;
        IVar55 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
        (IVar69.method)->klass = (Il2CppClass *)IVar55;
        IVar69.rgctxDataDummy = &(IVar69.method)->klass;
        pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d07;
        il2cpp_runtime_helper_022b4080();
        if (pAVar65[-2].static_fields != (void *)0x0) {
          IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pAVar65[-2].static_fields + 0x18))->method;
          IVar55 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
          pMVar21 = *(MethodInfo_331B660 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
          pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d34;
          plVar66 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                      ((Il2CppObject *)IVar69.method,(System_String_o *)IVar55.method,pMVar21)
          ;
          pvVar45 = pAVar65[-2].static_fields;
joined_r0x03419c04:
          if (pvVar45 != (void *)0x0) goto label_03419c0a;
        }
      }
      goto label_03419dcd;
    }
label_03419d4a:
    *(undefined2 *)&(IVar69.method)->field7_0x38 = 0x100;
    (IVar69.method)->name = (char *)0x0;
    IVar55 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    (IVar69.method)->klass = (Il2CppClass *)IVar55;
    IVar69.rgctxDataDummy = &(IVar69.method)->klass;
    pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d69;
    il2cpp_runtime_helper_022b4080();
    IVar40 = (Il2CppRGCTXData)((MethodInfo *)plVar66)->name;
    if (IVar40.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03419dcd;
    pvVar41 = pAVar65[-2].static_fields;
    IVar55 = (Il2CppRGCTXData)(IVar40.method)->return_type;
    IVar69 = *(Il2CppRGCTXData *)&(IVar40.method)->field8_0x40;
    pcVar9 = (code *)(IVar40.method)->name;
    pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419d82;
    Var77 = (*pcVar9)();
    if (pvVar41 == (void *)0x0) goto label_03419dcd;
    *(unkbyte10 *)((long)pvVar41 + 0x28) = Var77;
    *(undefined4 *)((long)pvVar41 + 0x32) = *(undefined4 *)((long)&pAVar65[-2].rgctx_data + 2);
    *(undefined2 *)((long)pvVar41 + 0x36) = *(undefined2 *)((long)&pAVar65[-2].rgctx_data + 6);
    IVar69 = (Il2CppRGCTXData)(pAVar33->fields)._Error_k__BackingField;
    pMVar22 = *(MethodInfo_331B520 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
    IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419dbc;
    plVar66 = (long *)ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                ((System_String_o *)IVar69.method,0,pMVar22);
    pvVar45 = pAVar65[-2].static_fields;
    if (pvVar45 == (void *)0x0) goto label_03419dcd;
label_03419c0a:
    IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar45 + 0x10))->method;
    if (IVar69.rgctxDataDummy == (System_Collections_Generic_List_object__o *)0x0) goto label_03419dcd;
    IVar55 = (Il2CppRGCTXData)
             ((Il2CppRGCTXData *)
             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                  &(now_01.fields._8_8_)->klass)->fields + 0xc0) + 0x148))->method;
    pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419c2e;
    now_01.fields._8_8_ =
         (MethodInfo *)
         System_Collections_Generic_List_object___ToArray
                   ((System_Collections_Generic_List_object__o *)IVar69.method,
                    (MethodInfo_362E340 *)IVar55.method);
    if ((pAVar65[-2].static_fields == (void *)0x0) ||
       (lVar29 = *(long *)((long)pAVar65[-2].static_fields + 0x10), lVar29 == 0)) goto label_03419dcd;
    *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
    iVar5 = *(int32_t *)(lVar29 + 0x18);
    *(undefined4 *)(lVar29 + 0x18) = 0;
    if (0 < iVar5) {
      IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar29 + 0x10))->method;
      IVar55.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      IVar40.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
      pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419c6b;
      System_Array__Clear((System_Array_o *)IVar69.method,0,iVar5,(MethodInfo *)0x0);
    }
    if (now_01.fields._8_8_ == (Il2CppRGCTXData *)0x0) goto label_03419dcd;
    if ((int)(now_01.fields._8_8_)->name < 1) {
      return;
    }
    pvVar41 = (void *)0x0;
    pAVar33 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0;
    pvVar45 = pvVar41;
    if (((ulong)(now_01.fields._8_8_)->name & 0xffffffff) != 0) {
      do {
        pvVar41 = *(void **)((long)now_01.fields._8_8_ + (long)pAVar33 * 8 + 0x20);
        if (pvVar41 != (void *)0x0) {
          if (pvVar41 == (void *)0x0) goto label_03419dcd;
          uVar37 = *(undefined8 *)((long)pvVar41 + 0x28);
          IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar41 + 0x40))->method;
          pcVar9 = *(code **)((long)pvVar41 + 0x18);
          pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419cd0;
          IVar55 = (Il2CppRGCTXData)plVar66;
          (*pcVar9)(IVar69.rgctxDataDummy,plVar66,uVar37);
          pvVar45 = pvVar41;
        }
        pvVar41 = pvVar45;
        pAVar33 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)((long)&pAVar33->klass + 1);
        IVar40 = (Il2CppRGCTXData)(long)(int)*(uint *)&(now_01.fields._8_8_)->name;
        if ((long)IVar40.rgctxDataDummy <= (long)pAVar33) {
          return;
        }
        pvVar45 = pvVar41;
      } while (pAVar33 < (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)
                         (ulong)*(uint *)&(now_01.fields._8_8_)->name);
    }
  }
  pAVar65[-2]._1.implementedInterfaces = (Il2CppClass **)0x3419dd7;
  auVar75 = il2cpp_runtime_helper_022b2ca0();
  pcVar35 = auVar75._8_8_;
  pAVar65[-2]._1.implementedInterfaces = pvVar41;
  pAVar65[-2]._1.nestedTypes = (Il2CppClass **)plVar66;
  pAVar65[-2]._1.methods = (void *)now_01.fields._8_8_;
  pAVar65[-2]._1.properties = (void *)IVar49;
  pAVar65[-2]._1.events = (void *)IVar31;
  pAVar65[-2]._1.fields = pAVar33;
  pAVar65[-2]._1.klass = (Il2CppClass *)auVar75._0_8_;
  now_02.fields._8_8_ = IVar40;
  t1_00 = IVar80;
  if (g_data_057a8cef == '\0') {
    pAVar65[-2]._1.interopData = (void *)0x3419e0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pAVar65[-2]._1.interopData = (void *)0x3419e1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    g_data_057a8cef = '\x01';
  }
  lVar29 = **(long **)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(IVar80.method)->klass)->fields + 0xc0);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    pAVar65[-2]._1.interopData = (void *)0x3419e3e;
    lVar29 = il2cpp_runtime_helper_023009c0();
  }
  pAVar65[-2]._1.interopData = (void *)0x3419e46;
  pSVar48 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(lVar29);
  method_04 = *(MethodInfo_3161460 **)
               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                    &(IVar80.method)->klass)->fields + 0xc0) + 8);
  pAVar65[-2]._1.interopData = (void *)0x3419e60;
  System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object____ctor(pSVar48,method_04);
  (IVar69.method)->return_type = (Il2CppType *)pSVar48;
  pAVar65[-2]._1.interopData = (void *)0x3419e70;
  il2cpp_runtime_helper_022b4080(&(IVar69.method)->return_type);
  now_00.fields._8_8_ = (Il2CppRGCTXData *)0x0;
  pAVar65[-2]._1.interopData = (void *)0x3419e7a;
  System_Object___ctor((Il2CppObject *)IVar69.method,(MethodInfo *)0x0);
  if (IVar55.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
    pAVar65[-2]._1.interopData = (void *)0x341a059;
    uVar37 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pAVar65[-2]._1.interopData = (void *)0x341a061;
    IVar55.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(uVar37);
    pAVar65[-2]._1.interopData = (void *)0x341a070;
    pSVar51 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    pAVar65[-2]._1.interopData = (void *)0x341a07d;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)IVar55.method,pSVar51,(MethodInfo *)0x0);
    pAVar65[-2]._1.interopData = (void *)0x341a088;
    now_00.fields._8_8_ = IVar80;
    IVar31.rgctxDataDummy = IVar55.rgctxDataDummy;
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    IVar31.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (IVar69.rgctxDataDummy != (System_Collections_Generic_List_object__o *)0x0) {
      ((System_Collections_Generic_List_object__Fields *)&(IVar69.method)->invoker_method)->_items =
           (System_Object_array *)IVar55;
      pAVar65[-2]._1.interopData = (void *)0x3419ea3;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_List_object__Fields *)&(IVar69.method)->invoker_method,
                         IVar55.rgctxDataDummy);
      if (pcVar35 == (char *)0x0) {
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar80.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pAVar65[-2]._1.interopData = (void *)0x3419ec9;
          lVar29 = il2cpp_runtime_helper_023009c0();
        }
        if (*(int *)(lVar29 + 0xe4) == 0) {
          pAVar65[-2]._1.interopData = (void *)0x3419eda;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(IVar80.method)->klass)->fields + 0xc0) + 0x28);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pAVar65[-2]._1.interopData = (void *)0x3419efa;
          lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
        }
        pcVar35 = *(char **)(*(long *)(lVar29 + 0xb8) + 8);
        if (pcVar35 == (char *)0x0) {
          lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar80.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pAVar65[-2]._1.interopData = (void *)0x3419f2b;
            lVar29 = il2cpp_runtime_helper_023009c0();
          }
          if (*(int *)(lVar29 + 0xe4) == 0) {
            pAVar65[-2]._1.interopData = (void *)0x3419f3c;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                   *)&(IVar80.method)->klass)->fields + 0xc0) + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pAVar65[-2]._1.interopData = (void *)0x3419f5c;
            il2cpp_runtime_helper_023009c0(lVar29);
          }
          pAVar65[-2]._1.interopData = (void *)0x3419f75;
          pcVar35 = (char *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
          pAVar65[-2]._1.interopData = (void *)0x3419f94;
          System_Func_DateTimeOffset____ctor();
          lVar29 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(IVar80.method)->klass)->fields + 0xc0);
          lVar36 = *(long *)(lVar29 + 0x28);
          if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
            pAVar65[-2]._1.interopData = (void *)0x3419fb4;
            lVar36 = il2cpp_runtime_helper_023009c0(lVar36);
            lVar29 = *(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(IVar80.method)->klass)->fields + 0xc0);
          }
          *(char **)(*(long *)(lVar36 + 0xb8) + 8) = pcVar35;
          lVar29 = *(long *)(lVar29 + 0x28);
          if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
            pAVar65[-2]._1.interopData = (void *)0x3419fdf;
            lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
          }
          lVar29 = *(long *)(lVar29 + 0xb8);
          pAVar65[-2]._1.interopData = (void *)0x3419ff2;
          il2cpp_runtime_helper_022b4080(lVar29 + 8,pcVar35);
        }
      }
      (IVar69.method)->name = pcVar35;
      pAVar65[-2]._1.interopData = (void *)0x341a002;
      il2cpp_runtime_helper_022b4080(&(IVar69.method)->name,pcVar35);
      if (IVar40.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
        if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
          pAVar65[-2]._1.interopData = (void *)0x341a01f;
          il2cpp_runtime_helper_02337ed0();
        }
        IVar40 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_AottgQueryPolicy + 0xb8))->rgctxDataDummy;
      }
      (IVar69.method)->klass = (Il2CppClass *)IVar40;
      il2cpp_runtime_helper_022b4080(&(IVar69.method)->klass,IVar40.rgctxDataDummy);
      return;
    }
  }
  pAVar65[-2]._1.interopData = (void *)0x341a08d;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-2]._1.interopData = (void *)auVar75._0_8_;
  pIVar34 = (IVar31.method)->return_type;
  if (pIVar34 != (Il2CppType *)0x0) {
    lVar29 = *(long *)(*(long *)(*(long *)(auVar75._8_8_ + 0x20) + 0xc0) + 0x40);
    pAVar65[-2]._1.interopData = pAVar65[-2]._1.interopData;
    uVar37 = *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x108);
    pAVar65[-2]._1.typeMetadataHandle = (void *)0x3262308;
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___FindEntry
              (pIVar34,(ulong)now_00.fields._8_8_ & 0xff,uVar37);
    return;
  }
  pAVar65[-2]._1.typeMetadataHandle = (void *)0x341a0b8;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-2]._1.typeMetadataHandle = (void *)auVar75._0_8_;
  pAVar65[-2]._1.typeMetadataHandle = (void *)0x0;
  pvVar41 = *(void **)&pIVar34[2].bits;
  if (pvVar41 != (void *)0x0) {
    now_02.fields._8_8_ = *(Il2CppRGCTXData *)(*(long *)(*(long *)(auVar75._8_8_ + 0x20) + 0xc0) + 0x48);
    now_00.fields._8_8_ = now_00.fields._8_8_ & 0xff;
    pAVar65[-2]._1.generic_class = (void *)0x341a0ed;
    bVar28 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pvVar41,now_00.fields._8_8_,&pAVar65[-2]._1.typeMetadataHandle);
    if ((char)bVar28 == '\0') {
      return;
    }
    if (pAVar65[-2]._1.typeMetadataHandle != (void *)0x0) {
      return;
    }
  }
  pAVar65[-2]._1.generic_class = (void *)0x341a10c;
  uVar37 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-2]._1.generic_class = (void *)uVar37;
  pSVar68 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)pvVar41 + 0x28);
  if (pSVar68 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Clear
              (pSVar68,*(MethodInfo_3162290 **)
                        (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                             &(now_00.fields._8_8_)->klass)->fields + 0xc0) + 0x60));
    return;
  }
  pAVar65[-2]._1.parent = (Il2CppClass *)0x341a134;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  pAVar65[-2]._1.parent = (Il2CppClass *)auVar75._0_8_;
  IVar31 = (Il2CppRGCTXData)*(Il2CppRGCTXData *)&(pSVar68->fields)._freeCount;
  if (IVar31.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___Remove
              (IVar31.rgctxDataDummy,(ulong)now_00.fields._8_8_ & 0xff,
               *(undefined8 *)(*(long *)(*(long *)(auVar75._8_8_ + 0x20) + 0xc0) + 0x68));
    return;
  }
  pAVar65[-2]._1.declaringType = (Il2CppClass *)0x341a168;
  auVar75 = il2cpp_runtime_helper_022b2c90();
  onResult_00 = auVar75._8_8_;
  pAVar65[-2]._1.declaringType = (Il2CppClass *)pSVar48;
  pAVar65[-2]._1.castClass = (Il2CppClass *)IVar80;
  pAVar65[-2]._1.element_class = (Il2CppClass *)IVar40;
  *(Il2CppRGCTXData *)&pAVar65[-2]._1.this_arg.bits = (MethodInfo *)IVar69;
  pAVar65[-2]._1.this_arg.data = pcVar35;
  *(Il2CppRGCTXData *)&pAVar65[-2]._1.byval_arg.bits = (void *)IVar55;
  pAVar65[-2]._1.byval_arg.data = auVar75._0_8_;
  pvVar41 = now_02.fields._8_8_ & 0xffffffff;
  IVar40.rgctxDataDummy = now_00.fields._8_8_ & 0xffffffff;
  pAVar65[-2]._1.byval_arg.data = (void *)0x0;
  lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                         &(t1_00.method)->klass)->fields + 0xc0) + 0x70);
  IVar55 = t1_00;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    pAVar65[-2]._1.namespaze = (char *)0x341a1ae;
    lVar29 = il2cpp_runtime_helper_023009c0();
  }
  pAVar65[-2]._1.namespaze = (char *)0x341a1b6;
  now_01.fields._8_8_ = (void *)il2cpp_runtime_helper_023052d0(lVar29);
  IVar80 = (Il2CppRGCTXData)
           ((Il2CppRGCTXData *)
           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                &(t1_00.method)->klass)->fields + 0xc0) + 0x78))->method;
  pAVar65[-2]._1.namespaze = (char *)0x341a1d0;
  IVar69.rgctxDataDummy = now_01.fields._8_8_;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)
             now_01.fields._8_8_,(MethodInfo_27BBA90 *)IVar80.method);
  if (now_01.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
    (now_01.fields._8_8_)->invoker_method = (InvokerMethod)IVar31;
    pAVar65[-2]._1.namespaze = (char *)0x341a1ec;
    IVar80 = IVar31;
    il2cpp_runtime_helper_022b4080(&(now_01.fields._8_8_)->invoker_method);
    *(char *)&(now_01.fields._8_8_)->name = IVar40._0_1_;
    if (onResult_00.rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      return;
    }
    IVar69 = (Il2CppRGCTXData)(IVar31.method)->return_type;
    if (IVar69.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      now_02.fields._8_8_ =
           *(Il2CppRGCTXData *)
            (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                 &(t1_00.method)->klass)->fields + 0xc0) + 0x48);
      IVar80.rgctxDataDummy = now_00.fields._8_8_ & 0xff;
      pAVar65[-2]._1.namespaze = (char *)0x341a221;
      bVar28 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (IVar69.rgctxDataDummy,IVar80.rgctxDataDummy,&pAVar65[-2]._1.byval_arg);
      if ((char)bVar28 == '\0') {
        lVar29 = *(long *)(*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *
                                                )&(t1_00.method)->klass)->fields + 0xc0) + 0x58);
        if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
          pAVar65[-2]._1.namespaze = (char *)0x341a242;
          lVar29 = il2cpp_runtime_helper_023009c0();
        }
        pAVar65[-2]._1.namespaze = (char *)0x341a24a;
        IVar40.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar29);
        IVar80 = (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(t1_00.method)->klass)->fields + 0xc0) + 0x88))->method;
        pAVar65[-2]._1.namespaze = (char *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar40.method,
                   (MethodInfo_31EFB10 *)IVar80.method);
        pAVar65[-2]._1.byval_arg.data = (void *)IVar40;
        IVar69 = (Il2CppRGCTXData)(IVar31.method)->return_type;
        if (IVar69.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_0341a453;
        uVar37 = *(undefined8 *)
                  (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                       &(t1_00.method)->klass)->fields + 0xc0) + 0x90);
        IVar80._4_4_ = 0;
        IVar80._0_4_ = *(uint *)&(now_01.fields._8_8_)->name;
        pAVar65[-2]._1.namespaze = (char *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (IVar69.rgctxDataDummy,IVar80.rgctxDataDummy,IVar40.rgctxDataDummy,uVar37);
      }
      now_02.fields._8_8_ = (Il2CppRGCTXData)(IVar31.method)->name;
      if (now_02.fields._8_8_ != (Il2CppRGCTXData *)0x0) {
        IVar80 = (Il2CppRGCTXData)(now_02.fields._8_8_)->return_type;
        IVar69 = (Il2CppRGCTXData)((now_02.fields._8_8_)->field8_0x40).genericMethod;
        pcVar9 = (code *)(now_02.fields._8_8_)->name;
        pAVar65[-2]._1.namespaze = (char *)0x341a2ad;
        auVar76 = (*pcVar9)();
        if ((char)pvVar41 == '\0') {
          now_02.fields._8_8_ = (void *)(auVar76._8_8_ & 0xffffffff);
          IVar80 = (Il2CppRGCTXData)pAVar65[-2]._1.byval_arg.data;
          method_12 = *(MethodInfo_331A460 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(t1_00.method)->klass)->fields + 0xc0) + 0x98);
          pAVar65[-2]._1.namespaze = (char *)0x341a2d8;
          now_02.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar76._0_8_;
          IVar69 = IVar31;
          IVar55 = onResult_00;
          bVar28 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)IVar31.method,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)IVar80.method,
                              now_02,(System_Action_AottgQueryResult_TValue___o *)onResult_00.method,method_12
                             );
          if ((char)bVar28 != '\0') {
            return;
          }
        }
        pvVar45 = pAVar65[-2]._1.byval_arg.data;
        if (pvVar45 != (void *)0x0) {
          if (*(char *)((long)pvVar45 + 0x38) == '\0') {
            pMVar18 = *(MethodInfo_331B2F0 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(t1_00.method)->klass)->fields + 0xc0) + 200);
            pAVar65[-2]._1.namespaze = (char *)0x341a327;
            IVar80.method =
                 (MethodInfo *)ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(pMVar18);
          }
          else {
            pIVar81 = *(Il2CppObject **)((long)pvVar45 + 0x18);
            pMVar15 = *(MethodInfo_331B450 **)
                       (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                            &(t1_00.method)->klass)->fields + 0xc0) + 0xa8);
            pAVar65[-2]._1.namespaze = (char *)0x341a30e;
            IVar80.method =
                 (MethodInfo *)
                 ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing(pIVar81,pMVar15);
          }
          pIVar34 = (onResult_00.method)->return_type;
          IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)&(onResult_00.klass)->_1)[8].method;
          pcVar9 = (code *)(onResult_00.method)->name;
          pAVar65[-2]._1.namespaze = (char *)0x341a339;
          (*pcVar9)(IVar69.rgctxDataDummy,IVar80.rgctxDataDummy,pIVar34);
          pvVar45 = pAVar65[-2]._1.byval_arg.data;
          if ((pvVar45 != (void *)0x0) &&
             (IVar69 = (Il2CppRGCTXData)((Il2CppRGCTXData *)((long)pvVar45 + 0x10))->method,
             IVar69.rgctxDataDummy != (Il2CppRGCTXData *)0x0)) {
            now_02.fields._8_8_ =
                 (Il2CppRGCTXData)
                 ((Il2CppRGCTXData *)
                 (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                      &(t1_00.method)->klass)->fields + 0xc0) + 0xd8))->method;
            piVar1 = (int *)((long)&(IVar69.method)->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar6 = (Il2CppArrayBounds *)(IVar69.method)->invoker_method;
            if (pIVar6 != (Il2CppArrayBounds *)0x0) {
              uVar4 = *(uint *)&(IVar69.method)->name;
              IVar80 = onResult_00;
              if (uVar4 < (uint)pIVar6[1].lower_bound) {
                now_02.fields._8_4_ = uVar4 + 1;
                now_02.fields._12_4_ = 0;
                *(uint *)&(IVar69.method)->name = now_02.fields._8_4_;
                IVar69.rgctxDataDummy = &pIVar6[2].length + (int)uVar4;
                ((Il2CppRGCTXData *)(&pIVar6[2].length + (int)uVar4))->klass = (Il2CppClass *)onResult_00;
                pAVar65[-2]._1.namespaze = (char *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pvVar45 = pAVar65[-2]._1.byval_arg.data;
              }
              else {
                pMVar19 = *(MethodInfo_362C220 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x70);
                pAVar65[-2]._1.namespaze = (char *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)IVar69.method,
                           (Il2CppObject *)onResult_00.method,pMVar19);
                pvVar45 = pAVar65[-2]._1.byval_arg.data;
              }
              if (pvVar45 != (void *)0x0) {
                if (*(char *)((long)pvVar45 + 0x3a) != '\0') {
                  return;
                }
                *(undefined1 *)((long)pvVar45 + 0x3a) = 1;
                pIVar6 = (Il2CppArrayBounds *)(IVar31.method)->invoker_method;
                uVar3 = *(undefined1 *)&(now_01.fields._8_8_)->name;
                onResult_00._1_7_ = auVar75._9_7_;
                onResult_00._0_1_ = uVar3;
                lVar29 = *(long *)(*(long *)(*(long *)&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                       *)&(t1_00.method)->klass)->fields + 0xc0) + 0xe8);
                if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
                  pAVar65[-2]._1.namespaze = (char *)0x341a3fe;
                  lVar29 = il2cpp_runtime_helper_023009c0();
                }
                pAVar65[-2]._1.namespaze = (char *)0x341a406;
                IVar31.rgctxDataDummy = (void *)il2cpp_runtime_helper_023052d0(lVar29);
                now_02.fields._8_8_ =
                     (Il2CppRGCTXData)
                     ((Il2CppRGCTXData *)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(t1_00.method)->klass)->fields + 0xc0) + 0xf0))->rgctxDataDummy;
                pAVar65[-2]._1.namespaze = (char *)0x341a42d;
                IVar80.rgctxDataDummy = now_01.fields._8_8_;
                IVar69.rgctxDataDummy = IVar31.rgctxDataDummy;
                System_Action_object____ctor();
                IVar40.rgctxDataDummy = (Il2CppObject *)0x0;
                if (pIVar6 != (Il2CppArrayBounds *)0x0) {
                  uVar37 = *(undefined8 *)&pIVar6[2].lower_bound;
                  iVar20 = pIVar6[4].length;
                  pcVar9 = *(code **)&pIVar6[1].lower_bound;
                  pAVar65[-2]._1.namespaze = (char *)0x341a444;
                  (*pcVar9)(iVar20,uVar3,IVar31.rgctxDataDummy,uVar37);
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
  pAVar65[-2]._1.namespaze = (char *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pAVar65[-2]._1.namespaze = (char *)IVar40;
  pAVar65[-2]._1.name = (char *)IVar31;
  pAVar65[-2]._1.gc_desc = (void *)t1_00;
  pAVar65[-2]._1.image = pvVar41;
  pAVar65[-3].vtable._3_ToString.method = (MethodInfo *)onResult_00;
  pAVar65[-3].vtable._3_ToString.methodPtr = (Il2CppMethodPointer)now_01.fields._8_8_;
  pAVar65[-3].vtable._2_GetHashCode.methodPtr = (Il2CppMethodPointer)method_12;
  pAVar65[-3].vtable._2_GetHashCode.method = (MethodInfo *)IVar55;
  IVar55.rgctxDataDummy = now_02.fields._8_8_ & 0xffffffff;
  now_00.fields._8_8_ = IVar80;
  plVar66 = (long *)IVar69;
  if (g_data_057a8cf0 == '\0') {
    pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar66 = &TypeInfo_TimeSpan;
    pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  pAVar65[-3].vtable._0_Equals.method = (MethodInfo *)0x0;
  pAVar65[-3].vtable._1_Finalize.methodPtr = (Il2CppMethodPointer)0x0;
  if (IVar80.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
    if (*(char *)&(IVar80.method)->field7_0x38 == '\0') {
label_0341a589:
      if (*(char *)((long)&(IVar80.method)->field7_0x38 + 1) == '\0') {
        return;
      }
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar69.method)->klass)->fields;
      if (lVar29 != 0) {
        cVar27 = *(char *)(lVar29 + 0x18);
        pIVar67 = *(Il2CppMethodPointer *)(lVar29 + 0x20);
        *(char *)&pAVar65[-3].vtable._0_Equals.method = cVar27;
        pAVar65[-3].vtable._1_Finalize.methodPtr = pIVar67;
        if (cVar27 == '\0') {
          return;
        }
        IVar40 = (Il2CppRGCTXData)(IVar80.method)->return_type;
        Var25 = *(unkuint10 *)&(IVar80.method)->return_type;
        t1_00._2_6_ = 0;
        t1_00._0_2_ = *(ushort *)&(IVar80.method)->parameters;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a5ed;
        left_08.fields._8_8_ = IVar55.rgctxDataDummy;
        left_08.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_12.rgctxDataDummy;
        right_08.fields._10_6_ = 0;
        right_08.fields._0_10_ = Var25;
        now_02.fields._8_8_ = t1_00;
        plVar66 = (long *)extraout_RDX_12;
        t1_01 = System_DateTimeOffset__op_Subtraction(left_08,right_08,(MethodInfo *)0x0);
        lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                           &(IVar69.method)->klass)->fields;
        now_00.fields._8_8_ = IVar55;
        if (lVar29 != 0) {
          pIVar67 = *(Il2CppMethodPointer *)(lVar29 + 0x20);
          *(undefined1 *)&pAVar65[-3].vtable._0_Equals.method = *(undefined1 *)(lVar29 + 0x18);
          pAVar65[-3].vtable._1_Finalize.methodPtr = pIVar67;
          pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a61f;
          __this_06.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_06.fields._0_8_ = &pAVar65[-3].vtable._0_Equals.method;
          t1_00 = (Il2CppRGCTXData)System_Nullable_TimeSpan___get_Value(__this_06,method_11);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          IVar40.rgctxDataDummy = (Il2CppObject *)0x0;
          pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a649;
          bVar28 = System_TimeSpan__op_LessThan(t1_01,(System_TimeSpan_o)t1_00,(MethodInfo *)0x0);
          if ((char)bVar28 == '\0') {
            return;
          }
          plVar66 = *(long **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &(IVar80.method)->klass)->fields;
          pMVar22 = *(MethodInfo_331B520 **)
                     (*(long *)(*(long *)(pAVar65[-3].vtable._2_GetHashCode.methodPtr + 0x20) + 0xc0) + 0x108)
          ;
          now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
          pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a672;
          pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar66,1,pMVar22);
          pMVar57 = pAVar65[-3].vtable._2_GetHashCode.method;
          now_02.fields._8_8_ = (Il2CppRGCTXData *)0x0;
          if (pMVar57 != (MethodInfo *)0x0) {
label_0341a67c:
            pIVar34 = pMVar57->return_type;
            pvVar41 = (pMVar57->field8_0x40).genericMethod;
            pcVar9 = (code *)pMVar57->name;
            pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a68a;
            (*pcVar9)(pvVar41,pAVar32,pIVar34);
            return;
          }
        }
      }
    }
    else {
      IVar40 = (Il2CppRGCTXData)(IVar80.method)->return_type;
      Var25 = *(unkuint10 *)&(IVar80.method)->return_type;
      now_02.fields._10_6_ = 0;
      now_02.fields._offsetMinutes = *(ushort *)&(IVar80.method)->parameters;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a513;
      left_07.fields._8_8_ = IVar55.rgctxDataDummy;
      left_07.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)extraout_RDX_12.rgctxDataDummy;
      right_07.fields._10_6_ = 0;
      right_07.fields._0_10_ = Var25;
      now_00.fields._8_8_ = IVar55.rgctxDataDummy;
      plVar66 = (long *)extraout_RDX_12;
      t1_00 = (Il2CppRGCTXData)System_DateTimeOffset__op_Subtraction(left_07,right_07,(MethodInfo *)0x0);
      lVar29 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                         &(IVar69.method)->klass)->fields;
      if (lVar29 != 0) {
        IVar40 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(lVar29 + 0x10))->rgctxDataDummy;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a54d;
        now_00.fields._8_8_ = IVar40;
        plVar66 = (long *)t1_00;
        bVar28 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)t1_00,(System_TimeSpan_o)IVar40,(MethodInfo *)0x0);
        if ((char)bVar28 == '\0') goto label_0341a589;
        plVar66 = (long *)(IVar80.method)->name;
        pMVar16 = *(MethodInfo_331B380 **)
                   (*(long *)(*(long *)(pAVar65[-3].vtable._2_GetHashCode.methodPtr + 0x20) + 0xc0) + 0x100);
        now_00.fields._8_8_ = (Il2CppRGCTXData)0x1;
        pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a576;
        pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar66,1,pMVar16);
        pMVar57 = pAVar65[-3].vtable._2_GetHashCode.method;
        if (pMVar57 != (MethodInfo *)0x0) goto label_0341a67c;
        now_02.fields._8_8_ = (Il2CppRGCTXData *)0x0;
      }
    }
  }
  pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pAVar65[-3].vtable._0_Equals.methodPtr = (Il2CppMethodPointer)IVar40;
  *(Il2CppRGCTXData *)&pAVar65[-3]._2.naturalAligment = (MethodInfo *)extraout_RDX_12;
  *(Il2CppRGCTXData *)&pAVar65[-3]._2.interfaces_count = (MethodInfo *)t1_00;
  *(Il2CppRGCTXData *)&pAVar65[-3]._2.field_count = (MethodInfo *)IVar80;
  if (g_data_057a8cf1 == '\0') {
    pAVar65[-3]._2.element_size = 0x341a6da;
    pAVar65[-3]._2.native_size = 0;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pAVar65[-3]._2.thread_static_fields_offset = 0;
  pAVar65[-3]._2.flags = 0;
  pIVar34 = ((MethodInfo *)plVar66)->return_type;
  if (pIVar34 != (Il2CppType *)0x0) {
    pAVar65[-3]._2.element_size = 0x341a714;
    pAVar65[-3]._2.native_size = 0;
    bVar28 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pIVar34,(ulong)now_00.fields._8_8_ & 0xff,&pAVar65[-3]._2.thread_static_fields_offset)
    ;
    if ((char)bVar28 == '\0') {
      return;
    }
    lVar29 = *(long *)&pAVar65[-3]._2.thread_static_fields_offset;
    if (lVar29 != 0) {
      *(undefined1 *)(lVar29 + 0x3a) = 0;
      pAVar33 = extraout_RDX_13;
      if (extraout_RDX_13 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
        method_05 = *(MethodInfo_331AB10 **)
                     (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                          &(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x118);
        pAVar65[-3]._2.element_size = 0x341a754;
        pAVar65[-3]._2.native_size = 0;
        pAVar33 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            ((System_String_o *)"unknown_error".method,method_05);
        if (pAVar33 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) goto label_0341a9ed;
      }
      lVar29 = *(long *)&pAVar65[-3]._2.thread_static_fields_offset;
      if (lVar29 != 0) {
        if ((char)(pAVar33->fields)._Success_k__BackingField == '\0') {
          if (*(char *)(lVar29 + 0x38) == '\0') {
label_0341a96a:
            *(undefined2 *)(lVar29 + 0x38) = 0x100;
            *(undefined8 *)(lVar29 + 0x18) = 0;
            *(System_String_o **)(lVar29 + 0x20) = (pAVar33->fields)._Error_k__BackingField;
            pAVar65[-3]._2.element_size = 0x341a989;
            pAVar65[-3]._2.native_size = 0;
            il2cpp_runtime_helper_022b4080();
            if (((MethodInfo *)plVar66)->name != (char *)0x0) {
              lVar29 = *(long *)&pAVar65[-3]._2.thread_static_fields_offset;
              pcVar9 = *(code **)(((MethodInfo *)plVar66)->name + 0x18);
              pAVar65[-3]._2.element_size = 0x341a9a2;
              pAVar65[-3]._2.native_size = 0;
              Var77 = (*pcVar9)();
              if (lVar29 != 0) {
                *(unkbyte10 *)(lVar29 + 0x28) = Var77;
                *(undefined4 *)(lVar29 + 0x32) = *(undefined4 *)((long)&pAVar65[-3]._2.token + 2);
                *(uint16_t *)(lVar29 + 0x36) = pAVar65[-3]._2.property_count;
                pSVar51 = (pAVar33->fields)._Error_k__BackingField;
                pMVar22 = *(MethodInfo_331B520 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x108);
                pAVar65[-3]._2.element_size = 0x341a9dc;
                pAVar65[-3]._2.native_size = 0;
                pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache(pSVar51,0,pMVar22);
                lVar43._0_4_ = pAVar65[-3]._2.thread_static_fields_offset;
                lVar43._4_4_ = pAVar65[-3]._2.flags;
joined_r0x0341a95f:
                if ((lVar43 != 0) &&
                   (__this = *(System_Collections_Generic_List_object__o **)(lVar43 + 0x10),
                   __this != (System_Collections_Generic_List_object__o *)0x0)) {
                  method_06 = *(MethodInfo_362E340 **)
                               (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                      *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x148
                               );
                  pAVar65[-3]._2.element_size = 0x341a84e;
                  pAVar65[-3]._2.native_size = 0;
                  pSVar52 = System_Collections_Generic_List_object___ToArray(__this,method_06);
                  lVar29 = *(long *)&pAVar65[-3]._2.thread_static_fields_offset;
                  if ((lVar29 != 0) && (lVar29 = *(long *)(lVar29 + 0x10), lVar29 != 0)) {
                    *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
                    iVar5 = *(int32_t *)(lVar29 + 0x18);
                    *(undefined4 *)(lVar29 + 0x18) = 0;
                    if (0 < iVar5) {
                      array = *(System_Array_o **)(lVar29 + 0x10);
                      pAVar65[-3]._2.element_size = 0x341a88b;
                      pAVar65[-3]._2.native_size = 0;
                      System_Array__Clear(array,0,iVar5,(MethodInfo *)0x0);
                    }
                    if (pSVar52 != (System_Object_array *)0x0) {
                      if ((int)pSVar52->max_length < 1) {
                        return;
                      }
                      uVar54 = 0;
                      if ((pSVar52->max_length & 0xffffffff) != 0) {
                        do {
                          pIVar81 = pSVar52->m_Items[uVar54];
                          if (pIVar81 != (Il2CppObject *)0x0) {
                            if (pIVar81 == (Il2CppObject *)0x0) goto label_0341a9ed;
                            pvVar41 = pIVar81[2].monitor;
                            pIVar84 = pIVar81[4].klass;
                            pcVar9 = pIVar81[1].monitor;
                            pAVar65[-3]._2.element_size = 0x341a8f0;
                            pAVar65[-3]._2.native_size = 0;
                            (*pcVar9)(pIVar84,pAVar32,pvVar41);
                          }
                          uVar54 = uVar54 + 1;
                          uVar4 = (uint)pSVar52->max_length;
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
            lVar36 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                               &((MethodInfo *)plVar66)->klass)->fields;
            if (lVar36 != 0) {
              if (*(char *)(lVar36 + 0x28) == '\0') goto label_0341a96a;
              *(System_String_o **)(lVar29 + 0x20) = (pAVar33->fields)._Error_k__BackingField;
              pAVar65[-3]._2.element_size = 0x341a927;
              pAVar65[-3]._2.native_size = 0;
              il2cpp_runtime_helper_022b4080();
              lVar29 = *(long *)&pAVar65[-3]._2.thread_static_fields_offset;
              if (lVar29 != 0) {
                pIVar81 = *(Il2CppObject **)(lVar29 + 0x18);
                pSVar51 = (pAVar33->fields)._Error_k__BackingField;
                pMVar21 = *(MethodInfo_331B660 **)
                           (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                  *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x140);
                pAVar65[-3]._2.element_size = 0x341a954;
                pAVar65[-3]._2.native_size = 0;
                pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                    (pIVar81,pSVar51,pMVar21);
                lVar43._0_4_ = pAVar65[-3]._2.thread_static_fields_offset;
                lVar43._4_4_ = pAVar65[-3]._2.flags;
                goto joined_r0x0341a95f;
              }
            }
          }
        }
        else {
          *(undefined2 *)(lVar29 + 0x38) = 1;
          *(Il2CppObject **)(lVar29 + 0x18) = (pAVar33->fields)._Value_k__BackingField;
          pAVar65[-3]._2.element_size = 0x341a78f;
          pAVar65[-3]._2.native_size = 0;
          il2cpp_runtime_helper_022b4080(lVar29 + 0x18);
          lVar29 = *(long *)&pAVar65[-3]._2.thread_static_fields_offset;
          if (lVar29 != 0) {
            *(undefined8 *)(lVar29 + 0x20) = 0;
            pAVar65[-3]._2.element_size = 0x341a7b0;
            pAVar65[-3]._2.native_size = 0;
            il2cpp_runtime_helper_022b4080(lVar29 + 0x20,0);
            if (((MethodInfo *)plVar66)->name != (char *)0x0) {
              lVar29 = *(long *)&pAVar65[-3]._2.thread_static_fields_offset;
              pcVar9 = *(code **)(((MethodInfo *)plVar66)->name + 0x18);
              pAVar65[-3]._2.element_size = 0x341a7cd;
              pAVar65[-3]._2.native_size = 0;
              Var77 = (*pcVar9)();
              if (lVar29 != 0) {
                *(unkbyte10 *)(lVar29 + 0x28) = Var77;
                *(uint16_t *)(lVar29 + 0x36) = pAVar65[-3]._2.property_count;
                *(undefined4 *)(lVar29 + 0x32) = *(undefined4 *)((long)&pAVar65[-3]._2.token + 2);
                lVar29 = *(long *)&pAVar65[-3]._2.thread_static_fields_offset;
                if (lVar29 != 0) {
                  pIVar81 = *(Il2CppObject **)(lVar29 + 0x18);
                  pMVar16 = *(MethodInfo_331B380 **)
                             (*(long *)(*(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o
                                                    *)&(now_02.fields._8_8_)->klass)->fields + 0xc0) + 0x100);
                  pAVar65[-3]._2.element_size = 0x341a819;
                  pAVar65[-3]._2.native_size = 0;
                  pAVar32 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh(pIVar81,0,pMVar16);
                  lVar43._0_4_ = pAVar65[-3]._2.thread_static_fields_offset;
                  lVar43._4_4_ = pAVar65[-3]._2.flags;
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
  pAVar65[-3]._2.element_size = 0x341a9f2;
  pAVar65[-3]._2.native_size = 0;
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  pAVar65[-3]._2.element_size = 0x341a9f7;
  pAVar65[-3]._2.native_size = 0;
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestVersion
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersion (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key, System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o* onComplete, const MethodInfo* method);
// 0x44cb410

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersion
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined1 auVar1 [12];
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this;
  Cysharp_Threading_Tasks_UniTask_o task;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppClass *pIVar6;
  Il2CppType *pIVar7;
  Il2CppType **ppIVar8;
  
  if (g_data_057aeafd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgChangelogService_FetchLatestVersionAsync);
    g_data_057aeafd = '\x01';
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
  if (*(long *)(MethodInfo_Void_Start_AottgChangelogService_FetchLatestVersionAsync + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this.fields._4_4_ = uVar3;
  __this.fields.__1__state = uVar2;
  __this.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this.fields.onComplete = (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)param_3
  ;
  __this.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this.fields.__u__1.fields.task.fields.result = (Il2CppObject *)pIVar7;
  __this.fields.__u__1.fields.task.fields._16_8_ = ppIVar8;
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
            (__this,(MethodInfo *)&stack0xffffffffffffffb8);
  auVar1 = il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffc0,0);
  task.fields._12_4_ = 0;
  task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar1._0_8_;
  task.fields.token = auVar1._8_2_;
  task.fields._10_2_ = auVar1._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestEntry
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestEntry (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key, System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o* onComplete, const MethodInfo* method);
// 0x44cb560

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestEntry
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,undefined8 param_2,
               System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *param_3,MethodInfo *param_4)

{
  undefined1 auVar1 [12];
  Cysharp_Threading_Tasks_UniTask_o CVar2;
  
  if (g_data_057aeafb == '\0') {
    __this = (ApplicationManagers_Changelog_AottgChangelogService_o *)&"/v1/changelog/latest";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeafb = '\x01';
  }
  CVar2 = ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync
                    (__this,"/v1/changelog/latest",param_3,param_4);
  auVar1 = CVar2.fields._0_12_;
  CVar2.fields._12_4_ = 0;
  CVar2.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar1._0_8_;
  CVar2.fields.token = auVar1._8_2_;
  CVar2.fields._10_2_ = auVar1._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(CVar2,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchList
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchList (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key, System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o* onComplete, const MethodInfo* method);
// 0x44cb660

void ApplicationManagers_Changelog_AottgChangelogService__FetchList
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
               ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key,
               System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *onComplete,
               MethodInfo *method)

{
  undefined1 auVar1 [12];
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this_00;
  Cysharp_Threading_Tasks_UniTask_o task;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppType *pIVar6;
  Il2CppType **ppIVar7;
  _union_13 _Var8;
  
  if (g_data_057aeafe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgChangelogService_FetchListAsync_d__17);
    g_data_057aeafe = '\x01';
  }
  ppIVar7 = (Il2CppType **)0x0;
  _Var8.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffa0,0);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb8,onComplete);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgChangelogService_FetchListAsync_d__17 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this_00.fields._4_4_ = uVar3;
  __this_00.fields.__1__state = uVar2;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this_00.fields.key.fields = key.fields;
  __this_00.fields.onComplete = onComplete;
  __this_00.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this_00.fields.__u__1.fields.task.fields.result = (Il2CppObject *)ppIVar7;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = _Var8.rgctx_data;
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
  auVar1 = il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffa0,0);
  task.fields._12_4_ = 0;
  task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar1._0_8_;
  task.fields.token = auVar1._8_2_;
  task.fields._10_2_ = auVar1._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchEntry
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchEntry (ApplicationManagers_Changelog_AottgChangelogService_o* __this, System_String_o* id, System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o* onComplete, const MethodInfo* method);
// 0x44cb7d0

void ApplicationManagers_Changelog_AottgChangelogService__FetchEntry
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,System_String_o *id,
               System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *onComplete,MethodInfo *method)

{
  undefined1 auVar1 [12];
  System_String_o *pSVar2;
  MethodInfo *method_00;
  ApplicationManagers_Changelog_AottgChangelogService_o *__this_00;
  Cysharp_Threading_Tasks_UniTask_o CVar3;
  
  if (g_data_057aeafc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"/v1/changelog/");
    g_data_057aeafc = '\x01';
  }
  if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Uri__EscapeDataString(id,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&"/v1/changelog/";
  __this_00 = "/v1/changelog/";
  pSVar2 = System_String__Concat_3ae5ba0((System_String_o *)"/v1/changelog/",pSVar2,(MethodInfo *)0x0);
  CVar3 = ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync
                    (__this_00,pSVar2,onComplete,method_00);
  auVar1 = CVar3.fields._0_12_;
  CVar3.fields._12_4_ = 0;
  CVar3.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar1._0_8_;
  CVar3.fields.token = auVar1._8_2_;
  CVar3.fields._10_2_ = auVar1._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(CVar3,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestVersionAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync (ApplicationManagers_Changelog_AottgChangelogService_o* __this, System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o* onComplete, const MethodInfo* method);
// 0x44cb4c0

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync
          (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
          System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *onComplete,
          MethodInfo *method)

{
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this_00;
  MethodInfo *extraout_RDX;
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppClass *pIVar6;
  Il2CppType *pIVar7;
  Il2CppType **ppIVar8;
  
  if (g_data_057aeafd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgChangelogService_FetchLatestVersionAsync);
    g_data_057aeafd = '\x01';
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
  if (*(long *)(MethodInfo_Void_Start_AottgChangelogService_FetchLatestVersionAsync + 0x38) == 0) {
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
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffffb8);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffc0,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchListAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key, System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o* onComplete, const MethodInfo* method);
// 0x44cb720

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync
          (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
          ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key,
          System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *onComplete,MethodInfo *method)

{
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this_00;
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppType *pIVar6;
  Il2CppType **ppIVar7;
  _union_13 _Var8;
  
  if (g_data_057aeafe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgChangelogService_FetchListAsync_d__17);
    g_data_057aeafe = '\x01';
  }
  ppIVar7 = (Il2CppType **)0x0;
  _Var8.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffa0,0);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb8,onComplete);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgChangelogService_FetchListAsync_d__17 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this_00.fields._4_4_ = uVar3;
  __this_00.fields.__1__state = uVar2;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this_00.fields.key.fields = key.fields;
  __this_00.fields.onComplete = onComplete;
  __this_00.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this_00.fields.__u__1.fields.task.fields.result = (Il2CppObject *)ppIVar7;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = _Var8.rgctx_data;
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffa0,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchEntryAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync (ApplicationManagers_Changelog_AottgChangelogService_o* __this, System_String_o* path, System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o* onComplete, const MethodInfo* method);
// 0x44cb5a0

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync
          (ApplicationManagers_Changelog_AottgChangelogService_o *__this,System_String_o *path,
          System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *onComplete,MethodInfo *method)

{
  ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this_00;
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Il2CppType *pIVar6;
  Il2CppType **ppIVar7;
  _union_13 _Var8;
  
  if (g_data_057aeaff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AottgChangelogService_FetchEntryAsync_d__18);
    g_data_057aeaff = '\x01';
  }
  ppIVar7 = (Il2CppType **)0x0;
  _Var8.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffa0,0);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb0,path);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb8,onComplete);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AottgChangelogService_FetchEntryAsync_d__18 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this_00.fields._4_4_ = uVar3;
  __this_00.fields.__1__state = uVar2;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this_00.fields.path = path;
  __this_00.fields.onComplete = onComplete;
  __this_00.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)pIVar6;
  __this_00.fields.__u__1.fields.task.fields.result = (Il2CppObject *)ppIVar7;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = _Var8.rgctx_data;
  ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0274e690(&stack0xffffffffffffffa0,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.Changelog.AottgChangelogService$$SendGet
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_Changelog_AottgChangelogService__SendGet (System_String_o* path, const MethodInfo* method);
// 0x44cb860

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_Changelog_AottgChangelogService__SendGet
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__,System_String_o *path,
          MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiClient_o *__this;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *extraout_RAX;
  MethodInfo *method_00;
  ApplicationManagers_Api_AottgApiRequest_o *__this_00;
  MethodInfo *in_R8;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_48;
  
  method_00 = (MethodInfo *)path;
  if (g_data_057aeb00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiClient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiRequest);
    il2cpp_runtime_helper_023445d0(&"GET");
    g_data_057aeb00 = '\x01';
  }
  __this = (ApplicationManagers_Api_AottgApiClient_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiClient);
  ApplicationManagers_Api_AottgApiClient___ctor(__this,method_00);
  request = (ApplicationManagers_Api_AottgApiRequest_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiRequest);
  if (g_data_057aeb16 == '\0') {
    il2cpp_runtime_helper_023445d0(&"GET");
    g_data_057aeb16 = '\x01';
  }
  (request->fields).Method = "GET";
  il2cpp_runtime_helper_022b4080(&request->fields);
  *(undefined1 *)((long)&(request->fields).ParseJson + 1) = 1;
  __this_00 = request;
  System_Object___ctor((Il2CppObject *)request,(MethodInfo *)0x0);
  if (request != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
    (request->fields).Method = "GET";
    il2cpp_runtime_helper_022b4080(&request->fields);
    __this_00 = (ApplicationManagers_Api_AottgApiRequest_o *)&(request->fields).Path;
    (request->fields).Path = path;
    il2cpp_runtime_helper_022b4080();
    if (__this != (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ApplicationManagers_Api_AottgApiClient__SendAsync
                (&local_48,__this,request,(System_Threading_CancellationToken_o)0x0,in_R8);
      (__return_storage_ptr__->fields).token = local_48.fields.token;
      *(undefined6 *)&(__return_storage_ptr__->fields).field_0x12 = local_48.fields._18_6_;
      (__return_storage_ptr__->fields).source = local_48.fields.source;
      (__return_storage_ptr__->fields).result = local_48.fields.result;
      return __return_storage_ptr__;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Ready<object>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogService__Ready_object_ (System_Action_AottgChangelogResult_T___o* onResult, const MethodInfo_253CC90* method);
// 0x263cc90

bool_conflict
ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
          (System_Action_AottgChangelogResult_T___o *onResult,MethodInfo_253CC90 *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  bool_conflict bVar3;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar4;
  
  if (method->rgctx_data == (MethodInfo_253CC90_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    if (method->rgctx_data == (MethodInfo_253CC90_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(method);
      iVar1 = *(int *)(TypeInfo_AottgChangelogService + 0xe4);
      goto joined_r0x0263cce2;
    }
  }
  iVar1 = *(int *)(TypeInfo_AottgChangelogService + 0xe4);
joined_r0x0263cce2:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AottgChangelogService + 0xb8) + 8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar3 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
  if ((char)bVar2 == '\0') {
    if (onResult != (System_Action_AottgChangelogResult_T___o *)0x0) {
      pAVar4 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                         ("not_initialized",
                          (MethodInfo_33150F0 *)
                          method->rgctx_data->
                          _1_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache);
      (*(code *)(onResult->fields).invoke_impl)
                ((onResult->fields).method_code,pAVar4,(onResult->fields).method);
    }
    bVar3 = 0;
  }
  return bVar3;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Ready<__Il2CppFullySharedGenericType>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogService__Ready___Il2CppFullySharedGenericType_ (System_Action_AottgChangelogResult_T___o* onResult, const MethodInfo_253CD80* method);
// 0x263cd80

bool_conflict
ApplicationManagers_Changelog_AottgChangelogService__Ready___Il2CppFullySharedGenericType_
          (System_Action_AottgChangelogResult_T___o *onResult,MethodInfo_253CD80 *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  MethodInfo *pMVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  void *local_20;
  
  if (method->rgctx_data == (MethodInfo_253CD80_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    if (method->rgctx_data == (MethodInfo_253CD80_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(method);
      iVar1 = *(int *)(TypeInfo_AottgChangelogService + 0xe4);
      goto joined_r0x0263cdd6;
    }
  }
  iVar1 = *(int *)(TypeInfo_AottgChangelogService + 0xe4);
joined_r0x0263cdd6:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AottgChangelogService + 0xb8) + 8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar4 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar3 >> 8),1);
  if ((char)bVar3 == '\0') {
    if (onResult != (System_Action_AottgChangelogResult_T___o *)0x0) {
      local_20 = (void *)(*method->rgctx_data->
                           _1_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache->
                           methodPointer)("not_initialized");
      pMVar2 = method->rgctx_data->_4_System_Action_AottgChangelogResult_T___Invoke;
      (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,onResult,&local_20,local_20);
    }
    bVar4 = 0;
  }
  return bVar4;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Map<object>
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_T__o* ApplicationManagers_Changelog_AottgChangelogService__Map_object_ (ApplicationManagers_Api_AottgQueryResult_T__o* result, const MethodInfo_253CA20* method);
// 0x263ca20

ApplicationManagers_Changelog_AottgChangelogResult_T__o *
ApplicationManagers_Changelog_AottgChangelogService__Map_object_
          (ApplicationManagers_Api_AottgQueryResult_T__o *result,MethodInfo_253CA20 *method)

{
  int iVar1;
  InvokerMethod pIVar2;
  UnityEngine_Object_o *x;
  Il2CppType *pIVar3;
  void *pvVar4;
  code *pcVar5;
  long lVar6;
  undefined4 uVar7;
  bool_conflict bVar8;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar9;
  MethodInfo_253CA20_RGCTXs *pMVar10;
  undefined4 extraout_var;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar11;
  ApplicationManagers_Changelog_AottgChangelogResult_T__c *pAVar12;
  MethodInfo_253CA20 *pMVar13;
  MethodInfo_253CA20 *pMVar14;
  MethodInfo *pMVar15;
  MethodInfo_253CA20 *pMVar16;
  MethodInfo_253CA20 *pMVar17;
  Il2CppMethodPointer vtableDispatch;
  undefined1 auVar18 [16];
  undefined8 auStack_80 [4];
  undefined1 auStack_60 [48];
  ApplicationManagers_Api_AottgQueryResult_T__o *pAStack_30;
  
  pMVar13 = method;
  pMVar16 = (MethodInfo_253CA20 *)result;
  if (method->rgctx_data == (MethodInfo_253CA20_RGCTXs *)0x0) {
    pMVar16 = method;
    il2cpp_runtime_helper_02300a20();
  }
  if (result != (ApplicationManagers_Api_AottgQueryResult_T__o *)0x0) {
    pMVar10 = method->rgctx_data;
    switch((result->fields)._State_k__BackingField) {
    case 0:
      pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
               ApplicationManagers_Changelog_AottgChangelogResult_object___LoadingNoCache
                         ((MethodInfo_3314EF0 *)
                          pMVar10->_2_ApplicationManagers_Changelog_AottgChangelogResult_T__LoadingNoCache);
      return pAVar9;
    case 1:
      pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
               ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyFresh
                         ((result->fields)._Value_k__BackingField,
                          (uint)(byte)(result->fields)._IsFromCache_k__BackingField,
                          (MethodInfo_3314FA0 *)
                          pMVar10->_8_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyFresh);
      return pAVar9;
    case 2:
      pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
               ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyStaleRefreshing
                         ((result->fields)._Value_k__BackingField,
                          (MethodInfo_3315050 *)
                          pMVar10->
                          _9_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyStaleRefreshing);
      return pAVar9;
    default:
      pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
               ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                         ((result->fields)._Error_k__BackingField,
                          (MethodInfo_33150F0 *)
                          pMVar10->_12_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache);
      return pAVar9;
    case 4:
      pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
               ApplicationManagers_Changelog_AottgChangelogResult_object___FailedRefreshStale
                         ((result->fields)._Value_k__BackingField,(result->fields)._Error_k__BackingField,
                          (MethodInfo_3315200 *)
                          pMVar10->
                          _11_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedRefreshStale);
      return pAVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar13->rgctx_data;
  pMVar14 = pMVar13;
  pMVar17 = pMVar16;
  auStack_60._40_8_ = method;
  pAStack_30 = result;
  if (pMVar10 == (MethodInfo_253CA20_RGCTXs *)0x0) {
    auStack_80[3] = 0x263caf4;
    pMVar17 = pMVar13;
    il2cpp_runtime_helper_02300a20();
    pMVar10 = pMVar13->rgctx_data;
  }
  lVar6 = -((ulong)(pMVar10->_6_T->_2).actualSize + 0xf & 0xfffffffffffffff0);
  pAVar12 = (ApplicationManagers_Changelog_AottgChangelogResult_T__c *)(auStack_60 + lVar6);
  if (pMVar16 != (MethodInfo_253CA20 *)0x0) {
    vtableDispatch = pMVar10->_1_ApplicationManagers_Api_AottgQueryResult_T__get_State->methodPointer;
    *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cb25;
    uVar7 = (*vtableDispatch)(pMVar16);
    auStack_60._24_8_ = pAVar12;
    switch(uVar7) {
    case 0:
      pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
               (*pMVar13->rgctx_data->_2_ApplicationManagers_Changelog_AottgChangelogResult_T__LoadingNoCache
                 ->methodPointer)();
      return pAVar9;
    case 1:
      pMVar15 = pMVar13->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
      vtableDispatch = pMVar15->methodPointer;
      pIVar2 = pMVar15->invoker_method;
      *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cbbe;
      (*pIVar2)(vtableDispatch,pMVar15,pMVar16,(void **)(auStack_60 + 0x18),pAVar12);
      vtableDispatch =
           pMVar13->rgctx_data->_7_ApplicationManagers_Api_AottgQueryResult_T__get_IsFromCache->methodPointer;
      *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cbcb;
      auStack_60[0x27] = (*vtableDispatch)(pMVar16);
      pMVar15 = pMVar13->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyFresh;
      vtableDispatch = pMVar15->methodPointer;
      if (-1 < (int)(pMVar13->rgctx_data->_6_T->_1).byval_arg.bits) {
        pAVar12 = (pAVar12->_1).image;
      }
      auStack_60._8_8_ = auStack_60 + 0x27;
      auStack_60._0_8_ = pAVar12;
      break;
    case 2:
      pMVar15 = pMVar13->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
      vtableDispatch = pMVar15->methodPointer;
      pIVar2 = pMVar15->invoker_method;
      *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cb70;
      (*pIVar2)(vtableDispatch,pMVar15,pMVar16,(void **)(auStack_60 + 0x18),pAVar12);
      pMVar15 = pMVar13->rgctx_data->
                _9_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyStaleRefreshing;
      vtableDispatch = pMVar15->methodPointer;
      if (-1 < (int)(pMVar13->rgctx_data->_6_T->_1).byval_arg.bits) {
        pAVar12 = (pAVar12->_1).image;
      }
      pIVar2 = pMVar15->invoker_method;
      auStack_60._24_8_ = pAVar12;
      *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cb99;
      (*pIVar2)(vtableDispatch,pMVar15,(void *)0x0,(void **)(auStack_60 + 0x18),auStack_60);
      return (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)auStack_60._0_8_;
    default:
      vtableDispatch =
           pMVar13->rgctx_data->_10_ApplicationManagers_Api_AottgQueryResult_T__get_Error->methodPointer;
      *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cc62;
      auVar18 = (*vtableDispatch)(pMVar16);
      pMVar15 = pMVar13->rgctx_data->_12_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache;
      vtableDispatch = pMVar15->methodPointer;
      pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
               (*vtableDispatch)(auVar18._0_8_,pMVar15,auVar18._8_8_,vtableDispatch);
      return pAVar9;
    case 4:
      pMVar15 = pMVar13->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
      vtableDispatch = pMVar15->methodPointer;
      pIVar2 = pMVar15->invoker_method;
      *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cc0c;
      (*pIVar2)(vtableDispatch,pMVar15,pMVar16,(void **)(auStack_60 + 0x18),pAVar12);
      vtableDispatch =
           pMVar13->rgctx_data->_10_ApplicationManagers_Api_AottgQueryResult_T__get_Error->methodPointer;
      *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cc19;
      auStack_60._8_8_ = (*vtableDispatch)(pMVar16);
      pMVar15 = pMVar13->rgctx_data->
                _11_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedRefreshStale;
      vtableDispatch = pMVar15->methodPointer;
      auStack_60._0_8_ = pAVar12;
      if (-1 < (int)(pMVar13->rgctx_data->_6_T->_1).byval_arg.bits) {
        auStack_60._0_8_ = (pAVar12->_1).image;
      }
    }
    pIVar2 = pMVar15->invoker_method;
    *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cc46;
    (*pIVar2)(vtableDispatch,pMVar15,(void *)0x0,(void **)auStack_60,auStack_60 + 0x18);
    return (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
           (ApplicationManagers_Changelog_AottgChangelogResult_T__c *)auStack_60._24_8_;
  }
  *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0x263cc81;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)auStack_80 + lVar6 + 0x18) = 0;
  *(MethodInfo_253CA20 **)((long)auStack_80 + lVar6 + 0x10) = pMVar13;
  *(ApplicationManagers_Changelog_AottgChangelogResult_T__c **)((long)auStack_80 + lVar6 + 8) = pAVar12;
  if (pMVar14->rgctx_data == (MethodInfo_253CA20_RGCTXs *)0x0) {
    *(undefined8 *)((long)auStack_80 + lVar6) = 0x263ccae;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    *(undefined8 *)((long)auStack_80 + lVar6) = 0x263ccba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)auStack_80 + lVar6) = 0x263ccc6;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    if (pMVar14->rgctx_data == (MethodInfo_253CA20_RGCTXs *)0x0) {
      *(undefined8 *)((long)auStack_80 + lVar6) = 0x263cd5e;
      il2cpp_runtime_helper_02300a20(pMVar14);
      iVar1 = *(int *)(TypeInfo_AottgChangelogService + 0xe4);
      goto joined_r0x0263cce2;
    }
  }
  iVar1 = *(int *)(TypeInfo_AottgChangelogService + 0xe4);
joined_r0x0263cce2:
  if (iVar1 == 0) {
    *(undefined8 *)((long)auStack_80 + lVar6) = 0x263cce9;
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AottgChangelogService + 0xb8) + 8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)auStack_80 + lVar6) = 0x263cd0f;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)auStack_80 + lVar6) = 0x263cd1b;
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
           CONCAT71((int7)(CONCAT44(extraout_var,bVar8) >> 8),1);
  if ((char)bVar8 == '\0') {
    if (pMVar17 != (MethodInfo_253CA20 *)0x0) {
      pMVar15 = pMVar14->rgctx_data->_1_ApplicationManagers_Api_AottgQueryResult_T__get_State;
      *(undefined8 *)((long)auStack_80 + lVar6) = 0x263cd3f;
      pAVar11 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                          ("not_initialized",(MethodInfo_33150F0 *)pMVar15);
      pIVar3 = pMVar17->return_type;
      pvVar4 = (pMVar17->field8_0x40).genericMethod;
      pcVar5 = (code *)pMVar17->name;
      *(undefined8 *)((long)auStack_80 + lVar6) = 0x263cd4e;
      (*pcVar5)(pvVar4,pAVar11,pIVar3);
    }
    pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)0x0;
  }
  return pAVar9;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Map<__Il2CppFullySharedGenericType>
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_T__o* ApplicationManagers_Changelog_AottgChangelogService__Map___Il2CppFullySharedGenericType_ (ApplicationManagers_Api_AottgQueryResult_T__o* result, const MethodInfo_253CAD0* method);
// 0x263cad0

ApplicationManagers_Changelog_AottgChangelogResult_T__o *
ApplicationManagers_Changelog_AottgChangelogService__Map___Il2CppFullySharedGenericType_
          (ApplicationManagers_Api_AottgQueryResult_T__o *result,MethodInfo_253CAD0 *method)

{
  int iVar1;
  InvokerMethod pIVar2;
  UnityEngine_Object_o *x;
  Il2CppType *pIVar3;
  void *pvVar4;
  code *pcVar5;
  long lVar6;
  undefined4 uVar7;
  bool_conflict bVar8;
  MethodInfo_253CAD0_RGCTXs *pMVar9;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar10;
  undefined4 extraout_var;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar11;
  ApplicationManagers_Changelog_AottgChangelogResult_T__c *pAVar12;
  MethodInfo_253CAD0 *pMVar13;
  MethodInfo *pMVar14;
  MethodInfo_253CAD0 *pMVar15;
  Il2CppMethodPointer vtableDispatch;
  undefined1 auVar16 [16];
  undefined8 auStack_68 [4];
  ApplicationManagers_Changelog_AottgChangelogResult_T__c *local_48;
  undefined1 *local_40;
  ApplicationManagers_Changelog_AottgChangelogResult_T__c *local_30;
  undefined1 local_21;
  
  pMVar9 = method->rgctx_data;
  pMVar13 = method;
  pMVar15 = (MethodInfo_253CAD0 *)result;
  if (pMVar9 == (MethodInfo_253CAD0_RGCTXs *)0x0) {
    auStack_68[3] = 0x263caf4;
    pMVar15 = method;
    il2cpp_runtime_helper_02300a20();
    pMVar9 = method->rgctx_data;
  }
  lVar6 = -((ulong)(pMVar9->_6_T->_2).actualSize + 0xf & 0xfffffffffffffff0);
  pAVar12 = (ApplicationManagers_Changelog_AottgChangelogResult_T__c *)
            ((long)&stack0xffffffffffffffb8 + lVar6);
  if (result != (ApplicationManagers_Api_AottgQueryResult_T__o *)0x0) {
    vtableDispatch = pMVar9->_1_ApplicationManagers_Api_AottgQueryResult_T__get_State->methodPointer;
    *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cb25;
    uVar7 = (*vtableDispatch)(result);
    local_30 = pAVar12;
    switch(uVar7) {
    case 0:
      pAVar10 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
                (*method->rgctx_data->_2_ApplicationManagers_Changelog_AottgChangelogResult_T__LoadingNoCache
                  ->methodPointer)();
      return pAVar10;
    case 1:
      pMVar14 = method->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
      vtableDispatch = pMVar14->methodPointer;
      pIVar2 = pMVar14->invoker_method;
      *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cbbe;
      (*pIVar2)(vtableDispatch,pMVar14,result,&stack0xffffffffffffffd0,pAVar12);
      vtableDispatch =
           method->rgctx_data->_7_ApplicationManagers_Api_AottgQueryResult_T__get_IsFromCache->methodPointer;
      *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cbcb;
      local_21 = (*vtableDispatch)(result);
      pMVar14 = method->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyFresh;
      vtableDispatch = pMVar14->methodPointer;
      if (-1 < (int)(method->rgctx_data->_6_T->_1).byval_arg.bits) {
        pAVar12 = (pAVar12->_1).image;
      }
      local_40 = &stack0xffffffffffffffdf;
      local_48 = pAVar12;
      break;
    case 2:
      pMVar14 = method->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
      vtableDispatch = pMVar14->methodPointer;
      pIVar2 = pMVar14->invoker_method;
      *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cb70;
      (*pIVar2)(vtableDispatch,pMVar14,result,&stack0xffffffffffffffd0,pAVar12);
      pMVar14 = method->rgctx_data->
                _9_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyStaleRefreshing;
      vtableDispatch = pMVar14->methodPointer;
      if (-1 < (int)(method->rgctx_data->_6_T->_1).byval_arg.bits) {
        pAVar12 = (pAVar12->_1).image;
      }
      pIVar2 = pMVar14->invoker_method;
      local_30 = pAVar12;
      *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cb99;
      (*pIVar2)(vtableDispatch,pMVar14,(void *)0x0,&stack0xffffffffffffffd0,&stack0xffffffffffffffb8);
      return (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)local_48;
    default:
      vtableDispatch =
           method->rgctx_data->_10_ApplicationManagers_Api_AottgQueryResult_T__get_Error->methodPointer;
      *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cc62;
      auVar16 = (*vtableDispatch)(result);
      pMVar14 = method->rgctx_data->_12_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache;
      vtableDispatch = pMVar14->methodPointer;
      pAVar10 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
                (*vtableDispatch)(auVar16._0_8_,pMVar14,auVar16._8_8_,vtableDispatch);
      return pAVar10;
    case 4:
      pMVar14 = method->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
      vtableDispatch = pMVar14->methodPointer;
      pIVar2 = pMVar14->invoker_method;
      *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cc0c;
      (*pIVar2)(vtableDispatch,pMVar14,result,&stack0xffffffffffffffd0,pAVar12);
      vtableDispatch =
           method->rgctx_data->_10_ApplicationManagers_Api_AottgQueryResult_T__get_Error->methodPointer;
      *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cc19;
      local_40 = (undefined1 *)(*vtableDispatch)(result);
      pMVar14 = method->rgctx_data->
                _11_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedRefreshStale;
      vtableDispatch = pMVar14->methodPointer;
      local_48 = pAVar12;
      if (-1 < (int)(method->rgctx_data->_6_T->_1).byval_arg.bits) {
        local_48 = (pAVar12->_1).image;
      }
    }
    pIVar2 = pMVar14->invoker_method;
    *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cc46;
    (*pIVar2)(vtableDispatch,pMVar14,(void *)0x0,&stack0xffffffffffffffb8,&stack0xffffffffffffffd0);
    return (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)local_30;
  }
  *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0x263cc81;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)auStack_68 + lVar6 + 0x18) = 0;
  *(MethodInfo_253CAD0 **)((long)auStack_68 + lVar6 + 0x10) = method;
  *(ApplicationManagers_Changelog_AottgChangelogResult_T__c **)((long)auStack_68 + lVar6 + 8) = pAVar12;
  if (pMVar13->rgctx_data == (MethodInfo_253CAD0_RGCTXs *)0x0) {
    *(undefined8 *)((long)auStack_68 + lVar6) = 0x263ccae;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    *(undefined8 *)((long)auStack_68 + lVar6) = 0x263ccba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)auStack_68 + lVar6) = 0x263ccc6;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    if (pMVar13->rgctx_data == (MethodInfo_253CAD0_RGCTXs *)0x0) {
      *(undefined8 *)((long)auStack_68 + lVar6) = 0x263cd5e;
      il2cpp_runtime_helper_02300a20(pMVar13);
      iVar1 = *(int *)(TypeInfo_AottgChangelogService + 0xe4);
      goto joined_r0x0263cce2;
    }
  }
  iVar1 = *(int *)(TypeInfo_AottgChangelogService + 0xe4);
joined_r0x0263cce2:
  if (iVar1 == 0) {
    *(undefined8 *)((long)auStack_68 + lVar6) = 0x263cce9;
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AottgChangelogService + 0xb8) + 8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)auStack_68 + lVar6) = 0x263cd0f;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)auStack_68 + lVar6) = 0x263cd1b;
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pAVar10 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
            CONCAT71((int7)(CONCAT44(extraout_var,bVar8) >> 8),1);
  if ((char)bVar8 == '\0') {
    if (pMVar15 != (MethodInfo_253CAD0 *)0x0) {
      pMVar14 = pMVar13->rgctx_data->_1_ApplicationManagers_Api_AottgQueryResult_T__get_State;
      *(undefined8 *)((long)auStack_68 + lVar6) = 0x263cd3f;
      pAVar11 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                          ("not_initialized",(MethodInfo_33150F0 *)pMVar14);
      pIVar3 = pMVar15->return_type;
      pvVar4 = (pMVar15->field8_0x40).genericMethod;
      pcVar5 = (code *)pMVar15->name;
      *(undefined8 *)((long)auStack_68 + lVar6) = 0x263cd4e;
      (*pcVar5)(pvVar4,pAVar11,pIVar3);
    }
    pAVar10 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)0x0;
  }
  return pAVar10;
}


// ApplicationManagers.Changelog.AottgChangelogService$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___ctor (ApplicationManagers_Changelog_AottgChangelogService_o* __this, const MethodInfo* method);
// 0x44cb980

void ApplicationManagers_Changelog_AottgChangelogService___ctor
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$.cctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___cctor (const MethodInfo* method);
// 0x44cb990

void ApplicationManagers_Changelog_AottgChangelogService___cctor(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  System_TimeSpan_o SVar1;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  MethodInfo *in_R9;
  System_Nullable_TimeSpan__o __this_00;
  System_Nullable_TimeSpan__o failureTtl;
  ulong uStack_28;
  System_TimeSpan_o SStack_20;
  
  if (g_data_057aeb01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_TimeSpan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeb01 = '\x01';
  }
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  successTtl = System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  SVar1 = System_TimeSpan__FromSeconds(45.0,(MethodInfo *)0x0);
  uStack_28 = 0;
  SStack_20.fields._ticks = (System_TimeSpan_Fields)0;
  __this_00.fields.value.fields._ticks = SVar1.fields._ticks;
  __this_00.fields._0_8_ = &uStack_28;
  System_Nullable_TimeSpan____ctor
            (__this_00,(System_TimeSpan_o)MethodInfo_Nullable_1_TimeSpan._ticks,(MethodInfo_37EC960 *)&MethodInfo_Nullable_1_TimeSpan);
  __this = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  failureTtl.fields._0_8_ = uStack_28 & 0xffffffff;
  failureTtl.fields.value.fields._ticks = SStack_20.fields._ticks;
  ApplicationManagers_Api_AottgQueryPolicy___ctor(__this,successTtl,failureTtl,1,in_R9);
  **(undefined8 **)(TypeInfo_AottgChangelogService + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgChangelogService + 0xb8),__this);
  return;
}


