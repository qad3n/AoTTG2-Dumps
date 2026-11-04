// Type: ApplicationManagers.Changelog.AottgChangelogService
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogService.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogService.UnitKey$$.cctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_UnitKey___cctor (const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_Changelog_AottgChangelogService_UnitKey___cctor(MethodInfo* method)

{
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_ListKey___ctor (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t page, int32_t pageSize, const MethodInfo* method);
// 0x180acca30

void
ApplicationManagers_Changelog_AottgChangelogService_ListKey___ctor(ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t page, int32_t pageSize, MethodInfo* method)

{
  (__this->fields).tileX = tileX;
  (__this->fields).tileZ = tileZ;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$get_Page
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_Page (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, const MethodInfo* method);
// 0x18057aed0

int32_t
ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_Page(ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, MethodInfo* method)

{
  return (__this->fields).m_Id;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$set_Page
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_Page (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t value, const MethodInfo* method);
// 0x18057af10

void
ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_Page(ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._id_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$get_PageSize
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_PageSize (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, const MethodInfo* method);
// 0x18057aec0

int32_t
ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_PageSize(ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, MethodInfo* method)

{
  return (__this->fields).m_Version;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$set_PageSize
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_PageSize (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t value, const MethodInfo* method);
// 0x18057af00

void
ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_PageSize(ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t value, MethodInfo* method)

{
  (__this->fields).m_Type = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass10_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___ctor(ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass10_0$$<GetEntry>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___GetEntry_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o* __this, ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o* result, const MethodInfo* method);
// 0x1823750a0

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___GetEntry_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o *result,MethodInfo *method)

{
  System_Action_AottgChangelogResult_ChangelogEntryResponse___o *pSVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (Il2CppMethodInitialized_184347a42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    Il2CppMethodInitialized_184347a42 = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar2 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                     ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,
                      (MethodInfo_68AFE0 *)
                      MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_ChangelogEntryResponse
                     );
  if (pSVar1 != (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass7_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___ctor(ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass7_0$$<GetLatestVersion>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___GetLatestVersion_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o* __this, ApplicationManagers_Api_AottgQueryResult_LatestChangelogVersionResponse__o* result, const MethodInfo* method);
// 0x182375390

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___GetLatestVersion_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_LatestChangelogVersionResponse__o *result,
               MethodInfo *method)

{
  System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o *pSVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (Il2CppMethodInitialized_184347a43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_LatestChangelogVersionResponse
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    Il2CppMethodInitialized_184347a43 = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar2 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                     ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,
                      (MethodInfo_68AFE0 *)
                      MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_LatestChangelogVersionResponse
                     );
  if (pSVar1 != (System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass8_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___ctor(ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass8_0$$<GetLatest>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___GetLatest_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o* __this, ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o* result, const MethodInfo* method);
// 0x182375a40

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___GetLatest_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o *result,MethodInfo *method)

{
  System_Action_AottgChangelogResult_ChangelogEntryResponse___o *pSVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (Il2CppMethodInitialized_184347a44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    Il2CppMethodInitialized_184347a44 = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar2 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                     ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,
                      (MethodInfo_68AFE0 *)
                      MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_ChangelogEntryResponse
                     );
  if (pSVar1 != (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass9_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___ctor(ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass9_0$$<GetList>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___GetList_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o* __this, ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__o* result, const MethodInfo* method);
// 0x182376e40

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___GetList_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__o *result,
               MethodInfo *method)

{
  System_Action_AottgChangelogResult_PublicChangelogListResponse___o *pSVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (Il2CppMethodInitialized_184347a45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_PublicChangelogListResponse
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    Il2CppMethodInitialized_184347a45 = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar2 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                     ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,
                      (MethodInfo_68AFE0 *)
                      MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_PublicChangelogListResponse
                     );
  if (pSVar1 != (System_Action_AottgChangelogResult_PublicChangelogListResponse___o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchEntryAsync>d__18$$MoveNext
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__MoveNext (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this, const MethodInfo* method);
// 0x182372600
// eh: try 0x1823726bb..0x182372a65 -> pad 0x1833157d0 (+4 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237285f: nop 
// asm:   0x182372860: jmp 0x18237291f
// asm:   0x1823728cc: nop 
// asm:   0x1823728cd: jmp 0x18237291f
// asm:   0x18237291e: nop 
// asm:   0x182372a0d: xor ecx, ecx
// asm:   0x182372a0f: mov rdx, qword ptr [rip + 0x1d31fb2]  ; TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise
// asm:   0x182372a16: call 0x180014640  ; InterfaceInvoker0_Invoke()
// asm:   0x182372a1b: mov r8, qword ptr [rdi + 0x38]
// asm:   0x182372a1f: mov r8, qword ptr [r8 + 0x28]
// asm:   0x182372a23: mov rdx, rax
// asm:   0x182372a26: lea rcx, [rsp + 0x40]
// asm:   0x182372a2b: call 0x1800142b0  ; il2cpp_runtime_helper_1800142b0()
// asm:   0x182372a30: nop 
// asm:   0x182372a31: jmp 0x18237295d
// asm:   0x182372a36: mov rcx, qword ptr [rsp + 0xb0]
// asm:   0x182372a3e: mov dword ptr [rcx], 0xfffffffe
// asm:   0x182372a44: add rcx, 8
// asm:   0x182372a48: xor r8d, r8d
// asm:   0x182372a4b: mov rdx, qword ptr [rsp + 0x40]
// asm:   0x182372a50: call 0x181150b30  ; il2cpp_runtime_helper_181150b30()
// asm:   0x182372a55: jmp 0x18237295d
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

void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__MoveNext
               (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *pSVar2;
  Il2CppObject *obj;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar3;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar4;
  MethodInfo *method_00;
  bool bVar5;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar6;
  ApplicationManagers_Api_AottgApiResult_o *pAVar7;
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o *__this_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar8;
  System_String_o *pSVar9;
  Il2CppClass *klass;
  void *pvVar10;
  Il2CppObject *local_res18;
  System_String_o *local_res20;
  Cysharp_Threading_Tasks_UniTask_Awaiter_T__o local_68;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_50 [2];
  
  if (Il2CppMethodInitialized_184347a46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9968
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter);
    il2cpp_codegen_initialize_runtime_metadata(&" response.");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgChangelogService: failed to parse ");
    Il2CppMethodInitialized_184347a46 = '\x01';
  }
  local_res18 = (Il2CppObject *)0x0;
  local_res20 = (System_String_o *)0x0;
  if ((__this->fields).__1__state == 0) {
    local_68.fields.task.fields.source = (__this->fields).__u__1.fields.task.fields.source;
    local_68.fields.task.fields.result = (__this->fields).__u__1.fields.task.fields.result;
    pCVar4 = &(__this->fields).__u__1;
    local_68.fields.task.fields.token = (pCVar4->fields).task.fields.token;
    local_68.fields.task.fields._18_6_ = *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    pSVar9 = (__this->fields).path;
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    pCVar6 = ApplicationManagers_Changelog_AottgChangelogService__SendGet(local_50,pSVar9,(MethodInfo *)0x0);
    pCVar3 = (pCVar6->fields).source;
    pAVar7 = (pCVar6->fields).result;
    uVar1._0_2_ = (pCVar6->fields).token;
    uVar1._2_6_ = *(undefined6 *)&(pCVar6->fields).field_0x12;
    local_50[0].fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_50[0].fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_50[0].fields.token = 0;
    local_50[0].fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_50[0].fields.source = pCVar3;
    local_50[0].fields.result = pAVar7;
    local_50[0].fields._16_8_ = uVar1;
    Il2CppCodeGenWriteBarrier((void **)local_50,(void *)0x0);
    local_68.fields.task.fields.source = local_50[0].fields.source;
    local_68.fields.task.fields.result = (Il2CppObject *)local_50[0].fields.result;
    local_68.fields.task.fields.token = local_50[0].fields.token;
    local_68.fields.task.fields._18_6_ = local_50[0].fields._18_6_;
    bVar5 = Cysharp_Threading_Tasks_UniTask_Awaiter_Vector2___get_IsCompleted
                      (&local_68,
                       (MethodInfo_EE1910 *)
                       MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    if (!bVar5) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source = local_68.fields.task.fields.source;
      (__this->fields).__u__1.fields.task.fields.result = local_68.fields.task.fields.result;
      pCVar4 = &(__this->fields).__u__1;
      (pCVar4->fields).task.fields.token = local_68.fields.task.fields.token;
      *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12 = local_68.fields.task.fields._18_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      method_00 = 
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9968
      ;
      if (((
           MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9968
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
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask_AottgChangelogService__FetchEntryAsync_d__18___SetStateMachine
                  (__this,(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o **)
                          &(__this->fields).__t__builder,
                   (MethodInfo_DF64E0 *)(method_00->field7_0x38).rgctx_data[1].method);
      }
      obj = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
      if (obj != (Il2CppObject *)0x0) {
        pvVar10 = InterfaceInvoker0_Invoke
                            (0,(Il2CppClass *)
                               TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,
                             obj);
        il2cpp_runtime_helper_1800142b0(&local_68,pvVar10,(method_00->field7_0x38).rgctx_data[5].rgctxDataDummy);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  pAVar7 = Cysharp_Threading_Tasks_UniTask_Awaiter_object___GetResult
                     ((Cysharp_Threading_Tasks_UniTask_Awaiter_object__o *)&local_68,
                      (MethodInfo_EE11A0 *)
                      MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
  if (pAVar7 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    if ((pAVar7->fields)._Success_k__BackingField == false) {
      pSVar2 = (__this->fields).onComplete;
      if (pSVar2 != (System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *)0x0) {
        if ((pAVar7->fields)._StatusCode_k__BackingField == 0x194) {
          pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                             ((Il2CppObject *)0x0,
                              (MethodInfo_1578650 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Ok
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method)
          ;
        }
        else {
          pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((pAVar7->fields)._Error_k__BackingField,
                              (MethodInfo_1578330 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Fail
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method)
          ;
        }
      }
    }
    else {
      pSVar9 = (pAVar7->fields)._ResponseText_k__BackingField;
      if (Il2CppMethodInitialized_184347a2a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_ChangelogEntryResponse
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_ChangelogEntryResponse)
        ;
        Il2CppMethodInitialized_184347a2a = '\x01';
      }
      __this_00 = (UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o
                   *)il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_ChangelogEntryResponse
                               );
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
                (__this_00,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry,
                 (MethodInfo *)0x0);
      bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (pSVar9,(ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)__this_00,
                         &local_res18,&local_res20,
                         (MethodInfo_68AC50 *)
                         MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_ChangelogEntryResponse
                        );
      if (bVar5) {
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *)0x0) {
          pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                             (local_res18,
                              (MethodInfo_1578650 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Ok
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method)
          ;
        }
      }
      else {
        pSVar9 = System_String__Concat_1969b70
                           ("AottgChangelogService: failed to parse ",(__this->fields).path," response.",
                            (MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *)0x0) {
          pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             (local_res20,
                              (MethodInfo_1578330 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Fail
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method)
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


// ApplicationManagers.Changelog.AottgChangelogService.<FetchEntryAsync>d__18$$SetStateMachine
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__SetStateMachine (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x1808e6930

void
ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__SetStateMachine(ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__t__builder,
             (MethodInfo *)stateMachine);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchLatestVersionAsync>d__16$$MoveNext
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this, const MethodInfo* method);
// 0x182372a70
// eh: try 0x182372b2b..0x182372e91 -> pad 0x1833157d0 (+4 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182372ccf: nop 
// asm:   0x182372cd0: jmp 0x182372d4b
// asm:   0x182372d20: nop 
// asm:   0x182372d21: jmp 0x182372d4b
// asm:   0x182372d4a: nop 
// asm:   0x182372e39: xor ecx, ecx
// asm:   0x182372e3b: mov rdx, qword ptr [rip + 0x1d31b86]  ; TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise
// asm:   0x182372e42: call 0x180014640  ; InterfaceInvoker0_Invoke()
// asm:   0x182372e47: mov r8, qword ptr [rdi + 0x38]
// asm:   0x182372e4b: mov r8, qword ptr [r8 + 0x28]
// asm:   0x182372e4f: mov rdx, rax
// asm:   0x182372e52: lea rcx, [rsp + 0x40]
// asm:   0x182372e57: call 0x1800142b0  ; il2cpp_runtime_helper_1800142b0()
// asm:   0x182372e5c: nop 
// asm:   0x182372e5d: jmp 0x182372d89
// asm:   0x182372e62: mov rcx, qword ptr [rsp + 0xb0]
// asm:   0x182372e6a: mov dword ptr [rcx], 0xfffffffe
// asm:   0x182372e70: add rcx, 8
// asm:   0x182372e74: xor r8d, r8d
// asm:   0x182372e77: mov rdx, qword ptr [rsp + 0x40]
// asm:   0x182372e7c: call 0x181150b30  ; il2cpp_runtime_helper_181150b30()
// asm:   0x182372e81: jmp 0x182372d89
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

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
               (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_String_o *json;
  System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *pSVar2;
  Il2CppObject *obj;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar3;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar4;
  MethodInfo *method_00;
  bool bVar5;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar6;
  ApplicationManagers_Api_AottgApiResult_o *pAVar7;
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o *__this_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar8;
  Il2CppClass *klass;
  void *pvVar9;
  Il2CppObject *local_res18;
  System_String_o *local_res20;
  Cysharp_Threading_Tasks_UniTask_Awaiter_T__o local_68;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_50 [2];
  
  if (Il2CppMethodInitialized_184347a47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9a40
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter);
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/changelog/latest-version");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgChangelogService: failed to parse /v1/changelog/latest-version response.");
    Il2CppMethodInitialized_184347a47 = '\x01';
  }
  local_res18 = (Il2CppObject *)0x0;
  local_res20 = (System_String_o *)0x0;
  if ((__this->fields).__1__state == 0) {
    local_68.fields.task.fields.source = (__this->fields).__u__1.fields.task.fields.source;
    local_68.fields.task.fields.result = (__this->fields).__u__1.fields.task.fields.result;
    pCVar4 = &(__this->fields).__u__1;
    local_68.fields.task.fields.token = (pCVar4->fields).task.fields.token;
    local_68.fields.task.fields._18_6_ = *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    pCVar6 = ApplicationManagers_Changelog_AottgChangelogService__SendGet
                       (local_50,"/v1/changelog/latest-version",(MethodInfo *)0x0);
    pCVar3 = (pCVar6->fields).source;
    pAVar7 = (pCVar6->fields).result;
    uVar1._0_2_ = (pCVar6->fields).token;
    uVar1._2_6_ = *(undefined6 *)&(pCVar6->fields).field_0x12;
    local_50[0].fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_50[0].fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_50[0].fields.token = 0;
    local_50[0].fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_50[0].fields.source = pCVar3;
    local_50[0].fields.result = pAVar7;
    local_50[0].fields._16_8_ = uVar1;
    Il2CppCodeGenWriteBarrier((void **)local_50,(void *)0x0);
    local_68.fields.task.fields.source = local_50[0].fields.source;
    local_68.fields.task.fields.result = (Il2CppObject *)local_50[0].fields.result;
    local_68.fields.task.fields.token = local_50[0].fields.token;
    local_68.fields.task.fields._18_6_ = local_50[0].fields._18_6_;
    bVar5 = Cysharp_Threading_Tasks_UniTask_Awaiter_Vector2___get_IsCompleted
                      (&local_68,
                       (MethodInfo_EE1910 *)
                       MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    if (!bVar5) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source = local_68.fields.task.fields.source;
      (__this->fields).__u__1.fields.task.fields.result = local_68.fields.task.fields.result;
      pCVar4 = &(__this->fields).__u__1;
      (pCVar4->fields).task.fields.token = local_68.fields.task.fields.token;
      *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12 = local_68.fields.task.fields._18_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      method_00 = 
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9a40
      ;
      if (((
           MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9a40
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
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask_AottgChangelogService__FetchLatestVersionAsync_d__16___SetStateMachine
                  (__this,(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o **)
                          &(__this->fields).__t__builder,
                   (MethodInfo_DF4B30 *)(method_00->field7_0x38).rgctx_data[1].method);
      }
      obj = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
      if (obj != (Il2CppObject *)0x0) {
        pvVar9 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)
                              TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,obj
                           );
        il2cpp_runtime_helper_1800142b0(&local_68,pvVar9,(method_00->field7_0x38).rgctx_data[5].rgctxDataDummy);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  pAVar7 = Cysharp_Threading_Tasks_UniTask_Awaiter_object___GetResult
                     ((Cysharp_Threading_Tasks_UniTask_Awaiter_object__o *)&local_68,
                      (MethodInfo_EE11A0 *)
                      MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
  if (pAVar7 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    if ((pAVar7->fields)._Success_k__BackingField == false) {
      pSVar2 = (__this->fields).onComplete;
      if (pSVar2 != (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0) {
        pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                           ((pAVar7->fields)._Error_k__BackingField,
                            (MethodInfo_1578330 *)
                            MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Fail
                           );
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method);
      }
    }
    else {
      json = (pAVar7->fields)._ResponseText_k__BackingField;
      if (Il2CppMethodInitialized_184347a29 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseLatestVersion);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_LatestChangelogVersionResponse
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_LatestChangelogVersionResponse
                  );
        Il2CppMethodInitialized_184347a29 = '\x01';
      }
      __this_00 = (UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o
                   *)il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_LatestChangelogVersionResponse
                               );
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
                (__this_00,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseLatestVersion
                 ,(MethodInfo *)0x0);
      bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (json,(ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)__this_00,
                         &local_res18,&local_res20,
                         (MethodInfo_68AC50 *)
                         MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_LatestChangelogVersionResponse
                        );
      if (bVar5) {
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0) {
          pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                             (local_res18,
                              (MethodInfo_1578650 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Ok
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method)
          ;
        }
      }
      else {
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"AottgChangelogService: failed to parse /v1/changelog/latest-version response.",(MethodInfo *)0x0);
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0) {
          pAVar8 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             (local_res20,
                              (MethodInfo_1578330 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Fail
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar8,(pSVar2->fields).method)
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


// ApplicationManagers.Changelog.AottgChangelogService.<FetchLatestVersionAsync>d__16$$SetStateMachine
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__SetStateMachine (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x1808e6930

void
ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__SetStateMachine(ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__t__builder,
             (MethodInfo *)stateMachine);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchListAsync>d__17$$MoveNext
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this, const MethodInfo* method);
// 0x182372ea0
// eh: try 0x182372f6c..0x182373321 -> pad 0x183339ce0 (+4 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237315f: nop 
// asm:   0x182373160: jmp 0x1823731d8
// asm:   0x1823731ad: nop 
// asm:   0x1823731ae: jmp 0x1823731d8
// asm:   0x1823731d7: nop 
// asm:   0x1823732c9: xor ecx, ecx
// asm:   0x1823732cb: mov rdx, qword ptr [rip + 0x1d316f6]  ; TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise
// asm:   0x1823732d2: call 0x180014640  ; InterfaceInvoker0_Invoke()
// asm:   0x1823732d7: mov r8, qword ptr [rdi + 0x38]
// asm:   0x1823732db: mov r8, qword ptr [r8 + 0x28]
// asm:   0x1823732df: mov rdx, rax
// asm:   0x1823732e2: lea rcx, [rsp + 0x48]
// asm:   0x1823732e7: call 0x1800142b0  ; il2cpp_runtime_helper_1800142b0()
// asm:   0x1823732ec: nop 
// asm:   0x1823732ed: jmp 0x182373216
// asm:   0x1823732f2: mov rcx, qword ptr [rsp + 0xc0]
// asm:   0x1823732fa: mov dword ptr [rcx], 0xfffffffe
// asm:   0x182373300: add rcx, 8
// asm:   0x182373304: xor r8d, r8d
// asm:   0x182373307: mov rdx, qword ptr [rsp + 0x48]
// asm:   0x18237330c: call 0x181150b30  ; il2cpp_runtime_helper_181150b30()
// asm:   0x182373311: jmp 0x182373216
// asm:   0x183339ce0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183339ce5: push rbx
// asm:   0x183339ce6: push rbp
// asm:   0x183339ce7: push rdi
// asm:   0x183339ce8: sub rsp, 0x30
// asm:   0x183339cec: mov rbp, rdx
// asm:   0x183339cef: mov rdi, qword ptr [rbp + 0x40]
// asm:   0x183339cf3: mov rax, qword ptr [rdi]
// asm:   0x183339cf6: mov rbx, qword ptr [rax]
// asm:   0x183339cf9: lea rcx, [rip + 0xd3f258]  ; TypeInfo_System_Exception
// asm:   0x183339d00: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183339d05: mov rcx, rax
// asm:   0x183339d08: mov rdx, rbx
// asm:   0x183339d0b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183339d10: test al, al
// asm:   0x183339d12: mov rax, qword ptr [rdi]
// asm:   0x183339d15: je 0x183339d27
// asm:   0x183339d17: mov qword ptr [rbp + 0x48], rax
// asm:   0x183339d1b: movabs rax, 0
// asm:   0x183339d25: jmp 0x183339d3c
// asm:   0x183339d27: mov qword ptr [rbp + 0x38], rax
// asm:   0x183339d2b: lea rdx, [rip + 0xca2256]
// asm:   0x183339d32: lea rcx, [rbp + 0x38]
// asm:   0x183339d36: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183339d3c: add rsp, 0x30
// asm:   0x183339d40: pop rdi
// asm:   0x183339d41: pop rbp
// asm:   0x183339d42: pop rbx
// asm:   0x183339d43: ret 

void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext
               (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *pSVar2;
  Il2CppObject *obj;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar3;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar4;
  MethodInfo *method_00;
  bool bVar5;
  System_String_o *pSVar6;
  System_String_o *str3;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar7;
  ApplicationManagers_Api_AottgApiResult_o *pAVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o *__this_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar9;
  Il2CppClass *klass;
  void *pvVar10;
  int32_t local_res18 [2];
  Il2CppObject *local_res20;
  System_String_o *local_88 [3];
  Cysharp_Threading_Tasks_UniTask_Awaiter_T__o local_70;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_58 [2];
  
  if (Il2CppMethodInitialized_184347a48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9b20
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter);
    il2cpp_codegen_initialize_runtime_metadata(&"AottgChangelogService: failed to parse /v1/changelog response.");
    il2cpp_codegen_initialize_runtime_metadata(&"&pageSize=");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/changelog?page=");
    Il2CppMethodInitialized_184347a48 = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  local_88[0] = (System_String_o *)0x0;
  local_res18[0] = 0;
  if ((__this->fields).__1__state == 0) {
    local_70.fields.task.fields.source = (__this->fields).__u__1.fields.task.fields.source;
    local_70.fields.task.fields.result = (__this->fields).__u__1.fields.task.fields.result;
    pCVar4 = &(__this->fields).__u__1;
    local_70.fields.task.fields.token = (pCVar4->fields).task.fields.token;
    local_70.fields.task.fields._18_6_ = *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    local_res18[0] = (__this->fields).key.fields._Page_k__BackingField;
    pSVar6 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    local_res18[0] = (__this->fields).key.fields._PageSize_k__BackingField;
    str3 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_1969590
                       ("/v1/changelog?page=",pSVar6,"&pageSize=",str3,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    pCVar7 = ApplicationManagers_Changelog_AottgChangelogService__SendGet(local_58,pSVar6,(MethodInfo *)0x0);
    pCVar3 = (pCVar7->fields).source;
    pAVar8 = (pCVar7->fields).result;
    uVar1._0_2_ = (pCVar7->fields).token;
    uVar1._2_6_ = *(undefined6 *)&(pCVar7->fields).field_0x12;
    local_58[0].fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_58[0].fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_58[0].fields.token = 0;
    local_58[0].fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_58[0].fields.source = pCVar3;
    local_58[0].fields.result = pAVar8;
    local_58[0].fields._16_8_ = uVar1;
    Il2CppCodeGenWriteBarrier((void **)local_58,(void *)0x0);
    local_70.fields.task.fields.source = local_58[0].fields.source;
    local_70.fields.task.fields.result = (Il2CppObject *)local_58[0].fields.result;
    local_70.fields.task.fields.token = local_58[0].fields.token;
    local_70.fields.task.fields._18_6_ = local_58[0].fields._18_6_;
    bVar5 = Cysharp_Threading_Tasks_UniTask_Awaiter_Vector2___get_IsCompleted
                      (&local_70,
                       (MethodInfo_EE1910 *)
                       MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    if (!bVar5) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source = local_70.fields.task.fields.source;
      (__this->fields).__u__1.fields.task.fields.result = local_70.fields.task.fields.result;
      pCVar4 = &(__this->fields).__u__1;
      (pCVar4->fields).task.fields.token = local_70.fields.task.fields.token;
      *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12 = local_70.fields.task.fields._18_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      method_00 = 
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9b20
      ;
      if (((
           MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9b20
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
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask_AottgChangelogService__FetchListAsync_d__17___SetStateMachine
                  (__this,(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o **)
                          &(__this->fields).__t__builder,
                   (MethodInfo_DF6980 *)(method_00->field7_0x38).rgctx_data[1].method);
      }
      obj = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
      if (obj != (Il2CppObject *)0x0) {
        pvVar10 = InterfaceInvoker0_Invoke
                            (0,(Il2CppClass *)
                               TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,
                             obj);
        il2cpp_runtime_helper_1800142b0(&local_70,pvVar10,(method_00->field7_0x38).rgctx_data[5].rgctxDataDummy);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  pAVar8 = Cysharp_Threading_Tasks_UniTask_Awaiter_object___GetResult
                     ((Cysharp_Threading_Tasks_UniTask_Awaiter_object__o *)&local_70,
                      (MethodInfo_EE11A0 *)
                      MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
  if (pAVar8 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    if ((pAVar8->fields)._Success_k__BackingField == false) {
      pSVar2 = (__this->fields).onComplete;
      if (pSVar2 != (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0) {
        pAVar9 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                           ((pAVar8->fields)._Error_k__BackingField,
                            (MethodInfo_1578330 *)
                            MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Fail
                           );
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar9,(pSVar2->fields).method);
      }
    }
    else {
      pSVar6 = (pAVar8->fields)._ResponseText_k__BackingField;
      if (Il2CppMethodInitialized_184347a2b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseList);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_PublicChangelogListResponse
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_PublicChangelogListResponse
                  );
        Il2CppMethodInitialized_184347a2b = '\x01';
      }
      __this_00 = (UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o
                   *)il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_PublicChangelogListResponse
                               );
      ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
                (__this_00,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseList,
                 (MethodInfo *)0x0);
      bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                        (pSVar6,(ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)__this_00,
                         &local_res20,local_88,
                         (MethodInfo_68AC50 *)
                         MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_PublicChangelogListResponse
                        );
      if (bVar5) {
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0) {
          pAVar9 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                             (local_res20,
                              (MethodInfo_1578650 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Ok
                             );
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar9,(pSVar2->fields).method)
          ;
        }
      }
      else {
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)"AottgChangelogService: failed to parse /v1/changelog response.",(MethodInfo *)0x0);
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0) {
          pAVar9 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             (local_88[0],
                              (MethodInfo_1578330 *)
                              MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Fail
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


// ApplicationManagers.Changelog.AottgChangelogService.<FetchListAsync>d__17$$SetStateMachine
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__SetStateMachine (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x1808e6930

void
ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__SetStateMachine(ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__t__builder,
             (MethodInfo *)stateMachine);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Init
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__Init (const MethodInfo* method);
// 0x182363210

void ApplicationManagers_Changelog_AottgChangelogService__Init(MethodInfo *method)

{
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar1;
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar2;
  System_Action_T1__T2__o *pSVar3;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__LatestChangelogVersionResponse__o
  *__this;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__ChangelogEntryResponse__o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__PublicChangelogListResponse__o
  *__this_01;
  System_Action_string__Action_AottgQueryFetchResult_ChangelogEntryResponse____o *__this_02;
  ApplicationManagers_Api_AottgQueryCache_string__ChangelogEntryResponse__o *__this_03;
  
  if (Il2CppMethodInitialized_184347a35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Action_AottgChangelogService_UnitKey_Action_AottgQueryFetchResult_LatestChangelogVersionR
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_string_Action_AottgQueryFetchResult_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Action_AottgChangelogService_ListKey_Action_AottgQueryFetchResult_PublicChangelogListResp
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Action_AottgChangelogService_UnitKey_Action_AottgQueryFetchResult_ChangelogEntryResponse
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchLatestEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchLatestVersion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse_cto
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AottgChangelogService);
    Il2CppMethodInitialized_184347a35 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance,
                      (MethodInfo_798ED0 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_AottgChangelogService);
  TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance = pAVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance,pAVar2);
  pAVar2 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
  pSVar3 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Action_AottgChangelogService_UnitKey_Action_AottgQueryFetchResult_LatestChangelogVersionR
                     );
  System_Action_AottgCreditsService_UnitKey__object____ctor
            (pSVar3,(Il2CppObject *)pAVar2,
             (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchLatestVersion,
             (MethodInfo_1467890 *)0x0);
  pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp
                     );
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
             (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)pSVar3,
             (System_Func_DateTimeOffset__o *)0x0,pAVar1,
             (MethodInfo_1577C50 *)
             MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp
            );
  if (pAVar2 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
    (pAVar2->fields)._latestVersionCache = __this;
    Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._latestVersionCache,__this);
    pAVar2 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
    pSVar3 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Action_AottgChangelogService_UnitKey_Action_AottgQueryFetchResult_ChangelogEntryResponse
                       );
    System_Action_AottgCreditsService_UnitKey__object____ctor
              (pSVar3,(Il2CppObject *)pAVar2,
               (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchLatestEntry,
               (MethodInfo_1467890 *)0x0);
    pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse
                          );
    ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor
              ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_00,
               (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)pSVar3,
               (System_Func_DateTimeOffset__o *)0x0,pAVar1,
               (MethodInfo_1577C50 *)
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse_cto
              );
    if (pAVar2 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
      (pAVar2->fields)._latestEntryCache = __this_00;
      Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._latestEntryCache,__this_00);
      pAVar2 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
      pSVar3 = (System_Action_T1__T2__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Action_AottgChangelogService_ListKey_Action_AottgQueryFetchResult_PublicChangelogListResp
                         );
      System_Action_AottgChangelogService_ListKey__object____ctor
                (pSVar3,(Il2CppObject *)pAVar2,
                 (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchList,
                 (MethodInfo_1467F20 *)0x0);
      pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons
                            );
      ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object____ctor
                ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_01,
                 (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)pSVar3,
                 (System_Func_DateTimeOffset__o *)0x0,pAVar1,
                 (MethodInfo_1577F00 *)
                 MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons
                );
      if (pAVar2 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
        (pAVar2->fields)._listCache = __this_01;
        Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._listCache,__this_01);
        pAVar2 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Action_string_Action_AottgQueryFetchResult_ChangelogEntryResponse
                              );
        System_Action_object__object____ctor
                  ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_02,
                   (Il2CppObject *)pAVar2,
                   (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchEntry,
                   (MethodInfo *)0x0);
        pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy;
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse)
        ;
        ApplicationManagers_Api_AottgQueryCache_object__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_03,
                   (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)__this_02,
                   (System_Func_DateTimeOffset__o *)0x0,pAVar1,
                   (MethodInfo_15779A0 *)
                   MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse_ctor);
        if (pAVar2 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
          (pAVar2->fields)._entryCache = __this_03;
          Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._entryCache,__this_03);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService$$GetLatestVersion
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetLatestVersion (System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x182362cc0

void ApplicationManagers_Changelog_AottgChangelogService__GetLatestVersion
               (System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o *onResult,
               bool forceRefresh,MethodInfo *method)

{
  ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key;
  System_Action_AottgChangelogResult_T___o *onResult_00;
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__LatestChangelogVersionResponse__o
  *__this;
  bool bVar2;
  ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184347a36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_AottgQueryResult_LatestChangelogVersionResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_LatestChangelogVersionResponse
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp_40e0be8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass7_0_GetLatestVersion_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass7_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_UnitKey);
    Il2CppMethodInitialized_184347a36 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass7_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o *)0x0) {
    (object->fields).onResult = onResult;
    Il2CppCodeGenWriteBarrier(&(object->fields).onResult,onResult);
    onResult_00 = (System_Action_AottgChangelogResult_T___o *)(object->fields).onResult;
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    bVar2 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
                      (onResult_00,
                       (MethodInfo_68B1D0 *)
                       MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_LatestChangelogVersionResponse
                      );
    if (!bVar2) {
      return;
    }
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
    if (pAVar1 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
      __this = (pAVar1->fields)._latestVersionCache;
      if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_UnitKey->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_UnitKey);
      }
      key.fields._tail[0] =
           (ApplicationManagers_Changelog_AottgChangelogService_UnitKey_Fields)
           (TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_UnitKey->static_fields->Value).fields
           ._tail[0];
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Action_AottgQueryResult_LatestChangelogVersionResponse);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass7_0_GetLatestVersion_b__0
                 ,(MethodInfo *)0x0);
      if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__LatestChangelogVersionResponse__o
                     *)0x0) {
        ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___Get
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,key,
                   (System_Action_AottgQueryResult_TValue___o *)__this_00,forceRefresh,
                   (MethodInfo_1575620 *)
                   MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp_40e0be8
                  );
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService$$GetLatest
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetLatest (System_Action_AottgChangelogResult_ChangelogEntryResponse___o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x182362e70

void ApplicationManagers_Changelog_AottgChangelogService__GetLatest
               (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *onResult,bool forceRefresh,
               MethodInfo *method)

{
  ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key;
  System_Action_AottgChangelogResult_T___o *onResult_00;
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__ChangelogEntryResponse__o *__this;
  bool bVar2;
  ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184347a37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_AottgQueryResult_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse_Get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass8_0_GetLatest_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass8_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_UnitKey);
    Il2CppMethodInitialized_184347a37 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass8_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o *)0x0) {
    (object->fields).onResult = onResult;
    Il2CppCodeGenWriteBarrier(&(object->fields).onResult,onResult);
    onResult_00 = (System_Action_AottgChangelogResult_T___o *)(object->fields).onResult;
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    bVar2 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
                      (onResult_00,
                       (MethodInfo_68B1D0 *)
                       MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_ChangelogEntryResponse
                      );
    if (!bVar2) {
      return;
    }
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
    if (pAVar1 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
      __this = (pAVar1->fields)._latestEntryCache;
      if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_UnitKey->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_UnitKey);
      }
      key.fields._tail[0] =
           (ApplicationManagers_Changelog_AottgChangelogService_UnitKey_Fields)
           (TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_UnitKey->static_fields->Value).fields
           ._tail[0];
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_AottgQueryResult_ChangelogEntryResponse);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass8_0_GetLatest_b__0
                 ,(MethodInfo *)0x0);
      if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__ChangelogEntryResponse__o
                     *)0x0) {
        ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___Get
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,key,
                   (System_Action_AottgQueryResult_TValue___o *)__this_00,forceRefresh,
                   (MethodInfo_1575620 *)
                   MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse_Get
                  );
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService$$GetList
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetList (System_Action_AottgChangelogResult_PublicChangelogListResponse___o* onResult, int32_t page, int32_t pageSize, bool forceRefresh, const MethodInfo* method);
// 0x182363020
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823631d5: mov rcx, qword ptr [rip + 0x1d2ff74]  ; "bad_page_size"
// asm:   0x1823631dc: jmp 0x1823631ee
// asm:   0x1823631e7: mov rcx, qword ptr [rip + 0x1d2fe82]  ; "bad_page"

void ApplicationManagers_Changelog_AottgChangelogService__GetList
               (System_Action_AottgChangelogResult_PublicChangelogListResponse___o *onResult,int32_t page,
               int32_t pageSize,bool forceRefresh,MethodInfo *method)

{
  System_Action_AottgChangelogResult_T___o *onResult_00;
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__PublicChangelogListResponse__o
  *__this;
  System_Action_AottgChangelogResult_PublicChangelogListResponse___o *pSVar2;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key;
  System_String_o *error;
  bool bVar3;
  ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar4;
  
  if (Il2CppMethodInitialized_184347a38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_AottgQueryResult_PublicChangelogListResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogResult_PublicChangelogListResponse_FailedNoCache
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_PublicChangelogListResponse
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons_40e06c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass9_0_GetList_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&"bad_page_size");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_page");
    Il2CppMethodInitialized_184347a38 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass9_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o *)0x0) {
label_18236320a:
    ThrowNullReferenceException();
  }
  (object->fields).onResult = onResult;
  Il2CppCodeGenWriteBarrier(&(object->fields).onResult,onResult);
  onResult_00 = (System_Action_AottgChangelogResult_T___o *)(object->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  bVar3 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
                    (onResult_00,
                     (MethodInfo_68B1D0 *)
                     MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_PublicChangelogListResponse
                    );
  if (bVar3) {
    if (page < 1) {
      pSVar2 = (object->fields).onResult;
      error = "bad_page";
    }
    else {
      if (pageSize - 1U < 100) {
        if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
        }
        pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
        if (pAVar1 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
          __this = (pAVar1->fields)._listCache;
          __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Action_AottgQueryResult_PublicChangelogListResponse);
          System_Action_object____ctor
                    (__this_00,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass9_0_GetList_b__0
                     ,(MethodInfo *)0x0);
          if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__PublicChangelogListResponse__o
                         *)0x0) {
            key.fields._PageSize_k__BackingField = pageSize;
            key.fields._Page_k__BackingField = page;
            ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object___Get
                      ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,key,
                       (System_Action_AottgQueryResult_TValue___o *)__this_00,forceRefresh,
                       (MethodInfo_1575350 *)
                       MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons_40e06c0
                      );
            return;
          }
        }
        goto label_18236320a;
      }
      pSVar2 = (object->fields).onResult;
      error = "bad_page_size";
    }
    if (pSVar2 != (System_Action_AottgChangelogResult_PublicChangelogListResponse___o *)0x0) {
      pAVar4 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                         (error,(MethodInfo_1572340 *)
                                MethodInfo_ApplicationManagers_Changelog_AottgChangelogResult_PublicChangelogListResponse_FailedNoCache
                         );
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar4,(pSVar2->fields).method);
    }
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$GetEntry
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetEntry (System_String_o* id, System_Action_AottgChangelogResult_ChangelogEntryResponse___o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x182362ab0

void ApplicationManagers_Changelog_AottgChangelogService__GetEntry
               (System_String_o *id,System_Action_AottgChangelogResult_ChangelogEntryResponse___o *onResult,
               bool forceRefresh,MethodInfo *method)

{
  System_Action_AottgChangelogResult_T___o *onResult_00;
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_string__ChangelogEntryResponse__o *__this;
  System_Action_AottgChangelogResult_ChangelogEntryResponse___o *pSVar2;
  bool bVar3;
  ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o *object;
  System_String_o *input;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar4;
  System_Guid_Fields local_38;
  
  if (Il2CppMethodInitialized_184347a39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_AottgQueryResult_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogResult_ChangelogEntryResponse_FailedNoCache
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse_Get);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass10_0_GetEntry_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"bad_id");
    Il2CppMethodInitialized_184347a39 = '\x01';
  }
  local_38._a = 0;
  local_38._b = 0;
  local_38._c = 0;
  local_38._d = '\0';
  local_38._e = '\0';
  local_38._f = '\0';
  local_38._g = '\0';
  local_38._h = '\0';
  local_38._i = '\0';
  local_38._j = '\0';
  local_38._k = '\0';
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass10_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o *)0x0) {
    (object->fields).onResult = onResult;
    Il2CppCodeGenWriteBarrier(&(object->fields).onResult,onResult);
    onResult_00 = (System_Action_AottgChangelogResult_T___o *)(object->fields).onResult;
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    bVar3 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
                      (onResult_00,
                       (MethodInfo_68B1D0 *)
                       MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_ChangelogEntryResponse
                      );
    if (!bVar3) {
      return;
    }
    if ((id != (System_String_o *)0x0) ||
       (id = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), id != (System_String_o *)0x0)) {
      input = System_String__Trim(id,(MethodInfo *)0x0);
      bVar3 = System_Guid__TryParse(input,(System_Guid_o *)&local_38,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar2 = (object->fields).onResult;
        if (pSVar2 == (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *)0x0) {
          return;
        }
        pAVar4 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                           ("bad_id",
                            (MethodInfo_1572340 *)
                            MethodInfo_ApplicationManagers_Changelog_AottgChangelogResult_ChangelogEntryResponse_FailedNoCache
                           );
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar4,(pSVar2->fields).method);
        return;
      }
      if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
      }
      pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
      if (pAVar1 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
        __this = (pAVar1->fields)._entryCache;
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_AottgQueryResult_ChangelogEntryResponse);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass10_0_GetEntry_b__0
                   ,(MethodInfo *)0x0);
        if (__this != (ApplicationManagers_Api_AottgQueryCache_string__ChangelogEntryResponse__o *)0x0) {
          ApplicationManagers_Api_AottgQueryCache_object__object___Get
                    ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,(Il2CppObject *)input,
                     (System_Action_AottgQueryResult_TValue___o *)__this_00,forceRefresh,
                     (MethodInfo_1575F70 *)
                     MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse_Get);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService$$ClearSessionCache
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__ClearSessionCache (const MethodInfo* method);
// 0x182362360

void ApplicationManagers_Changelog_AottgChangelogService__ClearSessionCache(MethodInfo *method)

{
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__LatestChangelogVersionResponse__o
  *__this;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__ChangelogEntryResponse__o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__PublicChangelogListResponse__o
  *__this_01;
  ApplicationManagers_Api_AottgQueryCache_string__ChangelogEntryResponse__o *__this_02;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347a3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp_40e0b10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons_40e05e8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse_Cle
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347a3a = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
    __this = (pAVar1->fields)._latestVersionCache;
    if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__LatestChangelogVersionResponse__o
                   *)0x0) {
      ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Clear
                ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
                 (MethodInfo_1573870 *)
                 MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp_40e0b10
                );
    }
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
    if (pAVar1 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
      __this_00 = (pAVar1->fields)._latestEntryCache;
      if (__this_00 !=
          (ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__ChangelogEntryResponse__o *)
          0x0) {
        ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Clear
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_00,
                   (MethodInfo_1573870 *)
                   MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse_Cle
                  );
      }
      if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
      }
      pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
      if (pAVar1 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
        __this_01 = (pAVar1->fields)._listCache;
        if (__this_01 !=
            (ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__PublicChangelogListResponse__o
             *)0x0) {
          ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Clear
                    ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_01,
                     (MethodInfo_1573870 *)
                     MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons_40e05e8
                    );
        }
        if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
        }
        pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
        if (pAVar1 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
          __this_02 = (pAVar1->fields)._entryCache;
          if (__this_02 == (ApplicationManagers_Api_AottgQueryCache_string__ChangelogEntryResponse__o *)0x0) {
            return;
          }
          ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Clear
                    ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_02,
                     (MethodInfo_1573870 *)
                     MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse_Clear);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestVersion
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersion (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key, System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o* onComplete, const MethodInfo* method);
// 0x182362830

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersion
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
               ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key,
               System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *onComplete,
               MethodInfo *method)

{
  MethodInfo *pMVar1;
  undefined8 *puVar2;
  Cysharp_Threading_Tasks_UniTask_o local_58;
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb4e8
              );
    Il2CppMethodInitialized_184347a3d = '\x01';
  }
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0;
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete,onComplete);
  pMVar1 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb4e8
  ;
  local_48.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb4e8
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb4e8
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o *)&local_48
             ,(pMVar1->field7_0x38).rgctx_data[2].method);
  puVar2 = (undefined8 *)il2cpp_runtime_helper_180814c10(&local_58,&local_48.__t__builder,0);
  local_58.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar2;
  local_58.fields._8_8_ = puVar2[1];
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(&local_58,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestEntry
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestEntry (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key, System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o* onComplete, const MethodInfo* method);
// 0x1823626f0

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestEntry
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
               ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key,
               System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *onComplete,MethodInfo *method)

