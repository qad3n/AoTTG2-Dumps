// Type: ApplicationManagers.Changelog.AottgChangelogResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogResult<object>$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object____ctor (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t state, Il2CppObject* value, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo_3314DC0* method);
// 0x3414dc0

void ApplicationManagers_Changelog_AottgChangelogResult_object____ctor
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t state,
               Il2CppObject *value,System_String_o *error,bool_conflict isFromCache,bool_conflict isStale,
               bool_conflict isRefreshing,MethodInfo_3314DC0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = state;
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField,value);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)isFromCache;
  *(char *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = (char)isStale;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = (undefined1)isRefreshing;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType____ctor (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t state, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo_3315320* method);
// 0x3415320

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType____ctor
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t state,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,System_String_o *error,
               bool_conflict isFromCache,bool_conflict isStale,bool_conflict isRefreshing,
               MethodInfo_3315320 *method)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  undefined1 uVar7;
  int32_t iVar8;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  undefined4 in_stack_00000014;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_60 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_50;
  void *local_48;
  undefined1 local_3c;
  undefined1 local_38;
  int32_t local_34;
  
  local_48 = value.monitor;
  _local_38 = SUB84(error,0);
  lVar2 = CONCAT44(in_stack_00000014,isRefreshing);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 8) + 0xfc);
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_60 + lVar5 + 8U);
  local_50 = value.klass;
  _local_3c = isFromCache;
  local_34 = state;
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x341537d;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  iVar8 = local_34;
  pcVar1 = *(code **)**(undefined8 **)(*(long *)(lVar2 + 0x20) + 0xc0);
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x3415394;
  (*pcVar1)(__this,iVar8);
  lVar2 = *(long *)(lVar2 + 0x20);
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb0;
  if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x28) < 0) {
    __src = value.klass;
  }
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x34153bc;
  memcpy(__dest,__src,__n);
  lVar2 = *(long *)(lVar2 + 0xc0);
  puVar3 = *(undefined8 **)(lVar2 + 0x10);
  uVar4 = *puVar3;
  if (-1 < *(int *)(*(long *)(lVar2 + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  pcVar1 = (code *)puVar3[2];
  apUStack_60[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x34153e9;
  (*pcVar1)(uVar4,puVar3,__this,apUStack_60 + 1,__dest);
  pvVar6 = local_48;
  lVar2 = CONCAT44(in_stack_00000014,isRefreshing);
  pcVar1 = (code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x18);
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x3415408;
  (*pcVar1)(__this,pvVar6);
  uVar7 = local_38;
  pcVar1 = (code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x20);
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x3415420;
  (*pcVar1)(__this,uVar7);
  uVar7 = local_3c;
  pcVar1 = (code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x28);
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x3415438;
  (*pcVar1)(__this,uVar7);
  pcVar1 = (code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x30);
  *(undefined8 *)((long)apUStack_60 + lVar5) = 0x3415450;
  (*pcVar1)(__this,(undefined1)isStale);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_State
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogResult_object___get_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_3314E30* method);
// 0x3414e30

int32_t ApplicationManagers_Changelog_AottgChangelogResult_object___get_State
                  (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
                  MethodInfo_3314E30 *method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_State
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_3315460* method);
// 0x3415460

int32_t ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_State
                  (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
                  MethodInfo_3315460 *method)

{
  int32_t *piVar1;
  
  piVar1 = (int32_t *)
           il2cpp_runtime_helper_02338550(__this,(method->klass->rgctx_data->
                                      _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
                                     fields);
  return *piVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_State
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t value, const MethodInfo_3314E40* method);
// 0x3414e40

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_State
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t value,
               MethodInfo_3314E40 *method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_State
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t value, const MethodInfo_3315480* method);
// 0x3415480

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_State
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t value,
               MethodInfo_3315480 *method)

{
  void *pvVar1;
  int32_t *piVar2;
  
  pvVar1 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  il2cpp_runtime_helper_022b2950(pvVar1,4);
  piVar2 = (int32_t *)il2cpp_runtime_helper_02338550(__this,pvVar1);
  *piVar2 = value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar1 + 8),piVar2,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_Value
// il2cpp: Il2CppObject* ApplicationManagers_Changelog_AottgChangelogResult_object___get_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_3314E50* method);
// 0x3414e50

Il2CppObject *
ApplicationManagers_Changelog_AottgChangelogResult_object___get_Value
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_3314E50 *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_33154D0* method);
// 0x34154d0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Value
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_33154D0 *method)

