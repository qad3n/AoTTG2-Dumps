// Type: ApplicationManagers.ApplicationConfig
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationConfig.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationConfig.cs
// --------------------------------

// ApplicationManagers.ApplicationConfig$$Init
// il2cpp: void ApplicationManagers_ApplicationConfig__Init (const MethodInfo* method);
// 0x5e080a0

void ApplicationManagers_ApplicationConfig__Init(MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  
  if (Il2CppMethodInitialized_075483df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_075483df = '\x01';
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
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    else {
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    if (iVar2 != 7) {
      return;
    }
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode = true;
    return;
  }
  TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode = true;
  return;
}


// ApplicationManagers.ApplicationConfig$$.ctor
// il2cpp: void ApplicationManagers_ApplicationConfig___ctor (ApplicationManagers_ApplicationConfig_o* __this, const MethodInfo* method);
// 0x5e08160

void ApplicationManagers_ApplicationConfig___ctor
               (ApplicationManagers_ApplicationConfig_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationConfig$$.cctor
// il2cpp: void ApplicationManagers_ApplicationConfig___cctor (const MethodInfo* method);
// 0x5e08170

void ApplicationManagers_ApplicationConfig___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075483e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"/DevelopmentConfig");
    Il2CppMethodInitialized_075483e0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  pSVar1 = UnityEngine_Application__get_dataPath((MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320(pSVar1,"/DevelopmentConfig",(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentConfigPath = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentConfigPath);
  TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode = false;
  return;
}


