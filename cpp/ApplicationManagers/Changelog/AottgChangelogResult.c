// Type: ApplicationManagers.Changelog.AottgChangelogResult
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogResult<object>$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object____ctor (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t state, Il2CppObject* value, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo_1573360* method);
// 0x181573360

void ApplicationManagers_Changelog_AottgChangelogResult_object____ctor
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t state,
               Il2CppObject *value,System_String_o *error,bool isFromCache,bool isStale,bool isRefreshing,
               MethodInfo_1573360 *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = state;
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
  (__this->fields)._IsFromCache_k__BackingField = isFromCache;
  (__this->fields)._IsStale_k__BackingField = isStale;
  (__this->fields)._IsRefreshing_k__BackingField = isRefreshing;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType____ctor (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t state, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo_15731F0* method);
// 0x1815731f0

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType____ctor
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t state,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,System_String_o *error,
               bool isFromCache,bool isStale,bool isRefreshing,MethodInfo_15731F0 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  ulonglong uVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *destination;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res18;
  undefined8 auStack_80 [5];
  void *apvStack_58 [2];
  undefined1 local_48 [8];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_TValue->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x18157324e;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  destination = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(local_48 + lVar5);
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18157325d;
  local_res18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pMVar1 = method->klass->rgctx_data->_0_ApplicationManagers_Changelog_AottgChangelogResult_TValue__set_State;
  pIVar2 = pMVar1->methodPointer;
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x181573276;
  (*pIVar2)(__this,(ulonglong)(uint)state,pMVar1);
  source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&stack0x00000018;
  if ((int)(method->klass->rgctx_data->_1_TValue->_1).byval_arg.bits < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18157329c;
  memcpy(destination,source,size);
  if (-1 < (int)(method->klass->rgctx_data->_1_TValue->_1).byval_arg.bits) {
    destination = (destination->_1).image;
  }
  pAVar3 = method->klass;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((longlong)apvStack_58 + lVar5) = destination;
  pMVar1 = pAVar3->rgctx_data->_2_ApplicationManagers_Changelog_AottgChangelogResult_TValue__set_Value;
  pIVar2 = pMVar1->methodPointer;
  pIVar4 = pMVar1->invoker_method;
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x1815732e1;
  local_res18 = destination;
  (*pIVar4)(pIVar2,pMVar1,__this,&stack0x00000018,*(void **)((longlong)apvStack_58 + lVar5));
  pMVar1 = method->klass->rgctx_data->_3_ApplicationManagers_Changelog_AottgChangelogResult_TValue__set_Error;
  pIVar2 = pMVar1->methodPointer;
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x1815732fb;
  (*pIVar2)(__this,error,pMVar1);
  pMVar1 = method->klass->rgctx_data->
           _4_ApplicationManagers_Changelog_AottgChangelogResult_TValue__set_IsFromCache;
  pIVar2 = pMVar1->methodPointer;
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x181573316;
  (*pIVar2)(__this,(ulonglong)isFromCache,pMVar1);
  pMVar1 = method->klass->rgctx_data->
           _5_ApplicationManagers_Changelog_AottgChangelogResult_TValue__set_IsStale;
  pIVar2 = pMVar1->methodPointer;
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x181573331;
  (*pIVar2)(__this,(ulonglong)isStale,pMVar1);
  pMVar1 = method->klass->rgctx_data->
           _6_ApplicationManagers_Changelog_AottgChangelogResult_TValue__set_IsRefreshing;
  pIVar2 = pMVar1->methodPointer;
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18157334f;
  (*pIVar2)(__this,(ulonglong)isRefreshing,pMVar1);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_State
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogResult_object___get_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_546860* method);
// 0x180546860

int32_t
ApplicationManagers_Changelog_AottgChangelogResult_object___get_State(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, MethodInfo_546860* method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_State
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_15734B0* method);
// 0x1815734b0

int32_t ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_State
                  (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
                  MethodInfo_15734B0 *method)