{
  Cysharp_Threading_Tasks_UniTask_o *pCVar1;
  Cysharp_Threading_Tasks_UniTask_o local_18;
  
  if (Il2CppMethodInitialized_184347a3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/changelog/latest");
    Il2CppMethodInitialized_184347a3b = '\x01';
  }
  pCVar1 = ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync
                     (&local_18,__this,"/v1/changelog/latest",onComplete,(MethodInfo *)0x0);
  local_18.fields.source = (pCVar1->fields).source;
  local_18.fields.token = (pCVar1->fields).token;
  local_18.fields._10_6_ = *(undefined6 *)&(pCVar1->fields).field_0xa;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(&local_18,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchList
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchList (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key, System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o* onComplete, const MethodInfo* method);
// 0x1823629d0

void ApplicationManagers_Changelog_AottgChangelogService__FetchList
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
               ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key,
               System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *onComplete,
               MethodInfo *method)

{
  MethodInfo *pMVar1;
  undefined8 *puVar2;
  Cysharp_Threading_Tasks_UniTask_o local_58;
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb5c0
              );
    Il2CppMethodInitialized_184347a3e = '\x01';
  }
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.key.fields._Page_k__BackingField = 0;
  local_48.key.fields._PageSize_k__BackingField = 0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0;
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.key.fields = key.fields;
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete,onComplete);
  pMVar1 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb5c0
  ;
  local_48.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb5c0
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb5c0
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o *)&local_48,
             (pMVar1->field7_0x38).rgctx_data[2].method);
  puVar2 = (undefined8 *)il2cpp_runtime_helper_180814c10(&local_58,&local_48.__t__builder,0);
  local_58.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar2;
  local_58.fields._8_8_ = puVar2[1];
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(&local_58,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchEntry
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchEntry (ApplicationManagers_Changelog_AottgChangelogService_o* __this, System_String_o* id, System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o* onComplete, const MethodInfo* method);
// 0x182362630

void ApplicationManagers_Changelog_AottgChangelogService__FetchEntry
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,System_String_o *id,
               System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *onComplete,MethodInfo *method)

