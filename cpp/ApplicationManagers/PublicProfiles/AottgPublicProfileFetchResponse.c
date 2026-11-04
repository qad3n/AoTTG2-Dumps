// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileFetchResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, bool success, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, System_String_o* error, const MethodInfo* method);
// 0x182364330

void
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse___ctor(ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, bool success, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, System_String_o* error, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Success_k__BackingField = success;
  (__this->fields)._Profile_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Profile_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$get_Success
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Success (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, const MethodInfo* method);
// 0x180e5a320

bool
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Success(ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, MethodInfo* method)

{
  return (__this->fields)._Success_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$set_Success
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Success (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, bool value, const MethodInfo* method);
// 0x1811124d0

void
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Success(ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._Success_k__BackingField = value;
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$get_Profile
// il2cpp: ApplicationManagers_PublicProfiles_AottgPublicProfile_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Profile (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, const MethodInfo* method);
// 0x180573e90

ApplicationManagers_PublicProfiles_AottgPublicProfile_o*
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Profile(ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, MethodInfo* method)

{
  return (__this->fields)._Profile_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$set_Profile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Profile (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* value, const MethodInfo* method);
// 0x180c8de30

void
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Profile(ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* value, MethodInfo* method)

{
  (__this->fields)._Profile_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Profile_k__BackingField,value);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$get_Error
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Error (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Error(ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, MethodInfo* method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$set_Error
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Error (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180ace2f0

void
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Error(ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Error_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,value);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$Ok
// il2cpp: ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Ok (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x182366ab0

ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Ok
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this;
  
  if (Il2CppMethodInitialized_1843479f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
    Il2CppMethodInitialized_1843479f7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Success_k__BackingField = true;
  (__this->fields)._Profile_k__BackingField = profile;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Profile_k__BackingField,profile);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,(void *)0x0);
  return __this;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$Fail
// il2cpp: ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail (System_String_o* error, const MethodInfo* method);
// 0x182366a10

ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
          (System_String_o *error,MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this;
  
  if (Il2CppMethodInitialized_1843479f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_1843479f8 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if (bVar1) {
    error = "unknown_error";
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Success_k__BackingField = false;
  (__this->fields)._Profile_k__BackingField = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Profile_k__BackingField,(void *)0x0);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
  return __this;
}