{
  int32_t *piVar1;
  
  piVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(method->klass->rgctx_data->
                              _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).fields);
  return *piVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_State
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t value, const MethodInfo_560B20* method);
// 0x180560b20

void
ApplicationManagers_Changelog_AottgChangelogResult_object___set_State(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t value, MethodInfo_560B20* method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_State
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t value, const MethodInfo_1573740* method);
// 0x181573740

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_State
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t value,
               MethodInfo_1573740 *method)

{
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__RGCTXs *message;
  void *field;
  int32_t *piVar1;
  MethodInfo *in_R9;
  
  message = method->klass->rgctx_data;
  field = (message->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).fields;
  _guard_check_icall((int32_t)field,(System_String_o **)0x4,(System_String_o **)message,in_R9);
  piVar1 = il2cpp_codegen_get_instance_field_data_pointer(__this,field);
  *piVar1 = value;
  il2cpp_runtime_helper_180416190(*(undefined8 *)((longlong)field + 8),piVar1,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_Value
// il2cpp: Il2CppObject* ApplicationManagers_Changelog_AottgChangelogResult_object___get_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_573E90* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_Changelog_AottgChangelogResult_object___get_Value(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, MethodInfo_573E90* method)

{
  return (__this->fields)._Value_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_15734E0* method);
// 0x1815734e0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Value
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *__return_storage_ptr__,
          ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_15734E0 *method)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar4;
  ulonglong size;
  undefined8 auStack_50 [5];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_TValue->_2).stack_slot_size;
  uVar2 = size + 0xf;
  if (uVar2 <= size) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x181573527;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  pvVar3 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x181573551;
  pvVar3 = il2cpp_codegen_get_instance_field_data_pointer
                     (__return_storage_ptr__,(void *)((longlong)pvVar3 + 0x20));
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x18157355f;
  memcpy(&stack0xffffffffffffffd8 + lVar1,pvVar3,size);
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x18157356d;
  pUVar4 = memcpy(__this,&stack0xffffffffffffffd8 + lVar1,size);
  return pUVar4;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_Value
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, Il2CppObject* value, const MethodInfo_C8DE30* method);
// 0x180c8de30

void
ApplicationManagers_Changelog_AottgChangelogResult_object___set_Value(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, Il2CppObject* value, MethodInfo_C8DE30* method)

{
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_15737B0* method);
// 0x1815737b0

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Value
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,MethodInfo_15737B0 *method)

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
  auStack_40[0] = 0x181573804;
  lVar3 = -(uVar4 & 0xfffffffffffffff0);
  source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&local_res10;
  if ((int)(method->klass->rgctx_data->_1_TValue->_1).byval_arg.bits < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_40 + lVar3) = 0x181573832;
  local_res10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  memcpy(&stack0xffffffffffffffe8 + lVar3,source,size);
  pvVar2 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  *(undefined8 *)((longlong)auStack_40 + lVar3) = 0x18157385a;
  il2cpp_runtime_helper_180417320(__this,(longlong)pvVar2 + 0x20,&stack0xffffffffffffffe8 + lVar3,uVar1);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogResult_object___get_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_5852B0* method);
// 0x1805852b0

System_String_o*
ApplicationManagers_Changelog_AottgChangelogResult_object___get_Error(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, MethodInfo_5852B0* method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_15733D0* method);
// 0x1815733d0

System_String_o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Error
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_15733D0 *method)

{
  undefined8 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((longlong)
                                      (method->klass->rgctx_data->
                                       _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
                                      fields + 0x40));
  return (System_String_o *)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_Error
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, System_String_o* value, const MethodInfo_ACE2F0* method);
// 0x180ace2f0

void
ApplicationManagers_Changelog_AottgChangelogResult_object___set_Error(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, System_String_o* value, MethodInfo_ACE2F0* method)

{
  (__this->fields)._Error_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,value);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_Error
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, System_String_o* value, const MethodInfo_1573580* method);
// 0x181573580

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Error
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,System_String_o *value,
               MethodInfo_1573580 *method)

