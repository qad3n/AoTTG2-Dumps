// Type: ApplicationManagers.Api.AottgApiError
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiError.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgApiError$$Http
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiError__Http (int64_t statusCode, const MethodInfo* method);
// 0x41b0bf0

System_String_o * ApplicationManagers_Api_AottgApiError__Http(int64_t statusCode,MethodInfo *method)

{
  System_String_o *pSVar1;
  int64_t iStack_8;
  
  iStack_8 = statusCode;
  if (DAT_05704d26 == '\0') {
    il2cpp_init_method_metadata(&"http_");
    DAT_05704d26 = '\x01';
  }
  pSVar1 = System_Int64__ToString((int64_t)&iStack_8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("http_",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


