// Type: ApplicationManagers.Api.AottgQueryResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgQueryResult<object>$$get_State
// il2cpp: int32_t ApplicationManagers_Api_AottgQueryResult_object___get_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331B270* method);
// 0x341b270

int32_t ApplicationManagers_Api_AottgQueryResult_object___get_State
                  (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331B270 *method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_State
// il2cpp: int32_t ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331B7E0* method);
// 0x341b7e0

int32_t ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_State
                  (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331B7E0 *method)

{
  int32_t *piVar1;
  
  piVar1 = (int32_t *)
           il2cpp_runtime_helper_02338550(__this,(method->klass->rgctx_data->
                                      _0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).fields);
  return *piVar1;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_State
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, int32_t value, const MethodInfo_331B280* method);
// 0x341b280

void ApplicationManagers_Api_AottgQueryResult_object___set_State
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,int32_t value,
               MethodInfo_331B280 *method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_State
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, int32_t value, const MethodInfo_331B800* method);
// 0x341b800

void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_State
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,int32_t value,
               MethodInfo_331B800 *method)

{
  void *pvVar1;
  int32_t *piVar2;
  
  pvVar1 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).fields;
  il2cpp_runtime_helper_022b2950(pvVar1,4);
  piVar2 = (int32_t *)il2cpp_runtime_helper_02338550(__this,pvVar1);
  *piVar2 = value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar1 + 8),piVar2,0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$get_Value
// il2cpp: Il2CppObject* ApplicationManagers_Api_AottgQueryResult_object___get_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331B290* method);
// 0x341b290

Il2CppObject *
ApplicationManagers_Api_AottgQueryResult_object___get_Value
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331B290 *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331B850* method);
// 0x341b850

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Value
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331B850 *method)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *__src;
  long in_RDX;
  void *extraout_RDX;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar4;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  plVar1 = *(long **)(*(long *)(in_RDX + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar1[1] + 0xfc);
  lVar3 = -(__n + 0xf & 0xfffffffffffffff0);
  lVar2 = *(long *)(*plVar1 + 0x80);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x341b897;
  __src = (void *)il2cpp_runtime_helper_02338550(__this,lVar2 + 0x20);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x341b8a5;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x341b8b3;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, Il2CppObject* value, const MethodInfo_331B2A0* method);
// 0x341b2a0

void ApplicationManagers_Api_AottgQueryResult_object___set_Value
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,Il2CppObject *value,
               MethodInfo_331B2A0 *method)

{
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_331B8C0* method);
// 0x341b8c0

void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Value
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_331B8C0 *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  
  local_30 = value.klass;
  lVar1 = *(long *)((long)value.monitor + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  __n = (ulong)*(uint *)(lVar2 + 0xfc);
  lVar3 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = local_30;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffd0;
  }
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x341b915;
  memcpy(auStack_38 + lVar3,__src,__n);
  lVar1 = *(long *)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x341b939;
  il2cpp_runtime_helper_022b2970(__this,lVar1 + 0x20,auStack_38 + lVar3,__n);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryResult_object___get_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331B2B0* method);
// 0x341b2b0

System_String_o *
ApplicationManagers_Api_AottgQueryResult_object___get_Error
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331B2B0 *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331B950* method);
// 0x341b950

System_String_o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Error
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331B950 *method)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           il2cpp_runtime_helper_02338550(__this,(long)(method->klass->rgctx_data->
                                            _0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).fields +
                                     0x40);
  return (System_String_o *)*puVar1;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, System_String_o* value, const MethodInfo_331B2C0* method);
// 0x341b2c0

void ApplicationManagers_Api_AottgQueryResult_object___set_Error
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,System_String_o *value,
               MethodInfo_331B2C0 *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, System_String_o* value, const MethodInfo_331B980* method);
// 0x341b980

void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Error
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,System_String_o *value,
               MethodInfo_331B980 *method)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).fields;
  lVar1 = (long)pvVar2 + 0x40;
  il2cpp_runtime_helper_022b2950(lVar1,8);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_02338550(__this,lVar1);
  *puVar3 = value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar2 + 0x48),puVar3,0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Api_AottgQueryResult_object___get_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331B2D0* method);
// 0x341b2d0

bool_conflict
ApplicationManagers_Api_AottgQueryResult_object___get_IsFromCache
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331B2D0 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsFromCache_k__BackingField);
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331B9E0* method);
// 0x341b9e0

bool_conflict
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_IsFromCache
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331B9E0 *method)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           il2cpp_runtime_helper_02338550(__this,(long)(method->klass->rgctx_data->
                                            _0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).fields +
                                     0x60);
  return (bool_conflict)CONCAT71((int7)((ulong)puVar1 >> 8),*puVar1);
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, bool value, const MethodInfo_331B2E0* method);
// 0x341b2e0

void ApplicationManagers_Api_AottgQueryResult_object___set_IsFromCache
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,bool_conflict value,
               MethodInfo_331B2E0 *method)

{
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, bool value, const MethodInfo_331BA10* method);
// 0x341ba10

void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_IsFromCache
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,bool_conflict value,
               MethodInfo_331BA10 *method)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).fields;
  lVar1 = (long)pvVar2 + 0x60;
  il2cpp_runtime_helper_022b2950(lVar1,1);
  puVar3 = (undefined1 *)il2cpp_runtime_helper_02338550(__this,lVar1);
  *puVar3 = (char)value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar2 + 0x68),puVar3,0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$LoadingNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache (const MethodInfo_331B2F0* method);
// 0x341b2f0

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(MethodInfo_331B2F0 *method)

