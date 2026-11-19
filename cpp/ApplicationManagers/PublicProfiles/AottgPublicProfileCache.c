// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileCache.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$HasFreshValue
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o* __this, System_DateTimeOffset_o now, const MethodInfo* method);
// 0x5e1f6d0

bool ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *__this,
               System_DateTimeOffset_o now,MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar2;
  System_TimeSpan_o t2;
  undefined8 uVar3;
  undefined2 uVar4;
  bool bVar5;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_StaticFields *pAVar6;
  System_TimeSpan_o t1;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o left;
  
  if (Il2CppMethodInitialized_075484a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_075484a1 = '\x01';
  }
  pAVar2 = (__this->fields).Response;
  if (pAVar2 == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
    return false;
  }
  uVar1 = (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->_2).cctor_finished_or_no_cctor
  ;
  if ((pAVar2->fields)._Success_k__BackingField == false) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
    }
    pAVar6 = (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_StaticFields *)
             &TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->FailureTtl;
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
    }
    pAVar6 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields;
  }
  t2.fields._ticks = (System_TimeSpan_Fields)(pAVar6->SuccessTtl).fields._ticks;
  uVar3 = (__this->fields).CachedAt.fields._dateTime;
  uVar4 = (__this->fields).CachedAt.fields._offsetMinutes;
  right.fields._offsetMinutes = uVar4;
  right.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar3;
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  right.fields._10_6_ = 0;
  left.fields._12_4_ = 0;
  left.fields._dateTime.fields._dateData =
       ((System_DateTime_Fields)now.fields._dateTime.fields._dateData).fields;
  left.fields._offsetMinutes = now.fields._offsetMinutes;
  left.fields._10_2_ = now.fields._10_2_;
  t1 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  bVar5 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
  return bVar5;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o* __this, const MethodInfo* method);
// 0x5e1f650

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *__this_00;
  
  if (Il2CppMethodInitialized_075484a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse);
    Il2CppMethodInitialized_075484a2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ctor);
  (__this->fields).Subscribers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Subscribers);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.cctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___cctor (const MethodInfo* method);
// 0x5e1fa40

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075484a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
    Il2CppMethodInitialized_075484a3 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields->__9 =
       (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields->__9);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o* __this, const MethodInfo* method);
// 0x5e1fab0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$<.ctor>b__5_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c____ctor_b__5_0 (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o* __this, const MethodInfo* method);
// 0x5e1fac0

System_DateTimeOffset_o
ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c____ctor_b__5_0
          (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_DateTimeOffset_Fields SVar2;
  
  if (Il2CppMethodInitialized_075484a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    Il2CppMethodInitialized_075484a4 = '\x01';
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


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x5e1f5a0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$<Get>b__0
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___Get_b__0 (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x5e1fb20

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___Get_b__0
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o *__this,
               ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *response,
               MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this_00;
  MethodInfo *in_RCX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *)0x0) {
    ThrowNullReferenceException();
  }
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Complete
            (__this_00,(__this->fields).accountId,response,in_RCX);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_Action_string__Action_AottgPublicProfileFetchResponse___o* fetch, System_Func_DateTimeOffset__o* now, const MethodInfo* method);
