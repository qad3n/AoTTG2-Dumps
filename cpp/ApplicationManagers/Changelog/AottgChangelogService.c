// Type: ApplicationManagers.Changelog.AottgChangelogService
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogService.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogService.UnitKey$$.cctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_UnitKey___cctor (const MethodInfo* method);
// 0x5e27ee0

void ApplicationManagers_Changelog_AottgChangelogService_UnitKey___cctor(MethodInfo *method)

{
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_ListKey___ctor (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t page, int32_t pageSize, const MethodInfo* method);
// 0x5e272e0

void ApplicationManagers_Changelog_AottgChangelogService_ListKey___ctor
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o *__this,int32_t page,
               int32_t pageSize,MethodInfo *method)

{
  (__this->fields)._Page_k__BackingField = page;
  (__this->fields)._PageSize_k__BackingField = pageSize;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$get_Page
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_Page (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, const MethodInfo* method);
// 0x5e27ef0

int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_Page
                  (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o *__this,MethodInfo *method)

{
  return (__this->fields)._Page_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$set_Page
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_Page (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t value, const MethodInfo* method);
// 0x5e27f00

void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_Page
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._Page_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$get_PageSize
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_PageSize (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, const MethodInfo* method);
// 0x5e27f10

int32_t ApplicationManagers_Changelog_AottgChangelogService_ListKey__get_PageSize
                  (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o *__this,MethodInfo *method)

{
  return (__this->fields)._PageSize_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogService.ListKey$$set_PageSize
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_PageSize (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o __this, int32_t value, const MethodInfo* method);
// 0x5e27f20

void ApplicationManagers_Changelog_AottgChangelogService_ListKey__set_PageSize
               (ApplicationManagers_Changelog_AottgChangelogService_ListKey_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._PageSize_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass10_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x5e27500

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___ctor
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass10_0$$<GetEntry>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___GetEntry_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o* __this, ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o* result, const MethodInfo* method);
// 0x5e27f30

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0___GetEntry_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o *result,MethodInfo *method)

{
  System_Action_AottgChangelogResult_ChangelogEntryResponse___o *pSVar1;
  code *vtableDispatch;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (Il2CppMethodInitialized_075484fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    Il2CppMethodInitialized_075484fc = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar2 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                     ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,
                      (MethodInfo_3487A50 *)
                      MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_ChangelogEntryResponse
                     );
  if (pSVar1 == (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass7_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x5e26ef0

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___ctor
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass7_0$$<GetLatestVersion>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___GetLatestVersion_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o* __this, ApplicationManagers_Api_AottgQueryResult_LatestChangelogVersionResponse__o* result, const MethodInfo* method);
// 0x5e27fc0

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0___GetLatestVersion_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_LatestChangelogVersionResponse__o *result,
               MethodInfo *method)

{
  System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o *pSVar1;
  code *vtableDispatch;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (Il2CppMethodInitialized_075484fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_LatestChangelogVersionResponse
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    Il2CppMethodInitialized_075484fd = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar2 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                     ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,
                      (MethodInfo_3487A50 *)
                      MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_LatestChangelogVersionResponse
                     );
  if (pSVar1 == (System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass8_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x5e270a0

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___ctor
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass8_0$$<GetLatest>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___GetLatest_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o* __this, ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o* result, const MethodInfo* method);
// 0x5e28050

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0___GetLatest_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o *result,MethodInfo *method)

{
  System_Action_AottgChangelogResult_ChangelogEntryResponse___o *pSVar1;
  code *vtableDispatch;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (Il2CppMethodInitialized_075484fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_ChangelogEntryResponse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    Il2CppMethodInitialized_075484fe = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar2 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                     ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,
                      (MethodInfo_3487A50 *)
                      MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_ChangelogEntryResponse
                     );
  if (pSVar1 == (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass9_0$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___ctor (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x5e272d0

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___ctor
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass9_0$$<GetList>b__0
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___GetList_b__0 (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o* __this, ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__o* result, const MethodInfo* method);
// 0x5e280e0

void ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0___GetList_b__0
               (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o *__this,
               ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__o *result,
               MethodInfo *method)

{
  System_Action_AottgChangelogResult_PublicChangelogListResponse___o *pSVar1;
  code *vtableDispatch;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (Il2CppMethodInitialized_075484ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_PublicChangelogListResponse
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    Il2CppMethodInitialized_075484ff = '\x01';
  }
  pSVar1 = (__this->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar2 = ApplicationManagers_Changelog_AottgChangelogService__Map_object_
                     ((ApplicationManagers_Api_AottgQueryResult_T__o *)result,
                      (MethodInfo_3487A50 *)
                      MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Map_PublicChangelogListResponse
                     );
  if (pSVar1 == (System_Action_AottgChangelogResult_PublicChangelogListResponse___o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,pAVar2,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchEntryAsync>d__18$$MoveNext
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__MoveNext (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this, const MethodInfo* method);
// 0x5e28170
// eh: try 0x5e28248..0x5e2864e -> pad 0x5e28652 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e2867b..0x5e286dc -> pad 0x5e286dc (+1 call sites) cleanup
// eh: try 0x5e286df..0x5e286e4 -> pad 0x5e286ec catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e285f9: nop dword ptr [rax]
// asm:   0x5e2864e: jmp 0x5e28668
// asm:   0x5e28650: jmp 0x5e28668
// asm:   0x5e28652: jmp 0x5e28668
// asm:   0x5e28654: jmp 0x5e28668
// asm:   0x5e28656: jmp 0x5e28668
// asm:   0x5e28658: jmp 0x5e28668
// asm:   0x5e2865a: jmp 0x5e28668
// asm:   0x5e2865c: jmp 0x5e28668
// asm:   0x5e2865e: jmp 0x5e28668
// asm:   0x5e28660: jmp 0x5e28668
// asm:   0x5e28662: jmp 0x5e28668
// asm:   0x5e28664: jmp 0x5e28668
// asm:   0x5e28666: jmp 0x5e28668
// asm:   0x5e28668: mov r14, rax
// asm:   0x5e2866b: cmp edx, 1
// asm:   0x5e2866e: jne 0x5e286e4
// asm:   0x5e28670: mov rdi, r14
// asm:   0x5e28673: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e28678: mov rbx, rax
// asm:   0x5e2867b: lea rdi, [rip + 0x144fa3e]  ; TypeInfo_System_Exception
// asm:   0x5e28682: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e28687: mov rcx, qword ptr [rbx]
// asm:   0x5e2868a: mov rsi, qword ptr [rcx]
// asm:   0x5e2868d: mov rdi, rax
// asm:   0x5e28690: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e28695: test al, al
// asm:   0x5e28697: je 0x5e286bb
// asm:   0x5e28699: mov rbx, qword ptr [rbx]
// asm:   0x5e2869c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e286a1: mov dword ptr [r15], 0xfffffffe
// asm:   0x5e286a8: add r15, 8
// asm:   0x5e286ac: mov rdi, r15
// asm:   0x5e286af: mov rsi, rbx
// asm:   0x5e286b2: xor edx, edx
// asm:   0x5e286b4: call 0x475eec0  ; il2cpp_runtime_helper_0475eec0()
// asm:   0x5e286b9: jmp 0x5e2863e
// asm:   0x5e286bb: mov edi, 8
// asm:   0x5e286c0: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e286c5: mov rcx, qword ptr [rbx]
// asm:   0x5e286c8: mov qword ptr [rax], rcx
// asm:   0x5e286cb: lea rsi, [rip + 0x1004e2e]
// asm:   0x5e286d2: mov rdi, rax
// asm:   0x5e286d5: xor edx, edx
// asm:   0x5e286d7: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e286dc: mov r14, rax
// asm:   0x5e286df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e286e4: mov rdi, r14
// asm:   0x5e286e7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e286ec: mov rdi, rax
// asm:   0x5e286ef: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__MoveNext
               (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o *__this,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *pSVar3;
  Il2CppObject *pIVar4;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  Il2CppClass *pIVar9;
  VirtualInvokeData *pVVar10;
  ApplicationManagers_Api_AottgApiResult_o *pAVar11;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar12;
  System_String_o *pSVar13;
  ulong uVar14;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long lVar15;
  Il2CppObject *local_88;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_80;
  undefined8 local_78;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_68;
  System_String_o *local_48;
  Il2CppObject *local_40;
  Il2CppObject *local_38;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_30;
  int16_t local_28;
  undefined6 uStack_26;
  
  if (Il2CppMethodInitialized_07548500 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26b8
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
    Il2CppMethodInitialized_07548500 = '\x01';
    in_RDX = extraout_RDX;
  }
  local_40 = (Il2CppObject *)0x0;
  local_48 = (System_String_o *)0x0;
  local_88 = (Il2CppObject *)0x0;
  pAStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_78 = 0;
  if ((__this->fields).__1__state == 0) {
    pCVar5 = &(__this->fields).__u__1;
    local_78._0_2_ = (pCVar5->fields).task.fields.token;
    local_78._2_6_ = *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12;
    local_88 = (Il2CppObject *)(__this->fields).__u__1.fields.task.fields.source;
    pAStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)(__this->fields).__u__1.fields.task.fields.result
    ;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    pSVar13 = (__this->fields).path;
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
      in_RDX = extraout_RDX_00;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet(&local_68,pSVar13,in_RDX);
    local_28 = local_68.fields.token;
    uStack_26 = local_68.fields._18_6_;
    local_38 = (Il2CppObject *)local_68.fields.source;
    pAStack_30 = local_68.fields.result;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_68.fields.token = 0;
    local_68.fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_68.fields.token = local_28;
    local_68.fields._18_6_ = uStack_26;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_38;
    local_68.fields.result = pAStack_30;
    Il2CppCodeGenWriteBarrier((void **)&local_68);
    local_78._0_2_ = local_68.fields.token;
    local_78._2_6_ = local_68.fields._18_6_;
    local_88 = (Il2CppObject *)local_68.fields.source;
    pAStack_80 = local_68.fields.result;
    cVar7 = il2cpp_runtime_helper_045ee340();
    if (cVar7 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source =
           (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_88;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pAStack_80;
      pCVar5 = &(__this->fields).__u__1;
      (pCVar5->fields).task.fields.token = (int16_t)local_78;
      *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12 = local_78._2_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      il2cpp_runtime_helper_0350cae0(&(__this->fields).__t__builder,&local_88,__this,
                   MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26b8
                  );
      return;
    }
  }
  pIVar4 = local_88;
  if (local_88 == (Il2CppObject *)0x0) {
    pAVar11 = pAStack_80;
  }
  else {
    sVar6 = (int16_t)local_78;
    pIVar9 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult->klass;
    if (((pIVar9->_2).bitflags1 & 1) == 0) {
      pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
    }
    pIVar9 = pIVar9->rgctx_data[5].klass;
    if (((pIVar9->_2).bitflags1 & 1) == 0) {
      pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
    }
    pIVar1 = pIVar4->klass;
    uVar14 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar15) == pIVar9) {
          pVVar10 = (VirtualInvokeData *)&pIVar1->vtable[*(int *)((long)&pIVar2->offset + lVar15)].methodPtr;
          goto label_05e283f8;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4,pIVar9,0);
label_05e283f8:
    pAVar11 = (ApplicationManagers_Api_AottgApiResult_o *)
              (*pVVar10->methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar10->method);
  }
  if (pAVar11 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pAVar11->fields)._Success_k__BackingField == false) {
    pSVar3 = (__this->fields).onComplete;
    if ((pAVar11->fields)._StatusCode_k__BackingField == 0x194) {
      if (pSVar3 != (System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                            ((Il2CppObject *)0x0,
                             (MethodInfo_4CB4D60 *)
                             MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Ok
                            );
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
      }
    }
    else if (pSVar3 != (System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *)0x0) {
      pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((pAVar11->fields)._Error_k__BackingField,
                           (MethodInfo_4CB4E10 *)
                           MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Fail
                          );
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
    }
  }
  else {
    pSVar13 = (pAVar11->fields)._ResponseText_k__BackingField;
    if (Il2CppMethodInitialized_075484e4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_ChangelogEntryResponse
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_ChangelogEntryResponse);
      Il2CppMethodInitialized_075484e4 = '\x01';
    }
    __this_00 = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_ChangelogEntryResponse
                          );
    ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry,
               (MethodInfo_3DB9310 *)0x0);
    bVar8 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                      (pSVar13,__this_00,&local_40,&local_48,
                       (MethodInfo_34878C0 *)
                       MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_ChangelogEntryResponse
                      );
    if (bVar8) {
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                            (local_40,(MethodInfo_4CB4D60 *)
                                      MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Ok
                            );
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
      }
    }
    else {
      pSVar13 = System_String__Concat_5301f10
                          ("AottgChangelogService: failed to parse ",(__this->fields).path," response.",(MethodInfo *)0x0
                          );
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            (local_48,(MethodInfo_4CB4E10 *)
                                      MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_ChangelogEntryResponse_Fail
                            );
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
      }
    }
  }
  (__this->fields).__1__state = -2;
  if (Il2CppMethodInitialized_07541078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise);
    Il2CppMethodInitialized_07541078 = '\x01';
  }
  pIVar4 = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar4->klass;
    uVar14 = (ulong)(pIVar9->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar9->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)
             ((long)&pIVar2->interfaceType + lVar15) ==
            TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise) {
          pVVar10 = (VirtualInvokeData *)
                    &pIVar9->vtable[*(int *)((long)&pIVar2->offset + lVar15) + 2].methodPtr;
          goto label_05e28635;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar4,(Il2CppClass *)
                                TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,2
                        );
label_05e28635:
    (*pVVar10->methodPtr)(pIVar4,pVVar10->method);
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchEntryAsync>d__18$$SetStateMachine
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__SetStateMachine (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5e28700

void ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__SetStateMachine
               (ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchLatestVersionAsync>d__16$$MoveNext
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this, const MethodInfo* method);
// 0x5e28710
// eh: try 0x5e287e4..0x5e28b9e -> pad 0x5e28ba8 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e28bc7..0x5e28c28 -> pad 0x5e28c28 (+1 call sites) cleanup
// eh: try 0x5e28c2b..0x5e28c30 -> pad 0x5e28c38 catch (...) [compiler noexcept guard]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e28b9e: jmp 0x5e28bb4
// asm:   0x5e28ba0: jmp 0x5e28bb4
// asm:   0x5e28ba2: jmp 0x5e28bb4
// asm:   0x5e28ba4: jmp 0x5e28bb4
// asm:   0x5e28ba6: jmp 0x5e28bb4
// asm:   0x5e28ba8: jmp 0x5e28bb4
// asm:   0x5e28baa: jmp 0x5e28bb4
// asm:   0x5e28bac: jmp 0x5e28bb4
// asm:   0x5e28bae: jmp 0x5e28bb4
// asm:   0x5e28bb0: jmp 0x5e28bb4
// asm:   0x5e28bb2: jmp 0x5e28bb4
// asm:   0x5e28bb4: mov rbx, rax
// asm:   0x5e28bb7: cmp edx, 1
// asm:   0x5e28bba: jne 0x5e28c30
// asm:   0x5e28bbc: mov rdi, rbx
// asm:   0x5e28bbf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e28bc4: mov rbx, rax
// asm:   0x5e28bc7: lea rdi, [rip + 0x144f4f2]  ; TypeInfo_System_Exception
// asm:   0x5e28bce: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e28bd3: mov rcx, qword ptr [rbx]
// asm:   0x5e28bd6: mov rsi, qword ptr [rcx]
// asm:   0x5e28bd9: mov rdi, rax
// asm:   0x5e28bdc: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e28be1: test al, al
// asm:   0x5e28be3: je 0x5e28c07
// asm:   0x5e28be5: mov rbx, qword ptr [rbx]
// asm:   0x5e28be8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e28bed: mov dword ptr [r14], 0xfffffffe
// asm:   0x5e28bf4: add r14, 8
// asm:   0x5e28bf8: mov rdi, r14
// asm:   0x5e28bfb: mov rsi, rbx
// asm:   0x5e28bfe: xor edx, edx
// asm:   0x5e28c00: call 0x475eec0  ; il2cpp_runtime_helper_0475eec0()
// asm:   0x5e28c05: jmp 0x5e28b8e
// asm:   0x5e28c07: mov edi, 8
// asm:   0x5e28c0c: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e28c11: mov rcx, qword ptr [rbx]
// asm:   0x5e28c14: mov qword ptr [rax], rcx
// asm:   0x5e28c17: lea rsi, [rip + 0x10048e2]
// asm:   0x5e28c1e: mov rdi, rax
// asm:   0x5e28c21: xor edx, edx
// asm:   0x5e28c23: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e28c28: mov rbx, rax
// asm:   0x5e28c2b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e28c30: mov rdi, rbx
// asm:   0x5e28c33: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e28c38: mov rdi, rax
// asm:   0x5e28c3b: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
               (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o *__this,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_String_o *json;
  System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *pSVar3;
  Il2CppObject *pIVar4;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  Il2CppClass *pIVar9;
  VirtualInvokeData *pVVar10;
  ApplicationManagers_Api_AottgApiResult_o *pAVar11;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar12;
  ulong uVar13;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long lVar14;
  Il2CppObject *local_88;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_80;
  undefined8 local_78;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_68;
  System_String_o *local_48;
  Il2CppObject *local_40;
  Il2CppObject *local_38;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_30;
  int16_t local_28;
  undefined6 uStack_26;
  
  if (Il2CppMethodInitialized_07548501 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26c0
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
    Il2CppMethodInitialized_07548501 = '\x01';
    in_RDX = extraout_RDX;
  }
  local_40 = (Il2CppObject *)0x0;
  local_48 = (System_String_o *)0x0;
  local_88 = (Il2CppObject *)0x0;
  pAStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_78 = 0;
  if ((__this->fields).__1__state == 0) {
    pCVar5 = &(__this->fields).__u__1;
    local_78._0_2_ = (pCVar5->fields).task.fields.token;
    local_78._2_6_ = *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12;
    local_88 = (Il2CppObject *)(__this->fields).__u__1.fields.task.fields.source;
    pAStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)(__this->fields).__u__1.fields.task.fields.result
    ;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
      in_RDX = extraout_RDX_00;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet(&local_68,"/v1/changelog/latest-version",in_RDX);
    local_28 = local_68.fields.token;
    uStack_26 = local_68.fields._18_6_;
    local_38 = (Il2CppObject *)local_68.fields.source;
    pAStack_30 = local_68.fields.result;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_68.fields.token = 0;
    local_68.fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_68.fields.token = local_28;
    local_68.fields._18_6_ = uStack_26;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_38;
    local_68.fields.result = pAStack_30;
    Il2CppCodeGenWriteBarrier((void **)&local_68);
    local_78._0_2_ = local_68.fields.token;
    local_78._2_6_ = local_68.fields._18_6_;
    local_88 = (Il2CppObject *)local_68.fields.source;
    pAStack_80 = local_68.fields.result;
    cVar7 = il2cpp_runtime_helper_045ee340();
    if (cVar7 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source =
           (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_88;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pAStack_80;
      pCVar5 = &(__this->fields).__u__1;
      (pCVar5->fields).task.fields.token = (int16_t)local_78;
      *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12 = local_78._2_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      il2cpp_runtime_helper_0350cc10(&(__this->fields).__t__builder,&local_88,__this,
                   MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26c0
                  );
      return;
    }
  }
  pIVar4 = local_88;
  if (local_88 == (Il2CppObject *)0x0) {
    pAVar11 = pAStack_80;
  }
  else {
    sVar6 = (int16_t)local_78;
    pIVar9 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult->klass;
    if (((pIVar9->_2).bitflags1 & 1) == 0) {
      pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
    }
    pIVar9 = pIVar9->rgctx_data[5].klass;
    if (((pIVar9->_2).bitflags1 & 1) == 0) {
      pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
    }
    pIVar1 = pIVar4->klass;
    uVar13 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar14) == pIVar9) {
          pVVar10 = (VirtualInvokeData *)&pIVar1->vtable[*(int *)((long)&pIVar2->offset + lVar14)].methodPtr;
          goto label_05e28998;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4,pIVar9,0);
label_05e28998:
    pAVar11 = (ApplicationManagers_Api_AottgApiResult_o *)
              (*pVVar10->methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar10->method);
  }
  if (pAVar11 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pAVar11->fields)._Success_k__BackingField == false) {
    pSVar3 = (__this->fields).onComplete;
    if (pSVar3 != (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0) {
      pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((pAVar11->fields)._Error_k__BackingField,
                           (MethodInfo_4CB4E10 *)
                           MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Fail
                          );
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
    }
  }
  else {
    json = (pAVar11->fields)._ResponseText_k__BackingField;
    if (Il2CppMethodInitialized_075484e3 == '\0') {
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
      Il2CppMethodInitialized_075484e3 = '\x01';
    }
    __this_00 = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_LatestChangelogVersionResponse
                          );
    ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseLatestVersion,
               (MethodInfo_3DB9310 *)0x0);
    bVar8 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                      (json,__this_00,&local_40,&local_48,
                       (MethodInfo_34878C0 *)
                       MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_LatestChangelogVersionResponse
                      );
    if (bVar8) {
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                            (local_40,(MethodInfo_4CB4D60 *)
                                      MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Ok
                            );
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
      }
    }
    else {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)"AottgChangelogService: failed to parse /v1/changelog/latest-version response.",(MethodInfo *)0x0);
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0) {
        pAVar12 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            (local_48,(MethodInfo_4CB4E10 *)
                                      MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_LatestChangelogVersionResponse_Fail
                            );
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar12,(pSVar3->fields).method);
      }
    }
  }
  (__this->fields).__1__state = -2;
  if (Il2CppMethodInitialized_07541078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise);
    Il2CppMethodInitialized_07541078 = '\x01';
  }
  pIVar4 = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar4->klass;
    uVar13 = (ulong)(pIVar9->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar2 = (pIVar9->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)
             ((long)&pIVar2->interfaceType + lVar14) ==
            TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise) {
          pVVar10 = (VirtualInvokeData *)
                    &pIVar9->vtable[*(int *)((long)&pIVar2->offset + lVar14) + 2].methodPtr;
          goto label_05e28b85;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar4,(Il2CppClass *)
                                TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,2
                        );
