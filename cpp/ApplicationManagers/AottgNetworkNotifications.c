// Type: ApplicationManagers.AottgNetworkNotifications
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/AottgNetworkNotifications.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.AottgNetworkNotifications$$add_OnNetworkError
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError (System_Action_string__o* value, const MethodInfo* method);
// 0x1823441b0

void ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError
               (System_Action_string__o *value,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_string__o *pSVar3;
  System_Action_string__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347923 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AottgNetworkNotifications);
    Il2CppMethodInitialized_184347923 = '\x01';
  }
  a = TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnNetworkError;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_string__o *)
             il2cpp_runtime_helper_1804174a0(TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields,pIVar2);
    bVar4 = pSVar3 != a;
    a = pSVar3;
  } while (bVar4);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$remove_OnNetworkError
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError (System_Action_string__o* value, const MethodInfo* method);
// 0x182344280

void ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError
               (System_Action_string__o *value,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_string__o *pSVar3;
  System_Action_string__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347924 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AottgNetworkNotifications);
    Il2CppMethodInitialized_184347924 = '\x01';
  }
  source = TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnNetworkError;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_string__o *)
             il2cpp_runtime_helper_1804174a0(TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields,pIVar2);
    bVar4 = pSVar3 != source;
    source = pSVar3;
  } while (bVar4);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$TryReport
// il2cpp: bool ApplicationManagers_AottgNetworkNotifications__TryReport (System_String_o* error, const MethodInfo* method);
// 0x182344120

bool ApplicationManagers_AottgNetworkNotifications__TryReport(System_String_o *error,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347925 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AottgNetworkNotifications);
    il2cpp_codegen_initialize_runtime_metadata(&"network_error");
    Il2CppMethodInitialized_184347925 = '\x01';
  }
  bVar2 = System_String__Equals_196c550(error,"network_error",5,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = TypeInfo_ApplicationManagers_AottgNetworkNotifications->static_fields->OnNetworkError;
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,error,(pSVar1->fields).method);
    }
    return true;
  }
  return false;
}