{
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__RGCTXs *message;
  void *pvVar1;
  undefined8 *puVar2;
  MethodInfo *in_R9;
  
  message = method->klass->rgctx_data;
  pvVar1 = (message->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).fields;
  _guard_check_icall((int)pvVar1 + 0x40,(System_String_o **)&g_data_00000008,(System_String_o **)message,in_R9);
  puVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)((longlong)pvVar1 + 0x40));
  *puVar2 = value;
  il2cpp_runtime_helper_180416190(*(undefined8 *)((longlong)pvVar1 + 0x48),puVar2,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_F1D480* method);
// 0x180f1d480

bool
ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsFromCache(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, MethodInfo_F1D480* method)

{
  return (__this->fields)._IsFromCache_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_1573400* method);
// 0x181573400

bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsFromCache
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               MethodInfo_1573400 *method)

{
  undefined1 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((longlong)
                                      (method->klass->rgctx_data->
                                       _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
                                      fields + 0x60));
  return (bool)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_F1D940* method);
// 0x180f1d940

void
ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsFromCache(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, MethodInfo_F1D940* method)

{
  (__this->fields)._IsFromCache_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_15735E0* method);
// 0x1815735e0

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsFromCache
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool value,
               MethodInfo_15735E0 *method)

{
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__RGCTXs *message;
  void *pvVar1;
  void *pvVar2;
  MethodInfo *in_R9;
  
  message = method->klass->rgctx_data;
  pvVar1 = (message->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).fields;
  _guard_check_icall((int)pvVar1 + 0x60,(System_String_o **)0x1,(System_String_o **)message,in_R9);
  pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)((longlong)pvVar1 + 0x60));
  *(bool *)pvVar2 = value;
  il2cpp_runtime_helper_180416190(*(undefined8 *)((longlong)pvVar1 + 0x68),pvVar2,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsStale
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_1573470* method);
// 0x181573470

bool
ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsStale(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, MethodInfo_1573470* method)

{
  return (__this->fields)._IsStale_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsStale
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_1573480* method);
// 0x181573480

bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsStale
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               MethodInfo_1573480 *method)

{
  undefined1 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((longlong)
                                      (method->klass->rgctx_data->
                                       _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
                                      fields + 0x80));
  return (bool)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsStale
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_15736C0* method);
// 0x1815736c0

void
ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsStale(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, MethodInfo_15736C0* method)

{
  (__this->fields)._IsStale_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsStale
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_15736D0* method);
// 0x1815736d0

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsStale
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool value,
               MethodInfo_15736D0 *method)

{
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__RGCTXs *message;
  void *pvVar1;
  void *pvVar2;
  MethodInfo *in_R9;
  
  message = method->klass->rgctx_data;
  pvVar1 = (message->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).fields;
  _guard_check_icall((int)pvVar1 + 0x80,(System_String_o **)0x1,(System_String_o **)message,in_R9);
  pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)((longlong)pvVar1 + 0x80));
  *(bool *)pvVar2 = value;
  il2cpp_runtime_helper_180416190(*(undefined8 *)((longlong)pvVar1 + 0x88),pvVar2,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_1573430* method);
// 0x181573430

bool
ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsRefreshing(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, MethodInfo_1573430* method)

{
  return (__this->fields)._IsRefreshing_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_1573440* method);
// 0x181573440

bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsRefreshing
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               MethodInfo_1573440 *method)

{
  undefined1 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((longlong)
                                      (method->klass->rgctx_data->
                                       _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
                                      fields + 0xa0));
  return (bool)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsRefreshing
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_15736B0* method);
// 0x1815736b0

void
ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsRefreshing(ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, MethodInfo_15736B0* method)

{
  (__this->fields)._IsRefreshing_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsRefreshing
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_1573640* method);
// 0x181573640

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsRefreshing
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool value,
               MethodInfo_1573640 *method)