// 0x5e1f050
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1f142: jmp 0x5e1f15c
// asm:   0x5e1f1d9: lea rdi, [rip + 0x14566a8]  ; TypeInfo_System_ArgumentNullException
// asm:   0x5e1f1e0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1f1e5: mov rdi, rax
// asm:   0x5e1f1e8: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5e1f1ed: mov rbx, rax
// asm:   0x5e1f1f0: lea rdi, [rip + 0x14d61b1]  ; "fetch"
// asm:   0x5e1f1f7: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1f1fc: mov rdi, rbx
// asm:   0x5e1f1ff: mov rsi, rax
// asm:   0x5e1f202: xor edx, edx
// asm:   0x5e1f204: call 0x5510f50  ; System_ArgumentNullException___ctor()
// asm:   0x5e1f209: lea rdi, [rip + 0x1481ea0]  ; MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_ctor
// asm:   0x5e1f210: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e1f215: mov rdi, rbx
// asm:   0x5e1f218: mov rsi, rax
// asm:   0x5e1f21b: call 0x30d6220  ; il2cpp_codegen_raise_exception()

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_Action_string__Action_AottgPublicProfileFetchResponse___o *fetch,
               System_Func_DateTimeOffset__o *now,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_string__AottgPublicProfileCache_Entry__o *__this_00;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_StaticFields *pAVar1;
  Il2CppClass *klass;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_0754849c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c_ctor_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
    Il2CppMethodInitialized_0754849c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_ctor);
  (__this->fields)._entries = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._entries);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (fetch == (System_Action_string__Action_AottgPublicProfileFetchResponse___o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
    __this_01 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(klass);
    paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
    System_ArgumentNullException___ctor_5410f50(__this_01,paramName,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_ctor);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  if (__this == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._fetch = fetch;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fetch);
  if (now == (System_Func_DateTimeOffset__o *)0x0) {
    if ((TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
      pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields;
      now = pAVar1->__9__5_0;
    }
    else {
      pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields;
      now = pAVar1->__9__5_0;
    }
    if (now == (System_Func_DateTimeOffset__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
        pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields;
      }
      object = (Il2CppObject *)pAVar1->__9;
      now = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_DateTimeOffset);
      System_Func_DateTimeOffset____ctor
                (now,object,
                 (intptr_t)MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c_ctor_b__5_0
                 ,(MethodInfo_4F0C160 *)0x0);
      pAVar1 = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields;
      pAVar1->__9__5_0 = now;
      Il2CppCodeGenWriteBarrier(&pAVar1->__9__5_0);
    }
  }
  (__this->fields)._now = now;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._now);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Clear
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Clear (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, const MethodInfo* method);
// 0x5e1f230

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Clear
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_0754849d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_Clear);
    Il2CppMethodInitialized_0754849d = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this_00,
             (MethodInfo_4AAD690 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_Clear);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Get
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Get (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_String_o* accountId, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x5e1f270

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Get
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_String_o *accountId,System_Action_AottgPublicProfileFetchResponse__o *onResult,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  code *vtableDispatch;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Action_AottgPublicProfileFetchResponse__array *pSVar4;
  System_Action_string__Action_AottgPublicProfileFetchResponse___o *pSVar5;
  System_String_o *pSVar6;
  bool bVar7;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o *__this_00;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar8;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *pAVar9;
  System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *pSVar10;
  System_Action_AottgPublicProfileFetchResponse__o *__this_01;
  System_Func_DateTimeOffset__o *method_00;
  System_String_o **targetAddress;
  MethodInfo *pMVar11;
  System_DateTimeOffset_o now;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *pAStack_38;
  
  if (Il2CppMethodInitialized_0754849e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgPublicProfileFetchResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c__DisplayClass7_0_Get_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c__DisplayClass7_0);
    il2cpp_codegen_initialize_runtime_metadata(&"bad_account_id");
    Il2CppMethodInitialized_0754849e = '\x01';
  }
  pAStack_38 = (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c__DisplayClass7_0
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    targetAddress = &(__this_00->fields).accountId;
    (__this_00->fields).accountId = accountId;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pMVar11 = (MethodInfo *)0x0;
    bVar7 = System_String__IsNullOrEmpty((__this_00->fields).accountId,(MethodInfo *)0x0);
    if (bVar7) {
      if (onResult == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
        return;
      }
      pAVar8 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                         ("bad_account_id",pMVar11);
      vtableDispatch = (code *)(onResult->fields).invoke_impl;
      (*vtableDispatch)
                ((onResult->fields).method_code,pAVar8,(onResult->fields).method,vtableDispatch);
      return;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar3,(Il2CppObject *)*targetAddress,(Il2CppObject **)&pAStack_38,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_TryGetValue
                        );
      if (!bVar7) {
        pAVar9 = il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry);
        if (Il2CppMethodInitialized_075484a2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse);
          Il2CppMethodInitialized_075484a2 = '\x01';
        }
        pSVar10 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar10,
                   (MethodInfo_395C910 *)
                   MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ctor);
        (pAVar9->fields).Subscribers = pSVar10;
        Il2CppCodeGenWriteBarrier(&(pAVar9->fields).Subscribers);
        System_Object___ctor((Il2CppObject *)pAVar9,(MethodInfo *)0x0);
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
        pAStack_38 = pAVar9;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05e1f59b;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar3,(Il2CppObject *)*targetAddress,(Il2CppObject *)pAVar9,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_set_Item
                  );
      }
      pAVar9 = pAStack_38;
      method_00 = (__this->fields)._now;
      if ((method_00 != (System_Func_DateTimeOffset__o *)0x0) &&
         (now.fields = (System_DateTimeOffset_Fields)
                       (*(code *)(method_00->fields).invoke_impl)
                                 (((_union_14 *)&(method_00->fields).method_code)->genericMethod,
                                  (Il2CppType *)(method_00->fields).method),
         pAVar9 != (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0)) {
        bVar7 = ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue
                          (pAVar9,now,(MethodInfo *)method_00);
        pMVar11 = MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_Add;
        if (bVar7) {
          if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
            if (pAStack_38 == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0)
            goto label_05e1f59b;
            (*(code *)(onResult->fields).invoke_impl)
                      ((onResult->fields).method_code,(pAStack_38->fields).Response,(onResult->fields).method)
            ;
          }
        }
        else {
          if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
            if ((pAStack_38 == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0) ||
               (pSVar10 = (pAStack_38->fields).Subscribers,
               pSVar10 == (System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *)0x0))
            goto label_05e1f59b;
            piVar1 = &(pSVar10->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar10->fields)._items;
            if (pSVar4 == (System_Action_AottgPublicProfileFetchResponse__array *)0x0) goto label_05e1f59b;
            uVar2 = (pSVar10->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (pSVar10->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = onResult;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)onResult,
                         (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
            }
          }
          if (pAStack_38 == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0)
          goto label_05e1f59b;
          if ((pAStack_38->fields).InFlight == false) {
            (pAStack_38->fields).InFlight = true;
            pSVar5 = (__this->fields)._fetch;
            pSVar6 = (__this_00->fields).accountId;
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_AottgPublicProfileFetchResponse);
            System_Action_object____ctor
                      ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                       (intptr_t)
                       MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c__DisplayClass7_0_Get_b__0
                       ,(MethodInfo_4A81BE0 *)0x0);
            if (pSVar5 == (System_Action_string__Action_AottgPublicProfileFetchResponse___o *)0x0)
            goto label_05e1f59b;
            (*(code *)(pSVar5->fields).invoke_impl)
                      ((pSVar5->fields).method_code,pSVar6,__this_01,(pSVar5->fields).method);
          }
        }
        return;
      }
    }
  }
