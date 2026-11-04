// Type: ApplicationManagers.Api.AottgQueryResult
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgQueryResult<object>$$get_State
// il2cpp: int32_t ApplicationManagers_Api_AottgQueryResult_object___get_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_546860* method);
// 0x180546860

int32_t
ApplicationManagers_Api_AottgQueryResult_object___get_State(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_546860* method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_State
// il2cpp: int32_t ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_C84220* method);
// 0x180c84220

int32_t
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_State(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_C84220* method)

{
  int32_t *piVar1;
  
  piVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryResult_TValue_->
                             _1).fields);
  return *piVar1;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_State
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, int32_t value, const MethodInfo_560B20* method);
// 0x180560b20

void
ApplicationManagers_Api_AottgQueryResult_object___set_State(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, int32_t value, MethodInfo_560B20* method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_State
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_State (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, int32_t value, const MethodInfo_15797D0* method);
// 0x1815797d0

void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_State
               (ApplicationManagers_Api_AottgQueryResult_TValue__o *__this,int32_t value,
               MethodInfo_15797D0 *method)

{
  ApplicationManagers_Api_AottgQueryResult_TValue__RGCTXs *message;
  void *field;
  int32_t *piVar1;
  MethodInfo *in_R9;
  
  message = method->klass->rgctx_data;
  field = (message->_0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).fields;
  _guard_check_icall((int32_t)field,(System_String_o **)0x4,(System_String_o **)message,in_R9);
  piVar1 = il2cpp_codegen_get_instance_field_data_pointer(__this,field);
  *piVar1 = value;
  il2cpp_runtime_helper_180416190(*(undefined8 *)((longlong)field + 8),piVar1,0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$get_Value
// il2cpp: Il2CppObject* ApplicationManagers_Api_AottgQueryResult_object___get_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_573E90* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_Api_AottgQueryResult_object___get_Value(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_573E90* method)

{
  return (__this->fields)._Value_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_B131A0* method);
// 0x180b131a0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Value(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_B131A0* method)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar4;
  ulonglong size;
  undefined8 auStack_50 [5];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_T->_2).stack_slot_size;
  uVar2 = size + 0xf;
  if (uVar2 <= size) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x180b131e7;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  pvVar3 = (method->klass->rgctx_data->_0_Settings_TypedSetting_T_->_1).fields;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x180b13210;
  pvVar3 = il2cpp_codegen_get_instance_field_data_pointer
                     (__return_storage_ptr__,(void *)((longlong)pvVar3 + 0x20));
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x180b1321e;
  memcpy(&stack0xffffffffffffffd8 + lVar1,pvVar3,size);
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x180b1322c;
  pUVar4 = memcpy(__this,&stack0xffffffffffffffd8 + lVar1,size);
  return pUVar4;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, Il2CppObject* value, const MethodInfo_C8DE30* method);
// 0x180c8de30

void
ApplicationManagers_Api_AottgQueryResult_object___set_Value(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, Il2CppObject* value, MethodInfo_C8DE30* method)

{
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Value (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_15787C0* method);
// 0x1815787c0

void
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Value(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, MethodInfo_15787C0* method)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res10;
  undefined8 auStack_40 [5];
  
  uVar1 = (method->klass->rgctx_data->_1_TValue->_2).stack_slot_size;
  size = (ulonglong)uVar1;
  uVar4 = size + 0xf;
  if (uVar4 <= size) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x181578814;
  lVar3 = -(uVar4 & 0xfffffffffffffff0);
  source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&local_res10;
  if ((int)(method->klass->rgctx_data->_1_TValue->_1).byval_arg.bits < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_40 + lVar3) = 0x181578842;
  local_res10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  memcpy(&stack0xffffffffffffffe8 + lVar3,source,size);
  pvVar2 = (method->klass->rgctx_data->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).fields;
  *(undefined8 *)((longlong)auStack_40 + lVar3) = 0x181578869;
  il2cpp_runtime_helper_180417320(__this,(longlong)pvVar2 + 0x20,&stack0xffffffffffffffe8 + lVar3,uVar1);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryResult_object___get_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_5852B0* method);
// 0x1805852b0

System_String_o*
ApplicationManagers_Api_AottgQueryResult_object___get_Error(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_5852B0* method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_C8FF90* method);
// 0x180c8ff90

System_String_o*
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_Error(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_C8FF90* method)

{
  undefined8 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((longlong)
                                      (method->klass->rgctx_data->
                                       _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).fields +
                                     0x40));
  return (System_Action_o *)*puVar1;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, System_String_o* value, const MethodInfo_ACE2F0* method);