{
  long lVar1;
  long lVar2;
  void *__src;
  long in_RDX;
  void *extraout_RDX;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar3;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(*(long *)(in_RDX + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar1 + 8) + 0xfc);
  lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x80);
  *(undefined8 *)((long)&uStack_30 + lVar2) = 0x3415518;
  __src = (void *)il2cpp_runtime_helper_02338550(__this,lVar1 + 0x20);
  *(undefined8 *)((long)&uStack_30 + lVar2) = 0x3415526;
  memcpy(auStack_28 + lVar2,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar2) = 0x3415534;
  UVar3.klass = memcpy(method,auStack_28 + lVar2,__n);
  UVar3.monitor = extraout_RDX;
  return UVar3;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_Value
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, Il2CppObject* value, const MethodInfo_3314E60* method);
// 0x3414e60

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Value
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,Il2CppObject *value,
               MethodInfo_3314E60 *method)

{
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_3315540* method);
// 0x3415540

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Value
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_3315540 *method)

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
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x3415595;
  memcpy(auStack_38 + lVar3,__src,__n);
  lVar1 = *(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x38) + 0x80);
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x34155ba;
  il2cpp_runtime_helper_022b2970(__this,lVar1 + 0x20,auStack_38 + lVar3,__n);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogResult_object___get_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_3314E70* method);
// 0x3414e70

System_String_o *
ApplicationManagers_Changelog_AottgChangelogResult_object___get_Error
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_3314E70 *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_33155D0* method);
// 0x34155d0

System_String_o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Error
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_33155D0 *method)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           il2cpp_runtime_helper_02338550(__this,(long)(method->klass->rgctx_data->
                                            _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1)
                                           .fields + 0x40);
  return (System_String_o *)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_Error
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, System_String_o* value, const MethodInfo_3314E80* method);
// 0x3414e80

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Error
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,System_String_o *value,
               MethodInfo_3314E80 *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_Error
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, System_String_o* value, const MethodInfo_3315600* method);
// 0x3415600

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Error
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,System_String_o *value,
               MethodInfo_3315600 *method)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  lVar1 = (long)pvVar2 + 0x40;
  il2cpp_runtime_helper_022b2950(lVar1,8);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_02338550(__this,lVar1);
  *puVar3 = value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar2 + 0x48),puVar3,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_3314E90* method);
// 0x3414e90

bool_conflict
ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsFromCache
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_3314E90 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsFromCache_k__BackingField);
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_3315660* method);
// 0x3415660

bool_conflict
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsFromCache
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_3315660 *method)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           il2cpp_runtime_helper_02338550(__this,(long)(method->klass->rgctx_data->
                                            _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1)
                                           .fields + 0x60);
  return (bool_conflict)CONCAT71((int7)((ulong)puVar1 >> 8),*puVar1);
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_3314EA0* method);
// 0x3414ea0

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsFromCache
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool_conflict value,
               MethodInfo_3314EA0 *method)

{
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_3315690* method);
// 0x3415690

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsFromCache
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool_conflict value,
               MethodInfo_3315690 *method)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  lVar1 = (long)pvVar2 + 0x60;
  il2cpp_runtime_helper_022b2950(lVar1,1);
  puVar3 = (undefined1 *)il2cpp_runtime_helper_02338550(__this,lVar1);
  *puVar3 = (char)value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar2 + 0x68),puVar3,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsStale
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_3314EB0* method);
// 0x3414eb0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsStale
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_3314EB0 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1));
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsStale
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_33156F0* method);
// 0x34156f0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsStale
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_33156F0 *method)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           il2cpp_runtime_helper_02338550(__this,(long)(method->klass->rgctx_data->
                                            _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1)
                                           .fields + 0x80);
  return (bool_conflict)CONCAT71((int7)((ulong)puVar1 >> 8),*puVar1);
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsStale
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_3314EC0* method);
// 0x3414ec0

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsStale
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool_conflict value,
               MethodInfo_3314EC0 *method)

