// Type: ApplicationManagers.AottgNetworkNotifications
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/AottgNetworkNotifications.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.AottgNetworkNotifications$$add_OnNetworkError
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError (System_Action_string__o* value, const MethodInfo* method);
// 0x5e07c80

void ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError
               (System_Action_string__o *value,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_string__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075483d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AottgNetworkNotifications);
    Il2CppMethodInitialized_075483d9 = '\x01';
  }
  a = TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnNetworkError;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnNetworkError
                        ,value_00,a);
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$remove_OnNetworkError
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError (System_Action_string__o* value, const MethodInfo* method);
// 0x5e07d50

void ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError
               (System_Action_string__o *value,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_string__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075483da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AottgNetworkNotifications);
    Il2CppMethodInitialized_075483da = '\x01';
  }
  source = TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnNetworkError;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnNetworkError
                        ,value_00,source);
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$add_OnRoomEntryFailed
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__add_OnRoomEntryFailed (System_Action_short__bool__o* value, const MethodInfo* method);
// 0x5e07e20

void ApplicationManagers_AottgNetworkNotifications__add_OnRoomEntryFailed
               (System_Action_short__bool__o *value,MethodInfo *method)

{
  System_Action_short__bool__c *pSVar1;
  System_Action_short__bool__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_short__bool__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075483db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_short_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AottgNetworkNotifications);
    Il2CppMethodInitialized_075483db = '\x01';
  }
  a = TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnRoomEntryFailed;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_short_bool;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_short_bool)
      ;
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->
                         OnRoomEntryFailed,value_00,a);
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$remove_OnRoomEntryFailed
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__remove_OnRoomEntryFailed (System_Action_short__bool__o* value, const MethodInfo* method);
// 0x5e07ef0

void ApplicationManagers_AottgNetworkNotifications__remove_OnRoomEntryFailed
               (System_Action_short__bool__o *value,MethodInfo *method)

{
  System_Action_short__bool__c *pSVar1;
  System_Action_short__bool__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_short__bool__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075483dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_short_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AottgNetworkNotifications);
    Il2CppMethodInitialized_075483dc = '\x01';
  }
  source = TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnRoomEntryFailed;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_short_bool;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_short_bool)
      ;
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->
                         OnRoomEntryFailed,value_00,source);
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$ReportRoomEntryFailed
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__ReportRoomEntryFailed (int16_t returnCode, bool creating, const MethodInfo* method);
// 0x5e07fc0

void ApplicationManagers_AottgNetworkNotifications__ReportRoomEntryFailed
               (int16_t returnCode,bool creating,MethodInfo *method)

{
  System_Action_short__bool__o *pSVar1;
  code *vtableDispatch;
  
  if (Il2CppMethodInitialized_075483dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AottgNetworkNotifications);
    Il2CppMethodInitialized_075483dd = '\x01';
  }
  pSVar1 = TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnRoomEntryFailed;
  if (pSVar1 == (System_Action_short__bool__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar1->fields).method_code,(int)returnCode,creating,(pSVar1->fields).method,
             vtableDispatch);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$TryReport
// il2cpp: bool ApplicationManagers_AottgNetworkNotifications__TryReport (System_String_o* error, const MethodInfo* method);
// 0x5e08020

bool ApplicationManagers_AottgNetworkNotifications__TryReport(System_String_o *error,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075483de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AottgNetworkNotifications);
    il2cpp_codegen_initialize_runtime_metadata(&"network_error");
    Il2CppMethodInitialized_075483de = '\x01';
  }
  bVar2 = System_String__Equals_52ffe30(error,"network_error",5,(MethodInfo *)0x0);
  if ((bVar2) &&
     (pSVar1 = TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnNetworkError,
     pSVar1 != (System_Action_string__o *)0x0)) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,error,(pSVar1->fields).method);
  }
  return bVar2;
}