label_05e28b85:
    (*pVVar10->methodPtr)(pIVar4,pVVar10->method);
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchLatestVersionAsync>d__16$$SetStateMachine
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__SetStateMachine (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5e28c40

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__SetStateMachine
               (ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchListAsync>d__17$$MoveNext
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this, const MethodInfo* method);
// 0x5e28c50
// eh: try 0x5e28d32..0x5e2914e -> pad 0x5e29160 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e2917d..0x5e291de -> pad 0x5e291de (+1 call sites) cleanup
// eh: try 0x5e291e1..0x5e291e6 -> pad 0x5e291ee catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2914e: jmp 0x5e2916a
// asm:   0x5e29150: jmp 0x5e2916a
// asm:   0x5e29152: jmp 0x5e2916a
// asm:   0x5e29154: jmp 0x5e2916a
// asm:   0x5e29156: jmp 0x5e2916a
// asm:   0x5e29158: jmp 0x5e2916a
// asm:   0x5e2915a: jmp 0x5e2916a
// asm:   0x5e2915c: jmp 0x5e2916a
// asm:   0x5e2915e: jmp 0x5e2916a
// asm:   0x5e29160: jmp 0x5e2916a
// asm:   0x5e29162: jmp 0x5e2916a
// asm:   0x5e29164: jmp 0x5e2916a
// asm:   0x5e29166: jmp 0x5e2916a
// asm:   0x5e29168: jmp 0x5e2916a
// asm:   0x5e2916a: mov r14, rax
// asm:   0x5e2916d: cmp edx, 1
// asm:   0x5e29170: jne 0x5e291e6
// asm:   0x5e29172: mov rdi, r14
// asm:   0x5e29175: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2917a: mov rbx, rax
// asm:   0x5e2917d: lea rdi, [rip + 0x144ef3c]  ; TypeInfo_System_Exception
// asm:   0x5e29184: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e29189: mov rcx, qword ptr [rbx]
// asm:   0x5e2918c: mov rsi, qword ptr [rcx]
// asm:   0x5e2918f: mov rdi, rax
// asm:   0x5e29192: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e29197: test al, al
// asm:   0x5e29199: je 0x5e291bd
// asm:   0x5e2919b: mov rbx, qword ptr [rbx]
// asm:   0x5e2919e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e291a3: mov dword ptr [r15], 0xfffffffe
// asm:   0x5e291aa: add r15, 8
// asm:   0x5e291ae: mov rdi, r15
// asm:   0x5e291b1: mov rsi, rbx
// asm:   0x5e291b4: xor edx, edx
// asm:   0x5e291b6: call 0x475eec0  ; il2cpp_runtime_helper_0475eec0()
// asm:   0x5e291bb: jmp 0x5e2913e
// asm:   0x5e291bd: mov edi, 8
// asm:   0x5e291c2: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e291c7: mov rcx, qword ptr [rbx]
// asm:   0x5e291ca: mov qword ptr [rax], rcx
// asm:   0x5e291cd: lea rsi, [rip + 0x100432c]
// asm:   0x5e291d4: mov rdi, rax
// asm:   0x5e291d7: xor edx, edx
// asm:   0x5e291d9: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e291de: mov r14, rax
// asm:   0x5e291e1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e291e6: mov rdi, r14
// asm:   0x5e291e9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e291ee: mov rdi, rax
// asm:   0x5e291f1: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext
               (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o *__this,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *pSVar3;
  Il2CppObject *pIVar4;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  System_String_o *pSVar9;
  System_String_o *str3;
  Il2CppClass *pIVar10;
  VirtualInvokeData *pVVar11;
  ApplicationManagers_Api_AottgApiResult_o *pAVar12;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar13;
  ulong uVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  long lVar15;
  int32_t local_8c;
  Il2CppObject *local_88;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_80;
  undefined8 local_78;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_68;
  System_String_o *local_48;
  Il2CppObject *local_40;
  Il2CppObject *local_38;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_30;
  int16_t local_28;
  undefined6 uStack_26;
  
  if (Il2CppMethodInitialized_07548502 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Fail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Ok);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26c8
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
    Il2CppMethodInitialized_07548502 = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  local_48 = (System_String_o *)0x0;
  local_88 = (Il2CppObject *)0x0;
  pAStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_78 = 0;
  local_8c = 0;
  if ((__this->fields).__1__state == 0) {
    pCVar5 = &(__this->fields).__u__1;
    local_78._0_2_ = (pCVar5->fields).task.fields.token;
    local_78._2_6_ = *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12;
    local_88 = (Il2CppObject *)(__this->fields).__u__1.fields.task.fields.source;
    pAStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)(__this->fields).__u__1.fields.task.fields.result
    ;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    local_8c = (__this->fields).key.fields._Page_k__BackingField;
    pSVar9 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
    local_8c = (__this->fields).key.fields._PageSize_k__BackingField;
    str3 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_5302810
                       ("/v1/changelog?page=",pSVar9,"&pageSize=",str3,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
      method_00 = extraout_RDX_00;
    }
    ApplicationManagers_Changelog_AottgChangelogService__SendGet(&local_68,pSVar9,method_00);
    local_28 = local_68.fields.token;
    uStack_26 = local_68.fields._18_6_;
    local_38 = (Il2CppObject *)local_68.fields.source;
    pAStack_30 = local_68.fields.result;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_68.fields.token = 0;
    local_68.fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_68.fields.token = local_28;
    local_68.fields._18_6_ = uStack_26;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_38;
    local_68.fields.result = pAStack_30;
    Il2CppCodeGenWriteBarrier((void **)&local_68);
    local_78._0_2_ = local_68.fields.token;
    local_78._2_6_ = local_68.fields._18_6_;
    local_88 = (Il2CppObject *)local_68.fields.source;
    pAStack_80 = local_68.fields.result;
    cVar7 = il2cpp_runtime_helper_045ee340();
    if (cVar7 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source =
           (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_88;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pAStack_80;
      pCVar5 = &(__this->fields).__u__1;
      (pCVar5->fields).task.fields.token = (int16_t)local_78;
      *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12 = local_78._2_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      il2cpp_runtime_helper_0350cd40(&(__this->fields).__t__builder,&local_88,__this,
                   MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26c8
                  );
      return;
    }
  }
  pIVar4 = local_88;
  if (local_88 == (Il2CppObject *)0x0) {
    pAVar12 = pAStack_80;
  }
  else {
    sVar6 = (int16_t)local_78;
    pIVar10 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult->klass;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    pIVar10 = pIVar10->rgctx_data[5].klass;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    pIVar1 = pIVar4->klass;
    uVar14 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar15) == pIVar10) {
          pVVar11 = (VirtualInvokeData *)&pIVar1->vtable[*(int *)((long)&pIVar2->offset + lVar15)].methodPtr;
          goto label_05e28f48;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4,pIVar10,0);
label_05e28f48:
    pAVar12 = (ApplicationManagers_Api_AottgApiResult_o *)
              (*pVVar11->methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar11->method);
  }
  if (pAVar12 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pAVar12->fields)._Success_k__BackingField == false) {
    pSVar3 = (__this->fields).onComplete;
    if (pSVar3 != (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0) {
      pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                          ((pAVar12->fields)._Error_k__BackingField,
                           (MethodInfo_4CB4E10 *)
                           MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Fail
                          );
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar13,(pSVar3->fields).method);
    }
  }
  else {
    pSVar9 = (pAVar12->fields)._ResponseText_k__BackingField;
    if (Il2CppMethodInitialized_075484e5 == '\0') {
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
      Il2CppMethodInitialized_075484e5 = '\x01';
    }
    __this_00 = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_PublicChangelogListResponse
                          );
    ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseList,
               (MethodInfo_3DB9310 *)0x0);
    bVar8 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                      (pSVar9,__this_00,&local_40,&local_48,
                       (MethodInfo_34878C0 *)
                       MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_PublicChangelogListResponse
                      );
    if (bVar8) {
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0) {
        pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Ok
                            (local_40,(MethodInfo_4CB4D60 *)
                                      MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Ok
                            );
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar13,(pSVar3->fields).method);
      }
    }
    else {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)"AottgChangelogService: failed to parse /v1/changelog response.",(MethodInfo *)0x0);
      pSVar3 = (__this->fields).onComplete;
      if (pSVar3 != (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0) {
        pAVar13 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                            (local_48,(MethodInfo_4CB4E10 *)
                                      MethodInfo_ApplicationManagers_Api_AottgQueryFetchResult_PublicChangelogListResponse_Fail
                            );
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar13,(pSVar3->fields).method);
      }
    }
  }
  (__this->fields).__1__state = -2;
  if (Il2CppMethodInitialized_07541078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise);
    Il2CppMethodInitialized_07541078 = '\x01';
  }
  pIVar4 = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar10 = pIVar4->klass;
    uVar14 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar2 = (pIVar10->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)
             ((long)&pIVar2->interfaceType + lVar15) ==
            TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise) {
          pVVar11 = (VirtualInvokeData *)
                    &pIVar10->vtable[*(int *)((long)&pIVar2->offset + lVar15) + 2].methodPtr;
          goto label_05e29135;
        }
        lVar15 = lVar15 + 0x10;
      } while (uVar14 * 0x10 != lVar15);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar4,(Il2CppClass *)
                                TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,2
                        );
