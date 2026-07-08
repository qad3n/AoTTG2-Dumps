// Type: ApplicationManagers.Api.AottgQueryResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryResult.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgQueryResult<object>$$get_State
// il2cpp: int32_t ApplicationManagers_Api_AottgQueryResult_object___get_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B6520* method);
// 0x33b6520

int32_t ApplicationManagers_Api_AottgQueryResult<object>__get_State
                  (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,
                  MethodInfo_32B6520 *method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_State
// il2cpp: int32_t ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B6A90* method);
// 0x33b6a90

int32_t ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__get_State
                  (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,
                  MethodInfo_32B6A90 *method)

{
  int32_t *piVar1;
  
  piVar1 = (int32_t *)
           il2cpp_glue_022fa440(__this,(method->klass->rgctx_data->
                                      _0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).
                                     fields);
  return *piVar1;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_State
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, int32_t value, const MethodInfo_32B6530* method);
// 0x33b6530

void ApplicationManagers_Api_AottgQueryResult<object>__set_State
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,int32_t value,
               MethodInfo_32B6530 *method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_State
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, int32_t value, const MethodInfo_32B6AB0* method);
// 0x33b6ab0

void ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__set_State
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,int32_t value,
               MethodInfo_32B6AB0 *method)

{
  void *pvVar1;
  int32_t *piVar2;
  
  pvVar1 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).
           fields;
  il2cpp_glue_02274840(pvVar1,4);
  piVar2 = (int32_t *)il2cpp_glue_022fa440(__this,pvVar1);
  *piVar2 = value;
  il2cpp_glue_02274770(*(undefined8 *)((long)pvVar1 + 8),piVar2,0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$get_Value
// il2cpp: Il2CppObject* ApplicationManagers_Api_AottgQueryResult_object___get_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B6540* method);
// 0x33b6540

Il2CppObject *
ApplicationManagers_Api_AottgQueryResult<object>__get_Value
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_32B6540 *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B6B00* method);
// 0x33b6b00

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__get_Value
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_32B6B00 *method)

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
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x33b6b47;
  __src = (void *)il2cpp_glue_022fa440(__this,lVar2 + 0x20);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x33b6b55;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x33b6b63;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, Il2CppObject* value, const MethodInfo_32B6550* method);
// 0x33b6550

void ApplicationManagers_Api_AottgQueryResult<object>__set_Value
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,Il2CppObject *value,
               MethodInfo_32B6550 *method)

{
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Value_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_32B6B70* method);
// 0x33b6b70

void ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__set_Value
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
               MethodInfo_32B6B70 *method)

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
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x33b6bc5;
  memcpy(auStack_38 + lVar3,__src,__n);
  lVar1 = *(long *)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x33b6be9;
  il2cpp_glue_02274860(__this,lVar1 + 0x20,auStack_38 + lVar3,__n);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryResult_object___get_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B6560* method);
// 0x33b6560

System_String_o *
ApplicationManagers_Api_AottgQueryResult<object>__get_Error
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_32B6560 *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B6C00* method);
// 0x33b6c00

System_String_o *
ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__get_Error
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_32B6C00 *method)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           il2cpp_glue_022fa440(__this,(long)(method->klass->rgctx_data->
                                            _0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1)
                                           .fields + 0x40);
  return (System_String_o *)*puVar1;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, System_String_o* value, const MethodInfo_32B6570* method);
// 0x33b6570

void ApplicationManagers_Api_AottgQueryResult<object>__set_Error
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,System_String_o *value,
               MethodInfo_32B6570 *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, System_String_o* value, const MethodInfo_32B6C30* method);
// 0x33b6c30

void ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__set_Error
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,System_String_o *value,
               MethodInfo_32B6C30 *method)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).
           fields;
  lVar1 = (long)pvVar2 + 0x40;
  il2cpp_glue_02274840(lVar1,8);
  puVar3 = (undefined8 *)il2cpp_glue_022fa440(__this,lVar1);
  *puVar3 = value;
  il2cpp_glue_02274770(*(undefined8 *)((long)pvVar2 + 0x48),puVar3,0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Api_AottgQueryResult_object___get_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B6580* method);