{
  byte bVar1;
  bool_conflict bVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar5;
  long lVar6;
  long lVar7;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  undefined1 uVar8;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *value;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar9;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar10;
  
  pAVar3 = method->klass;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar3);
  }
  pIVar4 = pAVar3->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  uVar8 = 0;
  pAVar9 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    if (((method->klass->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._State_k__BackingField = 0;
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar6 = *(long *)(extraout_RDX + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar6);
  if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  lVar6 = 0;
  pAVar10 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar6 = *(long *)(extraout_RDX + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
      lVar6 = *(long *)(extraout_RDX + 0x20);
    }
    (pAVar5->fields)._State_k__BackingField = 1;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Value_k__BackingField = (Il2CppObject *)pAVar9;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField,pAVar9);
    if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = uVar8;
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar7 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
  }
  lVar7 = **(long **)(lVar7 + 0xc0);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar7);
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  uVar8 = 0;
  pAVar9 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 == (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a8cf4 == '\0') {
      il2cpp_runtime_helper_023445d0(&"unknown_error");
      g_data_057a8cf4 = '\x01';
      lVar6 = *(long *)(extraout_RDX_00 + 0x20);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = *(long *)(extraout_RDX_00 + 0x20);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
      lVar6 = **(long **)(lVar6 + 0xc0);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = **(long **)(lVar6 + 0xc0);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0();
    }
    pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar6);
    if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    value = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0;
    pAVar10 = pAVar5;
    System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
    if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
      if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      (pAVar5->fields)._State_k__BackingField = 3;
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)pAVar9,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pAVar9 = "unknown_error";
      }
      if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      (pAVar5->fields)._Error_k__BackingField = (System_String_o *)pAVar9;
      il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Error_k__BackingField,pAVar9);
      if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = uVar8;
      return pAVar5;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a8cf5 == '\0') {
      il2cpp_runtime_helper_023445d0(&"unknown_error");
      g_data_057a8cf5 = '\x01';
      lVar6 = *(long *)(extraout_RDX_01 + 0x20);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = *(long *)(extraout_RDX_01 + 0x20);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
      lVar6 = **(long **)(lVar6 + 0xc0);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = **(long **)(lVar6 + 0xc0);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0();
    }
    pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar6);
    if ((*(byte *)(*(long *)(extraout_RDX_01 + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    pAVar9 = pAVar5;
    System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
    if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
      lVar6 = *(long *)(extraout_RDX_01 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
        lVar6 = *(long *)(extraout_RDX_01 + 0x20);
      }
      (pAVar5->fields)._State_k__BackingField = 4;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      (pAVar5->fields)._Value_k__BackingField = (Il2CppObject *)pAVar10;
      il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField);
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        value = "unknown_error";
      }
      if ((*(byte *)(*(long *)(extraout_RDX_01 + 0x20) + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      (pAVar5->fields)._Error_k__BackingField = (System_String_o *)value;
      il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Error_k__BackingField,value);
      if ((*(byte *)(*(long *)(extraout_RDX_01 + 0x20) + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = 1;
      return pAVar5;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pAVar9,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  lVar7 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
    lVar7 = *(long *)(lVar6 + 0x20);
  }
  (pAVar5->fields)._State_k__BackingField = 2;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  (pAVar5->fields)._Value_k__BackingField = (Il2CppObject *)pAVar10;
  il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField,pAVar10);
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = 1;
  return pAVar5;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$LoadingNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___LoadingNoCache (const MethodInfo_331BA70* method);
// 0x341ba70

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___LoadingNoCache
          (MethodInfo_331BA70 *method)

{
  byte bVar1;
  ushort uVar2;
  Il2CppMethodPointer pIVar3;
  code *pcVar4;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  bool_conflict bVar7;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar8;
  Il2CppClass *pIVar9;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar10;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  System_String_o *pSVar16;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar17;
  undefined8 uVar18;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  uint uVar19;
  void *__src;
  undefined8 *puVar20;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar21;
  System_String_o *value;
  Il2CppObject *__this;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long alStack_150 [18];
  undefined8 uStack_c0;
  long alStack_b8 [8];
  ApplicationManagers_Api_AottgQueryResult_TValue__c *apAStack_78 [2];
  ApplicationManagers_Api_AottgQueryResult_TValue__c *local_68;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *local_60;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *local_58;
  uint local_4c;
  System_String_o *local_48;
  
  pAVar8 = method->klass;
  if (((pAVar8->_2).field_0x6d & 1) == 0) {
    pAVar8 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar8);
  }
  pIVar9 = pAVar8->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
  if (((pIVar9->_2).field_0x6d & 1) == 0) {
    pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023052d0(pIVar9);
  pAVar8 = method->klass;
  uVar2 = *(ushort *)&(pAVar8->_2).field_0x6d;
  pAVar11 = pAVar8;
  if ((uVar2 & 1) == 0) {
    pAVar8 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar11 = method->klass;
  }
  pSVar16 = (System_String_o *)
            pAVar8->rgctx_data->_2_ApplicationManagers_Api_AottgQueryResult_TValue___ctor->methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar11 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
  }
  uVar19 = (uint)pAVar11->rgctx_data->_2_ApplicationManagers_Api_AottgQueryResult_TValue___ctor;
  pAVar8 = pAVar10;
  (*(code *)pSVar16)();
  if (pAVar10 != (ApplicationManagers_Api_AottgQueryResult_TValue__c *)0x0) {
    pAVar8 = method->klass;
    uVar2 = *(ushort *)&(pAVar8->_2).field_0x6d;
    pAVar11 = pAVar8;
    if ((uVar2 & 1) == 0) {
      pAVar8 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
      pAVar11 = method->klass;
    }
    pIVar3 = pAVar8->rgctx_data->_3_ApplicationManagers_Api_AottgQueryResult_TValue__set_State->methodPointer;
    if ((uVar2 & 1) == 0) {
      pAVar11 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    }
    (*pIVar3)(pAVar10,0,pAVar11->rgctx_data->_3_ApplicationManagers_Api_AottgQueryResult_TValue__set_State);
    return (ApplicationManagers_Api_AottgQueryResult_TValue__o *)pAVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar12 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar13 = lVar12;
  local_68 = pAVar8;
  local_60 = pAVar8;
  local_4c = uVar19;
  local_48 = pSVar16;
  if ((uVar2 & 1) == 0) {
    apAStack_78[0] = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)0x341bba4;
    lVar12 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar13 = *(long *)(extraout_RDX + 0x20);
  }
  uVar23 = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0xfc);
  lVar12 = -(uVar23 + 0xf & 0xfffffffffffffff0);
  puVar22 = (undefined8 *)((long)apAStack_78 + lVar12 + 8U);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bbe2;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  lVar13 = **(long **)(lVar13 + 0xc0);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bbfd;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bc05;
  local_58 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar13);
  lVar13 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar13 + 0x135);
  lVar14 = lVar13;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bc1f;
    lVar13 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar14 = *(long *)(extraout_RDX + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bc48;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  pAVar17 = local_58;
  lVar13 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
  *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bc5f;
  pAVar21 = pAVar17;
  (*pcVar4)();
  if (pAVar17 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar13 = *(long *)(extraout_RDX + 0x20);
    uVar2 = *(ushort *)(lVar13 + 0x135);
    lVar14 = lVar13;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bc7e;
      lVar13 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
      lVar14 = *(long *)(extraout_RDX + 0x20);
    }
    pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bca7;
      lVar14 = il2cpp_runtime_helper_023009c0();
    }
    pAVar17 = local_58;
    uVar18 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18);
    *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bcc0;
    (*pcVar4)(pAVar17,1,uVar18);
    lVar13 = *(long *)(extraout_RDX + 0x20);
    lVar14 = lVar13;
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bcd7;
      lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
      lVar14 = *(long *)(extraout_RDX + 0x20);
    }
    pAVar8 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)&stack0xffffffffffffff98;
    if (*(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x28) < 0) {
      pAVar8 = local_60;
    }
    *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bd04;
    memcpy(puVar22,pAVar8,uVar23);
    uVar2 = *(ushort *)(lVar14 + 0x135);
    lVar13 = lVar14;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bd19;
      lVar14 = il2cpp_runtime_helper_023009c0(lVar14);
      uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
      lVar13 = *(long *)(extraout_RDX + 0x20);
    }
    uVar18 = **(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bd46;
      lVar14 = il2cpp_runtime_helper_023009c0(lVar13);
      lVar13 = *(long *)(extraout_RDX + 0x20);
      uVar2 = *(ushort *)(lVar13 + 0x135);
      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x20);
    }
    else {
      lVar14 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x20);
    }
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bd80;
      lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
    }
    uVar19 = local_4c;
    pAVar17 = local_58;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x28)) {
      puVar22 = (undefined8 *)*puVar22;
    }
    pcVar4 = *(code **)(lVar14 + 0x10);
    apAStack_78[1] = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)puVar22;
    *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bdb4;
    (*pcVar4)(uVar18,lVar14,pAVar17,apAStack_78 + 1,puVar22);
    lVar13 = *(long *)(extraout_RDX + 0x20);
    uVar2 = *(ushort *)(lVar13 + 0x135);
    lVar14 = lVar13;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bdca;
      lVar13 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
      lVar14 = *(long *)(extraout_RDX + 0x20);
    }
    pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x28);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341bdf3;
      lVar14 = il2cpp_runtime_helper_023009c0();
    }
    pAVar17 = local_58;
    uVar18 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28);
    *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341be0f;
    (*pcVar4)(pAVar17,uVar19 & 0xff,uVar18);
    return pAVar17;
  }
  *(undefined8 *)((long)apAStack_78 + lVar12) = 0x341be26;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)((long)apAStack_78 + lVar12) = &stack0xffffffffffffffe0;
  *(ulong *)((long)alStack_b8 + lVar12 + 0x38) = uVar23;
  *(undefined8 **)((long)alStack_b8 + lVar12 + 0x30) = puVar22;
  *(undefined8 *)((long)alStack_b8 + lVar12 + 0x28) = 0;
  *(long *)((long)alStack_b8 + lVar12 + 0x20) = extraout_RDX;
  *(code **)((long)alStack_b8 + lVar12 + 0x18) = pcVar4;
  *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_b8 + lVar12 + 0x10) = pAVar21;
  *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_b8 + lVar12) = pAVar21;
  lVar14 = *(long *)(lVar13 + 0x20);
  uVar2 = *(ushort *)(lVar14 + 0x135);
  lVar15 = lVar14;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_150 + lVar12 + 0x80) = 0x341be61;
    lVar14 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(lVar13 + 0x20) + 0x135);
    lVar15 = *(long *)(lVar13 + 0x20);
  }
  uVar23 = (ulong)*(uint *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0xfc);
  puVar22 = (undefined8 *)((long)alStack_150 + (lVar12 - (uVar23 + 0xf & 0xfffffffffffffff0)) + 0x88);
  if ((uVar2 & 1) == 0) {
    puVar22[-1] = 0x341be9e;
    lVar15 = il2cpp_runtime_helper_023009c0();
  }
  lVar14 = **(long **)(lVar15 + 0xc0);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    puVar22[-1] = 0x341beb9;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  puVar22[-1] = 0x341bec1;
  pSVar16 = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar14);
  lVar14 = *(long *)(lVar13 + 0x20);
  uVar2 = *(ushort *)(lVar14 + 0x135);
  lVar15 = lVar14;
  if ((uVar2 & 1) == 0) {
    puVar22[-1] = 0x341bed9;
    lVar14 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(lVar13 + 0x20) + 0x135);
    lVar15 = *(long *)(lVar13 + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    puVar22[-1] = 0x341bf01;
    lVar15 = il2cpp_runtime_helper_023009c0();
  }
  uVar19 = (uint)*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x10);
  puVar22[-1] = 0x341bf14;
  value = pSVar16;
  (*pcVar4)();
  if (pSVar16 != (System_String_o *)0x0) {
    lVar14 = *(long *)(lVar13 + 0x20);
    uVar2 = *(ushort *)(lVar14 + 0x135);
    lVar15 = lVar14;
    if ((uVar2 & 1) == 0) {
      puVar22[-1] = 0x341bf32;
      lVar14 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(lVar13 + 0x20) + 0x135);
      lVar15 = *(long *)(lVar13 + 0x20);
    }
    pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      puVar22[-1] = 0x341bf5a;
      lVar15 = il2cpp_runtime_helper_023009c0();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18);
    *(System_String_o **)((long)alStack_b8 + lVar12 + 8) = pSVar16;
    puVar22[-1] = 0x341bf76;
    (*pcVar4)(pSVar16,2,uVar18);
    lVar14 = *(long *)(lVar13 + 0x20);
    lVar15 = lVar14;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      puVar22[-1] = 0x341bf8d;
      lVar14 = il2cpp_runtime_helper_023009c0(lVar14);
      lVar15 = *(long *)(lVar13 + 0x20);
    }
    __src = (void *)((long)alStack_b8 + lVar12);
    if (*(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x28) < 0) {
      __src = *(void **)((long)alStack_b8 + lVar12 + 0x10);
    }
    puVar22[-1] = 0x341bfb9;
    memcpy(puVar22,__src,uVar23);
    uVar2 = *(ushort *)(lVar15 + 0x135);
    lVar14 = lVar15;
    if ((uVar2 & 1) == 0) {
      puVar22[-1] = 0x341bfcf;
      lVar15 = il2cpp_runtime_helper_023009c0(lVar15);
      uVar2 = *(ushort *)(*(long *)(lVar13 + 0x20) + 0x135);
      lVar14 = *(long *)(lVar13 + 0x20);
    }
    *(undefined8 *)((long)alStack_b8 + lVar12 + 0x10) = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      puVar22[-1] = 0x341c000;
      lVar15 = il2cpp_runtime_helper_023009c0(lVar14);
      lVar14 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar14 + 0x135);
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x20);
    }
    else {
      lVar15 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x20);
    }
    if ((uVar2 & 1) == 0) {
      puVar22[-1] = 0x341c03a;
      lVar14 = il2cpp_runtime_helper_023009c0(lVar14);
    }
    puVar24 = puVar22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x28)) {
      puVar24 = (undefined8 *)*puVar22;
    }
    pAVar17 = *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_b8 + lVar12 + 8);
    uVar18 = *(undefined8 *)((long)alStack_b8 + lVar12 + 0x10);
    *(undefined8 **)((long)&uStack_c0 + lVar12) = puVar24;
    pcVar4 = *(code **)(lVar15 + 0x10);
    puVar22[-1] = 0x341c070;
    (*pcVar4)(uVar18,lVar15,pAVar17,(long)&uStack_c0 + lVar12,puVar24);
    lVar12 = *(long *)(lVar13 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar14 = lVar12;
    if ((uVar2 & 1) == 0) {
      puVar22[-1] = 0x341c085;
      lVar12 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(lVar13 + 0x20) + 0x135);
      lVar14 = *(long *)(lVar13 + 0x20);
    }
    pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x28);
    if ((uVar2 & 1) == 0) {
      puVar22[-1] = 0x341c0ad;
      lVar14 = il2cpp_runtime_helper_023009c0();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28);
    puVar22[-1] = 0x341c0c6;
    (*pcVar4)(pAVar17,1,uVar18);
    return pAVar17;
  }
  puVar22[-1] = 0x341c0dd;
  il2cpp_runtime_helper_022b2c90();
  puVar22[-1] = (long)apAStack_78 + lVar12;
  puVar22[-2] = lVar13;
  puVar22[-3] = uVar23;
  puVar22[-4] = 0;
  puVar22[-5] = pcVar4;
  if (g_data_057a8cf6 == '\0') {
    puVar22[-6] = 0x341c158;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf6 = '\x01';
    lVar12 = *(long *)(extraout_RDX_00 + 0x20);
    bVar1 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar12 = *(long *)(extraout_RDX_00 + 0x20);
    bVar1 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    puVar22[-6] = 0x341c174;
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
    lVar12 = **(long **)(lVar12 + 0xc0);
    bVar1 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar12 = **(long **)(lVar12 + 0xc0);
    bVar1 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    puVar22[-6] = 0x341c11f;
    lVar12 = il2cpp_runtime_helper_023009c0();
  }
  puVar22[-6] = 0x341c127;
  pAVar17 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar12);
  lVar12 = *(long *)(extraout_RDX_00 + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar13 = lVar12;
  if ((uVar2 & 1) == 0) {
    puVar22[-6] = 0x341c13f;
    lVar12 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
    lVar13 = *(long *)(extraout_RDX_00 + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    puVar22[-6] = 0x341c1a4;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  uVar18 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x10);
  puVar22[-6] = 0x341c1b7;
  pAVar21 = pAVar17;
  (*pcVar4)();
  if (pAVar17 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar12 = *(long *)(extraout_RDX_00 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar13 = lVar12;
    if ((uVar2 & 1) == 0) {
      puVar22[-6] = 0x341c1d5;
      lVar12 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
      lVar13 = *(long *)(extraout_RDX_00 + 0x20);
    }
    pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      puVar22[-6] = 0x341c1fd;
      lVar13 = il2cpp_runtime_helper_023009c0();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x18);
    puVar22[-6] = 0x341c215;
    (*pcVar4)(pAVar17,3,uVar18);
    puVar22[-6] = 0x341c21f;
    bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      value = "unknown_error";
    }
    lVar12 = *(long *)(extraout_RDX_00 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar13 = lVar12;
    if ((uVar2 & 1) == 0) {
      puVar22[-6] = 0x341c242;
      lVar12 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
      lVar13 = *(long *)(extraout_RDX_00 + 0x20);
    }
    pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x30);
    if ((uVar2 & 1) == 0) {
      puVar22[-6] = 0x341c26a;
      lVar13 = il2cpp_runtime_helper_023009c0();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x30);
    puVar22[-6] = 0x341c280;
    (*pcVar4)(pAVar17,value,uVar18);
    lVar12 = *(long *)(extraout_RDX_00 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar13 = lVar12;
    if ((uVar2 & 1) == 0) {
      puVar22[-6] = 0x341c295;
      lVar12 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
      lVar13 = *(long *)(extraout_RDX_00 + 0x20);
    }
    pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x28);
    if ((uVar2 & 1) == 0) {
      puVar22[-6] = 0x341c2bd;
      lVar13 = il2cpp_runtime_helper_023009c0();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x28);
    puVar22[-6] = 0x341c2d4;
    (*pcVar4)(pAVar17,(ulong)uVar19 & 0xff,uVar18);
    return pAVar17;
  }
  puVar22[-6] = 0x341c2e5;
  il2cpp_runtime_helper_022b2c90();
  puVar22[-6] = pcVar4;
  puVar22[-7] = value;
  puVar22[-8] = (ulong)uVar19;
  puVar22[-9] = puVar22;
  puVar22[-10] = 0;
  puVar22[-0xb] = extraout_RDX_00;
  puVar22[-0xd] = uVar18;
  puVar22[-0xe] = pAVar21;
  puVar22[-0xf] = pAVar21;
  if (g_data_057a8cf7 == '\0') {
    puVar22[-0x11] = 0x341c325;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf7 = '\x01';
  }
  lVar12 = *(long *)(extraout_RDX_01 + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar13 = lVar12;
  if ((uVar2 & 1) == 0) {
    puVar22[-0x11] = 0x341c342;
    lVar12 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_01 + 0x20) + 0x135);
    lVar13 = *(long *)(extraout_RDX_01 + 0x20);
  }
  uVar23 = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0xfc);
  puVar24 = (undefined8 *)((long)puVar22 + (-0x80 - (uVar23 + 0xf & 0xfffffffffffffff0)));
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c380;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  lVar12 = **(long **)(lVar13 + 0xc0);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    puVar24[-1] = 0x341c39b;
    lVar12 = il2cpp_runtime_helper_023009c0();
  }
  puVar24[-1] = 0x341c3a3;
  uVar18 = il2cpp_runtime_helper_023052d0(lVar12);
  puVar22[-0xc] = uVar18;
  lVar12 = *(long *)(extraout_RDX_01 + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c3bd;
    lVar12 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_01 + 0x20) + 0x135);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c3e6;
    il2cpp_runtime_helper_023009c0();
  }
  pIVar5 = (Il2CppObject *)puVar22[-0xc];
  puVar24[-1] = 0x341c3fd;
  __this = pIVar5;
  (*pcVar4)();
  if (pIVar5 == (Il2CppObject *)0x0) {
    puVar24[-1] = 0x341c633;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  lVar12 = *(long *)(extraout_RDX_01 + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar13 = lVar12;
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c41c;
    lVar12 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_01 + 0x20) + 0x135);
    lVar13 = *(long *)(extraout_RDX_01 + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x18);
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c445;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  uVar18 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x18);
  uVar6 = puVar22[-0xc];
  puVar24[-1] = 0x341c45e;
  (*pcVar4)(uVar6,4,uVar18);
  lVar12 = *(long *)(extraout_RDX_01 + 0x20);
  lVar13 = lVar12;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    puVar24[-1] = 0x341c475;
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
    lVar13 = *(long *)(extraout_RDX_01 + 0x20);
  }
  puVar20 = puVar22 + -0xf;
  if (*(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x28) < 0) {
    puVar20 = (undefined8 *)puVar22[-0xe];
  }
  puVar24[-1] = 0x341c4a2;
  memcpy(puVar24,puVar20,uVar23);
  uVar2 = *(ushort *)(lVar13 + 0x135);
  lVar12 = lVar13;
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c4b7;
    lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_01 + 0x20) + 0x135);
    lVar12 = *(long *)(extraout_RDX_01 + 0x20);
  }
  uVar18 = **(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c4e4;
    lVar13 = il2cpp_runtime_helper_023009c0(lVar12);
    lVar12 = *(long *)(extraout_RDX_01 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x20);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
  }
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c51e;
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
  }
  puVar20 = puVar24;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x28)) {
    puVar20 = (undefined8 *)*puVar24;
  }
  pSVar16 = (System_String_o *)puVar22[-0xd];
  puVar22[-0x10] = puVar20;
  uVar6 = puVar22[-0xc];
  pcVar4 = *(code **)(lVar13 + 0x10);
  puVar24[-1] = 0x341c552;
  (*pcVar4)(uVar18,lVar13,uVar6,puVar22 + -0x10,puVar20);
  puVar24[-1] = 0x341c55c;
  bVar7 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pSVar16 = "unknown_error";
  }
  lVar12 = *(long *)(extraout_RDX_01 + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar13 = lVar12;
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c580;
    lVar12 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_01 + 0x20) + 0x135);
    lVar13 = *(long *)(extraout_RDX_01 + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x30);
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c5a9;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  uVar18 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x30);
  uVar6 = puVar22[-0xc];
  puVar24[-1] = 0x341c5c0;
  (*pcVar4)(uVar6,pSVar16,uVar18);
  lVar12 = *(long *)(extraout_RDX_01 + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar13 = lVar12;
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c5d6;
    lVar12 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_01 + 0x20) + 0x135);
    lVar13 = *(long *)(extraout_RDX_01 + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x28);
  if ((uVar2 & 1) == 0) {
    puVar24[-1] = 0x341c5ff;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  uVar18 = *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x28);
  pAVar17 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)puVar22[-0xc];
  puVar24[-1] = 0x341c61c;
  (*pcVar4)(pAVar17,1,uVar18);
  return pAVar17;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$ReadyFresh
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh (Il2CppObject* value, bool isFromCache, const MethodInfo_331B380* method);
// 0x341b380

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
          (Il2CppObject *value,bool_conflict isFromCache,MethodInfo_331B380 *method)