{
  *(char *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = (char)value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsStale
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_3315720* method);
// 0x3415720

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsStale
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool_conflict value,
               MethodInfo_3315720 *method)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  lVar1 = (long)pvVar2 + 0x80;
  il2cpp_runtime_helper_022b2950(lVar1,1);
  puVar3 = (undefined1 *)il2cpp_runtime_helper_02338550(__this,lVar1);
  *puVar3 = (char)value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar2 + 0x88),puVar3,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_3314ED0* method);
// 0x3414ed0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsRefreshing
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_3314ED0 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2));
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_3315780* method);
// 0x3415780

bool_conflict
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsRefreshing
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_3315780 *method)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           il2cpp_runtime_helper_02338550(__this,(long)(method->klass->rgctx_data->
                                            _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1)
                                           .fields + 0xa0);
  return (bool_conflict)CONCAT71((int7)((ulong)puVar1 >> 8),*puVar1);
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsRefreshing
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_3314EE0* method);
// 0x3414ee0

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsRefreshing
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool_conflict value,
               MethodInfo_3314EE0 *method)

{
  *(char *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = (char)value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsRefreshing
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_33157B0* method);
// 0x34157b0

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsRefreshing
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool_conflict value,
               MethodInfo_33157B0 *method)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  pvVar2 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  lVar1 = (long)pvVar2 + 0xa0;
  il2cpp_runtime_helper_022b2950(lVar1,1);
  puVar3 = (undefined1 *)il2cpp_runtime_helper_02338550(__this,lVar1);
  *puVar3 = (char)value;
  il2cpp_runtime_helper_022b2880(*(undefined8 *)((long)pvVar2 + 0xa8),puVar3,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$LoadingNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___LoadingNoCache (const MethodInfo_3314EF0* method);
// 0x3414ef0

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___LoadingNoCache(MethodInfo_3314EF0 *method)

{
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 0;
  (__this->fields)._Value_k__BackingField = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField,0);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 1;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$LoadingNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___LoadingNoCache (const MethodInfo_3315810* method);
// 0x3415810

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___LoadingNoCache
          (MethodInfo_3315810 *method)

{
  ushort uVar1;
  Il2CppMethodPointer pIVar2;
  MethodInfo *pMVar3;
  InvokerMethod pIVar4;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar5;
  ulong uVar6;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar7;
  Il2CppClass *pIVar8;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar9;
  long lVar10;
  void *__s;
  ulong __n;
  undefined8 *__dest;
  undefined8 uStack_70;
  undefined1 *local_68 [4];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  pAVar5 = method->klass;
  pAVar7 = pAVar5;
  if (((pAVar5->_2).field_0x6d & 1) == 0) {
    uStack_70 = 0x341583a;
    pAVar5 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar5);
    pAVar7 = method->klass;
  }
  __n = (ulong)(pAVar5->rgctx_data->_1_TValue->_2).actualSize;
  uVar6 = __n + 0xf & 0xfffffffffffffff0;
  __dest = (undefined8 *)((long)local_68 - uVar6);
  __s = (void *)((long)__dest - uVar6);
  *(undefined8 *)((long)__s + -8) = 0x341587d;
  memset(__s,0,__n);
  *(undefined8 *)((long)__s + -8) = 0x341588a;
  memset(__s,0,__n);
  *(undefined8 *)((long)__s + -8) = 0x3415898;
  memcpy(__dest,__s,__n);
  if (((pAVar7->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x34158aa;
    pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar7);
  }
  pIVar8 = pAVar7->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x34158c6;
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)__s + -8) = 0x34158ce;
  pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar8);
  pAVar5 = method->klass;
  uVar1 = *(ushort *)&(pAVar5->_2).field_0x6d;
  pAVar7 = pAVar5;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x34158e6;
    pAVar5 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    uVar1 = *(ushort *)&(method->klass->_2).field_0x6d;
    pAVar7 = method->klass;
  }
  pIVar2 = pAVar5->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_TValue___ctor->
           methodPointer;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x341590e;
    lVar10 = il2cpp_runtime_helper_023009c0();
    pAVar7 = method->klass;
    uVar1 = *(ushort *)&(pAVar7->_2).field_0x6d;
    pMVar3 = *(MethodInfo **)(*(long *)(lVar10 + 0xc0) + 0x40);
  }
  else {
    pMVar3 = pAVar7->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_TValue___ctor;
  }
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x3415943;
    pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0();
  }
  if (-1 < (int)(pAVar7->rgctx_data->_1_TValue->_1).byval_arg.bits) {
    __dest = (undefined8 *)*__dest;
  }
  local_38 = 0;
  local_33 = 0;
  local_32 = 0;
  local_31 = 1;
  local_68[0] = (undefined1 *)&local_38;
  local_68[2] = (undefined1 *)0x0;
  local_68[3] = &local_33;
  local_48 = &local_32;
  pIVar4 = pMVar3->invoker_method;
  local_68[1] = (undefined1 *)__dest;
  local_40 = &local_31;
  *(undefined8 *)((long)__s + -8) = 0x34159aa;
  (*pIVar4)(pIVar2,pMVar3,pAVar9,local_68,&local_31);
  return pAVar9;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$ReadyFresh
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyFresh (Il2CppObject* value, bool isFromCache, const MethodInfo_3314FA0* method);
// 0x3414fa0

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyFresh
          (Il2CppObject *value,bool_conflict isFromCache,MethodInfo_3314FA0 *method)