{
  System_String_o *pSVar1;
  Cysharp_Threading_Tasks_UniTask_o *pCVar2;
  Cysharp_Threading_Tasks_UniTask_o local_18;
  
  if (Il2CppMethodInitialized_184347a3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/changelog/");
    Il2CppMethodInitialized_184347a3c = '\x01';
  }
  if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
  }
  pSVar1 = System_Uri__EscapeDataString(id,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("/v1/changelog/",pSVar1,(MethodInfo *)0x0);
  pCVar2 = ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync
                     (&local_18,__this,pSVar1,onComplete,(MethodInfo *)0x0);
  local_18.fields.source = (pCVar2->fields).source;
  local_18.fields.token = (pCVar2->fields).token;
  local_18.fields._10_6_ = *(undefined6 *)&(pCVar2->fields).field_0xa;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(&local_18,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestVersionAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync (ApplicationManagers_Changelog_AottgChangelogService_o* __this, System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o* onComplete, const MethodInfo* method);
// 0x182362760

Cysharp_Threading_Tasks_UniTask_o *
ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync
          (Cysharp_Threading_Tasks_UniTask_o *__return_storage_ptr__,
          ApplicationManagers_Changelog_AottgChangelogService_o *__this,
          System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *onComplete,
          MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *pMVar2;
  undefined8 *puVar3;
  undefined1 local_58 [16];
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb4e8
              );
    Il2CppMethodInitialized_184347a3d = '\x01';
  }
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0;
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete,onComplete);
  pMVar2 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb4e8
  ;
  local_48.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb4e8
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb4e8
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o *)&local_48
             ,(pMVar2->field7_0x38).rgctx_data[2].method);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_180814c10(local_58,&local_48.__t__builder,0);
  uVar1 = puVar3[1];
  (__return_storage_ptr__->fields).source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar3;
  *(undefined8 *)&(__return_storage_ptr__->fields).token = uVar1;
  return __return_storage_ptr__;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchListAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key, System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o* onComplete, const MethodInfo* method);
