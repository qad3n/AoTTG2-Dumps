// Type: ApplicationManagers.Credits.AottgCreditsResult
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsResult$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult___ctor (ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t state, ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo* method);
// 0x181573360

void
ApplicationManagers_Credits_AottgCreditsResult___ctor(ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t state, ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = state;
  (__this->fields)._Credits_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField,value);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
  (__this->fields)._IsFromCache_k__BackingField = isFromCache;
  (__this->fields)._IsStale_k__BackingField = isStale;
  (__this->fields)._IsRefreshing_k__BackingField = isRefreshing;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_State
// il2cpp: int32_t ApplicationManagers_Credits_AottgCreditsResult__get_State (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x180546860

int32_t
ApplicationManagers_Credits_AottgCreditsResult__get_State(ApplicationManagers_Credits_AottgCreditsResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_State
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_State (ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t value, const MethodInfo* method);
// 0x180560b20

void
ApplicationManagers_Credits_AottgCreditsResult__set_State(ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* ApplicationManagers_Credits_AottgCreditsResult__get_Credits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x180573e90

ApplicationManagers_Credits_AottgCreditsResponse_o*
ApplicationManagers_Credits_AottgCreditsResult__get_Credits(ApplicationManagers_Credits_AottgCreditsResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._Credits_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_Credits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_Credits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x180c8de30

void
ApplicationManagers_Credits_AottgCreditsResult__set_Credits(ApplicationManagers_Credits_AottgCreditsResult_o* __this, ApplicationManagers_Credits_AottgCreditsResponse_o* value, MethodInfo* method)

{
  (__this->fields)._Credits_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField,value);
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsResult__get_Error (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
ApplicationManagers_Credits_AottgCreditsResult__get_Error(ApplicationManagers_Credits_AottgCreditsResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_Error
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_Error (ApplicationManagers_Credits_AottgCreditsResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180ace2f0

void
ApplicationManagers_Credits_AottgCreditsResult__set_Error(ApplicationManagers_Credits_AottgCreditsResult_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Error_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,value);
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsFromCache (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x180f1d480

bool
ApplicationManagers_Credits_AottgCreditsResult__get_IsFromCache(ApplicationManagers_Credits_AottgCreditsResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._IsFromCache_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsFromCache
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsFromCache (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x180f1d940

void
ApplicationManagers_Credits_AottgCreditsResult__set_IsFromCache(ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._IsFromCache_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsStale
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsStale (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x181573470

bool
ApplicationManagers_Credits_AottgCreditsResult__get_IsStale(ApplicationManagers_Credits_AottgCreditsResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._IsStale_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsStale
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsStale (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x1815736c0

void
ApplicationManagers_Credits_AottgCreditsResult__set_IsStale(ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._IsStale_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsRefreshing (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x181573430

bool
ApplicationManagers_Credits_AottgCreditsResult__get_IsRefreshing(ApplicationManagers_Credits_AottgCreditsResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._IsRefreshing_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsRefreshing
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsRefreshing (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x1815736b0

void
ApplicationManagers_Credits_AottgCreditsResult__set_IsRefreshing(ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._IsRefreshing_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_HasCredits
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_HasCredits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x181979e60

bool
ApplicationManagers_Credits_AottgCreditsResult__get_HasCredits(ApplicationManagers_Credits_AottgCreditsResult_o* __this, MethodInfo* method)

{
  return (__this->fields)._Credits_k__BackingField !=
         (UnityEngine_Rendering_UnifiedRayTracing_PersistentGpuArray_AccelStructInstances_RTInstance__o *)0x0;
}


// ApplicationManagers.Credits.AottgCreditsResult$$LoadingNoCache
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache (const MethodInfo* method);
// 0x182365920

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_184347a11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_184347a11 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 0;
  (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField,(void *)0x0);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,(void *)0x0);
  (__this->fields)._IsFromCache_k__BackingField = false;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = true;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$ReadyFresh
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, bool isFromCache, const MethodInfo* method);
// 0x1823659a0

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,bool isFromCache,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_184347a12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_184347a12 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 1;
  (__this->fields)._Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,(void *)0x0);
  (__this->fields)._IsFromCache_k__BackingField = isFromCache;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x182365a40

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_184347a13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_184347a13 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 2;
  (__this->fields)._Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,(void *)0x0);
  (__this->fields)._IsFromCache_k__BackingField = true;
  (__this->fields)._IsStale_k__BackingField = true;
  (__this->fields)._IsRefreshing_k__BackingField = true;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$FailedNoCache
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache (System_String_o* error, const MethodInfo* method);
// 0x182365800

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache(System_String_o *error,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_184347a14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_184347a14 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 3;
  (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField,(void *)0x0);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
  (__this->fields)._IsFromCache_k__BackingField = false;
  (__this->fields)._IsStale_k__BackingField = false;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$FailedRefreshStale
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, const MethodInfo* method);
// 0x182365890

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,System_String_o *error,
          MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (Il2CppMethodInitialized_184347a15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
    Il2CppMethodInitialized_184347a15 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResult);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 4;
  (__this->fields)._Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = error;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Error_k__BackingField,error);
  (__this->fields)._IsFromCache_k__BackingField = true;
  (__this->fields)._IsStale_k__BackingField = true;
  (__this->fields)._IsRefreshing_k__BackingField = false;
  return __this;
}


