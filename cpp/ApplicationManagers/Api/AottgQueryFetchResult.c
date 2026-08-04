// Type: ApplicationManagers.Api.AottgQueryFetchResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryFetchResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Success
// il2cpp: bool ApplicationManagers_Api_AottgQueryFetchResult_object___get_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_331AA00* method);
// 0x341aa00

bool_conflict
ApplicationManagers_Api_AottgQueryFetchResult_object___get_Success
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,MethodInfo_331AA00 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Success_k__BackingField);
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Success
// il2cpp: bool ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_331AC40* method);
// 0x341ac40

bool_conflict
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Success
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,MethodInfo_331AC40 *method)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           il2cpp_runtime_helper_02338550(__this,(method->klass->rgctx_data->
                                      _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).fields);
  return (bool_conflict)CONCAT71((int7)((ulong)puVar1 >> 8),*puVar1);
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Success
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, bool value, const MethodInfo_331AA10* method);
// 0x341aa10

void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Success
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,bool_conflict value,
               MethodInfo_331AA10 *method)

{
  *(char *)&(__this->fields)._Success_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Success
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, bool value, const MethodInfo_331AC60* method);
// 0x341ac60

void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Success
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,bool_conflict value,
               MethodInfo_331AC60 *method)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  pvVar1 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).fields;
  il2cpp_runtime_helper_022b2950(pvVar1,1);
  puVar2 = (undefined1 *)il2cpp_runtime_helper_02338550(__this,pvVar1);
  *puVar2 = (char)value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar1 + 8),puVar2,0);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Value
// il2cpp: Il2CppObject* ApplicationManagers_Api_AottgQueryFetchResult_object___get_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_331AA20* method);
// 0x341aa20

Il2CppObject *
ApplicationManagers_Api_AottgQueryFetchResult_object___get_Value
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,MethodInfo_331AA20 *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_331ACB0* method);
// 0x341acb0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Value
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,MethodInfo_331ACB0 *method)

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
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x341acf7;
  __src = (void *)il2cpp_runtime_helper_02338550(__this,lVar2 + 0x20);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x341ad05;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x341ad13;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, Il2CppObject* value, const MethodInfo_331AA30* method);
// 0x341aa30

void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Value
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,Il2CppObject *value,
               MethodInfo_331AA30 *method)

{
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_331AD20* method);
// 0x341ad20

void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Value
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_331AD20 *method)

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
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x341ad75;
  memcpy(auStack_38 + lVar3,__src,__n);
  lVar1 = *(long *)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x341ad99;
  il2cpp_runtime_helper_022b2970(__this,lVar1 + 0x20,auStack_38 + lVar3,__n);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryFetchResult_object___get_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_331AA40* method);
// 0x341aa40

System_String_o *
ApplicationManagers_Api_AottgQueryFetchResult_object___get_Error
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,MethodInfo_331AA40 *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_331ADB0* method);
// 0x341adb0

System_String_o *
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Error
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,MethodInfo_331ADB0 *method)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           il2cpp_runtime_helper_02338550(__this,(long)(method->klass->rgctx_data->
                                            _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).
                                           fields + 0x40);
  return (System_String_o *)*puVar1;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, System_String_o* value, const MethodInfo_331AA50* method);
// 0x341aa50

void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Error
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,System_String_o *value,
               MethodInfo_331AA50 *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, System_String_o* value, const MethodInfo_331ADE0* method);
// 0x341ade0

void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Error
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,System_String_o *value,
               MethodInfo_331ADE0 *method)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).fields;
  lVar1 = (long)pvVar2 + 0x40;
  il2cpp_runtime_helper_022b2950(lVar1,8);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_02338550(__this,lVar1);
  *puVar3 = value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar2 + 0x48),puVar3,0);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$Ok
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult_object___Ok (Il2CppObject* value, const MethodInfo_331AA60* method);
// 0x341aa60

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult_object___Ok(Il2CppObject *value,MethodInfo_331AA60 *method)

