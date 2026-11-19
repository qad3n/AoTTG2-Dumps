// Type: ApplicationManagers.Credits.AottgCreditsCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsCache.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___c___cctor (const MethodInfo* method);
// 0x5e223b0

void ApplicationManagers_Credits_AottgCreditsCache___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075484bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c);
    Il2CppMethodInitialized_075484bb = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields->__9 =
       (ApplicationManagers_Credits_AottgCreditsCache___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields->__9);
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___c___ctor (ApplicationManagers_Credits_AottgCreditsCache___c_o* __this, const MethodInfo* method);
// 0x5e22420

void ApplicationManagers_Credits_AottgCreditsCache___c___ctor
               (ApplicationManagers_Credits_AottgCreditsCache___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache.<>c$$<.ctor>b__8_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_Credits_AottgCreditsCache___c____ctor_b__8_0 (ApplicationManagers_Credits_AottgCreditsCache___c_o* __this, const MethodInfo* method);
// 0x5e22430

System_DateTimeOffset_o
ApplicationManagers_Credits_AottgCreditsCache___c____ctor_b__8_0
          (ApplicationManagers_Credits_AottgCreditsCache___c_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_DateTimeOffset_Fields SVar2;
  
  if (Il2CppMethodInitialized_075484bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    Il2CppMethodInitialized_075484bc = '\x01';
    uVar1 = (TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
    return (System_DateTimeOffset_o)SVar2;
  }
  SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
  return (System_DateTimeOffset_o)SVar2;
}


// ApplicationManagers.Credits.AottgCreditsCache$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___ctor (ApplicationManagers_Credits_AottgCreditsCache_o* __this, System_Action_Action_AottgCreditsFetchResponse___o* fetch, System_Func_DateTimeOffset__o* now, System_Nullable_TimeSpan__o ttl, const MethodInfo* method);
// 0x5e217d0
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e218ee: jmp 0x5e21909
// asm:   0x5e219b6: lea rdi, [rip + 0x1453ecb]  ; TypeInfo_System_ArgumentNullException
// asm:   0x5e219bd: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e219c2: mov rdi, rax
// asm:   0x5e219c5: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5e219ca: mov rbx, rax
// asm:   0x5e219cd: lea rdi, [rip + 0x14d39d4]  ; "fetch"
// asm:   0x5e219d4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e219d9: mov rdi, rbx
// asm:   0x5e219dc: mov rsi, rax
// asm:   0x5e219df: xor edx, edx
// asm:   0x5e219e1: call 0x5510f50  ; System_ArgumentNullException___ctor()
// asm:   0x5e219e6: lea rdi, [rip + 0x147f03b]  ; MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_ctor
// asm:   0x5e219ed: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e219f2: mov rdi, rbx
// asm:   0x5e219f5: mov rsi, rax
// asm:   0x5e219f8: call 0x30d6220  ; il2cpp_codegen_raise_exception()

void ApplicationManagers_Credits_AottgCreditsCache___ctor
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               System_Action_Action_AottgCreditsFetchResponse___o *fetch,System_Func_DateTimeOffset__o *now,
               System_Nullable_TimeSpan__o ttl,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *__this_00;
  ApplicationManagers_Credits_AottgCreditsCache___c_StaticFields *pAVar1;
  Il2CppClass *klass;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  System_TimeSpan_o SVar2;
  
  SVar2 = ttl.fields.value.fields._ticks;
  if (Il2CppMethodInitialized_075484b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_Action_AottgCreditsResult);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_TimeSpan_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_TimeSpan_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_c_ctor_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c);
    Il2CppMethodInitialized_075484b5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Action_AottgCreditsResult);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_ctor);
  (__this->fields)._subscribers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._subscribers);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (fetch == (System_Action_Action_AottgCreditsFetchResponse___o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
    __this_01 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(klass);
    paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
    System_ArgumentNullException___ctor_5410f50(__this_01,paramName,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_ctor);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  if (__this == (ApplicationManagers_Credits_AottgCreditsCache_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._fetch = fetch;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fetch);
  if (now == (System_Func_DateTimeOffset__o *)0x0) {
    if ((TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c);
      pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields;
      now = pAVar1->__9__8_0;
    }
    else {
      pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields;
      now = pAVar1->__9__8_0;
    }
    if (now == (System_Func_DateTimeOffset__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c);
        pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields;
      }
      object = (Il2CppObject *)pAVar1->__9;
      now = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_DateTimeOffset);
      System_Func_DateTimeOffset____ctor
                (now,object,(intptr_t)MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_c_ctor_b__8_0,
                 (MethodInfo_4F0C160 *)0x0);
      pAVar1 = TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields;
      pAVar1->__9__8_0 = now;
      Il2CppCodeGenWriteBarrier(&pAVar1->__9__8_0);
    }
  }
  (__this->fields)._now = now;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._now);
  if (ttl.fields.hasValue == false) {
    if ((TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache)
      ;
    }
    SVar2.fields._ticks =
         (System_TimeSpan_Fields)
         (TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->static_fields->DefaultTtl).fields._ticks;
  }
  (__this->fields)._ttl.fields._ticks = (int64_t)SVar2.fields._ticks;
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache$$get_HasCache
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__get_HasCache (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x5e21a10

bool ApplicationManagers_Credits_AottgCreditsCache__get_HasCache
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  return (__this->fields)._cachedCredits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
}


