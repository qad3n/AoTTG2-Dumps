// Type: ApplicationManagers.Credits.AottgCreditsResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.Credits/AottgCreditsResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsResult$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult___ctor (ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t state, ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo* method);
// 0x5e22870

void ApplicationManagers_Credits_AottgCreditsResult___ctor
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,int32_t state,
               ApplicationManagers_Credits_AottgCreditsResponse_o *credits,System_String_o *error,
               bool isFromCache,bool isStale,bool isRefreshing,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = state;
  (__this->fields)._Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = isFromCache;
  (__this->fields)._IsStale_k__BackingField = isStale;
  (__this->fields)._IsRefreshing_k__BackingField = isRefreshing;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_State
// il2cpp: int32_t ApplicationManagers_Credits_AottgCreditsResult__get_State (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x5e228e0

int32_t ApplicationManagers_Credits_AottgCreditsResult__get_State
                  (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_State
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_State (ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t value, const MethodInfo* method);
// 0x5e228f0

void ApplicationManagers_Credits_AottgCreditsResult__set_State
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* ApplicationManagers_Credits_AottgCreditsResult__get_Credits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x5e22900

ApplicationManagers_Credits_AottgCreditsResponse_o *
ApplicationManagers_Credits_AottgCreditsResult__get_Credits
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Credits_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_Credits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_Credits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x5e22910

void ApplicationManagers_Credits_AottgCreditsResult__set_Credits
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,
               ApplicationManagers_Credits_AottgCreditsResponse_o *value,MethodInfo *method)

{
  (__this->fields)._Credits_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsResult__get_Error (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x5e22920

System_String_o *
ApplicationManagers_Credits_AottgCreditsResult__get_Error
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_Error
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_Error (ApplicationManagers_Credits_AottgCreditsResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e22930

void ApplicationManagers_Credits_AottgCreditsResult__set_Error
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Error_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsFromCache (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x5e22940

bool ApplicationManagers_Credits_AottgCreditsResult__get_IsFromCache
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsFromCache_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsFromCache
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsFromCache (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x5e22950

void ApplicationManagers_Credits_AottgCreditsResult__set_IsFromCache
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._IsFromCache_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsStale
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsStale (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x5e22960

bool ApplicationManagers_Credits_AottgCreditsResult__get_IsStale
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsStale_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsStale
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsStale (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x5e22970

void ApplicationManagers_Credits_AottgCreditsResult__set_IsStale
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._IsStale_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsRefreshing (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x5e22980

bool ApplicationManagers_Credits_AottgCreditsResult__get_IsRefreshing
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsRefreshing_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsRefreshing
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsRefreshing (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x5e22990

void ApplicationManagers_Credits_AottgCreditsResult__set_IsRefreshing
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._IsRefreshing_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_HasCredits
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_HasCredits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x5e229a0

bool ApplicationManagers_Credits_AottgCreditsResult__get_HasCredits
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Credits_k__BackingField !=
         (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
}


// ApplicationManagers.Credits.AottgCreditsResult$$LoadingNoCache
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache (const MethodInfo* method);
// 0x5e21f10

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_075484c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_075484c0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 0;
  (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = false;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = true;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$ReadyFresh
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, bool isFromCache, const MethodInfo* method);
// 0x5e21e10

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,bool isFromCache,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_075484c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_075484c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 1;
  (__this->fields)._Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = isFromCache;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x5e21e90

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_075484c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_075484c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 2;
  (__this->fields)._Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = true;
  (__this->fields)._IsStale_k__BackingField = true;
  (__this->fields)._IsRefreshing_k__BackingField = true;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$FailedNoCache
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache (System_String_o* error, const MethodInfo* method);
// 0x5e222c0

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache(System_String_o *error,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_075484c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_075484c3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 3;
  (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = false;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$FailedRefreshStale
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, const MethodInfo* method);
// 0x5e22240

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,System_String_o *error,
          MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_075484c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_075484c4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 4;
  (__this->fields)._Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField);
  (__this->fields)._IsFromCache_k__BackingField = true;
  (__this->fields)._IsStale_k__BackingField = true;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


