// Type: ApplicationManagers.Api.AottgQueryFetchResult
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgQueryFetchResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Success
// il2cpp: bool ApplicationManagers_Api_AottgQueryFetchResult_object___get_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_E5A320* method);
// 0x180e5a320

bool
ApplicationManagers_Api_AottgQueryFetchResult_object___get_Success(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, MethodInfo_E5A320* method)

{
  return (__this->fields)._Success_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Success
// il2cpp: bool ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_1578720* method);
// 0x181578720

bool ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Success
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,MethodInfo_1578720 *method)

{
  undefined1 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(method->klass->rgctx_data->
                              _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).fields);
  return (bool)*puVar1;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Success
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, bool value, const MethodInfo_11124D0* method);
// 0x1811124d0

void
ApplicationManagers_Api_AottgQueryFetchResult_object___set_Success(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, bool value, MethodInfo_11124D0* method)

{
  (__this->fields)._Success_k__BackingField = value;
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Success
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Success (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, bool value, const MethodInfo_1578750* method);
// 0x181578750

void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Success
               (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this,bool value,
               MethodInfo_1578750 *method)

{
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__RGCTXs *message;
  void *field;
  void *pvVar1;
  MethodInfo *in_R9;
  
  message = method->klass->rgctx_data;
  field = (message->_0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).fields;
  _guard_check_icall((int32_t)field,(System_String_o **)0x1,(System_String_o **)message,in_R9);
  pvVar1 = il2cpp_codegen_get_instance_field_data_pointer(__this,field);
  *(bool *)pvVar1 = value;
  il2cpp_runtime_helper_180416190(*(undefined8 *)((longlong)field + 8),pvVar1,0);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Value
// il2cpp: Il2CppObject* ApplicationManagers_Api_AottgQueryFetchResult_object___get_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_573E90* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_Api_AottgQueryFetchResult_object___get_Value(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, MethodInfo_573E90* method)

{
  return (__this->fields)._Value_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_B131A0* method);
// 0x180b131a0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Value(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, MethodInfo_B131A0* method)

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


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, Il2CppObject* value, const MethodInfo_C8DE30* method);
// 0x180c8de30

void
ApplicationManagers_Api_AottgQueryFetchResult_object___set_Value(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, Il2CppObject* value, MethodInfo_C8DE30* method)

{
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Value (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_15787C0* method);
// 0x1815787c0

void
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Value(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, MethodInfo_15787C0* method)

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


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryFetchResult_object___get_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_5852B0* method);
// 0x1805852b0

System_String_o*
ApplicationManagers_Api_AottgQueryFetchResult_object___get_Error(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, MethodInfo_5852B0* method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_C8FF90* method);
// 0x180c8ff90

System_String_o*
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___get_Error(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, MethodInfo_C8FF90* method)

{
  undefined8 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((longlong)
                                      (method->klass->rgctx_data->
                                       _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_->_1).fields +
                                     0x40));
  return (System_Action_o *)*puVar1;
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object___set_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, System_String_o* value, const MethodInfo_ACE2F0* method);
// 0x180ace2f0

void
ApplicationManagers_Api_AottgQueryFetchResult_object___set_Error(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, System_String_o* value, MethodInfo_ACE2F0* method)

{
  (__this->fields)._Error_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,value);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Error (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, System_String_o* value, const MethodInfo_C8FFE0* method);
// 0x180c8ffe0

void
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___set_Error(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, System_String_o* value, MethodInfo_C8FFE0* method)

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


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$Ok
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult_object___Ok (Il2CppObject* value, const MethodInfo_1578650* method);
// 0x181578650

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult_object___Ok(Il2CppObject *value,MethodInfo_1578650 *method)

{
  Il2CppClass *pIVar1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._Success_k__BackingField = true;
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._Value_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
    return __this;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$Ok
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Ok (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_1578430* method);
// 0x181578430

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Ok
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,MethodInfo_1578430 *method)