// 0x1823628f0

Cysharp_Threading_Tasks_UniTask_o *
ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync
          (Cysharp_Threading_Tasks_UniTask_o *__return_storage_ptr__,
          ApplicationManagers_Changelog_AottgChangelogService_o *__this,
          ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key,
          System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *onComplete,MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *pMVar2;
  undefined8 *puVar3;
  undefined1 local_58 [16];
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb5c0
              );
    Il2CppMethodInitialized_184347a3e = '\x01';
  }
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.key.fields._Page_k__BackingField = 0;
  local_48.key.fields._PageSize_k__BackingField = 0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0;
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.key.fields = key.fields;
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete,onComplete);
  pMVar2 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb5c0
  ;
  local_48.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb5c0
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_40fb5c0
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o *)&local_48,
             (pMVar2->field7_0x38).rgctx_data[2].method);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_180814c10(local_58,&local_48.__t__builder,0);
  uVar1 = puVar3[1];
  (__return_storage_ptr__->fields).source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar3;
  *(undefined8 *)&(__return_storage_ptr__->fields).token = uVar1;
  return __return_storage_ptr__;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchEntryAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync (ApplicationManagers_Changelog_AottgChangelogService_o* __this, System_String_o* path, System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o* onComplete, const MethodInfo* method);
