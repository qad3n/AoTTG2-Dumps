// Type: ApplicationManagers.Api.AottgQueryPolicy
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryPolicy.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgQueryPolicy$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy___ctor (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_TimeSpan_o successTtl, System_Nullable_TimeSpan__o failureTtl, bool preserveStaleOnFailure, const MethodInfo* method);
// 0x44c40f0

void ApplicationManagers_Api_AottgQueryPolicy___ctor
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_TimeSpan_o successTtl,
               System_Nullable_TimeSpan__o failureTtl,bool_conflict preserveStaleOnFailure,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_00;
  bool_conflict bVar1;
  System_TimeSpan_o SVar2;
  undefined8 uVar3;
  System_ArgumentOutOfRangeException_o *__this_01;
  System_String_o *pSVar4;
  System_ArgumentOutOfRangeException_o *pSVar5;
  undefined8 *puVar6;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar7;
  MethodInfo_37EC980 *method_00;
  System_ArgumentOutOfRangeException_Fields *pSVar8;
  char cVar9;
  MethodInfo *method_01;
  undefined *puVar10;
  System_ArgumentOutOfRangeException_o *__this_02;
  System_Nullable_TimeSpan__o __this_03;
  char local_40 [8];
  System_TimeSpan_Fields local_38;
  
  SVar2 = failureTtl.fields.value.fields._ticks;
  cVar9 = (char)failureTtl.fields.hasValue;
  local_40[0] = cVar9;
  local_38 = SVar2.fields._ticks;
  if (g_data_057aeb1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeb1a = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_TimeSpan__op_LessThan
                    (successTtl,(System_TimeSpan_o)(*(System_TimeSpan_Fields **)(TypeInfo_TimeSpan + 0xb8))->_ticks
                     ,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (cVar9 == '\0') {
      local_40[0] = '\0';
      local_38 = SVar2.fields._ticks;
label_044c41e0:
      (__this->fields)._SuccessTtl_k__BackingField.fields._ticks = (int64_t)successTtl.fields._ticks;
      *(char *)&(__this->fields)._FailureTtl_k__BackingField.fields.hasValue = local_40[0];
      (__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks = local_38._ticks;
      *(char *)&(__this->fields)._PreserveStaleOnFailure_k__BackingField = (char)preserveStaleOnFailure;
      return;
    }
    __this_03.fields.value.fields._ticks = (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks
    ;
    __this_03.fields._0_8_ = local_40;
    SVar2 = System_Nullable_TimeSpan___get_Value(__this_03,method_00);
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_TimeSpan__op_LessThan
                      (SVar2,(System_TimeSpan_o)(*(System_TimeSpan_Fields **)(TypeInfo_TimeSpan + 0xb8))->_ticks,
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto label_044c41e0;
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar3);
    puVar10 = &"failureTtl";
  }
  else {
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
    __this_01 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar3);
    puVar10 = &"successTtl";
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar10);
  System_ArgumentOutOfRangeException___ctor_3c13a50(__this_01,pSVar4,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryPolicy);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aeac0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgPublicProfile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetProfile_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    il2cpp_runtime_helper_023445d0(&"bad_account_id");
    g_data_057aeac0 = '\x01';
  }
  pSVar5 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  __this_02 = pSVar5;
  System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  if (pSVar5 != (System_ArgumentOutOfRangeException_o *)0x0) {
    pSVar8 = &pSVar5->fields;
    (pSVar5->fields)._className = pSVar4;
    il2cpp_runtime_helper_022b4080(pSVar8);
    x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgPublicProfileService + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      method_01 = (MethodInfo *)0x0;
      __this_02 = __this_01;
      bVar1 = System_String__IsNullOrEmpty((System_String_o *)__this_01,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) != 0) {
          __this_00 = *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)
                       (**(long **)(TypeInfo_AottgPublicProfileService + 0xb8) + 0x20);
          pSVar5 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgPublicProfile);
          __this_02 = pSVar5;
          System_Action_object____ctor();
          if (__this_00 != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
            ApplicationManagers_Api_AottgQueryCache_object__object___Get
                      (__this_00,(Il2CppObject *)__this_01,(System_Action_AottgQueryResult_TValue___o *)pSVar5
                       ,0,MethodInfo_Void_Get);
            return;
          }
        }
        goto label_044c442a;
      }
      pSVar4 = pSVar8->_className;
      if (pSVar4 == (System_String_o *)0x0) {
        return;
      }
      puVar6 = &"bad_account_id";
    }
    else {
      pSVar4 = pSVar8->_className;
      if (pSVar4 == (System_String_o *)0x0) {
        return;
      }
      puVar6 = &"not_initialized";
    }
    pAVar7 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                       ((System_String_o *)*puVar6,method_01);
    (*(code *)pSVar4[1].klass)(pSVar4[2].fields,pAVar7,pSVar4[1].fields,pSVar4[1].klass);
    return;
  }