{
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 1;
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField,value);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)isFromCache;
  *(undefined2 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = 0;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$ReadyFresh
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyFresh (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, bool isFromCache, const MethodInfo_33159C0* method);
// 0x34159c0

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyFresh
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,bool_conflict isFromCache,
          MethodInfo_33159C0 *method)

{
  ushort uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar7;
  undefined4 in_register_00000014;
  long lVar8;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar9;
  ulong __n;
  undefined8 *__dest;
  undefined1 *apuStack_80 [5];
  undefined1 *local_58;
  undefined1 *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  lVar8 = CONCAT44(in_register_00000014,isFromCache);
  pUVar9 = value.klass;
  lVar4 = *(long *)(lVar8 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  local_38 = value.monitor._0_4_;
  lVar5 = lVar4;
  local_48 = pUVar9;
  if ((uVar1 & 1) == 0) {
    apuStack_80[0] = (undefined1 *)0x34159f6;
    lVar4 = il2cpp_runtime_helper_023009c0(lVar4);
    uVar1 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
    lVar5 = *(long *)(lVar8 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apuStack_80 + lVar4 + 8U);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415a36;
    lVar5 = il2cpp_runtime_helper_023009c0(lVar5);
    lVar6 = *(long *)(lVar8 + 0x20);
  }
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
  if (*(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x28) < 0) {
    __src = pUVar9;
  }
  *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415a61;
  memcpy(__dest,__src,__n);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415a72;
    lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
  }
  lVar5 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415a8e;
    lVar5 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415a96;
  pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar5);
  lVar5 = *(long *)(lVar8 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415aae;
    lVar5 = il2cpp_runtime_helper_023009c0();
    uVar1 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
    lVar6 = *(long *)(lVar8 + 0x20);
  }
  uVar2 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415ad6;
    lVar5 = il2cpp_runtime_helper_023009c0();
    lVar6 = *(long *)(lVar8 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x40);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x40);
  }
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415b0b;
    lVar6 = il2cpp_runtime_helper_023009c0();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  local_3c = 1;
  local_33 = (undefined1)local_38;
  local_32 = 0;
  local_31 = 0;
  apuStack_80[1] = (undefined1 *)&stack0xffffffffffffffc4;
  apuStack_80[3] = (undefined1 *)0x0;
  apuStack_80[4] = &stack0xffffffffffffffcd;
  local_58 = &stack0xffffffffffffffce;
  local_50 = &stack0xffffffffffffffcf;
  pcVar3 = *(code **)(lVar5 + 0x10);
  apuStack_80[2] = (undefined1 *)__dest;
  *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415b73;
  (*pcVar3)(uVar2,lVar5,pAVar7,apuStack_80 + 1);
  return pAVar7;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyStaleRefreshing (Il2CppObject* value, const MethodInfo_3315050* method);