{
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__RGCTXs *message;
  void *pvVar1;
  void *pvVar2;
  MethodInfo *in_R9;
  
  message = method->klass->rgctx_data;
  pvVar1 = (message->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).fields;
  _guard_check_icall((int)pvVar1 + 0xa0,(System_String_o **)0x1,(System_String_o **)message,in_R9);
  pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)((longlong)pvVar1 + 0xa0));
  *(bool *)pvVar2 = value;
  il2cpp_runtime_helper_180416190(*(undefined8 *)((longlong)pvVar1 + 0xa8),pvVar2,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$LoadingNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___LoadingNoCache (const MethodInfo_1572AC0* method);
// 0x181572ac0

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___LoadingNoCache(MethodInfo_1572AC0 *method)

{
  Il2CppClass *pIVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[7].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 0;
  (__this->fields)._Value_k__BackingField = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,(void *)0x0);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,(void *)0x0);
  (__this->fields)._IsFromCache_k__BackingField = false;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = true;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$LoadingNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___LoadingNoCache (const MethodInfo_1572B60* method);
// 0x181572b60

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___LoadingNoCache
          (MethodInfo_1572B60 *method)

{
  longlong lVar1;
  MethodInfo *pMVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  longlong lVar6;
  longlong lVar7;
  Il2CppClass *pIVar8;
  ulonglong uVar9;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined8 auStack_90 [5];
  longlong alStack_68 [2];
  undefined4 *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  pIVar8 = (Il2CppClass *)method->klass;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    auStack_90[0] = 0x181572b88;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  uVar11 = (ulonglong)((pIVar8->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar9 = uVar11 + 0xf;
  if (uVar9 <= uVar11) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x181572bb8;
  lVar6 = -(uVar9 & 0xfffffffffffffff0);
  uVar9 = uVar11 + 0xf;
  plVar12 = (longlong *)((longlong)&local_58 + lVar6);
  if (uVar9 <= uVar11) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x181572bd5;
  lVar7 = -(uVar9 & 0xfffffffffffffff0);
  lVar1 = (longlong)&local_58 + lVar7 + lVar6;
  *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572bea;
  il2cpp_runtime_helper_180522500(lVar1,0,uVar11);
  *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572bf7;
  il2cpp_runtime_helper_180522500(lVar1,0,uVar11);
  *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572c04;
  il2cpp_runtime_helper_180522500(plVar12,0,uVar11);
  pIVar8 = (Il2CppClass *)method->klass;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572c19;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  pIVar8 = pIVar8->rgctx_data[7].klass;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572c35;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572c3d;
  pAVar10 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar8);
  pIVar8 = (Il2CppClass *)method->klass;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572c55;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  if (-1 < *(int *)&(pIVar8->rgctx_data[1].method)->return_type) {
    plVar12 = (longlong *)*plVar12;
  }
  pIVar8 = (Il2CppClass *)method->klass;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572c82;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  pMVar2 = pIVar8->rgctx_data[8].method;
  pIVar8 = (Il2CppClass *)method->klass;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572ca2;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  local_58 = local_res20;
  local_res8[0] = 1;
  local_res20[0] = 0;
  local_40 = local_res10;
  local_48 = 0;
  local_38 = local_res18;
  local_res18[0] = 0;
  local_30 = local_res8;
  pMVar3 = pIVar8->rgctx_data[8].method;
  local_res10[0] = 0;
  local_50 = (longlong)plVar12;
  *(undefined1 **)((longlong)alStack_68 + lVar7 + lVar6) = local_res8;
  pIVar4 = pMVar3->methodPointer;
  pIVar5 = pMVar2->invoker_method;
  *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x181572cff;
  (*pIVar5)(pIVar4,pMVar2,pAVar10,&local_58,*(void **)((longlong)alStack_68 + lVar7 + lVar6));
  return pAVar10;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$ReadyFresh
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyFresh (Il2CppObject* value, bool isFromCache, const MethodInfo_1572ED0* method);
// 0x181572ed0

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyFresh
          (Il2CppObject *value,bool isFromCache,MethodInfo_1572ED0 *method)

{
  Il2CppClass *pIVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[7].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 1;
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,(void *)0x0);
  (__this->fields)._IsFromCache_k__BackingField = isFromCache;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$ReadyFresh
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyFresh (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, bool isFromCache, const MethodInfo_1572D10* method);
// 0x181572d10

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyFresh
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,bool isFromCache,
          MethodInfo_1572D10 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  longlong lVar4;
  Il2CppClass *pIVar5;
  ulonglong uVar6;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  undefined8 *destination;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res8;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined8 auStack_a0 [5];
  longlong alStack_78 [2];
  void *local_68 [3];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *local_50;
  undefined1 *local_48;
  void **local_40;
  
  pIVar5 = (Il2CppClass *)method->klass;
  local_res8.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    auStack_a0[0] = 0x181572d45;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  size = (ulonglong)((pIVar5->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x181572d72;
  lVar4 = -(uVar6 & 0xfffffffffffffff0);
  pIVar5 = (Il2CppClass *)method->klass;
  destination = (undefined8 *)((longlong)local_68 + lVar4);
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x181572d8f;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  source = &local_res8;
  if (*(int *)&(pIVar5->rgctx_data[1].method)->return_type < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x181572db1;
  memcpy(destination,source,size);
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x181572dc6;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  pIVar5 = pIVar5->rgctx_data[7].klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x181572de2;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x181572dea;
  pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar5);
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x181572e02;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  if (-1 < *(int *)&(pIVar5->rgctx_data[1].method)->return_type) {
    destination = (undefined8 *)*destination;
  }
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x181572e2f;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  pMVar1 = pIVar5->rgctx_data[8].method;
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x181572e4f;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  local_68[0] = local_res20;
  local_res8.monitor._0_1_ = 0;
  local_50 = &local_res8;
  local_res18[0] = 0;
  local_48 = local_res18;
  local_res8.klass =
       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)CONCAT71(local_res8.klass._1_7_,isFromCache);
  local_40 = &local_res8.monitor;
  local_res20[0] = 1;
  local_68[1] = destination;
  local_68[2] = (void *)0x0;
  pIVar2 = (pIVar5->rgctx_data[8].method)->methodPointer;
  *(void ***)((longlong)alStack_78 + lVar4) = &local_res8.monitor;
  pIVar3 = pMVar1->invoker_method;
  *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x181572ebe;
  (*pIVar3)(pIVar2,pMVar1,pAVar7,local_68,*(void **)((longlong)alStack_78 + lVar4));
  return pAVar7;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyStaleRefreshing (Il2CppObject* value, const MethodInfo_1573130* method);
// 0x181573130

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyStaleRefreshing
          (Il2CppObject *value,MethodInfo_1573130 *method)

{
  Il2CppClass *pIVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[7].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 2;
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,(void *)0x0);
  (__this->fields)._IsFromCache_k__BackingField = true;
  (__this->fields)._IsStale_k__BackingField = true;
  (__this->fields)._IsRefreshing_k__BackingField = true;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_1572F80* method);
// 0x181572f80

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,MethodInfo_1572F80 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  longlong lVar4;
  Il2CppClass *pIVar5;
  ulonglong uVar6;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  undefined8 *destination;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res8;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined8 auStack_90 [5];
  longlong alStack_68 [2];
  void *local_58 [3];
  void **local_40;
  undefined1 *local_38;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *local_30;
  
  pIVar5 = (Il2CppClass *)method->klass;
  local_res8.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    auStack_90[0] = 0x181572faf;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  size = (ulonglong)((pIVar5->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x181572fdc;
  lVar4 = -(uVar6 & 0xfffffffffffffff0);
  pIVar5 = (Il2CppClass *)method->klass;
  destination = (undefined8 *)((longlong)local_58 + lVar4);
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x181572ff9;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  source = &local_res8;
  if (*(int *)&(pIVar5->rgctx_data[1].method)->return_type < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x18157301b;
  memcpy(destination,source,size);
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x181573030;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  pIVar5 = pIVar5->rgctx_data[7].klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x18157304c;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x181573054;
  pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar5);
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x18157306c;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  if (-1 < *(int *)&(pIVar5->rgctx_data[1].method)->return_type) {
    destination = (undefined8 *)*destination;
  }
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x181573099;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  pMVar1 = pIVar5->rgctx_data[8].method;
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x1815730b9;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  local_58[0] = local_res20;
  local_res8.klass =
       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)CONCAT71(local_res8.klass._1_7_,1);
  local_40 = &local_res8.monitor;
  local_res18[0] = 1;
  local_38 = local_res18;
  local_res8.monitor._0_1_ = 1;
  local_30 = &local_res8;
  local_res20[0] = 2;
  local_58[1] = destination;
  local_58[2] = (void *)0x0;
  pIVar2 = (pIVar5->rgctx_data[8].method)->methodPointer;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o **)((longlong)alStack_68 + lVar4) = &local_res8;
  pIVar3 = pMVar1->invoker_method;
  *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x18157311c;
  (*pIVar3)(pIVar2,pMVar1,pAVar7,local_58,*(void **)((longlong)alStack_68 + lVar4));
  return pAVar7;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$FailedNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache (System_String_o* error, const MethodInfo_1572340* method);
// 0x181572340

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
          (System_String_o *error,MethodInfo_1572340 *method)

{
  bool bVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  if (Il2CppMethodInitialized_184341487 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_184341487 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if (bVar1) {
    error = "unknown_error";
  }
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[7].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar2);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 3;
  (__this->fields)._Value_k__BackingField = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,(void *)0x0);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
  (__this->fields)._IsFromCache_k__BackingField = false;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$FailedNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedNoCache (System_String_o* error, const MethodInfo_1572430* method);
// 0x181572430

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedNoCache
          (System_String_o *error,MethodInfo_1572430 *method)

{
  void *source;
  void *destination;
  void *destination_00;
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  Il2CppClass *pIVar10;
  ulonglong uVar11;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar12;
  ulonglong size;
  System_String_o *pSVar13;
  undefined8 *destination_01;
  System_String_o *local_res8;
  ulonglong local_res10;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined8 auStack_b0 [5];
  longlong alStack_88 [2];
  void *local_78 [2];
  System_String_o *local_68;
  ulonglong *local_60;
  undefined1 *local_58;
  System_String_o **local_50;
  
  local_res8 = error;
  if (g_data_184341489 == '\0') {
    auStack_b0[0] = 0x181572462;
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    g_data_184341489 = '\x01';
  }
  pIVar10 = (Il2CppClass *)method->klass;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    auStack_b0[0] = 0x18157247e;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  size = (ulonglong)((pIVar10->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar11 = size + 0xf;
  if (uVar11 <= size) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x1815724ae;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  uVar11 = size + 0xf;
  source = (void *)((longlong)local_78 + lVar4);
  if (uVar11 <= size) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x1815724cb;
  lVar5 = -(uVar11 & 0xfffffffffffffff0);
  local_res10 = (longlong)local_78 + lVar5 + lVar4;
  *(undefined8 *)((longlong)auStack_b0 + lVar5 + lVar4) = 0x1815724e7;
  il2cpp_runtime_helper_180522500(local_res10,0,size);
  uVar11 = size + 0xf;
  if (uVar11 <= size) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar5 + lVar4) = 0x1815724ff;
  lVar6 = -(uVar11 & 0xfffffffffffffff0);
  destination = (void *)((longlong)local_78 + lVar6 + lVar5 + lVar4);
  *(undefined8 *)((longlong)auStack_b0 + lVar6 + lVar5 + lVar4) = 0x181572514;
  il2cpp_runtime_helper_180522500(destination,0,size);
  uVar11 = size + 0xf;
  if (uVar11 <= size) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar6 + lVar5 + lVar4) = 0x18157252c;
  lVar7 = -(uVar11 & 0xfffffffffffffff0);
  destination_00 = (void *)((longlong)local_78 + lVar7 + lVar6 + lVar5 + lVar4);
  *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572541;
  il2cpp_runtime_helper_180522500(destination_00,0,size);
  uVar11 = size + 0xf;
  if (uVar11 <= size) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572559;
  lVar8 = -(uVar11 & 0xfffffffffffffff0);
  destination_01 = (undefined8 *)((longlong)local_78 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4);
  *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18157256e;
  il2cpp_runtime_helper_180522500(destination_01,0,size);
  *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18157257f;
  il2cpp_runtime_helper_180522500(local_res10,0,size);
  *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18157258c;
  il2cpp_runtime_helper_180522500(source,0,size);
  *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18157259d;
  bVar9 = System_String__IsNullOrEmpty(local_res8,(MethodInfo *)0x0);
  if (bVar9) {
    *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815725af;
    memcpy(destination,source,size);
    pSVar13 = "unknown_error";
    *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815725c4;
    memcpy(destination_01,destination,size);
  }
  else {
    *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815725ce;
    memcpy(destination_00,source,size);
    *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815725dc;
    memcpy(destination_01,destination_00,size);
    pSVar13 = local_res8;
  }
  pIVar10 = (Il2CppClass *)method->klass;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815725f8;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  pIVar10 = pIVar10->rgctx_data[7].klass;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572614;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18157261c;
  pAVar12 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar10)
  ;
  pIVar10 = (Il2CppClass *)method->klass;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572634;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  if (-1 < *(int *)&(pIVar10->rgctx_data[1].method)->return_type) {
    destination_01 = (undefined8 *)*destination_01;
  }
  pIVar10 = (Il2CppClass *)method->klass;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572661;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  pMVar1 = pIVar10->rgctx_data[8].method;
  pIVar10 = (Il2CppClass *)method->klass;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572681;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  local_78[0] = local_res20;
  local_res8 = (System_String_o *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_60 = &local_res10;
  local_res18[0] = 0;
  local_58 = local_res18;
  local_res10 = local_res10 & 0xffffffffffffff00;
  local_50 = &local_res8;
  local_res20[0] = 3;
  local_78[1] = destination_01;
  local_68 = pSVar13;
  pIVar2 = (pIVar10->rgctx_data[8].method)->methodPointer;
  *(System_String_o ***)((longlong)alStack_88 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = &local_res8;
  pIVar3 = pMVar1->invoker_method;
  *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815726fb;
  (*pIVar3)(pIVar2,pMVar1,pAVar12,local_78,
            *(void **)((longlong)alStack_88 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4));
  return pAVar12;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___FailedRefreshStale (Il2CppObject* value, System_String_o* error, const MethodInfo_15729E0* method);
// 0x1815729e0

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___FailedRefreshStale
          (Il2CppObject *value,System_String_o *error,MethodInfo_15729E0 *method)

{
  bool bVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  if (Il2CppMethodInitialized_184341488 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_184341488 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if (bVar1) {
    error = "unknown_error";
  }
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[7].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar2);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 4;
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
  (__this->fields)._IsFromCache_k__BackingField = true;
  (__this->fields)._IsStale_k__BackingField = true;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedRefreshStale (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_String_o* error, const MethodInfo_1572710* method);
// 0x181572710

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedRefreshStale
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,System_String_o *error,
          MethodInfo_1572710 *method)

{
  void *destination;
  void *destination_00;
  void *destination_01;
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  Il2CppClass *pIVar9;
  ulonglong uVar10;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar11;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  undefined8 *destination_02;
  System_String_o *pSVar12;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res8;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined8 auStack_b0 [5];
  longlong alStack_88 [2];
  void *local_78 [2];
  System_String_o *local_68;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *local_60;
  undefined1 *local_58;
  void **local_50;
  
  local_res8.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  local_res8.monitor = error;
  if (g_data_18434148a == '\0') {
    auStack_b0[0] = 0x18157274a;
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    g_data_18434148a = '\x01';
  }
  pIVar9 = (Il2CppClass *)method->klass;
  if (((pIVar9->_2).bitflags1 & 1) == 0) {
    auStack_b0[0] = 0x181572766;
    pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
  }
  size = (ulonglong)((pIVar9->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar10 = size + 0xf;
  if (uVar10 <= size) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x181572796;
  lVar4 = -(uVar10 & 0xfffffffffffffff0);
  uVar10 = size + 0xf;
  destination = (void *)((longlong)local_78 + lVar4);
  if (uVar10 <= size) {
    uVar10 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x1815727b3;
  lVar5 = -(uVar10 & 0xfffffffffffffff0);
  destination_00 = (void *)((longlong)local_78 + lVar5 + lVar4);
  *(undefined8 *)((longlong)auStack_b0 + lVar5 + lVar4) = 0x1815727c8;
  il2cpp_runtime_helper_180522500(destination_00,0,size);
  uVar10 = size + 0xf;
  if (uVar10 <= size) {
    uVar10 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar5 + lVar4) = 0x1815727dd;
  lVar6 = -(uVar10 & 0xfffffffffffffff0);
  destination_01 = (void *)((longlong)local_78 + lVar6 + lVar5 + lVar4);
  *(undefined8 *)((longlong)auStack_b0 + lVar6 + lVar5 + lVar4) = 0x1815727f2;
  il2cpp_runtime_helper_180522500(destination_01,0,size);
  uVar10 = size + 0xf;
  if (uVar10 <= size) {
    uVar10 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar6 + lVar5 + lVar4) = 0x181572807;
  lVar7 = -(uVar10 & 0xfffffffffffffff0);
  destination_02 = (undefined8 *)((longlong)local_78 + lVar7 + lVar6 + lVar5 + lVar4);
  *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18157281c;
  il2cpp_runtime_helper_180522500(destination_02,0,size);
  pIVar9 = (Il2CppClass *)method->klass;
  if (((pIVar9->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572831;
    pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
  }
  source = &local_res8;
  if (*(int *)&(pIVar9->rgctx_data[1].method)->return_type < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572856;
  memcpy(destination,source,size);
  *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572864;
  bVar8 = System_String__IsNullOrEmpty(local_res8.monitor,(MethodInfo *)0x0);
  if (bVar8) {
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572876;
    memcpy(destination_00,destination,size);
    pSVar12 = "unknown_error";
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18157288b;
    memcpy(destination_02,destination_00,size);
  }
  else {
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572895;
    memcpy(destination_01,destination,size);
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815728a3;
    memcpy(destination_02,destination_01,size);
    pSVar12 = local_res8.monitor;
  }
  pIVar9 = (Il2CppClass *)method->klass;
  if (((pIVar9->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815728bf;
    pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
  }
  pIVar9 = pIVar9->rgctx_data[7].klass;
  if (((pIVar9->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815728db;
    pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815728e3;
  pAVar11 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar9);
  pIVar9 = (Il2CppClass *)method->klass;
  if (((pIVar9->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815728fb;
    pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
  }
  if (-1 < *(int *)&(pIVar9->rgctx_data[1].method)->return_type) {
    destination_02 = (undefined8 *)*destination_02;
  }
  pIVar9 = (Il2CppClass *)method->klass;
  if (((pIVar9->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572928;
    pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
  }
  pMVar1 = pIVar9->rgctx_data[8].method;
  pIVar9 = (Il2CppClass *)method->klass;
  if (((pIVar9->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x181572948;
    pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
  }
  local_78[0] = local_res20;
  local_res8.monitor = (void *)((ulonglong)local_res8.monitor & 0xffffffffffffff00);
  local_60 = &local_res8;
  local_res18[0] = 1;
  local_58 = local_res18;
  local_res8.klass =
       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)CONCAT71(local_res8.klass._1_7_,1);
  local_50 = &local_res8.monitor;
  local_res20[0] = 4;
  local_78[1] = destination_02;
  local_68 = pSVar12;
  pIVar2 = (pIVar9->rgctx_data[8].method)->methodPointer;
  *(void ***)((longlong)alStack_88 + lVar7 + lVar6 + lVar5 + lVar4) = &local_res8.monitor;
  pIVar3 = pMVar1->invoker_method;
  *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1815729c2;
  (*pIVar3)(pIVar2,pMVar1,pAVar11,local_78,*(void **)((longlong)alStack_88 + lVar7 + lVar6 + lVar5 + lVar4));
  return pAVar11;
}