label_044c442a:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_SuccessTtl
// il2cpp: System_TimeSpan_o ApplicationManagers_Api_AottgQueryPolicy__get_SuccessTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x44cef10

System_TimeSpan_o
ApplicationManagers_Api_AottgQueryPolicy__get_SuccessTtl
          (ApplicationManagers_Api_AottgQueryPolicy_o *__this,MethodInfo *method)

{
  return (System_TimeSpan_o)(System_TimeSpan_Fields)(__this->fields)._SuccessTtl_k__BackingField.fields._ticks
  ;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_SuccessTtl
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_SuccessTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_TimeSpan_o value, const MethodInfo* method);
// 0x44cef20

void ApplicationManagers_Api_AottgQueryPolicy__set_SuccessTtl
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_TimeSpan_o value,MethodInfo *method)

{
  (__this->fields)._SuccessTtl_k__BackingField.fields._ticks = (int64_t)value.fields._ticks;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_FailureTtl
// il2cpp: System_Nullable_TimeSpan__o ApplicationManagers_Api_AottgQueryPolicy__get_FailureTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x44cef30

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
       (System_TimeSpan_Fields)(__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks;
  return (System_Nullable_TimeSpan__o)SVar1.fields;
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_FailureTtl
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_FailureTtl (ApplicationManagers_Api_AottgQueryPolicy_o* __this, System_Nullable_TimeSpan__o value, const MethodInfo* method);
// 0x44cef40

void ApplicationManagers_Api_AottgQueryPolicy__set_FailureTtl
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,System_Nullable_TimeSpan__o value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._FailureTtl_k__BackingField.fields.hasValue = (char)value.fields.hasValue;
  (__this->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks =
       (int64_t)value.fields.value.fields._ticks.fields;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$get_PreserveStaleOnFailure
// il2cpp: bool ApplicationManagers_Api_AottgQueryPolicy__get_PreserveStaleOnFailure (ApplicationManagers_Api_AottgQueryPolicy_o* __this, const MethodInfo* method);
// 0x44cef50

bool_conflict
ApplicationManagers_Api_AottgQueryPolicy__get_PreserveStaleOnFailure
          (ApplicationManagers_Api_AottgQueryPolicy_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._PreserveStaleOnFailure_k__BackingField);
}


// ApplicationManagers.Api.AottgQueryPolicy$$set_PreserveStaleOnFailure
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy__set_PreserveStaleOnFailure (ApplicationManagers_Api_AottgQueryPolicy_o* __this, bool value, const MethodInfo* method);
// 0x44cef60

void ApplicationManagers_Api_AottgQueryPolicy__set_PreserveStaleOnFailure
               (ApplicationManagers_Api_AottgQueryPolicy_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._PreserveStaleOnFailure_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgQueryPolicy$$.cctor
// il2cpp: void ApplicationManagers_Api_AottgQueryPolicy___cctor (const MethodInfo* method);
// 0x44cef70

void ApplicationManagers_Api_AottgQueryPolicy___cctor(MethodInfo *method)

{
  System_TimeSpan_o successTtl;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this;
  MethodInfo *in_R9;
  
  if (g_data_057aeb1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeb1b = '\x01';
  }
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  successTtl = System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  __this = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this,successTtl,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  **(undefined8 **)(TypeInfo_AottgQueryPolicy + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgQueryPolicy + 0xb8),__this);
  return;
}


