// Type: ApplicationManagers.AottgNetworkNotifications
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/AottgNetworkNotifications.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.AottgNetworkNotifications$$add_OnNetworkError
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError (System_Action_string__o* value, const MethodInfo* method);
// 0x4193a50

void ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError
               (System_Action_string__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *a;
  bool bVar4;
  
  if (DAT_05704c1a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&TypeInfo_AottgNetworkNotifications);
    DAT_05704c1a = '\x01';
  }
  a = (System_Delegate_o *)**(undefined8 **)(TypeInfo_AottgNetworkNotifications + 0xb8);
  do {
    pSVar2 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_string);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(*(undefined8 *)(TypeInfo_AottgNetworkNotifications + 0xb8),lVar3,a);
    bVar4 = a != pSVar2;
    a = pSVar2;
  } while (bVar4);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$remove_OnNetworkError
// il2cpp: void ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError (System_Action_string__o* value, const MethodInfo* method);
// 0x4193b20

void ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError
               (System_Action_string__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *source;
  bool bVar4;
  
  if (DAT_05704c1b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&TypeInfo_AottgNetworkNotifications);
    DAT_05704c1b = '\x01';
  }
  source = (System_Delegate_o *)**(undefined8 **)(TypeInfo_AottgNetworkNotifications + 0xb8);
  do {
    pSVar2 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_string);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(*(undefined8 *)(TypeInfo_AottgNetworkNotifications + 0xb8),lVar3,source);
    bVar4 = source != pSVar2;
    source = pSVar2;
  } while (bVar4);
  return;
}


// ApplicationManagers.AottgNetworkNotifications$$TryReport
// il2cpp: bool ApplicationManagers_AottgNetworkNotifications__TryReport (System_String_o* error, const MethodInfo* method);
// 0x4193340

bool_conflict
ApplicationManagers_AottgNetworkNotifications__TryReport(System_String_o *error,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05704c1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgNetworkNotifications);
    il2cpp_init_method_metadata(&"network_error");
    DAT_05704c1c = '\x01';
  }
  bVar3 = 0;
  bVar2 = System_String__Equals(error,"network_error",5,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    lVar1 = **(long **)(TypeInfo_AottgNetworkNotifications + 0xb8);
    bVar3 = 1;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),error,*(undefined8 *)(lVar1 + 0x28))
      ;
    }
  }
  return bVar3;
}


