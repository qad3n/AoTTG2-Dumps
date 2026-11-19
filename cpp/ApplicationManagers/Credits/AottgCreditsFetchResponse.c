// Type: ApplicationManagers.Credits.AottgCreditsFetchResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.Credits/AottgCreditsFetchResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsFetchResponse$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsFetchResponse___ctor (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, bool success, ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, const MethodInfo* method);
// 0x5e229b0

void ApplicationManagers_Credits_AottgCreditsFetchResponse___ctor
               (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,bool success,
               ApplicationManagers_Credits_AottgCreditsResponse_o *credits,System_String_o *error,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Success_k__BackingField = success;
  (__this->fields)._Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$get_Success
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Success (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, const MethodInfo* method);
// 0x5e22a00

bool ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Success
               (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Success_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$set_Success
// il2cpp: void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Success (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, bool value, const MethodInfo* method);
// 0x5e22a10

void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Success
               (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._Success_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Credits (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, const MethodInfo* method);
// 0x5e22a20

ApplicationManagers_Credits_AottgCreditsResponse_o *
ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Credits
          (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Credits_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$set_Credits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Credits (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x5e22a30

void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Credits
               (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,
               ApplicationManagers_Credits_AottgCreditsResponse_o *value,MethodInfo *method)

{
  (__this->fields)._Credits_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Error (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, const MethodInfo* method);
// 0x5e22a40

System_String_o *
ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Error
          (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$set_Error
// il2cpp: void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Error (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e22a50

void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Error
               (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Error_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$Ok
// il2cpp: ApplicationManagers_Credits_AottgCreditsFetchResponse_o* ApplicationManagers_Credits_AottgCreditsFetchResponse__Ok (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x5e22a60

ApplicationManagers_Credits_AottgCreditsFetchResponse_o *
ApplicationManagers_Credits_AottgCreditsFetchResponse__Ok
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this;
  
  if (Il2CppMethodInitialized_075484c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditsFetchResponse);
    Il2CppMethodInitialized_075484c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsFetchResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Success_k__BackingField = true;
  (__this->fields)._Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$Fail
// il2cpp: ApplicationManagers_Credits_AottgCreditsFetchResponse_o* ApplicationManagers_Credits_AottgCreditsFetchResponse__Fail (System_String_o* error, const MethodInfo* method);
// 0x5e22ae0

ApplicationManagers_Credits_AottgCreditsFetchResponse_o *
ApplicationManagers_Credits_AottgCreditsFetchResponse__Fail(System_String_o *error,MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this;
  
  if (Il2CppMethodInitialized_075484c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditsFetchResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_075484c6 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if (bVar1) {
    error = "unknown_error";
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsFetchResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Success_k__BackingField = false;
  (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return __this;
}


