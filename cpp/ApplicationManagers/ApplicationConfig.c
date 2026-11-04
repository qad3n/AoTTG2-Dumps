// Type: ApplicationManagers.ApplicationConfig
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationConfig.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationConfig.cs
// --------------------------------

// ApplicationManagers.ApplicationConfig$$Init
// il2cpp: void ApplicationManagers_ApplicationConfig__Init (const MethodInfo* method);
// 0x182344350

void ApplicationManagers_ApplicationConfig__Init(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184347926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184347926 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
  }
  bVar1 = System_IO_File__Exists
                    (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentConfigPath,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar2 != 7) {
      return;
    }
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
  }
  TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode = true;
  return;
}


// ApplicationManagers.ApplicationConfig$$.ctor
// il2cpp: void ApplicationManagers_ApplicationConfig___ctor (ApplicationManagers_ApplicationConfig_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_ApplicationConfig___ctor(ApplicationManagers_ApplicationConfig_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationConfig$$.cctor
// il2cpp: void ApplicationManagers_ApplicationConfig___cctor (const MethodInfo* method);
// 0x182344400

void ApplicationManagers_ApplicationConfig___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347927 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"/DevelopmentConfig");
    Il2CppMethodInitialized_184347927 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  pSVar1 = UnityEngine_Application__get_dataPath((MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,"/DevelopmentConfig",(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentConfigPath = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentConfigPath,pSVar1);
  TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode = false;
  return;
}