// 0x3415050

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyStaleRefreshing
          (Il2CppObject *value,MethodInfo_3315050 *method)

{
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar1;
  Il2CppClass *pIVar2;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  pAVar1 = method->klass;
  if (((pAVar1->_2).field_0x6d & 1) == 0) {
    pAVar1 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar1);
  }
  pIVar2 = pAVar1->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 2;
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField,value);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0x101;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 1;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_3315B90* method);
// 0x3415b90

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_3315B90 *method)

{
  ushort uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar7;
  void *pvVar8;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar9;
  undefined8 *__dest;
  ulong __n;
  undefined1 *apuStack_80 [5];
  undefined1 *local_58;
  undefined1 *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_40;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  pvVar8 = value.monitor;
  pUVar9 = value.klass;
  lVar4 = *(long *)((long)pvVar8 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  local_40 = pUVar9;
  if ((uVar1 & 1) == 0) {
    apuStack_80[0] = (undefined1 *)0x3415bc3;
    lVar4 = il2cpp_runtime_helper_023009c0(lVar4);
    uVar1 = *(ushort *)(*(long *)((long)pvVar8 + 0x20) + 0x135);
    lVar5 = *(long *)((long)pvVar8 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apuStack_80 + lVar4 + 8U);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415c03;
    lVar5 = il2cpp_runtime_helper_023009c0(lVar5);
    lVar6 = *(long *)((long)pvVar8 + 0x20);
  }
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffc0;
  if (*(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x28) < 0) {
    __src = pUVar9;
  }
  *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415c2e;
  memcpy(__dest,__src,__n);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415c3f;
    lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
  }
  lVar5 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415c5b;
    lVar5 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415c63;
  pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar5);
  lVar5 = *(long *)((long)pvVar8 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415c7b;
    lVar5 = il2cpp_runtime_helper_023009c0();
    uVar1 = *(ushort *)(*(long *)((long)pvVar8 + 0x20) + 0x135);
    lVar6 = *(long *)((long)pvVar8 + 0x20);
  }
  uVar2 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415ca3;
    lVar5 = il2cpp_runtime_helper_023009c0();
    lVar6 = *(long *)((long)pvVar8 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x40);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x40);
  }
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415cd8;
    lVar6 = il2cpp_runtime_helper_023009c0();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  local_38 = 2;
  local_33 = 1;
  local_32 = 1;
  local_31 = 1;
  apuStack_80[1] = (undefined1 *)&stack0xffffffffffffffc8;
  apuStack_80[3] = (undefined1 *)0x0;
  apuStack_80[4] = &stack0xffffffffffffffcd;
  local_58 = &stack0xffffffffffffffce;
  local_50 = &stack0xffffffffffffffcf;
  pcVar3 = *(code **)(lVar5 + 0x10);
  apuStack_80[2] = (undefined1 *)__dest;
  *(undefined8 *)((long)apuStack_80 + lVar4) = 0x3415d3f;
  (*pcVar3)(uVar2,lVar5,pAVar7,apuStack_80 + 1);
  return pAVar7;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$FailedNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache (System_String_o* error, const MethodInfo_33150F0* method);
// 0x34150f0

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
          (System_String_o *error,MethodInfo_33150F0 *method)

