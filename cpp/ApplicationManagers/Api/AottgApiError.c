// Type: ApplicationManagers.Api.AottgApiError
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiError.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiError$$Http
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiError__Http (int64_t statusCode, const MethodInfo* method);
// 0x5e2a580

System_String_o * ApplicationManagers_Api_AottgApiError__Http(int64_t statusCode,MethodInfo *method)

{
  System_String_o *pSVar1;
  int64_t iStack_8;
  
  iStack_8 = statusCode;
  if (Il2CppMethodInitialized_0754850f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"http_");
    Il2CppMethodInitialized_0754850f = '\x01';
  }
  pSVar1 = System_Int64__ToString(&iStack_8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("http_",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


