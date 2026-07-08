// Type: ApplicationManagers.Api.AottgQueryCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryCache.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgQueryCache.Entry<object, object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_Entry_object__object____ctor (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o* __this, const MethodInfo_316EB70* method);
// 0x326eb70

void ApplicationManagers_Api_AottgQueryCache_Entry<object__object>___ctor
               (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *__this,
               MethodInfo_316EB70 *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_List_Action_AottgQueryResult_TValue____o *__this_00;
  
  pIVar1 = method->klass->rgctx_data->
           _0_System_Collections_Generic_List_Action_AottgQueryResult_TValue___;
  if (((pIVar1->_2).field_0x6d & 1) == 0) {
    pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (System_Collections_Generic_List_Action_AottgQueryResult_TValue____o *)
              il2cpp_runtime_glue(pIVar1);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_35A69E0 *)
             method->klass->rgctx_data->
             _1_System_Collections_Generic_List_Action_AottgQueryResult_TValue_____ctor);
  (__this->fields).Subscribers = __this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.Entry<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_Entry___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o* __this, const MethodInfo_316EE00* method);
// 0x326ee00

void ApplicationManagers_Api_AottgQueryCache_Entry<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>___ctor
               (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *__this,
               MethodInfo_316EE00 *method)

{
  void *pvVar1;
  Il2CppClass *pIVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  pIVar2 = method->klass->rgctx_data->
           _0_System_Collections_Generic_List_Action_AottgQueryResult_TValue___;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  uVar3 = il2cpp_runtime_glue(pIVar2);
  (*method->klass->rgctx_data->
    _1_System_Collections_Generic_List_Action_AottgQueryResult_TValue_____ctor->methodPointer)
            (uVar3);
  pvVar1 = (method->klass->rgctx_data->
            _2_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
  il2cpp_glue_02274840(pvVar1,8);
  puVar4 = (undefined8 *)il2cpp_glue_022fa440(__this,pvVar1);
  *puVar4 = uVar3;
  il2cpp_glue_02274770(*(undefined8 *)((long)pvVar1 + 8),puVar4,0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.Entry<AottgCreditsService.UnitKey, object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o* __this, const MethodInfo_316F030* method);
// 0x326f030

void ApplicationManagers_Api_AottgQueryCache_Entry<AottgCreditsService_UnitKey__object>___ctor
               (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *__this,
               MethodInfo_316F030 *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_List_Action_AottgQueryResult_TValue____o *__this_00;
  
  pIVar1 = method->klass->rgctx_data->
           _0_System_Collections_Generic_List_Action_AottgQueryResult_TValue___;
  if (((pIVar1->_2).field_0x6d & 1) == 0) {
    pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (System_Collections_Generic_List_Action_AottgQueryResult_TValue____o *)
              il2cpp_runtime_glue(pIVar1);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_35A69E0 *)
             method->klass->rgctx_data->
             _1_System_Collections_Generic_List_Action_AottgQueryResult_TValue_____ctor);
  (__this->fields).Subscribers = __this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c<object, object>$$.cctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c_object__object____cctor (const MethodInfo_27329A0* method);
// 0x28329a0

void ApplicationManagers_Api_AottgQueryCache_<>c<object__object>___cctor(MethodInfo_27329A0 *method)

{
  ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *pAVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_0_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_2_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_2_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  il2cpp_runtime_glue(pIVar2->static_fields,__this);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.cctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor (const MethodInfo_2736120* method);
// 0x2836120

void ApplicationManagers_Api_AottgQueryCache_<>c<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>___cctor
               (MethodInfo_2736120 *method)

{
  ushort uVar1;
  Il2CppMethodPointer pIVar2;
  ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *pAVar3;
  Il2CppClass *pIVar4;
  undefined8 uVar5;
  ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *pAVar6;
  
  pAVar3 = method->klass;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0(pAVar3);
  }
  pIVar4 = pAVar3->rgctx_data->_0_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  uVar5 = il2cpp_runtime_glue(pIVar4);
  pAVar3 = method->klass;
  uVar1 = *(ushort *)&(pAVar3->_2).field_0x6d;
  pAVar6 = pAVar3;
  if ((uVar1 & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar6 = method->klass;
  }
  pIVar2 = pAVar3->rgctx_data->_1_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue___ctor->
           methodPointer;
  if ((uVar1 & 1) == 0) {
    pAVar6 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar2)(uVar5,pAVar6->rgctx_data->
                  _1_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue___ctor);
  pAVar3 = method->klass;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0(pAVar3);
  }
  pIVar4 = pAVar3->rgctx_data->_2_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
  }
  *(undefined8 *)pIVar4->static_fields = uVar5;
  pAVar3 = method->klass;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0(pAVar3);
  }
  pIVar4 = pAVar3->rgctx_data->_2_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
  }
  il2cpp_runtime_glue(pIVar4->static_fields,uVar5);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c<AottgCreditsService.UnitKey, object>$$.cctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c_AottgCreditsService_UnitKey__object____cctor (const MethodInfo_2738000* method);
// 0x2838000

void ApplicationManagers_Api_AottgQueryCache_<>c<AottgCreditsService_UnitKey__object>___cctor
               (MethodInfo_2738000 *method)