label_05e29135:
    (*pVVar11->methodPtr)(pIVar4,pVVar11->method);
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService.<FetchListAsync>d__17$$SetStateMachine
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__SetStateMachine (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5e29200

void ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__SetStateMachine
               (ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Init
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__Init (const MethodInfo* method);
// 0x5e269c0

void ApplicationManagers_Changelog_AottgChangelogService__Init(MethodInfo *method)

{
  ApplicationManagers_Changelog_AottgChangelogService_StaticFields *pAVar1;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar2;
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar3;
  System_Action_T1__T2__o *pSVar4;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__LatestChangelogVersionResponse__o
  *__this;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__ChangelogEntryResponse__o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__PublicChangelogListResponse__o
  *__this_01;
  System_Action_string__Action_AottgQueryFetchResult_ChangelogEntryResponse____o *__this_02;
  ApplicationManagers_Api_AottgQueryCache_string__ChangelogEntryResponse__o *__this_03;
  
  if (Il2CppMethodInitialized_075484ef == '\0') {
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
    Il2CppMethodInitialized_075484ef = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pAVar3 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_AottgChangelogService);
  pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields;
  pAVar1->_instance = pAVar3;
  Il2CppCodeGenWriteBarrier(&pAVar1->_instance);
  pAVar3 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
  pSVar4 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Action_AottgChangelogService_UnitKey_Action_AottgQueryFetchResult_LatestChangelogVersionR
                     );
  System_Action_AottgChangelogService_UnitKey__object____ctor
            (pSVar4,(Il2CppObject *)pAVar3,
             (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchLatestVersion,
             (MethodInfo_4A8AE50 *)0x0);
  pAVar2 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp
                     );
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
             (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)pSVar4,
             (System_Func_DateTimeOffset__o *)0x0,pAVar2,
             (MethodInfo_4CB35A0 *)
             MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp
            );
  if (pAVar3 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
    (pAVar3->fields)._latestVersionCache = __this;
    Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._latestVersionCache);
    pAVar3 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
    pSVar4 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Action_AottgChangelogService_UnitKey_Action_AottgQueryFetchResult_ChangelogEntryResponse
                       );
    System_Action_AottgChangelogService_UnitKey__object____ctor
              (pSVar4,(Il2CppObject *)pAVar3,
               (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchLatestEntry,
               (MethodInfo_4A8AE50 *)0x0);
    pAVar2 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse
                          );
    ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object____ctor
              ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_00,
               (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)pSVar4,
               (System_Func_DateTimeOffset__o *)0x0,pAVar2,
               (MethodInfo_4CB35A0 *)
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse_cto
              );
    if (pAVar3 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
      (pAVar3->fields)._latestEntryCache = __this_00;
      Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._latestEntryCache);
      pAVar3 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
      pSVar4 = (System_Action_T1__T2__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Action_AottgChangelogService_ListKey_Action_AottgQueryFetchResult_PublicChangelogListResp
                         );
      System_Action_AottgChangelogService_ListKey__object____ctor
                (pSVar4,(Il2CppObject *)pAVar3,
                 (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchList,
                 (MethodInfo_4A8AD90 *)0x0);
      pAVar2 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons
                            );
      ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object____ctor
                ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_01,
                 (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)pSVar4,
                 (System_Func_DateTimeOffset__o *)0x0,pAVar2,
                 (MethodInfo_4CB29E0 *)
                 MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons
                );
      if (pAVar3 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
        (pAVar3->fields)._listCache = __this_01;
        Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._listCache);
        pAVar3 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Action_string_Action_AottgQueryFetchResult_ChangelogEntryResponse
                              );
        System_Action_object__object____ctor
                  ((System_Action_object__object__o *)__this_02,(Il2CppObject *)pAVar3,
                   (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchEntry,
                   (MethodInfo_4A89FC0 *)0x0);
        pAVar2 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy;
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse)
        ;
        ApplicationManagers_Api_AottgQueryCache_object__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_03,
                   (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)__this_02,
                   (System_Func_DateTimeOffset__o *)0x0,pAVar2,
                   (MethodInfo_4CB0740 *)
                   MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse_ctor);
        if (pAVar3 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
          (pAVar3->fields)._entryCache = __this_03;
          Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._entryCache);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService$$GetLatestVersion
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetLatestVersion (System_Action_AottgChangelogResult_LatestChangelogVersionResponse___o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x5e26d50

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
  ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o *__this_00;
  System_Action_AottgQueryResult_LatestChangelogVersionResponse___o *__this_01;
  
  if (Il2CppMethodInitialized_075484f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_AottgQueryResult_LatestChangelogVersionResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_LatestChangelogVersionResponse
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp_7186810
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass7_0_GetLatestVersion_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass7_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_UnitKey);
    Il2CppMethodInitialized_075484f0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass7_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass7_0_o *)0x0) {
    (__this_00->fields).onResult = onResult;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onResult);
    onResult_00 = (System_Action_AottgChangelogResult_T___o *)(__this_00->fields).onResult;
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    bVar2 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
                      (onResult_00,
                       (MethodInfo_3487CC0 *)
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
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Action_AottgQueryResult_LatestChangelogVersionResponse);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass7_0_GetLatestVersion_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__LatestChangelogVersionResponse__o
                     *)0x0) {
        ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___Get
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,key,
                   (System_Action_AottgQueryResult_TValue___o *)__this_01,forceRefresh,
                   (MethodInfo_4CB3930 *)
                   MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp_7186810
                  );
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogService$$GetLatest
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetLatest (System_Action_AottgChangelogResult_ChangelogEntryResponse___o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x5e26f00

void ApplicationManagers_Changelog_AottgChangelogService__GetLatest
               (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *onResult,bool forceRefresh,
               MethodInfo *method)

{
  ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key;
  System_Action_AottgChangelogResult_T___o *onResult_00;
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__ChangelogEntryResponse__o *__this;
  bool bVar2;
  ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o *__this_00;
  System_Action_AottgQueryResult_ChangelogEntryResponse___o *__this_01;
  
  if (Il2CppMethodInitialized_075484f1 == '\0') {
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
    Il2CppMethodInitialized_075484f1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass8_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass8_0_o *)0x0) {
    (__this_00->fields).onResult = onResult;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onResult);
    onResult_00 = (System_Action_AottgChangelogResult_T___o *)(__this_00->fields).onResult;
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    bVar2 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
                      (onResult_00,
                       (MethodInfo_3487CC0 *)
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
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_AottgQueryResult_ChangelogEntryResponse);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass8_0_GetLatest_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__ChangelogEntryResponse__o
                     *)0x0) {
        ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___Get
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,key,
                   (System_Action_AottgQueryResult_TValue___o *)__this_01,forceRefresh,
                   (MethodInfo_4CB3930 *)
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
// 0x5e270b0

void ApplicationManagers_Changelog_AottgChangelogService__GetList
               (System_Action_AottgChangelogResult_PublicChangelogListResponse___o *onResult,int32_t page,
               int32_t pageSize,bool forceRefresh,MethodInfo *method)

{
  System_Action_AottgChangelogResult_T___o *onResult_00;
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__PublicChangelogListResponse__o
  *__this;
  code *vtableDispatch;
  bool bVar2;
  ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o *__this_00;
  System_Action_AottgQueryResult_PublicChangelogListResponse___o *__this_01;
  System_String_o **ppSVar3;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar4;
  System_Action_AottgChangelogResult_PublicChangelogListResponse___o *pSVar5;
  ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_Fields *targetAddress;
  ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key;
  
  if (Il2CppMethodInitialized_075484f2 == '\0') {
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
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons_71867e0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass9_0_GetList_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&"bad_page_size");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_page");
    Il2CppMethodInitialized_075484f2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass9_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass9_0_o *)0x0) {
label_05e272be:
    ThrowNullReferenceException();
  }
  targetAddress = &__this_00->fields;
  (__this_00->fields).onResult = onResult;
  Il2CppCodeGenWriteBarrier(&targetAddress->onResult);
  onResult_00 = (System_Action_AottgChangelogResult_T___o *)(__this_00->fields).onResult;
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  bVar2 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
                    (onResult_00,
                     (MethodInfo_3487CC0 *)
                     MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_PublicChangelogListResponse
                    );
  if (!bVar2) {
    return;
  }
  if (page < 1) {
    pSVar5 = targetAddress->onResult;
    if (pSVar5 == (System_Action_AottgChangelogResult_PublicChangelogListResponse___o *)0x0) {
      return;
    }
    ppSVar3 = &"bad_page";
  }
  else {
    if (pageSize - 1U < 100) {
      if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
      }
      pAVar1 = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
      if (pAVar1 != (ApplicationManagers_Changelog_AottgChangelogService_o *)0x0) {
        __this = (pAVar1->fields)._listCache;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Action_AottgQueryResult_PublicChangelogListResponse);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass9_0_GetList_b__0
                   ,(MethodInfo_4A81BE0 *)0x0);
        if (__this != (ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__PublicChangelogListResponse__o
                       *)0x0) {
          key.fields._PageSize_k__BackingField = pageSize;
          key.fields._Page_k__BackingField = page;
          ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object___Get
                    ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,key,
                     (System_Action_AottgQueryResult_TValue___o *)__this_01,forceRefresh,
                     (MethodInfo_4CB2D70 *)
                     MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons_71867e0
                    );
          return;
        }
      }
      goto label_05e272be;
    }
    pSVar5 = targetAddress->onResult;
    if (pSVar5 == (System_Action_AottgChangelogResult_PublicChangelogListResponse___o *)0x0) {
      return;
    }
    ppSVar3 = &"bad_page_size";
  }
  pAVar4 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                     (*ppSVar3,(MethodInfo_4CAF770 *)
                               MethodInfo_ApplicationManagers_Changelog_AottgChangelogResult_PublicChangelogListResponse_FailedNoCache
                     );
  vtableDispatch = (code *)(pSVar5->fields).invoke_impl;
  (*vtableDispatch)((pSVar5->fields).method_code,pAVar4,(pSVar5->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$GetEntry
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__GetEntry (System_String_o* id, System_Action_AottgChangelogResult_ChangelogEntryResponse___o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x5e272f0

void ApplicationManagers_Changelog_AottgChangelogService__GetEntry
               (System_String_o *id,System_Action_AottgChangelogResult_ChangelogEntryResponse___o *onResult,
               bool forceRefresh,MethodInfo *method)

{
  System_Action_AottgChangelogResult_T___o *onResult_00;
  ApplicationManagers_Changelog_AottgChangelogService_o *pAVar1;
  ApplicationManagers_Api_AottgQueryCache_string__ChangelogEntryResponse__o *__this;
  System_Action_AottgChangelogResult_ChangelogEntryResponse___o *pSVar2;
  bool bVar3;
  ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o *__this_00;
  System_String_o *input;
  System_Action_AottgQueryResult_ChangelogEntryResponse___o *__this_01;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar4;
  System_Guid_Fields local_48;
  
  if (Il2CppMethodInitialized_075484f3 == '\0') {
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
    Il2CppMethodInitialized_075484f3 = '\x01';
  }
  local_48._a = 0;
  local_48._b = 0;
  local_48._c = 0;
  local_48._d = 0;
  local_48._e = 0;
  local_48._f = 0;
  local_48._g = 0;
  local_48._h = 0;
  local_48._i = 0;
  local_48._j = 0;
  local_48._k = 0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass10_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_Changelog_AottgChangelogService___c__DisplayClass10_0_o *)0x0) {
    (__this_00->fields).onResult = onResult;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onResult);
    onResult_00 = (System_Action_AottgChangelogResult_T___o *)(__this_00->fields).onResult;
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    bVar3 = ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
                      (onResult_00,
                       (MethodInfo_3487CC0 *)
                       MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_Ready_ChangelogEntryResponse
                      );
    if (!bVar3) {
      return;
    }
    if ((id != (System_String_o *)0x0) ||
       (id = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), id != (System_String_o *)0x0)) {
      input = System_String__Trim(id,(MethodInfo *)0x0);
      bVar3 = System_Guid__TryParse(input,(System_Guid_o *)&local_48,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar2 = (__this_00->fields).onResult;
        if (pSVar2 == (System_Action_AottgChangelogResult_ChangelogEntryResponse___o *)0x0) {
          return;
        }
        pAVar4 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                           ("bad_id",
                            (MethodInfo_4CAF770 *)
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
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_AottgQueryResult_ChangelogEntryResponse);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass10_0_GetEntry_b__0
                   ,(MethodInfo_4A81BE0 *)0x0);
        if (__this != (ApplicationManagers_Api_AottgQueryCache_string__ChangelogEntryResponse__o *)0x0) {
          ApplicationManagers_Api_AottgQueryCache_object__object___Get
                    ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,(Il2CppObject *)input,
                     (System_Action_AottgQueryResult_TValue___o *)__this_01,forceRefresh,
                     (MethodInfo_4CB0AD0 *)
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
// 0x5e27510

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
  
  if (Il2CppMethodInitialized_075484f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp_7186808
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons_71867d8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_ChangelogEntryResponse_Cle
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Api_AottgQueryCache_string_ChangelogEntryResponse_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075484f4 = '\x01';
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
      ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___Clear
                ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this,
                 (MethodInfo_4CB38D0 *)
                 MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey_LatestChangelogVersionResp_7186808
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
        ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_UnitKey__object___Clear
                  ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_00,
                   (MethodInfo_4CB38D0 *)
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
          ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey__object___Clear
                    ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_01,
                     (MethodInfo_4CB2D10 *)
                     MethodInfo_ApplicationManagers_Api_AottgQueryCache_AottgChangelogService_ListKey_PublicChangelogListRespons_71867d8
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
          ApplicationManagers_Api_AottgQueryCache_object__object___Clear
                    ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)__this_02,
                     (MethodInfo_4CB0A70 *)
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
// 0x5e276e0

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersion
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
               ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key,
               System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *onComplete,
               MethodInfo *method)

{
  undefined1 auVar1 [12];
  Cysharp_Threading_Tasks_UniTask_o task;
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_Fields AStack_48;
  
  if (Il2CppMethodInitialized_075484f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8
              );
    Il2CppMethodInitialized_075484f7 = '\x01';
  }
  AStack_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  AStack_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  AStack_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  AStack_48.onComplete = (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0;
  AStack_48.__1__state = 0;
  AStack_48._4_4_ = 0;
  AStack_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  AStack_48.__u__1.fields.task.fields.token = 0;
  AStack_48.__u__1.fields.task.fields._18_6_ = 0;
  Il2CppCodeGenWriteBarrier((void **)&AStack_48.__t__builder);
  AStack_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&AStack_48.onComplete);
  AStack_48.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o *)
             &AStack_48,(MethodInfo *)onComplete);
  auVar1 = il2cpp_runtime_helper_0386e920(&AStack_48.__t__builder,0);
  task.fields._12_4_ = 0;
  task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar1._0_8_;
  task.fields.token = auVar1._8_2_;
  task.fields._10_2_ = auVar1._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestEntry
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestEntry (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key, System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o* onComplete, const MethodInfo* method);
// 0x5e27830

