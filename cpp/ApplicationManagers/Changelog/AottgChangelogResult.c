// Type: ApplicationManagers.Changelog.AottgChangelogResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogResult<object>$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object____ctor (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t state, Il2CppObject* value, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo_4CAF440* method);
// 0x4daf440

void ApplicationManagers_Changelog_AottgChangelogResult_object____ctor
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t state,
               Il2CppObject *value,System_String_o *error,bool isFromCache,bool isStale,bool isRefreshing,
               MethodInfo_4CAF440 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = state;
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = isFromCache;
  (__this->fields)._IsStale_k__BackingField = isStale;
  (__this->fields)._IsRefreshing_k__BackingField = isRefreshing;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType____ctor (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t state, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo_4CAF940* method);
// 0x4daf940

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType____ctor
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t state,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,System_String_o *error,
               bool isFromCache,bool isStale,bool isRefreshing,MethodInfo_4CAF940 *method)

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
  undefined3 in_register_00000089;
  ulong __n;
  undefined7 in_stack_00000011;
  undefined8 *apuStack_60 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_50;
  void *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  int32_t local_34;
  
  local_3c = CONCAT31(in_register_00000089,isFromCache);
  local_48 = value.monitor;
  local_38 = SUB84(error,0);
  lVar2 = CONCAT71(in_stack_00000011,isRefreshing);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 8) + 0xfc);
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apuStack_60 + lVar5 + 8);
  local_50 = value.klass;
  local_34 = state;
  *(undefined8 *)((long)apuStack_60 + lVar5) = 0x4daf99d;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  iVar8 = local_34;
  pcVar1 = *(code **)**(undefined8 **)(*(long *)(lVar2 + 0x20) + 0xc0);
  *(undefined8 *)((long)apuStack_60 + lVar5) = 0x4daf9b4;
  (*pcVar1)(__this,iVar8);
  lVar2 = *(long *)(lVar2 + 0x20);
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_50;
  if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x28) < 0) {
    __src = value.klass;
  }
  *(undefined8 *)((long)apuStack_60 + lVar5) = 0x4daf9dc;
  memcpy(__dest,__src,__n);
  lVar2 = *(long *)(lVar2 + 0xc0);
  puVar3 = *(undefined8 **)(lVar2 + 0x10);
  uVar4 = *puVar3;
  if (-1 < *(int *)(*(long *)(lVar2 + 8) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  pcVar1 = (code *)puVar3[2];
  apuStack_60[1] = __dest;
  *(undefined8 *)((long)apuStack_60 + lVar5) = 0x4dafa09;
  (*pcVar1)(uVar4,puVar3,__this,apuStack_60 + 1,__dest);
  pvVar6 = local_48;
  lVar2 = CONCAT71(in_stack_00000011,isRefreshing);
  pcVar1 = (code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x18);
  *(undefined8 *)((long)apuStack_60 + lVar5) = 0x4dafa25;
  (*pcVar1)(__this,pvVar6);
  uVar7 = (undefined1)local_38;
  pcVar1 = (code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x20);
  *(undefined8 *)((long)apuStack_60 + lVar5) = 0x4dafa3d;
  (*pcVar1)(__this,uVar7);
  uVar7 = (undefined1)local_3c;
  pcVar1 = (code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x28);
  *(undefined8 *)((long)apuStack_60 + lVar5) = 0x4dafa55;
  (*pcVar1)(__this,uVar7);
  pcVar1 = (code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x30);
  *(undefined8 *)((long)apuStack_60 + lVar5) = 0x4dafa6d;
  (*pcVar1)(__this,isStale);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_State
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogResult_object___get_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAF4B0* method);
// 0x4daf4b0

int32_t ApplicationManagers_Changelog_AottgChangelogResult_object___get_State
                  (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
                  MethodInfo_4CAF4B0 *method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_State
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAFA80* method);
// 0x4dafa80

int32_t ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_State
                  (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
                  MethodInfo_4CAFA80 *method)

{
  int32_t *piVar1;
  
  piVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(method->klass->rgctx_data->
                              _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).fields);
  return *piVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_State
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t value, const MethodInfo_4CAF4C0* method);
// 0x4daf4c0

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_State
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t value,
               MethodInfo_4CAF4C0 *method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_State
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_State (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, int32_t value, const MethodInfo_4CAFAA0* method);
// 0x4dafaa0

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_State
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,int32_t value,
               MethodInfo_4CAFAA0 *method)

