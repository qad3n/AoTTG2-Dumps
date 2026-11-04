// Type: ApplicationManagers.Credits.AottgCreditsCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsCache.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___c___cctor (const MethodInfo* method);
// 0x182376fb0

void ApplicationManagers_Credits_AottgCreditsCache___c___cctor(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsCache___c_o *__this;
  
  if (Il2CppMethodInitialized_184347a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c);
    Il2CppMethodInitialized_184347a0c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields->__9,__this);
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___c___ctor (ApplicationManagers_Credits_AottgCreditsCache___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_Credits_AottgCreditsCache___c___ctor(ApplicationManagers_Credits_AottgCreditsCache___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache.<>c$$<.ctor>b__8_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_Credits_AottgCreditsCache___c____ctor_b__8_0 (ApplicationManagers_Credits_AottgCreditsCache___c_o* __this, const MethodInfo* method);
// 0x1823748a0

System_DateTimeOffset_o *
ApplicationManagers_Credits_AottgCreditsCache___c____ctor_b__8_0
          (System_DateTimeOffset_o *__return_storage_ptr__,
          ApplicationManagers_Credits_AottgCreditsCache___c_o *__this,MethodInfo *method)

{
  int16_t iVar1;
  undefined6 uVar2;
  System_DateTimeOffset_o *pSVar3;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_184347a0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    Il2CppMethodInitialized_184347a0d = '\x01';
  }
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  pSVar3 = System_DateTimeOffset__get_UtcNow(&local_18,(MethodInfo *)0x0);
  iVar1 = (pSVar3->fields)._offsetMinutes;
  uVar2 = *(undefined6 *)&(pSVar3->fields).field_0xa;
  (__return_storage_ptr__->fields)._dateTime.fields._dateData = (pSVar3->fields)._dateTime.fields._dateData;
  (__return_storage_ptr__->fields)._offsetMinutes = iVar1;
  *(undefined6 *)&(__return_storage_ptr__->fields).field_0xa = uVar2;
  return __return_storage_ptr__;
}


// ApplicationManagers.Credits.AottgCreditsCache$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___ctor (ApplicationManagers_Credits_AottgCreditsCache_o* __this, System_Action_Action_AottgCreditsFetchResponse___o* fetch, System_Func_DateTimeOffset__o* now, System_Nullable_TimeSpan__o ttl, const MethodInfo* method);
// 0x182363fc0

void ApplicationManagers_Credits_AottgCreditsCache___ctor
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               System_Action_Action_AottgCreditsFetchResponse___o *fetch,System_Func_DateTimeOffset__o *now,
               System_Nullable_TimeSpan__o *ttl,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *__this_00;
  Il2CppClass *klass;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  undefined1 uStack_30;
  
  if (Il2CppMethodInitialized_184347a06 == '\0') {
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
    Il2CppMethodInitialized_184347a06 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Action_AottgCreditsResult);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_ctor);
  (__this->fields)._subscribers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._subscribers,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (fetch == (System_Action_Action_AottgCreditsFetchResponse___o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
    __this_01 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(klass);
    paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
    System_ArgumentNullException___ctor_1a77f20(__this_01,paramName,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_ctor);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  (__this->fields)._fetch = fetch;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fetch,fetch);
  if (now == (System_Func_DateTimeOffset__o *)0x0) {
    if ((TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c);
    }
    now = TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields->__9__8_0;
    if ((DG_Tweening_Core_DOGetter_Vector4__o *)now == (DG_Tweening_Core_DOGetter_Vector4__o *)0x0) {
      if ((TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c);
      }
      object = (Il2CppObject *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields->__9;
      now = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_DateTimeOffset);
      System_Func_DateTimeOffset____ctor
                ((DG_Tweening_Core_DOGetter_Vector4__o *)now,object,
                 (intptr_t)MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_c_ctor_b__8_0,
                 (MethodInfo_13876B0 *)0x0);
      TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields->__9__8_0 = now;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache_c->static_fields->__9__8_0,now);
    }
  }
  (__this->fields)._now = now;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._now,now);
  uStack_30 = (undefined1)((ulonglong)*(undefined8 *)&(ttl->fields).field_0x1 >> 0x38);
  if ((ttl->fields).hasValue != false) {
    (__this->fields)._ttl.fields._ticks =
         CONCAT17(*(undefined1 *)((longlong)&(ttl->fields).value.fields._ticks + 7),
                  CONCAT25(*(undefined2 *)((longlong)&(ttl->fields).value.fields._ticks + 5),
                           CONCAT41(*(undefined4 *)((longlong)&(ttl->fields).value.fields._ticks + 1),
                                    uStack_30)));
    return;
  }
  if ((TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsCache);
  }
  (__this->fields)._ttl.fields._ticks =
       (TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->static_fields->DefaultTtl).fields._ticks;
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache$$get_HasCache
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__get_HasCache (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x181a1e5d0

bool
ApplicationManagers_Credits_AottgCreditsCache__get_HasCache(ApplicationManagers_Credits_AottgCreditsCache_o* __this, MethodInfo* method)

{
  return (__this->fields)._cachedCredits != (UnityEngine_UIElements_UxmlAsset_o *)0x0;
}


// ApplicationManagers.Credits.AottgCreditsCache$$get_IsInFlight
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__get_IsInFlight (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x18058a530

bool
ApplicationManagers_Credits_AottgCreditsCache__get_IsInFlight(ApplicationManagers_Credits_AottgCreditsCache_o* __this, MethodInfo* method)

{
  return (__this->fields)._inFlight;
}


// ApplicationManagers.Credits.AottgCreditsCache$$Clear
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__Clear (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x182363a00

void ApplicationManagers_Credits_AottgCreditsCache__Clear
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *pSVar2;
  
  if (Il2CppMethodInitialized_184347a07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_Clear);
    Il2CppMethodInitialized_184347a07 = '\x01';
  }
  (__this->fields)._cachedCredits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedCredits,(void *)0x0);
  (__this->fields)._cachedAt.fields._dateTime.fields._dateData = 0;
  *(undefined8 *)&(__this->fields)._cachedAt.fields._offsetMinutes = 0;
  pSVar2 = (__this->fields)._subscribers;
  (__this->fields)._inFlight = false;
  if (pSVar2 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsCache$$Get
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__Get (ApplicationManagers_Credits_AottgCreditsCache_o* __this, System_Action_AottgCreditsResult__o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x182363c10

void ApplicationManagers_Credits_AottgCreditsCache__Get
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               System_Action_AottgCreditsResult__o *onResult,bool forceRefresh,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Func_DateTimeOffset__o *pSVar3;
  System_TimeSpan_o t2;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *__this_00;
  System_Action_AottgCreditsResult__array *pSVar4;
  System_Action_Action_AottgCreditsFetchResponse___o *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  uint64_t *puVar8;
  System_TimeSpan_o t1;
  ApplicationManagers_Credits_AottgCreditsResult_o *pAVar9;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  System_DateTimeOffset_o local_48;
  System_DateTimeOffset_o local_38 [3];
  
  if (Il2CppMethodInitialized_184347a08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgCreditsFetchResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_CompleteFetch);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_Add);
    Il2CppMethodInitialized_184347a08 = '\x01';
  }
  if (onResult == (System_Action_AottgCreditsResult__o *)0x0) {
    return;
  }
  if (forceRefresh) {
label_182363d72:
    if ((__this->fields)._cachedCredits == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0)
    goto label_182363d79;
    pAVar9 = ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing
                       ((__this->fields)._cachedCredits,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_184347a09 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
      Il2CppMethodInitialized_184347a09 = '\x01';
    }
    if ((__this->fields)._cachedCredits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
      pSVar3 = (__this->fields)._now;
      if (pSVar3 == (System_Func_DateTimeOffset__o *)0x0) goto label_182363e52;
      puVar8 = (uint64_t *)(*(code *)(pSVar3->fields).invoke_impl)(local_38,(pSVar3->fields).method_code);
      local_48.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(__this->fields)._cachedAt.fields._dateTime.fields._dateData;
      local_48.fields._offsetMinutes = (__this->fields)._cachedAt.fields._offsetMinutes;
      local_48.fields._10_6_ = *(undefined6 *)&(__this->fields)._cachedAt.fields.field_0xa;
      local_38[0].fields._dateTime.fields._dateData = (System_DateTime_Fields)*puVar8;
      local_38[0].fields._8_8_ = puVar8[1];
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      t1 = System_DateTimeOffset__op_Subtraction(local_38,&local_48,(MethodInfo *)0x0);
      t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields)._ttl.fields._ticks;
      if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
      }
      bVar7 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
      if (bVar7) {
        pAVar9 = ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh
                           ((__this->fields)._cachedCredits,true,(MethodInfo *)0x0);
        (*(code *)(onResult->fields).invoke_impl)
                  ((onResult->fields).method_code,pAVar9,(onResult->fields).method);
        return;
      }
      goto label_182363d72;
    }
