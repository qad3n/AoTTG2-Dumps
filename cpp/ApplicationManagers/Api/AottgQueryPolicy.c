// Type: ApplicationManagers.Api.AottgQueryPolicy
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.Api/AottgQueryPolicy.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgQueryPolicy$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy___ctor (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_TimeSpan_o successTtl, System_Nullable_TimeSpan__o failureTtl, bool preserveStaleOnFailure, const MethodInfo* method);
// 0x5e27d60

void ApplicationManagers_Api_AottgQueryPolicy___ctor
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_TimeSpan_o successTtl,
               System_Nullable_TimeSpan__o failureTtl,bool preserveStaleOnFailure,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_TimeSpan_o SVar3;
  Il2CppClass *pIVar4;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  System_String_o **metadataPointer;
  System_Nullable_TimeSpan__o local_40;
  
  SVar3 = failureTtl.fields.value.fields._ticks;
  bVar2 = failureTtl.fields.hasValue;
  local_40.fields.hasValue = bVar2;
  local_40.fields.value.fields._ticks = SVar3.fields._ticks;
  if (Il2CppMethodInitialized_07548514 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_TimeSpan_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_TimeSpan_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_07548514 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  bVar1 = System_TimeSpan__op_LessThan
                    (successTtl,
                     (System_TimeSpan_o)(TypeInfo_System_TimeSpan->static_fields->Zero).fields._ticks,
                     (MethodInfo *)0x0);
  if (bVar1) {
    pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
    __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar4);
    metadataPointer = &"successTtl";
label_05e27ead:
    paramName = il2cpp_codegen_get_runtime_metadata(metadataPointer);
    System_ArgumentOutOfRangeException___ctor_5419ca0(__this_00,paramName,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_Api_AottgQueryPolicy_ctor);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  if (bVar2 == false) {
    local_40.fields.hasValue = false;
  }
  else {
    SVar3 = System_Nullable_TimeSpan___get_Value
                      (&local_40,(MethodInfo_3CDB040 *)MethodInfo_System_Nullable_TimeSpan_get_Value);
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    bVar2 = System_TimeSpan__op_LessThan
                      (SVar3,(System_TimeSpan_o)(TypeInfo_System_TimeSpan->static_fields->Zero).fields._ticks,
                       (MethodInfo *)0x0);
    if (bVar2) {
      pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar4);
      metadataPointer = &"failureTtl";
      goto label_05e27ead;
    }
    SVar3.fields._ticks = local_40.fields.value.fields._ticks;
  }
  (__this->fields)._SuccessTtl_k__BackingField.fields._ticks = (int64_t)successTtl.fields._ticks;
  (__this->fields)._FailureTtl_k__BackingField.fields.hasValue = local_40.fields.hasValue;
  (__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks = (int64_t)SVar3.fields._ticks;
  (__this->fields)._PreserveStaleOnFailure_k__BackingField = preserveStaleOnFailure;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_SuccessTtl
// il2cpp: System_TimeSpan_o ApplicationManagers_Api_AottgQueryPolicy__get_SuccessTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x5e2ad20

System_TimeSpan_o
ApplicationManagers_Api_AottgQueryPolicy__get_SuccessTtl
          (ApplicationManagers_Api_AottgQueryPolicy_o *__this,MethodInfo *method)

{
  return (System_TimeSpan_o)(System_TimeSpan_Fields)(__this->fields)._SuccessTtl_k__BackingField.fields._ticks
  ;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_SuccessTtl
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_SuccessTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_TimeSpan_o value, const MethodInfo* method);
// 0x5e2ad30

void ApplicationManagers_Api_AottgQueryPolicy__set_SuccessTtl
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_TimeSpan_o value,MethodInfo *method)

{
  (__this->fields)._SuccessTtl_k__BackingField.fields._ticks = (int64_t)value.fields._ticks;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_FailureTtl
// il2cpp: System_Nullable_TimeSpan__o ApplicationManagers_Api_AottgQueryPolicy__get_FailureTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x5e2ad40

System_Nullable_TimeSpan__o
ApplicationManagers_Api_AottgQueryPolicy__get_FailureTtl
          (ApplicationManagers_Api_AottgQueryPolicy_o *__this,MethodInfo *method)

{
  System_Nullable_TimeSpan__o SVar1;
  
  SVar1.fields._1_7_ = 0;
  SVar1.fields.hasValue = (__this->fields)._FailureTtl_k__BackingField.fields.hasValue;
  SVar1.fields.value.fields._ticks =
       (System_TimeSpan_Fields)
       (System_TimeSpan_Fields)(__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks;
  return (System_Nullable_TimeSpan__o)SVar1.fields;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_FailureTtl
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_FailureTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_Nullable_TimeSpan__o value, const MethodInfo* method);
// 0x5e2ad50

void ApplicationManagers_Api_AottgQueryPolicy__set_FailureTtl
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_Nullable_TimeSpan__o value,
               MethodInfo *method)

{
  (__this->fields)._FailureTtl_k__BackingField.fields.hasValue = value.fields.hasValue;
  (__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks =
       (int64_t)value.fields.value.fields._ticks.fields;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_PreserveStaleOnFailure
// il2cpp: bool ApplicationManagers_Api_AottgQueryPolicy__get_PreserveStaleOnFailure (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x5e2ad60

bool ApplicationManagers_Api_AottgQueryPolicy__get_PreserveStaleOnFailure
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,MethodInfo *method)

{
  return (__this->fields)._PreserveStaleOnFailure_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_PreserveStaleOnFailure
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_PreserveStaleOnFailure (ApplicationManagers_Api_AottgQueryPolicy_o* __this, bool value, const MethodInfo* method);
// 0x5e2ad70

void ApplicationManagers_Api_AottgQueryPolicy__set_PreserveStaleOnFailure
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._PreserveStaleOnFailure_k__BackingField = value;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$.cctor
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy___cctor (const MethodInfo* method);
// 0x5e2ad80

void ApplicationManagers_Api_AottgQueryPolicy___cctor(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07548515 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_07548515 = '\x01';
  }
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  successTtl = System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this,successTtl,(System_Nullable_TimeSpan__o)ZEXT816(0),true,in_R9);
  TypeInfo_ApplicationManagers_Api_AottgQueryPolicy->static_fields->Default = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_Api_AottgQueryPolicy->static_fields->Default);
  return;
}