{
  byte bVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  long lVar5;
  
  if (g_data_057a8cdf == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cdf = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
  }
  else {
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
    error = "unknown_error";
  }
  if ((bVar1 & 1) == 0) {
    lVar5 = il2cpp_runtime_helper_023009c0(pAVar2);
    pIVar4 = *(Il2CppClass **)(*(long *)(lVar5 + 0xc0) + 0x38);
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  else {
    pIVar4 = pAVar2->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_;
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 3;
  (__this->fields)._Value_k__BackingField = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField,0);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 0;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$FailedNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedNoCache (System_String_o* error, const MethodInfo_3315D60* method);
// 0x3415d60

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedNoCache
          (System_String_o *error,MethodInfo_3315D60 *method)

{
  ushort uVar1;
  Il2CppMethodPointer pIVar2;
  MethodInfo *pMVar3;
  InvokerMethod pIVar4;
  MethodInfo_3315D60 *pMVar5;
  undefined8 *__dest;
  bool_conflict bVar6;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar7;
  Il2CppClass *pIVar8;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar9;
  long lVar10;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar11;
  ulong __n;
  void *pvVar12;
  undefined8 *__s;
  void *pvVar13;
  System_String_o *value;
  ulong uVar14;
  void *__dest_00;
  undefined8 uStack_a0;
  System_String_o *local_98 [4];
  undefined1 *local_78;
  undefined1 *local_70;
  System_String_o *local_60;
  void *local_58;
  MethodInfo_3315D60 *local_50;
  undefined4 local_44;
  undefined8 *local_40;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  if (g_data_057a8ce1 == '\0') {
    uStack_a0 = 0x3415d8c;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ce1 = '\x01';
  }
  pAVar7 = method->klass;
  local_60 = error;
  local_50 = method;
  if (((pAVar7->_2).field_0x6d & 1) == 0) {
    uStack_a0 = 0x3415db0;
    pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar7);
  }
  __n = (ulong)(pAVar7->rgctx_data->_1_TValue->_2).actualSize;
  uVar14 = __n + 0xf & 0xfffffffffffffff0;
  __dest_00 = (void *)((long)local_98 - uVar14);
  pvVar13 = (void *)((long)__dest_00 - uVar14);
  *(undefined8 *)((long)pvVar13 + -8) = 0x3415de8;
  memset(pvVar13,0,__n);
  pvVar12 = (void *)((long)pvVar13 - uVar14);
  local_58 = pvVar12;
  *(undefined8 *)((long)pvVar12 + -8) = 0x3415dff;
  memset(pvVar12,0,__n);
  pvVar12 = (void *)((long)pvVar12 - uVar14);
  *(undefined8 *)((long)pvVar12 + -8) = 0x3415e15;
  memset(pvVar12,0,__n);
  __s = (undefined8 *)((long)pvVar12 - uVar14);
  local_40 = __s;
  __s[-1] = 0x3415e2c;
  memset(__s,0,__n);
  __s[-1] = 0x3415e39;
  memset(pvVar13,0,__n);
  __s[-1] = 0x3415e47;
  memcpy(__dest_00,pvVar13,__n);
  value = local_60;
  __s[-1] = 0x3415e55;
  bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  pvVar13 = local_58;
  if ((char)bVar6 == '\0') {
    __s[-1] = 0x3415e85;
    memcpy(pvVar12,__dest_00,__n);
  }
  else {
    __s[-1] = 0x3415e6b;
    memcpy(pvVar13,__dest_00,__n);
    value = "unknown_error";
    pvVar12 = pvVar13;
  }
  __dest = local_40;
  pMVar5 = local_50;
  __s[-1] = 0x3415e98;
  memcpy(__dest,pvVar12,__n);
  pAVar7 = pMVar5->klass;
  if (((pAVar7->_2).field_0x6d & 1) == 0) {
    __s[-1] = 0x3415ead;
    pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0(pAVar7);
  }
  pIVar8 = pAVar7->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    __s[-1] = 0x3415ec6;
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __s[-1] = 0x3415ece;
  pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar8);
  pAVar7 = pMVar5->klass;
  uVar1 = *(ushort *)&(pAVar7->_2).field_0x6d;
  pAVar11 = pAVar7;
  if ((uVar1 & 1) == 0) {
    __s[-1] = 0x3415ee6;
    pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0();
    uVar1 = *(ushort *)&(pMVar5->klass->_2).field_0x6d;
    pAVar11 = pMVar5->klass;
  }
  pIVar2 = pAVar7->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_TValue___ctor->
           methodPointer;
  if ((uVar1 & 1) == 0) {
    __s[-1] = 0x3415f0e;
    lVar10 = il2cpp_runtime_helper_023009c0();
    pAVar11 = pMVar5->klass;
    uVar1 = *(ushort *)&(pAVar11->_2).field_0x6d;
    pMVar3 = *(MethodInfo **)(*(long *)(lVar10 + 0xc0) + 0x40);
  }
  else {
    pMVar3 = pAVar11->rgctx_data->_8_ApplicationManagers_Changelog_AottgChangelogResult_TValue___ctor;
  }
  if ((uVar1 & 1) == 0) {
    __s[-1] = 0x3415f43;
    pAVar11 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *)il2cpp_runtime_helper_023009c0();
  }
  local_98[1] = (System_String_o *)local_40;
  if (-1 < (int)(pAVar11->rgctx_data->_1_TValue->_1).byval_arg.bits) {
    local_98[1] = (System_String_o *)*local_40;
  }
  local_44 = 3;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0;
  local_98[0] = (System_String_o *)&local_44;
  local_98[3] = (System_String_o *)&local_33;
  local_78 = &local_32;
  pIVar4 = pMVar3->invoker_method;
  local_98[2] = value;
  local_70 = &local_31;
  __s[-1] = 0x3415fb2;
  (*pIVar4)(pIVar2,pMVar3,pAVar9,local_98,&local_31);
  return pAVar9;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___FailedRefreshStale (Il2CppObject* value, System_String_o* error, const MethodInfo_3315200* method);