{
  void *field;
  int32_t *piVar1;
  
  field = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
          fields;
  il2cpp_runtime_helper_030d6090(field,4);
  piVar1 = il2cpp_codegen_get_instance_field_data_pointer(__this,field);
  *piVar1 = value;
  il2cpp_runtime_helper_030d5fc0(*(undefined8 *)((long)field + 8),piVar1,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_Value
// il2cpp: Il2CppObject* ApplicationManagers_Changelog_AottgChangelogResult_object___get_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAF4D0* method);
// 0x4daf4d0

Il2CppObject *
ApplicationManagers_Changelog_AottgChangelogResult_object___get_Value
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_4CAF4D0 *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAFAF0* method);
// 0x4dafaf0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Value
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_4CAFAF0 *method)

{
  uint uVar1;
  long lVar2;
  void *__src;
  long in_RDX;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar3;
  
  lVar2 = *(long *)(*(long *)(in_RDX + 0x20) + 0xc0);
  uVar1 = *(uint *)(*(long *)(lVar2 + 8) + 0xfc);
  __src = il2cpp_codegen_get_instance_field_data_pointer
                    (__this,(void *)(*(long *)(*(long *)(lVar2 + 0x38) + 0x80) + 0x20));
  UVar3.klass = memmove(method,__src,(ulong)uVar1);
  UVar3.monitor = UVar3.monitor;
  return UVar3;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_Value
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, Il2CppObject* value, const MethodInfo_4CAF4E0* method);
// 0x4daf4e0

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Value
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,Il2CppObject *value,
               MethodInfo_4CAF4E0 *method)

{
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Value (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_4CAFB40* method);
// 0x4dafb40

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Value
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_4CAFB40 *method)

{
  uint size;
  long lVar1;
  long lVar2;
  long lVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  
  local_30 = value.klass;
  lVar1 = *(long *)((long)value.monitor + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  size = *(uint *)(lVar2 + 0xfc);
  lVar3 = -((ulong)size + 0xf & 0xfffffffffffffff0);
  __src = local_30;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_30;
  }
  *(undefined8 *)(auStack_38 + lVar3 + -8) = 0x4dafb95;
  memcpy(auStack_38 + lVar3,__src,(ulong)size);
  lVar1 = *(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x38) + 0x80);
  *(undefined8 *)(auStack_38 + lVar3 + -8) = 0x4dafbba;
  il2cpp_codegen_write_instance_field_data(__this,(void *)(lVar1 + 0x20),auStack_38 + lVar3,size);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogResult_object___get_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAF4F0* method);
// 0x4daf4f0

System_String_o *
ApplicationManagers_Changelog_AottgChangelogResult_object___get_Error
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_4CAF4F0 *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAFBD0* method);
// 0x4dafbd0

System_String_o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_Error
          (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,MethodInfo_4CAFBD0 *method)

{
  undefined8 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((long)(method->klass->rgctx_data->
                                             _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1
                                            ).fields + 0x40));
  return (System_String_o *)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_Error
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, System_String_o* value, const MethodInfo_4CAF500* method);
// 0x4daf500

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_Error
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,System_String_o *value,
               MethodInfo_4CAF500 *method)

{
  (__this->fields)._Error_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_Error
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Error (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, System_String_o* value, const MethodInfo_4CAFC00* method);
// 0x4dafc00

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_Error
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,System_String_o *value,
               MethodInfo_4CAFC00 *method)

{
  void *field;
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  field = (void *)((long)pvVar1 + 0x40);
  il2cpp_runtime_helper_030d6090(field,8);
  puVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,field);
  *puVar2 = value;
  il2cpp_runtime_helper_030d5fc0(*(undefined8 *)((long)pvVar1 + 0x48),puVar2,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAF510* method);
// 0x4daf510

bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsFromCache
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               MethodInfo_4CAF510 *method)

{
  return (__this->fields)._IsFromCache_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAFC60* method);
// 0x4dafc60

bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsFromCache
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               MethodInfo_4CAFC60 *method)

{
  undefined1 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((long)(method->klass->rgctx_data->
                                             _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1
                                            ).fields + 0x60));
  return (bool)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_4CAF520* method);
// 0x4daf520

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsFromCache
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool value,
               MethodInfo_4CAF520 *method)

