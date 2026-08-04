// Type: ApplicationManagers.Api.AottgApiError
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiError.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiError$$Http
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiError__Http (int64_t statusCode, const MethodInfo* method);
// 0x44ce570

System_String_o * ApplicationManagers_Api_AottgApiError__Http(int64_t statusCode,MethodInfo *method)

{
  System_String_o *pSVar1;
  int64_t iStack_8;
  
  iStack_8 = statusCode;
  if (g_data_057aeb15 == '\0') {
    il2cpp_runtime_helper_023445d0(&"http_");
    g_data_057aeb15 = '\x01';
  }
  pSVar1 = System_Int64__ToString((int64_t)&iStack_8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0(_DAT_055de1b0,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


