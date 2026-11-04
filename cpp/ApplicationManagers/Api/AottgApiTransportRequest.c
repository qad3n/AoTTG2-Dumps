// Type: ApplicationManagers.Api.AottgApiTransportRequest
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiTransportRequest.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiTransportRequest$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiTransportRequest___ctor (ApplicationManagers_Api_AottgApiTransportRequest_o* __this, const MethodInfo* method);
// 0x1823609f0

void ApplicationManagers_Api_AottgApiTransportRequest___ctor
               (ApplicationManagers_Api_AottgApiTransportRequest_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_184347a59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    Il2CppMethodInitialized_184347a59 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields).Headers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Headers,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