{
  ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *pAVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_0_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_2_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_2_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  il2cpp_runtime_glue(pIVar2->static_fields,__this);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c<object, object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c_object__object____ctor (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o* __this, const MethodInfo_2732A80* method);
// 0x2832a80

void ApplicationManagers_Api_AottgQueryCache_<>c<object__object>___ctor
               (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o *__this,
               MethodInfo_2732A80 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o* __this, const MethodInfo_2736230* method);
// 0x2836230

void ApplicationManagers_Api_AottgQueryCache_<>c<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>___ctor
               (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o *__this,
               MethodInfo_2736230 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c<AottgCreditsService.UnitKey, object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c_AottgCreditsService_UnitKey__object____ctor (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o* __this, const MethodInfo_27380E0* method);
// 0x28380e0

void ApplicationManagers_Api_AottgQueryCache_<>c<AottgCreditsService_UnitKey__object>___ctor
               (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o *__this,
               MethodInfo_27380E0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c<object, object>$$<.ctor>b__4_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_Api_AottgQueryCache___c_object__object_____ctor_b__4_0 (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o* __this, const MethodInfo_2732A90* method);
// 0x2832a90

System_DateTimeOffset_o
ApplicationManagers_Api_AottgQueryCache_<>c<object__object>__<_ctor>b__4_0
          (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o *__this,
          MethodInfo_2732A90 *method)

{
  int iVar1;
  System_DateTimeOffset_Fields SVar2;
  
  if (DAT_056fe138 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    DAT_056fe138 = '\x01';
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  if (iVar1 != 0) {
    SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
    return (System_DateTimeOffset_o)SVar2;
  }
  il2cpp_init_class();
  SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
  return (System_DateTimeOffset_o)SVar2;
}


// ApplicationManagers.Api.AottgQueryCache.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<.ctor>b__4_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_Api_AottgQueryCache___c___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_____ctor_b__4_0 (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o* __this, const MethodInfo_2736240* method);
// 0x2836240

System_DateTimeOffset_o
ApplicationManagers_Api_AottgQueryCache_<>c<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__<_ctor>b__4_0
          (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o *__this,
          MethodInfo_2736240 *method)

{
  int iVar1;
  System_DateTimeOffset_Fields SVar2;
  
  if (DAT_056fe13a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    DAT_056fe13a = '\x01';
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  if (iVar1 != 0) {
    SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
    return (System_DateTimeOffset_o)SVar2;
  }
  il2cpp_init_class();
  SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
  return (System_DateTimeOffset_o)SVar2;
}


// ApplicationManagers.Api.AottgQueryCache.<>c<AottgCreditsService.UnitKey, object>$$<.ctor>b__4_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_Api_AottgQueryCache___c_AottgCreditsService_UnitKey__object_____ctor_b__4_0 (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o* __this, const MethodInfo_27380F0* method);
// 0x28380f0

System_DateTimeOffset_o
ApplicationManagers_Api_AottgQueryCache_<>c<AottgCreditsService_UnitKey__object>__<_ctor>b__4_0
          (ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue__o *__this,
          MethodInfo_27380F0 *method)

{
  int iVar1;
  System_DateTimeOffset_Fields SVar2;
  
  if (DAT_056fe140 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    DAT_056fe140 = '\x01';
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  if (iVar1 != 0) {
    SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
    return (System_DateTimeOffset_o)SVar2;
  }
  il2cpp_init_class();
  SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
  return (System_DateTimeOffset_o)SVar2;
}


// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<object, object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_object__object____ctor (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o* __this, const MethodInfo_2776A20* method);
// 0x2876a20

void ApplicationManagers_Api_AottgQueryCache_<>c__DisplayClass9_0<object__object>___ctor
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *__this
               ,MethodInfo_2776A20 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o* __this, const MethodInfo_2776A70* method);
// 0x2876a70

void ApplicationManagers_Api_AottgQueryCache_<>c__DisplayClass9_0<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>___ctor
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *__this
               ,MethodInfo_2776A70 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<AottgCreditsService.UnitKey, object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o* __this, const MethodInfo_2776B60* method);
// 0x2876b60

void ApplicationManagers_Api_AottgQueryCache_<>c__DisplayClass9_0<AottgCreditsService_UnitKey__object>___ctor
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *__this
               ,MethodInfo_2776B60 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<object, object>$$<Get>b__0
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_object__object____Get_b__0 (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o* __this, ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* result, const MethodInfo_2776A30* method);
// 0x2876a30

void ApplicationManagers_Api_AottgQueryCache_<>c__DisplayClass9_0<object__object>__<Get>b__0
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *__this
               ,ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *result,
               MethodInfo_2776A30 *method)

{
  int *piVar1;
  int32_t length;
  uint uVar2;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar3;
  Il2CppObject *pIVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Func_DateTimeOffset__o *pSVar6;
  Il2CppClass *pIVar7;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar8;
  bool_conflict bVar9;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar10;
  System_Object_array *pSVar11;
  ulong uVar12;
  unkbyte10 Var13;
  Il2CppObject *pIStack_30;
  undefined4 uStack_26;
  undefined2 uStack_22;
  
  pAVar3 = (__this->fields).__4__this;
  if (pAVar3 == (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar4 = (__this->fields).key;
  pMVar5 = method->klass->rgctx_data->
           _4_ApplicationManagers_Api_AottgQueryCache_TKey__TValue__Complete;
  if (DAT_057003d5 == '\0') {
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003d5 = '\x01';
  }
  pIStack_30 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pAVar3->fields)._entries;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
  goto LAB_033b39a6;
  bVar9 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (__this_00,pIVar4,&pIStack_30,
                     (MethodInfo_308E3E0 *)pMVar5->klass->rgctx_data[9].method);
  if ((char)bVar9 == '\0') {
    return;
  }
  if ((pIStack_30 == (Il2CppObject *)0x0) ||
     (((*(undefined1 *)((long)&pIStack_30[3].monitor + 2) = 0,
       result == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 &&
       (result = ApplicationManagers_Api_AottgQueryFetchResult<object>__Fail
                           ("unknown_error",
                            (MethodInfo_32B5DC0 *)pMVar5->klass->rgctx_data[0x23].method),
       result == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) ||
      (pIStack_30 == (Il2CppObject *)0x0)))) goto LAB_033b39a6;
  if ((char)(result->fields)._Success_k__BackingField == '\0') {
    if (*(char *)&pIStack_30[3].monitor != '\0') {
      pAVar8 = (pAVar3->fields)._policy;
      if (pAVar8 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b39a6;
      if ((char)(pAVar8->fields)._PreserveStaleOnFailure_k__BackingField != '\0') {
        pIStack_30[2].klass = (Il2CppClass *)(result->fields)._Error_k__BackingField;
        il2cpp_runtime_glue(pIStack_30 + 2);
        if (pIStack_30 == (Il2CppObject *)0x0) goto LAB_033b39a6;
        pAVar10 = ApplicationManagers_Api_AottgQueryResult<object>__FailedRefreshStale
                            (pIStack_30[1].monitor,(result->fields)._Error_k__BackingField,
                             (MethodInfo_32B6910 *)pMVar5->klass->rgctx_data[0x28].method);
        goto joined_r0x033b3916;
      }
    }
    *(undefined2 *)&pIStack_30[3].monitor = 0x100;
    pIStack_30[1].monitor = (void *)0x0;
    pIStack_30[2].klass = (Il2CppClass *)(result->fields)._Error_k__BackingField;
    il2cpp_runtime_glue(pIStack_30 + 2);
    pIVar4 = pIStack_30;
    pSVar6 = (pAVar3->fields)._now;
    if ((pSVar6 == (System_Func_DateTimeOffset__o *)0x0) ||
       (Var13 = (*(code *)(pSVar6->fields).invoke_impl)((pSVar6->fields).method_code),
       pIVar4 == (Il2CppObject *)0x0)) goto LAB_033b39a6;
    *(unkbyte10 *)&pIVar4[2].monitor = Var13;
    *(undefined4 *)((long)&pIVar4[3].klass + 2) = uStack_26;
    *(undefined2 *)((long)&pIVar4[3].klass + 6) = uStack_22;
    pAVar10 = ApplicationManagers_Api_AottgQueryResult<object>__FailedNoCache
                        ((result->fields)._Error_k__BackingField,0,
                         (MethodInfo_32B67D0 *)pMVar5->klass->rgctx_data[0x21].method);
  }
  else {
    *(undefined2 *)&pIStack_30[3].monitor = 1;
    pIStack_30[1].monitor = (result->fields)._Value_k__BackingField;
    il2cpp_runtime_glue(&pIStack_30[1].monitor);
    if (pIStack_30 == (Il2CppObject *)0x0) goto LAB_033b39a6;
    pIStack_30[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_glue(pIStack_30 + 2,0);
    pIVar4 = pIStack_30;
    pSVar6 = (pAVar3->fields)._now;
    if ((pSVar6 == (System_Func_DateTimeOffset__o *)0x0) ||
       (Var13 = (*(code *)(pSVar6->fields).invoke_impl)((pSVar6->fields).method_code),
       pIVar4 == (Il2CppObject *)0x0)) goto LAB_033b39a6;
    *(unkbyte10 *)&pIVar4[2].monitor = Var13;
    *(undefined2 *)((long)&pIVar4[3].klass + 6) = uStack_22;
    *(undefined4 *)((long)&pIVar4[3].klass + 2) = uStack_26;
    if (pIStack_30 == (Il2CppObject *)0x0) goto LAB_033b39a6;
    pAVar10 = ApplicationManagers_Api_AottgQueryResult<object>__ReadyFresh
                        (pIStack_30[1].monitor,0,
                         (MethodInfo_32B6630 *)pMVar5->klass->rgctx_data[0x20].method);
  }
joined_r0x033b3916:
  if ((((pIStack_30 != (Il2CppObject *)0x0) && (pIStack_30[1].klass != (Il2CppClass *)0x0)) &&
      (pSVar11 = System_Collections_Generic_List<object>__ToArray
                           ((System_Collections_Generic_List_object__o *)pIStack_30[1].klass,
                            (MethodInfo_35A9470 *)pMVar5->klass->rgctx_data[0x29].method),
      pIStack_30 != (Il2CppObject *)0x0)) &&
     (pIVar7 = pIStack_30[1].klass, pIVar7 != (Il2CppClass *)0x0)) {
    piVar1 = (int *)((long)&(pIVar7->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    length = *(int32_t *)&(pIVar7->_1).namespaze;
    *(undefined4 *)&(pIVar7->_1).namespaze = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pIVar7->_1).name,0,length,(MethodInfo *)0x0);
    }
    if (pSVar11 != (System_Object_array *)0x0) {
      if ((int)pSVar11->max_length < 1) {
        return;
      }
      uVar12 = 0;
      if ((pSVar11->max_length & 0xffffffff) != 0) {
        do {
          pIVar4 = pSVar11->m_Items[uVar12];
          if (pIVar4 != (Il2CppObject *)0x0) {
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_033b39a6;
            (*pIVar4[1].monitor)(pIVar4[4].klass,pAVar10,pIVar4[2].monitor);
          }
          uVar12 = uVar12 + 1;
          uVar2 = (uint)pSVar11->max_length;
          if ((long)(int)uVar2 <= (long)uVar12) {
            return;
          }
        } while (uVar12 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_033b39a6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<Get>b__0
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Get_b__0 (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o* __this, ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* result, const MethodInfo_2776A80* method);
// 0x2876a80

void ApplicationManagers_Api_AottgQueryCache_<>c__DisplayClass9_0<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__<Get>b__0
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *__this
               ,ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *result,
               MethodInfo_2776A80 *method)

{
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__RGCTXs *pAVar1;
  void *pvVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  long lVar6;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *__dest;
  ulong __n;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *apAStack_50 [4];
  
  pAVar1 = method->klass->rgctx_data;
  __n = (ulong)(pAVar1->_2_TKey->_2).actualSize;
  lVar6 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apAStack_50 + lVar6 + 8);
  pvVar2 = (pAVar1->_0_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue_->
           _1).fields;
  apAStack_50[3] = result;
  *(undefined8 *)((long)apAStack_50 + lVar6) = 0x2876ad1;
  puVar8 = (undefined8 *)il2cpp_glue_022fa440(__this,pvVar2);
  pvVar2 = (void *)*puVar8;
  pvVar9 = (method->klass->rgctx_data->
            _0_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue_->_1).
           fields;
  *(undefined8 *)((long)apAStack_50 + lVar6) = 0x2876af5;
  pvVar9 = (void *)il2cpp_glue_022fa440(__this,(long)pvVar9 + 0x20);
  *(undefined8 *)((long)apAStack_50 + lVar6) = 0x2876b03;
  memcpy(__dest,pvVar9,__n);
  pAVar7 = apAStack_50[3];
  if (pvVar2 != (void *)0x0) {
    pAVar1 = method->klass->rgctx_data;
    pMVar3 = pAVar1->_4_ApplicationManagers_Api_AottgQueryCache_TKey__TValue__Complete;
    pIVar4 = pMVar3->methodPointer;
    if (-1 < (int)(pAVar1->_2_TKey->_1).byval_arg.bits) {
      __dest = (undefined8 *)*__dest;
    }
    apAStack_50[2] = apAStack_50[3];
    pIVar5 = pMVar3->invoker_method;
    apAStack_50[1] = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)__dest;
    *(undefined8 *)((long)apAStack_50 + lVar6) = 0x2876b3d;
    (*pIVar5)(pIVar4,pMVar3,pvVar2,apAStack_50 + 1,pAVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)apAStack_50 + lVar6) = &UNK_02876b51;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<AottgCreditsService.UnitKey, object>$$<Get>b__0
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____Get_b__0 (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o* __this, ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* result, const MethodInfo_2776B70* method);
// 0x2876b70

void ApplicationManagers_Api_AottgQueryCache_<>c__DisplayClass9_0<AottgCreditsService_UnitKey__object>__<Get>b__0
               (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *__this
               ,ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *result,
               MethodInfo_2776B70 *method)

{
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar1;
  
  pAVar1 = (__this->fields).__4__this;
  if (pAVar1 != (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
    ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__Complete
              (pAVar1,*(undefined4 *)&(__this->fields).key,result,
               method->klass->rgctx_data->
               _4_ApplicationManagers_Api_AottgQueryCache_TKey__TValue__Complete);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<object, object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_object__object____ctor (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, System_Action_TKey__Action_AottgQueryFetchResult_TValue____o* fetch, System_Func_DateTimeOffset__o* now, ApplicationManagers_Api_AottgQueryPolicy_o* policy, const MethodInfo_32B2D60* method);
// 0x33b2d60

void ApplicationManagers_Api_AottgQueryCache<object__object>___ctor
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
               System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch,
               System_Func_DateTimeOffset__o *now,ApplicationManagers_Api_AottgQueryPolicy_o *policy
               ,MethodInfo_32B2D60 *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 uVar2;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *pAVar3;
  
  if (DAT_057003d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgQueryPolicy);
    il2cpp_init_method_metadata(&TypeInfo_Func_DateTimeOffset);
    DAT_057003d3 = '\x01';
  }
  pIVar1 = method->klass->rgctx_data->
           _0_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue__;
  if (((pIVar1->_2).field_0x6d & 1) == 0) {
    pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_glue(pIVar1);
  System_Collections_Generic_Dictionary<object__object>___ctor
            (__this_00,
             (MethodInfo_308BC00 *)
             method->klass->rgctx_data->
             _1_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue____ctor
            );
  (__this->fields)._entries =
       (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *)
       __this_00;
  il2cpp_runtime_glue(&(__this->fields)._entries);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (fetch != (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)0x0) {
    if (__this == (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields)._fetch = fetch;
    il2cpp_runtime_glue(&__this->fields,fetch);
    if (now == (System_Func_DateTimeOffset__o *)0x0) {
      pIVar1 = method->klass->rgctx_data->
               _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
      if (((pIVar1->_2).field_0x6d & 1) == 0) {
        pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
      }
      if (*(int *)&(pIVar1->_2).field_0x1c == 0) {
        il2cpp_init_class();
      }
      pIVar1 = method->klass->rgctx_data->
               _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
      if (((pIVar1->_2).field_0x6d & 1) == 0) {
        pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar1);
      }
      now = *(System_Func_DateTimeOffset__o **)((long)pIVar1->static_fields + 8);
      if (now == (System_Func_DateTimeOffset__o *)0x0) {
        pIVar1 = method->klass->rgctx_data->
                 _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
        }
        if (*(int *)&(pIVar1->_2).field_0x1c == 0) {
          il2cpp_init_class();
        }
        pIVar1 = method->klass->rgctx_data->
                 _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          il2cpp_glue_022c28b0(pIVar1);
        }
        now = (System_Func_DateTimeOffset__o *)il2cpp_runtime_glue(TypeInfo_Func_DateTimeOffset);
        System_Func<DateTimeOffset>___ctor();
        pAVar3 = method->klass->rgctx_data;
        pIVar1 = pAVar3->_5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar1);
          pAVar3 = method->klass->rgctx_data;
        }
        *(System_Func_DateTimeOffset__o **)((long)pIVar1->static_fields + 8) = now;
        pIVar1 = pAVar3->_5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar1);
        }
        il2cpp_runtime_glue((long)pIVar1->static_fields + 8,now);
      }
    }
    (__this->fields)._now = now;
    il2cpp_runtime_glue(&(__this->fields)._now,now);
    if (policy == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) {
      if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
        il2cpp_init_class();
      }
      policy = (ApplicationManagers_Api_AottgQueryPolicy_o *)**(undefined8 **)(TypeInfo_AottgQueryPolicy + 0xb8);
    }
    (__this->fields)._policy = policy;
    il2cpp_runtime_glue(&(__this->fields)._policy,policy);
    return;
  }
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentNullException);
  __this_01 = (System_ArgumentNullException_o *)il2cpp_runtime_glue(uVar2);
  paramName = (System_String_o *)il2cpp_init_method_metadata(&"fetch");
  System_ArgumentNullException___ctor(__this_01,paramName,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,method);
}


// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, System_Action_TKey__Action_AottgQueryFetchResult_TValue____o* fetch, System_Func_DateTimeOffset__o* now, ApplicationManagers_Api_AottgQueryPolicy_o* policy, const MethodInfo_32B39B0* method);
// 0x33b39b0

void ApplicationManagers_Api_AottgQueryCache<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>___ctor
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
               System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch,
               System_Func_DateTimeOffset__o *now,ApplicationManagers_Api_AottgQueryPolicy_o *policy
               ,MethodInfo_32B39B0 *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *pSVar2;
  undefined8 uVar3;
  System_ArgumentNullException_o *__this_00;
  System_String_o *paramName;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *pAVar4;
  
  if (DAT_057003d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgQueryPolicy);
    il2cpp_init_method_metadata(&TypeInfo_Func_DateTimeOffset);
    DAT_057003d6 = '\x01';
  }
  pIVar1 = method->klass->rgctx_data->
           _0_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue__;
  if (((pIVar1->_2).field_0x6d & 1) == 0) {
    pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *)
           il2cpp_runtime_glue(pIVar1);
  (*method->klass->rgctx_data->
    _1_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue____ctor->
    methodPointer)(pSVar2);
  (__this->fields)._entries = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._entries);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (fetch != (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)0x0) {
    if (__this == (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields)._fetch = fetch;
    il2cpp_runtime_glue(&__this->fields,fetch);
    if (now == (System_Func_DateTimeOffset__o *)0x0) {
      pIVar1 = method->klass->rgctx_data->
               _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
      if (((pIVar1->_2).field_0x6d & 1) == 0) {
        pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
      }
      if (*(int *)&(pIVar1->_2).field_0x1c == 0) {
        il2cpp_init_class();
      }
      pIVar1 = method->klass->rgctx_data->
               _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
      if (((pIVar1->_2).field_0x6d & 1) == 0) {
        pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar1);
      }
      now = *(System_Func_DateTimeOffset__o **)((long)pIVar1->static_fields + 8);
      if (now == (System_Func_DateTimeOffset__o *)0x0) {
        pIVar1 = method->klass->rgctx_data->
                 _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
        }
        if (*(int *)&(pIVar1->_2).field_0x1c == 0) {
          il2cpp_init_class();
        }
        pIVar1 = method->klass->rgctx_data->
                 _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          il2cpp_glue_022c28b0(pIVar1);
        }
        now = (System_Func_DateTimeOffset__o *)il2cpp_runtime_glue(TypeInfo_Func_DateTimeOffset);
        System_Func<DateTimeOffset>___ctor();
        pAVar4 = method->klass->rgctx_data;
        pIVar1 = pAVar4->_5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar1);
          pAVar4 = method->klass->rgctx_data;
        }
        *(System_Func_DateTimeOffset__o **)((long)pIVar1->static_fields + 8) = now;
        pIVar1 = pAVar4->_5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar1);
        }
        il2cpp_runtime_glue((long)pIVar1->static_fields + 8,now);
      }
    }
    (__this->fields)._now = now;
    il2cpp_runtime_glue(&(__this->fields)._now,now);
    if (policy == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) {
      if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
        il2cpp_init_class();
      }
      policy = (ApplicationManagers_Api_AottgQueryPolicy_o *)**(undefined8 **)(TypeInfo_AottgQueryPolicy + 0xb8);
    }
    (__this->fields)._policy = policy;
    il2cpp_runtime_glue(&(__this->fields)._policy,policy);
    return;
  }
  uVar3 = il2cpp_init_method_metadata(&TypeInfo_ArgumentNullException);
  __this_00 = (System_ArgumentNullException_o *)il2cpp_runtime_glue(uVar3);
  paramName = (System_String_o *)il2cpp_init_method_metadata(&"fetch");
  System_ArgumentNullException___ctor(__this_00,paramName,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,method);
}


// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, System_Action_TKey__Action_AottgQueryFetchResult_TValue____o* fetch, System_Func_DateTimeOffset__o* now, ApplicationManagers_Api_AottgQueryPolicy_o* policy, const MethodInfo_32B5090* method);
// 0x33b5090

void ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>___ctor
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
               System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch,
               System_Func_DateTimeOffset__o *now,ApplicationManagers_Api_AottgQueryPolicy_o *policy
               ,MethodInfo_32B5090 *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *__this_00;
  undefined8 uVar2;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *pAVar3;
  
  if (DAT_057003d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgQueryPolicy);
    il2cpp_init_method_metadata(&TypeInfo_Func_DateTimeOffset);
    DAT_057003d9 = '\x01';
  }
  pIVar1 = method->klass->rgctx_data->
           _0_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue__;
  if (((pIVar1->_2).field_0x6d & 1) == 0) {
    pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *)
              il2cpp_runtime_glue(pIVar1);
  System_Collections_Generic_Dictionary<AottgCreditsService_UnitKey__object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_30E1A90 *)
             method->klass->rgctx_data->
             _1_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue____ctor
            );
  (__this->fields)._entries = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._entries);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (fetch != (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)0x0) {
    if (__this == (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields)._fetch = fetch;
    il2cpp_runtime_glue(&__this->fields,fetch);
    if (now == (System_Func_DateTimeOffset__o *)0x0) {
      pIVar1 = method->klass->rgctx_data->
               _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
      if (((pIVar1->_2).field_0x6d & 1) == 0) {
        pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
      }
      if (*(int *)&(pIVar1->_2).field_0x1c == 0) {
        il2cpp_init_class();
      }
      pIVar1 = method->klass->rgctx_data->
               _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
      if (((pIVar1->_2).field_0x6d & 1) == 0) {
        pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar1);
      }
      now = *(System_Func_DateTimeOffset__o **)((long)pIVar1->static_fields + 8);
      if (now == (System_Func_DateTimeOffset__o *)0x0) {
        pIVar1 = method->klass->rgctx_data->
                 _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
        }
        if (*(int *)&(pIVar1->_2).field_0x1c == 0) {
          il2cpp_init_class();
        }
        pIVar1 = method->klass->rgctx_data->
                 _5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          il2cpp_glue_022c28b0(pIVar1);
        }
        now = (System_Func_DateTimeOffset__o *)il2cpp_runtime_glue(TypeInfo_Func_DateTimeOffset);
        System_Func<DateTimeOffset>___ctor();
        pAVar3 = method->klass->rgctx_data;
        pIVar1 = pAVar3->_5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar1);
          pAVar3 = method->klass->rgctx_data;
        }
        *(System_Func_DateTimeOffset__o **)((long)pIVar1->static_fields + 8) = now;
        pIVar1 = pAVar3->_5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
        if (((pIVar1->_2).field_0x6d & 1) == 0) {
          pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar1);
        }
        il2cpp_runtime_glue((long)pIVar1->static_fields + 8,now);
      }
    }
    (__this->fields)._now = now;
    il2cpp_runtime_glue(&(__this->fields)._now,now);
    if (policy == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) {
      if (*(int *)(TypeInfo_AottgQueryPolicy + 0xe4) == 0) {
        il2cpp_init_class();
      }
      policy = (ApplicationManagers_Api_AottgQueryPolicy_o *)**(undefined8 **)(TypeInfo_AottgQueryPolicy + 0xb8);
    }
    (__this->fields)._policy = policy;
    il2cpp_runtime_glue(&(__this->fields)._policy,policy);
    return;
  }
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentNullException);
  __this_01 = (System_ArgumentNullException_o *)il2cpp_runtime_glue(uVar2);
  paramName = (System_String_o *)il2cpp_init_method_metadata(&"fetch");
  System_ArgumentNullException___ctor(__this_01,paramName,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,method);
}


