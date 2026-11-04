// Type: ApplicationManagers.Api.AottgQueryPolicy
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryPolicy.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgQueryPolicy$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy___ctor (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_TimeSpan_o successTtl, System_Nullable_TimeSpan__o failureTtl, bool preserveStaleOnFailure, const MethodInfo* method);
// 0x1823680f0

void ApplicationManagers_Api_AottgQueryPolicy___ctor
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_TimeSpan_o successTtl,
               System_Nullable_TimeSpan__o *failureTtl,bool preserveStaleOnFailure,MethodInfo *method)

{
  int64_t iVar1;
  undefined7 uVar2;
  bool bVar3;
  System_TimeSpan_o t1;
  Il2CppClass *pIVar4;
  System_ArgumentOutOfRangeException_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184347a5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_TimeSpan_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_TimeSpan_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_184347a5a = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  bVar3 = System_TimeSpan__op_LessThan
                    (successTtl,
                     (System_TimeSpan_o)(TypeInfo_System_TimeSpan->static_fields->Zero).fields._ticks,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    if ((failureTtl->fields).hasValue != false) {
      t1.fields._ticks =
           (System_TimeSpan_Fields)
           System_Nullable_DefaultEventSystem_FocusBasedEventSequenceContext___get_Value
                     ((System_Nullable_T__o *)failureTtl,
                      (MethodInfo_AE2B70 *)MethodInfo_System_Nullable_TimeSpan_get_Value);
      if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
      }
      bVar3 = System_TimeSpan__op_LessThan
                        (t1,(System_TimeSpan_o)(TypeInfo_System_TimeSpan->static_fields->Zero).fields._ticks,
                         (MethodInfo *)0x0);
      if (bVar3) {
        pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
        pSVar5 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar4);
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"failureTtl");
        System_ArgumentOutOfRangeException___ctor_1a78320(pSVar5,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_ApplicationManagers_Api_AottgQueryPolicy_ctor);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar7);
      }
    }
    bVar3 = (failureTtl->fields).hasValue;
    uVar2 = *(undefined7 *)&(failureTtl->fields).field_0x1;
    iVar1 = (failureTtl->fields).value.fields._ticks;
    (__this->fields)._SuccessTtl_k__BackingField.fields._ticks = (int64_t)successTtl.fields._ticks;
    (__this->fields)._PreserveStaleOnFailure_k__BackingField = preserveStaleOnFailure;
    (__this->fields)._FailureTtl_k__BackingField.fields.hasValue = bVar3;
    *(undefined7 *)&(__this->fields)._FailureTtl_k__BackingField.fields.field_0x1 = uVar2;
    (__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks = iVar1;
    return;
  }
  pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
  pSVar5 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar4);
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"successTtl");
  System_ArgumentOutOfRangeException___ctor_1a78320(pSVar5,pSVar6,(MethodInfo *)0x0);
  pMVar7 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_Api_AottgQueryPolicy_ctor);
  il2cpp_codegen_raise_exception((Il2CppObject *)pSVar5,pMVar7);
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_SuccessTtl
// il2cpp: System_TimeSpan_o ApplicationManagers_Api_AottgQueryPolicy__get_SuccessTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_TimeSpan_o
ApplicationManagers_Api_AottgQueryPolicy__get_SuccessTtl(ApplicationManagers_Api_AottgQueryPolicy_o* __this, MethodInfo* method)

{
  return (__this->fields)._SuccessTtl_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_SuccessTtl
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_SuccessTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_TimeSpan_o value, const MethodInfo* method);
// 0x180560ec0

void
ApplicationManagers_Api_AottgQueryPolicy__set_SuccessTtl(ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_TimeSpan_o value, MethodInfo* method)

{
  (__this->fields)._SuccessTtl_k__BackingField.fields = value.fields;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_FailureTtl
// il2cpp: System_Nullable_TimeSpan__o ApplicationManagers_Api_AottgQueryPolicy__get_FailureTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x1808e7990

System_Nullable_TimeSpan__o
ApplicationManagers_Api_AottgQueryPolicy__get_FailureTtl(ApplicationManagers_Api_AottgQueryPolicy_o* __this, MethodInfo* method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar1 = (__this->fields)._FailureTtl_k__BackingField.fields.m_Length;
  iVar2 = (__this->fields)._FailureTtl_k__BackingField.fields.m_AllocatorLabel;
  (__return_storage_ptr__->fields).m_Buffer = (__this->fields)._FailureTtl_k__BackingField.fields.m_Buffer;
  (__return_storage_ptr__->fields).m_Length = iVar1;
  (__return_storage_ptr__->fields).m_AllocatorLabel = iVar2;
  return __return_storage_ptr__;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_FailureTtl
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_FailureTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_Nullable_TimeSpan__o value, const MethodInfo* method);
// 0x18111c9e0

void
ApplicationManagers_Api_AottgQueryPolicy__set_FailureTtl(ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_Nullable_TimeSpan__o value, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (value->fields).g;
  fVar2 = (value->fields).b;
  fVar3 = (value->fields).a;
  (__this->fields)._FailureTtl_k__BackingField.fields.r = (value->fields).r;
  (__this->fields)._FailureTtl_k__BackingField.fields.g = fVar1;
  (__this->fields)._FailureTtl_k__BackingField.fields.b = fVar2;
  (__this->fields)._FailureTtl_k__BackingField.fields.a = fVar3;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_PreserveStaleOnFailure
// il2cpp: bool ApplicationManagers_Api_AottgQueryPolicy__get_PreserveStaleOnFailure (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x180f1d480

bool
ApplicationManagers_Api_AottgQueryPolicy__get_PreserveStaleOnFailure(ApplicationManagers_Api_AottgQueryPolicy_o* __this, MethodInfo* method)

{
  return (__this->fields)._PreserveStaleOnFailure_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_PreserveStaleOnFailure
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_PreserveStaleOnFailure (ApplicationManagers_Api_AottgQueryPolicy_o* __this, bool value, const MethodInfo* method);
// 0x180f1d940

void
ApplicationManagers_Api_AottgQueryPolicy__set_PreserveStaleOnFailure(ApplicationManagers_Api_AottgQueryPolicy_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._PreserveStaleOnFailure_k__BackingField = value;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$.cctor
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy___cctor (const MethodInfo* method);
// 0x182368020

void ApplicationManagers_Api_AottgQueryPolicy___cctor(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  System_Nullable_TimeSpan__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347a5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_184347a5b = '\x01';
  }
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  successTtl = System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
  local_28[0].hasValue = false;
  local_28[0]._1_7_ = 0;
  local_28[0].value.fields._ticks = (System_TimeSpan_Fields)0;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this,successTtl,(System_Nullable_TimeSpan__o *)local_28,true,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_Api_AottgQueryPolicy->static_fields->Default = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_Api_AottgQueryPolicy->static_fields->Default,__this)
  ;
  return;
}


