// Type: ApplicationManagers.Api.AottgQueryFetchResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryFetchResult.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Success
// il2cpp: bool ApplicationManagers_Api_AottgQueryFetchResult_object___get_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_32B5CB0* method);
// 0x33b5cb0

bool_conflict
ApplicationManagers_Api_AottgQueryFetchResult<object>__get_Success
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
          MethodInfo_32B5CB0 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Success_k__BackingField);
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Success
// il2cpp: bool ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_32B5EF0* method);
// 0x33b5ef0

bool_conflict
ApplicationManagers_Api_AottgQueryFetchResult<__Il2CppFullySharedGenericType>__get_Success
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
          MethodInfo_32B5EF0 *method)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           il2cpp_glue_022fa440(__this,(method->klass->rgctx_data->
                                      _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).
                                     fields);
  return (bool_conflict)CONCAT71((int7)((ulong)puVar1 >> 8),*puVar1);
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Success
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, bool value, const MethodInfo_32B5CC0* method);
// 0x33b5cc0

void ApplicationManagers_Api_AottgQueryFetchResult<object>__set_Success
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,bool_conflict value,
               MethodInfo_32B5CC0 *method)

{
  *(char *)&(__this->fields)._Success_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Success
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, bool value, const MethodInfo_32B5F10* method);
// 0x33b5f10

void ApplicationManagers_Api_AottgQueryFetchResult<__Il2CppFullySharedGenericType>__set_Success
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,bool_conflict value,
               MethodInfo_32B5F10 *method)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  pvVar1 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1)
           .fields;
  il2cpp_glue_02274840(pvVar1,1);
  puVar2 = (undefined1 *)il2cpp_glue_022fa440(__this,pvVar1);
  *puVar2 = (char)value;
  il2cpp_glue_02274770(*(undefined8 *)((long)pvVar1 + 8),puVar2,0);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Value
// il2cpp: Il2CppObject* ApplicationManagers_Api_AottgQueryFetchResult_object___get_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_32B5CD0* method);
// 0x33b5cd0

Il2CppObject *
ApplicationManagers_Api_AottgQueryFetchResult<object>__get_Value
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
          MethodInfo_32B5CD0 *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_32B5F60* method);
// 0x33b5f60

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
ApplicationManagers_Api_AottgQueryFetchResult<__Il2CppFullySharedGenericType>__get_Value
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
          MethodInfo_32B5F60 *method)

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
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x33b5fa7;
  __src = (void *)il2cpp_glue_022fa440(__this,lVar2 + 0x20);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x33b5fb5;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x33b5fc3;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, Il2CppObject* value, const MethodInfo_32B5CE0* method);
// 0x33b5ce0

void ApplicationManagers_Api_AottgQueryFetchResult<object>__set_Value
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,Il2CppObject *value,
               MethodInfo_32B5CE0 *method)

{
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Value_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_32B5FD0* method);
// 0x33b5fd0

void ApplicationManagers_Api_AottgQueryFetchResult<__Il2CppFullySharedGenericType>__set_Value
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
               MethodInfo_32B5FD0 *method)

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
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x33b6025;
  memcpy(auStack_38 + lVar3,__src,__n);
  lVar1 = *(long *)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x33b6049;
  il2cpp_glue_02274860(__this,lVar1 + 0x20,auStack_38 + lVar3,__n);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryFetchResult_object___get_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_32B5CF0* method);
// 0x33b5cf0

System_String_o *
ApplicationManagers_Api_AottgQueryFetchResult<object>__get_Error
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
          MethodInfo_32B5CF0 *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_32B6060* method);
// 0x33b6060

System_String_o *
ApplicationManagers_Api_AottgQueryFetchResult<__Il2CppFullySharedGenericType>__get_Error
          (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
          MethodInfo_32B6060 *method)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           il2cpp_glue_022fa440(__this,(long)(method->klass->rgctx_data->
                                            _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_
                                           ->_1).fields + 0x40);
  return (System_String_o *)*puVar1;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, System_String_o* value, const MethodInfo_32B5D00* method);