// ApplicationManagers.Api.AottgQueryCache<object, object>$$HasEntry
// il2cpp: bool ApplicationManagers_Api_AottgQueryCache_object__object___HasEntry (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Il2CppObject* key, const MethodInfo_32B3010* method);
// 0x33b3010

bool_conflict
ApplicationManagers_Api_AottgQueryCache<object__object>__HasEntry
          (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,Il2CppObject *key,
          MethodInfo_32B3010 *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this_00,key,
                       (MethodInfo_308CA70 *)
                       method->klass->rgctx_data->
                       _8_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___ContainsKey
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$HasEntry
// il2cpp: bool ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___HasEntry (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, const MethodInfo_32B3C60* method);
// 0x33b3c60

/* WARNING: Type propagation algorithm not settling */

bool_conflict
ApplicationManagers_Api_AottgQueryCache<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__HasEntry
          (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
          Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,MethodInfo_32B3C60 *method)

{
  long lVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *pSVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong __n;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_40 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  undefined1 local_21;
  
  local_30 = key.klass;
  lVar1 = *(long *)((long)key.monitor + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x38);
  __n = (ulong)*(uint *)(lVar2 + 0xfc);
  lVar6 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_40 + lVar6 + 8U);
  pSVar3 = (__this->fields)._entries;
  __src = local_30;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffd0;
  }
  *(undefined8 *)((long)apUStack_40 + lVar6) = 0x33b3caf;
  memcpy(__dest,__src,__n);
  if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o
                 *)0x0) {
    lVar1 = *(long *)(lVar1 + 0xc0);
    puVar4 = *(undefined8 **)(lVar1 + 0x40);
    uVar7 = *puVar4;
    if (-1 < *(int *)(*(long *)(lVar1 + 0x38) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar5 = (code *)puVar4[2];
    apUStack_40[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
    *(undefined8 *)((long)apUStack_40 + lVar6) = 0x33b3ce1;
    uVar7 = (*pcVar5)(uVar7,puVar4,pSVar3,apUStack_40 + 1,&stack0xffffffffffffffdf);
    return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),local_21);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)apUStack_40 + lVar6) = &UNK_033b3cf4;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$HasEntry
// il2cpp: bool ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___HasEntry (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key, const MethodInfo_32B5340* method);
// 0x33b5340

bool_conflict
ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__HasEntry
          (long __this,undefined1 param_2,long param_3)

{
  bool_conflict bVar1;
  
  if (*(long *)(__this + 0x28) != 0) {
    bVar1 = System_Collections_Generic_Dictionary<AottgCreditsService_UnitKey__object>__ContainsKey
                      (*(long *)(__this + 0x28),param_2,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x40));
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<object, object>$$IsInFlight
// il2cpp: bool ApplicationManagers_Api_AottgQueryCache_object__object___IsInFlight (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Il2CppObject* key, const MethodInfo_32B3040* method);
// 0x33b3040

bool_conflict
ApplicationManagers_Api_AottgQueryCache<object__object>__IsInFlight
          (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,Il2CppObject *key,
          MethodInfo_32B3040 *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *pIStack_8;
  
  pIStack_8 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,key,&pIStack_8,
                       (MethodInfo_308E3E0 *)
                       method->klass->rgctx_data->
                       _9_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___TryGetValue
                      );
    if ((char)bVar1 == '\0') {
      return 0;
    }
    if (pIStack_8 != (Il2CppObject *)0x0) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)pIStack_8 >> 8),
                      *(char *)((long)&pIStack_8[3].monitor + 2) != '\0');
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$IsInFlight
// il2cpp: bool ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___IsInFlight (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, const MethodInfo_32B3D00* method);
// 0x33b3d00

/* WARNING: Type propagation algorithm not settling */

bool_conflict
ApplicationManagers_Api_AottgQueryCache<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__IsInFlight
          (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
          Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,MethodInfo_32B3D00 *method)

{
  long lVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *pSVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  void *pvVar8;
  bool_conflict bVar9;
  char *pcVar10;
  ulong __n;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_60 [4];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_40;
  void *local_38;
  char local_29;
  
  local_40 = key.klass;
  lVar1 = *(long *)((long)key.monitor + 0x20);
  lVar2 = *(long *)(lVar1 + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar2 + 0x38) + 0xfc);
  lVar7 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_60 + lVar7 + 8U);
  local_38 = (void *)0x0;
  pSVar3 = (__this->fields)._entries;
  __src = local_40;
  if (-1 < *(int *)(*(long *)(lVar2 + 0x38) + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffc0;
  }
  *(undefined8 *)((long)apUStack_60 + lVar7) = 0x33b3d61;
  memcpy(__dest,__src,__n);
  if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o
                 *)0x0) {
    lVar1 = *(long *)(lVar1 + 0xc0);
    puVar4 = *(undefined8 **)(lVar1 + 0x48);
    uVar5 = *puVar4;
    if (-1 < *(int *)(*(long *)(lVar1 + 0x38) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    apUStack_60[2] =
         (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffc8;
    pcVar6 = (code *)puVar4[2];
    apUStack_60[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
    *(undefined8 *)((long)apUStack_60 + lVar7) = 0x33b3d9c;
    (*pcVar6)(uVar5,puVar4,pSVar3,apUStack_60 + 1,&stack0xffffffffffffffd7);
    pvVar8 = local_38;
    if (local_29 == '\0') {
      bVar9 = 0;
    }
    else {
      lVar1 = *(long *)(*(long *)(*(long *)(*(long *)((long)key.monitor + 0x20) + 0xc0) + 0x58) +
                       0x80);
      *(undefined8 *)((long)apUStack_60 + lVar7) = 0x33b3dc6;
      pcVar10 = (char *)il2cpp_glue_022fa440(pvVar8,lVar1 + 0xc0);
      bVar9 = (bool_conflict)CONCAT71((int7)((ulong)pcVar10 >> 8),*pcVar10 != '\0');
    }
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)apUStack_60 + lVar7) = &UNK_033b3de2;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$IsInFlight
// il2cpp: bool ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___IsInFlight (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key, const MethodInfo_32B5370* method);
// 0x33b5370

bool_conflict
ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__IsInFlight
          (long __this,undefined1 param_2,long param_3)

{
  bool_conflict bVar1;
  long lStack_8;
  
  lStack_8 = 0;
  if (*(long *)(__this + 0x28) != 0) {
    bVar1 = System_Collections_Generic_Dictionary<AottgCreditsService_UnitKey__object>__TryGetValue
                      (*(long *)(__this + 0x28),param_2,&lStack_8,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48));
    if ((char)bVar1 == '\0') {
      return 0;
    }
    if (lStack_8 != 0) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)lStack_8 >> 8),*(char *)(lStack_8 + 0x3a) != '\0');
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<object, object>$$Clear
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_object__object___Clear (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, const MethodInfo_32B3090* method);
// 0x33b3090

void ApplicationManagers_Api_AottgQueryCache<object__object>__Clear
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
               MethodInfo_32B3090 *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear
              (__this_00,
               (MethodInfo_308CA10 *)
               method->klass->rgctx_data->
               _12_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___Clear
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Clear
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, const MethodInfo_32B3DF0* method);
// 0x33b3df0

void ApplicationManagers_Api_AottgQueryCache<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__Clear
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
               MethodInfo_32B3DF0 *method)

