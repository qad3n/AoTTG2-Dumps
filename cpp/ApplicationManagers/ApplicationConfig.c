// Type: ApplicationManagers.ApplicationConfig
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationConfig.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationConfig.cs
// --------------------------------

// ApplicationManagers.ApplicationConfig$$Init
// il2cpp: void ApplicationManagers_ApplicationConfig__Init (const MethodInfo* method);
// 0x44abc40

void ApplicationManagers_ApplicationConfig__Init(MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  
  if (g_data_057ae9e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057ae9e9 = '\x01';
  }
  if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_File__Exists((System_String_o *)**(undefined8 **)(TypeInfo_ApplicationConfig + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    else {
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    if (iVar2 != 7) {
      return;
    }
  }
  if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    *(undefined1 *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8) = 1;
    return;
  }
  *(undefined1 *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8) = 1;
  return;
}


// ApplicationManagers.ApplicationConfig$$.ctor
// il2cpp: void ApplicationManagers_ApplicationConfig___ctor (ApplicationManagers_ApplicationConfig_o* __this, const MethodInfo* method);
// 0x44abd00

void ApplicationManagers_ApplicationConfig___ctor
               (ApplicationManagers_ApplicationConfig_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationConfig$$.cctor
// il2cpp: void ApplicationManagers_ApplicationConfig___cctor (const MethodInfo* method);
// 0x44abd10

void ApplicationManagers_ApplicationConfig___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae9ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&"/DevelopmentConfig");
    g_data_057ae9ea = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UnityEngine_Application__get_dataPath((MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,"/DevelopmentConfig",(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_ApplicationConfig + 0xb8) = pSVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ApplicationConfig + 0xb8),pSVar1);
  *(undefined1 *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8) = 0;
  return;
}