// 0x182362540

Cysharp_Threading_Tasks_UniTask_o *
ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync
          (Cysharp_Threading_Tasks_UniTask_o *__return_storage_ptr__,
          ApplicationManagers_Changelog_AottgChangelogService_o *__this,System_String_o *path,
          System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *onComplete,MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *pMVar2;
  undefined8 *puVar3;
  undefined1 local_58 [16];
  ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F
              );
    Il2CppMethodInitialized_184347a3f = '\x01';
  }
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.path = (System_String_o *)0x0;
  local_48.onComplete = (System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *)0x0;
  local_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_48.__u__1.fields.task.fields.token = 0;
  local_48.__u__1.fields.task.fields._18_6_ = 0;
  local_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_48.__t__builder,(void *)0x0);
  local_48.path = path;
  Il2CppCodeGenWriteBarrier(&local_48.path,path);
  local_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_48.onComplete,onComplete);
  pMVar2 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F;
  local_48.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o *)&local_48,
             (pMVar2->field7_0x38).rgctx_data[2].method);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_180814c10(local_58,&local_48.__t__builder,0);
  uVar1 = puVar3[1];
  (__return_storage_ptr__->fields).source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar3;
  *(undefined8 *)&(__return_storage_ptr__->fields).token = uVar1;
  return __return_storage_ptr__;
}