{
  if ((__this->fields)._entries !=
      (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *)0x0) {
    (*method->klass->rgctx_data->
      _12_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___Clear->
      methodPointer)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$Clear
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Clear (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, const MethodInfo_32B53C0* method);
// 0x33b53c0

void ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__Clear
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
               MethodInfo_32B53C0 *method)

{
  System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *__this_00;
  
  __this_00 = (__this->fields)._entries;
  if (__this_00 !=
      (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *)0x0) {
    System_Collections_Generic_Dictionary<AottgCreditsService_UnitKey__object>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_30E28C0 *)
               method->klass->rgctx_data->
               _12_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___Clear
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<object, object>$$Clear
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_object__object___Clear (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Il2CppObject* key, const MethodInfo_32B30C0* method);
// 0x33b30c0

void ApplicationManagers_Api_AottgQueryCache<object__object>__Clear
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,Il2CppObject *key,
               MethodInfo_32B30C0 *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Remove
              (__this_00,key,
               (MethodInfo_308E080 *)
               method->klass->rgctx_data->
               _13_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___Remove
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Clear
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, const MethodInfo_32B3E20* method);
// 0x33b3e20

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_Api_AottgQueryCache<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__Clear
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,MethodInfo_32B3E20 *method
               )

{
  long lVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *pSVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong __n;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_40 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  
  local_30 = key.klass;
  lVar1 = *(long *)((long)key.monitor + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x38);
  __n = (ulong)*(uint *)(lVar2 + 0xfc);
  lVar7 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_40 + lVar7 + 8U);
  pSVar3 = (__this->fields)._entries;
  __src = local_30;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffd0;
  }
  *(undefined8 *)((long)apUStack_40 + lVar7) = 0x33b3e6f;
  memcpy(__dest,__src,__n);
  if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o
                 *)0x0) {
    lVar1 = *(long *)(lVar1 + 0xc0);
    puVar4 = *(undefined8 **)(lVar1 + 0x68);
    uVar5 = *puVar4;
    if (-1 < *(int *)(*(long *)(lVar1 + 0x38) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar6 = (code *)puVar4[2];
    apUStack_40[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
    *(undefined8 *)((long)apUStack_40 + lVar7) = 0x33b3ea1;
    (*pcVar6)(uVar5,puVar4,pSVar3,apUStack_40 + 1,&stack0xffffffffffffffdf);
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)apUStack_40 + lVar7) = &UNK_033b3eb1;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$Clear
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Clear (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key, const MethodInfo_32B53F0* method);
// 0x33b53f0

void ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__Clear
               (long __this,undefined1 param_2,long param_3)

{
  if (*(long *)(__this + 0x28) != 0) {
    System_Collections_Generic_Dictionary<AottgCreditsService_UnitKey__object>__Remove
              (*(long *)(__this + 0x28),param_2,
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<object, object>$$Get
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_object__object___Get (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Il2CppObject* key, System_Action_AottgQueryResult_TValue___o* onResult, bool forceRefresh, const MethodInfo_32B30F0* method);
// 0x33b30f0

void ApplicationManagers_Api_AottgQueryCache<object__object>__Get
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,Il2CppObject *key,
               System_Action_AottgQueryResult_TValue___o *onResult,bool_conflict forceRefresh,
               MethodInfo_32B30F0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Func_DateTimeOffset__o *pSVar4;
  System_Collections_Generic_List_Action_AottgQueryResult_TValue____o *__this_00;
  MethodInfo *pMVar5;
  System_Action_AottgQueryResult_TValue___array *pSVar6;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar7;
  Il2CppObject *pIVar8;
  bool_conflict bVar9;
  Il2CppClass *pIVar10;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *__this_01;
  ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *__this_02;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar11;
  undefined8 uVar12;
  Il2CppObject **ppIVar13;
  undefined1 auVar14 [16];
  System_DateTimeOffset_o now;
  ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *local_40;
  bool_conflict local_34;
  
  local_40 = (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0;
  pIVar10 = method->klass->rgctx_data->
            _14_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue_;
  local_34 = forceRefresh;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_01 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)
              il2cpp_runtime_glue(pIVar10);
  ApplicationManagers_Api_AottgQueryCache_<>c__DisplayClass9_0<object__object>___ctor
            (__this_01,
             (MethodInfo_2776A20 *)
             method->klass->rgctx_data->
             _15_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue___ctor);
  if (__this_01 !=
      (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)0x0) {
    (__this_01->fields).__4__this = __this;
    il2cpp_runtime_glue(&__this_01->fields,__this);
    ppIVar13 = &(__this_01->fields).key;
    (__this_01->fields).key = key;
    il2cpp_runtime_glue(ppIVar13,key);
    if (onResult == (System_Action_AottgQueryResult_TValue___o *)0x0) {
      return;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar9 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (pSVar3,*ppIVar13,(Il2CppObject **)&local_40,
                         (MethodInfo_308E3E0 *)
                         method->klass->rgctx_data->
                         _9_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___TryGetValue
                        );
      if ((char)bVar9 == '\0') {
        pIVar10 = method->klass->rgctx_data->
                  _11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_;
        if (((pIVar10->_2).field_0x6d & 1) == 0) {
          pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0();
        }
        __this_02 = (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)
                    il2cpp_runtime_glue(pIVar10);
        ApplicationManagers_Api_AottgQueryCache_Entry<object__object>___ctor
                  (__this_02,
                   (MethodInfo_316EB70 *)
                   method->klass->rgctx_data->
                   _17_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue___ctor);
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._entries;
        local_40 = __this_02;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_033b33f2;
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar3,*ppIVar13,(Il2CppObject *)__this_02,
                   (MethodInfo_308C840 *)
                   method->klass->rgctx_data->
                   _18_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___set_Item
                  );
      }
      pSVar4 = (__this->fields)._now;
      if (pSVar4 != (System_Func_DateTimeOffset__o *)0x0) {
        auVar14 = (*(code *)(pSVar4->fields).invoke_impl)
                            ((pSVar4->fields).method_code,(pSVar4->fields).method);
        if (((char)local_34 == '\0') &&
           (now.fields._8_8_ = auVar14._8_8_ & 0xffffffff,
           now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar14._0_8_,
           bVar9 = ApplicationManagers_Api_AottgQueryCache<object__object>__TryEmitFresh
                             (__this,local_40,now,onResult,
                              (MethodInfo_32B3400 *)
                              method->klass->rgctx_data->
                              _19_ApplicationManagers_Api_AottgQueryCache_TKey__TValue__TryEmitFresh
                             ), (char)bVar9 != '\0')) {
          return;
        }
        if (local_40 != (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0) {
          if ((char)(local_40->fields).HasSuccess == '\0') {
            pAVar11 = ApplicationManagers_Api_AottgQueryResult<object>__LoadingNoCache
                                ((MethodInfo_32B65A0 *)
                                 method->klass->rgctx_data->
                                 _25_ApplicationManagers_Api_AottgQueryResult_TValue__LoadingNoCache
                                );
          }
          else {
            pAVar11 = ApplicationManagers_Api_AottgQueryResult<object>__ReadyStaleRefreshing
                                ((local_40->fields).Value,
                                 (MethodInfo_32B6700 *)
                                 method->klass->rgctx_data->
                                 _21_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyStaleRefreshing
                                );
          }
          (*(code *)(onResult->fields).invoke_impl)
                    ((onResult->fields).method_code,pAVar11,(onResult->fields).method);
          if ((local_40 != (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0) &&
             (__this_00 = (local_40->fields).Subscribers,
             __this_00 != (System_Collections_Generic_List_Action_AottgQueryResult_TValue____o *)0x0
             )) {
            pMVar5 = method->klass->rgctx_data->
                     _27_System_Collections_Generic_List_Action_AottgQueryResult_TValue____Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_00->fields)._items;
            if (pSVar6 != (System_Action_AottgQueryResult_TValue___array *)0x0) {
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pSVar6->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pSVar6->m_Items[(int)uVar2] = onResult;
                il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2,onResult);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)onResult,
                           (MethodInfo_35A7350 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              if (local_40 != (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0)
              {
                if (*(char *)((long)&(local_40->fields).HasSuccess + 2) == '\0') {
                  *(undefined1 *)((long)&(local_40->fields).HasSuccess + 2) = 1;
                  pSVar7 = (__this->fields)._fetch;
                  pIVar8 = *ppIVar13;
                  pIVar10 = method->klass->rgctx_data->
                            _29_System_Action_AottgQueryFetchResult_TValue__;
                  if (((pIVar10->_2).field_0x6d & 1) == 0) {
                    pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0();
                  }
                  uVar12 = il2cpp_runtime_glue(pIVar10);
                  System_Action<object>___ctor();
                  if (pSVar7 == (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)0x0)
                  goto LAB_033b33f2;
                  (*(code *)(pSVar7->fields).invoke_impl)
                            ((pSVar7->fields).method_code,pIVar8,uVar12,(pSVar7->fields).method);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_033b33f2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Get
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Get (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, System_Action_AottgQueryResult_TValue___o* onResult, bool forceRefresh, const MethodInfo_32B3EC0* method);
// 0x33b3ec0

void ApplicationManagers_Api_AottgQueryCache<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__Get
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
               System_Action_AottgQueryResult_TValue___o *onResult,bool_conflict forceRefresh,
               MethodInfo_32B3EC0 *method)

{
  code *pcVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *pSVar3;
  System_Func_DateTimeOffset__o *pSVar4;
  intptr_t iVar5;
  intptr_t iVar6;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar10;
  undefined1 ***pppuVar11;
  char cVar12;
  long lVar13;
  undefined8 *puVar14;
  void *pvVar15;
  undefined1 ****ppppuVar16;
  char *pcVar17;
  Il2CppClass *pIVar18;
  long *plVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar22;
  Il2CppClass *pIVar23;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 uVar24;
  undefined4 in_register_00000084;
  long *plVar25;
  Il2CppClass *__dest;
  undefined1 auVar26 [16];
  MethodInfo *pMStack_a0;
  undefined1 auStack_98 [16];
  Il2CppClass *local_88;
  Il2CppClass *local_80;
  ulong local_78;
  ulong local_70;
  undefined4 local_64;
  long local_60;
  Il2CppClass *local_58;
  undefined1 ***local_50;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *local_48;
  Il2CppClass *local_40;
  undefined1 ***local_38;
  
  local_88 = key.monitor;
  pUVar22 = key.klass;
  local_64 = SUB84(onResult,0);
  plVar25 = (long *)(CONCAT44(in_register_00000084,forceRefresh) + 0x20);
  lVar13 = *(long *)(*(long *)(CONCAT44(in_register_00000084,forceRefresh) + 0x20) + 0xc0);
  local_70 = (ulong)*(uint *)(*(long *)(lVar13 + 0x38) + 0xfc);
  local_78 = (ulong)*(uint *)(*(long *)(lVar13 + 0xa0) + 0xfc);
  __dest = (Il2CppClass *)(auStack_98 + -(local_70 + 0xf & 0xfffffffffffffff0));
  pIVar23 = (Il2CppClass *)((long)__dest - (local_78 + 0xf & 0xfffffffffffffff0));
  local_38 = (undefined1 ***)0x0;
  lVar13 = *(long *)(lVar13 + 0x70);
  auStack_98._8_8_ = pUVar22;
  local_80 = pIVar23;
  local_48 = __this;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b3f5a;
    lVar13 = il2cpp_glue_022c28b0();
  }
  pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b3f62;
  lVar13 = il2cpp_runtime_glue(lVar13);
  pcVar1 = (code *)**(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0x78);
  pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b3f79;
  (*pcVar1)(lVar13);
  if (lVar13 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x70) + 0x80);
    pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b3fa5;
    il2cpp_glue_02274840(lVar2,8);
    pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b3fb0;
    puVar14 = (undefined8 *)il2cpp_glue_022fa440(lVar13,lVar2);
    *puVar14 = local_48;
    uVar24 = *(undefined8 *)(lVar2 + 8);
    pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b3fc5;
    il2cpp_glue_02274770(uVar24,puVar14,0);
    uVar9 = local_70;
    lVar2 = *plVar25;
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(auStack_98 + 8);
    if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x38) + 0x28) < 0) {
      __src = pUVar22;
    }
    pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b3ff2;
    memcpy(__dest,__src,uVar9);
    lVar2 = *(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x70) + 0x80);
    local_60 = lVar13;
    pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b401a;
    il2cpp_glue_02274860(lVar13,lVar2 + 0x20,__dest,uVar9 & 0xffffffff);
    lVar13 = local_60;
    pIVar8 = local_88;
    if (local_88 == (Il2CppClass *)0x0) {
      return;
    }
    pSVar3 = (local_48->fields)._entries;
    lVar2 = *(long *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x70) + 0x80);
    pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b4052;
    pvVar15 = (void *)il2cpp_glue_022fa440(lVar13,lVar2 + 0x20);
    pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b4060;
    memcpy(__dest,pvVar15,uVar9);
    if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o
                   *)0x0) {
      puVar14 = *(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0x48);
      uVar24 = *puVar14;
      local_58 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x38) + 0x28)) {
        local_58 = (__dest->_1).image;
      }
      local_50 = (undefined1 ***)&local_38;
      pcVar1 = (code *)puVar14[2];
      pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b40a5;
      (*pcVar1)(uVar24,puVar14,pSVar3,&local_58,&local_40);
      if ((char)local_40 == '\0') {
        lVar13 = *(long *)(*(long *)(*plVar25 + 0xc0) + 0x58);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b40cc;
          lVar13 = il2cpp_glue_022c28b0();
        }
        pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b40d4;
        ppppuVar16 = (undefined1 ****)il2cpp_runtime_glue(lVar13);
        pcVar1 = (code *)**(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0x88);
        pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b40ee;
        (*pcVar1)(ppppuVar16);
        lVar2 = local_60;
        pSVar3 = (local_48->fields)._entries;
        lVar13 = *(long *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x70) + 0x80);
        local_38 = (undefined1 ***)ppppuVar16;
        pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b411d;
        pvVar15 = (void *)il2cpp_glue_022fa440(lVar2,lVar13 + 0x20);
        pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b412b;
        memcpy(__dest,pvVar15,uVar9);
        if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o
                       *)0x0) goto LAB_033b445f;
        puVar14 = *(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0x90);
        uVar24 = *puVar14;
        local_58 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x38) + 0x28)) {
          local_58 = (__dest->_1).image;
        }
        local_50 = local_38;
        pcVar1 = (code *)puVar14[2];
        pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b416f;
        (*pcVar1)(uVar24,puVar14,pSVar3,&local_58);
      }
      pSVar4 = (local_48->fields)._now;
      if (pSVar4 != (System_Func_DateTimeOffset__o *)0x0) {
        iVar5 = (pSVar4->fields).method;
        iVar6 = (pSVar4->fields).method_code;
        pcVar1 = (code *)(pSVar4->fields).invoke_impl;
        pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b418b;
        auVar26 = (*pcVar1)(iVar6,iVar5);
        pppuVar11 = local_38;
        pAVar10 = local_48;
        if ((char)local_64 == '\0') {
          pcVar1 = (code *)**(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0x98);
          pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b41b6;
          cVar12 = (*pcVar1)(pAVar10,pppuVar11,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,pIVar8);
          if (cVar12 != '\0') {
            return;
          }
        }
        pppuVar11 = local_38;
        lVar13 = *(long *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x58) + 0x80);
        pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b41e1;
        pcVar17 = (char *)il2cpp_glue_022fa440(pppuVar11,lVar13 + 0x80);
        pppuVar11 = local_38;
        if (*pcVar17 == '\0') {
          pcVar1 = (code *)**(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 200);
          pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b4292;
          pIVar18 = (Il2CppClass *)(*pcVar1)();
          puVar14 = *(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0xc0);
          uVar24 = *puVar14;
        }
        else {
          lVar13 = *(long *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x58) + 0x80);
          pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b420d;
          pvVar15 = (void *)il2cpp_glue_022fa440(pppuVar11,lVar13 + 0x20);
          uVar9 = local_78;
          pIVar18 = local_80;
          pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b4220;
          memcpy(pIVar18,pvVar15,uVar9);
          puVar14 = *(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0xa8);
          uVar24 = *puVar14;
          if (-1 < *(int *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0xa0) + 0x28)) {
            pIVar18 = (pIVar18->_1).image;
          }
          pcVar1 = (code *)puVar14[2];
          local_40 = pIVar18;
          pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b4259;
          (*pcVar1)(uVar24,puVar14,0,&local_40,&local_58);
          puVar14 = *(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0xc0);
          uVar24 = *puVar14;
          pIVar18 = local_58;
        }
        pcVar1 = (code *)puVar14[2];
        local_40 = pIVar18;
        pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b42b8;
        (*pcVar1)(uVar24,puVar14,pIVar8,&local_40,pIVar18);
        pppuVar11 = local_38;
        uVar24 = *(undefined8 *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x58) + 0x80);
        pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b42d7;
        plVar19 = (long *)il2cpp_glue_022fa440(pppuVar11,uVar24);
        lVar13 = *plVar19;
        if (lVar13 != 0) {
          puVar14 = *(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0xd8);
          uVar24 = *puVar14;
          local_40 = pIVar8;
          pcVar1 = (code *)puVar14[2];
          pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b4306;
          (*pcVar1)(uVar24,puVar14,lVar13,&local_40,pIVar8);
          pppuVar11 = local_38;
          lVar13 = *(long *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x58) + 0x80);
          pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b432a;
          pcVar17 = (char *)il2cpp_glue_022fa440(pppuVar11,lVar13 + 0xc0);
          pppuVar11 = local_38;
          if (*pcVar17 != '\0') {
            return;
          }
          if ((undefined1 ****)local_38 != (undefined1 ****)0x0) {
            lVar2 = *(long *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x58) + 0x80);
            lVar13 = lVar2 + 0xc0;
            pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b436b;
            il2cpp_glue_02274840(lVar13,1);
            pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b4376;
            puVar20 = (undefined1 *)il2cpp_glue_022fa440(pppuVar11,lVar13);
            *puVar20 = 1;
            uVar24 = *(undefined8 *)(lVar2 + 200);
            pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b438b;
            il2cpp_glue_02274770(uVar24,puVar20,0);
            lVar2 = local_60;
            pSVar7 = (local_48->fields)._fetch;
            lVar13 = *(long *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x70) + 0x80);
            pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b43b9;
            pvVar15 = (void *)il2cpp_glue_022fa440(lVar2,lVar13 + 0x20);
            uVar9 = local_70;
            pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b43c8;
            memcpy(__dest,pvVar15,uVar9);
            lVar13 = *(long *)(*(long *)(*plVar25 + 0xc0) + 0xe8);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b43e8;
              lVar13 = il2cpp_glue_022c28b0();
            }
            pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b43f0;
            uVar21 = il2cpp_runtime_glue(lVar13);
            uVar24 = *(undefined8 *)(*(long *)(*plVar25 + 0xc0) + 0xe0);
            pcVar1 = (code *)**(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0xf0);
            pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b4414;
            (*pcVar1)(uVar21,lVar2,uVar24);
            if (pSVar7 != (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)0x0) {
              puVar14 = *(undefined8 **)(*(long *)(*plVar25 + 0xc0) + 0xf8);
              uVar24 = *puVar14;
              if (-1 < *(int *)(*(long *)(*(long *)(*plVar25 + 0xc0) + 0x38) + 0x28)) {
                __dest = (__dest->_1).image;
              }
              pcVar1 = (code *)puVar14[2];
              local_58 = __dest;
              local_50 = (undefined1 ***)uVar21;
              pIVar23[-1].vtable[0xfe].method = (MethodInfo *)0x33b4450;
              (*pcVar1)(uVar24,puVar14,pSVar7,&local_58,uVar21);
              return;
            }
          }
        }
      }
    }
  }
LAB_033b445f:
                    /* WARNING: Subroutine does not return */
  pIVar23[-1].vtable[0xfe].method = (MethodInfo *)&UNK_033b4464;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$Get
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Get (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key, System_Action_AottgQueryResult_TValue___o* onResult, bool forceRefresh, const MethodInfo_32B5420* method);
// 0x33b5420

void ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__Get
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,undefined1 param_2,
               System_Action_AottgQueryResult_TValue___o *param_3,char param_4,long param_5)