{
  byte bVar1;
  bool_conflict bVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar5;
  long lVar6;
  long lVar7;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined1 uVar8;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *value_00;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar9;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar10;
  
  pAVar3 = method->klass;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar3);
  }
  pIVar4 = pAVar3->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  lVar7 = 0;
  pAVar9 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pAVar3 = method->klass;
    if (((pAVar3->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
      pAVar3 = method->klass;
    }
    (pAVar5->fields)._State_k__BackingField = 1;
    if (((pAVar3->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Value_k__BackingField = value;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField,value);
    if (((method->klass->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    *(char *)&(pAVar5->fields)._IsFromCache_k__BackingField = (char)isFromCache;
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar6 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar6);
  if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  uVar8 = 0;
  pAVar10 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
      lVar6 = *(long *)(lVar7 + 0x20);
    }
    (pAVar5->fields)._State_k__BackingField = 2;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Value_k__BackingField = (Il2CppObject *)pAVar9;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField,pAVar9);
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = 1;
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a8cf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf4 = '\x01';
    lVar7 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
    lVar7 = **(long **)(lVar7 + 0xc0);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = **(long **)(lVar7 + 0xc0);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar7);
  if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  value_00 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0;
  pAVar9 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._State_k__BackingField = 3;
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)pAVar10,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pAVar10 = "unknown_error";
    }
    if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Error_k__BackingField = (System_String_o *)pAVar10;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Error_k__BackingField,pAVar10);
    if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = uVar8;
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a8cf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf5 = '\x01';
    lVar7 = *(long *)(extraout_RDX_00 + 0x20);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = *(long *)(extraout_RDX_00 + 0x20);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
    lVar7 = **(long **)(lVar7 + 0xc0);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = **(long **)(lVar7 + 0xc0);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar7);
  if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  pAVar10 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar7 = *(long *)(extraout_RDX_00 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
      lVar7 = *(long *)(extraout_RDX_00 + 0x20);
    }
    (pAVar5->fields)._State_k__BackingField = 4;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Value_k__BackingField = (Il2CppObject *)pAVar9;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField);
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      value_00 = "unknown_error";
    }
    if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Error_k__BackingField = (System_String_o *)value_00;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Error_k__BackingField,value_00);
    if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = 1;
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pAVar10,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$ReadyFresh
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyFresh (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, bool isFromCache, const MethodInfo_331BB70* method);
// 0x341bb70

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyFresh
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,bool_conflict isFromCache,
          MethodInfo_331BB70 *method)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  bool_conflict bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  System_String_o *pSVar11;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar12;
  undefined8 uVar13;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  undefined4 in_register_00000014;
  long extraout_RDX;
  long extraout_RDX_00;
  uint uVar14;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  void *__src_00;
  undefined8 *puVar15;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar16;
  System_String_o *value_00;
  Il2CppObject *__this;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long alStack_138 [18];
  undefined8 uStack_a8;
  long alStack_a0 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_60 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_48;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAStack_40;
  uint uStack_34;
  
  lVar10 = CONCAT44(in_register_00000014,isFromCache);
  pUStack_50 = value.klass;
  uStack_34 = (uint)value.monitor;
  lVar7 = *(long *)(lVar10 + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  pUStack_48 = pUStack_50;
  if ((uVar2 & 1) == 0) {
    apUStack_60[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x341bba4;
    lVar7 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
    lVar8 = *(long *)(lVar10 + 0x20);
  }
  uVar18 = (ulong)*(uint *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0xfc);
  lVar7 = -(uVar18 + 0xf & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)((long)apUStack_60 + lVar7 + 8U);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bbe2;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  lVar8 = **(long **)(lVar8 + 0xc0);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bbfd;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bc05;
  pAStack_40 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar8);
  lVar8 = *(long *)(lVar10 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar9 = lVar8;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bc1f;
    lVar8 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
    lVar9 = *(long *)(lVar10 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bc48;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  pAVar12 = pAStack_40;
  lVar8 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
  *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bc5f;
  pAVar16 = pAVar12;
  (*pcVar3)();
  if (pAVar12 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar8 = *(long *)(lVar10 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bc7e;
      lVar8 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
      lVar9 = *(long *)(lVar10 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bca7;
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    pAVar12 = pAStack_40;
    uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
    *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bcc0;
    (*pcVar3)(pAVar12,1,uVar13);
    lVar8 = *(long *)(lVar10 + 0x20);
    lVar9 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bcd7;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
      lVar9 = *(long *)(lVar10 + 0x20);
    }
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb0;
    if (*(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x28) < 0) {
      __src = pUStack_48;
    }
    *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bd04;
    memcpy(puVar17,__src,uVar18);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar8 = lVar9;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bd19;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
      uVar2 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
      lVar8 = *(long *)(lVar10 + 0x20);
    }
    uVar13 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bd46;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar8);
      lVar8 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x20);
    }
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bd80;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    uVar14 = uStack_34;
    pAVar12 = pAStack_40;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x28)) {
      puVar17 = (undefined8 *)*puVar17;
    }
    pcVar3 = *(code **)(lVar9 + 0x10);
    apUStack_60[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)puVar17;
    *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bdb4;
    (*pcVar3)(uVar13,lVar9,pAVar12,apUStack_60 + 1,puVar17);
    lVar8 = *(long *)(lVar10 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bdca;
      lVar8 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
      lVar9 = *(long *)(lVar10 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341bdf3;
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    pAVar12 = pAStack_40;
    uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28);
    *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341be0f;
    (*pcVar3)(pAVar12,uVar14 & 0xff,uVar13);
    return pAVar12;
  }
  *(undefined8 *)((long)apUStack_60 + lVar7) = 0x341be26;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)((long)apUStack_60 + lVar7) = &stack0xfffffffffffffff8;
  *(ulong *)((long)alStack_a0 + lVar7 + 0x38) = uVar18;
  *(undefined8 **)((long)alStack_a0 + lVar7 + 0x30) = puVar17;
  *(undefined8 *)((long)alStack_a0 + lVar7 + 0x28) = 0;
  *(long *)((long)alStack_a0 + lVar7 + 0x20) = lVar10;
  *(code **)((long)alStack_a0 + lVar7 + 0x18) = pcVar3;
  *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_a0 + lVar7 + 0x10) = pAVar16;
  *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_a0 + lVar7) = pAVar16;
  lVar10 = *(long *)(lVar8 + 0x20);
  uVar2 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_138 + lVar7 + 0x80) = 0x341be61;
    lVar10 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
    lVar9 = *(long *)(lVar8 + 0x20);
  }
  uVar18 = (ulong)*(uint *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0xfc);
  puVar17 = (undefined8 *)((long)alStack_138 + (lVar7 - (uVar18 + 0xf & 0xfffffffffffffff0)) + 0x88);
  if ((uVar2 & 1) == 0) {
    puVar17[-1] = 0x341be9e;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  lVar10 = **(long **)(lVar9 + 0xc0);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    puVar17[-1] = 0x341beb9;
    lVar10 = il2cpp_runtime_helper_023009c0();
  }
  puVar17[-1] = 0x341bec1;
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023052d0(lVar10);
  lVar10 = *(long *)(lVar8 + 0x20);
  uVar2 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar2 & 1) == 0) {
    puVar17[-1] = 0x341bed9;
    lVar10 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
    lVar9 = *(long *)(lVar8 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    puVar17[-1] = 0x341bf01;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  uVar14 = (uint)*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10);
  puVar17[-1] = 0x341bf14;
  value_00 = pSVar11;
  (*pcVar3)();
  if (pSVar11 != (System_String_o *)0x0) {
    lVar10 = *(long *)(lVar8 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar9 = lVar10;
    if ((uVar2 & 1) == 0) {
      puVar17[-1] = 0x341bf32;
      lVar10 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
      lVar9 = *(long *)(lVar8 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      puVar17[-1] = 0x341bf5a;
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
    *(System_String_o **)((long)alStack_a0 + lVar7 + 8) = pSVar11;
    puVar17[-1] = 0x341bf76;
    (*pcVar3)(pSVar11,2,uVar13);
    lVar10 = *(long *)(lVar8 + 0x20);
    lVar9 = lVar10;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      puVar17[-1] = 0x341bf8d;
      lVar10 = il2cpp_runtime_helper_023009c0(lVar10);
      lVar9 = *(long *)(lVar8 + 0x20);
    }
    __src_00 = (void *)((long)alStack_a0 + lVar7);
    if (*(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x28) < 0) {
      __src_00 = *(void **)((long)alStack_a0 + lVar7 + 0x10);
    }
    puVar17[-1] = 0x341bfb9;
    memcpy(puVar17,__src_00,uVar18);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar2 & 1) == 0) {
      puVar17[-1] = 0x341bfcf;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
      uVar2 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
      lVar10 = *(long *)(lVar8 + 0x20);
    }
    *(undefined8 *)((long)alStack_a0 + lVar7 + 0x10) = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      puVar17[-1] = 0x341c000;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar10);
      lVar10 = *(long *)(lVar8 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
    }
    if ((uVar2 & 1) == 0) {
      puVar17[-1] = 0x341c03a;
      lVar10 = il2cpp_runtime_helper_023009c0(lVar10);
    }
    puVar19 = puVar17;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x28)) {
      puVar19 = (undefined8 *)*puVar17;
    }
    pAVar12 = *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_a0 + lVar7 + 8);
    uVar13 = *(undefined8 *)((long)alStack_a0 + lVar7 + 0x10);
    *(undefined8 **)((long)&uStack_a8 + lVar7) = puVar19;
    pcVar3 = *(code **)(lVar9 + 0x10);
    puVar17[-1] = 0x341c070;
    (*pcVar3)(uVar13,lVar9,pAVar12,(long)&uStack_a8 + lVar7,puVar19);
    lVar7 = *(long *)(lVar8 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar10 = lVar7;
    if ((uVar2 & 1) == 0) {
      puVar17[-1] = 0x341c085;
      lVar7 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
      lVar10 = *(long *)(lVar8 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((uVar2 & 1) == 0) {
      puVar17[-1] = 0x341c0ad;
      lVar10 = il2cpp_runtime_helper_023009c0();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28);
    puVar17[-1] = 0x341c0c6;
    (*pcVar3)(pAVar12,1,uVar13);
    return pAVar12;
  }
  puVar17[-1] = 0x341c0dd;
  il2cpp_runtime_helper_022b2c90();
  puVar17[-1] = (long)apUStack_60 + lVar7;
  puVar17[-2] = lVar8;
  puVar17[-3] = uVar18;
  puVar17[-4] = 0;
  puVar17[-5] = pcVar3;
  if (g_data_057a8cf6 == '\0') {
    puVar17[-6] = 0x341c158;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf6 = '\x01';
    lVar7 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    puVar17[-6] = 0x341c174;
    lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
    lVar7 = **(long **)(lVar7 + 0xc0);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = **(long **)(lVar7 + 0xc0);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    puVar17[-6] = 0x341c11f;
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  puVar17[-6] = 0x341c127;
  pAVar12 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar7);
  lVar7 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar2 & 1) == 0) {
    puVar17[-6] = 0x341c13f;
    lVar7 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar8 = *(long *)(extraout_RDX + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    puVar17[-6] = 0x341c1a4;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10);
  puVar17[-6] = 0x341c1b7;
  pAVar16 = pAVar12;
  (*pcVar3)();
  if (pAVar12 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar7 = *(long *)(extraout_RDX + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar2 & 1) == 0) {
      puVar17[-6] = 0x341c1d5;
      lVar7 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
      lVar8 = *(long *)(extraout_RDX + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      puVar17[-6] = 0x341c1fd;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
    puVar17[-6] = 0x341c215;
    (*pcVar3)(pAVar12,3,uVar13);
    puVar17[-6] = 0x341c21f;
    bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      value_00 = "unknown_error";
    }
    lVar7 = *(long *)(extraout_RDX + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar2 & 1) == 0) {
      puVar17[-6] = 0x341c242;
      lVar7 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
      lVar8 = *(long *)(extraout_RDX + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((uVar2 & 1) == 0) {
      puVar17[-6] = 0x341c26a;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x30);
    puVar17[-6] = 0x341c280;
    (*pcVar3)(pAVar12,value_00,uVar13);
    lVar7 = *(long *)(extraout_RDX + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar2 & 1) == 0) {
      puVar17[-6] = 0x341c295;
      lVar7 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
      lVar8 = *(long *)(extraout_RDX + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((uVar2 & 1) == 0) {
      puVar17[-6] = 0x341c2bd;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
    puVar17[-6] = 0x341c2d4;
    (*pcVar3)(pAVar12,(ulong)uVar14 & 0xff,uVar13);
    return pAVar12;
  }
  puVar17[-6] = 0x341c2e5;
  il2cpp_runtime_helper_022b2c90();
  puVar17[-6] = pcVar3;
  puVar17[-7] = value_00;
  puVar17[-8] = (ulong)uVar14;
  puVar17[-9] = puVar17;
  puVar17[-10] = 0;
  puVar17[-0xb] = extraout_RDX;
  puVar17[-0xd] = uVar13;
  puVar17[-0xe] = pAVar16;
  puVar17[-0xf] = pAVar16;
  if (g_data_057a8cf7 == '\0') {
    puVar17[-0x11] = 0x341c325;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf7 = '\x01';
  }
  lVar7 = *(long *)(extraout_RDX_00 + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar2 & 1) == 0) {
    puVar17[-0x11] = 0x341c342;
    lVar7 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
    lVar8 = *(long *)(extraout_RDX_00 + 0x20);
  }
  uVar18 = (ulong)*(uint *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0xfc);
  puVar19 = (undefined8 *)((long)puVar17 + (-0x80 - (uVar18 + 0xf & 0xfffffffffffffff0)));
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c380;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  lVar7 = **(long **)(lVar8 + 0xc0);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    puVar19[-1] = 0x341c39b;
    lVar7 = il2cpp_runtime_helper_023009c0();
  }
  puVar19[-1] = 0x341c3a3;
  uVar13 = il2cpp_runtime_helper_023052d0(lVar7);
  puVar17[-0xc] = uVar13;
  lVar7 = *(long *)(extraout_RDX_00 + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c3bd;
    lVar7 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c3e6;
    il2cpp_runtime_helper_023009c0();
  }
  pIVar4 = (Il2CppObject *)puVar17[-0xc];
  puVar19[-1] = 0x341c3fd;
  __this = pIVar4;
  (*pcVar3)();
  if (pIVar4 == (Il2CppObject *)0x0) {
    puVar19[-1] = 0x341c633;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  lVar7 = *(long *)(extraout_RDX_00 + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c41c;
    lVar7 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
    lVar8 = *(long *)(extraout_RDX_00 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x18);
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c445;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
  uVar5 = puVar17[-0xc];
  puVar19[-1] = 0x341c45e;
  (*pcVar3)(uVar5,4,uVar13);
  lVar7 = *(long *)(extraout_RDX_00 + 0x20);
  lVar8 = lVar7;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    puVar19[-1] = 0x341c475;
    lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
    lVar8 = *(long *)(extraout_RDX_00 + 0x20);
  }
  puVar15 = puVar17 + -0xf;
  if (*(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x28) < 0) {
    puVar15 = (undefined8 *)puVar17[-0xe];
  }
  puVar19[-1] = 0x341c4a2;
  memcpy(puVar19,puVar15,uVar18);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar7 = lVar8;
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c4b7;
    lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
    lVar7 = *(long *)(extraout_RDX_00 + 0x20);
  }
  uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c4e4;
    lVar8 = il2cpp_runtime_helper_023009c0(lVar7);
    lVar7 = *(long *)(extraout_RDX_00 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x20);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
  }
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c51e;
    lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
  }
  puVar15 = puVar19;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x28)) {
    puVar15 = (undefined8 *)*puVar19;
  }
  pSVar11 = (System_String_o *)puVar17[-0xd];
  puVar17[-0x10] = puVar15;
  uVar5 = puVar17[-0xc];
  pcVar3 = *(code **)(lVar8 + 0x10);
  puVar19[-1] = 0x341c552;
  (*pcVar3)(uVar13,lVar8,uVar5,puVar17 + -0x10,puVar15);
  puVar19[-1] = 0x341c55c;
  bVar6 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pSVar11 = "unknown_error";
  }
  lVar7 = *(long *)(extraout_RDX_00 + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c580;
    lVar7 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
    lVar8 = *(long *)(extraout_RDX_00 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x30);
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c5a9;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x30);
  uVar5 = puVar17[-0xc];
  puVar19[-1] = 0x341c5c0;
  (*pcVar3)(uVar5,pSVar11,uVar13);
  lVar7 = *(long *)(extraout_RDX_00 + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c5d6;
    lVar7 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
    lVar8 = *(long *)(extraout_RDX_00 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x28);
  if ((uVar2 & 1) == 0) {
    puVar19[-1] = 0x341c5ff;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
  pAVar12 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)puVar17[-0xc];
  puVar19[-1] = 0x341c61c;
  (*pcVar3)(pAVar12,1,uVar13);
  return pAVar12;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing (Il2CppObject* value, const MethodInfo_331B450* method);
// 0x341b450

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
          (Il2CppObject *value,MethodInfo_331B450 *method)

{
  byte bVar1;
  bool_conflict bVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar5;
  long lVar6;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined1 uVar7;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *value_00;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar8;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar9;
  
  pAVar3 = method->klass;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar3);
  }
  pIVar4 = pAVar3->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  uVar7 = 0;
  pAVar8 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pAVar3 = method->klass;
    if (((pAVar3->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
      pAVar3 = method->klass;
    }
    (pAVar5->fields)._State_k__BackingField = 2;
    if (((pAVar3->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Value_k__BackingField = value;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField,value);
    if (((method->klass->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = 1;
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a8cf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf4 = '\x01';
    lVar6 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  else {
    lVar6 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
    lVar6 = **(long **)(lVar6 + 0xc0);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  else {
    lVar6 = **(long **)(lVar6 + 0xc0);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar6);
  if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  value_00 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0;
  pAVar9 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 == (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a8cf5 == '\0') {
      il2cpp_runtime_helper_023445d0(&"unknown_error");
      g_data_057a8cf5 = '\x01';
      lVar6 = *(long *)(extraout_RDX_00 + 0x20);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = *(long *)(extraout_RDX_00 + 0x20);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
      lVar6 = **(long **)(lVar6 + 0xc0);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = **(long **)(lVar6 + 0xc0);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0();
    }
    pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar6);
    if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    pAVar8 = pAVar5;
    System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
    if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
      lVar6 = *(long *)(extraout_RDX_00 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
        lVar6 = *(long *)(extraout_RDX_00 + 0x20);
      }
      (pAVar5->fields)._State_k__BackingField = 4;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      (pAVar5->fields)._Value_k__BackingField = (Il2CppObject *)pAVar9;
      il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField);
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        value_00 = "unknown_error";
      }
      if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      (pAVar5->fields)._Error_k__BackingField = (System_String_o *)value_00;
      il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Error_k__BackingField,value_00);
      if ((*(byte *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135) & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = 1;
      return pAVar5;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pAVar8,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  (pAVar5->fields)._State_k__BackingField = 3;
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)pAVar8,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pAVar8 = "unknown_error";
  }
  if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  (pAVar5->fields)._Error_k__BackingField = (System_String_o *)pAVar8;
  il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Error_k__BackingField,pAVar8);
  if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = uVar7;
  return pAVar5;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_331BE30* method);
// 0x341be30

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_331BE30 *method)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool_conflict bVar7;
  long lVar8;
  long lVar9;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar10;
  long lVar11;
  undefined8 uVar12;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  long extraout_RDX;
  long extraout_RDX_00;
  uint uVar13;
  void *pvVar14;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *value_00;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar15;
  Il2CppObject *__this;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long alStack_d0 [14];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_60 [3];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *local_40;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_38;
  
  pvVar14 = value.monitor;
  local_48 = value.klass;
  lVar8 = *(long *)((long)pvVar14 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar9 = lVar8;
  local_38 = local_48;
  if ((uVar2 & 1) == 0) {
    apUStack_60[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x341be61;
    lVar8 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)((long)pvVar14 + 0x20) + 0x135);
    lVar9 = *(long *)((long)pvVar14 + 0x20);
  }
  uVar17 = (ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0xfc);
  lVar8 = -(uVar17 + 0xf & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)apUStack_60 + lVar8 + 8);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341be9e;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  lVar9 = **(long **)(lVar9 + 0xc0);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341beb9;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bec1;
  pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar9);
  lVar9 = *(long *)((long)pvVar14 + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar11 = lVar9;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bed9;
    lVar9 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)((long)pvVar14 + 0x20) + 0x135);
    lVar11 = *(long *)((long)pvVar14 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bf01;
    lVar11 = il2cpp_runtime_helper_023009c0();
  }
  uVar13 = (uint)*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x10);
  *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bf14;
  value_00 = pAVar10;
  (*pcVar3)();
  if (pAVar10 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar9 = *(long *)((long)pvVar14 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar11 = lVar9;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bf32;
      lVar9 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)((long)pvVar14 + 0x20) + 0x135);
      lVar11 = *(long *)((long)pvVar14 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bf5a;
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
    local_40 = pAVar10;
    *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bf76;
    (*pcVar3)(pAVar10,2,uVar12);
    lVar9 = *(long *)((long)pvVar14 + 0x20);
    lVar11 = lVar9;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bf8d;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
      lVar11 = *(long *)((long)pvVar14 + 0x20);
    }
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x28) < 0) {
      __src = local_38;
    }
    *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bfb9;
    memcpy(puVar16,__src,uVar17);
    uVar2 = *(ushort *)(lVar11 + 0x135);
    lVar9 = lVar11;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341bfcf;
      lVar11 = il2cpp_runtime_helper_023009c0(lVar11);
      uVar2 = *(ushort *)(*(long *)((long)pvVar14 + 0x20) + 0x135);
      lVar9 = *(long *)((long)pvVar14 + 0x20);
    }
    local_38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)
               **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341c000;
      lVar11 = il2cpp_runtime_helper_023009c0(lVar9);
      lVar9 = *(long *)((long)pvVar14 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
    }
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341c03a;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
    }
    pcVar6 = (char *)local_38;
    pAVar10 = local_40;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x28)) {
      puVar16 = (undefined8 *)*puVar16;
    }
    pcVar3 = *(code **)(lVar11 + 0x10);
    apUStack_60[2] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)puVar16;
    *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341c070;
    (*pcVar3)(pcVar6,lVar11,pAVar10,apUStack_60 + 2,puVar16);
    lVar9 = *(long *)((long)pvVar14 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar11 = lVar9;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341c085;
      lVar9 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)((long)pvVar14 + 0x20) + 0x135);
      lVar11 = *(long *)((long)pvVar14 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341c0ad;
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28);
    *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341c0c6;
    (*pcVar3)(pAVar10,1,uVar12);
    return pAVar10;
  }
  *(undefined8 *)((long)apUStack_60 + lVar8) = 0x341c0dd;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)((long)apUStack_60 + lVar8) = &stack0xfffffffffffffff8;
  *(void **)((long)alStack_d0 + lVar8 + 0x68) = pvVar14;
  *(ulong *)((long)alStack_d0 + lVar8 + 0x60) = uVar17;
  *(undefined8 *)((long)alStack_d0 + lVar8 + 0x58) = 0;
  *(code **)((long)alStack_d0 + lVar8 + 0x50) = pcVar3;
  if (g_data_057a8cf6 == '\0') {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c158;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf6 = '\x01';
    lVar9 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar9 + 0x135);
  }
  else {
    lVar9 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar9 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c174;
    lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
    lVar9 = **(long **)(lVar9 + 0xc0);
    bVar1 = *(byte *)(lVar9 + 0x135);
  }
  else {
    lVar9 = **(long **)(lVar9 + 0xc0);
    bVar1 = *(byte *)(lVar9 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c11f;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c127;
  pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar9);
  lVar9 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar11 = lVar9;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c13f;
    lVar9 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar11 = *(long *)(extraout_RDX + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c1a4;
    lVar11 = il2cpp_runtime_helper_023009c0();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x10);
  *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c1b7;
  pAVar15 = pAVar10;
  (*pcVar3)();
  if (pAVar10 == (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c2e5;
    il2cpp_runtime_helper_022b2c90();
    *(code **)((long)alStack_d0 + lVar8 + 0x48) = pcVar3;
    *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_d0 + lVar8 + 0x40) = value_00;
    *(ulong *)((long)alStack_d0 + lVar8 + 0x38) = (ulong)uVar13;
    *(undefined8 **)((long)alStack_d0 + lVar8 + 0x30) = puVar16;
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x28) = 0;
    *(long *)((long)alStack_d0 + lVar8 + 0x20) = extraout_RDX;
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x10) = uVar12;
    *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_d0 + lVar8 + 8) = pAVar15;
    *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_d0 + lVar8) = pAVar15;
    if (g_data_057a8cf7 == '\0') {
      *(undefined8 *)((long)&uStack_e0 + lVar8) = 0x341c325;
      il2cpp_runtime_helper_023445d0(&"unknown_error");
      g_data_057a8cf7 = '\x01';
    }
    lVar9 = *(long *)(extraout_RDX_00 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar11 = lVar9;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)&uStack_e0 + lVar8) = 0x341c342;
      lVar9 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
      lVar11 = *(long *)(extraout_RDX_00 + 0x20);
    }
    uVar17 = (ulong)*(uint *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0xfc);
    puVar16 = (undefined8 *)((long)&uStack_d8 + (lVar8 - (uVar17 + 0xf & 0xfffffffffffffff0)));
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c380;
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    lVar9 = **(long **)(lVar11 + 0xc0);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      puVar16[-1] = 0x341c39b;
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    puVar16[-1] = 0x341c3a3;
    uVar12 = il2cpp_runtime_helper_023052d0(lVar9);
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x18) = uVar12;
    lVar9 = *(long *)(extraout_RDX_00 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c3bd;
      lVar9 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x10);
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c3e6;
      il2cpp_runtime_helper_023009c0();
    }
    pIVar4 = *(Il2CppObject **)((long)alStack_d0 + lVar8 + 0x18);
    puVar16[-1] = 0x341c3fd;
    __this = pIVar4;
    (*pcVar3)();
    if (pIVar4 == (Il2CppObject *)0x0) {
      puVar16[-1] = 0x341c633;
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    lVar9 = *(long *)(extraout_RDX_00 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar11 = lVar9;
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c41c;
      lVar9 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
      lVar11 = *(long *)(extraout_RDX_00 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c445;
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
    uVar5 = *(undefined8 *)((long)alStack_d0 + lVar8 + 0x18);
    puVar16[-1] = 0x341c45e;
    (*pcVar3)(uVar5,4,uVar12);
    lVar9 = *(long *)(extraout_RDX_00 + 0x20);
    lVar11 = lVar9;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      puVar16[-1] = 0x341c475;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
      lVar11 = *(long *)(extraout_RDX_00 + 0x20);
    }
    pvVar14 = (void *)((long)alStack_d0 + lVar8);
    if (*(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x28) < 0) {
      pvVar14 = *(void **)((long)alStack_d0 + lVar8 + 8);
    }
    puVar16[-1] = 0x341c4a2;
    memcpy(puVar16,pvVar14,uVar17);
    uVar2 = *(ushort *)(lVar11 + 0x135);
    lVar9 = lVar11;
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c4b7;
      lVar11 = il2cpp_runtime_helper_023009c0(lVar11);
      uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
      lVar9 = *(long *)(extraout_RDX_00 + 0x20);
    }
    uVar12 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c4e4;
      lVar11 = il2cpp_runtime_helper_023009c0(lVar9);
      lVar9 = *(long *)(extraout_RDX_00 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
    }
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c51e;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
    }
    puVar18 = puVar16;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x28)) {
      puVar18 = (undefined8 *)*puVar16;
    }
    pAVar10 = *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_d0 + lVar8 + 0x10);
    *(undefined8 **)((long)&uStack_d8 + lVar8) = puVar18;
    uVar5 = *(undefined8 *)((long)alStack_d0 + lVar8 + 0x18);
    pcVar3 = *(code **)(lVar11 + 0x10);
    puVar16[-1] = 0x341c552;
    (*pcVar3)(uVar12,lVar11,uVar5,(long)&uStack_d8 + lVar8,puVar18);
    puVar16[-1] = 0x341c55c;
    bVar7 = System_String__IsNullOrEmpty((System_String_o *)pAVar10,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pAVar10 = "unknown_error";
    }
    lVar9 = *(long *)(extraout_RDX_00 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar11 = lVar9;
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c580;
      lVar9 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
      lVar11 = *(long *)(extraout_RDX_00 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x30);
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c5a9;
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30);
    uVar5 = *(undefined8 *)((long)alStack_d0 + lVar8 + 0x18);
    puVar16[-1] = 0x341c5c0;
    (*pcVar3)(uVar5,pAVar10,uVar12);
    lVar9 = *(long *)(extraout_RDX_00 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar11 = lVar9;
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c5d6;
      lVar9 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)(extraout_RDX_00 + 0x20) + 0x135);
      lVar11 = *(long *)(extraout_RDX_00 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((uVar2 & 1) == 0) {
      puVar16[-1] = 0x341c5ff;
      lVar11 = il2cpp_runtime_helper_023009c0();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28);
    pAVar10 = *(ApplicationManagers_Api_AottgQueryResult_TValue__o **)((long)alStack_d0 + lVar8 + 0x18);
    puVar16[-1] = 0x341c61c;
    (*pcVar3)(pAVar10,1,uVar12);
    return pAVar10;
  }
  lVar9 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar11 = lVar9;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c1d5;
    lVar9 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar11 = *(long *)(extraout_RDX + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x18);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c1fd;
    lVar11 = il2cpp_runtime_helper_023009c0();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
  *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c215;
  (*pcVar3)(pAVar10,3,uVar12);
  *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c21f;
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    value_00 = "unknown_error";
  }
  lVar9 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar11 = lVar9;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c242;
    lVar9 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar11 = *(long *)(extraout_RDX + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x30);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c26a;
    lVar11 = il2cpp_runtime_helper_023009c0();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30);
  *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c280;
  (*pcVar3)(pAVar10,value_00,uVar12);
  lVar9 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar11 = lVar9;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c295;
    lVar9 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar11 = *(long *)(extraout_RDX + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c2bd;
    lVar11 = il2cpp_runtime_helper_023009c0();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28);
  *(undefined8 *)((long)alStack_d0 + lVar8 + 0x48) = 0x341c2d4;
  (*pcVar3)(pAVar10,(ulong)uVar13 & 0xff,uVar12);
  return pAVar10;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$FailedNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache (System_String_o* error, bool isFromCache, const MethodInfo_331B520* method);