// ApplicationManagers.Changelog.AottgChangelogService$$SendGet
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_Changelog_AottgChangelogService__SendGet (System_String_o* path, const MethodInfo* method);
// 0x1823635a0

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_Changelog_AottgChangelogService__SendGet
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__,System_String_o *path,
          MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiResult_o *pAVar1;
  int16_t iVar2;
  undefined6 uVar3;
  ApplicationManagers_Api_AottgApiClient_o *__this;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar4;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_48;
  
  if (Il2CppMethodInitialized_184347a40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiClient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    Il2CppMethodInitialized_184347a40 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiClient);
  ApplicationManagers_Api_AottgApiClient___ctor(__this,(MethodInfo *)0x0);
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
  (request->fields).Method = "GET";
  Il2CppCodeGenWriteBarrier(&(request->fields).Method,"GET");
  (request->fields).Path = path;
  Il2CppCodeGenWriteBarrier(&(request->fields).Path,path);
  if (__this != (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
    pCVar4 = ApplicationManagers_Api_AottgApiClient__SendAsync
                       (&local_48,__this,request,(System_Threading_CancellationToken_o)0x0,(MethodInfo *)0x0);
    pAVar1 = (pCVar4->fields).result;
    iVar2 = (pCVar4->fields).token;
    uVar3 = *(undefined6 *)&(pCVar4->fields).field_0x12;
    (__return_storage_ptr__->fields).source = (pCVar4->fields).source;
    (__return_storage_ptr__->fields).result = pAVar1;
    (__return_storage_ptr__->fields).token = iVar2;
    *(undefined6 *)&(__return_storage_ptr__->fields).field_0x12 = uVar3;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService$$Ready<object>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogService__Ready_object_ (System_Action_AottgChangelogResult_T___o* onResult, const MethodInfo_68B1D0* method);
// 0x18068b1d0

bool ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
               (System_Action_AottgChangelogResult_T___o *onResult,MethodInfo_68B1D0 *method)

{
  ApplicationManagers_Changelog_AottgChangelogService_o *x;
  bool bVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar2;
  
  if (method->rgctx_data == (MethodInfo_68B1D0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    if (method->rgctx_data == (MethodInfo_68B1D0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  x = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (onResult != (System_Action_AottgChangelogResult_T___o *)0x0) {
      pAVar2 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                         ("not_initialized",
                          (MethodInfo_1572340 *)
                          method->rgctx_data->
                          _1_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache);
      (*(code *)(onResult->fields).invoke_impl)
                ((onResult->fields).method_code,pAVar2,(onResult->fields).method);
    }
    return false;
  }
  return true;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Ready<__Il2CppFullySharedGenericType>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogService__Ready___Il2CppFullySharedGenericType_ (System_Action_AottgChangelogResult_T___o* onResult, const MethodInfo_68B0C0* method);
// 0x18068b0c0

bool ApplicationManagers_Changelog_AottgChangelogService__Ready___Il2CppFullySharedGenericType_
               (System_Action_AottgChangelogResult_T___o *onResult,MethodInfo_68B0C0 *method)

{
  ApplicationManagers_Changelog_AottgChangelogService_o *x;
  MethodInfo *pMVar1;
  bool bVar2;
  void *local_res10;
  
  if (method->rgctx_data == (MethodInfo_68B0C0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    if (method->rgctx_data == (MethodInfo_68B0C0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  x = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (onResult != (System_Action_AottgChangelogResult_T___o *)0x0) {
      pMVar1 = method->rgctx_data->_1_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache;
      local_res10 = (void *)(*pMVar1->methodPointer)("not_initialized",pMVar1);
      pMVar1 = method->rgctx_data->_4_System_Action_AottgChangelogResult_T___Invoke;
      (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,onResult,&local_res10,local_res10);
    }
    return false;
  }
  return true;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Map<object>
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_T__o* ApplicationManagers_Changelog_AottgChangelogService__Map_object_ (ApplicationManagers_Api_AottgQueryResult_T__o* result, const MethodInfo_68AFE0* method);
// 0x18068afe0

ApplicationManagers_Changelog_AottgChangelogResult_T__o *
ApplicationManagers_Changelog_AottgChangelogService__Map_object_
          (ApplicationManagers_Api_AottgQueryResult_T__o *result,MethodInfo_68AFE0 *method)

{
  int iVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (method->rgctx_data == (MethodInfo_68AFE0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if (result == (ApplicationManagers_Api_AottgQueryResult_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (result->fields)._State_k__BackingField;
  if (iVar1 == 0) {
    pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
             ApplicationManagers_Changelog_AottgChangelogResult_object___LoadingNoCache
                       ((MethodInfo_1572AC0 *)
                        method->rgctx_data->
                        _2_ApplicationManagers_Changelog_AottgChangelogResult_T__LoadingNoCache);
    return pAVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
               ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyStaleRefreshing
                         ((result->fields)._Value_k__BackingField,
                          (MethodInfo_1573130 *)
                          method->rgctx_data->
                          _9_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyStaleRefreshing);
      return pAVar2;
    }
    if ((iVar1 != 3) && (iVar1 == 4)) {
      pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
               ApplicationManagers_Changelog_AottgChangelogResult_object___FailedRefreshStale
                         ((result->fields)._Value_k__BackingField,(result->fields)._Error_k__BackingField,
                          (MethodInfo_15729E0 *)
                          method->rgctx_data->
                          _11_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedRefreshStale);
      return pAVar2;
    }
    pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
             ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                       ((result->fields)._Error_k__BackingField,
                        (MethodInfo_1572340 *)
                        method->rgctx_data->
                        _12_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache);
    return pAVar2;
  }
  pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
           ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyFresh
                     ((result->fields)._Value_k__BackingField,(result->fields)._IsFromCache_k__BackingField,
                      (MethodInfo_1572ED0 *)
                      method->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyFresh)
  ;
  return pAVar2;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Map<__Il2CppFullySharedGenericType>
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_T__o* ApplicationManagers_Changelog_AottgChangelogService__Map___Il2CppFullySharedGenericType_ (ApplicationManagers_Api_AottgQueryResult_T__o* result, const MethodInfo_68AD70* method);
// 0x18068ad70

ApplicationManagers_Changelog_AottgChangelogResult_T__o *
ApplicationManagers_Changelog_AottgChangelogService__Map___Il2CppFullySharedGenericType_
          (ApplicationManagers_Api_AottgQueryResult_T__o *result,MethodInfo_68AD70 *method)

{
  MethodInfo_68AD70_RGCTXs *pMVar1;
  InvokerMethod pIVar2;
  MethodInfo *pMVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar9;
  Il2CppMethodPointer pIVar10;
  ulonglong uVar11;
  ApplicationManagers_Changelog_AottgChangelogResult_T__c *pAVar12;
  void **ppvVar13;
  MethodInfo *pMVar14;
  ApplicationManagers_Changelog_AottgChangelogResult_T__c *local_res8;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *local_res10;
  undefined8 auStack_60 [5];
  longlong alStack_38 [2];
  undefined1 local_28 [16];
  
  ppvVar13 = (void **)local_28;
  if (method->rgctx_data == (MethodInfo_68AD70_RGCTXs *)0x0) {
    auStack_60[0] = 0x18068ad96;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  uVar7 = (ulonglong)(method->rgctx_data->_6_T->_2).stack_slot_size;
  uVar11 = uVar7 + 0xf;
  if (uVar11 <= uVar7) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x18068adc4;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  pAVar12 = (ApplicationManagers_Changelog_AottgChangelogResult_T__c *)(local_28 + lVar4);
  if (result != (ApplicationManagers_Api_AottgQueryResult_T__o *)0x0) {
    pMVar14 = method->rgctx_data->_1_ApplicationManagers_Api_AottgQueryResult_T__get_State;
    pIVar10 = pMVar14->methodPointer;
    *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068ade6;
    iVar6 = (*pIVar10)(result,pMVar14);
    if (iVar6 == 0) {
      pMVar14 = method->rgctx_data->_2_ApplicationManagers_Changelog_AottgChangelogResult_T__LoadingNoCache;
      pIVar10 = pMVar14->methodPointer;
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068afc6;
      pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)(*pIVar10)(pMVar14);
      return pAVar9;
    }
    local_res8 = pAVar12;
    if (iVar6 == 1) {
      pMVar1 = method->rgctx_data;
      *(ApplicationManagers_Changelog_AottgChangelogResult_T__c **)((longlong)alStack_38 + lVar4) = pAVar12;
      pMVar14 = pMVar1->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
      pIVar10 = pMVar14->methodPointer;
      pIVar2 = pMVar14->invoker_method;
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068af54;
      (*pIVar2)(pIVar10,pMVar14,result,&stack0x00000008,*(void **)((longlong)alStack_38 + lVar4));
      pMVar14 = method->rgctx_data->_7_ApplicationManagers_Api_AottgQueryResult_T__get_IsFromCache;
      pIVar10 = pMVar14->methodPointer;
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068af65;
      uVar5 = (*pIVar10)(result,pMVar14);
      if (-1 < (int)(method->rgctx_data->_6_T->_1).byval_arg.bits) {
        pAVar12 = (pAVar12->_1).image;
      }
      local_res8 = (ApplicationManagers_Changelog_AottgChangelogResult_T__c *)CONCAT71(local_res8._1_7_,uVar5)
      ;
      local_28._0_8_ = pAVar12;
      pMVar14 = method->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyFresh;
      local_28._8_8_ = &stack0x00000008;
      pMVar3 = method->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyFresh;
      *(ApplicationManagers_Changelog_AottgChangelogResult_T__o ***)((longlong)alStack_38 + lVar4) =
           &local_res10;
      pIVar10 = pMVar3->methodPointer;
    }
    else {
      if (iVar6 != 2) {
        if ((iVar6 != 3) && (iVar6 == 4)) {
          pMVar1 = method->rgctx_data;
          *(ApplicationManagers_Changelog_AottgChangelogResult_T__c **)((longlong)alStack_38 + lVar4) =
               pAVar12;
          pMVar14 = pMVar1->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
          pIVar10 = pMVar14->methodPointer;
          pIVar2 = pMVar14->invoker_method;
          *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068ae34;
          (*pIVar2)(pIVar10,pMVar14,result,&stack0x00000008,*(void **)((longlong)alStack_38 + lVar4));
          pMVar14 = method->rgctx_data->_10_ApplicationManagers_Api_AottgQueryResult_T__get_Error;
          pIVar10 = pMVar14->methodPointer;
          *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068ae45;
          local_28._8_8_ = (*pIVar10)(result,pMVar14);
          if (-1 < (int)(method->rgctx_data->_6_T->_1).byval_arg.bits) {
            pAVar12 = (pAVar12->_1).image;
          }
          local_28._0_8_ = pAVar12;
          pMVar14 = method->rgctx_data->
                    _11_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedRefreshStale;
          *(ApplicationManagers_Changelog_AottgChangelogResult_T__c ***)((longlong)alStack_38 + lVar4) =
               &stack0x00000008;
          pIVar10 = pMVar14->methodPointer;
          pIVar2 = pMVar14->invoker_method;
          *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068ae87;
          (*pIVar2)(pIVar10,pMVar14,(void *)0x0,ppvVar13,*(void **)((longlong)alStack_38 + lVar4));
          return (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)local_res8;
        }
        pMVar14 = method->rgctx_data->_10_ApplicationManagers_Api_AottgQueryResult_T__get_Error;
        pIVar10 = pMVar14->methodPointer;
        *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068aea8;
        uVar8 = (*pIVar10)(result,pMVar14);
        pMVar14 = method->rgctx_data->_12_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache;
        pIVar10 = pMVar14->methodPointer;
        *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068aeb9;
        pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)(*pIVar10)(uVar8,pMVar14);
        return pAVar9;
      }
      pMVar1 = method->rgctx_data;
      *(ApplicationManagers_Changelog_AottgChangelogResult_T__c **)((longlong)alStack_38 + lVar4) = pAVar12;
      pMVar14 = pMVar1->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
      pIVar10 = pMVar14->methodPointer;
      pIVar2 = pMVar14->invoker_method;
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068aee7;
      (*pIVar2)(pIVar10,pMVar14,result,&stack0x00000008,*(void **)((longlong)alStack_38 + lVar4));
      if (-1 < (int)(method->rgctx_data->_6_T->_1).byval_arg.bits) {
        pAVar12 = (pAVar12->_1).image;
      }
      ppvVar13 = &stack0x00000008;
      pMVar14 = method->rgctx_data->
                _9_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyStaleRefreshing;
      *(ApplicationManagers_Changelog_AottgChangelogResult_T__o ***)((longlong)alStack_38 + lVar4) =
           &local_res10;
      pIVar10 = pMVar14->methodPointer;
      local_res8 = pAVar12;
    }
    pIVar2 = pMVar14->invoker_method;
    *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068af22;
    (*pIVar2)(pIVar10,pMVar14,(void *)0x0,ppvVar13,*(void **)((longlong)alStack_38 + lVar4));
    return local_res10;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x18068afd7;
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___ctor (ApplicationManagers_Changelog_AottgChangelogService_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_Changelog_AottgChangelogService___ctor(ApplicationManagers_Changelog_AottgChangelogService_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$.cctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___cctor (const MethodInfo* method);
// 0x1823636c0

void ApplicationManagers_Changelog_AottgChangelogService___cctor(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  System_TimeSpan_o value;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  undefined1 in_R9B;
  undefined7 in_register_00000089;
  System_Data_SqlTypes_SqlMoney_Fields local_28;
  System_Data_SqlTypes_SqlMoney_Fields local_18;
  
  if (Il2CppMethodInitialized_184347a41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_TimeSpan_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_184347a41 = '\x01';
  }
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  successTtl = System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  value = System_TimeSpan__FromSeconds(45.0,(MethodInfo *)0x0);
  local_28._fNotNull = false;
  local_28._1_7_ = 0;
  local_28._value = 0;
  System_Data_SqlTypes_SqlMoney___ctor_ae2650
            ((System_Data_SqlTypes_SqlMoney_o *)&local_28,(int64_t)value.fields._ticks,
             (int32_t)MethodInfo_System_Nullable_TimeSpan_ctor,
             (MethodInfo *)CONCAT71(in_register_00000089,in_R9B));
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
  local_18._fNotNull = local_28._fNotNull;
  local_18._1_7_ = local_28._1_7_;
  local_18._value = local_28._value;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this,successTtl,(System_Nullable_TimeSpan__o *)&local_18,true,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy,__this)
  ;
  return;
}


