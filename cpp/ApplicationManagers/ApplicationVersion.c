// Type: ApplicationManagers.ApplicationVersion
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationVersion.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationVersion.cs
// --------------------------------

// ApplicationManagers.ApplicationVersion$$GetVersion
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationVersion__GetVersion (const MethodInfo* method);
// 0x182345780

System_Net_NetworkCredential_o * ApplicationManagers_ApplicationVersion__GetVersion(MethodInfo *method)

{
  System_Func_NetworkCredential__o *pSVar1;
  System_Net_NetworkCredential_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434792c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&"TestVersion");
    Il2CppMethodInitialized_18434792c = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
  }
  if (TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->VersionProvider ==
      (System_Func_NetworkCredential__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
    System_Net_NetworkCredential___ctor_27d0800
              (pSVar2,"TestVersion","TestVersion",(MethodInfo *)0x0);
    return pSVar2;
  }
  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
  }
  pSVar1 = TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->VersionProvider;
  if (pSVar1 != (System_Func_NetworkCredential__o *)0x0) {
    pSVar2 = (System_Net_NetworkCredential_o *)
             (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationVersion$$GetHashCode
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetHashCode (System_String_o* key, const MethodInfo* method);
// 0x1823455b0

System_String_o * ApplicationManagers_ApplicationVersion__GetHashCode(System_String_o *key,MethodInfo *method)

{
  System_Func_string__string__o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434792d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_18434792d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
  }
  if (TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->HashProvider ==
      (System_Func_string__string__o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
  }
  pSVar1 = TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->HashProvider;
  if (pSVar1 != (System_Func_string__string__o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,key,(pSVar1->fields).method)
    ;
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationVersion$$GetHashKey
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetHashKey (System_String_o* key, const MethodInfo* method);
// 0x182345660

System_String_o * ApplicationManagers_ApplicationVersion__GetHashKey(System_String_o *key,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434792e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_18434792e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
  }
  if (TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->UseServerHash == false) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  return key;
}


// ApplicationManagers.ApplicationVersion$$GetSessionID
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetSessionID (const MethodInfo* method);
// 0x182345740

System_String_o * ApplicationManagers_ApplicationVersion__GetSessionID(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434792f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"eWire7HpInEhOO7r");
    Il2CppMethodInitialized_18434792f = '\x01';
  }
  pSVar1 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier((MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("eWire7HpInEhOO7r",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.ApplicationVersion$$.cctor
// il2cpp: void ApplicationManagers_ApplicationVersion___cctor (const MethodInfo* method);
// 0x182345860

void ApplicationManagers_ApplicationVersion___cctor(MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_Vector2__o *__this;
  System_Func_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_184347930 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateHashCode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    Il2CppMethodInitialized_184347930 = '\x01';
  }
  TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->UseServerHash = true;
  __this = (DG_Tweening_Core_DOGetter_Vector2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_NetworkCredential);
  System_Func_object____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateVersion,
             (MethodInfo_1387740 *)0x0);
  TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->VersionProvider =
       (System_Func_NetworkCredential__o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->VersionProvider,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateHashCode,
             (MethodInfo_16E67D0 *)0x0);
  TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->HashProvider = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->HashProvider,__this_00);
  return;
}


// ApplicationManagers.ApplicationVersion$$GetPrivateVersion
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationVersion__GetPrivateVersion (const MethodInfo* method);
// 0x182345730

System_Net_NetworkCredential_o * ApplicationManagers_ApplicationVersion__GetPrivateVersion(MethodInfo *method)

{
  System_Net_NetworkCredential_o *pSVar1;
  
  pSVar1 = ApplicationManagers_ApplicationEncoder__GetTempBuffer((MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.ApplicationVersion$$GetPrivateHashCode
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetPrivateHashCode (System_String_o* key, const MethodInfo* method);
// 0x1823456d0

System_String_o *
ApplicationManagers_ApplicationVersion__GetPrivateHashCode(System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Net_NetworkCredential_o *__this;
  
  if (Il2CppMethodInitialized_184347931 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PtzsW");
    Il2CppMethodInitialized_184347931 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(key,"PtzsW",(MethodInfo *)0x0);
  __this = ApplicationManagers_ApplicationEncoder__Encode1a(pSVar1,(MethodInfo *)0x0);
  if (__this != (System_Net_NetworkCredential_o *)0x0) {
    pSVar1 = System_Net_NetworkCredential__InternalGetPassword(__this,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationVersion$$.ctor
// il2cpp: void ApplicationManagers_ApplicationVersion___ctor (ApplicationManagers_ApplicationVersion_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_ApplicationVersion___ctor(ApplicationManagers_ApplicationVersion_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


