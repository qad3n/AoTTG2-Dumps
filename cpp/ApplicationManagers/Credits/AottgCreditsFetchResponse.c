// Type: ApplicationManagers.Credits.AottgCreditsFetchResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsFetchResponse.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsFetchResponse$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsFetchResponse___ctor (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, bool success, ApplicationManagers_Credits_AottgCreditsResponse_o* credits, System_String_o* error, const MethodInfo* method);
// 0x41ad460

void ApplicationManagers_Credits_AottgCreditsFetchResponse___ctor
               (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,
               bool_conflict success,ApplicationManagers_Credits_AottgCreditsResponse_o *credits,
               System_String_o *error,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(char *)&(__this->fields)._Success_k__BackingField = (char)success;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,error);
  return;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$get_Success
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Success (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, const MethodInfo* method);
// 0x41ad4b0

bool_conflict
ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Success
          (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Success_k__BackingField);
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$set_Success
// il2cpp: void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Success (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, bool value, const MethodInfo* method);
// 0x41ad4c0

void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Success
               (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._Success_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Credits (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, const MethodInfo* method);
// 0x41ad4d0

ApplicationManagers_Credits_AottgCreditsResponse_o *
ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Credits
          (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Credits_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$set_Credits
// il2cpp: void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Credits (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x41ad4e0

void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Credits
               (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,
               ApplicationManagers_Credits_AottgCreditsResponse_o *value,MethodInfo *method)

{
  (__this->fields)._Credits_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Error (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, const MethodInfo* method);
// 0x41ad4f0

System_String_o *
ApplicationManagers_Credits_AottgCreditsFetchResponse__get_Error
          (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$set_Error
// il2cpp: void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Error (ApplicationManagers_Credits_AottgCreditsFetchResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ad500

void ApplicationManagers_Credits_AottgCreditsFetchResponse__set_Error
               (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this,
               System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$Ok
// il2cpp: ApplicationManagers_Credits_AottgCreditsFetchResponse_o* ApplicationManagers_Credits_AottgCreditsFetchResponse__Ok (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x41ad510

ApplicationManagers_Credits_AottgCreditsFetchResponse_o *
ApplicationManagers_Credits_AottgCreditsFetchResponse__Ok
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this;
  
  if (DAT_05704d08 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsFetchResponse);
    DAT_05704d08 = '\x01';
  }
  __this = (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)
           il2cpp_runtime_glue(TypeInfo_AottgCreditsFetchResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(undefined1 *)&(__this->fields)._Success_k__BackingField = 1;
  (__this->fields)._Credits_k__BackingField = credits;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,credits);
  (__this->fields)._Error_k__BackingField = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,0);
  return __this;
}


// ApplicationManagers.Credits.AottgCreditsFetchResponse$$Fail
// il2cpp: ApplicationManagers_Credits_AottgCreditsFetchResponse_o* ApplicationManagers_Credits_AottgCreditsFetchResponse__Fail (System_String_o* error, const MethodInfo* method);
// 0x41ad590

ApplicationManagers_Credits_AottgCreditsFetchResponse_o *
ApplicationManagers_Credits_AottgCreditsFetchResponse__Fail
          (System_String_o *error,MethodInfo *method)

{
  bool_conflict bVar1;
  ApplicationManagers_Credits_AottgCreditsFetchResponse_o *__this;
  
  if (DAT_05704d09 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsFetchResponse);
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_05704d09 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    error = "unknown_error";
  }
  __this = (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)
           il2cpp_runtime_glue(TypeInfo_AottgCreditsFetchResponse);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(undefined1 *)&(__this->fields)._Success_k__BackingField = 0;
  (__this->fields)._Credits_k__BackingField =
       (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Credits_k__BackingField,0);
  (__this->fields)._Error_k__BackingField = error;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,error);
  return __this;
}