// ApplicationManagers.Credits.AottgCreditsCache$$get_IsInFlight
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__get_IsInFlight (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x5e21a20

bool ApplicationManagers_Credits_AottgCreditsCache__get_IsInFlight
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  return (__this->fields)._inFlight;
}


// ApplicationManagers.Credits.AottgCreditsCache$$Clear
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__Clear (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x5e21a30

void ApplicationManagers_Credits_AottgCreditsCache__Clear
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *pSVar2;
  
  if (Il2CppMethodInitialized_075484b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_Clear);
    Il2CppMethodInitialized_075484b6 = '\x01';
  }
  (__this->fields)._cachedCredits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedCredits);
  (__this->fields)._cachedAt.fields._dateTime.fields._dateData = 0;
  *(undefined8 *)&(__this->fields)._cachedAt.fields._offsetMinutes = 0;
  (__this->fields)._inFlight = false;
  pSVar2 = (__this->fields)._subscribers;
  if (pSVar2 == (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (length < 1) {
    return;
  }
  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache$$Get
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__Get (ApplicationManagers_Credits_AottgCreditsCache_o* __this, System_Action_AottgCreditsResult__o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x5e21aa0

void ApplicationManagers_Credits_AottgCreditsCache__Get
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               System_Action_AottgCreditsResult__o *onResult,bool forceRefresh,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar4;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *__this_00;
  System_Action_AottgCreditsResult__array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Action_AottgCreditsFetchResponse__o *__this_01;
  ApplicationManagers_Credits_AottgCreditsResult_o *__this_02;
  System_Action_AottgCreditsResult__o *method_00;
  
  method_00 = onResult;
  if (Il2CppMethodInitialized_075484b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgCreditsFetchResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_CompleteFetch);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_Add);
    Il2CppMethodInitialized_075484b7 = '\x01';
  }
  if (onResult == (System_Action_AottgCreditsResult__o *)0x0) {
    return;
  }
  if ((!forceRefresh) &&
     (bVar7 = ApplicationManagers_Credits_AottgCreditsCache__IsFresh(__this,(MethodInfo *)method_00), bVar7))
  {
    pAVar4 = (__this->fields)._cachedCredits;
    if (Il2CppMethodInitialized_075484c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c1 = '\x01';
    }
    __this_01 = (System_Action_AottgCreditsFetchResponse__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(int32_t *)&(__this_01->fields).method_ptr = 1;
    (__this_01->fields).invoke_impl = (intptr_t)pAVar4;
    Il2CppCodeGenWriteBarrier((void **)&(__this_01->fields).invoke_impl);
    (__this_01->fields).m_target = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).m_target);
    *(undefined2 *)&(__this_01->fields).method = 1;
    *(bool *)((long)&(__this_01->fields).method + 2) = false;
label_05e21d0f:
    (*(code *)(onResult->fields).invoke_impl)
              ((onResult->fields).method_code,__this_01,(onResult->fields).method);
    return;
  }
  pAVar4 = (__this->fields)._cachedCredits;
  if (pAVar4 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    if (Il2CppMethodInitialized_075484c0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c0 = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    bVar7 = false;
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    (__this_02->fields)._State_k__BackingField = 0;
    (__this_02->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields)._Credits_k__BackingField);
  }
  else {
    if (Il2CppMethodInitialized_075484c2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c2 = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    (__this_02->fields)._State_k__BackingField = 2;
    (__this_02->fields)._Credits_k__BackingField = pAVar4;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields)._Credits_k__BackingField);
    bVar7 = true;
  }
  (__this_02->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_02->fields)._Error_k__BackingField);
  (__this_02->fields)._IsFromCache_k__BackingField = bVar7;
  (__this_02->fields)._IsStale_k__BackingField = bVar7;
  (__this_02->fields)._IsRefreshing_k__BackingField = true;
  (*(code *)(onResult->fields).invoke_impl)
            ((onResult->fields).method_code,__this_02,(onResult->fields).method);
  pMVar6 = MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_Add;
  __this_00 = (__this->fields)._subscribers;
  if (__this_00 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 != (System_Action_AottgCreditsResult__array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pSVar5->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        pSVar5->m_Items[(int)uVar3] = onResult;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
        cVar2 = (__this->fields)._inFlight;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)onResult,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        cVar2 = (__this->fields)._inFlight;
      }
      if (cVar2 != '\0') {
        return;
      }
      (__this->fields)._inFlight = true;
      onResult = (System_Action_AottgCreditsResult__o *)(__this->fields)._fetch;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgCreditsFetchResponse);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_CompleteFetch,
                 (MethodInfo_4A81BE0 *)0x0);
      if (onResult != (System_Action_AottgCreditsResult__o *)0x0) goto label_05e21d0f;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsCache$$IsFresh
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__IsFresh (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x5e21d30

bool ApplicationManagers_Credits_AottgCreditsCache__IsFresh
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  System_Func_DateTimeOffset__o *pSVar1;
  System_TimeSpan_o t2;
  undefined1 auVar2 [12];
  undefined8 uVar3;
  undefined2 uVar4;
  bool bVar5;
  System_TimeSpan_o t1;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o left;
  
  if (Il2CppMethodInitialized_075484b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_075484b8 = '\x01';
  }
  if ((__this->fields)._cachedCredits == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    return false;
  }
  pSVar1 = (__this->fields)._now;
  if (pSVar1 == (System_Func_DateTimeOffset__o *)0x0) {
    ThrowNullReferenceException();
  }
  auVar2 = (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  uVar3 = (__this->fields)._cachedAt.fields._dateTime;
  uVar4 = (__this->fields)._cachedAt.fields._offsetMinutes;
  right.fields._offsetMinutes = uVar4;
  right.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar3;
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  right.fields._10_6_ = 0;
  left.fields._12_4_ = 0;
  left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)auVar2._0_8_;
  left.fields._offsetMinutes = auVar2._8_2_;
  left.fields._10_2_ = auVar2._10_2_;
  t1 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
  t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields)._ttl.fields._ticks;
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  bVar5 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
  return bVar5;
}