// 0x180ace2f0

void
ApplicationManagers_Api_AottgQueryResult_object___set_Error(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, System_String_o* value, MethodInfo_ACE2F0* method)

{
  (__this->fields)._Error_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,value);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Error (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, System_String_o* value, const MethodInfo_C8FFE0* method);
// 0x180c8ffe0

void
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_Error(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, System_String_o* value, MethodInfo_C8FFE0* method)

{
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__RGCTXs *message;
  void *pvVar1;
  undefined8 *puVar2;
  MethodInfo *in_R9;
  
  message = method->klass->rgctx_data;
  pvVar1 = (message->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).fields;
  _guard_check_icall((int)pvVar1 + 0x40,(System_String_o **)&g_data_00000008,(System_String_o **)message,in_R9);
  puVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)((longlong)pvVar1 + 0x40));
  *puVar2 = value;
  il2cpp_runtime_helper_180416190(*(undefined8 *)((longlong)pvVar1 + 0x48),puVar2,0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Api_AottgQueryResult_object___get_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_F1D480* method);
// 0x180f1d480

bool
ApplicationManagers_Api_AottgQueryResult_object___get_IsFromCache(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_F1D480* method)

{
  return (__this->fields)._IsFromCache_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_F1D450* method);
// 0x180f1d450

bool
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___get_IsFromCache(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_F1D450* method)

{
  undefined1 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((longlong)
                                      (method->klass->rgctx_data->
                                       _0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).fields + 0x60)
                     );
  return (bool)*puVar1;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object___set_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, bool value, const MethodInfo_F1D940* method);
// 0x180f1d940

void
ApplicationManagers_Api_AottgQueryResult_object___set_IsFromCache(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, bool value, MethodInfo_F1D940* method)