// 0x33b6580

bool_conflict
ApplicationManagers_Api_AottgQueryResult<object>__get_IsFromCache
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_32B6580 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsFromCache_k__BackingField);
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B6C90* method);
// 0x33b6c90

bool_conflict
ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__get_IsFromCache
          (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,MethodInfo_32B6C90 *method)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           il2cpp_glue_022fa440(__this,(long)(method->klass->rgctx_data->
                                            _0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1)
                                           .fields + 0x60);
  return (bool_conflict)CONCAT71((int7)((ulong)puVar1 >> 8),*puVar1);
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, bool value, const MethodInfo_32B6590* method);
// 0x33b6590

void ApplicationManagers_Api_AottgQueryResult<object>__set_IsFromCache
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,bool_conflict value,
               MethodInfo_32B6590 *method)

{
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, bool value, const MethodInfo_32B6CC0* method);
// 0x33b6cc0

void ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__set_IsFromCache
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,bool_conflict value,
               MethodInfo_32B6CC0 *method)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).
           fields;
  lVar1 = (long)pvVar2 + 0x60;
  il2cpp_glue_02274840(lVar1,1);
  puVar3 = (undefined1 *)il2cpp_glue_022fa440(__this,lVar1);
  *puVar3 = (char)value;
  il2cpp_glue_02274770(*(undefined8 *)((long)pvVar2 + 0x68),puVar3,0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$LoadingNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache (const MethodInfo_32B65A0* method);
// 0x33b65a0

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<object>__LoadingNoCache(MethodInfo_32B65A0 *method)

{
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    if (((method->klass->_2).field_0x6d & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    (__this->fields)._State_k__BackingField = 0;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$LoadingNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___LoadingNoCache (const MethodInfo_32B6D20* method);
// 0x33b6d20

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__LoadingNoCache
          (MethodInfo_32B6D20 *method)

{
  ushort uVar1;
  Il2CppMethodPointer pIVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar5;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar6;
  
  pAVar3 = method->klass;
  if (((pAVar3->_2).field_0x6d & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0(pAVar3);
  }
  pIVar4 = pAVar3->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  pAVar5 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(pIVar4);
  pAVar3 = method->klass;
  uVar1 = *(ushort *)&(pAVar3->_2).field_0x6d;
  pAVar6 = pAVar3;
  if ((uVar1 & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar6 = method->klass;
  }
  pIVar2 = pAVar3->rgctx_data->_2_ApplicationManagers_Api_AottgQueryResult_TValue___ctor->
           methodPointer;
  if ((uVar1 & 1) == 0) {
    pAVar6 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar2)(pAVar5,pAVar6->rgctx_data->_2_ApplicationManagers_Api_AottgQueryResult_TValue___ctor);
  if (pAVar5 == (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pAVar3 = method->klass;
  uVar1 = *(ushort *)&(pAVar3->_2).field_0x6d;
  pAVar6 = pAVar3;
  if ((uVar1 & 1) == 0) {
    pAVar3 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar6 = method->klass;
  }
  pIVar2 = pAVar3->rgctx_data->_3_ApplicationManagers_Api_AottgQueryResult_TValue__set_State->
           methodPointer;
  if ((uVar1 & 1) == 0) {
    pAVar6 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar2)(pAVar5,0,pAVar6->rgctx_data->
                     _3_ApplicationManagers_Api_AottgQueryResult_TValue__set_State);
  return pAVar5;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$ReadyFresh
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh (Il2CppObject* value, bool isFromCache, const MethodInfo_32B6630* method);
// 0x33b6630

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<object>__ReadyFresh
          (Il2CppObject *value,bool_conflict isFromCache,MethodInfo_32B6630 *method)

{
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pAVar1 = method->klass;
    if (((pAVar1->_2).field_0x6d & 1) == 0) {
      il2cpp_glue_022c28b0();
      pAVar1 = method->klass;
    }
    (__this->fields)._State_k__BackingField = 1;
    if (((pAVar1->_2).field_0x6d & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    (__this->fields)._Value_k__BackingField = value;
    il2cpp_runtime_glue(&(__this->fields)._Value_k__BackingField,value);
    if (((method->klass->_2).field_0x6d & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)isFromCache;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$ReadyFresh
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyFresh (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, bool isFromCache, const MethodInfo_32B6E20* method);
// 0x33b6e20

/* WARNING: Type propagation algorithm not settling */

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__ReadyFresh
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,bool_conflict isFromCache,
          MethodInfo_32B6E20 *method)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long lVar9;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 *__dest;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_60 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *local_40;
  uint local_34;
  
  lVar9 = CONCAT44(in_register_00000014,isFromCache);
  local_50 = value.klass;
  local_34 = (uint)value.monitor;
  lVar6 = *(long *)(lVar9 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  local_48 = local_50;
  if ((uVar1 & 1) == 0) {
    apUStack_60[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x33b6e54;
    lVar6 = il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    lVar7 = *(long *)(lVar9 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0xfc);
  lVar6 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_60 + lVar6 + 8U);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6e92;
    lVar7 = il2cpp_glue_022c28b0();
  }
  lVar7 = **(long **)(lVar7 + 0xc0);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6ead;
    lVar7 = il2cpp_glue_022c28b0();
  }
  *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6eb5;
  local_40 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(lVar7);
  lVar7 = *(long *)(lVar9 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6ecf;
    lVar7 = il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    lVar8 = *(long *)(lVar9 + 0x20);
  }
  pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6ef8;
    lVar8 = il2cpp_glue_022c28b0();
  }
  pAVar4 = local_40;
  uVar3 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10);
  *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6f0f;
  (*pcVar2)(pAVar4,uVar3);
  if (pAVar4 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar7 = *(long *)(lVar9 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6f2e;
      lVar7 = il2cpp_glue_022c28b0();
      uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
      lVar8 = *(long *)(lVar9 + 0x20);
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6f57;
      lVar8 = il2cpp_glue_022c28b0();
    }
    pAVar4 = local_40;
    uVar3 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
    *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6f70;
    (*pcVar2)(pAVar4,1,uVar3);
    lVar7 = *(long *)(lVar9 + 0x20);
    lVar8 = lVar7;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6f87;
      lVar7 = il2cpp_glue_022c28b0(lVar7);
      lVar8 = *(long *)(lVar9 + 0x20);
    }
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb0;
    if (*(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x28) < 0) {
      __src = local_48;
    }
    *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6fb4;
    memcpy(__dest,__src,__n);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar7 = lVar8;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6fc9;
      lVar8 = il2cpp_glue_022c28b0(lVar8);
      uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
      lVar7 = *(long *)(lVar9 + 0x20);
    }
    uVar3 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b6ff6;
      lVar8 = il2cpp_glue_022c28b0(lVar7);
      lVar7 = *(long *)(lVar9 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x135);
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x20);
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    }
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b7030;
      lVar7 = il2cpp_glue_022c28b0(lVar7);
    }
    uVar5 = local_34;
    pAVar4 = local_40;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar2 = *(code **)(lVar8 + 0x10);
    apUStack_60[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
    *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b7064;
    (*pcVar2)(uVar3,lVar8,pAVar4,apUStack_60 + 1,__dest);
    lVar7 = *(long *)(lVar9 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b707a;
      lVar7 = il2cpp_glue_022c28b0();
      uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
      lVar8 = *(long *)(lVar9 + 0x20);
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b70a3;
      lVar8 = il2cpp_glue_022c28b0();
    }
    pAVar4 = local_40;
    uVar3 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
    *(undefined8 *)((long)apUStack_60 + lVar6) = 0x33b70bf;
    (*pcVar2)(pAVar4,uVar5 & 0xff,uVar3);
    return pAVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)apUStack_60 + lVar6) = &UNK_033b70d6;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryResult<object>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing (Il2CppObject* value, const MethodInfo_32B6700* method);
// 0x33b6700

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<object>__ReadyStaleRefreshing
          (Il2CppObject *value,MethodInfo_32B6700 *method)

{
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pAVar1 = method->klass;
    if (((pAVar1->_2).field_0x6d & 1) == 0) {
      il2cpp_glue_022c28b0();
      pAVar1 = method->klass;
    }
    (__this->fields)._State_k__BackingField = 2;
    if (((pAVar1->_2).field_0x6d & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    (__this->fields)._Value_k__BackingField = value;
    il2cpp_runtime_glue(&(__this->fields)._Value_k__BackingField,value);
    if (((method->klass->_2).field_0x6d & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    *(undefined1 *)&(__this->fields)._IsFromCache_k__BackingField = 1;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_32B70E0* method);
// 0x33b70e0

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__ReadyStaleRefreshing
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_32B70E0 *method)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar7;
  long lVar8;
  void *pvVar9;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 *__dest;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_60 [3];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *local_40;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_38;
  
  pvVar9 = value.monitor;
  local_48 = value.klass;
  lVar5 = *(long *)((long)pvVar9 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  local_38 = local_48;
  if ((uVar1 & 1) == 0) {
    apUStack_60[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x33b7111;
    lVar5 = il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)(*(long *)((long)pvVar9 + 0x20) + 0x135);
    lVar6 = *(long *)((long)pvVar9 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0xfc);
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_60 + lVar5 + 8);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b714e;
    lVar6 = il2cpp_glue_022c28b0();
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b7169;
    lVar6 = il2cpp_glue_022c28b0();
  }
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b7171;
  pAVar7 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(lVar6);
  lVar6 = *(long *)((long)pvVar9 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar8 = lVar6;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b7189;
    lVar6 = il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)(*(long *)((long)pvVar9 + 0x20) + 0x135);
    lVar8 = *(long *)((long)pvVar9 + 0x20);
  }
  pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b71b1;
    lVar8 = il2cpp_glue_022c28b0();
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10);
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b71c4;
  (*pcVar2)(pAVar7,uVar3);
  if (pAVar7 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    lVar6 = *(long *)((long)pvVar9 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar8 = lVar6;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b71e2;
      lVar6 = il2cpp_glue_022c28b0();
      uVar1 = *(ushort *)(*(long *)((long)pvVar9 + 0x20) + 0x135);
      lVar8 = *(long *)((long)pvVar9 + 0x20);
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b720a;
      lVar8 = il2cpp_glue_022c28b0();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
    local_40 = pAVar7;
    *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b7226;
    (*pcVar2)(pAVar7,2,uVar3);
    lVar6 = *(long *)((long)pvVar9 + 0x20);
    lVar8 = lVar6;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b723d;
      lVar6 = il2cpp_glue_022c28b0(lVar6);
      lVar8 = *(long *)((long)pvVar9 + 0x20);
    }
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x28) < 0) {
      __src = local_38;
    }
    *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b7269;
    memcpy(__dest,__src,__n);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar6 = lVar8;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b727f;
      lVar8 = il2cpp_glue_022c28b0(lVar8);
      uVar1 = *(ushort *)(*(long *)((long)pvVar9 + 0x20) + 0x135);
      lVar6 = *(long *)((long)pvVar9 + 0x20);
    }
    local_38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)
               **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b72b0;
      lVar8 = il2cpp_glue_022c28b0(lVar6);
      lVar6 = *(long *)((long)pvVar9 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x20);
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    }
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b72ea;
      lVar6 = il2cpp_glue_022c28b0(lVar6);
    }
    pcVar4 = (char *)local_38;
    pAVar7 = local_40;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar2 = *(code **)(lVar8 + 0x10);
    apUStack_60[2] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
    *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b7320;
    (*pcVar2)(pcVar4,lVar8,pAVar7,apUStack_60 + 2,__dest);
    lVar6 = *(long *)((long)pvVar9 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar8 = lVar6;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b7335;
      lVar6 = il2cpp_glue_022c28b0();
      uVar1 = *(ushort *)(*(long *)((long)pvVar9 + 0x20) + 0x135);
      lVar8 = *(long *)((long)pvVar9 + 0x20);
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b735d;
      lVar8 = il2cpp_glue_022c28b0();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
    *(undefined8 *)((long)apUStack_60 + lVar5) = 0x33b7376;
    (*pcVar2)(pAVar7,1,uVar3);
    return pAVar7;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)apUStack_60 + lVar5) = &UNK_033b738d;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryResult<object>$$FailedNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache (System_String_o* error, bool isFromCache, const MethodInfo_32B67D0* method);
