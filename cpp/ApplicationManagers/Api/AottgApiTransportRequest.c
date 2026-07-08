// Type: ApplicationManagers.Api.AottgApiTransportRequest
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiTransportRequest.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgApiTransportRequest$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiTransportRequest___ctor (ApplicationManagers_Api_AottgApiTransportRequest_o* __this, const MethodInfo* method);
// 0x41afbd0

void ApplicationManagers_Api_AottgApiTransportRequest___ctor
               (ApplicationManagers_Api_AottgApiTransportRequest_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05704d2a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    DAT_05704d2a = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields).Headers = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).Headers);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