// 0x33b5d00

void ApplicationManagers_Api_AottgQueryFetchResult<object>__set_Error
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
               System_String_o *value,MethodInfo_32B5D00 *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, System_String_o* value, const MethodInfo_32B6090* method);
// 0x33b6090

void ApplicationManagers_Api_AottgQueryFetchResult<__Il2CppFullySharedGenericType>__set_Error
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
               System_String_o *value,MethodInfo_32B6090 *method)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1)
           .fields;
  lVar1 = (long)pvVar2 + 0x40;
  il2cpp_glue_02274840(lVar1,8);
  puVar3 = (undefined8 *)il2cpp_glue_022fa440(__this,lVar1);
  *puVar3 = value;
  il2cpp_glue_02274770(*(undefined8 *)((long)pvVar2 + 0x48),puVar3,0);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$Ok
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult_object___Ok (Il2CppObject* value, const MethodInfo_32B5D10* method);
// 0x33b5d10

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult<object>__Ok
          (Il2CppObject *value,MethodInfo_32B5D10 *method)

{
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *pAVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this;
  
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    pAVar1 = method->klass;
    if (((pAVar1->_2).field_0x6d & 1) == 0) {
      il2cpp_glue_022c28b0();
      pAVar1 = method->klass;
    }
    *(undefined1 *)&(__this->fields)._Success_k__BackingField = 1;
    if (((pAVar1->_2).field_0x6d & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    (__this->fields)._Value_k__BackingField = value;
    il2cpp_runtime_glue(&(__this->fields)._Value_k__BackingField,value);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$Ok
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Ok (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_32B60F0* method);
// 0x33b60f0

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult<__Il2CppFullySharedGenericType>__Ok
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_32B60F0 *method)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar6;
  long lVar7;
  void *pvVar8;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_60 [3];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_40;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *local_38;
  
  pvVar8 = value.monitor;
  local_48 = value.klass;
  lVar4 = *(long *)((long)pvVar8 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  local_40 = local_48;
  if ((uVar1 & 1) == 0) {
    apUStack_60[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x33b6121;
    lVar4 = il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)(*(long *)((long)pvVar8 + 0x20) + 0x135);
    lVar5 = *(long *)((long)pvVar8 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_60 + lVar4 + 8);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b615e;
    lVar5 = il2cpp_glue_022c28b0();
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b6179;
    lVar5 = il2cpp_glue_022c28b0();
  }
  *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b6181;
  pAVar6 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_glue(lVar5);
  lVar5 = *(long *)((long)pvVar8 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar7 = lVar5;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b6199;
    lVar5 = il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)(*(long *)((long)pvVar8 + 0x20) + 0x135);
    lVar7 = *(long *)((long)pvVar8 + 0x20);
  }
  pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b61c1;
    lVar7 = il2cpp_glue_022c28b0();
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10);
  *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b61d4;
  (*pcVar2)(pAVar6,uVar3);
  if (pAVar6 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    lVar5 = *(long *)((long)pvVar8 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar7 = lVar5;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b61f2;
      lVar5 = il2cpp_glue_022c28b0();
      uVar1 = *(ushort *)(*(long *)((long)pvVar8 + 0x20) + 0x135);
      lVar7 = *(long *)((long)pvVar8 + 0x20);
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b621a;
      lVar7 = il2cpp_glue_022c28b0();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
    local_38 = pAVar6;
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b6236;
    (*pcVar2)(pAVar6,1,uVar3);
    lVar5 = *(long *)((long)pvVar8 + 0x20);
    lVar7 = lVar5;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b624d;
      lVar5 = il2cpp_glue_022c28b0(lVar5);
      lVar7 = *(long *)((long)pvVar8 + 0x20);
    }
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x28) < 0) {
      __src = local_40;
    }
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b6279;
    memcpy(__dest,__src,__n);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar5 = lVar7;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b628f;
      lVar7 = il2cpp_glue_022c28b0(lVar7);
      uVar1 = *(ushort *)(*(long *)((long)pvVar8 + 0x20) + 0x135);
      lVar5 = *(long *)((long)pvVar8 + 0x20);
    }
    uVar3 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b62bc;
      lVar7 = il2cpp_glue_022c28b0(lVar5);
      lVar5 = *(long *)((long)pvVar8 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    }
    else {
      lVar7 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    }
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b62f6;
      lVar5 = il2cpp_glue_022c28b0(lVar5);
    }
    pAVar6 = local_38;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar2 = *(code **)(lVar7 + 0x10);
    apUStack_60[2] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b632a;
    (*pcVar2)(uVar3,lVar7,pAVar6,apUStack_60 + 2,__dest);
    return pAVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)apUStack_60 + lVar4) = &UNK_033b6341;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$Fail
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult_object___Fail (System_String_o* error, const MethodInfo_32B5DC0* method);
// 0x33b5dc0

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult<object>__Fail
          (System_String_o *error,MethodInfo_32B5DC0 *method)