{
  (__this->fields)._IsFromCache_k__BackingField = value;
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_IsFromCache (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, bool value, const MethodInfo_F1D8E0* method);
// 0x180f1d8e0

void
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___set_IsFromCache(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, bool value, MethodInfo_F1D8E0* method)

{
  ApplicationManagers_Api_AottgQueryResult_TValue__RGCTXs *message;
  void *pvVar1;
  void *pvVar2;
  MethodInfo *in_R9;
  
  message = method->klass->rgctx_data;
  pvVar1 = (message->_0_ApplicationManagers_Api_AottgQueryResult_TValue_->_1).fields;
  _guard_check_icall((int)pvVar1 + 0x60,(System_String_o **)0x1,(System_String_o **)message,in_R9);
  pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)((longlong)pvVar1 + 0x60));
  *(bool *)pvVar2 = value;
  il2cpp_runtime_helper_180416190(*(undefined8 *)((longlong)pvVar1 + 0x68),pvVar2,0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<object>$$LoadingNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache (const MethodInfo_1579080* method);
// 0x181579080

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache(MethodInfo_1579080 *method)

{
  Il2CppClass *pIVar1;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._State_k__BackingField = 0;
    return __this;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$LoadingNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___LoadingNoCache (const MethodInfo_1578F80* method);
// 0x181578f80

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___LoadingNoCache
          (MethodInfo_1578F80 *method)

{
  Il2CppMethodPointer pIVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar3;
  Il2CppClass *pIVar4;
  
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pAVar3 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar2);
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar4 = (Il2CppClass *)method->klass;
  pIVar1 = (pIVar2->rgctx_data[2].method)->methodPointer;
  if (((pIVar4->_2).bitflags1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  (*pIVar1)(pAVar3,pIVar4->rgctx_data[2].rgctxDataDummy);
  if (pAVar3 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pIVar2 = (Il2CppClass *)method->klass;
    if (((pIVar2->_2).bitflags1 & 1) == 0) {
      pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    }
    pIVar4 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar2->rgctx_data[3].method)->methodPointer;
    if (((pIVar4->_2).bitflags1 & 1) == 0) {
      pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    }
    (*pIVar1)(pAVar3,0,pIVar4->rgctx_data[3].rgctxDataDummy);
    return pAVar3;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<object>$$ReadyFresh
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh (Il2CppObject* value, bool isFromCache, const MethodInfo_15793A0* method);
// 0x1815793a0

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
          (Il2CppObject *value,bool isFromCache,MethodInfo_15793A0 *method)

{
  Il2CppClass *pIVar1;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._State_k__BackingField = 1;
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._Value_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._IsFromCache_k__BackingField = isFromCache;
    return __this;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$ReadyFresh
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyFresh (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, bool isFromCache, const MethodInfo_1579120* method);
// 0x181579120

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyFresh
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,bool isFromCache,
          MethodInfo_1579120 *method)

{
  Il2CppMethodPointer pIVar1;
  void *pvVar2;
  MethodInfo *pMVar3;
  Il2CppRGCTXData *pIVar4;
  InvokerMethod pIVar5;
  longlong lVar6;
  Il2CppClass *pIVar7;
  ulonglong uVar8;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar9;
  Il2CppClass *pIVar10;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  undefined8 *destination;
  ulonglong size;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res8;
  void *local_res18 [2];
  undefined8 auStack_70 [5];
  undefined8 auStack_48 [2];
  
  pIVar7 = (Il2CppClass *)method->klass;
  local_res8 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    auStack_70[0] = 0x18157915c;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  size = (ulonglong)((pIVar7->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar8 = size + 0xf;
  if (uVar8 <= size) {
    uVar8 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x18157918a;
  lVar6 = -(uVar8 & 0xfffffffffffffff0);
  pIVar7 = (Il2CppClass *)method->klass;
  destination = (undefined8 *)(&stack0xffffffffffffffc8 + lVar6);
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x1815791a7;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  pIVar7 = pIVar7->rgctx_data->klass;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x1815791c2;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x1815791ca;
  pAVar9 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar7);
  pIVar7 = (Il2CppClass *)method->klass;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x1815791e2;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  pIVar10 = (Il2CppClass *)method->klass;
  pIVar1 = (pIVar7->rgctx_data[2].method)->methodPointer;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579205;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  pvVar2 = pIVar10->rgctx_data[2].rgctxDataDummy;
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579216;
  (*pIVar1)(pAVar9,pvVar2);
  if (pAVar9 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579234;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    pIVar10 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar7->rgctx_data[3].method)->methodPointer;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579257;
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    pvVar2 = pIVar10->rgctx_data[3].rgctxDataDummy;
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x18157926d;
    (*pIVar1)(pAVar9,1,pvVar2);
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579282;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&local_res8;
    if (*(int *)&(pIVar7->rgctx_data[1].method)->return_type < 0) {
      source = value;
    }
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x1815792a4;
    memcpy(destination,source,size);
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x1815792b9;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    if (-1 < *(int *)&(pIVar7->rgctx_data[1].method)->return_type) {
      destination = (undefined8 *)*destination;
    }
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x1815792e6;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    pMVar3 = pIVar7->rgctx_data[4].method;
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579306;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    pIVar4 = pIVar7->rgctx_data;
    *(undefined8 **)((longlong)auStack_48 + lVar6) = destination;
    pIVar1 = (pIVar4[4].method)->methodPointer;
    pIVar5 = pMVar3->invoker_method;
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x18157932b;
    local_res18[0] = destination;
    (*pIVar5)(pIVar1,pMVar3,pAVar9,local_res18,*(void **)((longlong)auStack_48 + lVar6));
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579340;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    pIVar10 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar7->rgctx_data[5].method)->methodPointer;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579363;
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    pvVar2 = pIVar10->rgctx_data[5].rgctxDataDummy;
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579377;
    (*pIVar1)(pAVar9,(ulonglong)isFromCache,pvVar2);
    return pAVar9;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181579392;
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<object>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing (Il2CppObject* value, const MethodInfo_15796F0* method);
// 0x1815796f0

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
          (Il2CppObject *value,MethodInfo_15796F0 *method)

{
  Il2CppClass *pIVar1;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._State_k__BackingField = 2;
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._Value_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._IsFromCache_k__BackingField = true;
    return __this;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_1579480* method);
// 0x181579480

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,MethodInfo_1579480 *method)

{
  Il2CppMethodPointer pIVar1;
  void *pvVar2;
  Il2CppRGCTXData *pIVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  Il2CppClass *pIVar6;
  ulonglong uVar7;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar8;
  Il2CppClass *pIVar9;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  MethodInfo *pMVar10;
  undefined8 *destination;
  ulonglong size;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res8;
  undefined8 auStack_60 [5];
  undefined8 auStack_38 [2];
  
  pIVar6 = (Il2CppClass *)method->klass;
  local_res8.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    auStack_60[0] = 0x1815794b9;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  size = (ulonglong)((pIVar6->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar7 = size + 0xf;
  if (uVar7 <= size) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x1815794e7;
  lVar5 = -(uVar7 & 0xfffffffffffffff0);
  pIVar6 = (Il2CppClass *)method->klass;
  destination = (undefined8 *)(&stack0xffffffffffffffd8 + lVar5);
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579504;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  pIVar6 = pIVar6->rgctx_data->klass;
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x18157951f;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579527;
  pAVar8 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar6);
  pIVar6 = (Il2CppClass *)method->klass;
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x18157953f;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  pIVar9 = (Il2CppClass *)method->klass;
  pIVar1 = (pIVar6->rgctx_data[2].method)->methodPointer;
  if (((pIVar9->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579562;
    pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
  }
  pvVar2 = pIVar9->rgctx_data[2].rgctxDataDummy;
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579573;
  (*pIVar1)(pAVar8,pvVar2);
  if (pAVar8 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pIVar6 = (Il2CppClass *)method->klass;
    if (((pIVar6->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579591;
      pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    }
    pIVar9 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar6->rgctx_data[3].method)->methodPointer;
    if (((pIVar9->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1815795b4;
      pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
    }
    pvVar2 = pIVar9->rgctx_data[3].rgctxDataDummy;
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1815795ca;
    (*pIVar1)(pAVar8,2,pvVar2);
    pIVar6 = (Il2CppClass *)method->klass;
    if (((pIVar6->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1815795df;
      pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    }
    source = &local_res8;
    if (*(int *)&(pIVar6->rgctx_data[1].method)->return_type < 0) {
      source = value;
    }
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579601;
    memcpy(destination,source,size);
    pIVar6 = (Il2CppClass *)method->klass;
    if (((pIVar6->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579616;
      pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    }
    if (-1 < *(int *)&(pIVar6->rgctx_data[1].method)->return_type) {
      destination = (undefined8 *)*destination;
    }
    pIVar6 = (Il2CppClass *)method->klass;
    if (((pIVar6->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579643;
      pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    }
    pMVar10 = pIVar6->rgctx_data[4].method;
    pIVar6 = (Il2CppClass *)method->klass;
    if (((pIVar6->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579663;
      pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    }
    pIVar3 = pIVar6->rgctx_data;
    *(undefined8 **)((longlong)auStack_38 + lVar5) = destination;
    pIVar1 = (pIVar3[4].method)->methodPointer;
    pIVar4 = pMVar10->invoker_method;
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181579688;
    local_res8.monitor = destination;
    (*pIVar4)(pIVar1,pMVar10,pAVar8,&local_res8.monitor,*(void **)((longlong)auStack_38 + lVar5));
    pIVar6 = (Il2CppClass *)method->klass;
    if (((pIVar6->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x18157969d;
      pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    }
    pIVar9 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar6->rgctx_data[5].method)->methodPointer;
    if (((pIVar9->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1815796c0;
      pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
    }
    pvVar2 = pIVar9->rgctx_data[5].rgctxDataDummy;
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1815796d2;
    (*pIVar1)(pAVar8,CONCAT71((int7)((ulonglong)pMVar10 >> 8),1),pvVar2);
    return pAVar8;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1815796ee;
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<object>$$FailedNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache (System_String_o* error, bool isFromCache, const MethodInfo_1578880* method);
// 0x181578880

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
          (System_String_o *error,bool isFromCache,MethodInfo_1578880 *method)

{
  bool bVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  
  if (Il2CppMethodInitialized_18434149c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_18434149c = '\x01';
  }
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar2);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._State_k__BackingField = 3;
    bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
    if (bVar1) {
      error = "unknown_error";
    }
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._Error_k__BackingField = error;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._IsFromCache_k__BackingField = isFromCache;
    return __this;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$FailedNoCache
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedNoCache (System_String_o* error, bool isFromCache, const MethodInfo_1578990* method);
// 0x181578990

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedNoCache
          (System_String_o *error,bool isFromCache,MethodInfo_1578990 *method)

{
  Il2CppMethodPointer pIVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar4;
  Il2CppClass *pIVar5;
  
  if (Il2CppMethodInitialized_18434149e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_18434149e = '\x01';
  }
  pIVar3 = (Il2CppClass *)method->klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  pIVar3 = pIVar3->rgctx_data->klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  pAVar4 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar3);
  pIVar3 = (Il2CppClass *)method->klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  pIVar5 = (Il2CppClass *)method->klass;
  pIVar1 = (pIVar3->rgctx_data[2].method)->methodPointer;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  (*pIVar1)(pAVar4,pIVar5->rgctx_data[2].rgctxDataDummy);
  if (pAVar4 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pIVar3 = (Il2CppClass *)method->klass;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    pIVar5 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar3->rgctx_data[3].method)->methodPointer;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    (*pIVar1)(pAVar4,3,pIVar5->rgctx_data[3].rgctxDataDummy);
    bVar2 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
    if (bVar2) {
      error = "unknown_error";
    }
    pIVar3 = (Il2CppClass *)method->klass;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    pIVar5 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar3->rgctx_data[6].method)->methodPointer;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    (*pIVar1)(pAVar4,error,pIVar5->rgctx_data[6].rgctxDataDummy);
    pIVar3 = (Il2CppClass *)method->klass;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    pIVar5 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar3->rgctx_data[5].method)->methodPointer;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    (*pIVar1)(pAVar4,(ulonglong)isFromCache,pIVar5->rgctx_data[5].rgctxDataDummy);
    return pAVar4;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<object>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale (Il2CppObject* value, System_String_o* error, const MethodInfo_1578B60* method);
// 0x181578b60

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
          (Il2CppObject *value,System_String_o *error,MethodInfo_1578B60 *method)

{
  bool bVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *__this;
  
  if (Il2CppMethodInitialized_18434149d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_18434149d = '\x01';
  }
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  __this = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar2);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._State_k__BackingField = 4;
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._Value_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
    bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
    if (bVar1) {
      error = "unknown_error";
    }
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._Error_k__BackingField = error;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._IsFromCache_k__BackingField = true;
    return __this;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Api_AottgQueryResult_TValue__o* ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedRefreshStale (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_String_o* error, const MethodInfo_1578C90* method);
// 0x181578c90

ApplicationManagers_Api_AottgQueryResult_TValue__o *
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType___FailedRefreshStale
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,System_String_o *error,
          MethodInfo_1578C90 *method)

{
  Il2CppMethodPointer pIVar1;
  void *pvVar2;
  MethodInfo *pMVar3;
  Il2CppRGCTXData *pIVar4;
  InvokerMethod pIVar5;
  longlong lVar6;
  bool bVar7;
  Il2CppClass *pIVar8;
  ulonglong uVar9;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar10;
  Il2CppClass *pIVar11;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  undefined8 *destination;
  ulonglong size;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res8;
  void *local_res18 [2];
  undefined8 auStack_70 [5];
  undefined8 auStack_48 [2];
  
  local_res8 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  if (g_data_18434149f == '\0') {
    auStack_70[0] = 0x181578ccb;
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    g_data_18434149f = '\x01';
  }
  pIVar8 = (Il2CppClass *)method->klass;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    auStack_70[0] = 0x181578ce7;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  size = (ulonglong)((pIVar8->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar9 = size + 0xf;
  if (uVar9 <= size) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x181578d15;
  lVar6 = -(uVar9 & 0xfffffffffffffff0);
  pIVar8 = (Il2CppClass *)method->klass;
  destination = (undefined8 *)(&stack0xffffffffffffffc8 + lVar6);
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578d32;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  pIVar8 = pIVar8->rgctx_data->klass;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578d4d;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578d55;
  pAVar10 = (ApplicationManagers_Api_AottgQueryResult_TValue__o *)il2cpp_codegen_object_new(pIVar8);
  pIVar8 = (Il2CppClass *)method->klass;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578d6d;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  pIVar11 = (Il2CppClass *)method->klass;
  pIVar1 = (pIVar8->rgctx_data[2].method)->methodPointer;
  if (((pIVar11->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578d90;
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
  }
  pvVar2 = pIVar11->rgctx_data[2].rgctxDataDummy;
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578da1;
  (*pIVar1)(pAVar10,pvVar2);
  if (pAVar10 != (ApplicationManagers_Api_AottgQueryResult_TValue__o *)0x0) {
    pIVar8 = (Il2CppClass *)method->klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578dbf;
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pIVar11 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar8->rgctx_data[3].method)->methodPointer;
    if (((pIVar11->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578de2;
      pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
    }
    pvVar2 = pIVar11->rgctx_data[3].rgctxDataDummy;
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578df8;
    (*pIVar1)(pAVar10,4,pvVar2);
    pIVar8 = (Il2CppClass *)method->klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578e0d;
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&local_res8;
    if (*(int *)&(pIVar8->rgctx_data[1].method)->return_type < 0) {
      source = value;
    }
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578e2f;
    memcpy(destination,source,size);
    pIVar8 = (Il2CppClass *)method->klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578e44;
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    if (-1 < *(int *)&(pIVar8->rgctx_data[1].method)->return_type) {
      destination = (undefined8 *)*destination;
    }
    pIVar8 = (Il2CppClass *)method->klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578e71;
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pMVar3 = pIVar8->rgctx_data[4].method;
    pIVar8 = (Il2CppClass *)method->klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578e91;
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pIVar4 = pIVar8->rgctx_data;
    *(undefined8 **)((longlong)auStack_48 + lVar6) = destination;
    pIVar1 = (pIVar4[4].method)->methodPointer;
    pIVar5 = pMVar3->invoker_method;
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578eb6;
    local_res18[0] = destination;
    (*pIVar5)(pIVar1,pMVar3,pAVar10,local_res18,*(void **)((longlong)auStack_48 + lVar6));
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578ec0;
    bVar7 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
    if (bVar7) {
      error = "unknown_error";
    }
    pIVar8 = (Il2CppClass *)method->klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578edf;
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pIVar11 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar8->rgctx_data[6].method)->methodPointer;
    if (((pIVar11->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578f02;
      pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
    }
    pvVar2 = pIVar11->rgctx_data[6].rgctxDataDummy;
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578f15;
    (*pIVar1)(pAVar10,error,pvVar2);
    pIVar8 = (Il2CppClass *)method->klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578f2a;
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pIVar11 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar8->rgctx_data[5].method)->methodPointer;
    if (((pIVar11->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578f4d;
      pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
    }
    pvVar2 = pIVar11->rgctx_data[5].rgctxDataDummy;
    *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578f5f;
    (*pIVar1)(pAVar10,CONCAT71((int7)((ulonglong)error >> 8),1),pvVar2);
    return pAVar10;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x181578f7a;
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryResult<object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryResult_object____ctor (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
ApplicationManagers_Api_AottgQueryResult_object____ctor(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
ApplicationManagers_Api_AottgQueryResult___Il2CppFullySharedGenericType____ctor(ApplicationManagers_Api_AottgQueryResult_TValue__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


