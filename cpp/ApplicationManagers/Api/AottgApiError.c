// Type: ApplicationManagers.Api.AottgApiError
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiError.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiError$$Http
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiError__Http (int64_t statusCode, const MethodInfo* method);
// 0x1823607e0

System_String_o * ApplicationManagers_Api_AottgApiError__Http(int64_t statusCode,MethodInfo *method)

{
  System_String_o *pSVar1;
  int64_t local_res8 [4];
  
  local_res8[0] = statusCode;
  if (Il2CppMethodInitialized_184347a55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"http_");
    Il2CppMethodInitialized_184347a55 = '\x01';
  }
  pSVar1 = System_Int64__ToString(local_res8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("http_",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


