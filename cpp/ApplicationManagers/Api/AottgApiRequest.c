// Type: ApplicationManagers.Api.AottgApiRequest
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiRequest.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Api.AottgApiRequest$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiRequest___ctor (ApplicationManagers_Api_AottgApiRequest_o* __this, const MethodInfo* method);
// 0x41ac0c0

void ApplicationManagers_Api_AottgApiRequest___ctor
               (ApplicationManagers_Api_AottgApiRequest_o *__this,MethodInfo *method)

{
  if (DAT_05704d27 == '\0') {
    il2cpp_init_method_metadata(&"GET");
    DAT_05704d27 = '\x01';
  }
  (__this->fields).Method = "GET";
  il2cpp_runtime_glue(&__this->fields);
  *(undefined1 *)((long)&(__this->fields).ParseJson + 1) = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