{
  (__this->fields)._IsFromCache_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsFromCache
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsFromCache (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_4CAFC90* method);
// 0x4dafc90

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsFromCache
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool value,
               MethodInfo_4CAFC90 *method)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  pvVar2 = (void *)((long)pvVar1 + 0x60);
  il2cpp_runtime_helper_030d6090(pvVar2,1);
  pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar2);
  *(bool *)pvVar2 = value;
  il2cpp_runtime_helper_030d5fc0(*(undefined8 *)((long)pvVar1 + 0x68),pvVar2,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsStale
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAF530* method);
// 0x4daf530

bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsStale
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               MethodInfo_4CAF530 *method)

{
  return (__this->fields)._IsStale_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsStale
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAFCF0* method);
// 0x4dafcf0

bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsStale
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               MethodInfo_4CAFCF0 *method)

{
  undefined1 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((long)(method->klass->rgctx_data->
                                             _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1
                                            ).fields + 0x80));
  return (bool)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsStale
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_4CAF540* method);
// 0x4daf540

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsStale
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool value,
               MethodInfo_4CAF540 *method)

{
  (__this->fields)._IsStale_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsStale
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsStale (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_4CAFD20* method);
// 0x4dafd20

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsStale
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool value,
               MethodInfo_4CAFD20 *method)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  pvVar2 = (void *)((long)pvVar1 + 0x80);
  il2cpp_runtime_helper_030d6090(pvVar2,1);
  pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar2);
  *(bool *)pvVar2 = value;
  il2cpp_runtime_helper_030d5fc0(*(undefined8 *)((long)pvVar1 + 0x88),pvVar2,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAF550* method);
// 0x4daf550

bool ApplicationManagers_Changelog_AottgChangelogResult_object___get_IsRefreshing
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               MethodInfo_4CAF550 *method)

{
  return (__this->fields)._IsRefreshing_k__BackingField;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, const MethodInfo_4CAFD80* method);
// 0x4dafd80

bool ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___get_IsRefreshing
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,
               MethodInfo_4CAFD80 *method)

{
  undefined1 *puVar1;
  
  puVar1 = il2cpp_codegen_get_instance_field_data_pointer
                     (__this,(void *)((long)(method->klass->rgctx_data->
                                             _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1
                                            ).fields + 0xa0));
  return (bool)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsRefreshing
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_4CAF560* method);
// 0x4daf560

void ApplicationManagers_Changelog_AottgChangelogResult_object___set_IsRefreshing
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool value,
               MethodInfo_4CAF560 *method)

{
  (__this->fields)._IsRefreshing_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsRefreshing
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsRefreshing (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* __this, bool value, const MethodInfo_4CAFDB0* method);
// 0x4dafdb0

void ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___set_IsRefreshing
               (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this,bool value,
               MethodInfo_4CAFDB0 *method)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (method->klass->rgctx_data->_7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_->_1).
           fields;
  pvVar2 = (void *)((long)pvVar1 + 0xa0);
  il2cpp_runtime_helper_030d6090(pvVar2,1);
  pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar2);
  *(bool *)pvVar2 = value;
  il2cpp_runtime_helper_030d5fc0(*(undefined8 *)((long)pvVar1 + 0xa8),pvVar2,0);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$LoadingNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___LoadingNoCache (const MethodInfo_4CAF570* method);
// 0x4daf570

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___LoadingNoCache(MethodInfo_4CAF570 *method)

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
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 0;
  (__this->fields)._Value_k__BackingField = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = false;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = true;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$LoadingNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___LoadingNoCache (const MethodInfo_4CAFE10* method);
