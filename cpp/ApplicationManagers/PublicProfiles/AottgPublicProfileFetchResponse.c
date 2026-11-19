// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileFetchResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, bool success, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, System_String_o* error, const MethodInfo* method);
// 0x5e1fe20

void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,bool success,
               ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,System_String_o *error,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Success_k__BackingField = success;
  (__this->fields)._Profile_k__BackingField = profile;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Profile_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$get_Success
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Success (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, const MethodInfo* method);
// 0x5e1fe70

bool ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Success
               (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,
               MethodInfo *method)

{
  return (__this->fields)._Success_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$set_Success
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Success (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, bool value, const MethodInfo* method);
// 0x5e1fe80

void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Success
               (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,bool value,
               MethodInfo *method)

{
  (__this->fields)._Success_k__BackingField = value;
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$get_Profile
// il2cpp: ApplicationManagers_PublicProfiles_AottgPublicProfile_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Profile (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, const MethodInfo* method);
// 0x5e1fe90

ApplicationManagers_PublicProfiles_AottgPublicProfile_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Profile
          (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Profile_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$set_Profile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Profile (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* value, const MethodInfo* method);
// 0x5e1fea0

void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Profile
               (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,
               ApplicationManagers_PublicProfiles_AottgPublicProfile_o *value,MethodInfo *method)

{
  (__this->fields)._Profile_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Profile_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$get_Error
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Error (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, const MethodInfo* method);
// 0x5e1feb0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Error
          (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$set_Error
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Error (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e1fec0

void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Error
               (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,
               System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Error_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$Ok
// il2cpp: ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Ok (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x5e1fed0

ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Ok
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this;
  
  if (Il2CppMethodInitialized_075484a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
    Il2CppMethodInitialized_075484a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Success_k__BackingField = true;
  (__this->fields)._Profile_k__BackingField = profile;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Profile_k__BackingField);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return __this;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$Fail
// il2cpp: ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail (System_String_o* error, const MethodInfo* method);
// 0x5e1f5b0

ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
          (System_String_o *error,MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this;
  
  if (Il2CppMethodInitialized_075484a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_075484a7 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if (bVar1) {
    error = "unknown_error";
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Success_k__BackingField = false;
  (__this->fields)._Profile_k__BackingField = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Profile_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return __this;
}


