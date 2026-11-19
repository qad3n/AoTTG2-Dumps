// Type: ApplicationManagers.Api.AottgApiRequest
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.Api/AottgApiRequest.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiRequest$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiRequest___ctor (ApplicationManagers_Api_AottgApiRequest_o* __this, const MethodInfo* method);
// 0x5e24a80

void ApplicationManagers_Api_AottgApiRequest___ctor
               (ApplicationManagers_Api_AottgApiRequest_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548510 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    Il2CppMethodInitialized_07548510 = '\x01';
  }
  (__this->fields).Method = "GET";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Method);
  (__this->fields).ReportNetworkError = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


