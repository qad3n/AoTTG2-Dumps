// Type: ApplicationManagers.AottgNetworkNotifications
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/AottgNetworkNotifications.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.AottgNetworkNotifications$$add_OnNetworkError
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError (System_Action_string__o* value, const MethodInfo* method);
// 0x44abaa0

void ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError
               (System_Action_string__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *a;
  bool bVar4;
  
  if (g_data_057ae9e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgNetworkNotifications);
    g_data_057ae9e6 = '\x01';
  }
  a = (System_Delegate_o *)**(undefined8 **)(TypeInfo_AottgNetworkNotifications + 0xb8);
  while( true ) {
    pSVar2 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar3 = 0;
    if ((pSVar2 != (System_Delegate_o *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_string), lVar3 == 0))
    break;
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(undefined8 *)(TypeInfo_AottgNetworkNotifications + 0xb8),lVar3,a);
    bVar4 = a == pSVar2;
    a = pSVar2;
    if (bVar4) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$remove_OnNetworkError
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError (System_Action_string__o* value, const MethodInfo* method);
// 0x44abb70

void ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError
               (System_Action_string__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *source;
  bool bVar4;
  
  if (g_data_057ae9e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgNetworkNotifications);
    g_data_057ae9e7 = '\x01';
  }
  source = (System_Delegate_o *)**(undefined8 **)(TypeInfo_AottgNetworkNotifications + 0xb8);
  while( true ) {
    pSVar2 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar3 = 0;
    if ((pSVar2 != (System_Delegate_o *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_string), lVar3 == 0))
    break;
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(undefined8 *)(TypeInfo_AottgNetworkNotifications + 0xb8),lVar3,source);
    bVar4 = source == pSVar2;
    source = pSVar2;
    if (bVar4) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$TryReport
// il2cpp: bool ApplicationManagers_AottgNetworkNotifications__TryReport (System_String_o* error, const MethodInfo* method);
// 0x44ab390

bool_conflict
ApplicationManagers_AottgNetworkNotifications__TryReport(System_String_o *error,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (g_data_057ae9e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgNetworkNotifications);
    il2cpp_runtime_helper_023445d0(&"network_error");
    g_data_057ae9e8 = '\x01';
  }
  bVar3 = 0;
  bVar2 = System_String__Equals_3af50f0(error,"network_error",5,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    lVar1 = **(long **)(TypeInfo_AottgNetworkNotifications + 0xb8);
    bVar3 = 1;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),error,*(undefined8 *)(lVar1 + 0x28));
    }
  }
  return bVar3;
}