label_182363d79:
    pAVar9 = ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache((MethodInfo *)0x0);
  }
  (*(code *)(onResult->fields).invoke_impl)((onResult->fields).method_code,pAVar9,(onResult->fields).method);
  pMVar6 = MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_Add;
  __this_00 = (__this->fields)._subscribers;
  if (__this_00 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Action_AottgCreditsResult__array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar4->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[(int)uVar2] = onResult;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,onResult);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)onResult,
                   (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
      }
      if ((__this->fields)._inFlight == false) {
        pSVar5 = (__this->fields)._fetch;
        (__this->fields)._inFlight = true;
        __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgCreditsFetchResponse)
        ;
        UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate___ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_CompleteFetch,
                   (MethodInfo *)0x0);
        if (pSVar5 == (System_Action_Action_AottgCreditsFetchResponse___o *)0x0) goto label_182363e52;
        (*(code *)(pSVar5->fields).invoke_impl)
                  ((pSVar5->fields).method_code,__this_01,(pSVar5->fields).method);
      }
      return;
    }
  }
label_182363e52:
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsCache$$IsFresh
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__IsFresh (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x182363e60

bool ApplicationManagers_Credits_AottgCreditsCache__IsFresh
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  System_Func_DateTimeOffset__o *pSVar1;
  System_TimeSpan_o t2;
  bool bVar2;
  uint64_t *puVar3;
  System_TimeSpan_o t1;
  System_DateTimeOffset_o local_48;
  System_DateTimeOffset_o local_38 [3];
  
  if (Il2CppMethodInitialized_184347a09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_184347a09 = '\x01';
  }
  if ((__this->fields)._cachedCredits == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    return false;
  }
  pSVar1 = (__this->fields)._now;
  if (pSVar1 != (System_Func_DateTimeOffset__o *)0x0) {
    puVar3 = (uint64_t *)(*(code *)(pSVar1->fields).invoke_impl)(local_38,(pSVar1->fields).method_code);
    local_48.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(__this->fields)._cachedAt.fields._dateTime.fields._dateData;
    local_48.fields._offsetMinutes = (__this->fields)._cachedAt.fields._offsetMinutes;
    local_48.fields._10_6_ = *(undefined6 *)&(__this->fields)._cachedAt.fields.field_0xa;
    local_38[0].fields._dateTime.fields._dateData = (System_DateTime_Fields)*puVar3;
    local_38[0].fields._8_8_ = puVar3[1];
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    t1 = System_DateTimeOffset__op_Subtraction(local_38,&local_48,(MethodInfo *)0x0);
    t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields)._ttl.fields._ticks;
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    bVar2 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsCache$$CompleteFetch
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__CompleteFetch (ApplicationManagers_Credits_AottgCreditsCache_o* __this, ApplicationManagers_Credits_AottgCreditsFetchResponse_o* response, const MethodInfo* method);
// 0x182363a80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182363b5d: mov rdx, qword ptr [rip + 0x1d182e4]  ; "unknown_error"

void ApplicationManagers_Credits_AottgCreditsCache__CompleteFetch
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               ApplicationManagers_Credits_AottgCreditsFetchResponse_o *response,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar2;
  System_Func_DateTimeOffset__o *pSVar3;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *pSVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  ApplicationManagers_Credits_AottgCreditsResult_o *pAVar7;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar8;
  System_String_o *pSVar9;
  uint uVar10;
  undefined1 local_18 [16];
  
  if (Il2CppMethodInitialized_184347a0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_184347a0a = '\x01';
  }
  (__this->fields)._inFlight = false;
  if (((response == (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)0x0) ||
      ((response->fields)._Success_k__BackingField == false)) ||
     ((response->fields)._Credits_k__BackingField == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0
     )) {
    if ((__this->fields)._cachedCredits == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
      if (response == (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)0x0) {
        pAVar7 = ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache
                           ("unknown_error",(MethodInfo *)0x0);
      }
      else {
        pAVar7 = ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache
                           ((response->fields)._Error_k__BackingField,(MethodInfo *)0x0);
      }
    }
    else {
      pSVar9 = "unknown_error";
      if (response != (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)0x0) {
        pSVar9 = (response->fields)._Error_k__BackingField;
      }
      pAVar7 = ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale
                         ((__this->fields)._cachedCredits,pSVar9,(MethodInfo *)0x0);
    }
  }
  else {
    pAVar2 = (response->fields)._Credits_k__BackingField;
    (__this->fields)._cachedCredits = pAVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedCredits,pAVar2);
    pSVar3 = (__this->fields)._now;
    if (pSVar3 == (System_Func_DateTimeOffset__o *)0x0) goto label_182363c09;
    puVar6 = (uint64_t *)(*(code *)(pSVar3->fields).invoke_impl)(local_18);
    pAVar2 = (__this->fields)._cachedCredits;
    uVar5 = puVar6[1];
    (__this->fields)._cachedAt.fields._dateTime.fields._dateData = *puVar6;
    *(uint64_t *)&(__this->fields)._cachedAt.fields._offsetMinutes = uVar5;
    pAVar7 = ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh(pAVar2,false,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields)._subscribers;
  if (pSVar4 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    pUVar8 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                       ((System_Collections_Generic_List_T__o *)pSVar4,
                        (MethodInfo_929FE0 *)
                        MethodInfo_System_Collections_Generic_List_Action_AottgCreditsResult_ToArray);
    pSVar4 = (__this->fields)._subscribers;
    if (pSVar4 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
      length = (pSVar4->fields)._size;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar4->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (pUVar8 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                     *)0x0) {
        uVar10 = 0;
        while( true ) {
          if ((int)pUVar8->max_length <= (int)uVar10) {
            return;
          }
          if ((uint)pUVar8->max_length <= uVar10) break;
          pSVar9 = (&pUVar8->m_Items[0].fields.message)[(int)uVar10];
          if (pSVar9 != (System_String_o *)0x0) {
            (*(code *)(*(uint64_t *)((char *)pSVar9 + 0x18)))(pSVar9[2].fields,pAVar7,pSVar9[1].fields);
          }
          uVar10 = uVar10 + 1;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_182363c09:
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsCache$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___cctor (const MethodInfo* method);
// 0x182363f50

void ApplicationManagers_Credits_AottgCreditsCache___cctor(MethodInfo *method)

{
  System_TimeSpan_o SVar1;
  
  if (Il2CppMethodInitialized_184347a0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_184347a0b = '\x01';
  }
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  SVar1 = System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  (TypeInfo_ApplicationManagers_Credits_AottgCreditsCache->static_fields->DefaultTtl).fields._ticks =
       (int64_t)SVar1.fields._ticks;
  return;
}


