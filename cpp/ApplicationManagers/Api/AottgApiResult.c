// Type: ApplicationManagers.Api.AottgApiResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiResult.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgApiResult$$get_Success
// il2cpp: bool ApplicationManagers_Api_AottgApiResult__get_Success (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x41b1490

bool_conflict
ApplicationManagers_Api_AottgApiResult__get_Success
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Success_k__BackingField);
}


// ApplicationManagers.Api.AottgApiResult$$set_Success
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_Success (ApplicationManagers_Api_AottgApiResult_o* __this, bool value, const MethodInfo* method);
// 0x41b14a0

void ApplicationManagers_Api_AottgApiResult__set_Success
               (ApplicationManagers_Api_AottgApiResult_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._Success_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_StatusCode
// il2cpp: int64_t ApplicationManagers_Api_AottgApiResult__get_StatusCode (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x41b14b0

int64_t ApplicationManagers_Api_AottgApiResult__get_StatusCode
                  (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._StatusCode_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_StatusCode
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_StatusCode (ApplicationManagers_Api_AottgApiResult_o* __this, int64_t value, const MethodInfo* method);
// 0x41b14c0

void ApplicationManagers_Api_AottgApiResult__set_StatusCode
               (ApplicationManagers_Api_AottgApiResult_o *__this,int64_t value,MethodInfo *method)

{
  (__this->fields)._StatusCode_k__BackingField = value;
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_ResponseText
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiResult__get_ResponseText (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x41b14d0

System_String_o *
ApplicationManagers_Api_AottgApiResult__get_ResponseText
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._ResponseText_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_ResponseText
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_ResponseText (ApplicationManagers_Api_AottgApiResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41b14e0

void ApplicationManagers_Api_AottgApiResult__set_ResponseText
               (ApplicationManagers_Api_AottgApiResult_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._ResponseText_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._ResponseText_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_Json
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_Api_AottgApiResult__get_Json (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x41b14f0

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_Api_AottgApiResult__get_Json
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Json_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_Json
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_Json (ApplicationManagers_Api_AottgApiResult_o* __this, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x41b1500

void ApplicationManagers_Api_AottgApiResult__set_Json
               (ApplicationManagers_Api_AottgApiResult_o *__this,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  (__this->fields)._Json_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Json_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiResult__get_Error (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x41b1510

System_String_o *
ApplicationManagers_Api_AottgApiResult__get_Error
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_Error (ApplicationManagers_Api_AottgApiResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41b1520

void ApplicationManagers_Api_AottgApiResult__set_Error
               (ApplicationManagers_Api_AottgApiResult_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_RawError
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiResult__get_RawError (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x41b1530

System_String_o *
ApplicationManagers_Api_AottgApiResult__get_RawError
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._RawError_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_RawError
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_RawError (ApplicationManagers_Api_AottgApiResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41b1540

void ApplicationManagers_Api_AottgApiResult__set_RawError
               (ApplicationManagers_Api_AottgApiResult_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._RawError_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._RawError_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_IsCanceled
// il2cpp: bool ApplicationManagers_Api_AottgApiResult__get_IsCanceled (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x41b1550

bool_conflict
ApplicationManagers_Api_AottgApiResult__get_IsCanceled
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsCanceled_k__BackingField);
}


// ApplicationManagers.Api.AottgApiResult$$set_IsCanceled
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_IsCanceled (ApplicationManagers_Api_AottgApiResult_o* __this, bool value, const MethodInfo* method);
// 0x41b1560

void ApplicationManagers_Api_AottgApiResult__set_IsCanceled
               (ApplicationManagers_Api_AottgApiResult_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._IsCanceled_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgApiResult$$Ok
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiResult__Ok (int64_t statusCode, System_String_o* responseText, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x41b0940

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiResult__Ok
          (int64_t statusCode,System_String_o *responseText,SimpleJSONFixed_JSONNode_o *json,
          MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiResult_o *__this;
  
  if (DAT_05704d28 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgApiResult);
    DAT_05704d28 = '\x01';
  }
  __this = (ApplicationManagers_Api_AottgApiResult_o *)il2cpp_runtime_glue(TypeInfo_AottgApiResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    *(undefined1 *)&(__this->fields)._Success_k__BackingField = 1;
    (__this->fields)._StatusCode_k__BackingField = statusCode;
    if (responseText == (System_String_o *)0x0) {
      responseText = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    (__this->fields)._ResponseText_k__BackingField = responseText;
    il2cpp_runtime_glue(&(__this->fields)._ResponseText_k__BackingField,responseText);
    (__this->fields)._Json_k__BackingField = json;
    il2cpp_runtime_glue(&(__this->fields)._Json_k__BackingField,json);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgApiResult$$Fail
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiResult__Fail (int64_t statusCode, System_String_o* responseText, System_String_o* error, System_String_o* rawError, bool isCanceled, const MethodInfo* method);
// 0x41b0870

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiResult__Fail
          (int64_t statusCode,System_String_o *responseText,System_String_o *error,
          System_String_o *rawError,bool_conflict isCanceled,MethodInfo *method)

{
  ApplicationManagers_Api_AottgApiResult_o *__this;
  
  if (DAT_05704d29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgApiResult);
    DAT_05704d29 = '\x01';
  }
  __this = (ApplicationManagers_Api_AottgApiResult_o *)il2cpp_runtime_glue(TypeInfo_AottgApiResult);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    *(undefined1 *)&(__this->fields)._Success_k__BackingField = 0;
    (__this->fields)._StatusCode_k__BackingField = statusCode;
    if (responseText == (System_String_o *)0x0) {
      responseText = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    (__this->fields)._ResponseText_k__BackingField = responseText;
    il2cpp_runtime_glue(&(__this->fields)._ResponseText_k__BackingField,responseText);
    (__this->fields)._Error_k__BackingField = error;
    il2cpp_runtime_glue(&(__this->fields)._Error_k__BackingField,error);
    (__this->fields)._RawError_k__BackingField = rawError;
    il2cpp_runtime_glue(&(__this->fields)._RawError_k__BackingField,rawError);
    *(char *)&(__this->fields)._IsCanceled_k__BackingField = (char)isCanceled;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Api.AottgApiResult$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiResult___ctor (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x41b1570

void ApplicationManagers_Api_AottgApiResult___ctor
               (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