{
  byte bVar1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *pAVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this;
  long lVar5;
  
  if (DAT_057003dc == '\0') {
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003dc = '\x01';
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
  }
  else {
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar5 = il2cpp_glue_022c28b0(pAVar2);
    pIVar4 = (Il2CppClass *)**(long **)(lVar5 + 0xc0);
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  else {
    pIVar4 = pAVar2->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_;
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_glue(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  *(undefined1 *)&(__this->fields)._Success_k__BackingField = 0;
  bVar3 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    error = "unknown_error";
  }
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,error);
  return __this;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$Fail
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Fail (System_String_o* error, const MethodInfo_32B6350* method);
// 0x33b6350

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult<__Il2CppFullySharedGenericType>__Fail
          (System_String_o *error,MethodInfo_32B6350 *method)

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
  
  if (DAT_057003dd == '\0') {
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003dd = '\x01';
    pAVar7 = method->klass;
    bVar1 = (pAVar7->_2).field_0x6d;
  }
  else {
    pAVar7 = method->klass;
    bVar1 = (pAVar7->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar8 = il2cpp_glue_022c28b0(pAVar7);
    pIVar5 = (Il2CppClass *)**(long **)(lVar8 + 0xc0);
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  else {
    pIVar5 = pAVar7->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  pAVar6 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_runtime_glue(pIVar5);
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_glue_022c28b0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
  }
  pIVar3 = pAVar7->rgctx_data->_2_ApplicationManagers_Api_AottgQueryFetchResult_TValue___ctor->
           methodPointer;
  if ((uVar2 & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  (*pIVar3)(pAVar6);
  if (pAVar6 == (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  pAVar9 = pAVar7;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_glue_022c28b0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar9 = method->klass;
  }
  pIVar3 = pAVar7->rgctx_data->_3_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Success
           ->methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar9 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar3)(pAVar6,0,pAVar9->rgctx_data->
                     _3_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Success);
  bVar4 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    error = "unknown_error";
  }
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  pAVar9 = pAVar7;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_glue_022c28b0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar9 = method->klass;
  }
  pIVar3 = pAVar7->rgctx_data->_5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error->
           methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar9 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar3)(pAVar6,error,
            pAVar9->rgctx_data->_5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error);
  return pAVar6;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object____ctor (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_32B5EE0* method);
// 0x33b5ee0

void ApplicationManagers_Api_AottgQueryFetchResult<object>___ctor
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
               MethodInfo_32B5EE0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_32B6510* method);
// 0x33b6510

void ApplicationManagers_Api_AottgQueryFetchResult<__Il2CppFullySharedGenericType>___ctor
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,
               MethodInfo_32B6510 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