{
  Il2CppMethodPointer pIVar1;
  void *pvVar2;
  MethodInfo *pMVar3;
  Il2CppRGCTXData *pIVar4;
  InvokerMethod pIVar5;
  longlong lVar6;
  Il2CppClass *pIVar7;
  ulonglong uVar8;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar9;
  Il2CppClass *pIVar10;
  void *pvVar11;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  undefined8 *destination;
  ulonglong size;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res8;
  undefined8 auStack_60 [5];
  undefined8 auStack_38 [2];
  
  pIVar7 = (Il2CppClass *)method->klass;
  local_res8.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    auStack_60[0] = 0x181578469;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  size = (ulonglong)((pIVar7->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar8 = size + 0xf;
  if (uVar8 <= size) {
    uVar8 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x181578497;
  lVar6 = -(uVar8 & 0xfffffffffffffff0);
  pIVar7 = (Il2CppClass *)method->klass;
  destination = (undefined8 *)(&stack0xffffffffffffffd8 + lVar6);
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x1815784b4;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  pIVar7 = pIVar7->rgctx_data->klass;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x1815784cf;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x1815784d7;
  pAVar9 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_codegen_object_new(pIVar7);
  pIVar7 = (Il2CppClass *)method->klass;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x1815784ef;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  pIVar10 = (Il2CppClass *)method->klass;
  pIVar1 = (pIVar7->rgctx_data[2].method)->methodPointer;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x181578512;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  pvVar11 = pIVar10->rgctx_data[2].rgctxDataDummy;
  *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x181578522;
  (*pIVar1)(pAVar9,pvVar11);
  if (pAVar9 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x181578540;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    pIVar10 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar7->rgctx_data[3].method)->methodPointer;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x181578563;
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    pvVar2 = pIVar10->rgctx_data[3].rgctxDataDummy;
    *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x181578575;
    (*pIVar1)(pAVar9,CONCAT71((int7)((ulonglong)pvVar11 >> 8),1),pvVar2);
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x18157858a;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    source = &local_res8;
    if (*(int *)&(pIVar7->rgctx_data[1].method)->return_type < 0) {
      source = value;
    }
    *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x1815785ac;
    memcpy(destination,source,size);
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x1815785c1;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    if (-1 < *(int *)&(pIVar7->rgctx_data[1].method)->return_type) {
      destination = (undefined8 *)*destination;
    }
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x1815785ee;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    pMVar3 = pIVar7->rgctx_data[4].method;
    pIVar7 = (Il2CppClass *)method->klass;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x18157860e;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    pIVar4 = pIVar7->rgctx_data;
    *(undefined8 **)((longlong)auStack_38 + lVar6) = destination;
    pIVar1 = (pIVar4[4].method)->methodPointer;
    pIVar5 = pMVar3->invoker_method;
    *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x181578632;
    local_res8.monitor = destination;
    (*pIVar5)(pIVar1,pMVar3,pAVar9,&local_res8.monitor,*(void **)((longlong)auStack_38 + lVar6));
    return pAVar9;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar6) = 0x18157864e;
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$Fail
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult_object___Fail (System_String_o* error, const MethodInfo_1578330* method);
// 0x181578330

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult_object___Fail(System_String_o *error,MethodInfo_1578330 *method)

{
  bool bVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *__this;
  
  if (Il2CppMethodInitialized_18434149a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_18434149a = '\x01';
  }
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  __this = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_codegen_object_new(pIVar2);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._Success_k__BackingField = false;
    bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
    if (bVar1) {
      error = "unknown_error";
    }
    if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
      il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
    }
    (__this->fields)._Error_k__BackingField = error;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
    return __this;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$Fail
// il2cpp: ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Fail (System_String_o* error, const MethodInfo_15781B0* method);
// 0x1815781b0

ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType___Fail
          (System_String_o *error,MethodInfo_15781B0 *method)

{
  Il2CppMethodPointer pIVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar4;
  Il2CppClass *pIVar5;
  
  if (Il2CppMethodInitialized_18434149b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_18434149b = '\x01';
  }
  pIVar3 = (Il2CppClass *)method->klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  pIVar3 = pIVar3->rgctx_data->klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  pAVar4 = (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)il2cpp_codegen_object_new(pIVar3);
  pIVar3 = (Il2CppClass *)method->klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  pIVar1 = (pIVar3->rgctx_data[2].method)->methodPointer;
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  (*pIVar1)(pAVar4);
  if (pAVar4 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0) {
    pIVar3 = (Il2CppClass *)method->klass;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    pIVar5 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar3->rgctx_data[3].method)->methodPointer;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    (*pIVar1)(pAVar4,0,pIVar5->rgctx_data[3].rgctxDataDummy);
    bVar2 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
    if (bVar2) {
      error = "unknown_error";
    }
    pIVar3 = (Il2CppClass *)method->klass;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    pIVar5 = (Il2CppClass *)method->klass;
    pIVar1 = (pIVar3->rgctx_data[5].method)->methodPointer;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    (*pIVar1)(pAVar4,error,pIVar5->rgctx_data[5].rgctxDataDummy);
    return pAVar4;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Api.AottgQueryFetchResult<object>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult_object____ctor (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
ApplicationManagers_Api_AottgQueryFetchResult_object____ctor(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType____ctor (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
ApplicationManagers_Api_AottgQueryFetchResult___Il2CppFullySharedGenericType____ctor(ApplicationManagers_Api_AottgQueryFetchResult_TValue__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