// 0x3415200

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___FailedRefreshStale
          (Il2CppObject *value,System_String_o *error,MethodInfo_3315200 *method)

{
  byte bVar1;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__c *pAVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  long lVar5;
  
  if (g_data_057a8ce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ce0 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
  }
  else {
    pAVar2 = method->klass;
    bVar1 = (pAVar2->_2).field_0x6d;
    error = "unknown_error";
  }
  if ((bVar1 & 1) == 0) {
    lVar5 = il2cpp_runtime_helper_023009c0(pAVar2);
    pIVar4 = *(Il2CppClass **)(*(long *)(lVar5 + 0xc0) + 0x38);
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  else {
    pIVar4 = pAVar2->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_;
    bVar1 = (pIVar4->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(pIVar4);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 4;
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField,value);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0x101;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 0;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedRefreshStale (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_String_o* error, const MethodInfo_3315FD0* method);
// 0x3415fd0

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedRefreshStale
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,System_String_o *error,
          MethodInfo_3315FD0 *method)

{
  ushort uVar1;
  undefined8 uVar2;
  code *pcVar3;
  System_String_o *pSVar4;
  void *__dest;
  undefined8 *__dest_00;
  bool_conflict bVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar9;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar10;
  undefined8 *__s;
  void *__s_00;
  System_String_o *value_00;
  ulong uVar11;
  undefined8 uStack_b0;
  System_String_o *local_a8 [4];
  undefined1 *local_88;
  undefined1 *local_80;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_70;
  System_String_o *local_68;
  System_String_o *local_60;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_58;
  void *local_50;
  undefined4 local_44;
  undefined8 *local_40;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  local_68 = value.monitor;
  pUVar10 = value.klass;
  local_70 = pUVar10;
  if (g_data_057a8ce2 == '\0') {
    uStack_b0 = 0x3416004;
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8ce2 = '\x01';
  }
  pvVar6 = error[1].monitor;
  pvVar7 = pvVar6;
  local_60 = error;
  local_58 = pUVar10;
  if ((*(byte *)((long)pvVar6 + 0x135) & 1) == 0) {
    uStack_b0 = 0x3416029;
    pvVar6 = (void *)il2cpp_runtime_helper_023009c0(pvVar6);
    pvVar7 = error[1].monitor;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)((long)pvVar6 + 0xc0) + 8) + 0xfc);
  uVar11 = __n + 0xf & 0xfffffffffffffff0;
  local_50 = (void *)((long)local_a8 - uVar11);
  __s_00 = (void *)((long)local_50 - uVar11);
  *(undefined8 *)((long)__s_00 + -8) = 0x341606e;
  memset(__s_00,0,__n);
  pvVar6 = (void *)((long)__s_00 - uVar11);
  *(undefined8 *)((long)pvVar6 + -8) = 0x3416084;
  memset(pvVar6,0,__n);
  __s = (undefined8 *)((long)pvVar6 - uVar11);
  local_40 = __s;
  __s[-1] = 0x341609b;
  memset(__s,0,__n);
  if ((*(byte *)((long)pvVar7 + 0x135) & 1) == 0) {
    __s[-1] = 0x34160ad;
    pvVar7 = (void *)il2cpp_runtime_helper_023009c0(pvVar7);
  }
  __dest = local_50;
  pUVar10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffff90;
  if (*(int *)(*(long *)(*(long *)((long)pvVar7 + 0xc0) + 8) + 0x28) < 0) {
    pUVar10 = local_58;
  }
  __s[-1] = 0x34160da;
  memcpy(__dest,pUVar10,__n);
  value_00 = local_68;
  __s[-1] = 0x34160e8;
  bVar5 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    __s[-1] = 0x3416117;
    memcpy(pvVar6,__dest,__n);
  }
  else {
    __s[-1] = 0x34160fa;
    memcpy(__s_00,__dest,__n);
    value_00 = "unknown_error";
    pvVar6 = __s_00;
  }
  __dest_00 = local_40;
  pSVar4 = local_60;
  __s[-1] = 0x341612a;
  memcpy(__dest_00,pvVar6,__n);
  pvVar6 = pSVar4[1].monitor;
  if ((*(byte *)((long)pvVar6 + 0x135) & 1) == 0) {
    __s[-1] = 0x3416140;
    pvVar6 = (void *)il2cpp_runtime_helper_023009c0(pvVar6);
  }
  lVar8 = *(long *)(*(long *)((long)pvVar6 + 0xc0) + 0x38);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    __s[-1] = 0x3416159;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  __s[-1] = 0x3416161;
  pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_runtime_helper_023052d0(lVar8);
  pvVar6 = pSVar4[1].monitor;
  uVar1 = *(ushort *)((long)pvVar6 + 0x135);
  pvVar7 = pvVar6;
  if ((uVar1 & 1) == 0) {
    __s[-1] = 0x341617a;
    pvVar6 = (void *)il2cpp_runtime_helper_023009c0();
    uVar1 = *(ushort *)((long)pSVar4[1].monitor + 0x135);
    pvVar7 = pSVar4[1].monitor;
  }
  uVar2 = **(undefined8 **)(*(long *)((long)pvVar6 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    __s[-1] = 0x34161a3;
    lVar8 = il2cpp_runtime_helper_023009c0();
    pvVar7 = pSVar4[1].monitor;
    uVar1 = *(ushort *)((long)pvVar7 + 0x135);
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
  }
  else {
    lVar8 = *(long *)(*(long *)((long)pvVar7 + 0xc0) + 0x40);
  }
  if ((uVar1 & 1) == 0) {
    __s[-1] = 0x34161d9;
    pvVar7 = (void *)il2cpp_runtime_helper_023009c0();
  }
  local_a8[1] = (System_String_o *)local_40;
  if (-1 < *(int *)(*(long *)(*(long *)((long)pvVar7 + 0xc0) + 8) + 0x28)) {
    local_a8[1] = (System_String_o *)*local_40;
  }
  local_44 = 4;
  local_33 = 1;
  local_32 = 1;
  local_31 = 0;
  local_a8[0] = (System_String_o *)&stack0xffffffffffffffbc;
  local_a8[3] = (System_String_o *)&stack0xffffffffffffffcd;
  local_88 = &stack0xffffffffffffffce;
  local_80 = &stack0xffffffffffffffcf;
  pcVar3 = *(code **)(lVar8 + 0x10);
  local_a8[2] = value_00;
  __s[-1] = 0x341624e;
  (*pcVar3)(uVar2,lVar8,pAVar9,local_a8);
  return pAVar9;
}