// 0x4dafe10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4dafefe: jmp 0x4daff1b

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___LoadingNoCache
          (MethodInfo_4CAFE10 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  long lVar4;
  Il2CppClass *pIVar5;
  Il2CppClass *pIVar6;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar7;
  ushort uVar8;
  ulong __n;
  undefined1 *puVar9;
  undefined8 *__s;
  undefined8 uStack_70;
  undefined1 *local_68 [4];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    uStack_70 = 0x4dafe39;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pIVar6 = (Il2CppClass *)method->klass;
  }
  else {
    pIVar6 = pIVar5;
  }
  __n = (ulong)((pIVar5->rgctx_data[1].klass)->_2).stack_slot_size;
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __s = (undefined8 *)((long)local_68 + lVar4);
  *(undefined8 *)((long)local_68 + lVar4 + -8) = 0x4dafe6e;
  memset(__s,0,__n);
  puVar9 = (undefined1 *)((long)local_68 + lVar4);
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)local_68 + lVar4 + -8) = 0x4dafe7f;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    puVar9 = (undefined1 *)((long)local_68 + lVar4);
  }
  pIVar5 = pIVar6->rgctx_data[7].klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)(puVar9 + -8) = 0x4dafe9b;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  *(undefined8 *)(puVar9 + -8) = 0x4dafea3;
  pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar5);
  pIVar5 = (Il2CppClass *)method->klass;
  uVar8._0_1_ = (pIVar5->_2).bitflags1;
  uVar8._1_1_ = (pIVar5->_2).bitflags2;
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)(puVar9 + -8) = 0x4dafebb;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pIVar6 = (Il2CppClass *)method->klass;
    uVar8._0_1_ = (pIVar6->_2).bitflags1;
    uVar8._1_1_ = (pIVar6->_2).bitflags2;
  }
  else {
    pIVar6 = pIVar5;
  }
  pIVar1 = (pIVar5->rgctx_data[8].method)->methodPointer;
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)(puVar9 + -8) = 0x4dafee3;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar6);
    pIVar6 = (Il2CppClass *)method->klass;
    uVar8._0_1_ = (pIVar6->_2).bitflags1;
    uVar8._1_1_ = (pIVar6->_2).bitflags2;
    pMVar2 = pIVar5->rgctx_data[8].method;
  }
  else {
    pMVar2 = pIVar6->rgctx_data[8].method;
  }
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)(puVar9 + -8) = 0x4daff18;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  if (-1 < (int)pIVar6->rgctx_data[1].type[2].bits) {
    __s = (undefined8 *)*__s;
  }
  local_38 = 0;
  local_33 = 0;
  local_32 = 0;
  local_31 = 1;
  local_68[0] = (undefined1 *)&local_38;
  local_68[2] = (undefined1 *)0x0;
  local_68[3] = &local_33;
  local_48 = &local_32;
  pIVar3 = pMVar2->invoker_method;
  local_68[1] = (undefined1 *)__s;
  local_40 = &local_31;
  *(undefined8 *)(puVar9 + -8) = 0x4daff80;
  (*pIVar3)(pIVar1,pMVar2,pAVar7,local_68,&local_31);
  return pAVar7;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$ReadyFresh
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyFresh (Il2CppObject* value, bool isFromCache, const MethodInfo_4CAF620* method);
// 0x4daf620

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyFresh
          (Il2CppObject *value,bool isFromCache,MethodInfo_4CAF620 *method)

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
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 1;
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = isFromCache;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$ReadyFresh
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyFresh (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, bool isFromCache, const MethodInfo_4CAFFA0* method);
// 0x4daffa0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4db00d1: jmp 0x4db00ee

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyFresh
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,bool isFromCache,
          MethodInfo_4CAFFA0 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  long lVar4;
  ushort uVar8;
  ushort uVar9;
  Il2CppClass *pIVar5;
  Il2CppClass *pIVar6;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar7;
  undefined7 in_register_00000011;
  long lVar10;
  undefined8 *puVar11;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar12;
  ulong __n;
  undefined8 *__dest;
  undefined8 uStack_80;
  undefined1 *local_78 [4];
  undefined1 *local_58;
  undefined1 *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  lVar10 = CONCAT71(in_register_00000011,isFromCache);
  pUVar12 = value.klass;
  pIVar5 = *(Il2CppClass **)(lVar10 + 0x20);
  uVar8._0_1_ = (pIVar5->_2).bitflags1;
  uVar8._1_1_ = (pIVar5->_2).bitflags2;
  local_38 = value.monitor._0_4_;
  local_48 = pUVar12;
  if ((uVar8 & 1) == 0) {
    uStack_80 = 0x4daffd6;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pIVar6 = *(Il2CppClass **)(lVar10 + 0x20);
    uVar8._0_1_ = (pIVar6->_2).bitflags1;
    uVar8._1_1_ = (pIVar6->_2).bitflags2;
  }
  else {
    pIVar6 = pIVar5;
  }
  __n = (ulong)((pIVar5->rgctx_data[1].klass)->_2).stack_slot_size;
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)local_78 + lVar4);
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)((long)local_78 + lVar4 + -8) = 0x4db0016;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    pIVar5 = *(Il2CppClass **)(lVar10 + 0x20);
    puVar11 = (undefined8 *)((long)local_78 + lVar4);
  }
  else {
    pIVar5 = pIVar6;
    puVar11 = __dest;
  }
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_48;
  if ((int)pIVar6->rgctx_data[1].type[2].bits < 0) {
    __src = pUVar12;
  }
  puVar11[-1] = 0x4db0041;
  memcpy(__dest,__src,__n);
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    puVar11[-1] = 0x4db0052;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  pIVar5 = pIVar5->rgctx_data[7].klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    puVar11[-1] = 0x4db006e;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  puVar11[-1] = 0x4db0076;
  pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar5);
  pIVar5 = *(Il2CppClass **)(lVar10 + 0x20);
  uVar9._0_1_ = (pIVar5->_2).bitflags1;
  uVar9._1_1_ = (pIVar5->_2).bitflags2;
  if ((uVar9 & 1) == 0) {
    puVar11[-1] = 0x4db008e;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pIVar6 = *(Il2CppClass **)(lVar10 + 0x20);
    uVar9._0_1_ = (pIVar6->_2).bitflags1;
    uVar9._1_1_ = (pIVar6->_2).bitflags2;
  }
  else {
    pIVar6 = pIVar5;
  }
  pIVar1 = (pIVar5->rgctx_data[8].method)->methodPointer;
  if ((uVar9 & 1) == 0) {
    puVar11[-1] = 0x4db00b6;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar6);
    pIVar6 = *(Il2CppClass **)(lVar10 + 0x20);
    uVar9._0_1_ = (pIVar6->_2).bitflags1;
    uVar9._1_1_ = (pIVar6->_2).bitflags2;
    pMVar2 = pIVar5->rgctx_data[8].method;
  }
  else {
    pMVar2 = pIVar6->rgctx_data[8].method;
  }
  if ((uVar9 & 1) == 0) {
    puVar11[-1] = 0x4db00eb;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  if (-1 < (int)pIVar6->rgctx_data[1].type[2].bits) {
    __dest = (undefined8 *)*__dest;
  }
  local_3c = 1;
  local_33 = (undefined1)local_38;
  local_32 = 0;
  local_31 = 0;
  local_78[0] = (undefined1 *)&local_3c;
  local_78[2] = (undefined1 *)0x0;
  local_78[3] = &local_33;
  local_58 = &local_32;
  pIVar3 = pMVar2->invoker_method;
  local_78[1] = (undefined1 *)__dest;
  local_50 = &local_31;
  puVar11[-1] = 0x4db0153;
  (*pIVar3)(pIVar1,pMVar2,pAVar7,local_78,&local_31);
  return pAVar7;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyStaleRefreshing (Il2CppObject* value, const MethodInfo_4CAF6D0* method);
// 0x4daf6d0

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___ReadyStaleRefreshing
          (Il2CppObject *value,MethodInfo_4CAF6D0 *method)

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
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 2;
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = true;
  (__this->fields)._IsStale_k__BackingField = true;
  (__this->fields)._IsRefreshing_k__BackingField = true;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_4CB0170* method);