// 0x341b520

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
          (System_String_o *error,bool_conflict isFromCache,MethodInfo_331B520 *method)

{
  byte bVar1;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar5;
  long lVar6;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  long extraout_RDX;
  System_String_o *value;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar7;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  
  if (g_data_057a8cf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf4 = '\x01';
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
  }
  else {
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0(pAVar2);
    pIVar4 = (Il2CppClass *)**(long **)(lVar6 + 0xc0);
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  else {
    pIVar4 = pAVar2->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  value = (System_String_o *)0x0;
  pAVar7 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    if (((method->klass->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._State_k__BackingField = 3;
    bVar3 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      error = "unknown_error";
    }
    if (((method->klass->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Error_k__BackingField = error;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Error_k__BackingField,error);
    if (((method->klass->_2).field_0x6d & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    *(char *)&(pAVar5->fields)._IsFromCache_k__BackingField = (char)isFromCache;
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a8cf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf5 = '\x01';
    lVar6 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  else {
    lVar6 = *(long *)(extraout_RDX + 0x20);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
    lVar6 = **(long **)(lVar6 + 0xc0);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  else {
    lVar6 = **(long **)(lVar6 + 0xc0);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar6);
  if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  __this = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar6 = *(long *)(extraout_RDX + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
      lVar6 = *(long *)(extraout_RDX + 0x20);
    }
    (pAVar5->fields)._State_k__BackingField = 4;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Value_k__BackingField = (Il2CppObject *)pAVar7;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField);
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      value = "unknown_error";
    }
    if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Error_k__BackingField = value;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Error_k__BackingField,value);
    if ((*(byte *)(*(long *)(extraout_RDX + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    *(undefined1 *)&(pAVar5->fields)._IsFromCache_k__BackingField = 1;
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$FailedNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedNoCache (System_String_o* error, bool isFromCache, const MethodInfo_331C0E0* method);
// 0x341c0e0

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedNoCache
          (System_String_o *error,bool_conflict isFromCache,MethodInfo_331C0E0 *method)

{
  byte bVar1;
  ushort uVar2;
  Il2CppMethodPointer pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool_conflict bVar7;
  Il2CppClass *pIVar8;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar9;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar10;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  long extraout_RDX;
  MethodInfo *pMVar15;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  undefined8 *__dest;
  ulong __n;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *apAStack_88 [2];
  undefined1 auStack_78 [48];
  
  if (g_data_057a8cf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf6 = '\x01';
    pAVar10 = method->klass;
    bVar1 = (pAVar10->_2).field_0x6d;
  }
  else {
    pAVar10 = method->klass;
    bVar1 = (pAVar10->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0(pAVar10);
    pIVar8 = (Il2CppClass *)**(long **)(lVar12 + 0xc0);
    bVar1 = (pIVar8->_2).field_0x6d;
  }
  else {
    pIVar8 = pAVar10->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
    bVar1 = (pIVar8->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pAVar9 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023052d0(pIVar8);
  pAVar10 = method->klass;
  uVar2 = *(ushort *)&(pAVar10->_2).field_0x6d;
  pAVar11 = pAVar10;
  if ((uVar2 & 1) == 0) {
    pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar11 = method->klass;
  }
  pIVar3 = pAVar10->rgctx_data->_2_ApplicationManagers_Api_AottgQueryResult_TValue___ctor->methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar11 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
  }
  pMVar15 = pAVar11->rgctx_data->_2_ApplicationManagers_Api_AottgQueryResult_TValue___ctor;
  pAVar10 = pAVar9;
  (*pIVar3)();
  if (pAVar9 != (ApplicationManagers_Api_AottgQueryResult_TValue__c *)0x0) {
    pAVar10 = method->klass;
    uVar2 = *(ushort *)&(pAVar10->_2).field_0x6d;
    pAVar11 = pAVar10;
    if ((uVar2 & 1) == 0) {
      pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
      pAVar11 = method->klass;
    }
    pIVar3 = pAVar10->rgctx_data->_3_ApplicationManagers_Api_AottgQueryResult_TValue__set_State->methodPointer
    ;
    if ((uVar2 & 1) == 0) {
      pAVar11 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    }
    (*pIVar3)(pAVar9,3,pAVar11->rgctx_data->_3_ApplicationManagers_Api_AottgQueryResult_TValue__set_State);
    bVar7 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      error = (System_String_o *)"unknown_error";
    }
    pAVar10 = method->klass;
    uVar2 = *(ushort *)&(pAVar10->_2).field_0x6d;
    pAVar11 = pAVar10;
    if ((uVar2 & 1) == 0) {
      pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
      pAVar11 = method->klass;
    }
    pIVar3 = pAVar10->rgctx_data->_6_ApplicationManagers_Api_AottgQueryResult_TValue__set_Error->methodPointer
    ;
    if ((uVar2 & 1) == 0) {
      pAVar11 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    }
    (*pIVar3)(pAVar9,error,pAVar11->rgctx_data->_6_ApplicationManagers_Api_AottgQueryResult_TValue__set_Error)
    ;
    pAVar10 = method->klass;
    uVar2 = *(ushort *)&(pAVar10->_2).field_0x6d;
    pAVar11 = pAVar10;
    if ((uVar2 & 1) == 0) {
      pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
      pAVar11 = method->klass;
    }
    pIVar3 = pAVar10->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_TValue__set_IsFromCache->
             methodPointer;
    if ((uVar2 & 1) == 0) {
      pAVar11 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    }
    (*pIVar3)(pAVar9,(ulong)(uint)isFromCache & 0xff,
              pAVar11->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_TValue__set_IsFromCache);
    return (ApplicationManagers_Api_AottgQueryResult_TValue__o *)pAVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  auStack_78._0_8_ = pAVar10;
  auStack_78._8_8_ = pAVar10;
  auStack_78._16_8_ = pMVar15;
  auStack_78._32_8_ = method;
  auStack_78._40_8_ = pAVar9;
  if (g_data_057a8cf7 == '\0') {
    apAStack_88[0] = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)0x341c325;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf7 = '\x01';
  }
  lVar12 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar13 = lVar12;
  if ((uVar2 & 1) == 0) {
    apAStack_88[0] = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)0x341c342;
    lVar12 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar13 = *(long *)(extraout_RDX + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0xfc);
  lVar12 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)(auStack_78 + lVar12 + -8);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c380;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  lVar13 = **(long **)(lVar13 + 0xc0);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c39b;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c3a3;
  auStack_78._24_8_ = il2cpp_runtime_helper_023052d0(lVar13);
  lVar13 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar13 + 0x135);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c3bd;
    lVar13 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c3e6;
    il2cpp_runtime_helper_023009c0();
  }
  uVar5 = auStack_78._24_8_;
  *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c3fd;
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)uVar5;
  (*pcVar4)();
  if ((ApplicationManagers_Api_AottgQueryResult_TValue__o *)uVar5 ==
      (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c633;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  lVar13 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar13 + 0x135);
  lVar14 = lVar13;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c41c;
    lVar13 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar14 = *(long *)(extraout_RDX + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x18);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c445;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  uVar6 = auStack_78._24_8_;
  uVar5 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18);
  *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c45e;
  (*pcVar4)(uVar6,4,uVar5);
  lVar13 = *(long *)(extraout_RDX + 0x20);
  lVar14 = lVar13;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c475;
    lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
    lVar14 = *(long *)(extraout_RDX + 0x20);
  }
  pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)auStack_78;
  if (*(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x28) < 0) {
    pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)auStack_78._8_8_;
  }
  *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c4a2;
  memcpy(__dest,pAVar10,__n);
  uVar2 = *(ushort *)(lVar14 + 0x135);
  lVar13 = lVar14;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c4b7;
    lVar14 = il2cpp_runtime_helper_023009c0(lVar14);
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar13 = *(long *)(extraout_RDX + 0x20);
  }
  uVar5 = **(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c4e4;
    lVar14 = il2cpp_runtime_helper_023009c0(lVar13);
    lVar13 = *(long *)(extraout_RDX + 0x20);
    uVar2 = *(ushort *)(lVar13 + 0x135);
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x20);
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x20);
  }
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c51e;
    lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
  }
  uVar6 = auStack_78._24_8_;
  pMVar15 = (MethodInfo *)auStack_78._16_8_;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  pcVar4 = *(code **)(lVar14 + 0x10);
  apAStack_88[1] = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)__dest;
  *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c552;
  (*pcVar4)(uVar5,lVar14,uVar6,apAStack_88 + 1,__dest);
  *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c55c;
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)pMVar15,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pMVar15 = "unknown_error";
  }
  lVar13 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar13 + 0x135);
  lVar14 = lVar13;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c580;
    lVar13 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar14 = *(long *)(extraout_RDX + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x30);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c5a9;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  uVar6 = auStack_78._24_8_;
  uVar5 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x30);
  *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c5c0;
  (*pcVar4)(uVar6,pMVar15,uVar5);
  lVar13 = *(long *)(extraout_RDX + 0x20);
  uVar2 = *(ushort *)(lVar13 + 0x135);
  lVar14 = lVar13;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c5d6;
    lVar13 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(extraout_RDX + 0x20) + 0x135);
    lVar14 = *(long *)(extraout_RDX + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x28);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c5ff;
    lVar14 = il2cpp_runtime_helper_023009c0();
  }
  uVar6 = auStack_78._24_8_;
  uVar5 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28);
  *(undefined8 *)((long)apAStack_88 + lVar12) = 0x341c61c;
  (*pcVar4)(uVar6,1,uVar5);
  return (ApplicationManagers_Api_AottgQueryResult_TValue__o *)uVar6;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale (Il2CppObject* value, System_String_o* error, const MethodInfo_331B660* method);