label_05e1f59b:
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Complete
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Complete (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_String_o* accountId, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x5e1f7e0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Complete
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_String_o *accountId,
               ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *response,
               MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Func_DateTimeOffset__o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Object_array *pSVar6;
  ulong uVar7;
  ulong uVar8;
  unkbyte10 Var9;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_0754849f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_0754849f = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)accountId,&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_TryGetValue
                      );
    pIVar4 = local_20;
    if (!bVar5) {
      return;
    }
    if (local_20 != (Il2CppObject *)0x0) {
      *(undefined1 *)&local_20[3].klass = 0;
      if (response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
        response = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                             ("unknown_error",(MethodInfo *)accountId);
      }
      pIVar4[1].monitor = response;
      Il2CppCodeGenWriteBarrier(&pIVar4[1].monitor);
      pIVar4 = local_20;
      pSVar2 = (__this->fields)._now;
      if (((((pSVar2 != (System_Func_DateTimeOffset__o *)0x0) &&
            (Var9 = (*(code *)(pSVar2->fields).invoke_impl)
                              ((pSVar2->fields).method_code,(pSVar2->fields).method),
            pIVar4 != (Il2CppObject *)0x0)) &&
           (*(unkbyte10 *)(pIVar4 + 2) = Var9, local_20 != (Il2CppObject *)0x0)) &&
          ((local_20[1].klass != (Il2CppClass *)0x0 &&
           (pSVar6 = System_Collections_Generic_List_object___ToArray
                               ((System_Collections_Generic_List_object__o *)local_20[1].klass,
                                (MethodInfo_395F5A0 *)
                                MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ToArray
                               ), local_20 != (Il2CppObject *)0x0)))) &&
         (pIVar3 = local_20[1].klass, pIVar3 != (Il2CppClass *)0x0)) {
        piVar1 = (int *)((long)&(pIVar3->_1).namespaze + 4);
        *piVar1 = *piVar1 + 1;
        length = *(int32_t *)&(pIVar3->_1).namespaze;
        *(undefined4 *)&(pIVar3->_1).namespaze = 0;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(pIVar3->_1).name,0,length,(MethodInfo *)0x0);
        }
        if (pSVar6 != (System_Object_array *)0x0) {
          if ((int)pSVar6->max_length < 1) {
            return;
          }
          uVar7 = pSVar6->max_length & 0xffffffff;
          uVar8 = 0;
          do {
            if (uVar7 <= uVar8) {
              ThrowIndexOutOfRangeException();
            }
            pIVar4 = pSVar6->m_Items[uVar8];
            if (pIVar4 != (Il2CppObject *)0x0) {
              if ((local_20 == (Il2CppObject *)0x0) || (pIVar4 == (Il2CppObject *)0x0)) break;
              (*pIVar4[1].monitor)(pIVar4[4].klass,local_20[1].monitor,pIVar4[2].monitor);
              uVar7 = (ulong)(uint)pSVar6->max_length;
            }
            uVar8 = uVar8 + 1;
            if ((long)(int)uVar7 <= (long)uVar8) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.cctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___cctor (const MethodInfo* method);
// 0x5e1f9b0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___cctor(MethodInfo *method)

{
  System_TimeSpan_o SVar1;
  
  if (Il2CppMethodInitialized_075484a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_075484a0 = '\x01';
  }
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  SVar1 = System_TimeSpan__FromMinutes(10.0,(MethodInfo *)0x0);
  (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->SuccessTtl).fields.
  _ticks = (int64_t)SVar1.fields._ticks;
  SVar1 = System_TimeSpan__FromSeconds(45.0,(MethodInfo *)0x0);
  (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->FailureTtl).fields.
  _ticks = (int64_t)SVar1.fields._ticks;
  return;
}