{
  int32_t *piVar1;
  undefined1 uVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *pSVar4;
  System_Func_DateTimeOffset__o *pSVar5;
  System_Collections_Generic_List_Action_AottgQueryResult_TValue____o *__this_00;
  System_Action_AottgQueryResult_TValue___array *pSVar6;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar7;
  bool_conflict bVar8;
  long lVar9;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *__this_01;
  ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *__this_02;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  System_DateTimeOffset_o now;
  ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *local_38;
  
  local_38 = (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0;
  lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = il2cpp_glue_022c28b0();
  }
  __this_01 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)
              il2cpp_runtime_glue(lVar9);
  ApplicationManagers_Api_AottgQueryCache_<>c__DisplayClass9_0<AottgCreditsService_UnitKey__object>___ctor
            (__this_01,*(MethodInfo_2776B60 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x78))
  ;
  if (__this_01 !=
      (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)0x0) {
    (__this_01->fields).__4__this = __this;
    il2cpp_runtime_glue(&__this_01->fields,__this);
    *(undefined1 *)&(__this_01->fields).key = param_2;
    if (param_3 == (System_Action_AottgQueryResult_TValue___o *)0x0) {
      return;
    }
    pSVar4 = (__this->fields)._entries;
    if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o
                   *)0x0) {
      bVar8 = System_Collections_Generic_Dictionary<AottgCreditsService_UnitKey__object>__TryGetValue
                        (pSVar4,param_2,&local_38,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48));
      if ((char)bVar8 == '\0') {
        lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = il2cpp_glue_022c28b0();
        }
        __this_02 = (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)
                    il2cpp_runtime_glue(lVar9);
        ApplicationManagers_Api_AottgQueryCache_Entry<AottgCreditsService_UnitKey__object>___ctor
                  (__this_02,
                   *(MethodInfo_316F030 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88));
        pSVar4 = (__this->fields)._entries;
        local_38 = __this_02;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o
                       *)0x0) goto LAB_033b5703;
        System_Collections_Generic_Dictionary<AottgCreditsService_UnitKey__object>__set_Item
                  (pSVar4,*(undefined4 *)&(__this_01->fields).key,__this_02,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x90));
      }
      pSVar5 = (__this->fields)._now;
      if (pSVar5 != (System_Func_DateTimeOffset__o *)0x0) {
        auVar12 = (*(code *)(pSVar5->fields).invoke_impl)
                            ((pSVar5->fields).method_code,(pSVar5->fields).method);
        if ((param_4 == '\0') &&
           (now.fields._8_8_ = auVar12._8_8_ & 0xffffffff,
           now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar12._0_8_,
           bVar8 = ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__TryEmitFresh
                             (__this,local_38,now,param_3,
                              *(MethodInfo_32B5710 **)
                               (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x98)),
           (char)bVar8 != '\0')) {
          return;
        }
        if (local_38 != (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0) {
          if ((char)(local_38->fields).HasSuccess == '\0') {
            pAVar10 = ApplicationManagers_Api_AottgQueryResult<object>__LoadingNoCache
                                (*(MethodInfo_32B65A0 **)
                                  (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 200));
          }
          else {
            pAVar10 = ApplicationManagers_Api_AottgQueryResult<object>__ReadyStaleRefreshing
                                ((local_38->fields).Value,
                                 *(MethodInfo_32B6700 **)
                                  (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8));
          }
          (*(code *)(param_3->fields).invoke_impl)
                    ((param_3->fields).method_code,pAVar10,(param_3->fields).method);
          if ((local_38 != (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0) &&
             (__this_00 = (local_38->fields).Subscribers,
             __this_00 != (System_Collections_Generic_List_Action_AottgQueryResult_TValue____o *)0x0
             )) {
            lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xd8);
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_00->fields)._items;
            if (pSVar6 != (System_Action_AottgQueryResult_TValue___array *)0x0) {
              uVar3 = (__this_00->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (__this_00->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = param_3;
                il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,param_3);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)param_3,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              if (local_38 != (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0)
              {
                if (*(char *)((long)&(local_38->fields).HasSuccess + 2) == '\0') {
                  *(undefined1 *)((long)&(local_38->fields).HasSuccess + 2) = 1;
                  pSVar7 = (__this->fields)._fetch;
                  uVar2 = *(undefined1 *)&(__this_01->fields).key;
                  lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xe8);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = il2cpp_glue_022c28b0();
                  }
                  uVar11 = il2cpp_runtime_glue(lVar9);
                  System_Action<object>___ctor();
                  if (pSVar7 == (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)0x0)
                  goto LAB_033b5703;
                  (*(code *)(pSVar7->fields).invoke_impl)
                            ((pSVar7->fields).method_code,uVar2,uVar11,(pSVar7->fields).method);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_033b5703:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<object, object>$$TryEmitFresh
// il2cpp: bool ApplicationManagers_Api_AottgQueryCache_object__object___TryEmitFresh (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o* entry, System_DateTimeOffset_o now, System_Action_AottgQueryResult_TValue___o* onResult, const MethodInfo_32B3400* method);
// 0x33b3400

bool_conflict
ApplicationManagers_Api_AottgQueryCache<object__object>__TryEmitFresh
          (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
          ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *entry,
          System_DateTimeOffset_o now,System_Action_AottgQueryResult_TValue___o *onResult,
          MethodInfo_32B3400 *method)

{
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar1;
  undefined1 auVar2 [12];
  undefined8 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  bool_conflict bVar7;
  System_TimeSpan_o SVar8;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar9;
  System_TimeSpan_o t2;
  System_TimeSpan_Fields t2_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_00;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  char local_58;
  undefined7 uStack_57;
  int64_t iStack_50;
  MethodInfo_32B3400 *local_40;
  System_Action_AottgQueryResult_TValue___o *local_38;
  MethodInfo_375F1D0 *method_00;
  
  local_40 = method;
  local_38 = onResult;
  if (DAT_057003d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_TimeSpan_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_057003d4 = '\x01';
  }
  local_58 = '\0';
  uStack_57 = 0;
  iStack_50 = 0;
  if (entry == (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0)
  goto LAB_033b3642;
  auVar2 = now.fields._0_12_;
  if ((char)(entry->fields).HasSuccess == '\0') {
LAB_033b3529:
    if (*(char *)((long)&(entry->fields).HasSuccess + 1) != '\0') {
      pAVar1 = (__this->fields)._policy;
      if (pAVar1 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b3642;
      local_58 = (char)(pAVar1->fields)._FailureTtl_k__BackingField.fields.hasValue;
      iStack_50 = (pAVar1->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks;
      if (local_58 != '\0') {
        uVar5 = (entry->fields).CachedAt.fields._dateTime;
        uVar6 = (entry->fields).CachedAt.fields._offsetMinutes;
        right_00.fields._offsetMinutes = uVar6;
        right_00.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)uVar5;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_init_class();
        }
        left_00.fields._12_4_ = 0;
        left_00.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)auVar2._0_8_;
        left_00.fields._offsetMinutes = auVar2._8_2_;
        left_00.fields._10_2_ = auVar2._10_2_;
        right_00.fields._10_6_ = 0;
        SVar8 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pAVar1 = (__this->fields)._policy;
        if (pAVar1 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b3642;
        local_58 = (char)(pAVar1->fields)._FailureTtl_k__BackingField.fields.hasValue;
        iStack_50 = (pAVar1->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks;
        __this_00.fields.value.fields._ticks =
             (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
        __this_00.fields._0_8_ = &local_58;
        t2 = System_Nullable<TimeSpan>__get_Value(__this_00,method_00);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          il2cpp_init_class();
        }
        t2_00._ticks = 0;
        bVar7 = System_TimeSpan__op_LessThan(SVar8,t2,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return 0;
        }
        pAVar9 = ApplicationManagers_Api_AottgQueryResult<object>__FailedNoCache
                           ((entry->fields).Error,1,
                            (MethodInfo_32B67D0 *)
                            local_40->klass->rgctx_data->
                            _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
        goto joined_r0x033b361a;
      }
    }
    bVar7 = 0;
  }
  else {
    uVar3 = (entry->fields).CachedAt.fields._dateTime;
    uVar4 = (entry->fields).CachedAt.fields._offsetMinutes;
    right.fields._offsetMinutes = uVar4;
    right.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar3;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_init_class();
    }
    left.fields._12_4_ = 0;
    left.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)auVar2._0_8_;
    left.fields._offsetMinutes = auVar2._8_2_;
    left.fields._10_2_ = auVar2._10_2_;
    right.fields._10_6_ = 0;
    SVar8 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
    pAVar1 = (__this->fields)._policy;
    if (pAVar1 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b3642;
    t2_00._ticks = (pAVar1->fields)._SuccessTtl_k__BackingField.fields._ticks;
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = System_TimeSpan__op_LessThan(SVar8,(System_TimeSpan_o)t2_00._ticks,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto LAB_033b3529;
    pAVar9 = ApplicationManagers_Api_AottgQueryResult<object>__ReadyFresh
                       ((entry->fields).Value,1,
                        (MethodInfo_32B6630 *)
                        local_40->klass->rgctx_data->
                        _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
joined_r0x033b361a:
    if (local_38 == (System_Action_AottgQueryResult_TValue___o *)0x0) {
LAB_033b3642:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(code *)(local_38->fields).invoke_impl)
              ((local_38->fields).method_code,pAVar9,(local_38->fields).method);
    bVar7 = (bool_conflict)CONCAT71((int7)((ulong)t2_00._ticks >> 8),1);
  }
  return bVar7;
}


// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$TryEmitFresh
// il2cpp: bool ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryEmitFresh (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o* entry, System_DateTimeOffset_o now, System_Action_AottgQueryResult_TValue___o* onResult, const MethodInfo_32B4470* method);
// 0x33b4470

bool_conflict
ApplicationManagers_Api_AottgQueryCache<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__TryEmitFresh
          (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
          ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *entry,
          System_DateTimeOffset_o now,System_Action_AottgQueryResult_TValue___o *onResult,
          MethodInfo_32B4470 *method)

{
  char cVar1;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs *pAVar2;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar3;
  InvokerMethod pIVar4;
  undefined8 uVar5;
  long lVar6;
  unkuint10 Var7;
  System_DateTime_Fields SVar8;
  undefined4 uVar9;
  bool_conflict bVar10;
  char *pcVar11;
  unkuint10 *pVar12;
  System_TimeSpan_o SVar13;
  void *pvVar14;
  System_TimeSpan_o SVar15;
  undefined8 *puVar16;
  MethodInfo_32B4470 *pMVar17;
  System_Action_AottgQueryResult_TValue___o *pSVar18;
  MethodInfo_32B4470 *pMVar19;
  MethodInfo *pMVar20;
  Il2CppMethodPointer pIVar21;
  ulong __n;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_00;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  MethodInfo_32B4470 *apMStack_90 [4];
  System_DateTime_Fields local_70;
  undefined8 local_68;
  int64_t iStack_60;
  undefined8 *local_58;
  undefined1 *local_50;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *local_48;
  System_Action_AottgQueryResult_TValue___o *local_40;
  undefined4 local_38;
  undefined1 local_31;
  MethodInfo_375F1D0 *method_00;
  
  local_70._dateData = (uint64_t)now.fields._dateTime.fields._dateData;
  local_38 = now.fields._8_4_;
  local_48 = __this;
  local_40 = onResult;
  if (DAT_057003d7 == '\0') {
    apMStack_90[0] = (MethodInfo_32B4470 *)0x33b44ab;
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    apMStack_90[0] = (MethodInfo_32B4470 *)0x33b44b7;
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    apMStack_90[0] = (MethodInfo_32B4470 *)0x33b44c3;
    il2cpp_init_method_metadata(&MethodInfo_TimeSpan_get_Value);
    apMStack_90[0] = (MethodInfo_32B4470 *)0x33b44cf;
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_057003d7 = '\x01';
  }
  pAVar2 = method->klass->rgctx_data;
  __n = (ulong)(pAVar2->_20_TValue->_2).actualSize;
  lVar6 = -(__n + 0xf & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)apMStack_90 + lVar6 + 8);
  local_68 = 0;
  iStack_60 = 0;
  pvVar14 = (pAVar2->_11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
  *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b451e;
  pcVar11 = (char *)il2cpp_glue_022fa440(entry,(long)pvVar14 + 0x80);
  if (*pcVar11 == '\0') {
LAB_033b4674:
    pvVar14 = (method->klass->rgctx_data->
               _11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
    *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b4697;
    pcVar11 = (char *)il2cpp_glue_022fa440(entry,(long)pvVar14 + 0xa0);
    if (*pcVar11 != '\0') {
      pAVar3 = (local_48->fields)._policy;
      if (pAVar3 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b4805;
      cVar1 = (char)(pAVar3->fields)._FailureTtl_k__BackingField.fields.hasValue;
      iStack_60 = (pAVar3->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks;
      local_68 = CONCAT71(local_68._1_7_,cVar1);
      if (cVar1 != '\0') {
        pvVar14 = (method->klass->rgctx_data->
                   _11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
        *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b46e9;
        pVar12 = (unkuint10 *)il2cpp_glue_022fa440(entry,(long)pvVar14 + 0x60);
        Var7 = *pVar12;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b4709;
          il2cpp_init_class();
        }
        uVar9 = local_38;
        SVar8._dateData = local_70._dateData;
        *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b4721;
        left_00.fields._8_4_ = uVar9;
        left_00.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)SVar8._dateData;
        left_00.fields._12_4_ = 0;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var7;
        SVar13 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pAVar3 = (local_48->fields)._policy;
        if (pAVar3 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) {
LAB_033b4805:
                    /* WARNING: Subroutine does not return */
          *(undefined **)((long)apMStack_90 + lVar6) = &UNK_033b480a;
          il2cpp_raise_exception();
        }
        iStack_60 = (pAVar3->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks;
        local_68 = CONCAT71(local_68._1_7_,
                            (char)(pAVar3->fields)._FailureTtl_k__BackingField.fields.hasValue);
        *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b4756;
        __this_00.fields.value.fields._ticks =
             (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
        __this_00.fields._0_8_ = &local_68;
        SVar15 = System_Nullable<TimeSpan>__get_Value(__this_00,method_00);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b4771;
          il2cpp_init_class();
        }
        pMVar19 = (MethodInfo_32B4470 *)0x0;
        *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b4780;
        bVar10 = System_TimeSpan__op_LessThan(SVar13,SVar15,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return 0;
        }
        pvVar14 = (method->klass->rgctx_data->
                   _11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
        *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b47a6;
        puVar16 = (undefined8 *)il2cpp_glue_022fa440(entry,(long)pvVar14 + 0x40);
        uVar5 = *puVar16;
        pIVar21 = method->klass->rgctx_data->
                  _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache->methodPointer;
        *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b47c2;
        pMVar17 = (MethodInfo_32B4470 *)(*pIVar21)(uVar5,1);
        if (local_40 == (System_Action_AottgQueryResult_TValue___o *)0x0) goto LAB_033b4805;
        pMVar20 = method->klass->rgctx_data->_24_System_Action_AottgQueryResult_TValue___Invoke;
        pIVar21 = pMVar20->methodPointer;
        pSVar18 = local_40;
        goto LAB_033b47eb;
      }
    }
    bVar10 = 0;
  }
  else {
    pvVar14 = (method->klass->rgctx_data->
               _11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
    apMStack_90[3] = method;
    *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b454d;
    pVar12 = (unkuint10 *)il2cpp_glue_022fa440(entry,(long)pvVar14 + 0x60);
    Var7 = *pVar12;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b456d;
      il2cpp_init_class();
    }
    uVar9 = local_38;
    SVar8._dateData = local_70._dateData;
    *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b4582;
    left.fields._8_4_ = uVar9;
    left.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)SVar8._dateData;
    left.fields._12_4_ = 0;
    right.fields._10_6_ = 0;
    right.fields._0_10_ = Var7;
    SVar13 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
    pAVar3 = (local_48->fields)._policy;
    if (pAVar3 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b4805;
    SVar15.fields._ticks =
         (System_TimeSpan_Fields)(pAVar3->fields)._SuccessTtl_k__BackingField.fields._ticks;
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b45b2;
      il2cpp_init_class();
    }
    *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b45bf;
    bVar10 = System_TimeSpan__op_LessThan(SVar13,SVar15,(MethodInfo *)0x0);
    pMVar19 = apMStack_90[3];
    method = apMStack_90[3];
    if ((char)bVar10 == '\0') goto LAB_033b4674;
    pvVar14 = (apMStack_90[3]->klass->rgctx_data->
               _11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_->_1).fields;
    *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b45ed;
    pvVar14 = (void *)il2cpp_glue_022fa440(entry,(long)pvVar14 + 0x20);
    *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b45fb;
    memcpy(puVar16,pvVar14,__n);
    pSVar18 = local_40;
    pAVar2 = pMVar19->klass->rgctx_data;
    pMVar20 = pAVar2->_32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh;
    pIVar21 = pMVar20->methodPointer;
    if (-1 < (int)(pAVar2->_20_TValue->_1).byval_arg.bits) {
      puVar16 = (undefined8 *)*puVar16;
    }
    local_31 = 1;
    local_50 = &local_31;
    pIVar4 = pMVar20->invoker_method;
    local_58 = puVar16;
    *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b4642;
    (*pIVar4)(pIVar21,pMVar20,(void *)0x0,&local_58,apMStack_90 + 2);
    if (pSVar18 == (System_Action_AottgQueryResult_TValue___o *)0x0) goto LAB_033b4805;
    pMVar20 = pMVar19->klass->rgctx_data->_24_System_Action_AottgQueryResult_TValue___Invoke;
    pIVar21 = pMVar20->methodPointer;
    pMVar17 = apMStack_90[2];
LAB_033b47eb:
    pIVar4 = pMVar20->invoker_method;
    local_58 = &pMVar17->methodPointer;
    *(undefined8 *)((long)apMStack_90 + lVar6) = 0x33b47ee;
    (*pIVar4)(pIVar21,pMVar20,pSVar18,&local_58,pMVar17);
    bVar10 = (bool_conflict)CONCAT71((int7)((ulong)pMVar19 >> 8),1);
  }
  return bVar10;
}


// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$TryEmitFresh
// il2cpp: bool ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o* entry, System_DateTimeOffset_o now, System_Action_AottgQueryResult_TValue___o* onResult, const MethodInfo_32B5710* method);
// 0x33b5710

bool_conflict
ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__TryEmitFresh
          (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
          ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *entry,
          System_DateTimeOffset_o now,System_Action_AottgQueryResult_TValue___o *onResult,
          MethodInfo_32B5710 *method)

{
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar1;
  undefined1 auVar2 [12];
  undefined8 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  bool_conflict bVar7;
  System_TimeSpan_o SVar8;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar9;
  System_TimeSpan_o t2;
  System_TimeSpan_Fields t2_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_00;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  char local_58;
  undefined7 uStack_57;
  int64_t iStack_50;
  MethodInfo_32B5710 *local_40;
  System_Action_AottgQueryResult_TValue___o *local_38;
  MethodInfo_375F1D0 *method_00;
  
  local_40 = method;
  local_38 = onResult;
  if (DAT_057003da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_TimeSpan_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_057003da = '\x01';
  }
  local_58 = '\0';
  uStack_57 = 0;
  iStack_50 = 0;
  if (entry == (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)0x0)
  goto LAB_033b5952;
  auVar2 = now.fields._0_12_;
  if ((char)(entry->fields).HasSuccess == '\0') {
LAB_033b5839:
    if (*(char *)((long)&(entry->fields).HasSuccess + 1) != '\0') {
      pAVar1 = (__this->fields)._policy;
      if (pAVar1 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b5952;
      local_58 = (char)(pAVar1->fields)._FailureTtl_k__BackingField.fields.hasValue;
      iStack_50 = (pAVar1->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks;
      if (local_58 != '\0') {
        uVar5 = (entry->fields).CachedAt.fields._dateTime;
        uVar6 = (entry->fields).CachedAt.fields._offsetMinutes;
        right_00.fields._offsetMinutes = uVar6;
        right_00.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)uVar5;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_init_class();
        }
        left_00.fields._12_4_ = 0;
        left_00.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)auVar2._0_8_;
        left_00.fields._offsetMinutes = auVar2._8_2_;
        left_00.fields._10_2_ = auVar2._10_2_;
        right_00.fields._10_6_ = 0;
        SVar8 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pAVar1 = (__this->fields)._policy;
        if (pAVar1 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b5952;
        local_58 = (char)(pAVar1->fields)._FailureTtl_k__BackingField.fields.hasValue;
        iStack_50 = (pAVar1->fields)._FailureTtl_k__BackingField.fields.value.fields._ticks;
        __this_00.fields.value.fields._ticks =
             (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
        __this_00.fields._0_8_ = &local_58;
        t2 = System_Nullable<TimeSpan>__get_Value(__this_00,method_00);
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          il2cpp_init_class();
        }
        t2_00._ticks = 0;
        bVar7 = System_TimeSpan__op_LessThan(SVar8,t2,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return 0;
        }
        pAVar9 = ApplicationManagers_Api_AottgQueryResult<object>__FailedNoCache
                           ((entry->fields).Error,1,
                            (MethodInfo_32B67D0 *)
                            local_40->klass->rgctx_data->
                            _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
        goto joined_r0x033b592a;
      }
    }
    bVar7 = 0;
  }
  else {
    uVar3 = (entry->fields).CachedAt.fields._dateTime;
    uVar4 = (entry->fields).CachedAt.fields._offsetMinutes;
    right.fields._offsetMinutes = uVar4;
    right.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar3;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_init_class();
    }
    left.fields._12_4_ = 0;
    left.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)auVar2._0_8_;
    left.fields._offsetMinutes = auVar2._8_2_;
    left.fields._10_2_ = auVar2._10_2_;
    right.fields._10_6_ = 0;
    SVar8 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
    pAVar1 = (__this->fields)._policy;
    if (pAVar1 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b5952;
    t2_00._ticks = (pAVar1->fields)._SuccessTtl_k__BackingField.fields._ticks;
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = System_TimeSpan__op_LessThan(SVar8,(System_TimeSpan_o)t2_00._ticks,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto LAB_033b5839;
    pAVar9 = ApplicationManagers_Api_AottgQueryResult<object>__ReadyFresh
                       ((entry->fields).Value,1,
                        (MethodInfo_32B6630 *)
                        local_40->klass->rgctx_data->
                        _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
joined_r0x033b592a:
    if (local_38 == (System_Action_AottgQueryResult_TValue___o *)0x0) {
LAB_033b5952:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(code *)(local_38->fields).invoke_impl)
              ((local_38->fields).method_code,pAVar9,(local_38->fields).method);
    bVar7 = (bool_conflict)CONCAT71((int7)((ulong)t2_00._ticks >> 8),1);
  }
  return bVar7;
}


// ApplicationManagers.Api.AottgQueryCache<object, object>$$Complete
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_object__object___Complete (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Il2CppObject* key, ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* result, const MethodInfo_32B3650* method);
// 0x33b3650

void ApplicationManagers_Api_AottgQueryCache<object__object>__Complete
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,Il2CppObject *key,
               ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *result,
               MethodInfo_32B3650 *method)

{
  int *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Func_DateTimeOffset__o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar6;
  bool_conflict bVar7;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar8;
  System_Object_array *pSVar9;
  ulong uVar10;
  unkbyte10 Var11;
  Il2CppObject *pIStack_30;
  undefined4 uStack_26;
  undefined2 uStack_22;
  
  if (DAT_057003d5 == '\0') {
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003d5 = '\x01';
  }
  pIStack_30 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
  goto LAB_033b39a6;
  bVar7 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (__this_00,key,&pIStack_30,
                     (MethodInfo_308E3E0 *)
                     method->klass->rgctx_data->
                     _9_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___TryGetValue
                    );
  if ((char)bVar7 == '\0') {
    return;
  }
  if ((pIStack_30 == (Il2CppObject *)0x0) ||
     (((*(undefined1 *)((long)&pIStack_30[3].monitor + 2) = 0,
       result == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 &&
       (result = ApplicationManagers_Api_AottgQueryFetchResult<object>__Fail
                           ("unknown_error",
                            (MethodInfo_32B5DC0 *)
                            method->klass->rgctx_data->
                            _35_ApplicationManagers_Api_AottgQueryFetchResult_TValue__Fail),
       result == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) ||
      (pIStack_30 == (Il2CppObject *)0x0)))) goto LAB_033b39a6;
  if ((char)(result->fields)._Success_k__BackingField == '\0') {
    if (*(char *)&pIStack_30[3].monitor != '\0') {
      pAVar6 = (__this->fields)._policy;
      if (pAVar6 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b39a6;
      if ((char)(pAVar6->fields)._PreserveStaleOnFailure_k__BackingField != '\0') {
        pIStack_30[2].klass = (Il2CppClass *)(result->fields)._Error_k__BackingField;
        il2cpp_runtime_glue(pIStack_30 + 2);
        if (pIStack_30 == (Il2CppObject *)0x0) goto LAB_033b39a6;
        pAVar8 = ApplicationManagers_Api_AottgQueryResult<object>__FailedRefreshStale
                           (pIStack_30[1].monitor,(result->fields)._Error_k__BackingField,
                            (MethodInfo_32B6910 *)
                            method->klass->rgctx_data->
                            _40_ApplicationManagers_Api_AottgQueryResult_TValue__FailedRefreshStale)
        ;
        goto joined_r0x033b3916;
      }
    }
    *(undefined2 *)&pIStack_30[3].monitor = 0x100;
    pIStack_30[1].monitor = (void *)0x0;
    pIStack_30[2].klass = (Il2CppClass *)(result->fields)._Error_k__BackingField;
    il2cpp_runtime_glue(pIStack_30 + 2);
    pIVar5 = pIStack_30;
    pSVar3 = (__this->fields)._now;
    if ((pSVar3 == (System_Func_DateTimeOffset__o *)0x0) ||
       (Var11 = (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code),
       pIVar5 == (Il2CppObject *)0x0)) goto LAB_033b39a6;
    *(unkbyte10 *)&pIVar5[2].monitor = Var11;
    *(undefined4 *)((long)&pIVar5[3].klass + 2) = uStack_26;
    *(undefined2 *)((long)&pIVar5[3].klass + 6) = uStack_22;
    pAVar8 = ApplicationManagers_Api_AottgQueryResult<object>__FailedNoCache
                       ((result->fields)._Error_k__BackingField,0,
                        (MethodInfo_32B67D0 *)
                        method->klass->rgctx_data->
                        _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache);
  }
  else {
    *(undefined2 *)&pIStack_30[3].monitor = 1;
    pIStack_30[1].monitor = (result->fields)._Value_k__BackingField;
    il2cpp_runtime_glue(&pIStack_30[1].monitor);
    if (pIStack_30 == (Il2CppObject *)0x0) goto LAB_033b39a6;
    pIStack_30[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_glue(pIStack_30 + 2,0);
    pIVar5 = pIStack_30;
    pSVar3 = (__this->fields)._now;
    if ((pSVar3 == (System_Func_DateTimeOffset__o *)0x0) ||
       (Var11 = (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code),
       pIVar5 == (Il2CppObject *)0x0)) goto LAB_033b39a6;
    *(unkbyte10 *)&pIVar5[2].monitor = Var11;
    *(undefined2 *)((long)&pIVar5[3].klass + 6) = uStack_22;
    *(undefined4 *)((long)&pIVar5[3].klass + 2) = uStack_26;
    if (pIStack_30 == (Il2CppObject *)0x0) goto LAB_033b39a6;
    pAVar8 = ApplicationManagers_Api_AottgQueryResult<object>__ReadyFresh
                       (pIStack_30[1].monitor,0,
                        (MethodInfo_32B6630 *)
                        method->klass->rgctx_data->
                        _32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh);
  }
joined_r0x033b3916:
  if ((((pIStack_30 != (Il2CppObject *)0x0) && (pIStack_30[1].klass != (Il2CppClass *)0x0)) &&
      (pSVar9 = System_Collections_Generic_List<object>__ToArray
                          ((System_Collections_Generic_List_object__o *)pIStack_30[1].klass,
                           (MethodInfo_35A9470 *)
                           method->klass->rgctx_data->
                           _41_System_Collections_Generic_List_Action_AottgQueryResult_TValue____ToArray
                          ), pIStack_30 != (Il2CppObject *)0x0)) &&
     (pIVar4 = pIStack_30[1].klass, pIVar4 != (Il2CppClass *)0x0)) {
    piVar1 = (int *)((long)&(pIVar4->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    length = *(int32_t *)&(pIVar4->_1).namespaze;
    *(undefined4 *)&(pIVar4->_1).namespaze = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pIVar4->_1).name,0,length,(MethodInfo *)0x0);
    }
    if (pSVar9 != (System_Object_array *)0x0) {
      if ((int)pSVar9->max_length < 1) {
        return;
      }
      uVar10 = 0;
      if ((pSVar9->max_length & 0xffffffff) != 0) {
        do {
          pIVar5 = pSVar9->m_Items[uVar10];
          if (pIVar5 != (Il2CppObject *)0x0) {
            if (pIVar5 == (Il2CppObject *)0x0) goto LAB_033b39a6;
            (*pIVar5[1].monitor)(pIVar5[4].klass,pAVar8,pIVar5[2].monitor);
          }
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar9->max_length;
          if ((long)(int)uVar2 <= (long)uVar10) {
            return;
          }
        } while (uVar10 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_033b39a6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Complete
// il2cpp: void ApplicationManagers_Api_AottgQueryCache___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Complete (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* result, const MethodInfo_32B4810* method);
// 0x33b4810

void ApplicationManagers_Api_AottgQueryCache<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__Complete
               (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
               ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *result,
               MethodInfo_32B4810 *method)

{
  System_String_o *pSVar1;
  System_String_c *pSVar2;
  System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o *pSVar3;
  Il2CppClass *pIVar4;
  code *pcVar5;
  void *pvVar6;
  InvokerMethod pIVar7;
  undefined8 uVar8;
  System_Func_DateTimeOffset__o *pSVar9;
  intptr_t iVar10;
  intptr_t iVar11;
  Il2CppType *pIVar12;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__RGCTXs *pAVar13;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAVar14;
  Il2CppType *pIVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  char cVar20;
  undefined1 *puVar21;
  void *pvVar22;
  undefined8 *puVar23;
  unkbyte10 *pVar24;
  char *pcVar25;
  undefined8 uVar26;
  void *pvVar27;
  ulong *puVar28;
  long *plVar29;
  long lVar30;
  ulong uVar31;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar32;
  char *pcVar33;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  MethodInfo *pMVar34;
  Il2CppMethodPointer pIVar35;
  Il2CppClass *pIVar36;
  unkbyte10 Var37;
  char acStack_a0 [8];
  undefined1 local_98 [72];
  Il2CppClass *local_50;
  Il2CppClass *local_48;
  undefined1 local_39;
  void *local_38;
  
  local_98._32_8_ = key.monitor;
  pUVar32 = key.klass;
  local_98._0_8_ = pUVar32;
  if (DAT_057003d8 == '\0') {
    builtin_strncpy(acStack_a0,"JH;\x03",5);
    acStack_a0[5] = '\0';
    acStack_a0[6] = '\0';
    acStack_a0[7] = '\0';
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003d8 = '\x01';
  }
  pSVar1 = (result->fields)._Error_k__BackingField;
  pSVar2 = pSVar1[8].klass;
  __n = (ulong)*(uint *)(*(long *)&(pSVar2->_1).this_arg.bits + 0xfc);
  local_48 = (Il2CppClass *)(ulong)*(uint *)((long)(pSVar2->_1).nestedTypes + 0xfc);
  lVar17 = -(__n + 0xf & 0xfffffffffffffff0);
  pcVar25 = local_98 + lVar17;
  uVar31 = (ulong)((long)&(local_48->_1).gc_desc + 7U) & 0xfffffffffffffff0;
  lVar18 = -uVar31;
  local_98._16_8_ = pcVar25 + lVar18;
  lVar19 = -uVar31;
  pcVar33 = (char *)(local_98._16_8_ + lVar19);
  local_38 = (void *)0x0;
  pSVar3 = (__this->fields)._entries;
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)local_98;
  if (*(int *)(*(long *)&(pSVar2->_1).this_arg.bits + 0x28) < 0) {
    __src = pUVar32;
  }
  local_98._8_8_ = pcVar33;
  local_98._24_8_ = __this;
  local_50 = (Il2CppClass *)result;
  pcVar33[-8] = -0x24;
  pcVar33[-7] = 'H';
  pcVar33[-6] = ';';
  pcVar33[-5] = '\x03';
  pcVar33[-4] = '\0';
  pcVar33[-3] = '\0';
  pcVar33[-2] = '\0';
  pcVar33[-1] = '\0';
  memcpy(pcVar25,__src,__n);
  pIVar36 = local_50;
  if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o
                 *)0x0) goto LAB_033b5083;
  pSVar2 = pSVar1[8].klass;
  pIVar4 = (pSVar2->_1).castClass;
  pvVar22 = (pIVar4->_1).image;
  if (-1 < *(int *)(*(long *)&(pSVar2->_1).this_arg.bits + 0x28)) {
    pcVar25 = *(char **)pcVar25;
  }
  local_98._56_8_ = &local_38;
  pcVar5 = (code *)(pIVar4->_1).name;
  local_98._48_8_ = pcVar25;
  builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"$I;\x03",5);
  pcVar33[-3] = '\0';
  pcVar33[-2] = '\0';
  pcVar33[-1] = '\0';
  (*pcVar5)(pvVar22,pIVar4,pSVar3,local_98 + 0x30,local_98 + 0x28);
  pvVar22 = local_38;
  if (local_98[0x28] == '\0') {
    return;
  }
  if (local_38 == (void *)0x0) goto LAB_033b5083;
  pIVar36 = (Il2CppClass *)&(pIVar36->_1).byval_arg;
  pvVar27 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
  lVar30 = (long)pvVar27 + 0xc0;
  builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"iI;\x03",5);
  pcVar33[-3] = '\0';
  pcVar33[-2] = '\0';
  pcVar33[-1] = '\0';
  il2cpp_glue_02274840(lVar30,1);
  builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"tI;\x03",5);
  pcVar33[-3] = '\0';
  pcVar33[-2] = '\0';
  pcVar33[-1] = '\0';
  puVar21 = (undefined1 *)il2cpp_glue_022fa440(pvVar22,lVar30);
  *puVar21 = 0;
  uVar26 = *(undefined8 *)((long)pvVar27 + 200);
  pcVar33[-8] = -0x78;
  pcVar33[-7] = 'I';
  pcVar33[-6] = ';';
  pcVar33[-5] = '\x03';
  pcVar33[-4] = '\0';
  pcVar33[-3] = '\0';
  pcVar33[-2] = '\0';
  pcVar33[-1] = '\0';
  il2cpp_glue_02274770(uVar26,puVar21,0);
  pvVar22 = (void *)local_98._32_8_;
  if ((void *)local_98._32_8_ == (void *)0x0) {
    pcVar5 = (code *)**(undefined8 **)&((((Il2CppType *)pIVar36)->data[8].klass)->_2).token;
    pcVar33[-8] = -0x51;
    pcVar33[-7] = 'I';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    pvVar22 = (void *)(*pcVar5)("unknown_error");
    if (pvVar22 == (void *)0x0) goto LAB_033b5083;
  }
  pcVar5 = (code *)**(undefined8 **)&((((Il2CppType *)pIVar36)->data[8].klass)->_2).interfaces_count
  ;
  pcVar33[-8] = -0x2e;
  pcVar33[-7] = 'I';
  pcVar33[-6] = ';';
  pcVar33[-5] = '\x03';
  pcVar33[-4] = '\0';
  pcVar33[-3] = '\0';
  pcVar33[-2] = '\0';
  pcVar33[-1] = '\0';
  cVar20 = (*pcVar5)(pvVar22);
  pvVar27 = local_38;
  local_50 = pIVar36;
  if (cVar20 == '\0') {
    pvVar6 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"LL;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    pcVar25 = (char *)il2cpp_glue_022fa440(pvVar27,(long)pvVar6 + 0x80);
    pvVar27 = local_38;
    local_98._32_8_ = pvVar22;
    if (*pcVar25 != '\0') {
      pAVar14 = ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__Fields *)
                (local_98._24_8_ + 0x10))->_policy;
      if (pAVar14 == (ApplicationManagers_Api_AottgQueryPolicy_o *)0x0) goto LAB_033b5083;
      if ((char)(pAVar14->fields)._PreserveStaleOnFailure_k__BackingField != '\0') {
        pcVar5 = *(code **)((((Il2CppType *)pIVar36)->data[8].klass)->vtable)._0_Equals.methodPtr;
        pcVar33[-8] = -0x71;
        pcVar33[-7] = 'L';
        pcVar33[-6] = ';';
        pcVar33[-5] = '\x03';
        pcVar33[-4] = '\0';
        pcVar33[-3] = '\0';
        pcVar33[-2] = '\0';
        pcVar33[-1] = '\0';
        uVar26 = (*pcVar5)(pvVar22);
        if (pvVar27 == (void *)0x0) goto LAB_033b5083;
        pvVar22 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
        lVar30 = (long)pvVar22 + 0x40;
        pcVar33[-8] = -0x3e;
        pcVar33[-7] = 'L';
        pcVar33[-6] = ';';
        pcVar33[-5] = '\x03';
        pcVar33[-4] = '\0';
        pcVar33[-3] = '\0';
        pcVar33[-2] = '\0';
        pcVar33[-1] = '\0';
        il2cpp_glue_02274840(lVar30,8);
        pcVar33[-8] = -0x33;
        pcVar33[-7] = 'L';
        pcVar33[-6] = ';';
        pcVar33[-5] = '\x03';
        pcVar33[-4] = '\0';
        pcVar33[-3] = '\0';
        pcVar33[-2] = '\0';
        pcVar33[-1] = '\0';
        puVar23 = (undefined8 *)il2cpp_glue_022fa440(pvVar27,lVar30);
        *puVar23 = uVar26;
        uVar26 = *(undefined8 *)((long)pvVar22 + 0x48);
        pcVar33[-8] = -0x22;
        pcVar33[-7] = 'L';
        pcVar33[-6] = ';';
        pcVar33[-5] = '\x03';
        pcVar33[-4] = '\0';
        pcVar33[-3] = '\0';
        pcVar33[-2] = '\0';
        pcVar33[-1] = '\0';
        il2cpp_glue_02274770(uVar26,puVar23,0);
        pvVar27 = local_38;
        pvVar22 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
        builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"\x01M;\x03",5);
        pcVar33[-3] = '\0';
        pcVar33[-2] = '\0';
        pcVar33[-1] = '\0';
        pvVar22 = (void *)il2cpp_glue_022fa440(pvVar27,(long)pvVar22 + 0x20);
        pIVar4 = local_48;
        uVar26 = local_98._16_8_;
        builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"\x14M;\x03",5);
        pcVar33[-3] = '\0';
        pcVar33[-2] = '\0';
        pcVar33[-1] = '\0';
        memcpy((void *)uVar26,pvVar22,(size_t)pIVar4);
        uVar8 = local_98._32_8_;
        pcVar5 = *(code **)((((Il2CppType *)pIVar36)->data[8].klass)->vtable)._0_Equals.methodPtr;
        builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,",M;\x03",5);
        pcVar33[-3] = '\0';
        pcVar33[-2] = '\0';
        pcVar33[-1] = '\0';
        local_98._56_8_ = (*pcVar5)(uVar8);
        pSVar2 = ((Il2CppType *)pIVar36)->data[8].klass;
        pMVar34 = (pSVar2->vtable)._0_Equals.method;
        pIVar35 = pMVar34->methodPointer;
        local_98._48_8_ = uVar26;
        if (-1 < *(int *)((pSVar2->_1).nestedTypes + 5)) {
          local_98._48_8_ = *(undefined8 *)uVar26;
        }
        goto LAB_033b4d55;
      }
    }
    if (local_38 == (void *)0x0) goto LAB_033b5083;
    pvVar6 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
    lVar30 = (long)pvVar6 + 0x80;
    pcVar33[-8] = -0x5a;
    pcVar33[-7] = 'M';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274840(lVar30,1);
    pcVar33[-8] = -0x4f;
    pcVar33[-7] = 'M';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    puVar21 = (undefined1 *)il2cpp_glue_022fa440(pvVar27,lVar30);
    *puVar21 = 0;
    uVar26 = *(undefined8 *)((long)pvVar6 + 0x88);
    pcVar33[-8] = -0x3b;
    pcVar33[-7] = 'M';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274770(uVar26,puVar21,0);
    pvVar27 = local_38;
    if (local_38 == (void *)0x0) goto LAB_033b5083;
    pvVar6 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
    lVar30 = (long)pvVar6 + 0xa0;
    pcVar33[-8] = -4;
    pcVar33[-7] = 'M';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274840(lVar30,1);
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"\aN;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    puVar21 = (undefined1 *)il2cpp_glue_022fa440(pvVar27,lVar30);
    *puVar21 = 1;
    uVar26 = *(undefined8 *)((long)pvVar6 + 0xa8);
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"\x1bN;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274770(uVar26,puVar21,0);
    pvVar27 = local_38;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,">N;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    pvVar27 = (void *)il2cpp_glue_022fa440(pvVar27);
    pIVar4 = local_48;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"LN;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    memset(pvVar27,0,(size_t)pIVar4);
    pvVar27 = local_38;
    pcVar5 = *(code **)((((Il2CppType *)pIVar36)->data[8].klass)->vtable)._0_Equals.methodPtr;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"gN;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    uVar26 = (*pcVar5)(pvVar22);
    if (pvVar27 == (void *)0x0) goto LAB_033b5083;
    pvVar22 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
    lVar30 = (long)pvVar22 + 0x40;
    pcVar33[-8] = -0x65;
    pcVar33[-7] = 'N';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274840(lVar30,8);
    pcVar33[-8] = -0x5a;
    pcVar33[-7] = 'N';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    puVar23 = (undefined8 *)il2cpp_glue_022fa440(pvVar27,lVar30);
    *puVar23 = uVar26;
    uVar26 = *(undefined8 *)((long)pvVar22 + 0x48);
    pcVar33[-8] = -0x48;
    pcVar33[-7] = 'N';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274770(uVar26,puVar23,0);
    pvVar22 = local_38;
    pSVar9 = ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__Fields *)
             (local_98._24_8_ + 0x10))->_now;
    if (pSVar9 == (System_Func_DateTimeOffset__o *)0x0) goto LAB_033b5083;
    iVar10 = (pSVar9->fields).method;
    iVar11 = (pSVar9->fields).method_code;
    pcVar5 = (code *)(pSVar9->fields).invoke_impl;
    pcVar33[-8] = -0x28;
    pcVar33[-7] = 'N';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    Var37 = (*pcVar5)(iVar11,iVar10);
    pIVar36 = local_50;
    local_48 = (Il2CppClass *)Var37;
    if (pvVar22 == (void *)0x0) goto LAB_033b5083;
    pIVar15 = ((local_50->_1).image)->rgctx_data[1].
              _5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error[1].return_type;
    pIVar12 = pIVar15 + 6;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"\x13O;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274840(pIVar12,0x10);
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"\x1eO;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    puVar28 = (ulong *)il2cpp_glue_022fa440(pvVar22,pIVar12);
    *puVar28 = (ulong)local_48;
    *(short *)(puVar28 + 1) = (short)((unkuint10)Var37 >> 0x40);
    uVar26 = *(undefined8 *)&pIVar15[6].bits;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"<O;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274770(uVar26,puVar28,0);
    uVar26 = local_98._32_8_;
    pIVar35 = (((pIVar36->_1).image)->rgctx_data[6].
              _3_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Success)->methodPointer;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"SO;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    uVar26 = (*pIVar35)(uVar26);
    pIVar35 = (((pIVar36->_1).image)->rgctx_data[5].
              _3_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Success)->methodPointer;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"kO;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    pcVar25 = (char *)(*pIVar35)(uVar26,0);
  }
  else {
    if (local_38 == (void *)0x0) goto LAB_033b5083;
    pvVar6 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
    lVar30 = (long)pvVar6 + 0x80;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"\x15J;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274840(lVar30,1);
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8," J;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    puVar21 = (undefined1 *)il2cpp_glue_022fa440(pvVar27,lVar30);
    *puVar21 = 1;
    uVar26 = *(undefined8 *)((long)pvVar6 + 0x88);
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"4J;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274770(uVar26,puVar21,0);
    pvVar27 = local_38;
    if (local_38 == (void *)0x0) goto LAB_033b5083;
    pvVar6 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
    lVar30 = (long)pvVar6 + 0xa0;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"kJ;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274840(lVar30,1);
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"vJ;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    puVar21 = (undefined1 *)il2cpp_glue_022fa440(pvVar27,lVar30);
    *puVar21 = 0;
    uVar26 = *(undefined8 *)((long)pvVar6 + 0xa8);
    pcVar33[-8] = -0x76;
    pcVar33[-7] = 'J';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274770(uVar26,puVar21,0);
    pvVar27 = local_38;
    uVar26 = local_98._16_8_;
    pMVar34 = *(MethodInfo **)&((((Il2CppType *)pIVar36)->data[8].klass)->_2).naturalAligment;
    pIVar35 = pMVar34->methodPointer;
    local_98._48_8_ = local_98._16_8_;
    pIVar7 = pMVar34->invoker_method;
    pcVar33[-8] = -0x48;
    pcVar33[-7] = 'J';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    (*pIVar7)(pIVar35,pMVar34,pvVar22,(void **)(local_98 + 0x30),(void *)uVar26);
    pIVar4 = local_48;
    if (pvVar27 == (void *)0x0) goto LAB_033b5083;
    pvVar22 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
    pcVar33[-8] = -0x16;
    pcVar33[-7] = 'J';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274860(pvVar27,(long)pvVar22 + 0x20,uVar26,pIVar4);
    pvVar22 = local_38;
    uVar26 = local_98._24_8_;
    if (local_38 == (void *)0x0) goto LAB_033b5083;
    pvVar27 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
    lVar30 = (long)pvVar27 + 0x40;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"\"K;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274840(lVar30,8);
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"-K;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    puVar23 = (undefined8 *)il2cpp_glue_022fa440(pvVar22,lVar30);
    *puVar23 = 0;
    uVar8 = *(undefined8 *)((long)pvVar27 + 0x48);
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"BK;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274770(uVar8,puVar23,0);
    pvVar22 = local_38;
    pSVar9 = ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__Fields *)(uVar26 + 0x10))->_now
    ;
    if (pSVar9 == (System_Func_DateTimeOffset__o *)0x0) goto LAB_033b5083;
    iVar10 = (pSVar9->fields).method;
    iVar11 = (pSVar9->fields).method_code;
    pcVar5 = (code *)(pSVar9->fields).invoke_impl;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"^K;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    Var37 = (*pcVar5)(iVar11,iVar10);
    if (pvVar22 == (void *)0x0) goto LAB_033b5083;
    pvVar27 = ((((((Il2CppType *)pIVar36)->data[8].klass)->_1).parent)->_1).fields;
    lVar30 = (long)pvVar27 + 0x60;
    pcVar33[-8] = -0x6b;
    pcVar33[-7] = 'K';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274840(lVar30,0x10);
    pcVar33[-8] = -0x60;
    pcVar33[-7] = 'K';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    pVar24 = (unkbyte10 *)il2cpp_glue_022fa440(pvVar22,lVar30);
    pIVar36 = local_50;
    *pVar24 = Var37;
    uVar26 = *(undefined8 *)((long)pvVar27 + 0x68);
    pcVar33[-8] = -0x45;
    pcVar33[-7] = 'K';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    il2cpp_glue_02274770(uVar26,pVar24,0);
    pvVar22 = local_38;
    pIVar12 = ((pIVar36->_1).image)->rgctx_data[1].
              _5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error[1].return_type;
    pcVar33[-8] = -0x22;
    pcVar33[-7] = 'K';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    pvVar22 = (void *)il2cpp_glue_022fa440(pvVar22,pIVar12 + 2);
    pIVar4 = local_48;
    pcVar25 = (char *)local_98._8_8_;
    pcVar33[-8] = -0xc;
    pcVar33[-7] = 'K';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    memcpy(pcVar25,pvVar22,(size_t)pIVar4);
    pAVar13 = ((pIVar36->_1).image)->rgctx_data;
    pMVar34 = pAVar13[5]._2_ApplicationManagers_Api_AottgQueryFetchResult_TValue___ctor;
    pIVar35 = pMVar34->methodPointer;
    if (-1 < *(int *)&(pAVar13[3]._2_ApplicationManagers_Api_AottgQueryFetchResult_TValue___ctor)->
                      return_type) {
      pcVar25 = *(char **)pcVar25;
    }
    local_39 = 0;
    local_98._56_8_ = &local_39;
    local_98._48_8_ = pcVar25;
LAB_033b4d55:
    pIVar7 = pMVar34->invoker_method;
    builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"fM;\x03",5);
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    (*pIVar7)(pIVar35,pMVar34,(void *)0x0,(void **)(local_98 + 0x30),local_98 + 0x28);
    pcVar25 = (char *)CONCAT71(local_98._41_7_,local_98[0x28]);
  }
  pvVar22 = local_38;
  pIVar12 = ((pIVar36->_1).image)->rgctx_data[1].
            _5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error[1].return_type;
  pcVar33[-8] = -0x73;
  pcVar33[-7] = 'O';
  pcVar33[-6] = ';';
  pcVar33[-5] = '\x03';
  pcVar33[-4] = '\0';
  pcVar33[-3] = '\0';
  pcVar33[-2] = '\0';
  pcVar33[-1] = '\0';
  plVar29 = (long *)il2cpp_glue_022fa440(pvVar22,pIVar12);
  if (*plVar29 != 0) {
    pIVar35 = (((pIVar36->_1).image)->rgctx_data[6].
              _5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error)->methodPointer;
    pcVar33[-8] = -0x53;
    pcVar33[-7] = 'O';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    lVar30 = (*pIVar35)();
    pvVar22 = local_38;
    pIVar12 = ((pIVar36->_1).image)->rgctx_data[1].
              _5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error[1].return_type;
    pcVar33[-8] = -0x31;
    pcVar33[-7] = 'O';
    pcVar33[-6] = ';';
    pcVar33[-5] = '\x03';
    pcVar33[-4] = '\0';
    pcVar33[-3] = '\0';
    pcVar33[-2] = '\0';
    pcVar33[-1] = '\0';
    plVar29 = (long *)il2cpp_glue_022fa440(pvVar22,pIVar12);
    if (*plVar29 != 0) {
      pcVar5 = ((((pIVar36->_1).image)->rgctx_data[7]._1_TValue)->_1).image;
      pcVar33[-8] = -0x11;
      pcVar33[-7] = 'O';
      pcVar33[-6] = ';';
      pcVar33[-5] = '\x03';
      pcVar33[-4] = '\0';
      pcVar33[-3] = '\0';
      pcVar33[-2] = '\0';
      pcVar33[-1] = '\0';
      (*pcVar5)();
      if (lVar30 != 0) {
        if ((int)*(ulong *)(lVar30 + 0x18) < 1) {
          return;
        }
        uVar31 = 0;
        if ((*(ulong *)(lVar30 + 0x18) & 0xffffffff) != 0) {
          do {
            lVar16 = *(long *)(lVar30 + 0x20 + uVar31 * 8);
            if (lVar16 != 0) {
              if (lVar16 == 0) goto LAB_033b5083;
              pIVar36 = ((local_50->_1).image)->rgctx_data[4].
                        _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_;
              pvVar22 = (pIVar36->_1).image;
              pcVar5 = (code *)(pIVar36->_1).name;
              local_98._48_8_ = pcVar25;
              builtin_strncpy(local_98 + lVar19 + lVar18 + lVar17 + -8,"rP;\x03",5);
              pcVar33[-3] = '\0';
              pcVar33[-2] = '\0';
              pcVar33[-1] = '\0';
              (*pcVar5)(pvVar22,pIVar36,lVar16,local_98 + 0x30,pcVar25);
            }
            uVar31 = uVar31 + 1;
            if ((long)(int)*(uint *)(lVar30 + 0x18) <= (long)uVar31) {
              return;
            }
          } while (uVar31 < *(uint *)(lVar30 + 0x18));
        }
                    /* WARNING: Subroutine does not return */
        *(undefined **)(pcVar33 + -8) = &UNK_033b508d;
        il2cpp_raise_exception();
      }
    }
  }
LAB_033b5083:
                    /* WARNING: Subroutine does not return */
  pcVar33[-8] = -0x78;
  pcVar33[-7] = 'P';
  pcVar33[-6] = ';';
  pcVar33[-5] = '\x03';
  pcVar33[-4] = '\0';
  pcVar33[-3] = '\0';
  pcVar33[-2] = '\0';
  pcVar33[-1] = '\0';
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$Complete
// il2cpp: void ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___Complete (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o* __this, ApplicationManagers_Credits_AottgCreditsService_UnitKey_o key, ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* result, const MethodInfo_32B5960* method);
// 0x33b5960

void ApplicationManagers_Api_AottgQueryCache<AottgCreditsService_UnitKey__object>__Complete
               (long __this,undefined1 param_2,
               ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *param_3,long param_4)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  bool_conflict bVar5;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  unkbyte10 Var9;
  long local_30;
  undefined4 local_26;
  undefined2 local_22;
  
  if (DAT_057003db == '\0') {
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003db = '\x01';
  }
  local_30 = 0;
  if (*(long *)(__this + 0x28) == 0) goto LAB_033b5c9d;
  bVar5 = System_Collections_Generic_Dictionary<AottgCreditsService_UnitKey__object>__TryGetValue
                    (*(long *)(__this + 0x28),param_2,&local_30);
  if ((char)bVar5 == '\0') {
    return;
  }
  if ((local_30 == 0) ||
     (((*(undefined1 *)(local_30 + 0x3a) = 0,
       param_3 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 &&
       (param_3 = ApplicationManagers_Api_AottgQueryFetchResult<object>__Fail
                            ("unknown_error",
                             *(MethodInfo_32B5DC0 **)
                              (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x118)),
       param_3 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) ||
      (local_30 == 0)))) goto LAB_033b5c9d;
  if ((char)(param_3->fields)._Success_k__BackingField == '\0') {
    if (*(char *)(local_30 + 0x38) != '\0') {
      if (*(long *)(__this + 0x20) == 0) goto LAB_033b5c9d;
      if (*(char *)(*(long *)(__this + 0x20) + 0x28) != '\0') {
        *(System_String_o **)(local_30 + 0x20) = (param_3->fields)._Error_k__BackingField;
        il2cpp_runtime_glue(local_30 + 0x20);
        if (local_30 == 0) goto LAB_033b5c9d;
        pAVar6 = ApplicationManagers_Api_AottgQueryResult<object>__FailedRefreshStale
                           (*(Il2CppObject **)(local_30 + 0x18),
                            (param_3->fields)._Error_k__BackingField,
                            *(MethodInfo_32B6910 **)
                             (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140));
        goto joined_r0x033b5c0f;
      }
    }
    *(undefined2 *)(local_30 + 0x38) = 0x100;
    *(undefined8 *)(local_30 + 0x18) = 0;
    *(System_String_o **)(local_30 + 0x20) = (param_3->fields)._Error_k__BackingField;
    il2cpp_runtime_glue(local_30 + 0x20);
    lVar4 = local_30;
    lVar2 = *(long *)(__this + 0x18);
    if ((lVar2 == 0) ||
       (Var9 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40)), lVar4 == 0))
    goto LAB_033b5c9d;
    *(unkbyte10 *)(lVar4 + 0x28) = Var9;
    *(undefined4 *)(lVar4 + 0x32) = local_26;
    *(undefined2 *)(lVar4 + 0x36) = local_22;
    pAVar6 = ApplicationManagers_Api_AottgQueryResult<object>__FailedNoCache
                       ((param_3->fields)._Error_k__BackingField,0,
                        *(MethodInfo_32B67D0 **)
                         (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x108));
  }
  else {
    *(undefined2 *)(local_30 + 0x38) = 1;
    *(Il2CppObject **)(local_30 + 0x18) = (param_3->fields)._Value_k__BackingField;
    il2cpp_runtime_glue(local_30 + 0x18);
    if (local_30 == 0) goto LAB_033b5c9d;
    *(undefined8 *)(local_30 + 0x20) = 0;
    il2cpp_runtime_glue(local_30 + 0x20,0);
    lVar4 = local_30;
    lVar2 = *(long *)(__this + 0x18);
    if ((lVar2 == 0) ||
       (Var9 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40)), lVar4 == 0))
    goto LAB_033b5c9d;
    *(unkbyte10 *)(lVar4 + 0x28) = Var9;
    *(undefined2 *)(lVar4 + 0x36) = local_22;
    *(undefined4 *)(lVar4 + 0x32) = local_26;
    if (local_30 == 0) goto LAB_033b5c9d;
    pAVar6 = ApplicationManagers_Api_AottgQueryResult<object>__ReadyFresh
                       (*(Il2CppObject **)(local_30 + 0x18),0,
                        *(MethodInfo_32B6630 **)
                         (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x100));
  }
joined_r0x033b5c0f:
  if ((((local_30 != 0) &&
       (*(System_Collections_Generic_List_object__o **)(local_30 + 0x10) !=
        (System_Collections_Generic_List_object__o *)0x0)) &&
      (pSVar7 = System_Collections_Generic_List<object>__ToArray
                          (*(System_Collections_Generic_List_object__o **)(local_30 + 0x10),
                           *(MethodInfo_35A9470 **)
                            (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x148)), local_30 != 0))
     && (lVar2 = *(long *)(local_30 + 0x10), lVar2 != 0)) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    length = *(int32_t *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar2 + 0x10),0,length,(MethodInfo *)0x0);
    }
    if (pSVar7 != (System_Object_array *)0x0) {
      if ((int)pSVar7->max_length < 1) {
        return;
      }
      uVar8 = 0;
      if ((pSVar7->max_length & 0xffffffff) != 0) {
        do {
          pIVar3 = pSVar7->m_Items[uVar8];
          if (pIVar3 != (Il2CppObject *)0x0) {
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_033b5c9d;
            (*pIVar3[1].monitor)(pIVar3[4].klass,pAVar6,pIVar3[2].monitor);
          }
          uVar8 = uVar8 + 1;
          uVar1 = (uint)pSVar7->max_length;
          if ((long)(int)uVar1 <= (long)uVar8) {
            return;
          }
        } while (uVar8 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_033b5c9d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