{
  byte bVar1;
  bool_conflict bVar2;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *pAVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar5;
  long lVar6;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RAX;
  long lVar7;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *value_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this;
  
  pAVar3 = method->klass;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar3);
  }
  pIVar4 = pAVar3->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  lVar7 = 0;
  value_00 = pAVar5;
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  if (pAVar5 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a8cf2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"unknown_error");
      g_data_057a8cf2 = '\x01';
      lVar6 = *(long *)(lVar7 + 0x20);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      lVar6 = *(long *)(lVar7 + 0x20);
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
    pAVar5 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar6);
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    __this = pAVar5;
    System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
    if (pAVar5 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    *(undefined1 *)&(pAVar5->fields)._Success_k__BackingField = 0;
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      value_00 = "unknown_error";
    }
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    (pAVar5->fields)._Error_k__BackingField = (System_String_o *)value_00;
    il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Error_k__BackingField,value_00);
    return pAVar5;
  }
  pAVar3 = method->klass;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
    pAVar3 = method->klass;
  }
  *(undefined1 *)&(pAVar5->fields)._Success_k__BackingField = 1;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  (pAVar5->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(pAVar5->fields)._Value_k__BackingField,value);
  return pAVar5;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$Ok
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Ok (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_331AE40* method);
// 0x341ae40

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Ok
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_331AE40 *method)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  bool_conflict bVar4;
  long lVar5;
  long lVar6;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RAX;
  void *pvVar11;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *value_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this;
  ulong __n;
  undefined8 *__dest;
  long alStack_88 [7];
  undefined8 *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_40;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *local_38;
  
  pvVar11 = value.monitor;
  local_48 = value.klass;
  lVar5 = *(long *)((long)pvVar11 + 0x20);
  uVar2 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  local_40 = local_48;
  if ((uVar2 & 1) == 0) {
    alStack_88[5] = 0x341ae71;
    lVar5 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)((long)pvVar11 + 0x20) + 0x135);
    lVar6 = *(long *)((long)pvVar11 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0xfc);
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)alStack_88 + lVar5 + 0x30);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341aeae;
    lVar6 = il2cpp_runtime_helper_023009c0();
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341aec9;
    lVar6 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341aed1;
  pAVar7 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar6);
  lVar6 = *(long *)((long)pvVar11 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar8 = lVar6;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341aee9;
    lVar6 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)((long)pvVar11 + 0x20) + 0x135);
    lVar8 = *(long *)((long)pvVar11 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341af11;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  lVar6 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341af24;
  value_00 = pAVar7;
  (*pcVar3)();
  if (pAVar7 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    lVar6 = *(long *)((long)pvVar11 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
    lVar8 = lVar6;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341af42;
      lVar6 = il2cpp_runtime_helper_023009c0();
      uVar2 = *(ushort *)(*(long *)((long)pvVar11 + 0x20) + 0x135);
      lVar8 = *(long *)((long)pvVar11 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341af6a;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
    local_38 = pAVar7;
    *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341af86;
    (*pcVar3)(pAVar7,1,uVar9);
    lVar6 = *(long *)((long)pvVar11 + 0x20);
    lVar8 = lVar6;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341af9d;
      lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
      lVar8 = *(long *)((long)pvVar11 + 0x20);
    }
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x28) < 0) {
      __src = local_40;
    }
    *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341afc9;
    memcpy(__dest,__src,__n);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar6 = lVar8;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341afdf;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
      uVar2 = *(ushort *)(*(long *)((long)pvVar11 + 0x20) + 0x135);
      lVar6 = *(long *)((long)pvVar11 + 0x20);
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341b00c;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar6);
      lVar6 = *(long *)((long)pvVar11 + 0x20);
      uVar2 = *(ushort *)(lVar6 + 0x135);
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x20);
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    }
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341b046;
      lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
    }
    pAVar7 = local_38;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar3 = *(code **)(lVar8 + 0x10);
    local_50 = __dest;
    *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341b07a;
    (*pcVar3)(uVar9,lVar8,pAVar7,&local_50,__dest);
    return pAVar7;
  }
  *(undefined8 *)((long)alStack_88 + lVar5 + 0x28) = 0x341b091;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(void **)((long)alStack_88 + lVar5 + 0x28) = pvVar11;
  *(undefined8 **)((long)alStack_88 + lVar5 + 0x20) = __dest;
  *(undefined8 *)((long)alStack_88 + lVar5 + 0x18) = 0;
  *(code **)((long)alStack_88 + lVar5 + 0x10) = pcVar3;
  *(undefined8 *)((long)alStack_88 + lVar5 + 8) = uVar9;
  if (g_data_057a8cf3 == '\0') {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b118;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf3 = '\x01';
    lVar8 = *(long *)(lVar6 + 0x20);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x20);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b135;
    lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    lVar8 = **(long **)(lVar8 + 0xc0);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = **(long **)(lVar8 + 0xc0);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b0dd;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b0e5;
  pAVar7 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar8);
  lVar8 = *(long *)(lVar6 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b0fe;
    lVar8 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(lVar6 + 0x20) + 0x135);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b165;
    il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b178;
  __this = pAVar7;
  (*pcVar3)();
  if (pAVar7 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b256;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  lVar8 = *(long *)(lVar6 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar10 = lVar8;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b197;
    lVar8 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(lVar6 + 0x20) + 0x135);
    lVar10 = *(long *)(lVar6 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x18);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b1c0;
    lVar10 = il2cpp_runtime_helper_023009c0();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
  *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b1d5;
  (*pcVar3)(pAVar7,0,uVar9);
  *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b1df;
  bVar4 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    value_00 = "unknown_error";
  }
  lVar8 = *(long *)(lVar6 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar10 = lVar8;
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b203;
    lVar8 = il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)(*(long *)(lVar6 + 0x20) + 0x135);
    lVar10 = *(long *)(lVar6 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b22c;
    lVar10 = il2cpp_runtime_helper_023009c0();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28);
  *(undefined8 *)((long)alStack_88 + lVar5) = 0x341b242;
  (*pcVar3)(pAVar7,value_00,uVar9);
  return pAVar7;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$Fail
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult_object___Fail (System_String_o* error, const MethodInfo_331AB10* method);
// 0x341ab10

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(System_String_o *error,MethodInfo_331AB10 *method)