// ApplicationManagers.Credits.AottgCreditsCache$$CompleteFetch
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__CompleteFetch (ApplicationManagers_Credits_AottgCreditsCache_o* __this, ApplicationManagers_Credits_AottgCreditsFetchResponse_o* response, const MethodInfo* method);
// 0x5e21f90

void ApplicationManagers_Credits_AottgCreditsCache__CompleteFetch
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               ApplicationManagers_Credits_AottgCreditsFetchResponse_o *response,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar2;
  System_Func_DateTimeOffset__o *pSVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *pSVar5;
  Il2CppObject *pIVar6;
  ApplicationManagers_Credits_AottgCreditsResult_o *__this_00;
  System_Object_array *pSVar7;
  ulong uVar8;
  bool bVar9;
  System_String_o **ppSVar10;
  ulong uVar11;
  unkbyte10 Var12;
  
  if (Il2CppMethodInitialized_075484b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_075484b9 = '\x01';
  }
  (__this->fields)._inFlight = false;
  if (response == (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)0x0) {
    pAVar2 = (__this->fields)._cachedCredits;
    ppSVar10 = &"unknown_error";
joined_r0x05e22116:
    if (pAVar2 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
      pSVar4 = *ppSVar10;
      if (Il2CppMethodInitialized_075484c3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
        Il2CppMethodInitialized_075484c3 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._State_k__BackingField = 3;
      (__this_00->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0
      ;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Credits_k__BackingField);
      (__this_00->fields)._Error_k__BackingField = pSVar4;
      goto label_05e2217e;
    }
    pSVar4 = *ppSVar10;
    if (Il2CppMethodInitialized_075484c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c4 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields)._State_k__BackingField = 4;
    (__this_00->fields)._Credits_k__BackingField = pAVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Credits_k__BackingField);
    (__this_00->fields)._Error_k__BackingField = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Error_k__BackingField);
    bVar9 = true;
  }
  else {
    if (((response->fields)._Success_k__BackingField == false) ||
       (pAVar2 = (response->fields)._Credits_k__BackingField,
       pAVar2 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0)) {
      pAVar2 = (__this->fields)._cachedCredits;
      ppSVar10 = &(response->fields)._Error_k__BackingField;
      goto joined_r0x05e22116;
    }
    (__this->fields)._cachedCredits = pAVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedCredits);
    pSVar3 = (__this->fields)._now;
    if (pSVar3 == (System_Func_DateTimeOffset__o *)0x0) goto label_05e22229;
    Var12 = (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
    (__this->fields)._cachedAt.fields._dateTime = (System_DateTime_o)(long)Var12;
    (__this->fields)._cachedAt.fields._offsetMinutes = (short)((unkuint10)Var12 >> 0x40);
    pAVar2 = (__this->fields)._cachedCredits;
    if (Il2CppMethodInitialized_075484c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
      Il2CppMethodInitialized_075484c1 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields)._State_k__BackingField = 1;
    (__this_00->fields)._Credits_k__BackingField = pAVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Credits_k__BackingField);
    (__this_00->fields)._Error_k__BackingField = (System_String_o *)0x0;