// 0x341b660

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
          (Il2CppObject *value,System_String_o *error,MethodInfo_331B660 *method)

{
  byte bVar1;
  bool_conflict bVar2;
  Il2CppClass *pIVar3;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  long lVar4;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this_00;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar5;
  
  if (g_data_057a8cf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf5 = '\x01';
    pAVar5 = method->klass;
    bVar1 = (pAVar5->_2).field_0x6d;
  }
  else {
    pAVar5 = method->klass;
    bVar1 = (pAVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0(pAVar5);
    pIVar3 = (Il2CppClass *)**(long **)(lVar4 + 0xc0);
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  else {
    pIVar3 = pAVar5->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar3);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pAVar5 = method->klass;
  if (((pAVar5->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
    pAVar5 = method->klass;
  }
  (__this->fields)._State_k__BackingField = 4;
  if (((pAVar5->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField);
  bVar2 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    error = "unknown_error";
  }
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  *(undefined1 *)&(__this->fields)._IsFromCache_k__BackingField = 1;
  return __this;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedRefreshStale (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_String_o* error, const MethodInfo_331C2F0* method);
// 0x341c2f0

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedRefreshStale
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,System_String_o *error,
          MethodInfo_331C2F0 *method)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar5;
  bool_conflict bVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *extraout_RAX;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  System_String_o *value_00;
  undefined8 *__dest;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_60 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_48;
  System_String_o *pSStack_40;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAStack_38;
  
  pSStack_40 = value.monitor;
  pUStack_50 = value.klass;
  pUStack_48 = pUStack_50;
  if (g_data_057a8cf7 == '\0') {
    apUStack_60[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x341c325;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf7 = '\x01';
  }
  pvVar7 = error[1].monitor;
  uVar1 = *(ushort *)((long)pvVar7 + 0x135);
  pvVar8 = pvVar7;
  if ((uVar1 & 1) == 0) {
    apUStack_60[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x341c342;
    pvVar7 = (void *)il2cpp_runtime_helper_023009c0();
    uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
    pvVar8 = error[1].monitor;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)((long)pvVar7 + 0xc0) + 8) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_60 + lVar4 + 8U);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c380;
    pvVar8 = (void *)il2cpp_runtime_helper_023009c0();
  }
  lVar9 = **(long **)((long)pvVar8 + 0xc0);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c39b;
    lVar9 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c3a3;
  pAStack_38 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar9);
  pvVar7 = error[1].monitor;
  uVar1 = *(ushort *)((long)pvVar7 + 0x135);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c3bd;
    pvVar7 = (void *)il2cpp_runtime_helper_023009c0();
    uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
  }
  pcVar2 = (code *)**(undefined8 **)(*(long *)((long)pvVar7 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c3e6;
    il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = pAStack_38;
  *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c3fd;
  __this = pAVar5;
  (*pcVar2)();
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pvVar7 = error[1].monitor;
    uVar1 = *(ushort *)((long)pvVar7 + 0x135);
    pvVar8 = pvVar7;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c41c;
      pvVar7 = (void *)il2cpp_runtime_helper_023009c0();
      uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
      pvVar8 = error[1].monitor;
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)((long)pvVar7 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c445;
      pvVar8 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pAVar5 = pAStack_38;
    uVar3 = *(undefined8 *)(*(long *)((long)pvVar8 + 0xc0) + 0x18);
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c45e;
    (*pcVar2)(pAVar5,4,uVar3);
    pvVar7 = error[1].monitor;
    pvVar8 = pvVar7;
    if ((*(byte *)((long)pvVar7 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c475;
      pvVar7 = (void *)il2cpp_runtime_helper_023009c0(pvVar7);
      pvVar8 = error[1].monitor;
    }
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb0;
    if (*(int *)(*(long *)(*(long *)((long)pvVar7 + 0xc0) + 8) + 0x28) < 0) {
      __src = pUStack_48;
    }
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c4a2;
    memcpy(__dest,__src,__n);
    uVar1 = *(ushort *)((long)pvVar8 + 0x135);
    pvVar7 = pvVar8;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c4b7;
      pvVar8 = (void *)il2cpp_runtime_helper_023009c0(pvVar8);
      uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
      pvVar7 = error[1].monitor;
    }
    uVar3 = **(undefined8 **)(*(long *)((long)pvVar8 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c4e4;
      lVar9 = il2cpp_runtime_helper_023009c0(pvVar7);
      pvVar7 = error[1].monitor;
      uVar1 = *(ushort *)((long)pvVar7 + 0x135);
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
    }
    else {
      lVar9 = *(long *)(*(long *)((long)pvVar7 + 0xc0) + 0x20);
    }
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c51e;
      pvVar7 = (void *)il2cpp_runtime_helper_023009c0(pvVar7);
    }
    pAVar5 = pAStack_38;
    value_00 = pSStack_40;
    if (-1 < *(int *)(*(long *)(*(long *)((long)pvVar7 + 0xc0) + 8) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar2 = *(code **)(lVar9 + 0x10);
    apUStack_60[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c552;
    (*pcVar2)(uVar3,lVar9,pAVar5,apUStack_60 + 1,__dest);
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c55c;
    bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      value_00 = "unknown_error";
    }
    pvVar7 = error[1].monitor;
    uVar1 = *(ushort *)((long)pvVar7 + 0x135);
    pvVar8 = pvVar7;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c580;
      pvVar7 = (void *)il2cpp_runtime_helper_023009c0();
      uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
      pvVar8 = error[1].monitor;
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)((long)pvVar7 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c5a9;
      pvVar8 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pAVar5 = pAStack_38;
    uVar3 = *(undefined8 *)(*(long *)((long)pvVar8 + 0xc0) + 0x30);
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c5c0;
    (*pcVar2)(pAVar5,value_00,uVar3);
    pvVar7 = error[1].monitor;
    uVar1 = *(ushort *)((long)pvVar7 + 0x135);
    pvVar8 = pvVar7;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c5d6;
      pvVar7 = (void *)il2cpp_runtime_helper_023009c0();
      uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
      pvVar8 = error[1].monitor;
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)((long)pvVar7 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c5ff;
      pvVar8 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pAVar5 = pAStack_38;
    uVar3 = *(undefined8 *)(*(long *)((long)pvVar8 + 0xc0) + 0x28);
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c61c;
    (*pcVar2)(pAVar5,1,uVar3);
    return pAVar5;
  }
  *(undefined8 *)((long)apUStack_60 + lVar4) = 0x341c633;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object____ctor (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331B7D0* method);
// 0x341b7d0

void ApplicationManagers_Api_AottgQueryResult_object____ctor
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331B7D0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_331C640* method);
// 0x341c640

void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType____ctor
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_331C640 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