void ApplicationManagers_Changelog_AottgChangelogService__FetchLatestEntry
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
               ApplicationManagers_Changelog_AottgChangelogService_UnitKey_o key,
               System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *onComplete,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Cysharp_Threading_Tasks_UniTask_o CVar2;
  Cysharp_Threading_Tasks_UniTask_o task;
  
  if (g_data_075484f5 == '\0') {
    ppSVar1 = &"/v1/changelog/latest";
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/changelog/latest");
    g_data_075484f5 = '\x01';
    __this = (ApplicationManagers_Changelog_AottgChangelogService_o *)ppSVar1;
  }
  CVar2 = ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync
                    (__this,"/v1/changelog/latest",onComplete,method);
  task.fields._12_4_ = 0;
  task.fields.source = CVar2.fields.source;
  task.fields.token = CVar2.fields.token;
  task.fields._10_2_ = CVar2.fields._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchList
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchList (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key, System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o* onComplete, const MethodInfo* method);
// 0x5e27930

void ApplicationManagers_Changelog_AottgChangelogService__FetchList
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
               ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key,
               System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *onComplete,
               MethodInfo *method)

{
  undefined1 auVar1 [12];
  Cysharp_Threading_Tasks_UniTask_o task;
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_Fields local_68;
  
  if (Il2CppMethodInitialized_075484f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0
              );
    Il2CppMethodInitialized_075484f8 = '\x01';
  }
  local_68.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_68.__u__1.fields.task.fields.token = 0;
  local_68.__u__1.fields.task.fields._18_6_ = 0;
  local_68.onComplete = (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0;
  local_68.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_68.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_68.key.fields._Page_k__BackingField = 0;
  local_68.key.fields._PageSize_k__BackingField = 0;
  local_68.__1__state = 0;
  local_68._4_4_ = 0;
  local_68.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_68.__t__builder);
  local_68.key.fields = key.fields;
  local_68.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_68.onComplete);
  local_68.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o *)&local_68,
             (MethodInfo *)onComplete);
  auVar1 = il2cpp_runtime_helper_0386e920(&local_68.__t__builder,0);
  task.fields._12_4_ = 0;
  task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar1._0_8_;
  task.fields.token = auVar1._8_2_;
  task.fields._10_2_ = auVar1._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchEntry
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService__FetchEntry (ApplicationManagers_Changelog_AottgChangelogService_o* __this, System_String_o* id, System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o* onComplete, const MethodInfo* method);
// 0x5e27aa0

