// Type: ApplicationManagers.Changelog.AottgChangelogSeenState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogSeenState.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogSeenState$$get_FilePathOverride
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__get_FilePathOverride (const MethodInfo* method);
// 0x44ca180

System_String_o *
ApplicationManagers_Changelog_AottgChangelogSeenState__get_FilePathOverride(MethodInfo *method)

{
  if (g_data_057aeaf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogSeenState);
    g_data_057aeaf1 = '\x01';
  }
  return (System_String_o *)**(undefined8 **)(TypeInfo_AottgChangelogSeenState + 0xb8);
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$set_FilePathOverride
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogSeenState__set_FilePathOverride (System_String_o* value, const MethodInfo* method);
// 0x44ca1c0

void ApplicationManagers_Changelog_AottgChangelogSeenState__set_FilePathOverride
               (System_String_o *value,MethodInfo *method)

{
  if (g_data_057aeaf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogSeenState);
    g_data_057aeaf2 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgChangelogSeenState + 0xb8) = value;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgChangelogSeenState + 0xb8),value);
  return;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$ShouldAutoOpen
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogSeenState__ShouldAutoOpen (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, System_String_o* currentGameVersion, const MethodInfo* method);
// 0x44ca210

bool_conflict
ApplicationManagers_Changelog_AottgChangelogSeenState__ShouldAutoOpen
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,
          System_String_o *currentGameVersion,MethodInfo *method)

{
  System_String_o *value;
  bool_conflict bVar1;
  uint uVar2;
  System_String_o *a;
  MethodInfo *method_00;
  
  if (latest == (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
    if ((char)(latest->fields)._HasChangelog_k__BackingField != '\0') {
      value = (&(latest->fields)._Version_k__BackingField)[(byte)((byte)bVar1 ^ 1)];
      uVar2 = 0;
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        uVar2 = 0;
        bVar1 = System_String__IsNullOrEmpty((latest->fields)._Version_k__BackingField,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          method_00 = (MethodInfo *)(latest->fields)._Version_k__BackingField;
          uVar2 = 0;
          bVar1 = System_String__op_Inequality
                            ((System_String_o *)method_00,currentGameVersion,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            a = ApplicationManagers_Changelog_AottgChangelogSeenState__ReadSeenIdentity(method_00);
            uVar2 = System_String__Equals_3af50f0(a,value,4,(MethodInfo *)0x0);
            uVar2 = uVar2 ^ 1;
          }
        }
      }
    }
  }
  return uVar2;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$MarkSeen
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogSeenState__MarkSeen (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, const MethodInfo* method);
// 0x44ca440

void ApplicationManagers_Changelog_AottgChangelogSeenState__MarkSeen
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  MethodInfo *value;
  
  if (g_data_057aeaf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    g_data_057aeaf3 = '\x01';
  }
  if (latest == (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) {
    value = (MethodInfo *)0x0;
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
    value = (MethodInfo *)(&(latest->fields)._Version_k__BackingField)[(byte)((byte)bVar1 ^ 1)];
  }
  pMVar3 = value;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath(pMVar3);
    if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar3 = (MethodInfo *)System_IO_Path__GetDirectoryName(pSVar2,(MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory((System_String_o *)pMVar3,(MethodInfo *)0x0);
    pSVar2 = ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath(pMVar3);
    System_IO_File__WriteAllText(pSVar2,(System_String_o *)value,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$Identity
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__Identity (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, const MethodInfo* method);
// 0x44ca2b0

System_String_o *
ApplicationManagers_Changelog_AottgChangelogSeenState__Identity
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (latest != (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
    return (&(latest->fields)._Version_k__BackingField)[(byte)((byte)bVar1 ^ 1)];
  }
  return (System_String_o *)0x0;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$ReadSeenIdentity
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__ReadSeenIdentity (const MethodInfo* method);
// 0x44ca2e0

System_String_o * ApplicationManagers_Changelog_AottgChangelogSeenState__ReadSeenIdentity(MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  long *plVar4;
  undefined8 uVar5;
  System_String_o *str0;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [12];
  
  pSVar3 = ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath(method);
  bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar3 = (System_String_o *)0x0;
  }
  else {
    pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_o *)0x0) {
      auVar8 = il2cpp_runtime_helper_022b2c90();
      uVar5 = auVar8._0_8_;
      if (auVar8._8_4_ == 1) {
        plVar4 = (long *)__cxa_begin_catch(uVar5);
        uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
        cVar1 = il2cpp_runtime_helper_0233e000(uVar5,*(undefined8 *)*plVar4);
        if (cVar1 == '\0') {
          plVar7 = (long *)__cxa_allocate_exception(8);
          *plVar7 = *plVar4;
          __cxa_throw(plVar7,&PTR_PTR_05215060,0);
        }
        plVar4 = (long *)*plVar4;
        __cxa_end_catch();
        if (plVar4 != (long *)0x0) {
          pSVar3 = (System_String_o *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
          str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"AottgChangelogSeenState: failed to read seen changelog: ");
          pSVar3 = System_String__Concat_3ae5ba0(str0,pSVar3,(MethodInfo *)0x0);
          lVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0(lVar6);
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
          return (System_String_o *)0x0;
        }
        uVar5 = il2cpp_runtime_helper_022b2c90();
        __cxa_end_catch();
      }
      _Unwind_Resume(uVar5);
    }
    pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
  }
  return pSVar3;
}


// ApplicationManagers.Changelog.AottgChangelogSeenState$$FilePath
// il2cpp: System_String_o* ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath (const MethodInfo* method);
// 0x44ca600

System_String_o * ApplicationManagers_Changelog_AottgChangelogSeenState__FilePath(MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (g_data_057aeaf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&"ChangelogSeen.txt");
    g_data_057aeaf4 = '\x01';
  }
  if (g_data_057aeb83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogSeenState);
    g_data_057aeb83 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((System_String_o *)**(undefined8 **)(TypeInfo_AottgChangelogSeenState + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30);
    if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = System_IO_Path__Combine(pSVar2,"ChangelogSeen.txt",(MethodInfo *)0x0);
    return pSVar2;
  }
  if (g_data_057aeb83 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogSeenState);
    g_data_057aeb83 = '\x01';
  }
  return (System_String_o *)**(undefined8 **)(TypeInfo_AottgChangelogSeenState + 0xb8);
}