// 0x4db0170
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4db029e: jmp 0x4db02bb

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___ReadyStaleRefreshing
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_4CB0170 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  long lVar4;
  Il2CppClass *pIVar5;
  Il2CppClass *pIVar6;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar7;
  ushort uVar8;
  ushort uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar12;
  undefined8 *__dest;
  ulong __n;
  undefined8 uStack_80;
  undefined1 *local_78 [4];
  undefined1 *local_58;
  undefined1 *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_40;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  pvVar11 = value.monitor;
  pUVar12 = value.klass;
  pIVar5 = *(Il2CppClass **)((long)pvVar11 + 0x20);
  uVar8._0_1_ = (pIVar5->_2).bitflags1;
  uVar8._1_1_ = (pIVar5->_2).bitflags2;
  local_40 = pUVar12;
  if ((uVar8 & 1) == 0) {
    uStack_80 = 0x4db01a3;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pIVar6 = *(Il2CppClass **)((long)pvVar11 + 0x20);
    uVar8._0_1_ = (pIVar6->_2).bitflags1;
    uVar8._1_1_ = (pIVar6->_2).bitflags2;
  }
  else {
    pIVar6 = pIVar5;
  }
  __n = (ulong)((pIVar5->rgctx_data[1].klass)->_2).stack_slot_size;
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)local_78 + lVar4);
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)((long)local_78 + lVar4 + -8) = 0x4db01e3;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    pIVar5 = *(Il2CppClass **)((long)pvVar11 + 0x20);
    puVar10 = (undefined8 *)((long)local_78 + lVar4);
  }
  else {
    pIVar5 = pIVar6;
    puVar10 = __dest;
  }
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_40;
  if ((int)pIVar6->rgctx_data[1].type[2].bits < 0) {
    __src = pUVar12;
  }
  puVar10[-1] = 0x4db020e;
  memcpy(__dest,__src,__n);
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    puVar10[-1] = 0x4db021f;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  pIVar5 = pIVar5->rgctx_data[7].klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    puVar10[-1] = 0x4db023b;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  puVar10[-1] = 0x4db0243;
  pAVar7 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar5);
  pIVar5 = *(Il2CppClass **)((long)pvVar11 + 0x20);
  uVar9._0_1_ = (pIVar5->_2).bitflags1;
  uVar9._1_1_ = (pIVar5->_2).bitflags2;
  if ((uVar9 & 1) == 0) {
    puVar10[-1] = 0x4db025b;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pIVar6 = *(Il2CppClass **)((long)pvVar11 + 0x20);
    uVar9._0_1_ = (pIVar6->_2).bitflags1;
    uVar9._1_1_ = (pIVar6->_2).bitflags2;
  }
  else {
    pIVar6 = pIVar5;
  }
  pIVar1 = (pIVar5->rgctx_data[8].method)->methodPointer;
  if ((uVar9 & 1) == 0) {
    puVar10[-1] = 0x4db0283;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar6);
    pIVar6 = *(Il2CppClass **)((long)pvVar11 + 0x20);
    uVar9._0_1_ = (pIVar6->_2).bitflags1;
    uVar9._1_1_ = (pIVar6->_2).bitflags2;
    pMVar2 = pIVar5->rgctx_data[8].method;
  }
  else {
    pMVar2 = pIVar6->rgctx_data[8].method;
  }
  if ((uVar9 & 1) == 0) {
    puVar10[-1] = 0x4db02b8;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  if (-1 < (int)pIVar6->rgctx_data[1].type[2].bits) {
    __dest = (undefined8 *)*__dest;
  }
  local_38 = 2;
  local_33 = 1;
  local_32 = 1;
  local_31 = 1;
  local_78[0] = (undefined1 *)&local_38;
  local_78[2] = (undefined1 *)0x0;
  local_78[3] = &local_33;
  local_58 = &local_32;
  pIVar3 = pMVar2->invoker_method;
  local_78[1] = (undefined1 *)__dest;
  local_50 = &local_31;
  puVar10[-1] = 0x4db031f;
  (*pIVar3)(pIVar1,pMVar2,pAVar7,local_78,&local_31);
  return pAVar7;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$FailedNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache (System_String_o* error, const MethodInfo_4CAF770* method);
// 0x4daf770

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___FailedNoCache
          (System_String_o *error,MethodInfo_4CAF770 *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  if (Il2CppMethodInitialized_07541dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_07541dc4 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  pSVar1 = "unknown_error";
  pIVar3 = (Il2CppClass *)method->klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  pIVar3 = pIVar3->rgctx_data[7].klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar3);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  if (bVar2) {
    error = pSVar1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 3;
  (__this->fields)._Value_k__BackingField = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = false;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$FailedNoCache
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedNoCache (System_String_o* error, const MethodInfo_4CB0340* method);
// 0x4db0340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4db0470: jmp 0x4db048d

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedNoCache
          (System_String_o *error,MethodInfo_4CB0340 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  long lVar4;
  Il2CppClass *pIVar5;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar6;
  Il2CppClass *klass;
  ushort uVar7;
  ulong __n;
  undefined1 *puVar8;
  undefined8 *__s;
  undefined8 uStack_80;
  System_String_o *local_78 [4];
  undefined1 *local_58;
  undefined1 *local_50;
  System_String_o *local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  char local_31;
  
  if (g_data_07541dc6 == '\0') {
    uStack_80 = 0x4db036c;
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    g_data_07541dc6 = '\x01';
  }
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    uStack_80 = 0x4db0388;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  __n = (ulong)((pIVar5->rgctx_data[1].klass)->_2).stack_slot_size;
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __s = (undefined8 *)((long)local_78 + lVar4);
  *(undefined8 *)((long)local_78 + lVar4 + -8) = 0x4db03b7;
  memset(__s,0,__n);
  *(undefined8 *)((long)local_78 + lVar4 + -8) = 0x4db03c1;
  local_31 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  local_40 = "unknown_error";
  *(undefined8 *)((long)local_78 + lVar4 + -8) = 0x4db03df;
  memset(__s,0,__n);
  puVar8 = (undefined1 *)((long)local_78 + lVar4);
  pIVar5 = (Il2CppClass *)method->klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)local_78 + lVar4 + -8) = 0x4db03f4;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    puVar8 = (undefined1 *)((long)local_78 + lVar4);
  }
  pIVar5 = pIVar5->rgctx_data[7].klass;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)(puVar8 + -8) = 0x4db040d;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  *(undefined8 *)(puVar8 + -8) = 0x4db0415;
  pAVar6 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar5);
  pIVar5 = (Il2CppClass *)method->klass;
  uVar7._0_1_ = (pIVar5->_2).bitflags1;
  uVar7._1_1_ = (pIVar5->_2).bitflags2;
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(puVar8 + -8) = 0x4db042d;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    klass = (Il2CppClass *)method->klass;
    uVar7._0_1_ = (klass->_2).bitflags1;
    uVar7._1_1_ = (klass->_2).bitflags2;
  }
  else {
    klass = pIVar5;
  }
  pIVar1 = (pIVar5->rgctx_data[8].method)->methodPointer;
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(puVar8 + -8) = 0x4db0455;
    pIVar5 = il2cpp_codegen_class_init_checked(klass);
    klass = (Il2CppClass *)method->klass;
    uVar7._0_1_ = (klass->_2).bitflags1;
    uVar7._1_1_ = (klass->_2).bitflags2;
    pMVar2 = pIVar5->rgctx_data[8].method;
  }
  else {
    pMVar2 = klass->rgctx_data[8].method;
  }
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(puVar8 + -8) = 0x4db048a;
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (-1 < (int)klass->rgctx_data[1].type[2].bits) {
    __s = (undefined8 *)*__s;
  }
  if (local_31 != '\0') {
    error = local_40;
  }
  local_38 = 3;
  local_34 = 0;
  local_33 = 0;
  local_32 = 0;
  local_78[0] = (System_String_o *)&local_38;
  local_78[3] = (System_String_o *)&local_34;
  local_58 = &local_33;
  pIVar3 = pMVar2->invoker_method;
  local_78[1] = (System_String_o *)__s;
  local_78[2] = error;
  local_50 = &local_32;
  *(undefined8 *)(puVar8 + -8) = 0x4db04fc;
  (*pIVar3)(pIVar1,pMVar2,pAVar6,local_78,&local_32);
  return pAVar6;
}


