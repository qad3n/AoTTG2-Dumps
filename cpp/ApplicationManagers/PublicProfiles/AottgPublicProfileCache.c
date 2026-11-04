// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileCache.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$HasFreshValue
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o* __this, System_DateTimeOffset_o now, const MethodInfo* method);
// 0x18236b330

bool ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *__this,
               System_DateTimeOffset_o *now,MethodInfo *method)

{
  System_DateTime_Fields SVar1;
  undefined8 uVar2;
  bool bVar3;
  System_TimeSpan_o t1;
  System_TimeSpan_Fields t2;
  System_DateTimeOffset_o local_38;
  System_DateTimeOffset_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843479f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_1843479f2 = '\x01';
  }
  if ((__this->fields).Response != (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0
     ) {
    if ((((__this->fields).Response)->fields)._Success_k__BackingField == false) {
      if ((TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
      }
      t2._ticks = (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->
                  FailureTtl).fields._ticks;
    }
    else {
      if ((TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
      }
      t2._ticks = (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->
                  SuccessTtl).fields._ticks;
    }
    SVar1._dateData = (__this->fields).CachedAt.fields._dateTime.fields._dateData;
    uVar2._0_2_ = (__this->fields).CachedAt.fields._offsetMinutes;
    uVar2._2_6_ = *(undefined6 *)&(__this->fields).CachedAt.fields.field_0xa;
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    local_28[0].fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(now->fields)._dateTime.fields._dateData;
    local_28[0].fields._offsetMinutes = (now->fields)._offsetMinutes;
    local_28[0].fields._10_6_ = *(undefined6 *)&(now->fields).field_0xa;
    local_38.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)SVar1._dateData;
    local_38.fields._8_8_ = uVar2;
    t1 = System_DateTimeOffset__op_Subtraction(local_28,&local_38,(MethodInfo *)0x0);
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    bVar3 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
    return bVar3;
  }
  return false;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o* __this, const MethodInfo* method);
// 0x18236b470

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *__this_00;
  
  if (Il2CppMethodInitialized_1843479f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse);
    Il2CppMethodInitialized_1843479f3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ctor);
  (__this->fields).Subscribers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Subscribers,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.cctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___cctor (const MethodInfo* method);
