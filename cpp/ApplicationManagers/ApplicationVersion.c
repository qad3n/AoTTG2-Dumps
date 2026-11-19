// Type: ApplicationManagers.ApplicationVersion
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationVersion.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationVersion.cs
// --------------------------------

// ApplicationManagers.ApplicationVersion$$GetVersion
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationVersion__GetVersion (const MethodInfo* method);
// 0x5e0a290

System_Net_NetworkCredential_o * ApplicationManagers_ApplicationVersion__GetVersion(MethodInfo *method)

{
  uint32_t uVar1;
  System_Func_NetworkCredential__o *pSVar2;
  System_Net_NetworkCredential_o *pSVar3;
  
  if (Il2CppMethodInitialized_075483e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&"TestVersion");
    Il2CppMethodInitialized_075483e6 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
    pSVar2 = TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->VersionProvider;
  }
  else {
    pSVar2 = *(System_Func_NetworkCredential__o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion)->static_fields + 8);
  }
  if (pSVar2 == (System_Func_NetworkCredential__o *)0x0) {
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
    System_Net_NetworkCredential___ctor_62a6c00
              (pSVar3,"TestVersion","TestVersion",(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion)->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
    pSVar2 = TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->VersionProvider;
    if (pSVar2 == (System_Func_NetworkCredential__o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  pSVar3 = (System_Net_NetworkCredential_o *)
           (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
  return pSVar3;
}


// ApplicationManagers.ApplicationVersion$$GetHashCode
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetHashCode (System_String_o* key, const MethodInfo* method);
// 0x5e0a390

System_String_o * ApplicationManagers_ApplicationVersion__GetHashCode(System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  code *vtableDispatch;
  System_Func_string__string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075483e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_075483e7 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
    pSVar2 = TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->HashProvider;
  }
  else {
    pSVar2 = *(System_Func_string__string__o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion)->static_fields + 0x10);
  }
  if (pSVar2 == (System_Func_string__string__o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion)->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
    pSVar2 = TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->HashProvider;
    if (pSVar2 == (System_Func_string__string__o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  pSVar3 = (System_String_o *)
           (*vtableDispatch)
                     ((pSVar2->fields).method_code,key,(pSVar2->fields).method,vtableDispatch);
  return pSVar3;
}


// ApplicationManagers.ApplicationVersion$$GetHashKey
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetHashKey (System_String_o* key, const MethodInfo* method);
// 0x5e0a460

System_String_o * ApplicationManagers_ApplicationVersion__GetHashKey(System_String_o *key,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  
  if (Il2CppMethodInitialized_075483e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_075483e8 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
    cVar1 = TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->UseServerHash;
  }
  else {
    cVar1 = *(char *)((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion)->static_fields;
  }
  if (cVar1 == '\0') {
    key = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return key;
}


// ApplicationManagers.ApplicationVersion$$GetSessionID
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetSessionID (const MethodInfo* method);
// 0x5e0a4f0

System_String_o * ApplicationManagers_ApplicationVersion__GetSessionID(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075483e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"eWire7HpInEhOO7r");
    Il2CppMethodInitialized_075483e9 = '\x01';
  }
  pSVar1 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier((MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("eWire7HpInEhOO7r",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.ApplicationVersion$$.cctor
// il2cpp: void ApplicationManagers_ApplicationVersion___cctor (const MethodInfo* method);
// 0x5e0a530

void ApplicationManagers_ApplicationVersion___cctor(MethodInfo *method)

{
  ApplicationManagers_ApplicationVersion_StaticFields *pAVar1;
  System_Func_NetworkCredential__o *__this;
  System_Func_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_075483ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateHashCode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    Il2CppMethodInitialized_075483ea = '\x01';
  }
  TypeInfo_ApplicationManagers_ApplicationVersion->static_fields->UseServerHash = true;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_NetworkCredential);
  System_Func_object____ctor
            ((System_Func_object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateVersion,
             (MethodInfo_4F0C6A0 *)0x0);
  pAVar1 = TypeInfo_ApplicationManagers_ApplicationVersion->static_fields;
  pAVar1->VersionProvider = __this;
  Il2CppCodeGenWriteBarrier(&pAVar1->VersionProvider);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateHashCode,
             (MethodInfo_4F19B50 *)0x0);
  pAVar1 = TypeInfo_ApplicationManagers_ApplicationVersion->static_fields;
  pAVar1->HashProvider = __this_00;
  Il2CppCodeGenWriteBarrier(&pAVar1->HashProvider);
  return;
}


// ApplicationManagers.ApplicationVersion$$GetPrivateVersion
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationVersion__GetPrivateVersion (const MethodInfo* method);
// 0x5e0a620

System_Net_NetworkCredential_o * ApplicationManagers_ApplicationVersion__GetPrivateVersion(MethodInfo *method)

{
  System_Net_NetworkCredential_o *pSVar1;
  
  pSVar1 = ApplicationManagers_ApplicationEncoder__GetTempBuffer(method);
  return pSVar1;
}


// ApplicationManagers.ApplicationVersion$$GetPrivateHashCode
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetPrivateHashCode (System_String_o* key, const MethodInfo* method);
// 0x5e0a720

System_String_o *
ApplicationManagers_ApplicationVersion__GetPrivateHashCode(System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Net_NetworkCredential_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075483eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PtzsW");
    Il2CppMethodInitialized_075483eb = '\x01';
  }
  method_00 = (MethodInfo *)"PtzsW";
  pSVar1 = System_String__Concat_52f0320(key,"PtzsW",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07548496 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
    Il2CppMethodInitialized_07548496 = '\x01';
  }
  pSVar1 = ApplicationManagers_ApplicationEncoder__Encode1(pSVar1,method_00);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
  System_Net_NetworkCredential___ctor_62a6c00(__this,"REa9CMK4mN34Ec#86xN%!psve%J14C1S",pSVar1,(MethodInfo *)0x0);
  if (__this == (System_Net_NetworkCredential_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_Net_NetworkCredential__get_Password(__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.ApplicationVersion$$.ctor
// il2cpp: void ApplicationManagers_ApplicationVersion___ctor (ApplicationManagers_ApplicationVersion_o* __this, const MethodInfo* method);
// 0x5e0a850

void ApplicationManagers_ApplicationVersion___ctor
               (ApplicationManagers_ApplicationVersion_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


