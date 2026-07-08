// Type: ApplicationManagers.Credits.AottgCreditsResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsResult.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsResult$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult___ctor (ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t state, ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, bool isFromCache, bool isStale, bool isRefreshing, const MethodInfo* method);
// 0x41ad320

void ApplicationManagers_Credits_AottgCreditsResult___ctor
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,int32_t state,
               ApplicationManagers_Credits_AottgCreditsResponse_o *credits,System_String_o *error,
               bool_conflict isFromCache,bool_conflict isStale,bool_conflict isRefreshing,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = state;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,error);
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)isFromCache;
  *(char *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = (char)isStale;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) =
       (undefined1)isRefreshing;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_State
// il2cpp: int32_t ApplicationManagers_Credits_AottgCreditsResult__get_State (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x41ad390

int32_t ApplicationManagers_Credits_AottgCreditsResult__get_State
                  (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._State_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_State
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_State (ApplicationManagers_Credits_AottgCreditsResult_o* __this, int32_t value, const MethodInfo* method);
// 0x41ad3a0

void ApplicationManagers_Credits_AottgCreditsResult__set_State
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._State_k__BackingField = value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* ApplicationManagers_Credits_AottgCreditsResult__get_Credits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x41ad3b0

ApplicationManagers_Credits_AottgCreditsResponse_o *
ApplicationManagers_Credits_AottgCreditsResult__get_Credits
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Credits_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_Credits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_Credits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x41ad3c0

void ApplicationManagers_Credits_AottgCreditsResult__set_Credits
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,
               ApplicationManagers_Credits_AottgCreditsResponse_o *value,MethodInfo *method)

{
  (__this->fields)._Credits_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsResult__get_Error (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x41ad3d0

System_String_o *
ApplicationManagers_Credits_AottgCreditsResult__get_Error
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_Error
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_Error (ApplicationManagers_Credits_AottgCreditsResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ad3e0

void ApplicationManagers_Credits_AottgCreditsResult__set_Error
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsFromCache
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsFromCache (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x41ad3f0

bool_conflict
ApplicationManagers_Credits_AottgCreditsResult__get_IsFromCache
          (ApplicationManagers_Credits_AottgCreditsResult_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsFromCache_k__BackingField);
}


// ApplicationManagers.Credits.AottgCreditsResult$$set_IsFromCache
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResult__set_IsFromCache (ApplicationManagers_Credits_AottgCreditsResult_o* __this, bool value, const MethodInfo* method);
// 0x41ad400

void ApplicationManagers_Credits_AottgCreditsResult__set_IsFromCache
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsStale
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsStale (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x41ad410

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
// 0x41ad420

void ApplicationManagers_Credits_AottgCreditsResult__set_IsStale
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = (char)value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_IsRefreshing
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_IsRefreshing (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x41ad430

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
// 0x41ad440

void ApplicationManagers_Credits_AottgCreditsResult__set_IsRefreshing
               (ApplicationManagers_Credits_AottgCreditsResult_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = (char)value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsResult$$get_HasCredits
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsResult__get_HasCredits (ApplicationManagers_Credits_AottgCreditsResult_o* __this, const MethodInfo* method);
// 0x41ad450

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
// 0x41ac9b0

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__LoadingNoCache(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (DAT_05704d03 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
    DAT_05704d03 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 0;
  (__this->fields)._Credits_k__BackingField =
       (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,0);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,0);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 1;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$ReadyFresh
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, bool isFromCache, const MethodInfo* method);
// 0x41ac8b0

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__ReadyFresh
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,bool_conflict isFromCache,
          MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (DAT_05704d04 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
    DAT_05704d04 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 1;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,0);
  *(char *)&(__this->fields)._IsFromCache_k__BackingField = (char)isFromCache;
  *(undefined2 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 1) = 0;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$ReadyStaleRefreshing
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x41ac930

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__ReadyStaleRefreshing
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (DAT_05704d05 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
    DAT_05704d05 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 2;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,0);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0x101;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 1;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$FailedNoCache
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache (System_String_o* error, const MethodInfo* method);
// 0x41acd70

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__FailedNoCache
          (System_String_o *error,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (DAT_05704d06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
    DAT_05704d06 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 3;
  (__this->fields)._Credits_k__BackingField =
       (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,0);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,error);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 0;
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsResult$$FailedRefreshStale
// il2cpp: ApplicationManagers_Credits_AottgCreditsResult_o* ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, const MethodInfo* method);
// 0x41accf0

ApplicationManagers_Credits_AottgCreditsResult_o *
ApplicationManagers_Credits_AottgCreditsResult__FailedRefreshStale
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,System_String_o *error,
          MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResult_o *__this;
  
  if (DAT_05704d07 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
    DAT_05704d07 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsResult_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = 4;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,error);
  *(undefined2 *)&(__this->fields)._IsFromCache_k__BackingField = 0x101;
  *(undefined1 *)((long)&(__this->fields)._IsFromCache_k__BackingField + 2) = 0;
  return __this;
}