{
  byte bVar1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *pAVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this;
  long lVar5;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RAX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this_00;
  
  if (g_data_057a8cf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf2 = '\x01';
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
  }
  else {
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar5 = il2cpp_runtime_helper_023009c0(pAVar2);
    pIVar4 = (Il2CppClass *)**(long **)(lVar5 + 0xc0);
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  else {
    pIVar4 = pAVar2->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_;
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  *(undefined1 *)&(__this->fields)._Success_k__BackingField = 0;
  bVar3 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    error = "unknown_error";
  }
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  return __this;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$Fail
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Fail (System_String_o* error, const MethodInfo_331B0A0* method);
// 0x341b0a0

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Fail
          (System_String_o *error,MethodInfo_331B0A0 *method)

{
  byte bVar1;
  ushort uVar2;
  Il2CppMethodPointer pIVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar6;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *pAVar7;
  long lVar8;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *pAVar9;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RAX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this;
  
  if (g_data_057a8cf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf3 = '\x01';
    pAVar7 = method->klass;
    bVar1 = (pAVar7->_2).field_0x6d;
  }
  else {
    pAVar7 = method->klass;
    bVar1 = (pAVar7->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar8 = il2cpp_runtime_helper_023009c0(pAVar7);
    pIVar5 = (Il2CppClass *)**(long **)(lVar8 + 0xc0);
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pAVar7->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pAVar6 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
  }
  pIVar3 = pAVar7->rgctx_data->_2_ApplicationManagers_Api_AottgQueryFetchResult_TValue___ctor->methodPointer;
  if ((uVar2 & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  __this = pAVar6;
  (*pIVar3)();
  if (pAVar6 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  pAVar9 = pAVar7;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar9 = method->klass;
  }
  pIVar3 = pAVar7->rgctx_data->_3_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Success->
           methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar9 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_runtime_helper_023009c0();
  }
  (*pIVar3)(pAVar6,0,pAVar9->rgctx_data->_3_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Success)
  ;
  bVar4 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    error = "unknown_error";
  }
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  pAVar9 = pAVar7;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar9 = method->klass;
  }
  pIVar3 = pAVar7->rgctx_data->_5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error->
           methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar9 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_runtime_helper_023009c0();
  }
  (*pIVar3)(pAVar6,error,
            pAVar9->rgctx_data->_5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error);
  return pAVar6;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object____ctor (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_331AC30* method);
// 0x341ac30

void ApplicationManagers_Api_AottgQueryFetchResult_object____ctor
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,MethodInfo_331AC30 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_331B260* method);
// 0x341b260

void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType____ctor
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,MethodInfo_331B260 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