// 0x33b67d0

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<object>__FailedNoCache
          (System_String_o *error,bool_conflict isFromCache,MethodInfo_32B67D0 *method)

{
  byte bVar1;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  long lVar5;
  
  if (DAT_057003de == '\0') {
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003de = '\x01';
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
    pIVar4 = pAVar2->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  (__this->fields)._State_k__BackingField = 3;
  bVar3 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    error = "unknown_error";
  }
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,error);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)isFromCache;
  return __this;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$FailedNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedNoCache (System_String_o* error, bool isFromCache, const MethodInfo_32B7390* method);
// 0x33b7390

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__FailedNoCache
          (System_String_o *error,bool_conflict isFromCache,MethodInfo_32B7390 *method)

{
  byte bVar1;
  ushort uVar2;
  Il2CppMethodPointer pIVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar6;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar7;
  long lVar8;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar9;
  
  if (DAT_057003e0 == '\0') {
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003e0 = '\x01';
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
    pIVar5 = pAVar7->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
    bVar1 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  pAVar6 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(pIVar5);
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  pAVar9 = pAVar7;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar9 = method->klass;
  }
  pIVar3 = pAVar7->rgctx_data->_2_ApplicationManagers_Api_AottgQueryResult_TValue___ctor->
           methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar9 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar3)(pAVar6,pAVar9->rgctx_data->_2_ApplicationManagers_Api_AottgQueryResult_TValue___ctor);
  if (pAVar6 == (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  pAVar9 = pAVar7;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar9 = method->klass;
  }
  pIVar3 = pAVar7->rgctx_data->_3_ApplicationManagers_Api_AottgQueryResult_TValue__set_State->
           methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar9 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar3)(pAVar6,3,pAVar9->rgctx_data->
                     _3_ApplicationManagers_Api_AottgQueryResult_TValue__set_State);
  bVar4 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    error = "unknown_error";
  }
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  pAVar9 = pAVar7;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar9 = method->klass;
  }
  pIVar3 = pAVar7->rgctx_data->_6_ApplicationManagers_Api_AottgQueryResult_TValue__set_Error->
           methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar9 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar3)(pAVar6,error,
            pAVar9->rgctx_data->_6_ApplicationManagers_Api_AottgQueryResult_TValue__set_Error);
  pAVar7 = method->klass;
  uVar2 = *(ushort *)&(pAVar7->_2).field_0x6d;
  pAVar9 = pAVar7;
  if ((uVar2 & 1) == 0) {
    pAVar7 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
    uVar2 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar9 = method->klass;
  }
  pIVar3 = pAVar7->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_TValue__set_IsFromCache->
           methodPointer;
  if ((uVar2 & 1) == 0) {
    pAVar9 = (ApplicationManagers_Api_AottgQueryResult_TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar3)(pAVar6,(ulong)(isFromCache & 0xff),
            pAVar9->rgctx_data->_5_ApplicationManagers_Api_AottgQueryResult_TValue__set_IsFromCache)
  ;
  return pAVar6;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale (Il2CppObject* value, System_String_o* error, const MethodInfo_32B6910* method);
// 0x33b6910

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<object>__FailedRefreshStale
          (Il2CppObject *value,System_String_o *error,MethodInfo_32B6910 *method)

{
  byte bVar1;
  bool_conflict bVar2;
  Il2CppClass *pIVar3;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  long lVar4;
  ApplicationManagers_Api_AottgQueryResult_TValue__c *pAVar5;
  
  if (DAT_057003df == '\0') {
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003df = '\x01';
    pAVar5 = method->klass;
    bVar1 = (pAVar5->_2).field_0x6d;
  }
  else {
    pAVar5 = method->klass;
    bVar1 = (pAVar5->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_glue_022c28b0(pAVar5);
    pIVar3 = (Il2CppClass *)**(long **)(lVar4 + 0xc0);
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  else {
    pIVar3 = pAVar5->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(pIVar3);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pAVar5 = method->klass;
  if (((pAVar5->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
    pAVar5 = method->klass;
  }
  (__this->fields)._State_k__BackingField = 4;
  if (((pAVar5->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Value_k__BackingField);
  bVar2 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    error = "unknown_error";
  }
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,error);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  *(undefined1 *)&(__this->fields)._IsFromCache_k__BackingField = 1;
  return __this;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedRefreshStale (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_String_o* error, const MethodInfo_32B75A0* method);
// 0x33b75a0

/* WARNING: Type propagation algorithm not settling */

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>__FailedRefreshStale
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,System_String_o *error,
          MethodInfo_32B75A0 *method)

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
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  System_String_o *value_00;
  undefined8 *__dest;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_60 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  System_String_o *local_40;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *local_38;
  
  local_40 = value.monitor;
  local_50 = value.klass;
  local_48 = local_50;
  if (DAT_057003e1 == '\0') {
    apUStack_60[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x33b75d5;
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_057003e1 = '\x01';
  }
  pvVar7 = error[1].monitor;
  uVar1 = *(ushort *)((long)pvVar7 + 0x135);
  pvVar8 = pvVar7;
  if ((uVar1 & 1) == 0) {
    apUStack_60[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x33b75f2;
    pvVar7 = (void *)il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
    pvVar8 = error[1].monitor;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)((long)pvVar7 + 0xc0) + 8) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_60 + lVar4 + 8U);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7630;
    pvVar8 = (void *)il2cpp_glue_022c28b0();
  }
  lVar9 = **(long **)((long)pvVar8 + 0xc0);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b764b;
    lVar9 = il2cpp_glue_022c28b0();
  }
  *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7653;
  local_38 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_runtime_glue(lVar9);
  pvVar7 = error[1].monitor;
  uVar1 = *(ushort *)((long)pvVar7 + 0x135);
  pvVar8 = pvVar7;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b766d;
    pvVar7 = (void *)il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
    pvVar8 = error[1].monitor;
  }
  pcVar2 = (code *)**(undefined8 **)(*(long *)((long)pvVar7 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7696;
    pvVar8 = (void *)il2cpp_glue_022c28b0();
  }
  pAVar5 = local_38;
  uVar3 = *(undefined8 *)(*(long *)((long)pvVar8 + 0xc0) + 0x10);
  *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b76ad;
  (*pcVar2)(pAVar5,uVar3);
  if (pAVar5 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pvVar7 = error[1].monitor;
    uVar1 = *(ushort *)((long)pvVar7 + 0x135);
    pvVar8 = pvVar7;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b76cc;
      pvVar7 = (void *)il2cpp_glue_022c28b0();
      uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
      pvVar8 = error[1].monitor;
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)((long)pvVar7 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b76f5;
      pvVar8 = (void *)il2cpp_glue_022c28b0();
    }
    pAVar5 = local_38;
    uVar3 = *(undefined8 *)(*(long *)((long)pvVar8 + 0xc0) + 0x18);
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b770e;
    (*pcVar2)(pAVar5,4,uVar3);
    pvVar7 = error[1].monitor;
    pvVar8 = pvVar7;
    if ((*(byte *)((long)pvVar7 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7725;
      pvVar7 = (void *)il2cpp_glue_022c28b0(pvVar7);
      pvVar8 = error[1].monitor;
    }
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb0;
    if (*(int *)(*(long *)(*(long *)((long)pvVar7 + 0xc0) + 8) + 0x28) < 0) {
      __src = local_48;
    }
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7752;
    memcpy(__dest,__src,__n);
    uVar1 = *(ushort *)((long)pvVar8 + 0x135);
    pvVar7 = pvVar8;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7767;
      pvVar8 = (void *)il2cpp_glue_022c28b0(pvVar8);
      uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
      pvVar7 = error[1].monitor;
    }
    uVar3 = **(undefined8 **)(*(long *)((long)pvVar8 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7794;
      lVar9 = il2cpp_glue_022c28b0(pvVar7);
      pvVar7 = error[1].monitor;
      uVar1 = *(ushort *)((long)pvVar7 + 0x135);
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
    }
    else {
      lVar9 = *(long *)(*(long *)((long)pvVar7 + 0xc0) + 0x20);
    }
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b77ce;
      pvVar7 = (void *)il2cpp_glue_022c28b0(pvVar7);
    }
    pAVar5 = local_38;
    value_00 = local_40;
    if (-1 < *(int *)(*(long *)(*(long *)((long)pvVar7 + 0xc0) + 8) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar2 = *(code **)(lVar9 + 0x10);
    apUStack_60[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7802;
    (*pcVar2)(uVar3,lVar9,pAVar5,apUStack_60 + 1,__dest);
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b780c;
    bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      value_00 = "unknown_error";
    }
    pvVar7 = error[1].monitor;
    uVar1 = *(ushort *)((long)pvVar7 + 0x135);
    pvVar8 = pvVar7;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7830;
      pvVar7 = (void *)il2cpp_glue_022c28b0();
      uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
      pvVar8 = error[1].monitor;
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)((long)pvVar7 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7859;
      pvVar8 = (void *)il2cpp_glue_022c28b0();
    }
    pAVar5 = local_38;
    uVar3 = *(undefined8 *)(*(long *)((long)pvVar8 + 0xc0) + 0x30);
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7870;
    (*pcVar2)(pAVar5,value_00,uVar3);
    pvVar7 = error[1].monitor;
    uVar1 = *(ushort *)((long)pvVar7 + 0x135);
    pvVar8 = pvVar7;
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b7886;
      pvVar7 = (void *)il2cpp_glue_022c28b0();
      uVar1 = *(ushort *)((long)error[1].monitor + 0x135);
      pvVar8 = error[1].monitor;
    }
    pcVar2 = (code *)**(undefined8 **)(*(long *)((long)pvVar7 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b78af;
      pvVar8 = (void *)il2cpp_glue_022c28b0();
    }
    pAVar5 = local_38;
    uVar3 = *(undefined8 *)(*(long *)((long)pvVar8 + 0xc0) + 0x28);
    *(undefined8 *)((long)apUStack_60 + lVar4) = 0x33b78cc;
    (*pcVar2)(pAVar5,1,uVar3);
    return pAVar5;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)apUStack_60 + lVar4) = &UNK_033b78e3;
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgQueryResult<object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object____ctor (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B6A80* method);
// 0x33b6a80

void ApplicationManagers_Api_AottgQueryResult<object>___ctor
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,
               MethodInfo_32B6A80 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_32B78F0* method);
// 0x33b78f0

void ApplicationManagers_Api_AottgQueryResult<__Il2CppFullySharedGenericType>___ctor
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,
               MethodInfo_32B78F0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