label_05e2217e:
    bVar9 = false;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Error_k__BackingField);
  }
  (__this_00->fields)._IsFromCache_k__BackingField = bVar9;
  (__this_00->fields)._IsStale_k__BackingField = bVar9;
  (__this_00->fields)._IsRefreshing_k__BackingField = false;
  pSVar5 = (__this->fields)._subscribers;
  if (pSVar5 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    pSVar7 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)pSVar5,
                        (MethodInfo_395F5A0 *)
                        MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_ToArray);
    pSVar5 = (__this->fields)._subscribers;
    if (pSVar5 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar5->fields)._size;
      (pSVar5->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (pSVar7 != (System_Object_array *)0x0) {
        if (0 < (int)pSVar7->max_length) {
          uVar8 = pSVar7->max_length & 0xffffffff;
          uVar11 = 0;
          do {
            if (uVar8 <= uVar11) {
              ThrowIndexOutOfRangeException();
            }
            pIVar6 = pSVar7->m_Items[uVar11];
            if (pIVar6 != (Il2CppObject *)0x0) {
              if (pIVar6 == (Il2CppObject *)0x0) goto label_05e22229;
              (*pIVar6[1].monitor)(pIVar6[4].klass,__this_00,pIVar6[2].monitor);
              uVar8 = (ulong)(uint)pSVar7->max_length;
            }
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)(int)uVar8);
        }
        return;
      }
    }
  }
label_05e22229:
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsCache$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___cctor (const MethodInfo* method);
// 0x5e22340

void ApplicationManagers_Credits_AottgCreditsCache___cctor(MethodInfo *method)

{
  System_TimeSpan_o SVar1;
  
  if (Il2CppMethodInitialized_075484ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_075484ba = '\x01';
  }
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  SVar1 = System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  (TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->static_fields->DefaultTtl).fields._ticks =
       (int64_t)SVar1.fields._ticks;
  return;
}