void ApplicationManagers_Changelog_AottgChangelogService__FetchEntry
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,System_String_o *id,
               System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *onComplete,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **method_00;
  ApplicationManagers_Changelog_AottgChangelogService_o *__this_00;
  Cysharp_Threading_Tasks_UniTask_o CVar2;
  Cysharp_Threading_Tasks_UniTask_o task;
  
  if (Il2CppMethodInitialized_075484f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/changelog/");
    Il2CppMethodInitialized_075484f6 = '\x01';
  }
  if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
  }
  pSVar1 = System_Uri__EscapeDataString(id,(MethodInfo *)0x0);
  method_00 = &"/v1/changelog/";
  __this_00 = (ApplicationManagers_Changelog_AottgChangelogService_o *)"/v1/changelog/";
  pSVar1 = System_String__Concat_52f0320("/v1/changelog/",pSVar1,(MethodInfo *)0x0);
  CVar2 = ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync
                    (__this_00,pSVar1,onComplete,(MethodInfo *)method_00);
  task.fields._12_4_ = 0;
  task.fields.source = CVar2.fields.source;
  task.fields.token = CVar2.fields.token;
  task.fields._10_2_ = CVar2.fields._10_2_;
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestVersionAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync (ApplicationManagers_Changelog_AottgChangelogService_o* __this, System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o* onComplete, const MethodInfo* method);
// 0x5e27790

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync
          (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
          System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *onComplete,
          MethodInfo *method)

