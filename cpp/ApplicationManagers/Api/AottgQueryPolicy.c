// Type: ApplicationManagers.Api.AottgQueryPolicy
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryPolicy.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgQueryPolicy$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy___ctor (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_TimeSpan_o successTtl, System_Nullable_TimeSpan__o failureTtl, bool preserveStaleOnFailure, const MethodInfo* method);
// 0x41ab0f0

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_Api_AottgQueryPolicy___ctor
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_TimeSpan_o successTtl,
               System_Nullable_TimeSpan__o failureTtl,bool_conflict preserveStaleOnFailure,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_TimeSpan_o SVar2;
  undefined8 uVar3;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  MethodInfo_375F1D0 *method_00;
  char cVar4;
  undefined *puVar5;
  System_Nullable_TimeSpan__o __this_01;
  char local_40 [8];
  System_TimeSpan_Fields local_38;
  
  SVar2 = failureTtl.fields.value.fields._ticks;
  cVar4 = (char)failureTtl.fields.hasValue;
  local_40[0] = cVar4;
  local_38 = SVar2.fields._ticks;
  if (DAT_05704d2b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_TimeSpan_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704d2b = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_TimeSpan__op_LessThan
                    (successTtl,
                     (System_TimeSpan_o)(*(System_TimeSpan_Fields **)(TypeInfo_TimeSpan + 0xb8))->_ticks,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    uVar3 = il2cpp_init_method_metadata(&TypeInfo_ArgumentOutOfRangeException);
    __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_glue(uVar3);
    puVar5 = &"successTtl";
LAB_041ab23c:
    paramName = (System_String_o *)il2cpp_init_method_metadata(puVar5);
    System_ArgumentOutOfRangeException___ctor(__this_00,paramName,(MethodInfo *)0x0);
    uVar3 = il2cpp_init_method_metadata(&MethodInfo_AottgQueryPolicy);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar3);
  }
  if (cVar4 == '\0') {
    local_40[0] = '\0';
    local_38 = SVar2.fields._ticks;
  }
  else {
    __this_01.fields.value.fields._ticks =
         (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
    __this_01.fields._0_8_ = local_40;
    SVar2 = System_Nullable<TimeSpan>__get_Value(__this_01,method_00);
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_TimeSpan__op_LessThan
                      (SVar2,(System_TimeSpan_o)
                             (*(System_TimeSpan_Fields **)(TypeInfo_TimeSpan + 0xb8))->_ticks,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      uVar3 = il2cpp_init_method_metadata(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_glue(uVar3);
      puVar5 = &"failureTtl";
      goto LAB_041ab23c;
    }
  }
  (__this->fields)._SuccessTtl_k__BackingField.fields._ticks = (int64_t)successTtl.fields._ticks;
  *(char *)&(__this->fields)._FailureTtl_k__BackingField.fields.hasValue = local_40[0];
  (__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks = local_38._ticks;
  *(char *)&(__this->fields)._PreserveStaleOnFailure_k__BackingField = (char)preserveStaleOnFailure;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_SuccessTtl
// il2cpp: System_TimeSpan_o ApplicationManagers_Api_AottgQueryPolicy__get_SuccessTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x41b1590

System_TimeSpan_o
ApplicationManagers_Api_AottgQueryPolicy__get_SuccessTtl
          (ApplicationManagers_Api_AottgQueryPolicy_o *__this,MethodInfo *method)

{
  return (System_TimeSpan_o)
         (System_TimeSpan_Fields)(__this->fields)._SuccessTtl_k__BackingField.fields._ticks;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_SuccessTtl
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_SuccessTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_TimeSpan_o value, const MethodInfo* method);
// 0x41b15a0

void ApplicationManagers_Api_AottgQueryPolicy__set_SuccessTtl
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_TimeSpan_o value,
               MethodInfo *method)

{
  (__this->fields)._SuccessTtl_k__BackingField.fields._ticks = (int64_t)value.fields._ticks;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_FailureTtl
// il2cpp: System_Nullable_TimeSpan__o ApplicationManagers_Api_AottgQueryPolicy__get_FailureTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x41b15b0

System_Nullable_TimeSpan__o
ApplicationManagers_Api_AottgQueryPolicy__get_FailureTtl
          (ApplicationManagers_Api_AottgQueryPolicy_o *__this,MethodInfo *method)

{
  undefined8 in_RAX;
  System_Nullable_TimeSpan__o SVar1;
  
  SVar1.fields._1_7_ = (undefined7)((ulong)in_RAX >> 8);
  SVar1.fields.hasValue._0_1_ = (char)(__this->fields)._FailureTtl_k__BackingField.fields.hasValue;
  SVar1.fields.value.fields._ticks =
       (System_TimeSpan_Fields)
       (System_TimeSpan_Fields)
       (__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks;
  return (System_Nullable_TimeSpan__o)SVar1.fields;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_FailureTtl
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_FailureTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_Nullable_TimeSpan__o value, const MethodInfo* method);
// 0x41b15c0

void ApplicationManagers_Api_AottgQueryPolicy__set_FailureTtl
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_Nullable_TimeSpan__o value
               ,MethodInfo *method)

{
  *(char *)&(__this->fields)._FailureTtl_k__BackingField.fields.hasValue =
       (char)value.fields.hasValue;
  (__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks =
       (int64_t)value.fields.value.fields._ticks.fields;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_PreserveStaleOnFailure
// il2cpp: bool ApplicationManagers_Api_AottgQueryPolicy__get_PreserveStaleOnFailure (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x41b15d0

bool_conflict
ApplicationManagers_Api_AottgQueryPolicy__get_PreserveStaleOnFailure
          (ApplicationManagers_Api_AottgQueryPolicy_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (char)(__this->fields)._PreserveStaleOnFailure_k__BackingField);
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_PreserveStaleOnFailure
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_PreserveStaleOnFailure (ApplicationManagers_Api_AottgQueryPolicy_o* __this, bool value, const MethodInfo* method);
// 0x41b15e0

void ApplicationManagers_Api_AottgQueryPolicy__set_PreserveStaleOnFailure
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._PreserveStaleOnFailure_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$.cctor
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy___cctor (const MethodInfo* method);
// 0x41b15f0

void ApplicationManagers_Api_AottgQueryPolicy___cctor(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  MethodInfo *in_R9;
  
  if (DAT_05704d2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgQueryPolicy);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704d2c = '\x01';
  }
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
  }
  successTtl = System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  __this = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_glue(TypeInfo_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this,successTtl,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  **(undefined8 **)(TypeInfo_AottgQueryPolicy + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgQueryPolicy + 0xb8),__this);
  return;
}