// ApplicationManagers.Changelog.AottgChangelogResult<object>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult_object___FailedRefreshStale (Il2CppObject* value, System_String_o* error, const MethodInfo_4CAF850* method);
// 0x4daf850

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult_object___FailedRefreshStale
          (Il2CppObject *value,System_String_o *error,MethodInfo_4CAF850 *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *__this;
  
  if (Il2CppMethodInitialized_07541dc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_07541dc5 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  pSVar1 = "unknown_error";
  pIVar3 = (Il2CppClass *)method->klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  pIVar3 = pIVar3->rgctx_data[7].klass;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar3);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  if (bVar2) {
    error = pSVar1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 4;
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = true;
  (__this->fields)._IsStale_k__BackingField = true;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$FailedRefreshStale
// il2cpp: ApplicationManagers_Changelog_AottgChangelogResult_TValue__o* ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedRefreshStale (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_String_o* error, const MethodInfo_4CB0510* method);
// 0x4db0510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4db069d: jmp 0x4db06ba

ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *
ApplicationManagers_Changelog_AottgChangelogResult___Il2CppFullySharedGenericType___FailedRefreshStale
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,System_String_o *error,
          MethodInfo_4CB0510 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  System_String_o *pSVar4;
  ushort uVar10;
  bool bVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  Il2CppClass *pIVar8;
  ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *pAVar9;
  void *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar11;
  ulong __n;
  undefined8 *__s;
  undefined8 uStack_90;
  System_String_o *local_88 [4];
  undefined1 *local_68;
  undefined1 *local_60;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_58;
  System_String_o *local_50;
  System_String_o *local_48;
  System_String_o *local_40;
  undefined4 local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  local_48 = value.monitor;
  pUVar11 = value.klass;
  local_58 = pUVar11;
  if (g_data_07541dc7 == '\0') {
    uStack_90 = 0x4db0544;
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    g_data_07541dc7 = '\x01';
  }
  pIVar6 = (*(uint64_t *)((char *)error + 0x20));
  local_50 = error;
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    uStack_90 = 0x4db0565;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    pIVar8 = (*(uint64_t *)((char *)error + 0x20));
  }
  else {
    pIVar8 = pIVar6;
  }
  __n = (ulong)((pIVar6->rgctx_data[1].klass)->_2).stack_slot_size;
  uVar7 = __n + 0xf & 0xfffffffffffffff0;
  __dest = (void *)((long)local_88 - uVar7);
  __s = (undefined8 *)((long)__dest - uVar7);
  __s[-1] = 0x4db05a7;
  memset(__s,0,__n);
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    __s[-1] = 0x4db05b9;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_58;
  if ((int)pIVar8->rgctx_data[1].type[2].bits < 0) {
    __src = pUVar11;
  }
  __s[-1] = 0x4db05de;
  memcpy(__dest,__src,__n);
  pSVar4 = local_48;
  __s[-1] = 0x4db05e9;
  bVar5 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  local_40 = "unknown_error";
  __s[-1] = 0x4db0608;
  memcpy(__s,__dest,__n);
  pSVar4 = local_50;
  pIVar6 = (*(uint64_t *)((char *)local_50 + 0x20));
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    __s[-1] = 0x4db0621;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  pIVar6 = pIVar6->rgctx_data[7].klass;
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    __s[-1] = 0x4db063a;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  __s[-1] = 0x4db0642;
  pAVar9 = (ApplicationManagers_Changelog_AottgChangelogResult_TValue__o *)il2cpp_codegen_object_new(pIVar6);
  pIVar6 = (*(uint64_t *)((char *)pSVar4 + 0x20));
  uVar10._0_1_ = (pIVar6->_2).bitflags1;
  uVar10._1_1_ = (pIVar6->_2).bitflags2;
  if ((uVar10 & 1) == 0) {
    __s[-1] = 0x4db065a;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    pIVar8 = (*(uint64_t *)((char *)pSVar4 + 0x20));
    uVar10._0_1_ = (pIVar8->_2).bitflags1;
    uVar10._1_1_ = (pIVar8->_2).bitflags2;
  }
  else {
    pIVar8 = pIVar6;
  }
  pIVar1 = (pIVar6->rgctx_data[8].method)->methodPointer;
  if ((uVar10 & 1) == 0) {
    __s[-1] = 0x4db0682;
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar8);
    pIVar8 = (*(uint64_t *)((char *)pSVar4 + 0x20));
    uVar10._0_1_ = (pIVar8->_2).bitflags1;
    uVar10._1_1_ = (pIVar8->_2).bitflags2;
    pMVar2 = pIVar6->rgctx_data[8].method;
  }
  else {
    pMVar2 = pIVar8->rgctx_data[8].method;
  }
  if ((uVar10 & 1) == 0) {
    __s[-1] = 0x4db06b7;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  local_88[1] = (System_String_o *)__s;
  if (-1 < (int)pIVar8->rgctx_data[1].type[2].bits) {
    local_88[1] = (System_String_o *)*__s;
  }
  local_88[2] = local_48;
  if (bVar5) {
    local_88[2] = local_40;
  }
  local_38 = 4;
  local_33 = 1;
  local_32 = 1;
  local_31 = 0;
  local_88[0] = (System_String_o *)&local_38;
  local_88[3] = (System_String_o *)&local_33;
  local_68 = &local_32;
  pIVar3 = pMVar2->invoker_method;
  local_60 = &local_31;
  __s[-1] = 0x4db0728;
  (*pIVar3)(pIVar1,pMVar2,pAVar9,local_88,&local_31);
  return pAVar9;
}