{
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_Fields AStack_48;
  
  if (Il2CppMethodInitialized_075484f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8
              );
    Il2CppMethodInitialized_075484f7 = '\x01';
  }
  AStack_48.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  AStack_48.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  AStack_48.__t__builder.fields.ex = (System_Exception_o *)0x0;
  AStack_48.onComplete = (System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o *)0x0;
  AStack_48.__1__state = 0;
  AStack_48._4_4_ = 0;
  AStack_48.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  AStack_48.__u__1.fields.task.fields.token = 0;
  AStack_48.__u__1.fields.task.fields._18_6_ = 0;
  Il2CppCodeGenWriteBarrier((void **)&AStack_48.__t__builder);
  AStack_48.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&AStack_48.onComplete);
  AStack_48.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchLatestVersionAsync_d__16_o *)
             &AStack_48,(MethodInfo *)onComplete);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0386e920(&AStack_48.__t__builder,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchListAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync (ApplicationManagers_Changelog_AottgChangelogService_o* __this, ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key, System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o* onComplete, const MethodInfo* method);
// 0x5e279f0

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync
          (ApplicationManagers_Changelog_AottgChangelogService_o *__this,
          ApplicationManagers_Changelog_AottgChangelogService_ListKey_o key,
          System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *onComplete,MethodInfo *method)

{
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_Fields local_68;
  
  if (Il2CppMethodInitialized_075484f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0
              );
    Il2CppMethodInitialized_075484f8 = '\x01';
  }
  local_68.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_68.__u__1.fields.task.fields.token = 0;
  local_68.__u__1.fields.task.fields._18_6_ = 0;
  local_68.onComplete = (System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o *)0x0;
  local_68.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_68.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_68.key.fields._Page_k__BackingField = 0;
  local_68.key.fields._PageSize_k__BackingField = 0;
  local_68.__1__state = 0;
  local_68._4_4_ = 0;
  local_68.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_68.__t__builder);
  local_68.key.fields = key.fields;
  local_68.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_68.onComplete);
  local_68.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchListAsync_d__17_o *)&local_68,
             (MethodInfo *)onComplete);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0386e920(&local_68.__t__builder,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.Changelog.AottgChangelogService$$FetchEntryAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync (ApplicationManagers_Changelog_AottgChangelogService_o* __this, System_String_o* path, System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o* onComplete, const MethodInfo* method);
// 0x5e27870

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync
          (ApplicationManagers_Changelog_AottgChangelogService_o *__this,System_String_o *path,
          System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *onComplete,MethodInfo *method)

{
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_Fields local_68;
  
  if (Il2CppMethodInitialized_075484f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F
              );
    Il2CppMethodInitialized_075484f9 = '\x01';
  }
  local_68.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_68.__u__1.fields.task.fields.token = 0;
  local_68.__u__1.fields.task.fields._18_6_ = 0;
  local_68.onComplete = (System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o *)0x0;
  local_68.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_68.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_68.path = (System_String_o *)0x0;
  local_68.__1__state = 0;
  local_68._4_4_ = 0;
  local_68.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_68.__t__builder);
  local_68.path = path;
  Il2CppCodeGenWriteBarrier(&local_68.path);
  local_68.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_68.onComplete);
  local_68.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F
              );
  }
  ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18__MoveNext
            ((ApplicationManagers_Changelog_AottgChangelogService__FetchEntryAsync_d__18_o *)&local_68,
             (MethodInfo *)onComplete);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0386e920(&local_68.__t__builder,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.Changelog.AottgChangelogService$$SendGet
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_Changelog_AottgChangelogService__SendGet (System_String_o* path, const MethodInfo* method);
// 0x5e27b30

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_Changelog_AottgChangelogService__SendGet
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__,System_String_o *path,
          MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiClient_o *__this;
  ApplicationManagers_Api_AottgApiRequest_o *request;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_48;
  
  method_00 = (MethodInfo *)path;
  if (Il2CppMethodInitialized_075484fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiClient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    Il2CppMethodInitialized_075484fa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiClient);
  ApplicationManagers_Api_AottgApiClient___ctor(__this,method_00);
  request = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiRequest);
  if (Il2CppMethodInitialized_07548510 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    Il2CppMethodInitialized_07548510 = '\x01';
  }
  (request->fields).Method = "GET";
  Il2CppCodeGenWriteBarrier(&(request->fields).Method);
  (request->fields).ReportNetworkError = true;
  System_Object___ctor((Il2CppObject *)request,(MethodInfo *)0x0);
  (request->fields).Method = "GET";
  Il2CppCodeGenWriteBarrier(&(request->fields).Method);
  (request->fields).Path = path;
  Il2CppCodeGenWriteBarrier(&(request->fields).Path);
  if (__this == (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
    ThrowNullReferenceException();
  }
  ApplicationManagers_Api_AottgApiClient__SendAsync
            (&local_48,__this,request,(System_Threading_CancellationToken_o)0x0,in_R8);
  (__return_storage_ptr__->fields).token = local_48.fields.token;
  *(undefined6 *)&(__return_storage_ptr__->fields).field_0x12 = local_48.fields._18_6_;
  (__return_storage_ptr__->fields).source = local_48.fields.source;
  (__return_storage_ptr__->fields).result = local_48.fields.result;
  return __return_storage_ptr__;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Ready<object>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogService__Ready_object_ (System_Action_AottgChangelogResult_T___o* onResult, const MethodInfo_3487CC0* method);
// 0x3587cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x3587da3: jmp 0x3587d14

bool ApplicationManagers_Changelog_AottgChangelogService__Ready_object_
               (System_Action_AottgChangelogResult_T___o *onResult,MethodInfo_3487CC0 *method)

{
  uint32_t uVar1;
  ApplicationManagers_Changelog_AottgChangelogService_o *x;
  bool bVar2;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar3;
  
  if (method->rgctx_data == (MethodInfo_3487CC0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    if (method->rgctx_data == (MethodInfo_3487CC0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      uVar1 = (TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor;
      goto joined_r0x03587d12;
    }
  }
  uVar1 = (TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor;
joined_r0x03587d12:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  x = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((onResult != (System_Action_AottgChangelogResult_T___o *)0x0) && (!bVar2)) {
    pAVar3 = ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                       ("not_initialized",
                        (MethodInfo_4CAF770 *)
                        method->rgctx_data->
                        _1_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache);
    (*(code *)(onResult->fields).invoke_impl)((onResult->fields).method_code,pAVar3,(onResult->fields).method)
    ;
  }
  return bVar2;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Ready<__Il2CppFullySharedGenericType>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogService__Ready___Il2CppFullySharedGenericType_ (System_Action_AottgChangelogResult_T___o* onResult, const MethodInfo_3487DB0* method);
// 0x3587db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x3587ea7: jmp 0x3587e08

bool ApplicationManagers_Changelog_AottgChangelogService__Ready___Il2CppFullySharedGenericType_
               (System_Action_AottgChangelogResult_T___o *onResult,MethodInfo_3487DB0 *method)

{
  uint32_t uVar1;
  ApplicationManagers_Changelog_AottgChangelogService_o *x;
  MethodInfo *pMVar2;
  bool bVar3;
  void *local_20;
  
  if (method->rgctx_data == (MethodInfo_3487DB0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    if (method->rgctx_data == (MethodInfo_3487DB0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      uVar1 = (TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor;
      goto joined_r0x03587e06;
    }
  }
  uVar1 = (TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor;
joined_r0x03587e06:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  x = TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((onResult != (System_Action_AottgChangelogResult_T___o *)0x0) && (!bVar3)) {
    local_20 = (void *)(*method->rgctx_data->
                         _1_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache->methodPointer
                       )("not_initialized");
    pMVar2 = method->rgctx_data->_4_System_Action_AottgChangelogResult_T___Invoke;
    (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,onResult,&local_20,local_20);
  }
  return bVar3;
}


// ApplicationManagers.Changelog.AottgChangelogService$$Map<object>
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_T__o* ApplicationManagers_Changelog_AottgChangelogService__Map_object_ (ApplicationManagers_Api_AottgQueryResult_T__o* result, const MethodInfo_3487A50* method);
// 0x3587a50

ApplicationManagers_Changelog_AottgChangelogResult_T__o *
ApplicationManagers_Changelog_AottgChangelogService__Map_object_
          (ApplicationManagers_Api_AottgQueryResult_T__o *result,MethodInfo_3487A50 *method)

{
  MethodInfo_3487A50_RGCTXs *pMVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar2;
  
  if (method->rgctx_data == (MethodInfo_3487A50_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if (result == (ApplicationManagers_Api_AottgQueryResult_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar1 = method->rgctx_data;
  switch((result->fields)._State_k__BackingField) {
  case 0:
    pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
             ApplicationManagers_Changelog_AottgChangelogResult_object___LoadingNoCache
                       ((MethodInfo_4CAF570 *)
                        pMVar1->_2_ApplicationManagers_Changelog_AottgChangelogResult_T__LoadingNoCache);
    return pAVar2;
  case 1:
    pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
             ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyFresh
                       ((result->fields)._Value_k__BackingField,(result->fields)._IsFromCache_k__BackingField,
                        (MethodInfo_4CAF620 *)
                        pMVar1->_8_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyFresh);
    return pAVar2;
  case 2:
    pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
             ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyStaleRefreshing
                       ((result->fields)._Value_k__BackingField,
                        (MethodInfo_4CAF6D0 *)
                        pMVar1->_9_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyStaleRefreshing)
    ;
    return pAVar2;
  default:
    pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
             ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
                       ((result->fields)._Error_k__BackingField,
                        (MethodInfo_4CAF770 *)
                        pMVar1->_12_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache);
    return pAVar2;
  case 4:
    pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
             ApplicationManagers_Changelog_AottgChangelogResult_object___FailedRefreshStale
                       ((result->fields)._Value_k__BackingField,(result->fields)._Error_k__BackingField,
                        (MethodInfo_4CAF850 *)
                        pMVar1->_11_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedRefreshStale);
    return pAVar2;
  }
}


// ApplicationManagers.Changelog.AottgChangelogService$$Map<__Il2CppFullySharedGenericType>
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_T__o* ApplicationManagers_Changelog_AottgChangelogService__Map___Il2CppFullySharedGenericType_ (ApplicationManagers_Api_AottgQueryResult_T__o* result, const MethodInfo_3487B00* method);
// 0x3587b00

ApplicationManagers_Changelog_AottgChangelogResult_T__o *
ApplicationManagers_Changelog_AottgChangelogService__Map___Il2CppFullySharedGenericType_
          (ApplicationManagers_Api_AottgQueryResult_T__o *result,MethodInfo_3487B00 *method)

{
  InvokerMethod pIVar1;
  long lVar2;
  undefined4 uVar3;
  MethodInfo_3487B00_RGCTXs *pMVar4;
  ApplicationManagers_Changelog_AottgChangelogResult_T__o *pAVar5;
  ApplicationManagers_Changelog_AottgChangelogResult_T__c *pAVar6;
  undefined1 *puVar7;
  MethodInfo *pMVar8;
  Il2CppMethodPointer vtableDispatch;
  undefined1 auVar9 [16];
  undefined8 uStack_50;
  ApplicationManagers_Changelog_AottgChangelogResult_T__c *apAStack_48 [4];
  undefined1 local_21;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_3487B00_RGCTXs *)0x0) {
    uStack_50 = 0x3587b24;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar4 = method->rgctx_data;
  }
  lVar2 = -((ulong)(pMVar4->_6_T->_2).stack_slot_size + 0xf & 0xfffffffffffffff0);
  pAVar6 = (ApplicationManagers_Changelog_AottgChangelogResult_T__c *)((long)apAStack_48 + lVar2);
  if (result == (ApplicationManagers_Api_AottgQueryResult_T__o *)0x0) {
    *(undefined8 *)((long)apAStack_48 + lVar2 + -8) = 0x3587cb4;
    ThrowNullReferenceException();
  }
  vtableDispatch = pMVar4->_1_ApplicationManagers_Api_AottgQueryResult_T__get_State->methodPointer;
  *(undefined8 *)((long)apAStack_48 + lVar2 + -8) = 0x3587b55;
  uVar3 = (*vtableDispatch)(result);
  apAStack_48[2] = pAVar6;
  switch(uVar3) {
  case 0:
    pAVar5 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
             (*method->rgctx_data->_2_ApplicationManagers_Changelog_AottgChangelogResult_T__LoadingNoCache->
               methodPointer)();
    return pAVar5;
  case 1:
    pMVar8 = method->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
    vtableDispatch = pMVar8->methodPointer;
    pIVar1 = pMVar8->invoker_method;
    *(undefined8 *)((long)apAStack_48 + lVar2 + -8) = 0x3587ba0;
    (*pIVar1)(vtableDispatch,pMVar8,result,apAStack_48 + 2,pAVar6);
    vtableDispatch =
         method->rgctx_data->_7_ApplicationManagers_Api_AottgQueryResult_T__get_IsFromCache->methodPointer;
    *(undefined8 *)((long)apAStack_48 + lVar2 + -8) = 0x3587bad;
    local_21 = (*vtableDispatch)(result);
    puVar7 = (undefined1 *)((long)apAStack_48 + lVar2);
    pMVar8 = method->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyFresh;
    vtableDispatch = pMVar8->methodPointer;
    if (-1 < (int)(method->rgctx_data->_6_T->_1).byval_arg.bits) {
      pAVar6 = (pAVar6->_1).image;
    }
    apAStack_48[3] = (ApplicationManagers_Changelog_AottgChangelogResult_T__c *)&local_21;
    apAStack_48[2] = pAVar6;
    break;
  case 2:
    pMVar8 = method->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
    vtableDispatch = pMVar8->methodPointer;
    pIVar1 = pMVar8->invoker_method;
    *(undefined8 *)((long)apAStack_48 + lVar2 + -8) = 0x3587bf1;
    (*pIVar1)(vtableDispatch,pMVar8,result,apAStack_48 + 2,pAVar6);
    pMVar8 = method->rgctx_data->_9_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyStaleRefreshing
    ;
    vtableDispatch = pMVar8->methodPointer;
    if (-1 < (int)(method->rgctx_data->_6_T->_1).byval_arg.bits) {
      pAVar6 = (pAVar6->_1).image;
    }
    pIVar1 = pMVar8->invoker_method;
    apAStack_48[1] = pAVar6;
    *(undefined8 *)((long)apAStack_48 + lVar2 + -8) = 0x3587c1a;
    (*pIVar1)(vtableDispatch,pMVar8,(void *)0x0,apAStack_48 + 1,apAStack_48 + 2);
    return (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)apAStack_48[2];
  default:
    vtableDispatch =
         method->rgctx_data->_10_ApplicationManagers_Api_AottgQueryResult_T__get_Error->methodPointer;
    *(undefined8 *)((long)apAStack_48 + lVar2 + -8) = 0x3587c30;
    auVar9 = (*vtableDispatch)(result);
    pMVar8 = method->rgctx_data->_12_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache;
    vtableDispatch = pMVar8->methodPointer;
    pAVar5 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)
             (*vtableDispatch)(auVar9._0_8_,pMVar8,auVar9._8_8_,vtableDispatch);
    return pAVar5;
  case 4:
    pMVar8 = method->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
    vtableDispatch = pMVar8->methodPointer;
    pIVar1 = pMVar8->invoker_method;
    *(undefined8 *)((long)apAStack_48 + lVar2 + -8) = 0x3587c66;
    (*pIVar1)(vtableDispatch,pMVar8,result,apAStack_48 + 2,pAVar6);
    vtableDispatch =
         method->rgctx_data->_10_ApplicationManagers_Api_AottgQueryResult_T__get_Error->methodPointer;
    *(undefined8 *)((long)apAStack_48 + lVar2 + -8) = 0x3587c73;
    apAStack_48[3] =
         (ApplicationManagers_Changelog_AottgChangelogResult_T__c *)(*vtableDispatch)(result);
    puVar7 = (undefined1 *)((long)apAStack_48 + lVar2);
    pMVar8 = method->rgctx_data->_11_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedRefreshStale;
    vtableDispatch = pMVar8->methodPointer;
    if (-1 < (int)(method->rgctx_data->_6_T->_1).byval_arg.bits) {
      pAVar6 = (pAVar6->_1).image;
    }
    apAStack_48[2] = pAVar6;
  }
  pIVar1 = pMVar8->invoker_method;
  *(undefined8 *)(puVar7 + -8) = 0x3587ca0;
  (*pIVar1)(vtableDispatch,pMVar8,(void *)0x0,apAStack_48 + 2,apAStack_48 + 1);
  return (ApplicationManagers_Changelog_AottgChangelogResult_T__o *)apAStack_48[1];
}


// ApplicationManagers.Changelog.AottgChangelogService$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___ctor (ApplicationManagers_Changelog_AottgChangelogService_o* __this, const MethodInfo* method);
// 0x5e27c50

void ApplicationManagers_Changelog_AottgChangelogService___ctor
               (ApplicationManagers_Changelog_AottgChangelogService_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogService$$.cctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogService___cctor (const MethodInfo* method);
// 0x5e27c60

void ApplicationManagers_Changelog_AottgChangelogService___cctor(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  System_TimeSpan_o value;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  MethodInfo *in_R9;
  System_Nullable_TimeSpan__o failureTtl;
  System_Nullable_TimeSpan__o SStack_28;
  
  if (Il2CppMethodInitialized_075484fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_TimeSpan_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_075484fb = '\x01';
  }
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  successTtl = System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  value = System_TimeSpan__FromSeconds(45.0,(MethodInfo *)0x0);
  SStack_28.fields._0_8_ = 0;
  SStack_28.fields.value.fields._ticks = (System_TimeSpan_Fields)0;
  System_Nullable_TimeSpan____ctor
            (&SStack_28,value,(MethodInfo_3CDB020 *)MethodInfo_System_Nullable_TimeSpan_ctor);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
  failureTtl.fields._0_8_ = SStack_28.fields._0_8_ & 0xffffffff;
  failureTtl.fields.value.fields._ticks = SStack_28.fields.value.fields._ticks;
  ApplicationManagers_Api_AottgQueryPolicy___ctor(__this,successTtl,failureTtl,true,in_R9);
  TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->static_fields->CachePolicy);
  return;
}


