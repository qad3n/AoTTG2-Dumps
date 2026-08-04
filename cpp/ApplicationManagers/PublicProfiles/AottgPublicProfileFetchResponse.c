// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileFetchResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, bool success, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, System_String_o* error, const MethodInfo* method);
// 0x44c3020

void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,
               bool_conflict success,ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,
               System_String_o *error,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(char *)&(__this->fields)._Success_k__BackingField = (char)success;
  (__this->fields)._Profile_k__BackingField = profile;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Profile_k__BackingField,profile);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$get_Success
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Success (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, const MethodInfo* method);
// 0x44c3070

bool_conflict
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Success
          (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Success_k__BackingField);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$set_Success
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Success (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, bool value, const MethodInfo* method);
// 0x44c3080

void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Success
               (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,
               bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._Success_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$get_Profile
// il2cpp: ApplicationManagers_PublicProfiles_AottgPublicProfile_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Profile (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, const MethodInfo* method);
// 0x44c3090

ApplicationManagers_PublicProfiles_AottgPublicProfile_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Profile
          (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Profile_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$set_Profile
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Profile (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfile_o* value, const MethodInfo* method);
// 0x44c30a0

void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Profile
               (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,
               ApplicationManagers_PublicProfiles_AottgPublicProfile_o *value,MethodInfo *method)

{
  (__this->fields)._Profile_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Profile_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$get_Error
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Error (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, const MethodInfo* method);
// 0x44c30b0

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__get_Error
          (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$set_Error
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Error (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c30c0

void ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__set_Error
               (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this,
               System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$Ok
// il2cpp: ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Ok (ApplicationManagers_PublicProfiles_AottgPublicProfile_o* profile, const MethodInfo* method);
// 0x44c30d0

ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Ok
          (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *profile,MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this;
  
  if (g_data_057aeab7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileFetchResponse);
    g_data_057aeab7 = '\x01';
  }
  __this = (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_AottgPublicProfileFetchResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(undefined1 *)&(__this->fields)._Success_k__BackingField = 1;
  (__this->fields)._Profile_k__BackingField = profile;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Profile_k__BackingField,profile);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
  return __this;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse$$Fail
// il2cpp: ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail (System_String_o* error, const MethodInfo* method);
// 0x44c27b0

ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
          (System_String_o *error,MethodInfo *method)

{
  bool_conflict bVar1;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *__this;
  
  if (g_data_057aeab8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileFetchResponse);
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057aeab8 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    error = "unknown_error";
  }
  __this = (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_AottgPublicProfileFetchResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(undefined1 *)&(__this->fields)._Success_k__BackingField = 0;
  (__this->fields)._Profile_k__BackingField = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Profile_k__BackingField,0);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  return __this;
}


