// Type: ApplicationManagers.Credits.AottgCreditsResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsResult$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult___ctor (ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t state, ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo* method);
// 0x44c6250

void ApplicationManagers_Credits_AottgCreditsResult___ctor
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,int32_t state,
               ApplicationManagers_Credits_AottgCreditsResponse_o *credits,System_String_o *error,
               bool_conflict isFromCache,bool_conflict isStale,bool_conflict isRefreshing,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = state;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)isFromCache;
  *(char *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = (char)isStale;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = (undefined1)isRefreshing;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_State
// il2cpp: int32_t ApplicationManagers_Credits_AottgCreditsResult__get_State (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x44c62c0

int32_t ApplicationManagers_Credits_AottgCreditsResult__get_State
                  (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_State
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_State (ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t value, const MethodInfo* method);
// 0x44c62d0

void ApplicationManagers_Credits_AottgCreditsResult__set_State
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* ApplicationManagers_Credits_AottgCreditsResult__get_Credits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x44c62e0

ApplicationManagers_Credits_AottgCreditsResponse_o *
ApplicationManagers_Credits_AottgCreditsResult__get_Credits
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Credits_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_Credits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_Credits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x44c62f0

void ApplicationManagers_Credits_AottgCreditsResult__set_Credits
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,
               ApplicationManagers_Credits_AottgCreditsResponse_o *value,MethodInfo *method)

{
  (__this->fields)._Credits_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsResult__get_Error (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x44c6300

System_String_o *
ApplicationManagers_Credits_AottgCreditsResult__get_Error
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_Error
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_Error (ApplicationManagers_Credits_AottgCreditsResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c6310

void ApplicationManagers_Credits_AottgCreditsResult__set_Error
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsFromCache (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x44c6320

bool_conflict
ApplicationManagers_Credits_AottgCreditsResult__get_IsFromCache
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsFromCache_k__BackingField);
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsFromCache
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsFromCache (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x44c6330

void ApplicationManagers_Credits_AottgCreditsResult__set_IsFromCache
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsStale
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsStale (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x44c6340

bool_conflict
ApplicationManagers_Credits_AottgCreditsResult__get_IsStale
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1));
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsStale
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsStale (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x44c6350

void ApplicationManagers_Credits_AottgCreditsResult__set_IsStale
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = (char)value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsRefreshing (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x44c6360

bool_conflict
ApplicationManagers_Credits_AottgCreditsResult__get_IsRefreshing
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2));
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsRefreshing
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsRefreshing (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x44c6370

void ApplicationManagers_Credits_AottgCreditsResult__set_IsRefreshing
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = (char)value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_HasCredits
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_HasCredits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x44c6380

bool_conflict
ApplicationManagers_Credits_AottgCreditsResult__get_HasCredits
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (__this->fields)._Credits_k__BackingField !=
                  (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0);
}


// ApplicationManagers.Credits.AottgCreditsResult$$LoadingNoCache
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache (const MethodInfo* method);
// 0x44c58e0

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (g_data_057aead1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
    g_data_057aead1 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 0;
  (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,0);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 1;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$ReadyFresh
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, bool isFromCache, const MethodInfo* method);
// 0x44c57e0

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,bool_conflict isFromCache,
          MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (g_data_057aead2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
    g_data_057aead2 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 1;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)isFromCache;
  *(undefined2 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = 0;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x44c5860

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (g_data_057aead3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
    g_data_057aead3 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 2;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,0);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0x101;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 1;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$FailedNoCache
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache (System_String_o* error, const MethodInfo* method);
// 0x44c5ca0

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache(System_String_o *error,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (g_data_057aead4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
    g_data_057aead4 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 3;
  (__this->fields)._Credits_k__BackingField = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,0);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 0;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$FailedRefreshStale
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, const MethodInfo* method);
// 0x44c5c20

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,System_String_o *error,
          MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (g_data_057aead5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
    g_data_057aead5 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 4;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField,error);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0x101;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 0;
  return __this;
}


