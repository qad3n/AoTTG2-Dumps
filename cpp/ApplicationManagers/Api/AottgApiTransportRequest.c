// Type: ApplicationManagers.Api.AottgApiTransportRequest
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiTransportRequest.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiTransportRequest$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiTransportRequest___ctor (ApplicationManagers_Api_AottgApiTransportRequest_o* __this, const MethodInfo* method);
// 0x44cd550

void ApplicationManagers_Api_AottgApiTransportRequest___ctor
               (ApplicationManagers_Api_AottgApiTransportRequest_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057aeb19 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    g_data_057aeb19 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields).Headers = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Headers);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