// 0x182376f40

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___cctor(MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o *__this;
  
  if (Il2CppMethodInitialized_1843479f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
    Il2CppMethodInitialized_1843479f4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields->__9,__this
            );
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___ctor(ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$<.ctor>b__5_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c____ctor_b__5_0 (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o* __this, const MethodInfo* method);
// 0x182374840

System_DateTimeOffset_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c____ctor_b__5_0
          (System_DateTimeOffset_o *__return_storage_ptr__,
          ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o *__this,MethodInfo *method)

{
  int16_t iVar1;
  undefined6 uVar2;
  System_DateTimeOffset_o *pSVar3;
  System_DateTimeOffset_o local_18;
  
  if (Il2CppMethodInitialized_1843479f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    Il2CppMethodInitialized_1843479f5 = '\x01';
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


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___ctor(ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$<Get>b__0
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___Get_b__0 (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x182375420

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___Get_b__0
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o *__this,
               ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *response,
               MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *)0x0) {
    ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Complete
              (__this_00,(__this->fields).accountId,response,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_Action_string__Action_AottgPublicProfileFetchResponse___o* fetch, System_Func_DateTimeOffset__o* now, const MethodInfo* method);
// 0x182366850

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_Action_string__Action_AottgPublicProfileFetchResponse___o *fetch,
               System_Func_DateTimeOffset__o *now,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_string__AottgPublicProfileCache_Entry__o *__this_00;
  Il2CppClass *klass;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843479ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c_ctor_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
    Il2CppMethodInitialized_1843479ed = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_ctor);
  (__this->fields)._entries = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._entries,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (fetch != (System_Action_string__Action_AottgPublicProfileFetchResponse___o *)0x0) {
    (__this->fields)._fetch = fetch;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._fetch,fetch);
    if (now == (System_Func_DateTimeOffset__o *)0x0) {
      if ((TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
      }
      now = TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields->__9__5_0;
      if ((DG_Tweening_Core_DOGetter_Vector4__o *)now == (DG_Tweening_Core_DOGetter_Vector4__o *)0x0) {
        if ((TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c);
        }
        object = (Il2CppObject *)
                 TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields->__9;
        now = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_DateTimeOffset);
        System_Func_DateTimeOffset____ctor
                  ((DG_Tweening_Core_DOGetter_Vector4__o *)now,object,
                   (intptr_t)
                   MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c_ctor_b__5_0,
                   (MethodInfo_13876B0 *)0x0);
        TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields->__9__5_0 = now;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c->static_fields->
                    __9__5_0,now);
      }
    }
    (__this->fields)._now = now;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._now,now);
    return;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentNullException);
  __this_01 = (System_ArgumentNullException_o *)il2cpp_codegen_object_new(klass);
  paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
  System_ArgumentNullException___ctor_1a77f20(__this_01,paramName,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_ctor);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Clear
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Clear (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, const MethodInfo* method);
// 0x182366170

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Clear
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AottgPublicProfileCache_Entry__o *__this_00;
  
  if (Il2CppMethodInitialized_1843479ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_Clear);
    Il2CppMethodInitialized_1843479ee = '\x01';
  }
  __this_00 = (__this->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__AottgPublicProfileCache_Entry__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_Clear);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Get
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Get (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_String_o* accountId, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x182366390

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Get
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_String_o *accountId,System_Action_AottgPublicProfileFetchResponse__o *onResult,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Func_DateTimeOffset__o *pSVar4;
  System_Action_AottgPublicProfileFetchResponse__array *pSVar5;
  System_Action_string__Action_AottgPublicProfileFetchResponse___o *pSVar6;
  System_String_o *pSVar7;
  System_DateTime_Fields SVar8;
  uint64_t uVar9;
  System_DateTime_Fields SVar10;
  undefined8 uVar11;
  MethodInfo *pMVar12;
  bool bVar13;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o *object;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *pAVar14;
  System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *pSVar15;
  uint64_t *puVar16;
  System_TimeSpan_o t1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar17;
  System_TimeSpan_Fields t2;
  intptr_t iVar18;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *local_78 [2];
  System_DateTimeOffset_o local_68;
  System_DateTimeOffset_o local_58 [3];
  
  if (Il2CppMethodInitialized_1843479ef == '\0') {
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
    Il2CppMethodInitialized_1843479ef = '\x01';
  }
  local_78[0] = (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c__DisplayClass7_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o *)0x0)
  goto label_1823667a7;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  (object->fields).accountId = accountId;
  Il2CppCodeGenWriteBarrier(&(object->fields).accountId,accountId);
  bVar13 = System_String__IsNullOrEmpty((object->fields).accountId,(MethodInfo *)0x0);
  if (bVar13) {
    if (onResult == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
      return;
    }
    pAVar17 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                        ("bad_account_id",(MethodInfo *)0x0);
    iVar18 = (onResult->fields).method;
label_182366687:
    (*(code *)(onResult->fields).invoke_impl)((onResult->fields).method_code,pAVar17,iVar18);
  }
  else {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1823667a7;
    bVar13 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       (pSVar3,(Il2CppObject *)(object->fields).accountId,(Il2CppObject **)local_78,
                        (MethodInfo_14769C0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_TryGetValue
                       );
    if (!bVar13) {
      pAVar14 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry);
      if (Il2CppMethodInitialized_1843479f3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse);
        Il2CppMethodInitialized_1843479f3 = '\x01';
      }
      pSVar15 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar15,
                 (MethodInfo_92A240 *)
                 MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ctor);
      (pAVar14->fields).Subscribers = pSVar15;
      Il2CppCodeGenWriteBarrier(&(pAVar14->fields).Subscribers,pSVar15);
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar14,(MethodInfo *)0x0);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
      local_78[0] = pAVar14;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1823667a7;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar3,(Il2CppObject *)(object->fields).accountId,(Il2CppObject *)pAVar14,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_set_Item
                );
    }
    pAVar14 = local_78[0];
    pSVar4 = (__this->fields)._now;
    if ((pSVar4 == (System_Func_DateTimeOffset__o *)0x0) ||
       (puVar16 = (uint64_t *)(*(code *)(pSVar4->fields).invoke_impl)(local_58,(pSVar4->fields).method_code),
       pAVar14 == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0))
    goto label_1823667a7;
    SVar8._dateData = *puVar16;
    uVar9 = puVar16[1];
    if (Il2CppMethodInitialized_1843479f2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
      Il2CppMethodInitialized_1843479f2 = '\x01';
    }
    if ((pAVar14->fields).Response !=
        (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
      if ((((pAVar14->fields).Response)->fields)._Success_k__BackingField == false) {
        if ((TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
        }
        t2._ticks = (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->
                    FailureTtl).fields._ticks;
      }
      else {
        if ((TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
        }
        t2._ticks = (TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache->static_fields->
                    SuccessTtl).fields._ticks;
      }
      SVar10._dateData = (pAVar14->fields).CachedAt.fields._dateTime.fields._dateData;
      uVar11._0_2_ = (pAVar14->fields).CachedAt.fields._offsetMinutes;
      uVar11._2_6_ = *(undefined6 *)&(pAVar14->fields).CachedAt.fields.field_0xa;
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      local_68.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)SVar10._dateData;
      local_68.fields._8_8_ = uVar11;
      local_58[0].fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)SVar8._dateData;
      local_58[0].fields._8_8_ = uVar9;
      t1 = System_DateTimeOffset__op_Subtraction(local_58,&local_68,(MethodInfo *)0x0);
      if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
      }
      bVar13 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
      if (bVar13) {
        if (onResult == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
          return;
        }
        if (local_78[0] == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0)
        goto label_1823667a7;
        iVar18 = (onResult->fields).method;
        pAVar17 = (local_78[0]->fields).Response;
        goto label_182366687;
      }
    }
    pMVar12 = MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_Add;
    if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
      if ((local_78[0] == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0) ||
         (pSVar15 = (local_78[0]->fields).Subscribers,
         pSVar15 == (System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *)0x0))
      goto label_1823667a7;
      piVar1 = &(pSVar15->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (pSVar15->fields)._items;
      if (pSVar5 == (System_Action_AottgPublicProfileFetchResponse__array *)0x0) goto label_1823667a7;
      uVar2 = (pSVar15->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (pSVar15->fields)._size = uVar2 + 1;
        if ((uint)pSVar5->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar5->m_Items[(int)uVar2] = onResult;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,onResult);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar15,(Il2CppObject *)onResult,
                   (MethodInfo_93DD50 *)pMVar12->klass->rgctx_data[0xe].method);
      }
    }
    if (local_78[0] == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0) {
label_1823667a7:
      ThrowNullReferenceException();
    }
    if ((local_78[0]->fields).InFlight == false) {
      (local_78[0]->fields).InFlight = true;
      pSVar6 = (__this->fields)._fetch;
      pSVar7 = (object->fields).accountId;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_AottgPublicProfileFetchResponse);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c__DisplayClass7_0_Get_b__0
                 ,(MethodInfo *)0x0);
      if (pSVar6 == (System_Action_string__Action_AottgPublicProfileFetchResponse___o *)0x0)
      goto label_1823667a7;
      (*(code *)(pSVar6->fields).invoke_impl)
                ((pSVar6->fields).method_code,pSVar7,__this_00,(pSVar6->fields).method);
    }
  }
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Complete
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Complete (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_String_o* accountId, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x1823661c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236632d: nop dword ptr [rax]

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
  System_String_o *pSVar4;
  void *pvVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  undefined8 *puVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  uint uVar10;
  Il2CppObject *local_res8;
  undefined1 local_18 [16];
  
  if (Il2CppMethodInitialized_1843479f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_1843479f0 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  local_res8 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)accountId,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgPublicProfileCache_Entry_TryGetValue
                      );
    pIVar6 = local_res8;
    if (!bVar7) {
      return;
    }
    if (local_res8 != (Il2CppObject *)0x0) {
      *(undefined1 *)&local_res8[3].klass = 0;
      if (response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
        response = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                             ("unknown_error",(MethodInfo *)0x0);
      }
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar6[1].monitor = response;
        Il2CppCodeGenWriteBarrier(&pIVar6[1].monitor,response);
        pIVar6 = local_res8;
        pSVar2 = (__this->fields)._now;
        if ((pSVar2 != (System_Func_DateTimeOffset__o *)0x0) &&
           (puVar8 = (undefined8 *)
                     (*(code *)(pSVar2->fields).invoke_impl)
                               (local_18,(pSVar2->fields).method_code,(pSVar2->fields).method),
           pIVar6 != (Il2CppObject *)0x0)) {
          pvVar5 = (void *)puVar8[1];
          pIVar6[2].klass = (Il2CppClass *)*puVar8;
          pIVar6[2].monitor = pvVar5;
          if ((local_res8 != (Il2CppObject *)0x0) &&
             (((local_res8[1].klass != (Il2CppClass *)0x0 &&
               (pUVar9 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                                   ((System_Collections_Generic_List_T__o *)local_res8[1].klass,
                                    (MethodInfo_929FE0 *)
                                    MethodInfo_System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse_ToArray
                                   ), local_res8 != (Il2CppObject *)0x0)) &&
              (pIVar3 = local_res8[1].klass, pIVar3 != (Il2CppClass *)0x0)))) {
            length = *(int32_t *)&(pIVar3->_1).namespaze;
            piVar1 = (int *)((longlong)&(pIVar3->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            *(undefined4 *)&(pIVar3->_1).namespaze = 0;
            if (0 < length) {
              System_Array__Clear((System_Array_o *)(pIVar3->_1).name,0,length,(MethodInfo *)0x0);
            }
            if (pUVar9 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                           *)0x0) {
              uVar10 = 0;
              do {
                if ((int)pUVar9->max_length <= (int)uVar10) {
                  return;
                }
                if ((uint)pUVar9->max_length <= uVar10) {
                  ThrowIndexOutOfRangeException();
                }
                pSVar4 = (&pUVar9->m_Items[0].fields.message)[(int)uVar10];
                if (pSVar4 != (System_String_o *)0x0) {
                  if (local_res8 == (Il2CppObject *)0x0) break;
                  (*(code *)(*(uint64_t *)((char *)pSVar4 + 0x18)))(pSVar4[2].fields,local_res8[1].monitor,pSVar4[1].fields);
                }
                uVar10 = uVar10 + 1;
              } while( true );
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.cctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___cctor (const MethodInfo* method);
// 0x1823667c0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___cctor(MethodInfo *method)

{
  System_TimeSpan_o SVar1;
  
  if (Il2CppMethodInitialized_1843479f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_1843479f1 = '\x01';
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


