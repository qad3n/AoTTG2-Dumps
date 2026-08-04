// Type: ApplicationManagers.Api.AottgApiRequest
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiRequest.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiRequest$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiRequest___ctor (ApplicationManagers_Api_AottgApiRequest_o* __this, const MethodInfo* method);
// 0x44c4ff0

void ApplicationManagers_Api_AottgApiRequest___ctor
               (ApplicationManagers_Api_AottgApiRequest_o *__this,MethodInfo *method)

{
  if (g_data_057aeb16 == '\0') {
    il2cpp_runtime_helper_023445d0(&"GET");
    g_data_057aeb16 = '\x01';
  }
  (__this->fields).Method = "GET";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  *(undefined1 *)((long)&(__this->fields).ParseJson + 1) = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


