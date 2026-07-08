// Type: ApplicationManagers.ApplicationConfig
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationConfig.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/ApplicationConfig.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.ApplicationConfig$$Init
// il2cpp: void ApplicationManagers_ApplicationConfig__Init (const MethodInfo* method);
// 0x4193bf0

void ApplicationManagers_ApplicationConfig__Init(MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  
  if (DAT_05704c1d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationConfig);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_05704c1d = '\x01';
  }
  if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_IO_File__Exists
                    ((System_String_o *)**(undefined8 **)(TypeInfo_ApplicationConfig + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
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
    il2cpp_init_class();
    *(undefined1 *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8) = 1;
    return;
  }
  *(undefined1 *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8) = 1;
  return;
}


// ApplicationManagers.ApplicationConfig$$.ctor
// il2cpp: void ApplicationManagers_ApplicationConfig___ctor (ApplicationManagers_ApplicationConfig_o* __this, const MethodInfo* method);
// 0x4193cb0

void ApplicationManagers_ApplicationConfig___ctor
               (ApplicationManagers_ApplicationConfig_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationConfig$$.cctor
// il2cpp: void ApplicationManagers_ApplicationConfig___cctor (const MethodInfo* method);
// 0x4193cc0

void ApplicationManagers_ApplicationConfig___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704c1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationConfig);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&"/DevelopmentConfig");
    DAT_05704c1e = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UnityEngine_Application__get_dataPath((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,"/DevelopmentConfig",(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_ApplicationConfig + 0xb8) = pSVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ApplicationConfig + 0xb8),pSVar1);
  *(undefined1 *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8) = 0;
  return;
}


